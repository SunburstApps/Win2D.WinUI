// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#include "pch.h"

#if WINVER > _WIN32_WINNT_WINBLUE

#include <lib/drawing/CanvasGradientMesh.h>

#include "GetBoundsFixture.h"

static Vector2 testPoints[] = {
    { 0, 31 },{ 0, 2 },{ 0, 84 },{ 35, 8 },
    { 4, 2 },{ 33, 1 },{ 1, 11 },{ 6, 8 },
    { 5, 1 },{ 0, 1 },{ 0, 3 },{ 4, 1 },
    { 0, 6 },{ 9, 1 },{ 9, 1 },{ 200, 1 },
};

static Vector4 testColors[] = {
    {  1,  2,  3,  4 },
    {  5,  6,  7,  8 },
    {  9, 10, 11, 12 },
    { 13, 14, 15, 16 },
};

static CanvasGradientMeshPatchEdge testEdges[] = {
    CanvasGradientMeshPatchEdge::Aliased,
    CanvasGradientMeshPatchEdge::Antialiased,
    CanvasGradientMeshPatchEdge::AliasedAndInflated,
    CanvasGradientMeshPatchEdge::Aliased
};

inline CanvasGradientMeshPatch GetTestGradientMeshPatch(int index = 0)
{
    float f = static_cast<float>(index);

    assert(index < 256);

    CanvasGradientMeshPatch patch;
    patch.Point00 = { f, 00 };
    patch.Point01 = { f, 01 };
    patch.Point02 = { f, 02 };
    patch.Point03 = { f, 03 };

    patch.Point10 = { f, 10 };
    patch.Point11 = { f, 11 };
    patch.Point12 = { f, 12 };
    patch.Point13 = { f, 13 };

    patch.Point20 = { f, 20 };
    patch.Point21 = { f, 21 };
    patch.Point22 = { f, 22 };
    patch.Point23 = { f, 23 };

    patch.Point30 = { f, 30 };
    patch.Point31 = { f, 31 };
    patch.Point32 = { f, 32 };
    patch.Point33 = { f, 33 };

    patch.Color00 = { f, 100, 101, 102 };
    patch.Color03 = { f, 103, 104, 105 };
    patch.Color30 = { f, 106, 107, 108 };
    patch.Color33 = { f, 109, 110, 111 };

    patch.Edge00To03 = static_cast<CanvasGradientMeshPatchEdge>((index + 0) % 3);
    patch.Edge03To33 = static_cast<CanvasGradientMeshPatchEdge>((index + 1) % 3);
    patch.Edge33To30 = static_cast<CanvasGradientMeshPatchEdge>((index + 2) % 3);
    patch.Edge30To00 = static_cast<CanvasGradientMeshPatchEdge>((index + 3) % 3);

    return patch;
}

