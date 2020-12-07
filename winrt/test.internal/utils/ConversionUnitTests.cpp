// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#include "pch.h"

#include <lib/brushes/Gradients.h>

TEST_CLASS(ConversionUnitTests)
{
    TEST_METHOD_EX(Uint8_NormalizedFloat)
    {
        // Check some known values
        Assert::AreEqual(0.0f, ToNormalizedFloat(0));
        Assert::AreEqual(1.0f, ToNormalizedFloat(255));
        Assert::AreEqual(0.5f, ToNormalizedFloat(128), 0.1f);

        Assert::AreEqual<uint8_t>(0, NormalizedToUint8(0.0f));
        Assert::AreEqual<uint8_t>(255, NormalizedToUint8(1.0f));
        Assert::AreEqual<uint8_t>(127, NormalizedToUint8(0.5f));

        // Check roundtrip
        for (int i = 0; i < 256; ++i)
        {
            Assert::AreEqual<int>(i, NormalizedToUint8(ToNormalizedFloat(static_cast<uint8_t>(i))));
        }
    }

    TEST_METHOD_EX(ColorToD2DColor)
    {
        //
        // Check the components are passed through as expected, above tests
        // convince us that the per-component conversion is correct.
        //

        ABI::Windows::UI::Color alpha{ 255,   0,   0,   0 };
        ABI::Windows::UI::Color red  {   0, 255,   0,   0 };
        ABI::Windows::UI::Color green{   0,   0, 255,   0 };
        ABI::Windows::UI::Color blue {   0,   0,   0, 255 };

        auto d2dAlpha = ToD2DColor(alpha);
        auto d2dRed   = ToD2DColor(red);
        auto d2dGreen = ToD2DColor(green);
        auto d2dBlue  = ToD2DColor(blue);

        Assert::AreEqual<float>(d2dAlpha.r, 0);
        Assert::AreEqual<float>(d2dAlpha.g, 0);
        Assert::AreEqual<float>(d2dAlpha.b, 0);
        Assert::AreEqual<float>(d2dAlpha.a, 1);

        Assert::AreEqual<float>(d2dRed.r, 1);
        Assert::AreEqual<float>(d2dRed.g, 0);
        Assert::AreEqual<float>(d2dRed.b, 0);
        Assert::AreEqual<float>(d2dRed.a, 0);

        Assert::AreEqual<float>(d2dGreen.r, 0);
        Assert::AreEqual<float>(d2dGreen.g, 1);
        Assert::AreEqual<float>(d2dGreen.b, 0);
        Assert::AreEqual<float>(d2dGreen.a, 0);

        Assert::AreEqual<float>(d2dBlue.r, 0);
        Assert::AreEqual<float>(d2dBlue.g, 0);
        Assert::AreEqual<float>(d2dBlue.b, 1);
        Assert::AreEqual<float>(d2dBlue.a, 0);
    }

    TEST_METHOD_EX(D2DColorToWindowsColor)
    {
        ABI::Windows::UI::Color alpha{ 255, 0, 0, 0 };
        Assert::AreEqual(alpha, ToWindowsColor(D2D1::ColorF(0, 0, 0, 1)));

        ABI::Windows::UI::Color red{ 0, 255, 0, 0 };
        Assert::AreEqual(red, ToWindowsColor(D2D1::ColorF(1, 0, 0, 0)));

        ABI::Windows::UI::Color green{ 0, 0, 255, 0 };
        Assert::AreEqual(green, ToWindowsColor(D2D1::ColorF(0, 1, 0, 0)));

        ABI::Windows::UI::Color blue{ 0, 0, 0, 255 };
        Assert::AreEqual(blue, ToWindowsColor(D2D1::ColorF(0, 0, 1, 0)));

        // Verify truncation of high values.
        Assert::AreEqual(alpha, ToWindowsColor(D2D1::ColorF(0, 0, 0, 2)));
        Assert::AreEqual(red, ToWindowsColor(D2D1::ColorF(3, 0, 0, 0)));
        Assert::AreEqual(green, ToWindowsColor(D2D1::ColorF(0, 4, 0, 0)));
        Assert::AreEqual(blue, ToWindowsColor(D2D1::ColorF(0, 0, 5, 0)));

        // Verify truncation of low values.
        ABI::Windows::UI::Color black{ 0, 0, 0, 0 };
        Assert::AreEqual(black, ToWindowsColor(D2D1::ColorF(-6, 0, 0, 0)));
        Assert::AreEqual(black, ToWindowsColor(D2D1::ColorF(0, -7, 0, 0)));
        Assert::AreEqual(black, ToWindowsColor(D2D1::ColorF(0, 0, -8, 0)));
        Assert::AreEqual(black, ToWindowsColor(D2D1::ColorF(0, 0, 0, -9)));

    }

    TEST_METHOD_EX(PointToD2DPoint)
    {
        Assert::AreEqual(D2D1_POINT_2F{ 1, 2 }, ToD2DPoint(Vector2{ 1, 2 }));
    }

    TEST_METHOD_EX(RectToD2DRect)
    {
        Assert::AreEqual(D2D_RECT_F{ 1, 2, 3, 4 }, ToD2DRect(Rect{ 1, 2, 2, 2 }));

        // Some DImage effects default to infinite size rects, so we need to make sure those convert correctly.
        // If the conversion is not done carefully, arithmetic on Inf can yield unwanted NaN values.
        auto inf = std::numeric_limits<float>::infinity();

        Assert::AreEqual(D2D_RECT_F{ 0, 0, inf, inf }, ToD2DRect(Rect{ 0, 0, inf, inf }));
        Assert::AreEqual(D2D_RECT_F{ -inf, -inf, inf, inf }, ToD2DRect(Rect{ -inf, -inf, inf, inf }));
    }

    TEST_METHOD_EX(RectAndRadiusToD2DRoundedRect)
    {
        using ABI::Windows::Foundation::Rect;

        Rect rect{ 1, 2, 3, 4 };
        float rx = 5;
        float ry = 6;

        auto result = ToD2DRoundedRect(rect, rx, ry);

        Assert::AreEqual(ToD2DRect(rect), result.rect);
        Assert::AreEqual(rx, result.radiusX);
        Assert::AreEqual(ry, result.radiusY);
    }

    TEST_METHOD_EX(PointAndRadiusToD2DEllipse)
    {
        Vector2 point{ 1, 2 };
        float rx = 3;
        float ry = 4;

        auto result = ToD2DEllipse(point, rx, ry);

        Assert::AreEqual(ToD2DPoint(point), result.point);
        Assert::AreEqual(rx, result.radiusX);
        Assert::AreEqual(ry, result.radiusY);
    }

    TEST_METHOD_EX(RectFromD2DRect)
    {
        using ABI::Windows::Foundation::Rect;

        Assert::AreEqual(Rect{ 5, 6, 2, 2 }, FromD2DRect(D2D1::RectF(5, 6, 7, 8)));

        // Some DImage effects default to infinite size rects, so we need to make sure those convert correctly.
        // If the conversion is not done carefully, arithmetic on Inf can yield unwanted NaN values.
        auto inf = std::numeric_limits<float>::infinity();

        Assert::AreEqual(Rect{ 0, 0, inf, inf }, FromD2DRect(D2D1::RectF(0, 0, inf, inf)));
        Assert::AreEqual(Rect{ -inf, -inf, inf, inf }, FromD2DRect(D2D1::RectF(-inf, -inf, inf, inf)));
    }

    TEST_METHOD_EX(Desaturate)
    {
        Assert::AreEqual((BYTE)0, DesaturateChannel(0, 0.0f));
        Assert::AreEqual((BYTE)200, DesaturateChannel(200, 0.0f));
        Assert::AreEqual((BYTE)255, DesaturateChannel(255, 0.0f));

        Assert::AreEqual((BYTE)127, DesaturateChannel(0, 1.0f));
        Assert::AreEqual((BYTE)127, DesaturateChannel(200, 1.0f));
        Assert::AreEqual((BYTE)127, DesaturateChannel(255, 1.0f));

        Assert::AreEqual((BYTE)(127 + (255 - 127) / 2), DesaturateChannel(255, 0.5f));

        Assert::AreEqual((BYTE)23, DesaturateChannel(23, -50));
        Assert::AreEqual((BYTE)127, DesaturateChannel(23, 999));
    }

    TEST_METHOD_EX(DpiConversion)
    {
        Assert::AreEqual(0, SizeDipsToPixels(0, 96));
        Assert::AreEqual(23, SizeDipsToPixels(23, 96));
        Assert::AreEqual(1234, SizeDipsToPixels(1234, 96));

        Assert::AreEqual(0, SizeDipsToPixels(0, 144));
        Assert::AreEqual(23 * 3 / 2, SizeDipsToPixels(22.999f, 144));
        Assert::AreEqual(1234 * 3 / 2, SizeDipsToPixels(1234, 144));

        Assert::AreEqual(0, SizeDipsToPixels(0, 64));
        Assert::AreEqual(23 * 2 / 3, SizeDipsToPixels(23, 64));
        Assert::AreEqual(1234 * 2 / 3, SizeDipsToPixels(1233.5f, 64));

        Assert::AreEqual(42, SizeDipsToPixels(42.0f, 96));
        Assert::AreEqual(42, SizeDipsToPixels(42.1f, 96));
        Assert::AreEqual(42, SizeDipsToPixels(42.4f, 96));
        Assert::AreEqual(43, SizeDipsToPixels(42.6f, 96));
        Assert::AreEqual(43, SizeDipsToPixels(42.9f, 96));

        Assert::AreEqual(0.0f, PixelsToDips(0, 96));
        Assert::AreEqual(23.0f, PixelsToDips(23, 96));
        Assert::AreEqual(1234.0f, PixelsToDips(1234, 96));

        Assert::AreEqual(0.0f, PixelsToDips(0, 144));
        Assert::AreEqual(23.0f * 2 / 3, PixelsToDips(23, 144));
        Assert::AreEqual(1234.0f * 2 / 3, PixelsToDips(1234, 144));

        Assert::AreEqual(0.0f, PixelsToDips(0, 64));
        Assert::AreEqual(23.0f * 3 / 2, PixelsToDips(23, 64));
        Assert::AreEqual(1234.0f * 3 / 2, PixelsToDips(1234, 64));
    }

    TEST_METHOD_EX(DipsToPixelsNeverRoundsPositiveValuesToZero)
    {
        Assert::AreEqual(0, SizeDipsToPixels(0, 96));

        Assert::AreEqual(0, SizeDipsToPixels(-0.1f, 96));
        Assert::AreEqual(0, SizeDipsToPixels(-0.4f, 96));
        Assert::AreEqual(-1, SizeDipsToPixels(-0.6f, 96));
        Assert::AreEqual(-1, SizeDipsToPixels(-0.9f, 96));

        Assert::AreEqual(1, SizeDipsToPixels(0.1f, 96));
        Assert::AreEqual(1, SizeDipsToPixels(0.4f, 96));
        Assert::AreEqual(1, SizeDipsToPixels(0.6f, 96));
        Assert::AreEqual(1, SizeDipsToPixels(0.9f, 96));

        Assert::AreEqual(0, SizeDipsToPixels(0, 192));
        
        Assert::AreEqual(0, SizeDipsToPixels(-0.1f, 192));
        Assert::AreEqual(-1, SizeDipsToPixels(-0.4f, 192));
        Assert::AreEqual(-1, SizeDipsToPixels(-0.6f, 192));
        Assert::AreEqual(-2, SizeDipsToPixels(-0.9f, 192));

        Assert::AreEqual(1, SizeDipsToPixels(0.1f, 192));
        Assert::AreEqual(1, SizeDipsToPixels(0.4f, 192));
        Assert::AreEqual(1, SizeDipsToPixels(0.6f, 192));
        Assert::AreEqual(2, SizeDipsToPixels(0.9f, 192));
    }

    TEST_METHOD_EX(ToRECTRounding)
    {
        // A typical rectangle should round to nearest.
        Rect rc = { 0.01f, 9.7f, 19.9f, 30.3f };

        Assert::AreEqual(RECT{ 0, 10, 20, 40 }, ToRECT(rc, 96));
        Assert::AreEqual(RECT{ 0, 15, 30, 60 }, ToRECT(rc, 144));

        // Very small size should never round down to zero.
        rc = Rect{ 9.9f, 20.1f, 0.4f, 0.0001f };

        Assert::AreEqual(RECT{ 10, 20, 11, 21 }, ToRECT(rc, 96));
        Assert::AreEqual(RECT{ 20, 40, 21, 41 }, ToRECT(rc, 192));

        // Zero size should output zero.
        rc = Rect{ 9.9f, 20.1f, 0, 0 };

        Assert::AreEqual(RECT{ 10, 20, 10, 20 }, ToRECT(rc, 96));
        Assert::AreEqual(RECT{ 20, 40, 20, 40 }, ToRECT(rc, 192));
    }
};
