// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#include "pch.h"

#ifndef WINDOWS_PHONE

#include "CanvasPrintDocument.h"

#include "CanvasPreviewEventArgs.h"
#include "CanvasPrintEventArgs.h"
#include "CanvasPrintTaskOptionsChangedEventArgs.h"

using namespace ABI::Microsoft::Graphics::Canvas::Printing;


ActivatableClassWithFactory(CanvasPrintDocument, CanvasPrintDocumentFactory);


//
// CanvasPrintDocumentFactory implementation
//


IFACEMETHODIMP CanvasPrintDocumentFactory::ActivateInstance(IInspectable** instance)
{
    return ExceptionBoundary(
        [&]
        {
            auto adapter = CanvasPrintDocumentAdapter::GetInstance();
            auto device = adapter->GetSharedDevice();
            auto doc = Make<CanvasPrintDocument>(adapter, device);
            CheckMakeResult(doc);

            ThrowIfFailed(doc.CopyTo(instance));
        });
}


IFACEMETHODIMP CanvasPrintDocumentFactory::CreateWithDevice(
    ICanvasDevice* device,
    ICanvasPrintDocument** instance)
{
    return ExceptionBoundary(
        [&]
        {
            CheckInPointer(device);
            CheckAndClearOutPointer(instance);

            auto adapter = CanvasPrintDocumentAdapter::GetInstance();
            auto doc = Make<CanvasPrintDocument>(adapter, device);
            CheckMakeResult(doc);

            ThrowIfFailed(doc.CopyTo(instance));
        });
}


//
// CanvasPrintDocument implementation
//

static ComPtr<ICoreDispatcher> GetDispatcher(CanvasPrintDocumentAdapter* adapter)
{
    auto dispatcher = adapter->GetDispatcherForCurrentThread();
    if (!dispatcher)
        ThrowHR(RPC_E_WRONG_THREAD, Strings::CanvasPrintDocumentMustBeConstructedOnUIThread);
    return dispatcher;
}


CanvasPrintDocument::CanvasPrintDocument(
    std::shared_ptr<CanvasPrintDocumentAdapter> adapter,
    ComPtr<ICanvasDevice> const& device)
    : m_scheduler(GetDispatcher(adapter.get()))
    , m_displayDpi(adapter->GetLogicalDpi())
    , m_waitForUIThread(adapter->ShouldWaitForUIThread())
    , m_device(device.Get())
    , m_eventSources(std::make_shared<EventSources>())
    , m_newPreviewPageNumber(1)
{
}


IFACEMETHODIMP CanvasPrintDocument::add_PrintTaskOptionsChanged(CanvasPrintTaskOptionsChangedHandler* value, EventRegistrationToken* token)
{
    return ExceptionBoundary(
        [&]
        {
            CheckInPointer(value);
            CheckInPointer(token);

            ThrowIfFailed(GetEventSources()->PrintTaskOptionsChanged.Add(value, token));
        });
}


IFACEMETHODIMP CanvasPrintDocument::remove_PrintTaskOptionsChanged(EventRegistrationToken token)
{
    return ExceptionBoundary(
        [&]
        {
            ThrowIfFailed(GetEventSources()->PrintTaskOptionsChanged.Remove(token));
        });
}


IFACEMETHODIMP CanvasPrintDocument::add_Preview(CanvasPreviewHandler* value, EventRegistrationToken* token)
{
    return ExceptionBoundary(
        [&]
        {
            CheckInPointer(value);
            CheckInPointer(token);

            ThrowIfFailed(GetEventSources()->Preview.Add(value, token));
        });
}


IFACEMETHODIMP CanvasPrintDocument::remove_Preview(EventRegistrationToken token)
{
    return ExceptionBoundary(
        [&]
        {
            ThrowIfFailed(GetEventSources()->Preview.Remove(token));
        });
}


IFACEMETHODIMP CanvasPrintDocument::add_Print(CanvasPrintHandler* value, EventRegistrationToken* token)
{
    return ExceptionBoundary(
        [&]
        {
            CheckInPointer(value);
            CheckInPointer(token);

            ThrowIfFailed(GetEventSources()->Print.Add(value, token));
        });
}


