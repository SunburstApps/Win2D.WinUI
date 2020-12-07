// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

#include <sdkddkver.h>

// When building for Windows 8.1, new APIs that were added in Win10 (such as IDirect3DDevice)
// will not be defined by the platform. To support 8.1, Win2D provides its own local definition
// of these interfaces in the Microsoft.Graphics.Canvas namespace. This header arranges to use
// the local versions when building for 8.1, or the official versions when building for UAP.
#if WINVER <= _WIN32_WINNT_WINBLUE
# define USE_LOCALLY_EMULATED_UAP_APIS
#endif


#ifdef USE_LOCALLY_EMULATED_UAP_APIS
# include <Microsoft.Graphics.Canvas.DirectX.Direct3D11.interop.h>
# include <Microsoft.Graphics.Canvas.Effects.interop.h>
#else
# include <windows.graphics.directx.h>
# include <windows.graphics.directx.direct3d11.interop.h>
# include <windows.graphics.effects.interop.h>
#endif


#ifdef __cplusplus_winrt
# define WINRT_PREFIX
#else
# define WINRT_PREFIX ABI::
#endif

namespace WinRTDirectX
{
#ifdef USE_LOCALLY_EMULATED_UAP_APIS

    using ::Microsoft::Graphics::Canvas::DirectX::Direct3D11::IDirect3DDxgiInterfaceAccess;
    using namespace WINRT_PREFIX Microsoft::Graphics::Canvas::DirectX::Direct3D11;
    using namespace WINRT_PREFIX Microsoft::Graphics::Canvas::DirectX;
    using namespace WINRT_PREFIX Microsoft::Graphics::Canvas::Effects;

#else

    using ::Windows::Graphics::DirectX::Direct3D11::IDirect3DDxgiInterfaceAccess;
    using namespace WINRT_PREFIX Windows::Graphics::DirectX;
    using namespace WINRT_PREFIX Windows::Graphics::DirectX::Direct3D11;
    using namespace WINRT_PREFIX Windows::Graphics::Effects;

#endif
}

#undef WINRT_PREFIX
