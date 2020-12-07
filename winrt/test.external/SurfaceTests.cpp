// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#include "pch.h"

#ifdef USE_LOCALLY_EMULATED_UAP_APIS

using namespace Microsoft::Graphics::Canvas::DirectX::Direct3D11;
using namespace Microsoft::WRL;

TEST_CLASS(SurfaceTests)
{
    TEST_METHOD(RoundtripDxgiSurface)
    {
        ComPtr<ID3D11Texture2D> texture = CreateTexture2D();

        ComPtr<IDXGISurface> dxgiSurface;
        ThrowIfFailed(texture.As(&dxgiSurface));

        //
        // Create a Direct3DSurface based on this
        //
        IDirect3DSurface^ graphicsSurface = CreateDirect3DSurface(dxgiSurface.Get());

        //
        // Convert it back to a DXGI surface
        //
        ComPtr<IDXGISurface> roundTrippedDxgiSurface;
        ThrowIfFailed(GetDXGIInterface(
            graphicsSurface,
            roundTrippedDxgiSurface.GetAddressOf()));

        Assert::AreEqual(dxgiSurface.Get(), roundTrippedDxgiSurface.Get());

        //
        // Convert it directly to a D3D texture
        //
        ComPtr<ID3D11Texture2D> roundTrippedTexture;
        ThrowIfFailed(GetDXGIInterface(
            graphicsSurface,
            roundTrippedTexture.GetAddressOf()));

        Assert::AreEqual(texture.Get(), roundTrippedTexture.Get());
    }

    TEST_METHOD(CreateDirect3DSurfaceFailsOnNullDxgiSurface)
    {
        Assert::ExpectException<Platform::InvalidArgumentException^>(
            []
            {
                CreateDirect3DSurface(nullptr);
            });
    }

    TEST_METHOD(Direct3DSurfaceImplementsClosableCorrectly)
    {
        //
        // Create a mock IDXGISurface implementation.  The token is used so we
        // can tell when the IDXGISurface instance is destroyed.
        //

        class DxgiSurfaceWithToken : public MockDxgiSurface
        {
            std::shared_ptr<bool> m_Token;

        public:
            DxgiSurfaceWithToken(std::shared_ptr<bool> token)
                : m_Token(token)
            {
            }
        };

        std::shared_ptr<bool> strongToken = std::make_shared<bool>(true);
        std::weak_ptr<bool> weakToken(strongToken);

        ComPtr<IDXGISurface> mockDxgiSurface = Make<DxgiSurfaceWithToken>(strongToken);
        strongToken.reset();

        Assert::IsFalse(weakToken.expired());

        //
        // Wrap a Direct3DSurface around mockDxgiSurface.  This takes ownership
        // of the mockDxgiSurface, so we release our reference to it.
        //
        IDirect3DSurface^ graphicsSurface = CreateDirect3DSurface(mockDxgiSurface.Get());
        mockDxgiSurface.Reset();
        Assert::IsFalse(weakToken.expired());

        //
        // Now explicitly close the Direct3DSurface ('delete foo' in C++/CX
        // calls Close()).  This should release the token, making our weakToken
        // invalid.
        //
        delete graphicsSurface;
        Assert::IsTrue(weakToken.expired());

        //
        // Attempting to close a second time is a no-op
        //
        delete graphicsSurface;

        //
        // Attempting to call any other method gives RO_E_CLOSED
        //
        Assert::ExpectException<Platform::ObjectDisposedException^>(
            [&] 
            {
                graphicsSurface->Description;
            });
    }

    TEST_METHOD(Direct3DSurfaceGetDescriptionCallsGetDesc)
    {
        //
        // Create a mock DXGI surface that tracks whether or not GetDesc is
        // called and can return a pre-canned DXGI_SURFACE_DESC.
        //

        ComPtr<MockDxgiSurface> mockDxgiSurface = Make<MockDxgiSurface>();

        bool getDescCalled = false;
        DXGI_SURFACE_DESC expectedDesc = {};
        expectedDesc.Width = 123;
        expectedDesc.Height = 456;
        expectedDesc.Format = DXGI_FORMAT_BC3_UNORM_SRGB; // 78
        expectedDesc.SampleDesc.Count = 9;
        expectedDesc.SampleDesc.Quality = 10;

        mockDxgiSurface->MockGetDesc = 
            [&]
            {
                Assert::IsFalse(getDescCalled);
                getDescCalled = true;
                return expectedDesc;
            };

        //
        // Wrap a Direct3DSurface around it
        //
        IDirect3DSurface^ graphicsSurface = CreateDirect3DSurface(mockDxgiSurface.Get());

        //
        // Get the Description property and compare that with what we expected.
        //
        Direct3DSurfaceDescription actualDesc = graphicsSurface->Description;

        Assert::IsTrue(getDescCalled);
        Assert::AreEqual<int>(expectedDesc.Width, actualDesc.Width);
        Assert::AreEqual<int>(expectedDesc.Height, actualDesc.Height);
        Assert::AreEqual(static_cast<int>(expectedDesc.Format), static_cast<int>(actualDesc.Format));
        Assert::AreEqual<int>(expectedDesc.SampleDesc.Count, actualDesc.MultisampleDescription.Count);
        Assert::AreEqual<int>(expectedDesc.SampleDesc.Quality, actualDesc.MultisampleDescription.Quality);
    }

    TEST_METHOD(Direct3DSurfaceGetDescriptionFailsIfPassedNull)
    {
        ComPtr<IDXGISurface> mockDxgiSurface = Make<MockDxgiSurface>();
        IDirect3DSurface^ graphicsSurface = CreateDirect3DSurface(mockDxgiSurface.Get());

        ABI::Microsoft::Graphics::Canvas::DirectX::Direct3D11::IDirect3DSurface* rawDirect3DSurface =
            reinterpret_cast<ABI::Microsoft::Graphics::Canvas::DirectX::Direct3D11::IDirect3DSurface*>(graphicsSurface);

        Assert::AreEqual(E_INVALIDARG, rawDirect3DSurface->get_Description(nullptr));
    }

private:
    ComPtr<ID3D11Texture2D> CreateTexture2D()
    {
        //
        // Create a texture that will be the surface that gets roundtripped
        //
        ComPtr<ID3D11Device> d3dDevice = CreateD3DDevice();
        
        CD3D11_TEXTURE2D_DESC textureDesc(DXGI_FORMAT_R32G32B32_FLOAT, 1, 1);

        ComPtr<ID3D11Texture2D> texture;
        ThrowIfFailed(d3dDevice->CreateTexture2D(
            &textureDesc,
            nullptr,
            &texture));

        return texture;
    }
};

#endif  // USE_LOCALLY_EMULATED_UAP_APIS