IFACEMETHODIMP CanvasPrintDocument::remove_Print(EventRegistrationToken token)
{
    return ExceptionBoundary(
        [&]
        {
            ThrowIfFailed(GetEventSources()->Print.Remove(token));
        });
}


IFACEMETHODIMP CanvasPrintDocument::InvalidatePreview()
{
    return ExceptionBoundary(
        [&]
        {
            // We take care not to hold the lock while calling methods on
            // m_previewTarget since it may potentially call back to us on a
            // different thread.

            auto previewTarget = GetPreviewTarget();

            if (previewTarget)
                ThrowIfFailed(previewTarget->InvalidatePreview());
        });
}


IFACEMETHODIMP CanvasPrintDocument::SetPageCount(uint32_t count)
{
    return SetJobPageCount(PageCountType::FinalPageCount, count);
}


IFACEMETHODIMP CanvasPrintDocument::SetIntermediatePageCount(uint32_t count)
{
    return SetJobPageCount(PageCountType::IntermediatePageCount, count);
}


HRESULT CanvasPrintDocument::SetJobPageCount(PageCountType type, uint32_t count)
{
    return ExceptionBoundary(
        [&]
        {
            // We take care not to hold the lock while calling methods on
            // m_previewTarget since it may potentially call back to us on a
            // different thread.

            auto previewTarget = GetPreviewTarget();

            if (!previewTarget)
                ThrowHR(E_FAIL, Strings::SetPageCountCalledBeforePreviewing);

            ThrowIfFailed(previewTarget->SetJobPageCount(type, count));
        });
}


IFACEMETHODIMP CanvasPrintDocument::Close()
{
    return ExceptionBoundary(
        [&]
        {
            Lock lock(m_mutex);

            m_device.Close();
            m_previewTarget.Reset();
            m_eventSources.reset();
            m_printTaskOptions.Reset();
        });
}


IFACEMETHODIMP CanvasPrintDocument::get_Device(ICanvasDevice** value)
{
    return ExceptionBoundary(
        [&]
        {
            CheckAndClearOutPointer(value);

            Lock lock(m_mutex);

            ThrowIfFailed(m_device.EnsureNotClosed().CopyTo(value));
        });
}


IFACEMETHODIMP CanvasPrintDocument::Paginate(uint32_t currentPreviewPageNumber, IInspectable* optionsAsInspectable)
{
    return ExceptionBoundary(
        [&]
        {
            auto printTaskOptions = As<IPrintTaskOptionsCore>(optionsAsInspectable);

            RunOnUIThread([=] (CanvasPrintDocument* doc, DeferrableTask* task) { doc->PaginateImpl(task, currentPreviewPageNumber, printTaskOptions); });
        });
}


void CanvasPrintDocument::PaginateImpl(
    DeferrableTask* task,
    uint32_t currentPreviewPageNumber,
    ComPtr<IPrintTaskOptionsCore> const& printTaskOptions)
{
    //
    // The print system uses this magic number to indicate that no page is
    // currently being displayed; we convert this to a 1 since we don't want
    // these magic numbers to leak.
    //
    if (currentPreviewPageNumber == JOB_PAGE_APPLICATION_DEFINED)
        currentPreviewPageNumber = 1;

    //
    // Store the print task options so we can pass it to the Preview event
    // handler.
    //
    m_printTaskOptions = printTaskOptions;

    auto args = Make<CanvasPrintTaskOptionsChangedEventArgs>(task, currentPreviewPageNumber, printTaskOptions);
    CheckMakeResult(args);

    task->SetCompletionFn(
        [=]
        {
            //
            // When the event has completed, we read out the
            // NewPreviewPageNumber so that it can be passed to the Preview
            // event handler.
            //
            m_newPreviewPageNumber = args->GetNewPreviewPageNumber();
        });

    ThrowIfFailed(GetEventSources()->PrintTaskOptionsChanged.InvokeAll(this, args.Get()));

    task->NonDeferredComplete();
}


IFACEMETHODIMP CanvasPrintDocument::MakePage(uint32_t pageNumber, float width, float height)
{
    return ExceptionBoundary(
        [&]
        {
            RunOnUIThread([=] (CanvasPrintDocument* doc, DeferrableTask* task) { doc->MakePageImpl(task, pageNumber, width, height); });
        });
}


