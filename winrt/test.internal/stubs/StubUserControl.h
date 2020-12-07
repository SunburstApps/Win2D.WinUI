// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

namespace canvas
{
    using namespace ABI::Windows::UI::Xaml::Controls;
    using namespace ABI::Windows::UI::Xaml;

    class StubUserControl : public RuntimeClass<IUserControl, IFrameworkElement>
    {
        Size m_actualSize;
        ComPtr<IUIElement> m_content;

    public:
        ComPtr<MockEventSource<IRoutedEventHandler>> LoadedEventSource;
        ComPtr<MockEventSource<IRoutedEventHandler>> UnloadedEventSource;
        ComPtr<MockEventSource<ISizeChangedEventHandler>> SizeChangedEventSource;

        CALL_COUNTER_WITH_MOCK(get_ParentMethod, HRESULT(IDependencyObject**));

        StubUserControl()
            : m_actualSize(Size{128.0f, 128.0f})
            , LoadedEventSource(Make<MockEventSource<IRoutedEventHandler>>(L"Loaded"))
            , UnloadedEventSource(Make<MockEventSource<IRoutedEventHandler>>(L"Unloaded"))
            , SizeChangedEventSource(Make<MockEventSource<ISizeChangedEventHandler>>(L"SizeChanged"))
        {
            get_ParentMethod.AllowAnyCall();                
        }

        void Resize(Size newSize)
        {
            auto previousSize = m_actualSize;
            m_actualSize = newSize;

            class SizeChangedEventArgs : public RuntimeClass<ISizeChangedEventArgs>
            {
                Size m_previousSize;
                Size m_newSize;

            public:
                SizeChangedEventArgs(Size previousSize, Size newSize)
                    : m_previousSize(previousSize)
                    , m_newSize(newSize)
                {}

                IFACEMETHODIMP get_PreviousSize(Size* value)
                {
                    *value = m_previousSize;
                    return S_OK;
                }

                IFACEMETHODIMP get_NewSize(Size* value)
                {
                    *value = m_newSize;
                    return S_OK;
                }
            };

            auto args = Make<SizeChangedEventArgs>(previousSize, m_actualSize);
            SizeChangedEventSource->InvokeAll(nullptr, args.Get());
        }

        IFACEMETHODIMP get_Content(IUIElement** value) override
        {
            return m_content.CopyTo(value);
        }

        IFACEMETHODIMP put_Content(IUIElement* value) override
        {
            m_content = value;
            return S_OK;
        }

