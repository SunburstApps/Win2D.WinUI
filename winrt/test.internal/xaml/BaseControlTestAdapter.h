// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

#include <lib/xaml/RecreatableDeviceManager.impl.h>

#include "mocks/MockCanvasDeviceActivationFactory.h"
#include "mocks/MockWindow.h"
#include "StubDispatcher.h"

template<typename TRAITS>
class BaseControlTestAdapter : public TRAITS::adapter_t
{
    ComPtr<StubDispatcher> m_uiThreadDispatcher;
    ComPtr<MockWindow> m_mockWindow;
    bool m_hasUIThreadAccess;

public:
    ComPtr<MockEventSource<DpiChangedEventHandler>> DpiChangedEventSource;
    ComPtr<MockEventSource<IEventHandler<SuspendingEventArgs*>>> SuspendingEventSource;
    ComPtr<MockEventSource<IEventHandler<IInspectable*>>> ResumingEventSource;
    CALL_COUNTER_WITH_MOCK(CreateRecreatableDeviceManagerMethod, std::unique_ptr<IRecreatableDeviceManager<TRAITS>>(IInspectable*));

    ComPtr<MockCanvasDeviceActivationFactory> DeviceFactory;

    float LogicalDpi;
    bool DesignModeEnabled;

    BaseControlTestAdapter()
        : DeviceFactory(Make<MockCanvasDeviceActivationFactory>())
        , m_uiThreadDispatcher(Make<StubDispatcher>())
        , m_mockWindow(Make<MockWindow>())
        , m_hasUIThreadAccess(true)
        , DpiChangedEventSource(Make<MockEventSource<DpiChangedEventHandler>>(L"DpiChanged"))
        , SuspendingEventSource(Make<MockEventSource<IEventHandler<SuspendingEventArgs*>>>(L"Suspending"))
        , ResumingEventSource(Make<MockEventSource<IEventHandler<IInspectable*>>>(L"Resuming"))
        , LogicalDpi(DEFAULT_DPI)
        , DesignModeEnabled(false)
    {
        CreateRecreatableDeviceManagerMethod.AllowAnyCall();
        DeviceFactory->ActivateInstanceMethod.AllowAnyCall();

        DeviceFactory->CreateWithForceSoftwareRendererOptionMethod.AllowAnyCall(
            [&](boolean, ICanvasDevice** device)
            {
                auto stubDevice = Make<StubCanvasDevice>();
                stubDevice.CopyTo(device);
                return S_OK;
            });

        m_uiThreadDispatcher->get_HasThreadAccessMethod.AllowAnyCall(
            [=](boolean* out)
            {
                *out = m_hasUIThreadAccess;
                
                return S_OK;
            });

        m_mockWindow->get_DispatcherMethod.AllowAnyCall(
            [=](ICoreDispatcher** out)
            {
                return m_uiThreadDispatcher.CopyTo(out);
            });
    }

    void TickUiThread()
    {
        m_uiThreadDispatcher->TickAll();
    }

    bool HasPendingActionsOnUiThread()
    {
        return m_uiThreadDispatcher->HasPendingActions();
    }

    virtual bool IsDesignModeEnabled() override
    {
        return DesignModeEnabled;
    }

    virtual ComPtr<IInspectable> CreateUserControl(IInspectable* canvasControl) override
    {
        return As<IInspectable>(Make<StubUserControlWithXamlRoot>());
    }

    virtual RegisteredEvent AddApplicationSuspendingCallback(IEventHandler<SuspendingEventArgs*>* value) override
    {
        return SuspendingEventSource->Add(value);
    }

    virtual RegisteredEvent AddApplicationResumingCallback(IEventHandler<IInspectable*>* value) override
    {
        return ResumingEventSource->Add(value);
    }

    virtual float GetLogicalDpi() override
    {
        return LogicalDpi;
    }

    virtual RegisteredEvent AddDpiChangedCallback(DpiChangedEventHandler* value) override
    {
        return DpiChangedEventSource->Add(value);
    }

    virtual RegisteredEvent AddVisibilityChangedCallback(IWindowVisibilityChangedEventHandler* value, IWindow* window) override
    {
        MockWindow* mockWindow = static_cast<MockWindow*>(window);
        return mockWindow->VisibilityChangedEventSource->Add(value);
    }

    virtual RegisteredEvent AddXamlRootChangedCallback(XamlRootChangedEventHandler* handler, IXamlRoot* xamlRoot) override
    {
        return RegisteredEvent(
            xamlRoot,
            &IXamlRoot::add_Changed,
            &IXamlRoot::remove_Changed,
            handler);
    }

    void RaiseDpiChangedEvent()
    {
        ThrowIfFailed(DpiChangedEventSource->InvokeAll(nullptr, nullptr));
    }

    virtual ComPtr<IWindow> GetWindowOfCurrentThread() override
    {
        return m_mockWindow;
    }

    ComPtr<MockWindow> GetCurrentMockWindow()
    {
        return m_mockWindow;
    }

    virtual std::unique_ptr<IRecreatableDeviceManager<TRAITS>> CreateRecreatableDeviceManager(IInspectable* parentControl) override
    {
        auto manager = CreateRecreatableDeviceManagerMethod.WasCalled(parentControl);
        if (manager)
            return manager;

        return std::make_unique<RecreatableDeviceManager<TRAITS>>(DeviceFactory.Get(), parentControl);
    }

    void SetHasUIThreadAccess(bool value)
    {
        m_hasUIThreadAccess = value;
    }
};

#define VERIFY_THREADING_RESTRICTION(EXPECTED_HR, FUNC) \
    f.Adapter->SetHasUIThreadAccess(false);             \
    Assert::AreEqual(EXPECTED_HR, FUNC);                \
    f.Adapter->SetHasUIThreadAccess(true);              \
    Assert::AreEqual(S_OK, FUNC);                      
