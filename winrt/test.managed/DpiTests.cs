// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using Microsoft.Graphics.Canvas;

namespace test.managed
{
    [TestClass]
    public class DpiTests
    {
        [TestMethod]
        public void RenderTargetDpiTest()
        {
            const float defaultDpi = 96;
            const float highDpi = defaultDpi * 2;
            const float size = 100;
            const float fractionalSize = 100.8f;

            var device = new CanvasDevice();

            var renderTargetDefault = new CanvasRenderTarget(device, size, size, defaultDpi);
            var renderTargetHigh = new CanvasRenderTarget(device, size, size, highDpi);
            var renderTargetFractionalSize = new CanvasRenderTarget(device, fractionalSize, fractionalSize, highDpi);

            // Check each rendertarget reports the expected DPI.
            Assert.AreEqual(defaultDpi, renderTargetDefault.Dpi);
            Assert.AreEqual(highDpi, renderTargetHigh.Dpi);
            Assert.AreEqual(highDpi, renderTargetFractionalSize.Dpi);

            // Check each rendertarget is of the expected size.
            Assert.AreEqual(size, renderTargetDefault.Size.Width);
            Assert.AreEqual(size, renderTargetDefault.Size.Height);

            Assert.AreEqual(size, renderTargetHigh.Size.Width);
            Assert.AreEqual(size, renderTargetHigh.Size.Height);

            Assert.AreEqual(Math.Round(fractionalSize), renderTargetFractionalSize.Size.Width);
            Assert.AreEqual(Math.Round(fractionalSize), renderTargetFractionalSize.Size.Height);

            // Check sizes in pixels.
            Assert.AreEqual(size, renderTargetDefault.SizeInPixels.Width);
            Assert.AreEqual(size, renderTargetDefault.SizeInPixels.Height);

            Assert.AreEqual(size * highDpi / defaultDpi, renderTargetHigh.SizeInPixels.Width);
            Assert.AreEqual(size * highDpi / defaultDpi, renderTargetHigh.SizeInPixels.Height);

            Assert.AreEqual(Math.Round(fractionalSize * highDpi / defaultDpi), renderTargetFractionalSize.SizeInPixels.Width);
            Assert.AreEqual(Math.Round(fractionalSize * highDpi / defaultDpi), renderTargetFractionalSize.SizeInPixels.Height);

            // Check that drawing sessions inherit the DPI of the rendertarget being drawn onto.
            var drawingSessionDefault = renderTargetDefault.CreateDrawingSession();
            var drawingSessionHigh = renderTargetHigh.CreateDrawingSession();

            Assert.AreEqual(defaultDpi, drawingSessionDefault.Dpi);
            Assert.AreEqual(highDpi, drawingSessionHigh.Dpi);
        }


        [TestMethod]
        public void RenderTargetInheritsDpiFromResourceCreator()
        {
            const float defaultDpi = 96;
            const float highDpi = 144;

            var device = new CanvasDevice();

            var renderTargetDefault = new CanvasRenderTarget(new TestResourceCreator(device, defaultDpi), 1, 1);
            var renderTargetHigh = new CanvasRenderTarget(new TestResourceCreator(device, highDpi), 1, 1);

            Assert.AreEqual(defaultDpi, renderTargetDefault.Dpi);
            Assert.AreEqual(highDpi, renderTargetHigh.Dpi);
        }


        class TestResourceCreator : ICanvasResourceCreatorWithDpi
        {
            public TestResourceCreator(CanvasDevice device, float dpi)
            {
                Device = device;
                Dpi = dpi;
            }

            public CanvasDevice Device
            {
                get; private set;
            }

            public float Dpi
            {
                get; private set;
            }

            public int ConvertDipsToPixels(float dips, CanvasDpiRounding roundingBehavior) { throw new NotImplementedException(); }
            public float ConvertPixelsToDips(int pixels) { throw new NotImplementedException(); }
        }
    }
}