        IFACEMETHODIMP get_Triggers(ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CXaml__CTriggerBase_t **) override 
        {
            Assert::Fail(L"Unexpected call to get_Triggers");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_Resources(IResourceDictionary **) override 
        {
            Assert::Fail(L"Unexpected call to get_Resources");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_Resources(IResourceDictionary *) override 
        {
            Assert::Fail(L"Unexpected call to put_Resources");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_Tag(IInspectable **) override 
        {
            Assert::Fail(L"Unexpected call to get_Tag");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_Tag(IInspectable *) override 
        {
            Assert::Fail(L"Unexpected call to put_Tag");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_Language(HSTRING *) override 
        {
            Assert::Fail(L"Unexpected call to get_Language");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_Language(HSTRING) override 
        {
            Assert::Fail(L"Unexpected call to put_Language");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_ActualWidth(double* value) override
        {
            *value = m_actualSize.Width;
            return S_OK;
        }

        IFACEMETHODIMP get_ActualHeight(double* value) override 
        {
            *value = m_actualSize.Height;
            return S_OK;
        }

        IFACEMETHODIMP get_Width(DOUBLE *) override 
        {
            Assert::Fail(L"Unexpected call to get_Width");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_Width(DOUBLE) override 
        {
            Assert::Fail(L"Unexpected call to put_Width");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_Height(DOUBLE *) override 
        {
            Assert::Fail(L"Unexpected call to get_Height");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_Height(DOUBLE) override 
        {
            Assert::Fail(L"Unexpected call to put_Height");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_MinWidth(DOUBLE *) override 
        {
            Assert::Fail(L"Unexpected call to get_MinWidth");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_MinWidth(DOUBLE) override 
        {
            Assert::Fail(L"Unexpected call to put_MinWidth");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_MaxWidth(DOUBLE *) override 
        {
            Assert::Fail(L"Unexpected call to get_MaxWidth");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_MaxWidth(DOUBLE) override 
        {
            Assert::Fail(L"Unexpected call to put_MaxWidth");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_MinHeight(DOUBLE *) override 
        {
            Assert::Fail(L"Unexpected call to get_MinHeight");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_MinHeight(DOUBLE) override 
        {
            Assert::Fail(L"Unexpected call to put_MinHeight");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_MaxHeight(DOUBLE *) override 
        {
            Assert::Fail(L"Unexpected call to get_MaxHeight");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_MaxHeight(DOUBLE) override 
        {
            Assert::Fail(L"Unexpected call to put_MaxHeight");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_HorizontalAlignment(HorizontalAlignment *) override 
        {
            Assert::Fail(L"Unexpected call to get_HorizontalAlignment");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_HorizontalAlignment(HorizontalAlignment) override 
        {
            Assert::Fail(L"Unexpected call to put_HorizontalAlignment");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_VerticalAlignment(VerticalAlignment *) override 
        {
            Assert::Fail(L"Unexpected call to get_VerticalAlignment");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_VerticalAlignment(VerticalAlignment) override 
        {
            Assert::Fail(L"Unexpected call to put_VerticalAlignment");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_Margin(Thickness *) override 
        {
            Assert::Fail(L"Unexpected call to get_Margin");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_Margin(Thickness) override 
        {
            Assert::Fail(L"Unexpected call to put_Margin");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_Name(HSTRING *) override 
        {
            Assert::Fail(L"Unexpected call to get_Name");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_Name(HSTRING) override 
        {
            Assert::Fail(L"Unexpected call to put_Name");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_BaseUri(ABI::Windows::Foundation::IUriRuntimeClass **) override 
        {
            Assert::Fail(L"Unexpected call to get_BaseUri");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_DataContext(IInspectable **) override 
        {
            Assert::Fail(L"Unexpected call to get_DataContext");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_DataContext(IInspectable *) override 
        {
            Assert::Fail(L"Unexpected call to put_DataContext");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_Style(IStyle **) override 
        {
            Assert::Fail(L"Unexpected call to get_Style");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_Style(IStyle *) override 
        {
            Assert::Fail(L"Unexpected call to put_Style");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP get_Parent(IDependencyObject** parent) override 
        {
            return get_ParentMethod.WasCalled(parent);
        }

        IFACEMETHODIMP get_FlowDirection(FlowDirection *) override 
        {
            Assert::Fail(L"Unexpected call to get_FlowDirection");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP put_FlowDirection(FlowDirection) override 
        {
            Assert::Fail(L"Unexpected call to put_FlowDirection");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP add_Loaded(IRoutedEventHandler* handler, EventRegistrationToken* token) override 
        {
            return LoadedEventSource->add_Event(handler, token);
        }

        IFACEMETHODIMP remove_Loaded(EventRegistrationToken token) override 
        {
            return LoadedEventSource->remove_Event(token);
        }

        IFACEMETHODIMP add_Unloaded(IRoutedEventHandler* handler, EventRegistrationToken* token) override
        {
            return UnloadedEventSource->add_Event(handler, token);
        }

        IFACEMETHODIMP remove_Unloaded(EventRegistrationToken token) override
        {
            return UnloadedEventSource->remove_Event(token);
        }

        IFACEMETHODIMP add_SizeChanged(ISizeChangedEventHandler* handler, EventRegistrationToken* token) override 
        {
            return SizeChangedEventSource->add_Event(handler, token);
        }

        IFACEMETHODIMP remove_SizeChanged(EventRegistrationToken token) override 
        {
            return SizeChangedEventSource->remove_Event(token);
        }

        IFACEMETHODIMP add_LayoutUpdated(ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t *,EventRegistrationToken *) override 
        {
            Assert::Fail(L"Unexpected call to add_LayoutUpdated");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP remove_LayoutUpdated(EventRegistrationToken) override 
        {
            Assert::Fail(L"Unexpected call to remove_LayoutUpdated");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP FindName(HSTRING,IInspectable **) override 
        {
            Assert::Fail(L"Unexpected call to FindName");
            return E_NOTIMPL; 
        }

        IFACEMETHODIMP SetBinding(IDependencyProperty *,Data::IBindingBase *) override 
        {
            Assert::Fail(L"Unexpected call to SetBinding");
            return E_NOTIMPL; 
        }
    };
}

