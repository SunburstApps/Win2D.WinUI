// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

//
// This mock object is given to a GraphicsSurface so that we can write tests
// that verify what methods get called.
//
class MockDxgiSurface : public RuntimeClass<
    RuntimeClassFlags<ClassicCom>,
    IDXGISurface2,
    IDXGIResource>
{
public:
    std::function<DXGI_SURFACE_DESC()> MockGetDesc;
    std::function<uint32_t()> MockGetEvictionPriority;
    std::function<void(uint32_t)> MockSetEvictionPriority;

    //
    // IDXGISurface2
    //

    virtual HRESULT STDMETHODCALLTYPE GetResource(
        REFIID riid,
        void** parentResource,
        UINT* subresourceIndex) override
    {
        Assert::Fail(L"Unexpected call to GetResource");
        return E_NOTIMPL;
    }

    //
    // IDXGISurface1
    //
    virtual HRESULT STDMETHODCALLTYPE GetDC(
        BOOL discard,
        HDC* hdc) override
    {
        Assert::Fail(L"Unexpected call to GetDC");
        return E_NOTIMPL;
    }

    virtual HRESULT STDMETHODCALLTYPE ReleaseDC(
        RECT* dirtyRect) override
    {
        Assert::Fail(L"Unexpected call to ReleaseDC");
        return E_NOTIMPL;
    }

    //
    // IDXGISurface
    //

    STDMETHODIMP GetDevice(IID const&,void **)
    {
        Assert::Fail(L"Unexpected call to GetDevice");
        return E_NOTIMPL;
    }

    STDMETHODIMP GetParent(IID const&,void **)
    {
        Assert::Fail(L"Unexpected call to GetParent");
        return E_NOTIMPL;
    }

    STDMETHODIMP GetPrivateData(GUID const&,UINT *,void *)
    {
        Assert::Fail(L"Unexpected call to GetPrivateData");
        return E_NOTIMPL;
    }

    STDMETHODIMP SetPrivateData(GUID const&,UINT,const void *)
    {
        Assert::Fail(L"Unexpected call to SetPrivateData");
        return E_NOTIMPL;
    }

    STDMETHODIMP SetPrivateDataInterface(GUID const&,const IUnknown *)
    {
        Assert::Fail(L"Unexpected call to SetPrivateDataInterface");
        return E_NOTIMPL;
    }

    STDMETHODIMP GetEvictionPriority(UINT* val)
    {
        if (MockGetEvictionPriority)
        {
            return ExceptionBoundary(
                [&]
                {
                    *val = MockGetEvictionPriority();
                });
        }
        else
        {
            Assert::Fail(L"Unexpected call to GetEvictionPriority");
            return E_NOTIMPL;
        }
    }

    STDMETHODIMP GetSharedHandle(HANDLE *)
    {
        Assert::Fail(L"Unexpected call to GetSharedHandle");
        return E_NOTIMPL;
    }

    STDMETHODIMP GetUsage(DXGI_USAGE *)
    {
        Assert::Fail(L"Unexpected call to GetUsage");
        return E_NOTIMPL;
    }

    STDMETHODIMP SetEvictionPriority(UINT val)
    {
        if (MockSetEvictionPriority)
        {
            return ExceptionBoundary(
                [&]
                {
                    MockSetEvictionPriority(val);
                });
        }
        else
        {
            Assert::Fail(L"Unexpected call to SetEvictionPriority");
            return E_NOTIMPL;
        }
    }

    STDMETHODIMP GetDesc(DXGI_SURFACE_DESC* desc)
    {
        if (MockGetDesc)
        {
            return ExceptionBoundary(
                [&]
                {
                    *desc = MockGetDesc();
                });
        }
        else
        {
            Assert::Fail(L"Unexpected call to GetDesc");
            return E_NOTIMPL;
        }
    }

    STDMETHODIMP Map(DXGI_MAPPED_RECT *,UINT)
    {
        Assert::Fail(L"Unexpected call to Map");
        return E_NOTIMPL;
    }

    STDMETHODIMP Unmap()
    {
        Assert::Fail(L"Unexpected call to Unmap");
        return E_NOTIMPL;
    }
};
