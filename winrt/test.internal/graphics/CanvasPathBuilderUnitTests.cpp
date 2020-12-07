// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#include "pch.h"
#include <lib/geometry/CanvasPathBuilder.h>
#include "mocks/MockD2DRectangleGeometry.h"
#include "mocks/MockD2DPathGeometry.h"
#include "mocks/MockD2DGeometrySink.h"
#include "mocks/MockGeometryAdapter.h"

TEST_CLASS(CanvasPathBuilderUnitTests)
{
    struct SetupFixture
    {
        ComPtr<StubCanvasDevice> Device;
        ComPtr<ICanvasGeometry> SomeTestGeometry;
        std::shared_ptr<MockGeometryAdapter> Adapter;

        SetupFixture()
            : Device(Make<StubCanvasDevice>())
            , Adapter(std::make_shared<MockGeometryAdapter>())
        {
            GeometryAdapter::SetInstance(Adapter);

            Adapter->CreatePathGeometryMethod.AllowAnyCall(
                []
                {
                    auto pathGeometry = Make<MockD2DPathGeometry>();

                    pathGeometry->OpenMethod.AllowAnyCall(
                        [](ID2D1GeometrySink** out)
                        {
                            auto geometrySink = Make<MockD2DGeometrySink>();

                            geometrySink->BeginFigureMethod.AllowAnyCall();
                            geometrySink->EndFigureMethod.AllowAnyCall();
                            geometrySink->CloseMethod.AllowAnyCall();

                            return geometrySink.CopyTo(out);
                        });

                    return pathGeometry;
                });

            SomeTestGeometry = Make<CanvasGeometry>(Device.Get(), Make<MockD2DRectangleGeometry>().Get());
        }

        ComPtr<CanvasPathBuilder> MakeCanvasPathBuilder()
        {
            return Make<CanvasPathBuilder>(GeometryDevicePtr(As<ICanvasDevice>(Device).Get()));
        }
    };

    TEST_METHOD_EX(CanvasPathBuilder_Closure)
    {
        SetupFixture f;

        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        Assert::AreEqual(S_OK, canvasPathBuilder->Close());

        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->BeginFigure(Vector2{}));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->BeginFigureWithFigureFill(Vector2{}, CanvasFigureFill::DoesNotAffectFills));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->BeginFigureAtCoords(0, 0));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->BeginFigureAtCoordsWithFigureFill(0, 0, CanvasFigureFill::DoesNotAffectFills));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->AddArcToPoint(Vector2{}, 0, 0, 0, CanvasSweepDirection::Clockwise, CanvasArcSize::Small));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->AddArcAroundEllipse(Vector2{}, 0, 0, 0, 0));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->AddCubicBezier(Vector2{}, Vector2{}, Vector2{}));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->AddLine(Vector2{}));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->AddLineWithCoords(0, 0));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->AddQuadraticBezier(Vector2{}, Vector2{}));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->SetSegmentOptions(CanvasFigureSegmentOptions::None));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->SetFilledRegionDetermination(CanvasFilledRegionDetermination::Alternate));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->EndFigure(CanvasFigureLoop::Closed));
        Assert::AreEqual(RO_E_CLOSED, canvasPathBuilder->AddGeometry(f.SomeTestGeometry.Get()));

        // Verify that path builder's device was closed, as well.
        auto pathBuilderInternal = As<ICanvasPathBuilderInternal>(canvasPathBuilder);
        ExpectHResultException(RO_E_CLOSED, [&]{ pathBuilderInternal->GetGeometryDevice(); });
    }

    TEST_METHOD_EX(CanvasPathBuilder_CreationOpensGeometrySink)
    {
        SetupFixture f;

        f.Adapter->CreatePathGeometryMethod.SetExpectedCalls(1,
            []
            {
                auto pathGeometry = Make<MockD2DPathGeometry>();

                pathGeometry->OpenMethod.SetExpectedCalls(1,
                    [](ID2D1GeometrySink** out)
                    {
                        auto geometrySink = Make<MockD2DGeometrySink>();
                        return geometrySink.CopyTo(out);
                    });

                return pathGeometry;
            });

        auto canvasPathBuilder = f.MakeCanvasPathBuilder();
    }

    TEST_METHOD_EX(CanvasPathBuilder_CanOnlyCreateOneGeometry)
    {
        SetupFixture f;

        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        CanvasGeometry::CreateNew(canvasPathBuilder.Get());

        ExpectHResultException(RO_E_CLOSED, [&]{ CanvasGeometry::CreateNew(canvasPathBuilder.Get()); });
    }

    TEST_METHOD_EX(CanvasPathBuilder_CreatePathClosesSink)
    {
        SetupFixture f;

        auto geometrySink = Make<MockD2DGeometrySink>();
        geometrySink->CloseMethod.SetExpectedCalls(1);

        auto pathGeometry = Make<MockD2DPathGeometry>();
        pathGeometry->OpenMethod.AllowAnyCall(
            [=](ID2D1GeometrySink** out)
            {
                return geometrySink.CopyTo(out);
            });

        f.Adapter->CreatePathGeometryMethod.AllowAnyCall(
            [=]
            {
                return pathGeometry;
            });

        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        CanvasGeometry::CreateNew(canvasPathBuilder.Get());
    }

    struct SinkAccessFixture : SetupFixture
    {
        ComPtr<MockD2DGeometrySink> GeometrySink;
        ComPtr<CanvasPathBuilder> PathBuilder;

        SinkAccessFixture()
        {
            auto pathGeometry = Make<MockD2DPathGeometry>();
            GeometrySink = Make<MockD2DGeometrySink>();

            Adapter->CreatePathGeometryMethod.AllowAnyCall([=] { return pathGeometry; });
            pathGeometry->OpenMethod.AllowAnyCall([=](ID2D1GeometrySink** out) { return GeometrySink.CopyTo(out); });

            PathBuilder = MakeCanvasPathBuilder();

            GeometrySink->BeginFigureMethod.AllowAnyCall();
        }
    };

    TEST_METHOD_EX(CanvasPathBuilder_BeginFigure)
    {
        SinkAccessFixture f;

        f.GeometrySink->BeginFigureMethod.SetExpectedCalls(1,
            [](D2D1_POINT_2F point, D2D1_FIGURE_BEGIN figureBegin)
            {
                Assert::AreEqual(D2D1::Point2F(1, 2), point);
                Assert::AreEqual(D2D1_FIGURE_BEGIN_FILLED, figureBegin);
            });
        ThrowIfFailed(f.PathBuilder->BeginFigure(Vector2{ 1, 2 }));
    }

    TEST_METHOD_EX(CanvasPathBuilder_BeginFigureWithFigureFill)
    {
        SinkAccessFixture f;

        f.GeometrySink->BeginFigureMethod.SetExpectedCalls(1,
            [](D2D1_POINT_2F point, D2D1_FIGURE_BEGIN figureBegin)
            {
                Assert::AreEqual(D2D1::Point2F(1, 2), point);
                Assert::AreEqual(D2D1_FIGURE_BEGIN_HOLLOW, figureBegin);
            });
        ThrowIfFailed(f.PathBuilder->BeginFigureWithFigureFill(Vector2{ 1, 2 }, CanvasFigureFill::DoesNotAffectFills));
    }

    TEST_METHOD_EX(CanvasPathBuilder_BeginFigureAtCoords)
    {
        SinkAccessFixture f;

        f.GeometrySink->BeginFigureMethod.SetExpectedCalls(1,
            [](D2D1_POINT_2F point, D2D1_FIGURE_BEGIN figureBegin)
            {
                Assert::AreEqual(D2D1::Point2F(1, 2), point);
                Assert::AreEqual(D2D1_FIGURE_BEGIN_FILLED, figureBegin);
            });
        ThrowIfFailed(f.PathBuilder->BeginFigureAtCoords(1, 2));
    }

    TEST_METHOD_EX(CanvasPathBuilder_BeginFigureAtCoordsWithFigureFill)
    {
        SinkAccessFixture f;

        f.GeometrySink->BeginFigureMethod.SetExpectedCalls(1,
            [](D2D1_POINT_2F point, D2D1_FIGURE_BEGIN figureBegin)
            {
                Assert::AreEqual(D2D1::Point2F(1, 2), point);
                Assert::AreEqual(D2D1_FIGURE_BEGIN_HOLLOW, figureBegin);
            });
        ThrowIfFailed(f.PathBuilder->BeginFigureAtCoordsWithFigureFill(1, 2, CanvasFigureFill::DoesNotAffectFills));
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddArcToPoint)
    {
        SinkAccessFixture f;

        f.PathBuilder->BeginFigure(Vector2{});

        f.GeometrySink->AddArcMethod.SetExpectedCalls(1,
            [](CONST D2D1_ARC_SEGMENT* arc)
            {
                Assert::AreEqual(D2D1::Point2F(1, 2), arc->point);
                Assert::AreEqual(D2D1::SizeF(3, 4), arc->size);
                Assert::AreEqual(0.0f, arc->rotationAngle);
                Assert::AreEqual(D2D1_SWEEP_DIRECTION_CLOCKWISE, arc->sweepDirection);
                Assert::AreEqual(D2D1_ARC_SIZE_LARGE, arc->arcSize);
            });
        ThrowIfFailed(f.PathBuilder->AddArcToPoint(Vector2{ 1, 2 }, 3.0f, 4.0f, 0.0f, CanvasSweepDirection::Clockwise, CanvasArcSize::Large));
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddArcToPoint_ExpectsRadians)
    {
        const float pi = 3.14159f;
        float angles[] = { 0, pi / 2, pi, 3 * pi / 2, 2 * pi };

        for (float angle : angles)
        {
            SinkAccessFixture f;

            f.PathBuilder->BeginFigure(Vector2{});

            f.GeometrySink->AddArcMethod.SetExpectedCalls(1,
                [=](CONST D2D1_ARC_SEGMENT* arc)
                {
                    const float d2dDegrees = arc->rotationAngle;
                    const float radians = d2dDegrees  * pi / 180.0f;
                    Assert::AreEqual(angle, radians, 0.0001f);
                });
            ThrowIfFailed(f.PathBuilder->AddArcToPoint(Vector2{}, 0, 0, angle, CanvasSweepDirection::Clockwise, CanvasArcSize::Large));
        }
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddArcAroundEllipse)
    {
        using namespace ::DirectX;

        SinkAccessFixture f;

        f.PathBuilder->BeginFigure(Vector2{});

        const float cX = 23;
        const float cY = 42;
        const float rX = 3;
        const float rY = 4;

        struct
        {
            float StartAngle;
            float SweepAngle;
            D2D1_POINT_2F ExpectedStart;
            D2D1_POINT_2F ExpectedEnd;
            D2D1_SWEEP_DIRECTION ExpectedSweepDirection;
            D2D1_ARC_SIZE ExpectedArcSize;
            int ExpectedArcCalls;
        }
        testPasses[] =
        {
            // Zero size sweep.
            { 0,          0,                 { cX + rX, cY      }, { cX + rX, cY      }, D2D1_SWEEP_DIRECTION_CLOCKWISE,         D2D1_ARC_SIZE_SMALL, 1 },

            // Positive sweep angles.
            { 0,          XM_PIDIV2,         { cX + rX, cY      }, { cX,      cY + rY }, D2D1_SWEEP_DIRECTION_CLOCKWISE,         D2D1_ARC_SIZE_SMALL, 1 },
            { 0,          XM_PI,             { cX + rX, cY      }, { cX - rX, cY      }, D2D1_SWEEP_DIRECTION_CLOCKWISE,         D2D1_ARC_SIZE_SMALL, 1 },
            { 0,          XM_PI + XM_PIDIV2, { cX + rX, cY      }, { cX,      cY - rY }, D2D1_SWEEP_DIRECTION_CLOCKWISE,         D2D1_ARC_SIZE_LARGE, 1 },

            // Negative sweep angles.
            { 0,         -XM_PIDIV2,         { cX + rX, cY      }, { cX,      cY - rY }, D2D1_SWEEP_DIRECTION_COUNTER_CLOCKWISE, D2D1_ARC_SIZE_SMALL, 1 },
            { 0,         -XM_PI,             { cX + rX, cY      }, { cX - rX, cY      }, D2D1_SWEEP_DIRECTION_COUNTER_CLOCKWISE, D2D1_ARC_SIZE_SMALL, 1 },
            { 0,         -XM_PI - XM_PIDIV2, { cX + rX, cY      }, { cX,      cY + rY }, D2D1_SWEEP_DIRECTION_COUNTER_CLOCKWISE, D2D1_ARC_SIZE_LARGE, 1 },

            // Changing the start angle.
            { XM_PIDIV2,  XM_PIDIV2,         { cX,      cY + rY }, { cX - rX, cY      }, D2D1_SWEEP_DIRECTION_CLOCKWISE,         D2D1_ARC_SIZE_SMALL, 1 },
            { -XM_PI,     XM_PIDIV2,         { cX - rX, cY      }, { cX,      cY - rY }, D2D1_SWEEP_DIRECTION_CLOCKWISE,         D2D1_ARC_SIZE_SMALL, 1 },
            { XM_PI * 5, -XM_PI - XM_PIDIV2, { cX - rX, cY      }, { cX,      cY - rY }, D2D1_SWEEP_DIRECTION_COUNTER_CLOCKWISE, D2D1_ARC_SIZE_LARGE, 1 },

            // Full circles.
            { 0,          XM_2PI,            { cX + rX, cY      }, { cX - rX, cY      }, D2D1_SWEEP_DIRECTION_CLOCKWISE,         D2D1_ARC_SIZE_SMALL, 2 },
            { XM_PIDIV2, -XM_2PI,            { cX,      cY + rY }, { cX,      cY - rY }, D2D1_SWEEP_DIRECTION_COUNTER_CLOCKWISE, D2D1_ARC_SIZE_SMALL, 2 },
            { 0,          XM_2PI * 99,       { cX + rX, cY      }, { cX - rX, cY      }, D2D1_SWEEP_DIRECTION_CLOCKWISE,         D2D1_ARC_SIZE_SMALL, 2 },
            { XM_PIDIV2, -XM_2PI * 99,       { cX,      cY + rY }, { cX,      cY - rY }, D2D1_SWEEP_DIRECTION_COUNTER_CLOCKWISE, D2D1_ARC_SIZE_SMALL, 2 },
        };

        const float epsilon = 0.00001f;

        for (auto& testPass : testPasses)
        {
            f.GeometrySink->AddLineMethod.SetExpectedCalls(1, [&](D2D1_POINT_2F point)
            {
                Assert::AreEqual(testPass.ExpectedStart.x, point.x, epsilon);
                Assert::AreEqual(testPass.ExpectedStart.y, point.y, epsilon);
            });

            int whichArcIsThis = 0;

            f.GeometrySink->AddArcMethod.SetExpectedCalls(testPass.ExpectedArcCalls, [&](D2D1_ARC_SEGMENT const* arc)
            {
                // If this is a full circle, we'll get two AddArc calls, one half way, then another back to the start point.
                auto expectedPoint = (whichArcIsThis++ == 0) ? testPass.ExpectedEnd : testPass.ExpectedStart;

                Assert::AreEqual(expectedPoint.x, arc->point.x, epsilon);
                Assert::AreEqual(expectedPoint.y, arc->point.y, epsilon);

                Assert::AreEqual(D2D1_SIZE_F{ rX, rY }, arc->size);
                Assert::AreEqual(0.0f, arc->rotationAngle);
                Assert::AreEqual(testPass.ExpectedSweepDirection, arc->sweepDirection);
                Assert::AreEqual(testPass.ExpectedArcSize, arc->arcSize);
            });

            ThrowIfFailed(f.PathBuilder->AddArcAroundEllipse(Vector2{ cX, cY }, rX, rY, testPass.StartAngle, testPass.SweepAngle));
        }
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddArcToPoint_InvalidState)
    {
        SinkAccessFixture f;

        Assert::AreEqual(E_INVALIDARG, f.PathBuilder->AddArcToPoint(Vector2{}, 0, 0, 0, CanvasSweepDirection::Clockwise, CanvasArcSize::Large));

        ValidateStoredErrorState(E_INVALIDARG, Strings::CanOnlyAddPathDataWhileInFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddArcAroundEllipse_InvalidState)
    {
        SinkAccessFixture f;

        Assert::AreEqual(E_INVALIDARG, f.PathBuilder->AddArcAroundEllipse(Vector2{}, 0, 0, 0, 0));

        ValidateStoredErrorState(E_INVALIDARG, Strings::CanOnlyAddPathDataWhileInFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddCubicBezier)
    {
        SinkAccessFixture f;

        f.PathBuilder->BeginFigure(Vector2{});

        f.GeometrySink->AddBezierMethod.SetExpectedCalls(1,
            [](const D2D1_BEZIER_SEGMENT* segment)
            {
                Assert::AreEqual(D2D1::Point2F(1, 2), segment->point1);
                Assert::AreEqual(D2D1::Point2F(3, 4), segment->point2);
                Assert::AreEqual(D2D1::Point2F(5, 6), segment->point3);
            });
        ThrowIfFailed(f.PathBuilder->AddCubicBezier(Vector2{ 1, 2 }, Vector2{ 3, 4 }, Vector2{ 5, 6 }));
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddCubicBezier_InvalidState)
    {
        SinkAccessFixture f;

        Assert::AreEqual(E_INVALIDARG, f.PathBuilder->AddCubicBezier(Vector2{}, Vector2{}, Vector2{}));

        ValidateStoredErrorState(E_INVALIDARG, Strings::CanOnlyAddPathDataWhileInFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddLine)
    {
        SinkAccessFixture f;

        f.PathBuilder->BeginFigure(Vector2{});

        f.GeometrySink->AddLineMethod.SetExpectedCalls(1,
            [](D2D1_POINT_2F point)
            {
                Assert::AreEqual(D2D1::Point2F(1, 2), point);
            });
        ThrowIfFailed(f.PathBuilder->AddLine(Vector2{ 1, 2 }));
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddLine_InvalidState)
    {
        SinkAccessFixture f;

        Assert::AreEqual(E_INVALIDARG, f.PathBuilder->AddLine(Vector2{}));

        ValidateStoredErrorState(E_INVALIDARG, Strings::CanOnlyAddPathDataWhileInFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddLineWithCoords)
    {
        SinkAccessFixture f;

        f.PathBuilder->BeginFigure(Vector2{});

        f.GeometrySink->AddLineMethod.SetExpectedCalls(1,
            [](D2D1_POINT_2F point)
            {
                Assert::AreEqual(D2D1::Point2F(1, 2), point);
            });
        ThrowIfFailed(f.PathBuilder->AddLineWithCoords(1, 2));
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddLineWithCoords_InvalidState)
    {
        SinkAccessFixture f;

        Assert::AreEqual(E_INVALIDARG, f.PathBuilder->AddLineWithCoords(0, 0));

        ValidateStoredErrorState(E_INVALIDARG, Strings::CanOnlyAddPathDataWhileInFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddQuadraticBezier)
    {
        SinkAccessFixture f;

        f.PathBuilder->BeginFigure(Vector2{});

        f.GeometrySink->AddQuadraticBezierMethod.SetExpectedCalls(1,
            [](const D2D1_QUADRATIC_BEZIER_SEGMENT* segment)
            {
                Assert::AreEqual(D2D1::Point2F(1, 2), segment->point1);
                Assert::AreEqual(D2D1::Point2F(3, 4), segment->point2);
            });
        ThrowIfFailed(f.PathBuilder->AddQuadraticBezier(Vector2{ 1, 2 }, Vector2{ 3, 4 }));
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddQuadraticBezier_InvalidState)
    {
        SinkAccessFixture f;

        Assert::AreEqual(E_INVALIDARG, f.PathBuilder->AddQuadraticBezier(Vector2{}, Vector2{}));

        ValidateStoredErrorState(E_INVALIDARG, Strings::CanOnlyAddPathDataWhileInFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_SetSegmentOptions)
    {
        SinkAccessFixture f;

        f.GeometrySink->SetSegmentFlagsMethod.SetExpectedCalls(1,
            [](D2D1_PATH_SEGMENT pathSegment)
            {
                Assert::AreEqual(D2D1_PATH_SEGMENT_FORCE_ROUND_LINE_JOIN, pathSegment);
            });
        ThrowIfFailed(f.PathBuilder->SetSegmentOptions(CanvasFigureSegmentOptions::ForceRoundLineJoin));
    }

    TEST_METHOD_EX(CanvasPathBuilder_SetFilledRegionDetermination)
    {
        SinkAccessFixture f;

        f.GeometrySink->SetFillModeMethod.SetExpectedCalls(1,
            [](D2D1_FILL_MODE fillMode)
            {
                Assert::AreEqual(D2D1_FILL_MODE_WINDING, fillMode);
            });
        ThrowIfFailed(f.PathBuilder->SetFilledRegionDetermination(CanvasFilledRegionDetermination::Winding));
    }

    TEST_METHOD_EX(CanvasPathBuilder_SetFilledRegionDetermination_InvalidAfterBeginFigure)
    {
        SinkAccessFixture f;

        f.PathBuilder->BeginFigure(Vector2{});

        f.GeometrySink->SetFillModeMethod.AllowAnyCall();

        Assert::AreEqual(E_INVALIDARG, f.PathBuilder->SetFilledRegionDetermination(CanvasFilledRegionDetermination::Winding));

        ValidateStoredErrorState(E_INVALIDARG, Strings::SetFilledRegionDeterminationAfterBeginFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_SetFilledRegionDetermination_InvalidAfterFirstCompleteFigure)
    {
        SinkAccessFixture f;

        f.GeometrySink->EndFigureMethod.AllowAnyCall();

        f.PathBuilder->BeginFigure(Vector2{});
        f.PathBuilder->EndFigure(CanvasFigureLoop::Closed);

        f.GeometrySink->SetFillModeMethod.AllowAnyCall();

        Assert::AreEqual(E_INVALIDARG, f.PathBuilder->SetFilledRegionDetermination(CanvasFilledRegionDetermination::Winding));

        ValidateStoredErrorState(E_INVALIDARG, Strings::SetFilledRegionDeterminationAfterBeginFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_EndFigure)
    {
        SinkAccessFixture f;

        f.GeometrySink->BeginFigureMethod.AllowAnyCall();

        f.GeometrySink->EndFigureMethod.SetExpectedCalls(1,
            [](D2D1_FIGURE_END figureEnd)
            {
                Assert::AreEqual(D2D1_FIGURE_END_CLOSED, figureEnd);
            });
        ThrowIfFailed(f.PathBuilder->BeginFigure(Vector2{}));
        ThrowIfFailed(f.PathBuilder->EndFigure(CanvasFigureLoop::Closed));
    }

    TEST_METHOD_EX(CanvasPathBuilder_DoubleClose_NothingBadHappens)
    {
        SetupFixture f;

        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        Assert::AreEqual(S_OK, canvasPathBuilder->Close());
        Assert::AreEqual(S_OK, canvasPathBuilder->Close());
    }

    TEST_METHOD_EX(CanvasPathBuilder_TwoBeginFigures_ReturnsErrorAndOutputsMessage)
    {
        SetupFixture f;
        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        Assert::AreEqual(S_OK, canvasPathBuilder->BeginFigure(Vector2{}));
        Assert::AreEqual(E_INVALIDARG, canvasPathBuilder->BeginFigure(Vector2{}));
        ValidateStoredErrorState(E_INVALIDARG, Strings::TwoBeginFigures);
    }

    TEST_METHOD_EX(CanvasPathBuilder_StrayEndFigureOnNewSink_ReturnsErrorAndOutputsMessage)
    {
        SetupFixture f;
        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        Assert::AreEqual(E_INVALIDARG, canvasPathBuilder->EndFigure(CanvasFigureLoop::Closed));
        ValidateStoredErrorState(E_INVALIDARG, Strings::EndFigureWithoutBeginFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_StrayEndFigureAfterFirstFigure_ReturnsErrorAndOutputsMessage)
    {
        SetupFixture f;
        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        Assert::AreEqual(S_OK, canvasPathBuilder->BeginFigure(Vector2{}));
        Assert::AreEqual(S_OK, canvasPathBuilder->EndFigure(CanvasFigureLoop::Closed));
        Assert::AreEqual(E_INVALIDARG, canvasPathBuilder->EndFigure(CanvasFigureLoop::Closed));
        ValidateStoredErrorState(E_INVALIDARG, Strings::EndFigureWithoutBeginFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_ClosedMidFigure_ReturnsErrorAndOutputsMessage)
    {
        SetupFixture f;
        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        Assert::AreEqual(S_OK, canvasPathBuilder->BeginFigure(Vector2{}));

        ExpectHResultException(E_INVALIDARG, [&]{ CanvasGeometry::CreateNew(canvasPathBuilder.Get()); });
        ValidateStoredErrorState(E_INVALIDARG, Strings::PathBuilderClosedMidFigure);

    }

    TEST_METHOD_EX(CanvasPathBuilder_AddGeometry_NullArg)
    {
        SetupFixture f;
        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        Assert::AreEqual(E_INVALIDARG, canvasPathBuilder->AddGeometry(nullptr));
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddGeometry_ShouldNotBeInFigure)
    {
        SetupFixture f;
        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        Assert::AreEqual(S_OK, canvasPathBuilder->BeginFigure(Vector2{}));
        Assert::AreEqual(E_INVALIDARG, canvasPathBuilder->AddGeometry(f.SomeTestGeometry.Get()));
        ValidateStoredErrorState(E_INVALIDARG, Strings::PathBuilderAddGeometryMidFigure);
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddGeometryWithPath_CausesStream)
    {
        SinkAccessFixture f;

        auto mockD2DPathGeometry = Make<MockD2DPathGeometry>();
        auto pathGeometry = Make<CanvasGeometry>(f.Device.Get(), mockD2DPathGeometry.Get());

        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        mockD2DPathGeometry->StreamMethod.SetExpectedCalls(1,
            [f](ID2D1GeometrySink* geometrySink)
            {
                Assert::AreEqual(static_cast<ID2D1GeometrySink*>(f.GeometrySink.Get()), geometrySink);
                return S_OK;
            });

        Assert::AreEqual(S_OK, canvasPathBuilder->AddGeometry(pathGeometry.Get()));
    }

    TEST_METHOD_EX(CanvasPathBuilder_AddGeometryWithNonPath_CausesSimplify)
    {
        SinkAccessFixture f;

        auto mockD2DRectangleGeometry = Make<MockD2DRectangleGeometry>();
        auto rectangleGeometry = Make<CanvasGeometry>(f.Device.Get(), mockD2DRectangleGeometry.Get());

        auto canvasPathBuilder = f.MakeCanvasPathBuilder();

        mockD2DRectangleGeometry->SimplifyMethod.SetExpectedCalls(1,
            [f](D2D1_GEOMETRY_SIMPLIFICATION_OPTION simplification, CONST D2D1_MATRIX_3X2_F* transform, FLOAT tol, ID2D1SimplifiedGeometrySink* geometrySink)
            {
                Assert::AreEqual(D2D1_GEOMETRY_SIMPLIFICATION_OPTION_CUBICS_AND_LINES, simplification);
                Assert::IsNull(transform);
                Assert::AreEqual(D2D1_DEFAULT_FLATTENING_TOLERANCE, tol);
                Assert::AreEqual(static_cast<ID2D1SimplifiedGeometrySink*>(f.GeometrySink.Get()), geometrySink);
                return S_OK;
            });

        Assert::AreEqual(S_OK, canvasPathBuilder->AddGeometry(rectangleGeometry.Get()));
    }

};
