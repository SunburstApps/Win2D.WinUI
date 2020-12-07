// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

#include "DeferrableTask.h"

#include "../images/CanvasCommandList.h"

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace Printing
{
    using namespace ABI::Windows::Graphics::Printing;

    class CanvasPrintEventArgs
        : public RuntimeClass<ICanvasPrintEventArgs>
        , private LifespanTracker<CanvasPrintEventArgs>
    {
        InspectableClass(RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPrintEventArgs, BaseTrust);


        DeferrableTask* const m_task;

        ComPtr<ICanvasDevice> const m_device;
        ComPtr<IPrintTaskOptionsCore> const m_printTaskOptions;

        std::mutex m_mutex;

        float m_dpi;

        ComPtr<IPrintDocumentPackageTarget> m_target;
        ComPtr<ID2D1PrintControl> m_printControl;

        ComPtr<ID2D1CommandList> m_currentCommandList;
        int m_currentPage;
        
    public:
        CanvasPrintEventArgs(
            DeferrableTask* task,
            ComPtr<ICanvasDevice> const& device,
            ComPtr<IPrintDocumentPackageTarget> const& target,
            ComPtr<IPrintTaskOptionsCore> const& printTaskOptions,
            float initialDpi);
        
        void EndPrinting();

        IFACEMETHODIMP get_PrintTaskOptions(IPrintTaskOptionsCore** value) override;
        IFACEMETHODIMP get_Dpi(float* value) override;
        IFACEMETHODIMP put_Dpi(float value) override;
        IFACEMETHODIMP GetDeferral(ICanvasPrintDeferral** value) override;
        IFACEMETHODIMP CreateDrawingSession(ICanvasDrawingSession** value) override;

    private:
        ComPtr<ICanvasDrawingSession> CreateDrawingSessionImpl();
        void DrawingSessionClosed();

        class DrawingSessionAdapter;
    };

}}}}}
