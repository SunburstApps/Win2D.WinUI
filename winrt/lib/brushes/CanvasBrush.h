// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas
{
    using namespace ::Microsoft::WRL;

    enum class GetBrushFlags
    {
        None = 0,
        AlwaysInsertDpiCompensation = 1,
        NoValidation = 2,   // Used by CanvasImageBrush::GetD2DBrush
    };

    DEFINE_ENUM_FLAG_OPERATORS(GetBrushFlags)

    class __declspec(uuid("3A6BF1D2-731A-4EBB-AA40-1419A89302F6"))
    ICanvasBrushInternal : public IUnknown
    {
    public:
        virtual ComPtr<ID2D1Brush> GetD2DBrush(ID2D1DeviceContext* deviceContext, GetBrushFlags flags) = 0;
    };    

    class CanvasBrush
        : public Implements<
            RuntimeClassFlags<WinRtClassicComMix>,
            ICanvasBrush, 
            CloakedIid<ICanvasBrushInternal>,
            CloakedIid<ICanvasResourceWrapperWithDevice>>
    {
    protected:
        ClosablePtr<ICanvasDevice> m_device;

        CanvasBrush(ICanvasDevice* device)
            : m_device(device)
        { }
        
        virtual ~CanvasBrush() = default;

        void Close();

    public:
        IFACEMETHOD(get_Opacity)(float *value) override;

        IFACEMETHOD(put_Opacity)(float value) override;

        IFACEMETHOD(get_Transform)(Numerics::Matrix3x2 *value) override;

        IFACEMETHOD(put_Transform)(Numerics::Matrix3x2 value) override;

        IFACEMETHOD(get_Device)(ICanvasDevice** value) override;
    };

} } } }