void CanvasPrintDocument::MakePageImpl(DeferrableTask* task, uint32_t pageNumber, float previewWidth, float previewHeight)
{
    //
    // The application defined page number was set by the
    // PrintTaskOptionsChanged event handler.
    //
    if (pageNumber == JOB_PAGE_APPLICATION_DEFINED)
        pageNumber = m_newPreviewPageNumber;

    //
    // Create the render target
    //
    PrintPageDescription pageDesc;
    ThrowIfFailed(m_printTaskOptions->GetPageDescription(pageNumber, &pageDesc));

    auto dpi = CalculateDpiForPreviewBitmap(Size{ previewWidth, previewHeight }, pageDesc.PageSize);

    auto renderTarget = CanvasRenderTarget::CreateNew(
        m_device.EnsureNotClosed().Get(),
        pageDesc.PageSize.Width,
        pageDesc.PageSize.Height,
        dpi,
        PIXEL_FORMAT(B8G8R8A8UIntNormalized),
        CanvasAlphaMode::Premultiplied);

    ComPtr<ICanvasDrawingSession> ds;
    ThrowIfFailed(renderTarget->CreateDrawingSession(&ds));

    auto white = Color{ 255, 255, 255, 255 };
    ThrowIfFailed(ds->Clear(white));

    //
    // Raise the Preview event; this is where the app gets to draw the print
    // preview
    //
    auto args = Make<CanvasPreviewEventArgs>(task, pageNumber, m_printTaskOptions, ds);
    CheckMakeResult(args);

    task->SetCompletionFn(
        [=]
        {
            ThrowIfFailed(As<IClosable>(ds)->Close());

            //
            // Show the preview
            //
            auto d2dBitmap = renderTarget->GetResource();
            ComPtr<IDXGISurface> dxgiSurface;
            ThrowIfFailed(d2dBitmap->GetSurface(&dxgiSurface));

            auto previewTarget = GetPreviewTarget();
            auto hr = previewTarget->DrawPage(pageNumber, dxgiSurface.Get(), dpi, dpi);

            //
            // DrawPage() is extremely picky about surface sizes, and will return
            // E_INVALIDARG if the surface doesn't match its requirements.  We swallow
            // these errors as there's not much we can do in response.
            //
            if (FAILED(hr) && hr != E_INVALIDARG)
                ThrowHR(hr);
        });

    ThrowIfFailed(GetEventSources()->Preview.InvokeAll(this, args.Get()));

    task->NonDeferredComplete();
}


float CanvasPrintDocument::CalculateDpiForPreviewBitmap(Size previewSize, Size pageSize) const
{
    //
    // We assume/hope that the print preview UI is running on a display set to
    // the same DPI that this display is set to, and so the m_displayDpi value
    // we grabbed on construction matches the same one that the print preview
    // control is UI.
    //
    int previewPixelsWidth = DipsToPixels(previewSize.Width, m_displayDpi, CanvasDpiRounding::Round);
    int previewPixelsHeight = DipsToPixels(previewSize.Height, m_displayDpi, CanvasDpiRounding::Round);

    //
    // We want to figure out which DPI will make pageSize be same number of
    // pixels as previewPixelsWidth/Height.
    //
    // There's actually two possible answers here, one for width and another for
    // height.  We'd hope that previewSize has the same aspect ratio as
    // pageSize, so the calculation below should produce the same answer.  To be
    // safe we'll do both and pick one of them.
    //
    float dpiX = (previewPixelsWidth / pageSize.Width) * DEFAULT_DPI;
    float dpiY = (previewPixelsHeight / pageSize.Height) * DEFAULT_DPI;

    return std::min(dpiX, dpiY);
}


