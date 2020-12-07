// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace UI { namespace Xaml
{
#ifdef WINUI
    using namespace ABI::Microsoft::UI::Xaml::Media;
#else
    using namespace ABI::Windows::UI::Xaml::Media;
#endif

    class IImageControlMixInAdapter
    {
    public:
        virtual RegisteredEvent AddSurfaceContentsLostCallback(IEventHandler<IInspectable*>*) = 0;
        virtual ComPtr<IImage> CreateImageControl() = 0;
        virtual void DisableAccessibilityView(IImage*) = 0;
    };

    
    class ImageControlMixIn
#ifdef WINUI
        : public Implements<ABI::Microsoft::UI::Xaml::IFrameworkElementOverrides>
#else
        : public Implements<ABI::Windows::UI::Xaml::IFrameworkElementOverrides>
#endif
    {
        RegisteredEvent m_surfaceContentsLostEventRegistration;

        ComPtr<IImage> m_imageControl;
        IUserControl* m_composableBase;

    public:
        ImageControlMixIn(IUserControl* userControl, IImageControlMixInAdapter* adapter);
        
        virtual ~ImageControlMixIn() = default;
        
        //
        // IFrameworkElementOverrides
        //

        IFACEMETHODIMP MeasureOverride(
            Size availableSize, 
            Size* returnValue) override;

        IFACEMETHODIMP ArrangeOverride(
            Size finalSize, 
            Size* returnValue) override;

        IFACEMETHODIMP OnApplyTemplate() override;

#ifdef WINUI
        IFACEMETHODIMP GoToElementStateCore(HSTRING stateName, ::boolean useTransitions, ::boolean* result) override;
#endif

    protected:
        template<typename CONTROL>
        void RegisterEventHandlers(IImageControlMixInAdapter* adapter);

        template<typename CONTROL>
        HRESULT OnSurfaceContentsLost(IInspectable*, IInspectable*);
        
        void UnregisterEventHandlers();

        void SetImageSource(IImageSource* imageSource);
    };

    
    template<typename CONTROL>
    inline void ImageControlMixIn::RegisterEventHandlers(IImageControlMixInAdapter* adapter)
    {
#ifdef WINUI
        using namespace ABI::Microsoft::UI::Xaml::Controls;
#else
        using namespace ABI::Windows::UI::Xaml::Controls;
#endif
        using namespace Windows::Foundation;

        auto callback = Callback<IEventHandler<IInspectable*>>(this, &ImageControlMixIn::OnSurfaceContentsLost<CONTROL>);
        CheckMakeResult(callback);

        m_surfaceContentsLostEventRegistration = adapter->AddSurfaceContentsLostCallback(callback.Get());
    }


    template<typename CONTROL>
    inline HRESULT ImageControlMixIn::OnSurfaceContentsLost(IInspectable*, IInspectable*)
    {
        return ExceptionBoundary(
            [&]
            {
                static_cast<CONTROL*>(this)->ResetRenderTarget();
            });
    }


    class ImageControlMixInAdapter : public virtual IImageControlMixInAdapter
    {
        ComPtr<IActivationFactory> m_imageControlFactory;
        ComPtr<ICompositionTargetStatics> m_compositionTargetStatics;

    public:
        ImageControlMixInAdapter()
        {
            ThrowIfFailed(GetActivationFactory(
#ifdef WINUI
                HStringReference(RuntimeClass_Microsoft_UI_Xaml_Controls_Image).Get(),
#else
                HStringReference(RuntimeClass_Windows_UI_Xaml_Controls_Image).Get(),
#endif
                &m_imageControlFactory));

            ThrowIfFailed(GetActivationFactory(
#ifdef WINUI
                HStringReference(RuntimeClass_Microsoft_UI_Xaml_Media_CompositionTarget).Get(),
#else
                HStringReference(RuntimeClass_Windows_UI_Xaml_Media_CompositionTarget).Get(),
#endif
               &m_compositionTargetStatics));            
        }

        virtual ~ImageControlMixInAdapter() = default;

        virtual RegisteredEvent AddSurfaceContentsLostCallback(IEventHandler<IInspectable*>* handler) override
        {
            return RegisteredEvent(
                m_compositionTargetStatics.Get(),
                &ICompositionTargetStatics::add_SurfaceContentsLost,
                &ICompositionTargetStatics::remove_SurfaceContentsLost,
                handler);
        }

        virtual ComPtr<IImage> CreateImageControl() override 
        {
            ComPtr<IInspectable> inspectableImage;
            ThrowIfFailed(m_imageControlFactory->ActivateInstance(&inspectableImage));
            
            ComPtr<IImage> image;
            ThrowIfFailed(inspectableImage.As(&image));
            
            return image;
        }

        virtual void DisableAccessibilityView(IImage* imageControl) override
        {
#ifdef WINUI
            using namespace ::ABI::Microsoft::UI::Xaml::Automation;
            ComPtr<IAutomationPropertiesStatics> automationProperties;
            ThrowIfFailed(GetActivationFactory(HStringReference(RuntimeClass_Microsoft_UI_Xaml_Automation_AutomationProperties).Get(), &automationProperties));
#else
            using namespace ::ABI::Windows::UI::Xaml::Automation;
            ComPtr<IAutomationPropertiesStatics2> automationProperties;
            ThrowIfFailed(GetActivationFactory(HStringReference(RuntimeClass_Windows_UI_Xaml_Automation_AutomationProperties).Get(), &automationProperties));
#endif

            automationProperties->SetAccessibilityView(As<IDependencyObject>(imageControl).Get(), Peers::AccessibilityView::AccessibilityView_Raw);
        }

        ICompositionTargetStatics* GetCompositionTargetStatics()
        {
            return m_compositionTargetStatics.Get();
        }
    };

}}}}}}