TEST_CLASS(CanvasGradientMeshTests)
{
public: 

    struct Fixture
    {
        ComPtr<StubCanvasDevice> Device;
        CanvasGradientMeshPatch DefaultPatches[3];

        ComPtr<MockD2DGradientMesh> D2DGradientMesh;

        Fixture()
            : Device(Make<StubCanvasDevice>())
            , D2DGradientMesh(Make<MockD2DGradientMesh>())
        {
            for (int i=0; i<3; i++)
            {
                DefaultPatches[i] = GetTestGradientMeshPatch(i);
            }


            auto d2dGradientMesh = Make<MockD2DGradientMesh>();

            Device->CreateGradientMeshMethod.AllowAnyCall(
                [&](D2D1_GRADIENT_MESH_PATCH const*, uint32_t)
                {
                    return D2DGradientMesh;
                });
        }
    };


    TEST_METHOD_EX(CanvasGradientMesh_Closed)
    {
        Fixture f;

        auto gradientMesh = CanvasGradientMesh::CreateNew(f.Device.Get(), 1, &f.DefaultPatches[0]);

        Assert::AreEqual(S_OK, gradientMesh->Close());

        uint32_t valueCount;
        CanvasGradientMeshPatch* elements;
        Assert::AreEqual(RO_E_CLOSED, gradientMesh->get_Patches(&valueCount, &elements));

        Rect bounds;
        Assert::AreEqual(RO_E_CLOSED, gradientMesh->GetBounds(f.Device.Get(), &bounds));
        Assert::AreEqual(RO_E_CLOSED, gradientMesh->GetBoundsWithTransform(f.Device.Get(), Numerics::Matrix3x2{}, &bounds));

        ComPtr<ICanvasDevice> device;
        Assert::AreEqual(RO_E_CLOSED, gradientMesh->get_Device(&device));
    }

    TEST_METHOD_EX(CanvasGradientMesh_get_Device)
    {
        Fixture f;

        auto gradientMesh = CanvasGradientMesh::CreateNew(f.Device.Get(), 1, &f.DefaultPatches[0]);

        ComPtr<ICanvasDevice> device;
        Assert::AreEqual(S_OK, gradientMesh->get_Device(&device));

        Assert::IsTrue(IsSameInstance(f.Device.Get(), device.Get()));
    }

    TEST_METHOD_EX(CanvasGradientMesh_ZeroPatches_Ok)
    {
        Fixture f;

        auto gradientMesh = CanvasGradientMesh::CreateNew(f.Device.Get(), 0, nullptr);
        Assert::IsNotNull(gradientMesh.Get());
    }


    TEST_METHOD_EX(CanvasGradientMesh_CreateCoonsPatch_ZeroArrays_NotAllowed)
    {
        auto canvasGeometryMeshFactory = Make<CanvasGradientMeshFactory>();

        Vector2 points[12] {};
        Vector4 colors[4]{};
        CanvasGradientMeshPatchEdge edges[4]{};
        CanvasGradientMeshPatch gradientMeshPatch {};

        Assert::AreEqual(E_INVALIDARG, canvasGeometryMeshFactory->CreateCoonsPatch(
            0, nullptr, 
            _countof(colors), colors, 
            _countof(edges), edges, 
            &gradientMeshPatch));

        Assert::AreEqual(E_INVALIDARG, canvasGeometryMeshFactory->CreateCoonsPatch(
            _countof(points), points, 
            0, nullptr, 
            _countof(edges), edges, 
            &gradientMeshPatch));

        Assert::AreEqual(E_INVALIDARG, canvasGeometryMeshFactory->CreateCoonsPatch(
            _countof(points), points, 
            _countof(colors), colors, 
            0, nullptr, 
            &gradientMeshPatch));
    }


    TEST_METHOD_EX(CanvasGradientMesh_CreateCoonsPatch_WrongSizeArray)
    {
        auto canvasGeometryMeshFactory = Make<CanvasGradientMeshFactory>();

        Vector2 points[13] {};
        Vector4 colors[5]{};
        CanvasGradientMeshPatchEdge edges[5]{};
        CanvasGradientMeshPatch gradientMeshPatch{};

        struct TestCase
        {
            uint32_t PointCount, ColorCount, EdgeCount;
        } testCases[]
        {
            {11, 4, 4},
            {13, 4, 4},
            {12, 3, 4},
            {12, 5, 4},
            {12, 4, 3},
            {12, 4, 5},
        };

        for (auto testCase : testCases)
        {
            Assert::AreEqual(E_INVALIDARG, canvasGeometryMeshFactory->CreateCoonsPatch(
                testCase.PointCount, points, 
                testCase.ColorCount, colors, 
                testCase.EdgeCount, edges, 
                &gradientMeshPatch));
        }
    }

    TEST_METHOD_EX(CanvasGradientMesh_CreateCoonsPatch_NullArg)
    {
        auto canvasGeometryMeshFactory = Make<CanvasGradientMeshFactory>();

        Vector2 points[12]{};
        Vector4 colors[4]{};
        CanvasGradientMeshPatchEdge edges[4]{};

        Assert::AreEqual(E_INVALIDARG, canvasGeometryMeshFactory->CreateCoonsPatch(
            _countof(points), points,
            _countof(colors), colors,
            _countof(edges), edges,
            nullptr));
    }


    void VerifyGradientMeshPatchEqualToD2DGradientMeshPatch(
        CanvasGradientMeshPatch const& patch,
        D2D1_GRADIENT_MESH_PATCH const& d2dPatch)
    {
        auto verify = CanvasGradientMeshFactory::PatchToD2DPatch(patch);
        Assert::AreEqual(d2dPatch, verify);
    }


    TEST_METHOD(CanvasGradientMesh_CreateCoonsPatch_TypicalCase)
    {
        // D2D orders edges differently from Win2D, so these variables make it explicit which is which.
        auto topEdge = testEdges[0];
        auto rightEdge = testEdges[1];
        auto bottomEdge = testEdges[2];
        auto leftEdge = testEdges[3];

        auto canvasGeometryMeshFactory = Make<CanvasGradientMeshFactory>();

        CanvasGradientMeshPatch patch;
        ThrowIfFailed(canvasGeometryMeshFactory->CreateCoonsPatch(12, testPoints, 4, testColors, 4, testEdges, &patch));

        auto d2dPatch = D2D1::GradientMeshPatchFromCoonsPatch(
            ToD2DPoint(testPoints[0]), ToD2DPoint(testPoints[1]), ToD2DPoint(testPoints[2]), ToD2DPoint(testPoints[3]),
            ToD2DPoint(testPoints[4]), ToD2DPoint(testPoints[5]), ToD2DPoint(testPoints[6]), ToD2DPoint(testPoints[7]),
            ToD2DPoint(testPoints[8]), ToD2DPoint(testPoints[9]), ToD2DPoint(testPoints[10]), ToD2DPoint(testPoints[11]),
            ToD2DColor(testColors[0]), ToD2DColor(testColors[1]), ToD2DColor(testColors[2]), ToD2DColor(testColors[3]),
            static_cast<D2D1_PATCH_EDGE_MODE>(topEdge), 
            static_cast<D2D1_PATCH_EDGE_MODE>(leftEdge), 
            static_cast<D2D1_PATCH_EDGE_MODE>(bottomEdge), 
            static_cast<D2D1_PATCH_EDGE_MODE>(rightEdge));

        VerifyGradientMeshPatchEqualToD2DGradientMeshPatch(patch, d2dPatch);
    }

    TEST_METHOD_EX(CanvasGradientMesh_CreateTensorPatch_WrongSizeArray)
    {
        auto canvasGeometryMeshFactory = Make<CanvasGradientMeshFactory>();

        Vector2 points[17] {};
        Vector4 colors[5]{};
        CanvasGradientMeshPatchEdge edges[5]{};
        CanvasGradientMeshPatch gradientMeshPatch{};

        struct TestCase
        {
            uint32_t PointCount, ColorCount, EdgeCount;
        } testCases[]
        {
            {15, 4, 4},
            {17, 4, 4},
            {16, 3, 4},
            {16, 5, 4},
            {16, 4, 3},
            {16, 4, 5},
        };

        for (auto testCase : testCases)
        {
            Assert::AreEqual(E_INVALIDARG, canvasGeometryMeshFactory->CreateTensorPatch(
                testCase.PointCount, points, 
                testCase.ColorCount, colors, 
                testCase.EdgeCount, edges, 
                &gradientMeshPatch));
        }
    }

    TEST_METHOD_EX(CanvasGradientMesh_CreateTensorPatch_ZeroArrays_NotAllowed)
    {
        auto canvasGeometryMeshFactory = Make<CanvasGradientMeshFactory>();

        Vector2 points[12] {};
        Vector4 colors[4]{};
        CanvasGradientMeshPatchEdge edges[4]{};
        CanvasGradientMeshPatch gradientMeshPatch{};

        Assert::AreEqual(E_INVALIDARG, canvasGeometryMeshFactory->CreateTensorPatch(
            0, nullptr, 
            _countof(colors), colors, 
            _countof(edges), edges, 
            &gradientMeshPatch));

        Assert::AreEqual(E_INVALIDARG, canvasGeometryMeshFactory->CreateTensorPatch(
            _countof(points), points, 
            0, nullptr, 
            _countof(edges), edges, 
            &gradientMeshPatch));

        Assert::AreEqual(E_INVALIDARG, canvasGeometryMeshFactory->CreateTensorPatch(
            _countof(points), points, 
            _countof(colors), colors, 
            0, nullptr, 
            &gradientMeshPatch));
    }

    TEST_METHOD_EX(CanvasGradientMesh_CreateTensorPatch_NullArg)
    {
        auto canvasGeometryMeshFactory = Make<CanvasGradientMeshFactory>();

        Vector2 points[16]{};
        Vector4 colors[4]{};
        CanvasGradientMeshPatchEdge edges[4]{};

        Assert::AreEqual(E_INVALIDARG, canvasGeometryMeshFactory->CreateTensorPatch(
            _countof(points), points,
            _countof(colors), colors,
            _countof(edges), edges,
            nullptr));
    }

    void VerifyEqualEdgeModes(
        CanvasGradientMeshPatchEdge const& edgeMode,
        D2D1_PATCH_EDGE_MODE const& d2dEdgeMode)
    {
        Assert::AreEqual(edgeMode, static_cast<CanvasGradientMeshPatchEdge>(d2dEdgeMode));
    }

    TEST_METHOD_EX(CanvasGradientMesh_SinglePatch)
    {
        Fixture f;
        
        f.Device->CreateGradientMeshMethod.SetExpectedCalls(1, 
            [&](D2D1_GRADIENT_MESH_PATCH const* d2dPatches, uint32_t d2dPatchCount)
            {
                Assert::AreEqual(1u, d2dPatchCount);
                VerifyGradientMeshPatchEqualToD2DGradientMeshPatch(f.DefaultPatches[0], d2dPatches[0]);
                return Make<MockD2DGradientMesh>();
            });

        auto gradientMesh = CanvasGradientMesh::CreateNew(f.Device.Get(), 1, &f.DefaultPatches[0]);
        Assert::IsNotNull(gradientMesh.Get());
    }

    TEST_METHOD_EX(CanvasGradientMesh_MultiplePatches)
    {
        Fixture f;
        
        f.Device->CreateGradientMeshMethod.SetExpectedCalls(1, 
            [&](D2D1_GRADIENT_MESH_PATCH const* d2dPatches, uint32_t d2dPatchCount)
            {
                Assert::AreEqual(3u, d2dPatchCount);
                for (int i=0; i<3; ++i)
                {
                    VerifyGradientMeshPatchEqualToD2DGradientMeshPatch(f.DefaultPatches[i], d2dPatches[i]);
                }
                return Make<MockD2DGradientMesh>();
            });

        auto gradientMesh = CanvasGradientMesh::CreateNew(f.Device.Get(), 3, f.DefaultPatches);
        Assert::IsNotNull(gradientMesh.Get());
    }

    //
    // The CanvasGradientMesh GetBounds and GetBoundsWithTransform methods are
    // expected to behave in the same way as the ICanvasImage methods, even
    // though CanvasGradientMesh doesn't implement the ICanvasImage interface.
    //
    // GetBoundsFixture knows how to test GetBounds methods - we just have to
    // tell it about gradient meshes:
    //
    class GradientMeshBoundsFixture : public GetBoundsFixture
    {
        ComPtr<ID2D1GradientMesh> m_d2dGradientMesh;
        ComPtr<CanvasGradientMesh> m_gradientMesh;

    public:
        GradientMeshBoundsFixture()
            : m_d2dGradientMesh(Make<MockD2DGradientMesh>())
            , m_gradientMesh(Make<CanvasGradientMesh>(GetDevice(), m_d2dGradientMesh.Get()))
        {
        }

        virtual void ExpectGetBounds(MockD2DDeviceContext* deviceContext, D2D1_RECT_F boundsToReturn, std::function<void()> fn) override
        {
            deviceContext->GetGradientMeshWorldBoundsMethod.SetExpectedCalls(1,
                [=](ID2D1GradientMesh* gradientMesh, D2D1_RECT_F* returnedBounds)
                {
                    Assert::AreEqual(m_d2dGradientMesh.Get(), gradientMesh);
                    *returnedBounds = boundsToReturn;

                    fn();

                    return S_OK;
                });
        }

        virtual void CallGetBounds(ICanvasResourceCreator* resourceCreator, Matrix3x2 transform, Rect* bounds) override
        {
            // GetBounds calls GetBoundsWithTransform, so we just need to test
            // the latter.
            ThrowIfFailed(m_gradientMesh->GetBoundsWithTransform(resourceCreator, transform, bounds));
        }
    };
    

    TEST_METHOD_EX(CanvasGradientMesh_GetBounds_WhenPassedDrawingSession_BoundsRetrievedFromDrawingSession)
    {
        GradientMeshBoundsFixture f;
        f.TestGetBoundsPassingDrawingSession();
    }

    TEST_METHOD_EX(CanvasGradientMesh_GetBounds_WhenPassedNonDrawingSession_BoundsRetrievedFromLeasedContext)
    {
        GradientMeshBoundsFixture f;
        f.TestGetBoundsPassingDevice();
    }

    TEST_METHOD_EX(CanvasGradientMesh_get_Patches_Zero)
    {
        Fixture f;

        f.D2DGradientMesh->GetPatchCountMethod.SetExpectedCalls(1, [&] { return 0; });
        f.D2DGradientMesh->GetPatchesMethod.SetExpectedCalls(0);

        auto gradientMesh = CanvasGradientMesh::CreateNew(f.Device.Get(), 0, nullptr);

        uint32_t patchCount{};
        CanvasGradientMeshPatch* patchElements{};
        Assert::AreEqual(S_OK, gradientMesh->get_Patches(&patchCount, &patchElements));
        Assert::AreEqual(0u, patchCount);
        Assert::IsNotNull(patchElements);
    }

    TEST_METHOD_EX(CanvasGradientMesh_get_Patches_One)
    {
        Fixture f;

        f.D2DGradientMesh->GetPatchCountMethod.SetExpectedCalls(1, [&] { return 1; });
        f.D2DGradientMesh->GetPatchesMethod.SetExpectedCalls(1,
            [&](uint32_t startIndex, D2D1_GRADIENT_MESH_PATCH* patches, uint32_t numPatches)
            {
                Assert::AreEqual(0u, startIndex);
                Assert::AreEqual(1u, numPatches);
                *patches = CanvasGradientMeshFactory::PatchToD2DPatch(f.DefaultPatches[0]);
                return S_OK;
            });

        auto gradientMesh = CanvasGradientMesh::CreateNew(f.Device.Get(), 1, &f.DefaultPatches[0]);

        uint32_t patchCount{};
        CanvasGradientMeshPatch* patchElements{};
        Assert::AreEqual(S_OK, gradientMesh->get_Patches(&patchCount, &patchElements));
        Assert::AreEqual(1u, patchCount);
        Assert::AreEqual(*patchElements, f.DefaultPatches[0]);
    }

    TEST_METHOD_EX(CanvasGradientMesh_get_Patches_Multiple)
    {
        Fixture f;

        f.D2DGradientMesh->GetPatchCountMethod.SetExpectedCalls(1, [&] { return 3; });
        f.D2DGradientMesh->GetPatchesMethod.SetExpectedCalls(1,
            [&](uint32_t startIndex, D2D1_GRADIENT_MESH_PATCH* patches, uint32_t numPatches)
            {
                Assert::AreEqual(0u, startIndex);
                Assert::AreEqual(3u, numPatches);
                for (int i = 0; i < 3; ++i)
                {
                    patches[i] = CanvasGradientMeshFactory::PatchToD2DPatch(f.DefaultPatches[i]);
                }
                return S_OK;
            });

        auto gradientMesh = CanvasGradientMesh::CreateNew(f.Device.Get(), 3, f.DefaultPatches);

        uint32_t patchCount{};
        CanvasGradientMeshPatch* patchElements{};
        Assert::AreEqual(S_OK, gradientMesh->get_Patches(&patchCount, &patchElements));
        Assert::AreEqual(3u, patchCount);
        for (int i=0; i<3; ++i)
        {
            Assert::AreEqual(patchElements[i], f.DefaultPatches[i]);
        }
    }
};

#endif
