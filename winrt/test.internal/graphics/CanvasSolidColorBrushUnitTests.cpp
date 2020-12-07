// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#include "pch.h"
#include <lib/brushes/CanvasSolidColorBrush.h>

using namespace ABI::Windows::Foundation;
using namespace ABI::Windows::UI;

struct SolidColorBrushCounters
{
    SolidColorBrushCounters()
        : NumSetColorCalls(0)
        , NumGetColorCalls(0)
        , NumSetOpacityCalls(0)
        , NumGetOpacityCalls(0)
        , NumSetTransformCalls(0)
        , NumGetTransformCalls(0)
    {}

    int NumSetColorCalls;
    int NumGetColorCalls;

    int NumSetOpacityCalls;
    int NumGetOpacityCalls;

    int NumSetTransformCalls;
    int NumGetTransformCalls;
};

class TestD2DSolidColorBrush : public MockD2DSolidColorBrush
{
public:
    TestD2DSolidColorBrush(D2D1_COLOR_F const& color, SolidColorBrushCounters* counters)
        : m_color(color)
        , m_opacity(1.0f)
        , m_counters(counters)
    {
        m_transform = D2D1::Matrix3x2F::Identity();
    }

    //
    // ID2D1SolidColorBrush
    //
    STDMETHOD_(void, SetColor)(_In_ CONST D2D1_COLOR_F *color) override
    {
        m_counters->NumSetColorCalls++;
        m_color = *color;
    }

    STDMETHOD_(D2D1_COLOR_F, GetColor)() CONST override
    {
        m_counters->NumGetColorCalls++;
        return m_color;
    }

    //
    // ID2D1Brush
    //
    STDMETHOD_(void, SetOpacity)(FLOAT opacity) override
    {
        m_counters->NumSetOpacityCalls++;
        m_opacity = opacity;
    }

    STDMETHOD_(FLOAT, GetOpacity)() CONST override
    {
        m_counters->NumGetOpacityCalls++;
        return m_opacity;
    }

    STDMETHOD_(void, SetTransform)(_In_ CONST D2D1_MATRIX_3X2_F *transform) override
    {
        m_counters->NumSetTransformCalls++;
        m_transform = *transform;
    }

    STDMETHOD_(void, GetTransform)(_Out_ D2D1_MATRIX_3X2_F *transform) CONST override
    {
        m_counters->NumGetTransformCalls++;
        *transform = m_transform;
    }

    D2D1_COLOR_F m_color;
    D2D1_MATRIX_3X2_F m_transform;
    float m_opacity;

    SolidColorBrushCounters* m_counters;
};