IFACEMETHODIMP CanvasPrintDocument::GetPreviewPageCollection(IPrintDocumentPackageTarget* target, IPrintPreviewPageCollection** collection)
{
    return ExceptionBoundary(
        [&]
        {
            CheckInPointer(target);
            CheckAndClearOutPointer(collection);

            // This is our first chance to get the preview target.  We take care
            // to not hold the mutex while we call this external method since it
            // may call back into us on a different thread.

            ComPtr<IPrintPreviewDxgiPackageTarget> previewTarget;
            ThrowIfFailed(target->GetPackageTarget(ID_PREVIEWPACKAGETARGET_DXGI, IID_PPV_ARGS(&previewTarget)));

            SetPreviewTarget(std::move(previewTarget));

            // This CanvasPrintDocument is also the print preview page
            // collection.

            ComPtr<CanvasPrintDocument> me(this);
            ThrowIfFailed(me.CopyTo(collection));
        });
}


IFACEMETHODIMP CanvasPrintDocument::MakeDocument(
    IInspectable* optionsAsInspectable,
    IPrintDocumentPackageTarget* target)
{
    return ExceptionBoundary(
        [&]
        {
            auto printTaskOptions = As<IPrintTaskOptionsCore>(optionsAsInspectable);

            RunOnUIThread([=] (CanvasPrintDocument* doc, DeferrableTask* task) { doc->MakeDocumentImpl(task, printTaskOptions, target); });
        });
}


void CanvasPrintDocument::MakeDocumentImpl(
    DeferrableTask* task,
    ComPtr<IPrintTaskOptionsCore> const& printTaskOptions,
    ComPtr<IPrintDocumentPackageTarget> const& target)
{
    //
    // The initial DPI is determined by looking at the DPI in the print task
    // options.  Although these appear to allow for a different DPI per-page, we
    // assume that all pages have the same DPI.  We also assume that DpiX ==
    // DpiY.
    //
    PrintPageDescription pageDesc;
    ThrowIfFailed(printTaskOptions->GetPageDescription(1U, &pageDesc));

    auto dpi = static_cast<float>(pageDesc.DpiX); // PrintPageDescription stores DPI as a uint32_t...

    //
    // Raise the Print event
    //
    auto args = Make<CanvasPrintEventArgs>(task, m_device.EnsureNotClosed(), target, printTaskOptions, dpi);
    CheckMakeResult(args);

    task->SetCompletionFn(
        [=]
        {
            //
            // Tell the args we're done so it can close its print control
            //
            args->EndPrinting();
        });

    ThrowIfFailed(GetEventSources()->Print.InvokeAll(this, args.Get()));

    task->NonDeferredComplete();
}


ComPtr<IPrintPreviewDxgiPackageTarget> CanvasPrintDocument::GetPreviewTarget()
{
    // We take care not to hold the lock while calling methods on
    // m_previewTarget since it may potentially call back to us on a different
    // thread, leading to deadlock.
    //
    // However, we don't want multiple threads accessing m_previewTarget
    // simultaneously, so we make a copy of it while holding the lock.
    Lock lock(m_mutex);
    return m_previewTarget;
}


void CanvasPrintDocument::SetPreviewTarget(ComPtr<IPrintPreviewDxgiPackageTarget>&& previewTarget)
{
    Lock lock(m_mutex);

    assert(!m_previewTarget);
    m_previewTarget = std::move(previewTarget);
}


std::shared_ptr<CanvasPrintDocument::EventSources> CanvasPrintDocument::GetEventSources()
{
    Lock lock(m_mutex);

    if (!m_eventSources)
        ThrowHR(RO_E_CLOSED);

    return m_eventSources;
}


void CanvasPrintDocument::RunOnUIThread(std::function<void(CanvasPrintDocument*, DeferrableTask*)>&& fn)
{
    auto weakSelf = AsWeak(this);

    auto task = m_scheduler.CreateTask(
        [weakSelf, fn](DeferrableTask* task) mutable
        {
            auto strongSelf = LockWeakRef<ICanvasPrintDocument>(weakSelf);
            auto self = static_cast<CanvasPrintDocument*>(strongSelf.Get());

            if (self)
                fn(self, task);
        });

    auto future = task->GetFuture();
    m_scheduler.Schedule(std::move(task));

    if (m_waitForUIThread)
    {
        // If the task failed then the exception will be stashed in the future.
        // Calling get() will cause it to rethrow the exception.
        future.get();
    }
}

#endif
