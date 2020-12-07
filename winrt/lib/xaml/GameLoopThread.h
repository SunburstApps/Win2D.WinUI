// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

using namespace ABI::Windows::Foundation;
using namespace ABI::Windows::System::Threading;
using namespace ABI::Windows::UI::Core;
#ifdef WINUI
using namespace ABI::Microsoft::UI::Xaml::Controls;
#else
using namespace ABI::Windows::UI::Xaml::Controls;
#endif
using namespace Microsoft::WRL;

class IGameLoopThread
{
public:
    virtual ~IGameLoopThread() = default;
    virtual void StartDispatcher() = 0;
    virtual void StopDispatcher() = 0;
    virtual ComPtr<IAsyncAction> RunAsync(IDispatchedHandler* handler) = 0;
    virtual bool HasThreadAccess() = 0;
};

class ICanvasGameLoopClient;

std::unique_ptr<IGameLoopThread> CreateGameLoopThread(ISwapChainPanel* swapChainPanel, ICanvasGameLoopClient* client);
