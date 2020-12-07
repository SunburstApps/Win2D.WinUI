// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas
{
    using namespace ABI::Microsoft::Graphics::Canvas::Geometry;
    using namespace ABI::Microsoft::Graphics::Canvas::Numerics;
    using namespace ABI::Windows::Foundation;

#if WINVER > _WIN32_WINNT_WINBLUE
    using namespace ABI::Windows::UI::Input::Inking;
    using namespace ABI::Windows::UI::ViewManagement;
    using namespace ABI::Microsoft::Graphics::Canvas::Svg;
#endif

    using namespace ::Microsoft::WRL;

    class ICanvasDrawingSessionAdapter
    {
    public:
        virtual ~ICanvasDrawingSessionAdapter() = default;

        virtual void EndDraw(ID2D1DeviceContext1* d2dDeviceContext) = 0;
    };

#if WINVER > _WIN32_WINNT_WINBLUE
    class DefaultInkAdapter;

    class InkAdapter : public Singleton<InkAdapter, DefaultInkAdapter>
    {
    public:
        virtual ~InkAdapter() = default;

        virtual ComPtr<IInkD2DRenderer> CreateInkRenderer() = 0;
        virtual bool IsHighContrastEnabled() = 0;
    };

    class DefaultInkAdapter : public InkAdapter
    {
        ComPtr<IAccessibilitySettings> m_accessibilitySettings;

    public:
        virtual ComPtr<IInkD2DRenderer> CreateInkRenderer() override;
        virtual bool IsHighContrastEnabled() override;
    };
#endif

    class CanvasDrawingSession : RESOURCE_WRAPPER_RUNTIME_CLASS(
        ID2D1DeviceContext1,
        CanvasDrawingSession,
        ICanvasDrawingSession,
        ICanvasResourceCreatorWithDpi,
        ICanvasResourceCreator)
    {
        InspectableClass(RuntimeClass_Microsoft_Graphics_Canvas_CanvasDrawingSession, BaseTrust);

        std::shared_ptr<ICanvasDrawingSessionAdapter> m_adapter;
        std::shared_ptr<bool> m_targetHasActiveDrawingSession;
        D2D1_POINT_2F const m_offset;
        
        ComPtr<ID2D1SolidColorBrush> m_solidColorBrush;
        ComPtr<ICanvasTextFormat> m_defaultTextFormat;

        std::vector<int> m_activeLayerIds;
        int m_nextLayerId;

        //
        // Contract:
        //     Drawing sessions created conventionally initialize this member.
        //     Drawing sessions created through interop set this member to null.
        //
        //     The thing this affects is DrawingSession's use as an ICanvasResourceCreator.
        //     If the backpointer is initialized, that is the resource creator's device.
        //     If the backpointer is null, a CanvasDevice wrapper is produced based on 
        //     this drawing session's device context. That wrapper is created on demand 
        //     by get_Device.
        //
        ComPtr<ICanvasDevice> m_owner;

#if WINVER > _WIN32_WINNT_WINBLUE
        ComPtr<IInkD2DRenderer> m_inkD2DRenderer;
        ComPtr<ID2D1DrawingStateBlock1> m_inkStateBlock;
#endif

    public:
        static ComPtr<CanvasDrawingSession> CreateNew(
            ID2D1DeviceContext1* deviceContext,
            std::shared_ptr<ICanvasDrawingSessionAdapter> drawingSessionAdapter,
            ICanvasDevice* owner = nullptr,
            std::shared_ptr<bool> targetHasActiveDrawingSession = nullptr,
            D2D1_POINT_2F offset = D2D1_POINT_2F{ 0, 0 });

        CanvasDrawingSession(
            ID2D1DeviceContext1* deviceContext,
            std::shared_ptr<ICanvasDrawingSessionAdapter> drawingSessionAdapter = nullptr,
            ICanvasDevice* owner = nullptr,
            std::shared_ptr<bool> targetHasActiveDrawingSession = nullptr,
            D2D1_POINT_2F offset = D2D1_POINT_2F{ 0, 0 });


        virtual ~CanvasDrawingSession();

        // IClosable

        IFACEMETHOD(Close)() override;

        // ICanvasDrawingSession

        IFACEMETHOD(Clear)(
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(ClearHdr)(
            Vector4 colorHdr) override;

        IFACEMETHOD(Flush)() override;

        // 
        // DrawImage
        // 

        static float DefaultDrawImageOpacity() { return 1.0f; }
        static CanvasImageInterpolation DefaultDrawImageInterpolation() { return CanvasImageInterpolation::Linear; }
        // Default value for Composite comes from GetCompositeModeFromPrimitiveBlend

        IFACEMETHOD(DrawImageAtOrigin)(
            ICanvasImage* image) override;

        IFACEMETHOD(DrawImageAtOffset)(
            ICanvasImage* image, 
            Vector2 offset) override;

        IFACEMETHOD(DrawImageAtCoords)(
            ICanvasImage* image, 
            float x,
            float y) override;

        IFACEMETHOD(DrawImageToRect)(
            ICanvasBitmap* bitmap, 
            Rect destinationRectangle) override;

        IFACEMETHOD(DrawImageAtOffsetWithSourceRect)(
            ICanvasImage* image, 
            Vector2 offset,
            Rect sourceRectangle) override;

        IFACEMETHOD(DrawImageAtCoordsWithSourceRect)(
            ICanvasImage* image, 
            float x,
            float y,
            Rect sourceRectangle) override;

        IFACEMETHOD(DrawImageToRectWithSourceRect)(
            ICanvasImage* image,
            Rect destinationRectangle,
            Rect sourceRectangle) override;

        IFACEMETHOD(DrawImageAtOffsetWithSourceRectAndOpacity)(
            ICanvasImage* image, 
            Vector2 offset,
            Rect sourceRectangle,
            float opacity) override;

        IFACEMETHOD(DrawImageAtCoordsWithSourceRectAndOpacity)(
            ICanvasImage* image, 
            float x,
            float y,
            Rect sourceRectangle,
            float opacity) override;

        IFACEMETHOD(DrawImageToRectWithSourceRectAndOpacity)(
            ICanvasImage* image,
            Rect destinationRectangle,
            Rect sourceRectangle,
            float opacity) override;

        IFACEMETHOD(DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolation)(
            ICanvasImage* image, 
            Vector2 offset,
            Rect sourceRectangle,
            float opacity,
            CanvasImageInterpolation interpolation) override;

        IFACEMETHOD(DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolation)(
            ICanvasImage* image, 
            float x,
            float y,
            Rect sourceRectangle,
            float opacity,
            CanvasImageInterpolation interpolation) override;

        IFACEMETHOD(DrawImageToRectWithSourceRectAndOpacityAndInterpolation)(
            ICanvasImage* image,
            Rect destinationRectangle,
            Rect sourceRectangle,
            float opacity,
            CanvasImageInterpolation interpolation) override;

        IFACEMETHOD(DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndComposite)(
            ICanvasImage* image, 
            Vector2 offset,
            Rect sourceRectangle,
            float opacity,
            CanvasImageInterpolation interpolation,
            CanvasComposite composite) override;

        IFACEMETHOD(DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndComposite)(
            ICanvasImage* image, 
            float x,
            float y,
            Rect sourceRectangle,
            float opacity,
            CanvasImageInterpolation interpolation,
            CanvasComposite composite) override;

        IFACEMETHOD(DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndComposite)(
            ICanvasImage* image,
            Rect destinationRectangle,
            Rect sourceRectangle,
            float opacity,
            CanvasImageInterpolation interpolation,
            CanvasComposite composite) override;

        IFACEMETHOD(DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndPerspective)(
            ICanvasBitmap* bitmap, 
            Vector2 offset,
            Rect sourceRectangle,
            float opacity,
            CanvasImageInterpolation interpolation,
            Matrix4x4 perspective) override;

        IFACEMETHOD(DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndPerspective)(
            ICanvasBitmap* bitmap, 
            float x,
            float y,
            Rect sourceRectangle,
            float opacity,
            CanvasImageInterpolation interpolation,
            Matrix4x4 perspective) override;

        IFACEMETHOD(DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndPerspective)(
            ICanvasBitmap* bitmap,
            Rect destinationRectangle,
            Rect sourceRectangle,
            float opacity,
            CanvasImageInterpolation interpolation,
            Matrix4x4 perspective) override;

        //
        // DrawLine
        //
        
        // 0 additional parameters

        IFACEMETHOD(DrawLineWithBrush)(
            Vector2 point0,
            Vector2 point1,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawLineAtCoordsWithBrush)(
            float x0,
            float y0,
            float x1,
            float y1,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawLineWithColor)(
            Vector2 point0,
            Vector2 point1,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawLineAtCoordsWithColor)(
            float x0,
            float y0,
            float x1,
            float y1,
            ABI::Windows::UI::Color color) override;

        // 1 additional parameter (StrokeWidth)

        IFACEMETHOD(DrawLineWithBrushAndStrokeWidth)(
            Vector2 point0,
            Vector2 point1,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawLineAtCoordsWithBrushAndStrokeWidth)(
            float x0,
            float y0,
            float x1,
            float y1,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawLineWithColorAndStrokeWidth)(
            Vector2 point0,
            Vector2 point1,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        IFACEMETHOD(DrawLineAtCoordsWithColorAndStrokeWidth)(
            float x0,
            float y0,
            float x1,
            float y1,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        // 2 additional parameters (StrokeWidth, StrokeStyle)

        IFACEMETHOD(DrawLineWithBrushAndStrokeWidthAndStrokeStyle)(
            Vector2 point0,
            Vector2 point1,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawLineAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(
            float x0,
            float y0,
            float x1,
            float y1,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawLineWithColorAndStrokeWidthAndStrokeStyle)(
            Vector2 point0,
            Vector2 point1,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawLineAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(
            float x0,
            float y0,
            float x1,
            float y1,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        //
        // DrawRectangle
        //

        // 0 additional parameters

        IFACEMETHOD(DrawRectangleWithBrush)(
            ABI::Windows::Foundation::Rect rect,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawRectangleAtCoordsWithBrush)(
            float x,
            float y,
            float w,
            float h,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawRectangleWithColor)(
            ABI::Windows::Foundation::Rect rect,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawRectangleAtCoordsWithColor)(
            float x,
            float y,
            float w,
            float h,
            ABI::Windows::UI::Color color) override;

        // 1 additional parameter (StrokeWidth)

        IFACEMETHOD(DrawRectangleWithBrushAndStrokeWidth)(
            ABI::Windows::Foundation::Rect rect,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawRectangleAtCoordsWithBrushAndStrokeWidth)(
            float x,
            float y,
            float w,
            float h,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawRectangleWithColorAndStrokeWidth)(
            ABI::Windows::Foundation::Rect rect,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        IFACEMETHOD(DrawRectangleAtCoordsWithColorAndStrokeWidth)(
            float x,
            float y,
            float w,
            float h,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        // 2 additional parameters (StrokeWidth, StrokeStyle)

        IFACEMETHOD(DrawRectangleWithBrushAndStrokeWidthAndStrokeStyle)(
            ABI::Windows::Foundation::Rect rect,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(
            float x,
            float y,
            float w,
            float h,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawRectangleWithColorAndStrokeWidthAndStrokeStyle)(
            ABI::Windows::Foundation::Rect rect,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(
            float x,
            float y,
            float w,
            float h,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        //
        // FillRectangle
        //

        IFACEMETHOD(FillRectangleWithBrush)(
            ABI::Windows::Foundation::Rect rect,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillRectangleAtCoordsWithBrush)(
            float x,
            float y,
            float w,
            float h,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillRectangleWithColor)(
            ABI::Windows::Foundation::Rect rect,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(FillRectangleAtCoordsWithColor)(
            float x,
            float y,
            float w,
            float h,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(FillRectangleWithBrushAndOpacityBrush)(
            ABI::Windows::Foundation::Rect rect,
            ICanvasBrush* brush,
            ICanvasBrush* opacityBrush) override;

        IFACEMETHOD(FillRectangleAtCoordsWithBrushAndOpacityBrush)(
            float x,
            float y,
            float w,
            float h,
            ICanvasBrush* brush,
            ICanvasBrush* opacityBrush) override;

        //
        // DrawRoundedRectangle
        //

        // 0 additional parameters

        IFACEMETHOD(DrawRoundedRectangleWithBrush)(
            ABI::Windows::Foundation::Rect rect,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawRoundedRectangleAtCoordsWithBrush)(
            float x,
            float y,
            float w,
            float h,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawRoundedRectangleWithColor)(
            ABI::Windows::Foundation::Rect rect,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawRoundedRectangleAtCoordsWithColor)(
            float x,
            float y,
            float w,
            float h,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color) override;

        // 1 additional parameter (StrokeWidth)

        IFACEMETHOD(DrawRoundedRectangleWithBrushAndStrokeWidth)(
            ABI::Windows::Foundation::Rect rect,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidth)(
            float x,
            float y,
            float w,
            float h,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawRoundedRectangleWithColorAndStrokeWidth)(
            ABI::Windows::Foundation::Rect rect,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        IFACEMETHOD(DrawRoundedRectangleAtCoordsWithColorAndStrokeWidth)(
            float x,
            float y,
            float w,
            float h,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        // 2 additional parameters (StrokeWidth, StrokeStyle)

        IFACEMETHOD(DrawRoundedRectangleWithBrushAndStrokeWidthAndStrokeStyle)(
            ABI::Windows::Foundation::Rect rect,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(
            float x,
            float y,
            float w,
            float h,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawRoundedRectangleWithColorAndStrokeWidthAndStrokeStyle)(
            ABI::Windows::Foundation::Rect rect,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawRoundedRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(
            float x,
            float y,
            float w,
            float h,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        //
        // FillRoundedRectangle
        //
        
        IFACEMETHOD(FillRoundedRectangleWithBrush)(
            ABI::Windows::Foundation::Rect rect,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillRoundedRectangleAtCoordsWithBrush)(
            float x,
            float y,
            float w,
            float h,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillRoundedRectangleWithColor)(
            ABI::Windows::Foundation::Rect rect,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(FillRoundedRectangleAtCoordsWithColor)(
            float x,
            float y,
            float w,
            float h,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color) override;

        //
        // DrawEllipse
        //

        // 0 additional parameters
        
        IFACEMETHOD(DrawEllipseWithBrush)(
            Vector2 centerPoint,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawEllipseAtCoordsWithBrush)(
            float x,
            float y,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawEllipseWithColor)(
            Vector2 centerPoint,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawEllipseAtCoordsWithColor)(
            float x,
            float y,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color) override;

        // 1 additional parameter (StrokeWidth)

        IFACEMETHOD(DrawEllipseWithBrushAndStrokeWidth)(
            Vector2 centerPoint,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawEllipseAtCoordsWithBrushAndStrokeWidth)(
            float x,
            float y,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawEllipseWithColorAndStrokeWidth)(
            Vector2 centerPoint,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        IFACEMETHOD(DrawEllipseAtCoordsWithColorAndStrokeWidth)(
            float x,
            float y,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        // 2 additional parameters (StrokeWidth, StrokeStyle)

        IFACEMETHOD(DrawEllipseWithBrushAndStrokeWidthAndStrokeStyle)(
            Vector2 centerPoint,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawEllipseAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(
            float x,
            float y,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawEllipseWithColorAndStrokeWidthAndStrokeStyle)(
            Vector2 centerPoint,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawEllipseAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(
            float x,
            float y,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        //
        // FillEllipse
        //

        IFACEMETHOD(FillEllipseWithBrush)(
            Vector2 centerPoint,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillEllipseAtCoordsWithBrush)(
            float x,
            float y,
            float radiusX,
            float radiusY,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillEllipseWithColor)(
            Vector2 centerPoint,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(FillEllipseAtCoordsWithColor)(
            float x,
            float y,
            float radiusX,
            float radiusY,
            ABI::Windows::UI::Color color) override;

        //
        // DrawCircle
        //

        // 0 additional parameters
        
        IFACEMETHOD(DrawCircleWithBrush)(
            Vector2 centerPoint,
            float radius,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawCircleAtCoordsWithBrush)(
            float x,
            float y,
            float radius,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawCircleWithColor)(
            Vector2 centerPoint,
            float radius,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawCircleAtCoordsWithColor)(
            float x,
            float y,
            float radius,
            ABI::Windows::UI::Color color) override;

        // 1 additional parameter (StrokeWidth)

        IFACEMETHOD(DrawCircleWithBrushAndStrokeWidth)(
            Vector2 centerPoint,
            float radius,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawCircleAtCoordsWithBrushAndStrokeWidth)(
            float x,
            float y,
            float radius,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawCircleWithColorAndStrokeWidth)(
            Vector2 centerPoint,
            float radius,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        IFACEMETHOD(DrawCircleAtCoordsWithColorAndStrokeWidth)(
            float x,
            float y,
            float radius,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        // 2 additional parameters (StrokeWidth, StrokeStyle)

        IFACEMETHOD(DrawCircleWithBrushAndStrokeWidthAndStrokeStyle)(
            Vector2 centerPoint,
            float radius,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawCircleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(
            float x,
            float y,
            float radius,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawCircleWithColorAndStrokeWidthAndStrokeStyle)(
            Vector2 centerPoint,
            float radius,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawCircleAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(
            float x,
            float y,
            float radius,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        //
        // FillCircle
        //

        IFACEMETHOD(FillCircleWithBrush)(
            Vector2 centerPoint,
            float radius,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillCircleAtCoordsWithBrush)(
            float x,
            float y,
            float radius,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillCircleWithColor)(
            Vector2 centerPoint,
            float radius,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(FillCircleAtCoordsWithColor)(
            float x,
            float y,
            float radius,
            ABI::Windows::UI::Color color) override;

        //
        // DrawText
        //

        // 0 additional parameters

        IFACEMETHOD(DrawTextAtPointWithColor)(
            HSTRING text,
            Vector2 point,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawTextAtPointCoordsWithColor)(
            HSTRING text,
            float x,
            float y,
            ABI::Windows::UI::Color color) override;

        // 1 additional parameter (TextFormat)

        IFACEMETHOD(DrawTextAtPointWithBrushAndFormat)(
            HSTRING text,
            Vector2 point,
            ICanvasBrush* brush,
            ICanvasTextFormat* format) override;

        IFACEMETHOD(DrawTextAtRectWithBrushAndFormat)(
            HSTRING text,
            ABI::Windows::Foundation::Rect rectangle,
            ICanvasBrush* brush,
            ICanvasTextFormat* format) override;

        IFACEMETHOD(DrawTextAtPointCoordsWithBrushAndFormat)(
            HSTRING text,
            float x,
            float y,
            ICanvasBrush* brush,
            ICanvasTextFormat* format) override;

        IFACEMETHOD(DrawTextAtRectCoordsWithBrushAndFormat)(
            HSTRING text,
            float x,
            float y,
            float w,
            float h,
            ICanvasBrush* brush,
            ICanvasTextFormat* format) override;

        IFACEMETHOD(DrawTextAtPointWithColorAndFormat)(
            HSTRING text,
            Vector2 point,
            ABI::Windows::UI::Color color,
            ICanvasTextFormat* format) override;

        IFACEMETHOD(DrawTextAtRectWithColorAndFormat)(
            HSTRING text,
            ABI::Windows::Foundation::Rect rectangle,
            ABI::Windows::UI::Color color,
            ICanvasTextFormat* format) override;

        IFACEMETHOD(DrawTextAtPointCoordsWithColorAndFormat)(
            HSTRING text,
            float x,
            float y,
            ABI::Windows::UI::Color color,
            ICanvasTextFormat* format) override;

        IFACEMETHOD(DrawTextAtRectCoordsWithColorAndFormat)(
            HSTRING text,
            float x,
            float y,
            float w,
            float h,
            ABI::Windows::UI::Color color,
            ICanvasTextFormat* format) override;

        //
        // DrawTextLayout
        //
                        
        IFACEMETHOD(DrawTextLayoutWithBrush)(
            ICanvasTextLayout* textLayout,
            Numerics::Vector2 point,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawTextLayoutAtCoordsWithBrush)(
            ICanvasTextLayout* textLayout,
            float x,
            float y,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawTextLayoutWithColor)(
            ICanvasTextLayout* textLayout,
            Numerics::Vector2 point,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawTextLayoutAtCoordsWithColor)(
            ICanvasTextLayout* textLayout,
            float x,
            float y,
            ABI::Windows::UI::Color color) override;
        
        //
        // DrawGeometry
        //

        // 0 additional parameters
        
        IFACEMETHOD(DrawGeometryWithBrush)(
            ICanvasGeometry* geometry,
            Vector2 offset,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawGeometryWithColor)(
            ICanvasGeometry* geometry,
            Vector2 offset,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawGeometryAtCoordsWithBrush)(
            ICanvasGeometry* geometry,
            float x,
            float y,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawGeometryAtCoordsWithColor)(
            ICanvasGeometry* geometry,
            float x,
            float y,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawGeometryAtOriginWithBrush)(
            ICanvasGeometry* geometry,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawGeometryAtOriginWithColor)(
            ICanvasGeometry* geometry,
            ABI::Windows::UI::Color color) override;

        // 1 additional parameter (StrokeWidth)

        IFACEMETHOD(DrawGeometryWithBrushAndStrokeWidth)(
            ICanvasGeometry* geometry,
            Vector2 offset,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawGeometryWithColorAndStrokeWidth)(
            ICanvasGeometry* geometry,
            Vector2 offset,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        IFACEMETHOD(DrawGeometryAtCoordsWithBrushAndStrokeWidth)(
            ICanvasGeometry* geometry,
            float x,
            float y,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawGeometryAtCoordsWithColorAndStrokeWidth)(
            ICanvasGeometry* geometry,
            float x,
            float y,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        IFACEMETHOD(DrawGeometryAtOriginWithBrushAndStrokeWidth)(
            ICanvasGeometry* geometry,
            ICanvasBrush* brush,
            float strokeWidth) override;

        IFACEMETHOD(DrawGeometryAtOriginWithColorAndStrokeWidth)(
            ICanvasGeometry* geometry,
            ABI::Windows::UI::Color color,
            float strokeWidth) override;

        // 2 additional parameters (StrokeWidth, StrokeStyle)

        IFACEMETHOD(DrawGeometryWithBrushAndStrokeWidthAndStrokeStyle)(
            ICanvasGeometry* geometry,
            Vector2 offset,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawGeometryWithColorAndStrokeWidthAndStrokeStyle)(
            ICanvasGeometry* geometry,
            Vector2 offset,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawGeometryAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(
            ICanvasGeometry* geometry,
            float x,
            float y,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawGeometryAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(
            ICanvasGeometry* geometry,
            float x,
            float y,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        IFACEMETHOD(DrawGeometryAtOriginWithBrushAndStrokeWidthAndStrokeStyle)(
            ICanvasGeometry* geometry,
            ICanvasBrush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;


        IFACEMETHOD(DrawGeometryAtOriginWithColorAndStrokeWidthAndStrokeStyle)(
            ICanvasGeometry* geometry,
            ABI::Windows::UI::Color color,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle) override;

        //
        // FillGeometry
        //

        IFACEMETHOD(FillGeometryWithBrush)(
            ICanvasGeometry* geometry,
            Vector2 offset,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillGeometryWithBrushAndOpacityBrush)(
            ICanvasGeometry* geometry,
            Vector2 offset,
            ICanvasBrush* brush,
            ICanvasBrush* opacityBrush) override;

        IFACEMETHOD(FillGeometryWithColor)(
            ICanvasGeometry* geometry,
            Vector2 offset,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(FillGeometryAtCoordsWithBrush)(
            ICanvasGeometry* geometry,
            float x,
            float y,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillGeometryAtCoordsWithBrushAndOpacityBrush)(
            ICanvasGeometry* geometry,
            float x,
            float y,
            ICanvasBrush* brush,
            ICanvasBrush* opacityBrush) override;

        IFACEMETHOD(FillGeometryAtCoordsWithColor)(
            ICanvasGeometry* geometry,
            float x,
            float y,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(FillGeometryAtOriginWithBrush)(
            ICanvasGeometry* geometry,
            ICanvasBrush* brush) override;

        IFACEMETHOD(FillGeometryAtOriginWithBrushAndOpacityBrush)(
            ICanvasGeometry* geometry,
            ICanvasBrush* brush,
            ICanvasBrush* opacityBrush) override;

        IFACEMETHOD(FillGeometryAtOriginWithColor)(
            ICanvasGeometry* geometry,
            ABI::Windows::UI::Color color) override;

        //
        // DrawCachedGeometry
        //

        IFACEMETHOD(DrawCachedGeometryWithBrush)(
            ICanvasCachedGeometry* cachedGeometry,
            Vector2 offset,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawCachedGeometryWithColor)(
            ICanvasCachedGeometry* cachedGeometry,
            Vector2 offset,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawCachedGeometryAtCoordsWithBrush)(
            ICanvasCachedGeometry* cachedGeometry,
            float x,
            float y,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawCachedGeometryAtCoordsWithColor)(
            ICanvasCachedGeometry* cachedGeometry,
            float x,
            float y,
            ABI::Windows::UI::Color color) override;

        IFACEMETHOD(DrawCachedGeometryAtOriginWithBrush)(
            ICanvasCachedGeometry* cachedGeometry,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawCachedGeometryAtOriginWithColor)(
            ICanvasCachedGeometry* cachedGeometry,
            ABI::Windows::UI::Color color) override;

#if WINVER > _WIN32_WINNT_WINBLUE
        //
        // DrawInk
        //
        IFACEMETHOD(DrawInk)(IIterable<InkStroke*>* inkStrokes) override;

        IFACEMETHOD(DrawInkWithHighContrast)(IIterable<InkStroke*>* inkStrokes, boolean highContrast) override;
        
        //
        // DrawGradientMesh
        //
        IFACEMETHOD(DrawGradientMeshAtOrigin)(ICanvasGradientMesh* gradientMesh) override;

        IFACEMETHOD(DrawGradientMesh)(ICanvasGradientMesh* gradientMesh, Vector2 point) override;

        IFACEMETHOD(DrawGradientMeshAtCoords)(ICanvasGradientMesh* gradientMesh, float x, float y) override;

        IFACEMETHOD(DrawSvgAtOrigin)(ICanvasSvgDocument *svgDocument, Size viewportSize) override;

        IFACEMETHOD(DrawSvgAtPoint)(ICanvasSvgDocument *svgDocument, Size viewportSize, Vector2 point) override;

        IFACEMETHOD(DrawSvgAtCoords)(ICanvasSvgDocument *svgDocument, Size viewportSize, float x, float y) override;

#endif

        //
        // State properties
        //

        IFACEMETHOD(get_Antialiasing)(CanvasAntialiasing* value) override;
        IFACEMETHOD(put_Antialiasing)(CanvasAntialiasing value) override;

        IFACEMETHOD(get_Blend)(CanvasBlend* value) override;
        IFACEMETHOD(put_Blend)(CanvasBlend value) override;

        IFACEMETHOD(get_TextAntialiasing)(CanvasTextAntialiasing* value) override;
        IFACEMETHOD(put_TextAntialiasing)(CanvasTextAntialiasing value) override;

        IFACEMETHOD(get_TextRenderingParameters)(ICanvasTextRenderingParameters** value) override;
        IFACEMETHOD(put_TextRenderingParameters)(ICanvasTextRenderingParameters* value) override;

        IFACEMETHOD(get_Transform)(ABI::Microsoft::Graphics::Canvas::Numerics::Matrix3x2* value) override;
        IFACEMETHOD(put_Transform)(ABI::Microsoft::Graphics::Canvas::Numerics::Matrix3x2 value) override;

        IFACEMETHOD(get_Units)(CanvasUnits* value) override;
        IFACEMETHOD(put_Units)(CanvasUnits value) override;

        IFACEMETHOD(get_EffectBufferPrecision)(IReference<CanvasBufferPrecision>** value) override;
        IFACEMETHOD(put_EffectBufferPrecision)(IReference<CanvasBufferPrecision>* value) override;

        IFACEMETHOD(get_EffectTileSize)(BitmapSize* value) override;
        IFACEMETHOD(put_EffectTileSize)(BitmapSize value) override;

        //
        // CreateLayer
        //

        IFACEMETHOD(CreateLayerWithOpacity)(
            float opacity,
            ICanvasActiveLayer** layer) override;

        IFACEMETHOD(CreateLayerWithOpacityBrush)(
            ICanvasBrush* opacityBrush,
            ICanvasActiveLayer** layer) override;

        IFACEMETHOD(CreateLayerWithOpacityAndClipRectangle)(
            float opacity,
            Rect clipRectangle,
            ICanvasActiveLayer** layer) override;

        IFACEMETHOD(CreateLayerWithOpacityBrushAndClipRectangle)(
            ICanvasBrush* opacityBrush,
            Rect clipRectangle,
            ICanvasActiveLayer** layer) override;

        IFACEMETHOD(CreateLayerWithOpacityAndClipGeometry)(
            float opacity,
            ICanvasGeometry* clipGeometry,
            ICanvasActiveLayer** layer) override;

        IFACEMETHOD(CreateLayerWithOpacityBrushAndClipGeometry)(
            ICanvasBrush* opacityBrush,
            ICanvasGeometry* clipGeometry,
            ICanvasActiveLayer** layer) override;

        IFACEMETHOD(CreateLayerWithOpacityAndClipGeometryAndTransform)(
            float opacity,
            ICanvasGeometry* clipGeometry,
            Matrix3x2 geometryTransform,
            ICanvasActiveLayer** layer) override;

        IFACEMETHOD(CreateLayerWithOpacityBrushAndClipGeometryAndTransform)(
            ICanvasBrush* opacityBrush,
            ICanvasGeometry* clipGeometry,
            Matrix3x2 geometryTransform,
            ICanvasActiveLayer** layer) override;

        IFACEMETHOD(CreateLayerWithAllOptions)(
            float opacity,
            ICanvasBrush* opacityBrush,
            Rect clipRectangle,
            ICanvasGeometry* clipGeometry,
            Matrix3x2 geometryTransform,
            CanvasLayerOptions options,
            ICanvasActiveLayer** layer) override;

        
        IFACEMETHOD(DrawGlyphRun)(
            Vector2 point,
            ICanvasFontFace* fontFace,
            float fontSize,
            uint32_t glyphCount,
            CanvasGlyph* glyphs,
            boolean isSideways,
            uint32_t bidiLevel,
            ICanvasBrush* brush) override;

        IFACEMETHOD(DrawGlyphRunWithMeasuringMode)(
            Vector2 point,
            ICanvasFontFace* fontFace,
            float fontSize,
            uint32_t glyphCount,
            CanvasGlyph* glyphs,
            boolean isSideways,
            uint32_t bidiLevel,
            ICanvasBrush* brush,
            CanvasTextMeasuringMode textMeasuringMode) override;

        IFACEMETHOD(DrawGlyphRunWithMeasuringModeAndDescription)(
            Vector2 point,
            ICanvasFontFace* fontFace,
            float fontSize,
            uint32_t glyphCount,
            CanvasGlyph* glyphs,
            boolean isSideways,
            uint32_t bidiLevel,
            ICanvasBrush* brush,
            CanvasTextMeasuringMode textMeasuringMode,
            HSTRING localeName,
            HSTRING textString,
            uint32_t clusterMapIndicesCount,
            int* clusterMapIndices,
            uint32_t textPosition) override;


#if WINVER > _WIN32_WINNT_WINBLUE

        //
        // CreateSpriteBatch
        //

        IFACEMETHOD(CreateSpriteBatch)(
            ICanvasSpriteBatch** spriteBatch) override;

        IFACEMETHOD(CreateSpriteBatchWithSortMode)(
            CanvasSpriteSortMode sortMode,
            ICanvasSpriteBatch** spriteBatch) override;

        IFACEMETHOD(CreateSpriteBatchWithSortModeAndInterpolation)(
            CanvasSpriteSortMode sortMode,
            CanvasImageInterpolation interpolation,
            ICanvasSpriteBatch** spriteBatch) override;

        IFACEMETHOD(CreateSpriteBatchWithSortModeAndInterpolationAndOptions)(
            CanvasSpriteSortMode sortMode,
            CanvasImageInterpolation interpolation,
            CanvasSpriteOptions options,
            ICanvasSpriteBatch** spriteBatch) override;

#endif

        //
        // ICanvasResourceCreator
        //

        IFACEMETHODIMP get_Device(ICanvasDevice** value) override;

        //
        // ICanvasResourceCreatorWithDpi
        //

        IFACEMETHODIMP get_Dpi(float* dpi) override;

        IFACEMETHODIMP ConvertPixelsToDips(int pixels, float* dips) override;
        IFACEMETHODIMP ConvertDipsToPixels(float dips, CanvasDpiRounding dpiRounding, int* pixels) override;

    private:
        void DrawLineImpl(
            Vector2 const& p0,
            Vector2 const& p1,
            ID2D1Brush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle);

        void DrawRectangleImpl(
            Rect const& rect,
            ID2D1Brush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle);

        void FillRectangleImpl(
            Rect const& rect,
            ID2D1Brush* brush);

        void DrawRoundedRectangleImpl(
            Rect const& rect,
            float radiusX,
            float radiusY,
            ID2D1Brush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle);

        void FillRoundedRectangleImpl(
            Rect const& rect,
            float radiusX,
            float radiusY,
            ID2D1Brush* brush);

        void DrawEllipseImpl(
            Vector2 const& centerPoint,
            float radiusX,
            float radiusY,
            ID2D1Brush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle);

        void FillEllipseImpl(
            Vector2 const& centerPoint,
            float radiusX,
            float radiusY,
            ID2D1Brush* brush);

        void DrawTextAtRectImpl(
            HSTRING text,
            Rect const& rect,
            ID2D1Brush* brush,
            ICanvasTextFormat* format);

        void DrawTextAtPointImpl(
            HSTRING text,
            Vector2 const& point,
            ID2D1Brush* brush,
            ICanvasTextFormat* format);

        void DrawTextImpl(
            HSTRING text,
            Rect const& rect,
            ID2D1Brush* brush,
            IDWriteTextFormat* format,
            D2D1_DRAW_TEXT_OPTIONS options);

        ICanvasTextFormat* GetDefaultTextFormat();

        void DrawGeometryImpl(
            ICanvasGeometry* geometry,
            ID2D1Brush* brush,
            float strokeWidth,
            ICanvasStrokeStyle* strokeStyle);

        void FillGeometryImpl(
            ICanvasGeometry* geometry,
            ID2D1Brush* brush,
            ID2D1Brush* opacityBrush);

        void DrawCachedGeometryImpl(
            ICanvasCachedGeometry* cachedGeometry,
            ID2D1Brush* brush);

        ID2D1SolidColorBrush* GetColorBrush(ABI::Windows::UI::Color const& color);
        ComPtr<ID2D1Brush> ToD2DBrush(ICanvasBrush* brush);

        HRESULT DrawImageImpl(
            ICanvasImage* image,
            Vector2* offset,
            Rect* destinationRect,
            Rect* sourceRect,
            float opacity,
            CanvasImageInterpolation interpolation,
            CanvasComposite const* composite);

        HRESULT DrawBitmapImpl(
            ICanvasBitmap* bitmap,
            Vector2* offset,
            Rect* destinationRect,
            Rect* sourceRect,
            float opacity,
            CanvasImageInterpolation interpolation,
            ABI::Microsoft::Graphics::Canvas::Numerics::Matrix4x4* perspective);

        HRESULT CreateLayerImpl(
            float opacity,
            ICanvasBrush* opacityBrush,
            Rect const* clipRectangle,
            ICanvasGeometry* clipGeometry,
            Matrix3x2 const* geometryTransform,
            CanvasLayerOptions options,
            ICanvasActiveLayer** layer);

        void PopLayer(int layerId, bool isAxisAlignedClip);

#if WINVER > _WIN32_WINNT_WINBLUE
        void DrawInkImpl(IIterable<InkStroke*>* inkStrokeCollection, bool highContrast);
#endif

        ComPtr<ICanvasDevice> const& GetDevice();

        static void InitializeDefaultState(ID2D1DeviceContext1* deviceContext);
    };


    //
    // A CanvasDrawingSessionAdapter that calls BeginDraw and EndDraw on the
    // device context.
    //
    class SimpleCanvasDrawingSessionAdapter : public ICanvasDrawingSessionAdapter,
                                              private LifespanTracker<SimpleCanvasDrawingSessionAdapter>
    {
    public:
        SimpleCanvasDrawingSessionAdapter(ID2D1DeviceContext1* d2dDeviceContext)
        {
            d2dDeviceContext->BeginDraw();
        }

        virtual void EndDraw(ID2D1DeviceContext1* d2dDeviceContext) override
        {
            ThrowIfFailed(d2dDeviceContext->EndDraw());
        }
    };
}}}}