TEST_CLASS(CanvasSolidColorBrushTests)
{
public:
    class TestCanvasDevice : public StubCanvasDevice
    {
        SolidColorBrushCounters m_counters;
    public:
        TestCanvasDevice()
        {
        }

        virtual ComPtr<ID2D1SolidColorBrush> CreateSolidColorBrush(D2D1_COLOR_F const& color) override
        {
            return Make<TestD2DSolidColorBrush>(color, &m_counters);
        }
    };

    TEST_METHOD_EX(CanvasSolidColorBrush_Construction)
    {
        auto canvasDevice = Make<TestCanvasDevice>();

        Color red = { 255, 255, 0, 0 };
        D2D1_COLOR_F d2dRed = D2D1::ColorF(1, 0, 0);

        auto canvasSolidColorBrush = CanvasSolidColorBrush::CreateNew(canvasDevice.Get(), red);
        auto d2dSolidColorBrush = canvasSolidColorBrush->GetResource();

        Assert::AreEqual(d2dRed, d2dSolidColorBrush->GetColor());
        Assert::AreEqual(1.0f, d2dSolidColorBrush->GetOpacity());
        
        D2D1_MATRIX_3X2_F actualTransform;
        d2dSolidColorBrush->GetTransform(&actualTransform);

        Assert::AreEqual<D2D1_MATRIX_3X2_F>(D2D1::Matrix3x2F::Identity(), actualTransform);
    }

    TEST_METHOD_EX(CanvasSolidColorBrush_Implements_Expected_Interfaces)
    {
        auto canvasDevice = Make<TestCanvasDevice>();
        auto brush = CanvasSolidColorBrush::CreateNew(canvasDevice.Get(), Color{ 255, 0, 0, 0 });

        ASSERT_IMPLEMENTS_INTERFACE(brush, ICanvasSolidColorBrush);
        ASSERT_IMPLEMENTS_INTERFACE(brush, ICanvasBrush);
        ASSERT_IMPLEMENTS_INTERFACE(brush, ICanvasBrushInternal);
        ASSERT_IMPLEMENTS_INTERFACE(brush, ABI::Windows::Foundation::IClosable);
        ASSERT_IMPLEMENTS_INTERFACE(brush, ICanvasResourceWrapperNative);
    }

    TEST_METHOD_EX(CanvasSolidColorBrush_Properties)
    {
        Color red = { 255, 255, 0, 0 };
        Color cyan = { 255, 0, 255, 255 };
        D2D1_COLOR_F d2dRed = D2D1::ColorF(1, 0, 0);
        D2D1_COLOR_F d2dCyan = D2D1::ColorF(0, 1, 1);

        SolidColorBrushCounters counters;
        auto testD2DSolidColorBrush = Make<TestD2DSolidColorBrush>(d2dRed, &counters);
        auto canvasDevice = Make<TestCanvasDevice>();

        auto canvasSolidColorBrush = Make<CanvasSolidColorBrush>(canvasDevice.Get(), testD2DSolidColorBrush.Get());

        // Verify the brush resource got initialized correctly and didn't call
        // any unexpected methods.
        Assert::AreEqual(0, counters.NumGetColorCalls);
        Assert::AreEqual(0, counters.NumSetColorCalls);
        Assert::AreEqual(0, counters.NumGetOpacityCalls);
        Assert::AreEqual(0, counters.NumSetOpacityCalls);
        Assert::AreEqual(0, counters.NumGetTransformCalls);
        Assert::AreEqual(0, counters.NumSetTransformCalls);

        // Verify the Color getter returns the right thing.
        Color colorActual;
        ThrowIfFailed(canvasSolidColorBrush->get_Color(&colorActual));
        Assert::AreEqual(red, colorActual);
        Assert::AreEqual(1, counters.NumGetColorCalls);

        // Set the Color to a new value, and verify it is correct.
        ThrowIfFailed(canvasSolidColorBrush->put_Color(cyan));
        Assert::AreEqual(1, counters.NumSetColorCalls);
        Assert::AreEqual(d2dCyan, testD2DSolidColorBrush->m_color);

        // Verify the getter works once more.
        ThrowIfFailed(canvasSolidColorBrush->get_Color(&colorActual));
        Assert::AreEqual(cyan, colorActual);
        Assert::AreEqual(2, counters.NumGetColorCalls);

        // put_Opacity
        ThrowIfFailed(canvasSolidColorBrush->put_Opacity(0.75f));
        Assert::AreEqual(0.75f, testD2DSolidColorBrush->m_opacity);
        Assert::AreEqual(1, counters.NumSetOpacityCalls);

        // get_Opacity
        float opacityActual = 0;
        ThrowIfFailed(canvasSolidColorBrush->get_Opacity(&opacityActual));
        Assert::AreEqual(0.75f, opacityActual);
        Assert::AreEqual(1, counters.NumGetOpacityCalls);
        
        // put_Transform
        Numerics::Matrix3x2 scaleAndTranslate = { 2, 0, 0, 2, 5, 10 };
        D2D1_MATRIX_3X2_F d2dScaleAndTranslate = D2D1::Matrix3x2F(2, 0, 0, 2, 5, 10);
        canvasSolidColorBrush->put_Transform(scaleAndTranslate);
        Assert::AreEqual(d2dScaleAndTranslate, testD2DSolidColorBrush->m_transform);
        Assert::AreEqual(1, counters.NumSetTransformCalls);

        // get_Transform
        Numerics::Matrix3x2 transformActual;
        canvasSolidColorBrush->get_Transform(&transformActual);
        Assert::AreEqual(scaleAndTranslate, transformActual);
        Assert::AreEqual(1, counters.NumGetTransformCalls);

        // get_Device
        ComPtr<ICanvasDevice> actualDevice;
        canvasSolidColorBrush->get_Device(&actualDevice);
        Assert::AreEqual<ICanvasDevice*>(canvasDevice.Get(), actualDevice.Get());
    }

    TEST_METHOD_EX(CanvasSolidColorBrush_Closed)
    {
        Color color = { 255, 127, 127, 127 };

        auto d2dBrush = Make<MockD2DSolidColorBrush>();
        auto canvasDevice = Make<TestCanvasDevice>();
        auto canvasSolidColorBrush = Make<CanvasSolidColorBrush>(canvasDevice.Get(), d2dBrush.Get());

        Assert::IsNotNull(canvasSolidColorBrush.Get());

        Assert::AreEqual(S_OK, canvasSolidColorBrush->Close());

        Color colorActual;
        Assert::AreEqual(RO_E_CLOSED, canvasSolidColorBrush->get_Color(&colorActual));

        Assert::AreEqual(RO_E_CLOSED, canvasSolidColorBrush->put_Color(color));

        float opacityActual;
        Assert::AreEqual(RO_E_CLOSED, canvasSolidColorBrush->get_Opacity(&opacityActual));

        Assert::AreEqual(RO_E_CLOSED, canvasSolidColorBrush->put_Opacity(1));

        Numerics::Matrix3x2 transformActual;
        Assert::AreEqual(RO_E_CLOSED, canvasSolidColorBrush->get_Transform(&transformActual));

        Assert::AreEqual(RO_E_CLOSED, canvasSolidColorBrush->put_Transform(transformActual));

        ComPtr<ICanvasDevice> actualDevice;
        Assert::AreEqual(RO_E_CLOSED, canvasSolidColorBrush->get_Device(&actualDevice));
    }

    TEST_METHOD_EX(CanvasSolidColorBrush_CreateThroughCanvasControl)
    {
        auto canvasDevice = Make<StubCanvasDevice>();

        bool createSolidColorBrushCalled = false;
        canvasDevice->MockCreateSolidColorBrush =
            [&](D2D1_COLOR_F const& color)
            {
                createSolidColorBrushCalled = true;
                return Make<MockD2DSolidColorBrush>();
            };

        auto canvasControlAdapter = std::make_shared<CanvasControlTestAdapter>();

        canvasControlAdapter->DeviceFactory->GetSharedDeviceWithForceSoftwareRendererMethod.SetExpectedCalls(1,
            [=](boolean, ICanvasDevice** device)
            {
                return canvasDevice.CopyTo(device);
            });
        canvasControlAdapter->CreateCanvasImageSourceMethod.AllowAnyCall();

        ComPtr<CanvasControl> canvasControl = Make<CanvasControl>(canvasControlAdapter); 

        // Get the control to a point where it has created the device.
        auto userControl = static_cast<StubUserControl*>(As<IUserControl>(canvasControl).Get());
        ThrowIfFailed(userControl->LoadedEventSource->InvokeAll(nullptr, nullptr));
        canvasControlAdapter->RaiseCompositionRenderingEvent();

        auto brush = CanvasSolidColorBrush::CreateNew(canvasControl.Get(), Color{ 255, 0, 0, 0 });

        // This will only be true if the brush was constructed on the correct device.
        Assert::IsTrue(createSolidColorBrushCalled);

        ComPtr<ICanvasDevice> verifyDevice;
        ThrowIfFailed(canvasControl->get_Device(&verifyDevice));
        Assert::AreEqual(static_cast<ICanvasDevice*>(canvasDevice.Get()), verifyDevice.Get());
    }

    TEST_METHOD_EX(CanvasSolidColorBrush_CreateThroughDrawingSession)
    {
        ComPtr<MockCanvasDevice> canvasDevice = Make<MockCanvasDevice>();
        ComPtr<MockD2DSolidColorBrush> expectedBrush = Make<MockD2DSolidColorBrush>();

        bool createSolidColorBrushCalled = false;
        canvasDevice->MockCreateSolidColorBrush =
            [&](D2D1_COLOR_F const& color)
            {
                createSolidColorBrushCalled = true;
                return expectedBrush;
            };

        ComPtr<StubD2DDeviceContextWithGetFactory> d2dDeviceContext =
            Make<StubD2DDeviceContextWithGetFactory>();

        ComPtr<CanvasDrawingSession> drawingSession = CanvasDrawingSession::CreateNew(
            d2dDeviceContext.Get(),
            std::make_shared<StubCanvasDrawingSessionAdapter>(),
            canvasDevice.Get());

        auto createdBrush = CanvasSolidColorBrush::CreateNew(drawingSession.Get(), Color{ 255, 0, 0, 0 });

        // Verify that the Create occurred on the DrawingSession device, and not on some
        // other device. Verify it wrapped around the correct brush.
        Assert::IsTrue(createSolidColorBrushCalled);
        ComPtr<ICanvasBrushInternal> createdBrushInternal;
        ThrowIfFailed(createdBrush.As(&createdBrushInternal));
        ComPtr<ID2D1Brush> createdD2DBrush = createdBrushInternal->GetD2DBrush(nullptr, GetBrushFlags::None);
        Assert::AreEqual(static_cast<ID2D1Brush*>(expectedBrush.Get()), createdD2DBrush.Get());
    }

    TEST_METHOD_EX(CanvasSolidColorBrush_CreateHdr_FailsWhenPassedInvalidParameters)
    {
        auto factory = Make<CanvasSolidColorBrushFactory>();

        auto device = Make<MockCanvasDevice>();

        ComPtr<ICanvasSolidColorBrush> brush;
        
        Assert::AreEqual(E_INVALIDARG, factory->CreateHdr(nullptr, Vector4{}, &brush));
        Assert::AreEqual(E_INVALIDARG, factory->CreateHdr(device.Get(), Vector4{}, nullptr));
    }

    TEST_METHOD_EX(CanvasSolidColorBrush_CreateHdr_PassesColorThroughToCreateSolidColorBrush)
    {
        auto anyColorHdr = Vector4{ 1, 2, 3, 4 };

        auto d2dDeviceContext = Make<MockD2DDeviceContext>();
        auto d2dDevice = Make<MockD2DDevice>();
        auto d3dDevice = Make<StubD3D11Device>();
        auto d2dBrush = Make<MockD2DSolidColorBrush>();
        auto device = Make<CanvasDevice>(d2dDevice.Get(), d3dDevice.Get());        
        auto factory = Make<CanvasSolidColorBrushFactory>();

        d2dDevice->MockCreateDeviceContext =
            [=] (D2D1_DEVICE_CONTEXT_OPTIONS, ID2D1DeviceContext1** deviceContext)
            {
                ThrowIfFailed(d2dDeviceContext.CopyTo(deviceContext));
            };

        d2dDeviceContext->CreateSolidColorBrushMethod.SetExpectedCalls(1,
            [=] (D2D1_COLOR_F const* color, D2D1_BRUSH_PROPERTIES const* properties, ID2D1SolidColorBrush** theValue)
            {
                Assert::AreEqual(anyColorHdr.X, color->r);
                Assert::AreEqual(anyColorHdr.Y, color->g);
                Assert::AreEqual(anyColorHdr.Z, color->b);
                Assert::AreEqual(anyColorHdr.W, color->a);

                Assert::IsNull(properties);

                return d2dBrush.CopyTo(theValue);
            });

        ComPtr<ICanvasSolidColorBrush> brush;
        ThrowIfFailed(factory->CreateHdr(device.Get(), anyColorHdr, &brush));

        Assert::IsNotNull(brush.Get());
        auto wrappedBrush = GetWrappedResource<ID2D1SolidColorBrush>(brush);
        Assert::IsTrue(IsSameInstance(d2dBrush.Get(), wrappedBrush.Get()));
    }

    TEST_METHOD_EX(CanvasSolidColorBrush_get_ColorHdr_CallsThroughToUnderlyingBrush)
    {
        auto device = Make<MockCanvasDevice>();
        auto d2dBrush = Make<MockD2DSolidColorBrush>();
        auto brush = Make<CanvasSolidColorBrush>(device.Get(), d2dBrush.Get());

        d2dBrush->GetColorMethod.SetExpectedCalls(1,
            [] { return D2D1_COLOR_F{ 1, 2, 3, 4 }; });

        Vector4 colorHdr;
        ThrowIfFailed(brush->get_ColorHdr(&colorHdr));

        Assert::AreEqual(1.0f, colorHdr.X);
        Assert::AreEqual(2.0f, colorHdr.Y);
        Assert::AreEqual(3.0f, colorHdr.Z);
        Assert::AreEqual(4.0f, colorHdr.W);            
    }

    TEST_METHOD_EX(CanvasSolidColorBrush_put_ColorHdr_CallsThroughToUnderlyingBrush)
    {
        auto device = Make<MockCanvasDevice>();
        auto d2dBrush = Make<MockD2DSolidColorBrush>();
        auto brush = Make<CanvasSolidColorBrush>(device.Get(), d2dBrush.Get());

        d2dBrush->SetColorMethod.SetExpectedCalls(1,
            [] (D2D1_COLOR_F const* color)
            {
                Assert::AreEqual(1.0f, color->r);
                Assert::AreEqual(2.0f, color->g);
                Assert::AreEqual(3.0f, color->b);
                Assert::AreEqual(4.0f, color->a);
            });

        ThrowIfFailed(brush->put_ColorHdr(Vector4{ 1, 2, 3, 4}));
    }

    TEST_METHOD_EX(CanvasSolidColorBrush_get_Color_ClampsHighColor)
    {
        auto device = Make<MockCanvasDevice>();
        auto d2dBrush = Make<MockD2DSolidColorBrush>();
        auto brush = Make<CanvasSolidColorBrush>(device.Get(), d2dBrush.Get());

        std::pair<D2D1_COLOR_F, Color> testCases[] =
        {
            //                R    G    B    A             A    R    G    B
            { D2D1_COLOR_F{ 100,   0,   0,   0 }, Color{   0, 255,   0,   0 } },
            { D2D1_COLOR_F{   0, 100,   0,   0 }, Color{   0,   0, 255,   0 } },
            { D2D1_COLOR_F{   0,   0, 100,   0 }, Color{   0,   0,   0, 255 } },
            { D2D1_COLOR_F{   0,   0,   0, 100 }, Color{ 255,   0,   0,   0 } },
        };

        for (auto testCase : testCases)
        {
            d2dBrush->GetColorMethod.SetExpectedCalls(1,            
                [=] { return testCase.first; });

            Color color;
            ThrowIfFailed(brush->get_Color(&color));

            Assert::AreEqual(testCase.second, color);
        }
    }
};
