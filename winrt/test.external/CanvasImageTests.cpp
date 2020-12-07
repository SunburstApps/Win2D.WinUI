// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#include "pch.h"

using namespace Microsoft::Graphics::Canvas::Effects;
using namespace WinRTDirectX;

TEST_CLASS(CanvasImageTests)
{
    TEST_METHOD(CanvasImage_GetBounds)
    {
        float dpiCases[] = { DEFAULT_DPI, DEFAULT_DPI * 2 };
        CanvasUnits unitModeCases[] = { CanvasUnits::Dips, CanvasUnits::Pixels };

        const float bitmapWidth = 4;
        const float bitmapHeight = 3;

        auto device = ref new CanvasDevice();
        auto sourceBitmap = ref new CanvasRenderTarget(device, bitmapWidth, bitmapHeight, DEFAULT_DPI);
        auto cropEffect = ref new CropEffect;
        cropEffect->Source = sourceBitmap;
        cropEffect->SourceRectangle = Rect(1, 1, bitmapWidth-2, bitmapHeight-2); //Crops out a border of pixels

        //
        // Note about D2D behavior: GetImageLocalBounds and GetImageWorldBounds
        // are impacted by DPI and unit mode, but not in the most obvious way. 
        //
        // They return a result in DIPs. So for simple cases, an image drawn at
        // 100% DPI will have the same GetImage*Bounds compared to 200% DPI.
        // Simply switching the unit mode won't have a huge effect, either.
        //
        // DPI *does* matter, for these functions, for the following two
        // reasons:
        // 1) Precision. D2D does a lot of internal calculations in pixels,
        // especially for text. Switching DPI affects these calculations, so
        // the bounds will be slightly different, even though they're in DIPs.
        // 2) Custom effects. The built-in effects respect DPI, but one could
        // easily build a custom effect which does not.
        //
        // That's why, even though DPI affects GetBounds, this test does not 
        // verify that the returned bounds are scaled by the unit mode and 
        // DPI. In fact, it verifies that the returned bounds are the same.
        //
        // This test is supplemented by the internal test
        // CanvasImage_GetBounds_CorrectContext. This test verifies the 
        // correctness of the returned bounds. The internal test verifies that
        // GetBounds calls the correct APIs, uses the correct drawing
        // session and device context.
        //


        for (float dpi : dpiCases)
        {
            for (CanvasUnits units : unitModeCases)
            {
                for (int imageCase = 0; imageCase < 2; imageCase++)
                {
                    auto renderTargetBitmap = ref new CanvasRenderTarget(
                        device,
                        1,
                        1,
                        dpi,
                        DirectXPixelFormat::B8G8R8A8UIntNormalized,
                        CanvasAlphaMode::Premultiplied);

                    ICanvasImage^ testImage;
                    Rect expectedBounds;
                    if (imageCase == 0)
                    {
                        testImage = cropEffect;
                        expectedBounds = Rect(cropEffect->SourceRectangle.X,
                                              cropEffect->SourceRectangle.Y,
                                              cropEffect->SourceRectangle.Width,
                                              cropEffect->SourceRectangle.Height);
                    }
                    else
                    {
                        testImage = sourceBitmap;
                        expectedBounds = Rect(0, 0, bitmapWidth, bitmapHeight);
                    }

                    float3x2 someTransform = { 1, 2, 3, 5, 8, 13 };
                    float3x2 scaleAndTranslate = { 2, 0, 0, 2, 123, 456 };

                    CanvasDrawingSession^ drawingSession = renderTargetBitmap->CreateDrawingSession();
                    drawingSession->Transform = someTransform;
                    drawingSession->Units = units;
                    
                    // Without specifying transform. Ensure returned bounds are correct.
                    Rect bounds = testImage->GetBounds(drawingSession);
                    Assert::AreEqual(expectedBounds, bounds);

                    // Ensure GetBounds didn't scramble the transform.
                    Assert::AreEqual<float3x2>(someTransform, drawingSession->Transform);

                    // While specifying transform. Ensure returned bounds are correct.
                    bounds = testImage->GetBounds(drawingSession, scaleAndTranslate);
                    Assert::AreEqual(Rect(
                        scaleAndTranslate.m31 + (expectedBounds.Left * scaleAndTranslate.m11),
                        scaleAndTranslate.m32 + (expectedBounds.Top * scaleAndTranslate.m22),
                        expectedBounds.Width * scaleAndTranslate.m11,
                        expectedBounds.Height * scaleAndTranslate.m22), bounds);

                    // Ensure GetBounds didn't scramble the transform.
                    Assert::AreEqual<float3x2>(someTransform, drawingSession->Transform);
                }
            }
        }
    }
};
