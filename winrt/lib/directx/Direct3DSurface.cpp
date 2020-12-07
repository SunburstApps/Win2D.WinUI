// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#include "pch.h"

#ifdef USE_LOCALLY_EMULATED_UAP_APIS

using namespace Microsoft::WRL;

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace DirectX { namespace Direct3D11
{

    class Direct3DSurface : public RuntimeClass<
        RuntimeClassFlags<WinRtClassicComMix>,
        ABI::Microsoft::Graphics::Canvas::DirectX::Direct3D11::IDirect3DSurface,
        ABI::Windows::Foundation::IClosable,
        CloakedIid<IDirect3DDxgiInterfaceAccess>>,
        private LifespanTracker<Direct3DSurface>
    {
        InspectableClass(L"Microsoft.Graphics.Canvas.DirectX.Direct3D11.IDirect3DSurface", BaseTrust);

        ClosablePtr<IDXGISurface> m_DxgiSurface;

    public:
        Direct3DSurface(IDXGISurface* surface)
        {
            if (surface == nullptr)
                ThrowHR(E_INVALIDARG);

            m_DxgiSurface = surface;
        }

        // IClosable
        IFACEMETHOD(Close)() override
        {
            m_DxgiSurface.Close();
            return S_OK;
        }

        // IDirect3DSurface
        IFACEMETHOD(get_Description)(
            _Out_ ABI::Microsoft::Graphics::Canvas::DirectX::Direct3D11::Direct3DSurfaceDescription* value) override
        {
            return ExceptionBoundary(
                [&]
                {
                    using ABI::Microsoft::Graphics::Canvas::DirectX::Direct3D11::Direct3DSurfaceDescription;
                    using ABI::Microsoft::Graphics::Canvas::DirectX::Direct3D11::Direct3DMultisampleDescription;

                    if (value == nullptr)
                        ThrowHR(E_INVALIDARG);

                    auto& surface = m_DxgiSurface.EnsureNotClosed();

                    //
                    // IDXGISurface::GetDesc() expects a DXGI_SURFACE_DESC.
                    // We've cunningly arranged it so that
                    // Direct3DSurfaceDescription has exactly the same binary
                    // layout as DXGI_SURFACE_DESC, so we can pass one in
                    // directly and so avoid an unnecessary copy.
                    //
                    // These static asserts verify that the binary layout really
                    // does match.
                    //
                    static_assert(sizeof(DXGI_SURFACE_DESC) == sizeof(Direct3DSurfaceDescription), "Direct3DSurfaceDescription layout must match DXGI_SURFACE_DESC layout");
                    static_assert(offsetof(DXGI_SURFACE_DESC, Width) == offsetof(Direct3DSurfaceDescription, Width), "Direct3DSurfaceDescription layout must match DXGI_SURFACE_DESC layout");
                    static_assert(offsetof(DXGI_SURFACE_DESC, Height) == offsetof(Direct3DSurfaceDescription, Height), "Direct3DSurfaceDescription layout must match DXGI_SURFACE_DESC layout");
                    static_assert(offsetof(DXGI_SURFACE_DESC, Format) == offsetof(Direct3DSurfaceDescription, Format), "Direct3DSurfaceDescription layout must match DXGI_SURFACE_DESC layout");
                    static_assert(offsetof(DXGI_SURFACE_DESC, SampleDesc) == offsetof(Direct3DSurfaceDescription, MultisampleDescription), "Direct3DSurfaceDescription layout must match DXGI_SURFACE_DESC layout");
                    static_assert(offsetof(DXGI_SAMPLE_DESC, Count) == offsetof(Direct3DMultisampleDescription, Count), "GraphicsMultisampleDescription layout must match DXGI_SAMPLE_DESC layout");
                    static_assert(offsetof(DXGI_SAMPLE_DESC, Quality) == offsetof(Direct3DMultisampleDescription, Quality), "GraphicsMultisampleDescription layout must match DXGI_SAMPLE_DESC layout");

                    ThrowIfFailed(surface->GetDesc(reinterpret_cast<DXGI_SURFACE_DESC*>(value)));
                });
        }

        // IDirect3DDxgiInterfaceAccess
        IFACEMETHODIMP GetInterface(REFIID iid, void** p) override
        {
            return ExceptionBoundary(
                [&]
                {
                    auto& surface = m_DxgiSurface.EnsureNotClosed();
                    ThrowIfFailed(surface.CopyTo(iid, p));
                });
        }        
    };
}}}}}}


using namespace ABI::Microsoft::Graphics::Canvas::DirectX::Direct3D11;


_Use_decl_annotations_
STDAPI CreateDirect3D11SurfaceFromDXGISurface(
    IDXGISurface* dxgiSurface,
    IInspectable** inspectableDirect3DSurface)
{
    return ExceptionBoundary(
        [&]
        {
            ComPtr<Direct3DSurface> direct3DSurface = Make<Direct3DSurface>(dxgiSurface);
            if (!direct3DSurface)
                ThrowIfFailed(E_OUTOFMEMORY);

            ThrowIfFailed(direct3DSurface.CopyTo(inspectableDirect3DSurface));
        });
}

#else   // USE_LOCALLY_EMULATED_UAP_APIS

 // suppress warning about file not defining any symbols
namespace { char suppressLnk4221; }

#endif  // !USE_LOCALLY_EMULATED_UAP_APIS
