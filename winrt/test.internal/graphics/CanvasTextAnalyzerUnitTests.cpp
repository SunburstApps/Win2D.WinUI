﻿// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#include "pch.h"
#include "stubs/StubCanvasTextLayoutAdapter.h"
#include "mocks/MockDWriteFont.h"
#include "mocks/MockDWriteFontCollection.h"
#include "mocks/MockDWriteFontFace.h"
#include "mocks/MockDWriteFontFaceReference.h"
#include "mocks/MockDWriteFontSet.h"
#include "mocks/MockDWriteTextAnalyzer.h"
#include <lib/text/CanvasScaledFont.h>
#include <lib/text/CanvasNumberSubstitution.h>
#include <lib/text/CanvasTextAnalyzer.h>
#include <lib/text/CanvasFontFace.h>

#if WINVER > _WIN32_WINNT_WINBLUE
typedef MockDWriteFontFaceReference MockDWriteFontFaceContainer;
typedef IDWriteFontFace3 RealizedFontFaceType;
#else
typedef MockDWriteFont MockDWriteFontFaceContainer;
typedef IDWriteFontFace RealizedFontFaceType;
#endif

struct TestCaseForCharacterRange
{
    uint32_t Position;
    uint32_t ExpectedCharacterCount;
} testCasesForCharacterRanges[] = {
    { 0, 3 },
    { 1, 2 },
    { 2, 1 },
    { 3, 0 },
    { 999, 0 }
};

struct TestBreakpoint
{
    DWRITE_LINE_BREAKPOINT DWriteBreakpoint;
    CanvasAnalyzedBreakpoint Breakpoint;
} testBreakpoints[] = {
    { { static_cast<uint8_t>(DWRITE_BREAK_CONDITION_NEUTRAL), static_cast<uint8_t>(DWRITE_BREAK_CONDITION_CAN_BREAK), false, true }, { CanvasLineBreakCondition::Neutral, CanvasLineBreakCondition::CanBreak, false, true } },
    { { static_cast<uint8_t>(DWRITE_BREAK_CONDITION_CAN_BREAK), static_cast<uint8_t>(DWRITE_BREAK_CONDITION_MAY_NOT_BREAK), true, false }, { CanvasLineBreakCondition::CanBreak, CanvasLineBreakCondition::CannotBreak, true, false } },
    { { static_cast<uint8_t>(DWRITE_BREAK_CONDITION_MAY_NOT_BREAK), static_cast<uint8_t>(DWRITE_BREAK_CONDITION_MUST_BREAK), false, true }, { CanvasLineBreakCondition::CannotBreak, CanvasLineBreakCondition::MustBreak, false, true } },
    { { static_cast<uint8_t>(DWRITE_BREAK_CONDITION_MUST_BREAK), static_cast<uint8_t>(DWRITE_BREAK_CONDITION_NEUTRAL), true, false }, { CanvasLineBreakCondition::MustBreak, CanvasLineBreakCondition::Neutral, true, false } },
};
TestBreakpoint GetTestBreakpoint(uint32_t index)
{
    return testBreakpoints[index % _countof(testBreakpoints)];
}

TEST_CLASS(CanvasScaledFontTests)
{
    ComPtr<CanvasFontFace> CreateSimpleFontFace()
    {
        auto resource = Make<MockDWriteFontFaceContainer>();
        return Make<CanvasFontFace>(resource.Get());
    }

    TEST_METHOD_EX(CanvasScaledFont_ImplementsExpectedInterfaces)
    {
        auto canvasCharacterRangeFont = Make<CanvasScaledFont>(nullptr, 0.0f);

        ASSERT_IMPLEMENTS_INTERFACE(canvasCharacterRangeFont, ICanvasScaledFont);
    }

    TEST_METHOD_EX(CanvasScaledFont_NullArgs)
    {
        auto canvasCharacterRangeFont = Make<CanvasScaledFont>(nullptr, 0.0f);

        Assert::AreEqual(E_INVALIDARG, canvasCharacterRangeFont->get_FontFace(nullptr));

        Assert::AreEqual(E_INVALIDARG, canvasCharacterRangeFont->get_ScaleFactor(nullptr));
    }

    TEST_METHOD_EX(CanvasScaledFont_Properties)
    {
        auto expectedFontFace = CreateSimpleFontFace();
        auto canvasCharacterRangeFont = Make<CanvasScaledFont>(expectedFontFace.Get(), 7.8f);

        ComPtr<ICanvasFontFace> fontFace;
        Assert::AreEqual(S_OK, canvasCharacterRangeFont->get_FontFace(&fontFace));
        Assert::IsTrue(IsSameInstance(expectedFontFace.Get(), fontFace.Get()));

        float scale{};
        Assert::AreEqual(S_OK, canvasCharacterRangeFont->get_ScaleFactor(&scale));
        Assert::AreEqual(7.8f, scale);
    }
};

class MockDWriteNumberSubstitution : public RuntimeClass<
    RuntimeClassFlags<ClassicCom>,
    IDWriteNumberSubstitution>
{
};

TEST_CLASS(CanvasNumberSubstitutionTests)
{
    class Fixture
    {
        std::shared_ptr<StubCanvasTextLayoutAdapter> m_adapter;
        ComPtr<CanvasNumberSubstitutionFactory> m_factory;
        ComPtr<MockDWriteNumberSubstitution> m_mockDWriteNumberSubstitution;
    public:

        Fixture()
        {
            m_adapter = std::make_shared<StubCanvasTextLayoutAdapter>();
            CustomFontManagerAdapter::SetInstance(m_adapter);

            m_factory = Make<CanvasNumberSubstitutionFactory>();

            m_mockDWriteNumberSubstitution = Make<MockDWriteNumberSubstitution>();
        }

        void ExpectCreateNumberSubstitution(
            DWRITE_NUMBER_SUBSTITUTION_METHOD expectedMethod,
            wchar_t const* expectedLocale,
            bool expectedOverrides)
        {
            std::wstring expectedLocaleString = expectedLocale;

            m_adapter->GetMockDWriteFactory()->CreateNumberSubstitutionMethod.SetExpectedCalls(1,
                [=](DWRITE_NUMBER_SUBSTITUTION_METHOD method, WCHAR const* locale, BOOL overrides, IDWriteNumberSubstitution** out)
                {
                    Assert::AreEqual(expectedMethod, method);
                    Assert::AreEqual(expectedLocaleString.c_str(), locale);
                    Assert::AreEqual(expectedOverrides, !!overrides);

                    return m_mockDWriteNumberSubstitution.CopyTo(out);
                });
        }

        ComPtr<CanvasNumberSubstitutionFactory> const& GetFactory() 
        {
            return m_factory;
        }

        void ValidateCorrectObjectWrapped(ComPtr<ICanvasNumberSubstitution> const& canvasNumberSubstitution)
        {
            auto wrappedObject = GetWrappedResource<IDWriteNumberSubstitution>(canvasNumberSubstitution);
            Assert::IsTrue(IsSameInstance(m_mockDWriteNumberSubstitution.Get(), wrappedObject.Get()));
        }
    };

    TEST_METHOD_EX(CanvasNumberSubstitution_Create)
    {
        Fixture f;

        f.ExpectCreateNumberSubstitution(DWRITE_NUMBER_SUBSTITUTION_METHOD_NATIONAL, L"", false);

        ComPtr<ICanvasNumberSubstitution> numberSubstitution;
        f.GetFactory()->Create(CanvasNumberSubstitutionMethod::National, &numberSubstitution);

        f.ValidateCorrectObjectWrapped(numberSubstitution);
    }

    TEST_METHOD_EX(CanvasNumberSubstitution_CreateWithLocaleAndIgnoreOverrides)
    {
        Fixture f;

        f.ExpectCreateNumberSubstitution(DWRITE_NUMBER_SUBSTITUTION_METHOD_TRADITIONAL, L"xx-yy", true);

        ComPtr<ICanvasNumberSubstitution> numberSubstitution;
        f.GetFactory()->CreateWithLocaleAndIgnoreOverrides(CanvasNumberSubstitutionMethod::Traditional, WinString(L"xx-yy"), true, &numberSubstitution);

        f.ValidateCorrectObjectWrapped(numberSubstitution);
    }
};

TEST_CLASS(CanvasTextAnalyzerTests)
{
    class MockDWriteFontFallback : public RuntimeClass <
        RuntimeClassFlags<ClassicCom>,
        IDWriteFontFallback >
    {
    public:
        MOCK_METHOD11(MapCharacters, HRESULT(IDWriteTextAnalysisSource*, uint32_t, uint32_t, IDWriteFontCollection*, wchar_t const*, DWRITE_FONT_WEIGHT, DWRITE_FONT_STYLE, DWRITE_FONT_STRETCH, uint32_t*, IDWriteFont**, FLOAT*));
    };

    class TextAnalyzerOptions : public RuntimeClass <
        RuntimeClassFlags<WinRtClassicComMix>,
        ICanvasTextAnalyzerOptions >
    {
    public:
        CALL_COUNTER_WITH_MOCK(GetLocaleNameMethod, HRESULT(int, int*, HSTRING*));
        CALL_COUNTER_WITH_MOCK(GetNumberSubstitutionMethod, HRESULT(int, int*, ICanvasNumberSubstitution**));
        CALL_COUNTER_WITH_MOCK(GetVerticalGlyphOrientationMethod, HRESULT(int, int*, CanvasVerticalGlyphOrientation*));
        CALL_COUNTER_WITH_MOCK(GetBidiLevelMethod, HRESULT(int, int*, uint32_t*));

        IFACEMETHODIMP GetLocaleName(int characterIndex, int* characterCount, HSTRING* out) override
        {
            return GetLocaleNameMethod.WasCalled(characterIndex, characterCount, out);
        }

        IFACEMETHODIMP GetNumberSubstitution(int characterIndex, int* characterCount, ICanvasNumberSubstitution** out) override
        {
            return GetNumberSubstitutionMethod.WasCalled(characterIndex, characterCount, out);
        }

        IFACEMETHODIMP GetVerticalGlyphOrientation(int characterIndex, int* characterCount, CanvasVerticalGlyphOrientation* out) override
        {
            return GetVerticalGlyphOrientationMethod.WasCalled(characterIndex, characterCount, out);
        }

        IFACEMETHODIMP GetBidiLevel(int characterIndex, int* characterCount, uint32_t* out) override
        {
            return GetBidiLevelMethod.WasCalled(characterIndex, characterCount, out);
        }
    };

    struct Fixture
    {
        std::shared_ptr<StubCanvasTextLayoutAdapter> m_adapter;
        ComPtr<MockDWriteFontCollection> m_mockSystemFontCollection;
        ComPtr<MockDWriteFontFallback> m_mockSystemFontFallback;
        ComPtr<CanvasTextAnalyzerFactory> m_textAnalyzerFactory;

    public:

        uint32_t ExpectedTextPosition;
        uint32_t ExpectedTextLength;
        ComPtr<IDWriteFontCollection> ExpectedFontCollection;
        std::wstring ExpectedFamilyName;
        DWRITE_FONT_WEIGHT ExpectedWeight;
        DWRITE_FONT_STYLE ExpectedStyle;
        DWRITE_FONT_STRETCH ExpectedStretch;

        std::function<void(IDWriteTextAnalysisSource1*)> MockDoingThingsToTextAnalysisSource;

        uint32_t ReturnedMappedLength;
        ComPtr<MockDWriteFont> ReturnedFont;
        float ReturnedScale;

        ComPtr<MockDWriteTextAnalyzer> TextAnalyzer;

        //
        // Passed to any new analyzers created through this fixture.
        //
        std::wstring Text;
        CanvasTextDirection TextDirection;
        ComPtr<TextAnalyzerOptions> Options;
        ComPtr<ICanvasNumberSubstitution> NumberSubstitution;
        CanvasVerticalGlyphOrientation VerticalGlyphOrientation;
        uint32_t BidiLevel;

        //
        // Passed to GetFonts.
        //
        ComPtr<ICanvasTextFormat> TextFormat;

        //
        // Passed to GetGlyphs.
        //
        float FontSize;
        bool IsSideways;
        bool IsRightToLeft;
        std::wstring Locale;
        ComPtr<MockDWriteFontFace> RealizedFontFace;
        ComPtr<MockDWriteFontFaceContainer> DWriteFontResource;
        ComPtr<ICanvasFontFace> FontFace;
        CanvasAnalyzedScript AnalyzedScript;
        ComPtr<MockDWriteNumberSubstitution> DWriteNumberSubstitution;
        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasTypography*>*>> TypographyRanges;
        int AdditionalGlyphsToAddDuringExpansion;
        CanvasCharacterRange CharacterRange;

        // Used for justification.
        std::vector<int> ClusterMap;
        float LineWidth;

        Fixture()
        {
            m_adapter = std::make_shared<StubCanvasTextLayoutAdapter>();
            CustomFontManagerAdapter::SetInstance(m_adapter);

            m_mockSystemFontCollection = Make<MockDWriteFontCollection>();

            m_mockSystemFontFallback = Make<MockDWriteFontFallback>();

            TextAnalyzer = Make<MockDWriteTextAnalyzer>();

            m_adapter->GetMockDWriteFactory()->GetSystemFontCollectionMethod.AllowAnyCall(
                [=](IDWriteFontCollection** out, BOOL)
                {
                    ThrowIfFailed(m_mockSystemFontCollection.CopyTo(out));
                    return S_OK;
                });

            m_adapter->GetMockDWriteFactory()->GetSystemFontFallbackMethod.AllowAnyCall(
                [=](IDWriteFontFallback** out)
                {
                    ThrowIfFailed(m_mockSystemFontFallback.CopyTo(out));
                    return S_OK;
                });

            m_adapter->GetMockDWriteFactory()->CreateTextAnalyzerMethod.AllowAnyCall(
                [=](IDWriteTextAnalyzer** out)
                {
                    ThrowIfFailed(TextAnalyzer.CopyTo(out));
                    return S_OK;
                });

            ExpectedTextPosition = 0;
            ExpectedTextLength = 3;
            ExpectedFontCollection = m_mockSystemFontCollection;
            ExpectedFamilyName = L"Segoe UI";
            ExpectedWeight = DWRITE_FONT_WEIGHT_NORMAL;
            ExpectedStyle = DWRITE_FONT_STYLE_NORMAL;
            ExpectedStretch = DWRITE_FONT_STRETCH_NORMAL;

            MockDoingThingsToTextAnalysisSource = [](IDWriteTextAnalysisSource1*){};

            ReturnedMappedLength = 3;
            ReturnedFont = Make<MockDWriteFont>();
            ReturnedScale = 1.0f;

            m_textAnalyzerFactory = Make<CanvasTextAnalyzerFactory>();

            Text = L"abc";
            TextDirection = CanvasTextDirection::LeftToRightThenTopToBottom;
            VerticalGlyphOrientation = CanvasVerticalGlyphOrientation::Default;
            BidiLevel = 0;
            Options = Make<TextAnalyzerOptions>();

            TextFormat = Make<CanvasTextFormat>();

            Options->GetBidiLevelMethod.AllowAnyCall(
                [&](int characterPosition, int* characterCount, uint32_t* out)
                {
                    *out = 0u;
                    *characterCount = static_cast<uint32_t>(this->Text.length()) - characterPosition;
                    return S_OK;
                });

            Options->GetVerticalGlyphOrientationMethod.AllowAnyCall(
                [&](int characterPosition, int* characterCount, CanvasVerticalGlyphOrientation* out)
                {
                    *out = CanvasVerticalGlyphOrientation::Default;
                    *characterCount = static_cast<uint32_t>(this->Text.length()) - characterPosition;
                    return S_OK;
                });

#if WINVER > _WIN32_WINNT_WINBLUE
            ReturnedFont->GetFontFaceReferenceMethod.AllowAnyCall(
                [&](IDWriteFontFaceReference** out)
                {
                    auto mockFontFaceReference = Make<MockDWriteFontFaceReference>();
                    ThrowIfFailed(mockFontFaceReference.CopyTo(out));
                    return S_OK;
                });
#endif
            TextAnalyzer->AnalyzeScriptMethod.AllowAnyCall();

            RealizedFontFace = Make<MockDWriteFontFace>();

            DWriteFontResource = Make<MockDWriteFontFaceContainer>();
            DWriteFontResource->CreateFontFaceMethod.AllowAnyCall(
                [this](RealizedFontFaceType** out)
                {
                    ThrowIfFailed(RealizedFontFace.CopyTo(out));
                    return S_OK;
                });
            FontFace = Make<CanvasFontFace>(DWriteFontResource.Get());

            AnalyzedScript.ScriptIdentifier = 123;
            AnalyzedScript.Shape = CanvasScriptShape::NoVisual;

            FontSize = 123.4f;
            IsSideways = true;
            IsRightToLeft = true;
            Locale = L"";
            AdditionalGlyphsToAddDuringExpansion = 2;
            CharacterRange.CharacterIndex = 0;
            CharacterRange.CharacterCount = static_cast<int>(this->Text.length());

            ClusterMap.resize(this->Text.length());
            for (uint32_t i = 0; i < static_cast<uint32_t>(this->Text.length()); ++i)
            {
                ClusterMap[i] = i * 2 + 1;
            }

            LineWidth = 1234.5f;
        }

        std::shared_ptr<StubCanvasTextLayoutAdapter>& GetAdapter() { return m_adapter; }

        void ExpectGetSystemFontCollection()
        {
            m_adapter->GetMockDWriteFactory()->GetSystemFontCollectionMethod.SetExpectedCalls(1,
                [=](IDWriteFontCollection** out, BOOL)
                {
                    m_mockSystemFontCollection.CopyTo(out);
                    return S_OK;
                });
        }

        void UseNumberSubstitution()
        {
            DWriteNumberSubstitution = Make<MockDWriteNumberSubstitution>();
            NumberSubstitution = ResourceManager::GetOrCreate<ICanvasNumberSubstitution>(DWriteNumberSubstitution.Get());
        }

        void UseTypographyRanges()
        {
            typedef KeyValuePair<CanvasCharacterRange, CanvasTypography*, DefaultMapTraits<CanvasCharacterRange, ICanvasTypography*>> TypographyRangeValue;

            auto typographyRangesVector = Make<Vector<IKeyValuePair<CanvasCharacterRange, CanvasTypography*>*>>();

            ComPtr<IDWriteTypography> dwriteTypographies[2];

            ComPtr<IDWriteFactory> realDWriteFactory;
            ThrowIfFailed(DWriteCreateFactory(DWRITE_FACTORY_TYPE_SHARED, __uuidof(IDWriteFactory), &realDWriteFactory));

            ThrowIfFailed(realDWriteFactory->CreateTypography(&dwriteTypographies[0]));
            ThrowIfFailed(dwriteTypographies[0]->AddFontFeature(DWRITE_FONT_FEATURE{ DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_1, 100u }));
            ThrowIfFailed(dwriteTypographies[0]->AddFontFeature(DWRITE_FONT_FEATURE{ DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_2, 200u }));
            ThrowIfFailed(dwriteTypographies[0]->AddFontFeature(DWRITE_FONT_FEATURE{ DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_3, 300u }));
            auto canvasTypography0 = ResourceManager::GetOrCreate<ICanvasTypography>(dwriteTypographies[0].Get());
            auto range0 = Make<TypographyRangeValue>(CanvasCharacterRange{ 0, 1 }, canvasTypography0.Get());
            ThrowIfFailed(typographyRangesVector->Append(range0.Get()));

            ThrowIfFailed(realDWriteFactory->CreateTypography(&dwriteTypographies[1]));
            ThrowIfFailed(dwriteTypographies[1]->AddFontFeature(DWRITE_FONT_FEATURE{ DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_4, 400u }));
            ThrowIfFailed(dwriteTypographies[1]->AddFontFeature(DWRITE_FONT_FEATURE{ DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_5, 500u }));
            ThrowIfFailed(dwriteTypographies[1]->AddFontFeature(DWRITE_FONT_FEATURE{ DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_6, 600u }));
            ThrowIfFailed(dwriteTypographies[1]->AddFontFeature(DWRITE_FONT_FEATURE{ DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_7, 700u }));
            auto canvasTypography1 = ResourceManager::GetOrCreate<ICanvasTypography>(dwriteTypographies[1].Get());
            auto range1 = Make<TypographyRangeValue>(CanvasCharacterRange{ 1, 2 }, canvasTypography1.Get());
            ThrowIfFailed(typographyRangesVector->Append(range1.Get()));

            ThrowIfFailed(typographyRangesVector->GetView(&TypographyRanges));
        }

        void ExpectMapCharacters()
        {
            m_mockSystemFontFallback->MapCharactersMethod.SetExpectedCalls(1,
                [=](IDWriteTextAnalysisSource* analysisSource,
                uint32_t textPosition,
                uint32_t textLength,
                IDWriteFontCollection* baseFontCollection,
                wchar_t const* baseFamilyName,
                DWRITE_FONT_WEIGHT baseWeight,
                DWRITE_FONT_STYLE baseStyle,
                DWRITE_FONT_STRETCH baseStretch,
                uint32_t* mappedLength,
                IDWriteFont** mappedFont,
                FLOAT* scale)
            {
                Assert::AreEqual(ExpectedTextPosition, textPosition);
                Assert::AreEqual(ExpectedTextLength, textLength);
                Assert::IsTrue(IsSameInstance(ExpectedFontCollection.Get(), baseFontCollection));
                Assert::AreEqual(0, wcscmp(ExpectedFamilyName.c_str(), baseFamilyName));
                Assert::AreEqual(ExpectedTextLength, textLength);
                Assert::AreEqual(ExpectedWeight, baseWeight);
                Assert::AreEqual(ExpectedStyle, baseStyle);
                Assert::AreEqual(ExpectedStretch, baseStretch);

                auto source1 = As<IDWriteTextAnalysisSource1>(analysisSource);
                MockDoingThingsToTextAnalysisSource(source1.Get());

                *mappedLength = ReturnedMappedLength;
                ReturnedFont.CopyTo(mappedFont);
                *scale = ReturnedScale;

                return S_OK;
            });
        }

        void VerifyNumberSubstitution(
            IDWriteNumberSubstitution* numberSubstitution)
        {
            if (DWriteNumberSubstitution)
                Assert::IsTrue(IsSameInstance(DWriteNumberSubstitution.Get(), numberSubstitution));
            else
                Assert::IsNull(numberSubstitution);
        }

        void VerifyFeatureRanges(
            DWRITE_TYPOGRAPHIC_FEATURES const** features,
            uint32_t const* featureRangeLengths,
            uint32_t featureRanges)
        {
            if (TypographyRanges)
            {
                Assert::AreEqual(1u, featureRangeLengths[0]);
                Assert::AreEqual(3u, features[0]->featureCount);
                Assert::AreEqual(DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_1, features[0]->features[0].nameTag);
                Assert::AreEqual(100u, features[0]->features[0].parameter);
                Assert::AreEqual(DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_2, features[0]->features[1].nameTag);
                Assert::AreEqual(200u, features[0]->features[1].parameter);
                Assert::AreEqual(DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_3, features[0]->features[2].nameTag);
                Assert::AreEqual(300u, features[0]->features[2].parameter);

                Assert::AreEqual(2u, featureRangeLengths[1]);
                Assert::AreEqual(4u, features[1]->featureCount);
                Assert::AreEqual(DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_4, features[1]->features[0].nameTag);
                Assert::AreEqual(400u, features[1]->features[0].parameter);
                Assert::AreEqual(DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_5, features[1]->features[1].nameTag);
                Assert::AreEqual(500u, features[1]->features[1].parameter);
                Assert::AreEqual(DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_6, features[1]->features[2].nameTag);
                Assert::AreEqual(600u, features[1]->features[2].parameter);
                Assert::AreEqual(DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_7, features[1]->features[3].nameTag);
                Assert::AreEqual(700u, features[1]->features[3].parameter);
            }
            else
            {
                Assert::IsNull(features);
                Assert::IsNull(featureRangeLengths);
                Assert::AreEqual(0u, featureRanges);
            }
        }

        void ExpectGetGlyphs(int getGlyphCount=1, int getGlyphPlacementsCount=1)
        {
            TextAnalyzer->GetGlyphsMethod.SetExpectedCalls(getGlyphCount,
                [&](WCHAR const* textString,
                    uint32_t textLength,
                    IDWriteFontFace* fontFace,
                    BOOL isSideways,
                    BOOL isRightToLeft,
                    DWRITE_SCRIPT_ANALYSIS const* scriptAnalysis,
                    WCHAR const* localeName,
                    IDWriteNumberSubstitution* numberSubstitution,
                    DWRITE_TYPOGRAPHIC_FEATURES const** features,
                    uint32_t const* featureRangeLengths,
                    uint32_t featureRanges,
                    uint32_t maxGlyphCount,
                    UINT16* clusterMap,
                    DWRITE_SHAPING_TEXT_PROPERTIES* textProps,
                    UINT16* glyphIndices,
                    DWRITE_SHAPING_GLYPH_PROPERTIES* glyphProps,
                    uint32_t* actualGlyphCount)
                {
                    Assert::AreEqual(0, wcscmp(this->Text.c_str(), textString));
                    Assert::AreEqual(static_cast<uint32_t>(this->Text.length()), textLength);
                    Assert::IsTrue(IsSameInstance(RealizedFontFace.Get(), fontFace));

                    Assert::AreEqual(IsSideways, !!isSideways);
                    Assert::AreEqual(IsRightToLeft, !!isRightToLeft);

                    Assert::AreEqual(static_cast<uint16_t>(123), scriptAnalysis->script);
                    Assert::AreEqual(DWRITE_SCRIPT_SHAPES_NO_VISUAL, scriptAnalysis->shapes);

                    Assert::AreEqual(0, wcscmp(Locale.c_str(), localeName));

                    VerifyNumberSubstitution(numberSubstitution);

                    VerifyFeatureRanges(features, featureRangeLengths, featureRanges);

                    //
                    // For these contrived tests, the glyph breakdown will add some extra glyphs.
                    //
                    const int calculatedGlyphCount = GetGlyphCount();

                    if (calculatedGlyphCount > static_cast<int>(maxGlyphCount))
                        return HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER);

                    for (int i = 0; i < static_cast<int>(this->Text.length()); ++i)
                    {
                        clusterMap[i] = static_cast<uint16_t>(ClusterMap[i]);
                        textProps[i].isShapedAlone = i % 2 == 0;
                    }

                    *actualGlyphCount = calculatedGlyphCount;

                    for (int i = 0; i < calculatedGlyphCount; ++i)
                    {
                        glyphIndices[i] = static_cast<uint16_t>(GetGlyphIndex(i));

                        auto shaping = GetDWriteShaping(i);
                        glyphProps[i].justification = shaping.justification;
                        glyphProps[i].isClusterStart = shaping.isClusterStart;
                        glyphProps[i].isDiacritic = shaping.isDiacritic;
                        glyphProps[i].isZeroWidthSpace = shaping.isZeroWidthSpace;
                    }

                    return S_OK;
                });
            
            TextAnalyzer->GetGlyphPlacementsMethod.SetExpectedCalls(getGlyphPlacementsCount,
                [&](WCHAR const* textString,
                    UINT16 const* clusterMap,
                    DWRITE_SHAPING_TEXT_PROPERTIES* textProps,
                    uint32_t textLength,
                    UINT16 const* glyphIndices,
                    DWRITE_SHAPING_GLYPH_PROPERTIES const* glyphProps,
                    uint32_t glyphCount,
                    IDWriteFontFace * fontFace,
                    FLOAT fontEmSize,
                    BOOL isSideways,
                    BOOL isRightToLeft,
                    DWRITE_SCRIPT_ANALYSIS const* scriptAnalysis,
                    WCHAR const* localeName,
                    DWRITE_TYPOGRAPHIC_FEATURES const** features,
                    uint32_t const* featureRangeLengths,
                    uint32_t featureRanges,
                    FLOAT* glyphAdvances,
                    DWRITE_GLYPH_OFFSET* glyphOffsets)
                {
                    Assert::AreEqual(0, wcscmp(this->Text.c_str(), textString));

                    for (int i = 0; i < static_cast<int>(this->Text.length()); ++i)
                    {
                        Assert::AreEqual(ClusterMap[i], static_cast<int>(clusterMap[i]));
                        Assert::AreEqual(i % 2 == 0, static_cast<bool>(textProps[i].isShapedAlone));
                    }

                    Assert::AreEqual(static_cast<uint32_t>(this->Text.length()), textLength);

                    for (uint32_t i = 0; i < glyphCount; i++)
                    {
                        Assert::AreEqual(GetGlyphIndex(i), static_cast<int>(glyphIndices[i]));

                        auto expectedShaping = GetDWriteShaping(i);
                        Assert::AreEqual(expectedShaping.justification, glyphProps[i].justification);
                        Assert::AreEqual(expectedShaping.isClusterStart, glyphProps[i].isClusterStart);
                        Assert::AreEqual(expectedShaping.isDiacritic, glyphProps[i].isDiacritic);
                        Assert::AreEqual(expectedShaping.isZeroWidthSpace, glyphProps[i].isZeroWidthSpace);
                    }

                    const int extraGlyphs = AdditionalGlyphsToAddDuringExpansion;
                    Assert::AreEqual(static_cast<int>(this->Text.length()) + extraGlyphs, static_cast<int>(glyphCount));

                    Assert::IsTrue(IsSameInstance(RealizedFontFace.Get(), fontFace));

                    Assert::AreEqual(FontSize, fontEmSize);
                    Assert::AreEqual(IsSideways, !!isSideways);
                    Assert::AreEqual(IsRightToLeft, !!isRightToLeft);

                    Assert::AreEqual(static_cast<uint16_t>(123), scriptAnalysis->script);
                    Assert::AreEqual(DWRITE_SCRIPT_SHAPES_NO_VISUAL, scriptAnalysis->shapes);

                    Assert::AreEqual(0, wcscmp(Locale.c_str(), localeName));

                    VerifyFeatureRanges(features, featureRangeLengths, featureRanges);

                    for (uint32_t i = 0; i < glyphCount; ++i)
                    {
                        glyphAdvances[i] = GetGlyphAdvance(i);
                        auto offset = GetGlyphOffset(i);
                        glyphOffsets[i].advanceOffset = offset.advanceOffset;
                        glyphOffsets[i].ascenderOffset = offset.ascenderOffset;
                    }

                    return S_OK;
                });
        }

        void GetGlyphs(ComPtr<ICanvasTextAnalyzer> const& textAnalyzer)
        {
            uint32_t glyphCount;
            CanvasGlyph* glyphElements;

            Assert::AreEqual(S_OK, textAnalyzer->GetGlyphs(
                CharacterRange,
                FontFace.Get(),
                FontSize,
                IsSideways,
                IsRightToLeft,
                AnalyzedScript,
                &glyphCount,
                &glyphElements));

            const int extraGlyphs = AdditionalGlyphsToAddDuringExpansion;
            Assert::AreEqual(static_cast<int>(this->Text.length()) + extraGlyphs, static_cast<int>(glyphCount));

            for (int i = 0; i < static_cast<int>(Text.length()) + extraGlyphs; ++i)
            {
                Assert::AreEqual(GetGlyphIndex(i), glyphElements[i].Index);
                Assert::AreEqual(GetGlyphAdvance(i), glyphElements[i].Advance);

                auto expectedOffset = GetGlyphOffset(i);
                Assert::AreEqual(expectedOffset.advanceOffset, glyphElements[i].AdvanceOffset);
                Assert::AreEqual(expectedOffset.ascenderOffset, glyphElements[i].AscenderOffset);
            }
        }

        void GetGlyphsWithAllOptions(ComPtr<ICanvasTextAnalyzer> const& textAnalyzer)
        {
            uint32_t clusterMapIndexCount;
            int* clusterMapIndexElements;

            uint32_t isShapedAloneCount;
            boolean* isShapedAloneElements;

            uint32_t glyphShapingCount;
            CanvasGlyphShaping* glyphShapingElements;

            uint32_t glyphCount;
            CanvasGlyph* glyphElements;
            
            Assert::AreEqual(S_OK, textAnalyzer->GetGlyphsWithAllOptions(
                CharacterRange,
                FontFace.Get(),
                FontSize,
                IsSideways,
                IsRightToLeft,
                AnalyzedScript,
                WinString(Locale.c_str()),
                NumberSubstitution.Get(),
                TypographyRanges.Get(),
                &clusterMapIndexCount,
                &clusterMapIndexElements,
                &isShapedAloneCount,
                &isShapedAloneElements,
                &glyphShapingCount,
                &glyphShapingElements,
                &glyphCount,
                &glyphElements));
            
            Assert::AreEqual(static_cast<uint32_t>(this->Text.length()), clusterMapIndexCount);
            Assert::AreEqual(static_cast<uint32_t>(this->Text.length()), isShapedAloneCount);

            const int extraGlyphs = AdditionalGlyphsToAddDuringExpansion;
            Assert::AreEqual(static_cast<int>(this->Text.length()) + extraGlyphs, static_cast<int>(glyphShapingCount));
            Assert::AreEqual(static_cast<int>(this->Text.length()) + extraGlyphs, static_cast<int>(glyphCount));

            for (int i = 0; i < static_cast<int>(Text.length()); ++i)
            {
                Assert::AreEqual(ClusterMap[i], clusterMapIndexElements[i]);
                Assert::AreEqual(i % 2 == 0, !!isShapedAloneElements[i]);
            }

            for (int i = 0; i < static_cast<int>(Text.length()) + extraGlyphs; ++i)
            {
                auto expectedShaping = GetShaping(i);

                Assert::AreEqual(expectedShaping.Justification, glyphShapingElements[i].Justification);
                Assert::AreEqual(expectedShaping.IsClusterStart, glyphShapingElements[i].IsClusterStart);
                Assert::AreEqual(expectedShaping.IsDiacritic, glyphShapingElements[i].IsDiacritic);
                Assert::AreEqual(expectedShaping.IsZeroWidthSpace, glyphShapingElements[i].IsZeroWidthSpace);

                Assert::AreEqual(GetGlyphIndex(i), glyphElements[i].Index);
                Assert::AreEqual(GetGlyphAdvance(i), glyphElements[i].Advance);

                auto expectedOffset = GetGlyphOffset(i);
                Assert::AreEqual(expectedOffset.advanceOffset, glyphElements[i].AdvanceOffset);
                Assert::AreEqual(expectedOffset.ascenderOffset, glyphElements[i].AscenderOffset);
            }
        }

        void ExpectGetJustificationOpportunities()
        {
            TextAnalyzer->GetJustificationOpportunitiesMethod.SetExpectedCalls(1,
                [&](
                    IDWriteFontFace* fontFace,
                    FLOAT fontSize,
                    DWRITE_SCRIPT_ANALYSIS script,
                    uint32_t textLength,
                    uint32_t glyphCount,
                    WCHAR const* text,
                    UINT16 const* dwriteClusterMap,
                    DWRITE_SHAPING_GLYPH_PROPERTIES const* dwriteShapingProperties,
                    DWRITE_JUSTIFICATION_OPPORTUNITY* dwriteOutput)
            {
                Assert::IsTrue(IsSameInstance(RealizedFontFace.Get(), fontFace));
                Assert::AreEqual(FontSize, fontSize);

                Assert::AreEqual(static_cast<uint16_t>(123), script.script);
                Assert::AreEqual(DWRITE_SCRIPT_SHAPES_NO_VISUAL, script.shapes);

                Assert::AreEqual(static_cast<uint32_t>(this->Text.length()), textLength);

                const int calculatedGlyphCount = GetGlyphCount();
                Assert::AreEqual(calculatedGlyphCount, static_cast<int>(glyphCount));

                Assert::AreEqual(0, wcscmp(this->Text.c_str(), text));

                for (int i = 0; i < static_cast<int>(this->Text.length()); ++i)
                {
                    Assert::AreEqual(static_cast<uint16_t>(ClusterMap[i]), dwriteClusterMap[i]);
                }

                for (int i = 0; i < calculatedGlyphCount; ++i)
                {
                    auto expectedShaping = GetDWriteShaping(i);
                    Assert::AreEqual(expectedShaping.justification, dwriteShapingProperties[i].justification);
                    Assert::AreEqual(expectedShaping.isClusterStart, dwriteShapingProperties[i].isClusterStart);
                    Assert::AreEqual(expectedShaping.isDiacritic, dwriteShapingProperties[i].isDiacritic);
                    Assert::AreEqual(expectedShaping.isZeroWidthSpace, dwriteShapingProperties[i].isZeroWidthSpace);
                }

                for (int i = 0; i < calculatedGlyphCount; ++i)
                {
                    dwriteOutput[i] = GetDWriteJustificationOpportunity(i);
                }

                return S_OK;
            });
        }

        void GetJustificationOpportunities(ComPtr<ICanvasTextAnalyzer> const& textAnalyzer)
        {
            uint32_t valueCount;
            CanvasJustificationOpportunity* valueElements;

            auto glyphCount = GetGlyphCount();
            std::vector<CanvasGlyphShaping> glyphShaping;
            glyphShaping.resize(glyphCount);
            for (uint32_t i = 0; i < glyphCount; ++i)
            {
                glyphShaping[i] = GetShaping(i);
            }

            Assert::AreEqual(S_OK, textAnalyzer->GetJustificationOpportunities(
                CharacterRange,
                FontFace.Get(),
                FontSize,
                AnalyzedScript,
                static_cast<uint32_t>(ClusterMap.size()),
                ClusterMap.data(),
                static_cast<uint32_t>(glyphShaping.size()),
                glyphShaping.data(),
                &valueCount,
                &valueElements));

            Assert::AreEqual(GetGlyphCount(), valueCount);

            for (int i = 0; i < static_cast<int>(valueCount); ++i)
            {
                auto expectedJustificationOpportunity = GetJustificationOpportunity(i);

                Assert::AreEqual(expectedJustificationOpportunity.ExpansionMinimum, valueElements[i].ExpansionMinimum);
                Assert::AreEqual(expectedJustificationOpportunity.ExpansionMaximum, valueElements[i].ExpansionMaximum);
                Assert::AreEqual(expectedJustificationOpportunity.CompressionMaximum, valueElements[i].CompressionMaximum);
                Assert::AreEqual(expectedJustificationOpportunity.ExpansionPriority, valueElements[i].ExpansionPriority);
                Assert::AreEqual(expectedJustificationOpportunity.CompressionPriority, valueElements[i].CompressionPriority);
                Assert::AreEqual(expectedJustificationOpportunity.AllowResidualExpansion, valueElements[i].AllowResidualExpansion);
                Assert::AreEqual(expectedJustificationOpportunity.AllowResidualCompression, valueElements[i].AllowResidualCompression);
                Assert::AreEqual(expectedJustificationOpportunity.ApplyToLeadingEdge, valueElements[i].ApplyToLeadingEdge);
                Assert::AreEqual(expectedJustificationOpportunity.ApplyToTrailingEdge, valueElements[i].ApplyToTrailingEdge);
            }
        }

        void ExpectJustifyGlyphAdvances()
        {
            TextAnalyzer->JustifyGlyphAdvancesMethod.SetExpectedCalls(1,
                [&](FLOAT lineWidth, 
                    uint32_t glyphCount,
                    DWRITE_JUSTIFICATION_OPPORTUNITY const* justificationOpportunitiesElements, 
                    FLOAT const* dwriteGlyphAdvances, 
                    DWRITE_GLYPH_OFFSET const* dwriteGlyphOffsets, 
                    FLOAT* outputGlyphAdvances, 
                    DWRITE_GLYPH_OFFSET* outputGlyphOffsets)
                {
                    Assert::AreEqual(LineWidth, lineWidth);
                    Assert::AreEqual(GetGlyphCount(), glyphCount);

                    for (uint32_t i = 0; i < glyphCount; ++i)
                    {
                        auto expectedJustificationOpportunity = GetDWriteJustificationOpportunity(i);
                        Assert::AreEqual(expectedJustificationOpportunity.expansionMinimum, justificationOpportunitiesElements[i].expansionMinimum);
                        Assert::AreEqual(expectedJustificationOpportunity.expansionMaximum, justificationOpportunitiesElements[i].expansionMaximum);
                        Assert::AreEqual(expectedJustificationOpportunity.compressionMaximum, justificationOpportunitiesElements[i].compressionMaximum);
                        Assert::AreEqual(expectedJustificationOpportunity.expansionPriority, justificationOpportunitiesElements[i].expansionPriority);
                        Assert::AreEqual(expectedJustificationOpportunity.compressionPriority, justificationOpportunitiesElements[i].compressionPriority);
                        Assert::AreEqual(expectedJustificationOpportunity.allowResidualExpansion, justificationOpportunitiesElements[i].allowResidualExpansion);
                        Assert::AreEqual(expectedJustificationOpportunity.allowResidualCompression, justificationOpportunitiesElements[i].allowResidualCompression);
                        Assert::AreEqual(expectedJustificationOpportunity.applyToLeadingEdge, justificationOpportunitiesElements[i].applyToLeadingEdge);
                        Assert::AreEqual(expectedJustificationOpportunity.applyToTrailingEdge, justificationOpportunitiesElements[i].applyToTrailingEdge);

                        auto expectedAdvance = GetGlyphAdvance(i);
                        Assert::AreEqual(expectedAdvance, dwriteGlyphAdvances[i]);

                        auto expectedOffset = GetGlyphOffset(i);
                        Assert::AreEqual(expectedOffset.advanceOffset, dwriteGlyphOffsets[i].advanceOffset);
                        Assert::AreEqual(expectedOffset.ascenderOffset, dwriteGlyphOffsets[i].ascenderOffset);

                        outputGlyphAdvances[i] = expectedAdvance + 1;
                        outputGlyphOffsets[i].advanceOffset = expectedOffset.advanceOffset + 1;
                        outputGlyphOffsets[i].ascenderOffset = expectedOffset.ascenderOffset + 1;
                    }

                    return S_OK;
                });
        }

        void ApplyJustificationOpportunities(
            ComPtr<ICanvasTextAnalyzer> const& textAnalyzer, 
            bool injectInvalidGlyphIndex = false,
            HRESULT expectedHr = S_OK)
        {
            const uint32_t glyphCount = GetGlyphCount();

            std::vector<CanvasJustificationOpportunity> justificationOpportunities;
            justificationOpportunities.reserve(glyphCount);
            for (uint32_t i = 0; i < glyphCount; ++i)
            {
                justificationOpportunities.push_back(GetJustificationOpportunity(i));
            }

            std::vector<CanvasGlyph> glyphs;
            glyphs.resize(glyphCount);
            for (uint32_t i = 0; i < glyphCount; ++i)
            {
                glyphs[i].Index = GetGlyphIndex(i);
                glyphs[i].Advance = GetGlyphAdvance(i);

                auto offset = GetGlyphOffset(i);
                glyphs[i].AdvanceOffset = offset.advanceOffset;
                glyphs[i].AscenderOffset = offset.ascenderOffset;
            }

            if (injectInvalidGlyphIndex)
            {
                glyphs[1].Index = -1;
            }

            uint32_t valueCount;
            CanvasGlyph* valueElements;

            Assert::AreEqual(expectedHr, textAnalyzer->ApplyJustificationOpportunities(
                LineWidth,
                static_cast<uint32_t>(justificationOpportunities.size()),
                justificationOpportunities.data(),
                static_cast<uint32_t>(glyphs.size()),
                glyphs.data(),
                &valueCount,
                &valueElements));

            if (expectedHr == S_OK)
            {
                Assert::AreEqual(GetGlyphCount(), valueCount);

                for (int i = 0; i < static_cast<int>(valueCount); ++i)
                {
                    Assert::AreEqual(GetGlyphIndex(i), valueElements[i].Index); // Index should be the same.
                    Assert::AreEqual(GetGlyphAdvance(i) + 1, valueElements[i].Advance);

                    auto offset = GetGlyphOffset(i);
                    Assert::AreEqual(offset.advanceOffset + 1, valueElements[i].AdvanceOffset);
                    Assert::AreEqual(offset.ascenderOffset + 1, valueElements[i].AscenderOffset);
                }
            }
        }
        
        void ExpectGetJustifiedGlyphs(int callCount=1)
        {
            TextAnalyzer->GetJustifiedGlyphsMethod.SetExpectedCalls(callCount,
                [&](IDWriteFontFace* fontFace,
                    FLOAT fontSize, 
                    DWRITE_SCRIPT_ANALYSIS script, 
                    uint32_t textLength, 
                    uint32_t originalGlyphCount,
                    uint32_t maxGlyphCount, 
                    const UINT16* dwriteClusterMap, 
                    const UINT16* indices, 
                    const FLOAT* advances, 
                    const FLOAT* justifiedAdvances, 
                    const DWRITE_GLYPH_OFFSET* justifiedOffsets, 
                    const DWRITE_SHAPING_GLYPH_PROPERTIES* dwriteShapingProperties,
                    uint32_t* actualGlyphCount, 
                    UINT16* modifiedClusterMap, 
                    UINT16* modifiedGlyphIndices, 
                    FLOAT* modifiedGlyphAdvances, 
                    DWRITE_GLYPH_OFFSET* modifiedGlyphOffsets)
                {
                    Assert::IsTrue(IsSameInstance(RealizedFontFace.Get(), fontFace));
                    Assert::AreEqual(FontSize, fontSize);

                    Assert::AreEqual(static_cast<uint16_t>(123), script.script);
                    Assert::AreEqual(DWRITE_SCRIPT_SHAPES_NO_VISUAL, script.shapes);

                    Assert::AreEqual(static_cast<uint32_t>(this->Text.length()), textLength);

                    auto originalCalculatedGlyphCount = GetGlyphCount();
                    Assert::AreEqual(originalCalculatedGlyphCount, originalGlyphCount);

                    if (originalCalculatedGlyphCount > static_cast<int>(maxGlyphCount))
                        return HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER);

                    for (int i = 0; i < static_cast<int>(this->Text.length()); ++i)
                    {
                        Assert::AreEqual(static_cast<uint16_t>(ClusterMap[i]), dwriteClusterMap[i]);
                    }

                    for (uint32_t i = 0; i < originalCalculatedGlyphCount; ++i)
                    {
                        Assert::AreEqual(GetGlyphIndex(i), static_cast<int>(indices[i]));
                        Assert::AreEqual(GetGlyphAdvance(i), advances[i]);
                        Assert::AreEqual(GetGlyphAdvance(i) + 1, justifiedAdvances[i]);

                        auto offset = GetGlyphOffset(i);
                        Assert::AreEqual(offset.advanceOffset + 1, justifiedOffsets[i].advanceOffset);
                        Assert::AreEqual(offset.ascenderOffset + 1, justifiedOffsets[i].ascenderOffset);

                        auto expectedShaping = GetDWriteShaping(i);
                        Assert::AreEqual(expectedShaping.justification, dwriteShapingProperties[i].justification);
                        Assert::AreEqual(expectedShaping.isClusterStart, dwriteShapingProperties[i].isClusterStart);
                        Assert::AreEqual(expectedShaping.isDiacritic, dwriteShapingProperties[i].isDiacritic);
                        Assert::AreEqual(expectedShaping.isZeroWidthSpace, dwriteShapingProperties[i].isZeroWidthSpace);
                    }

                    auto newGlyphCount = originalCalculatedGlyphCount + 1; // We just add one glyph to the end.
                    *actualGlyphCount = newGlyphCount;

                    for (int i = 0; i < static_cast<int>(this->Text.length()); ++i)
                    {
                        modifiedClusterMap[i] = static_cast<uint16_t>(ClusterMap[i] + 1);
                    }

                    for (uint32_t i = 0; i < newGlyphCount; ++i)
                    {
                        auto offset = GetGlyphOffset(i);

                        modifiedGlyphIndices[i] = static_cast<uint16_t>(GetGlyphIndex(i) + 1);
                        modifiedGlyphAdvances[i] = GetGlyphAdvance(i) + 2;
                        modifiedGlyphOffsets[i].advanceOffset = offset.advanceOffset + 2;
                        modifiedGlyphOffsets[i].ascenderOffset = offset.ascenderOffset + 2;
                    }

                    return S_OK;
                });
        }

        void AddGlyphsAfterJustification(
            ComPtr<ICanvasTextAnalyzer> const& textAnalyzer,
            bool outputClusterMap)
        {
            uint32_t valueCount;
            CanvasGlyph* valueElements;

            const uint32_t glyphCount = GetGlyphCount();

            std::vector<CanvasGlyph> originalGlyphs;
            std::vector<CanvasGlyph> justifiedGlyphs;
            std::vector<CanvasGlyphShaping> glyphShaping;
            originalGlyphs.resize(glyphCount);
            justifiedGlyphs.resize(glyphCount);
            glyphShaping.resize(glyphCount);

            for (uint32_t i = 0; i < glyphCount; ++i)
            {
                originalGlyphs[i].Index = GetGlyphIndex(i);
                originalGlyphs[i].Advance = GetGlyphAdvance(i);

                auto offset = GetGlyphOffset(i);
                originalGlyphs[i].AdvanceOffset = offset.advanceOffset;
                originalGlyphs[i].AscenderOffset = offset.ascenderOffset;

                justifiedGlyphs[i].Index = GetGlyphIndex(i);
                justifiedGlyphs[i].Advance = originalGlyphs[i].Advance + 1;
                justifiedGlyphs[i].AdvanceOffset = offset.advanceOffset + 1;
                justifiedGlyphs[i].AscenderOffset = offset.ascenderOffset + 1;

                glyphShaping[i] = GetShaping(i);
            }

            uint32_t modifiedClusterMapIndicesCount{};
            int* modifiedClusterMapIndicesElements{};

            if (outputClusterMap)
            {
                Assert::AreEqual(S_OK, textAnalyzer->AddGlyphsAfterJustificationWithClusterMap(
                    FontFace.Get(),
                    FontSize,
                    AnalyzedScript,
                    static_cast<uint32_t>(ClusterMap.size()),
                    ClusterMap.data(),
                    static_cast<uint32_t>(originalGlyphs.size()),
                    originalGlyphs.data(),
                    static_cast<uint32_t>(justifiedGlyphs.size()),
                    justifiedGlyphs.data(),
                    static_cast<uint32_t>(glyphShaping.size()),
                    glyphShaping.data(),
                    &modifiedClusterMapIndicesCount,
                    &modifiedClusterMapIndicesElements,
                    &valueCount,
                    &valueElements));
            }
            else
            {
                Assert::AreEqual(S_OK, textAnalyzer->AddGlyphsAfterJustification(
                    FontFace.Get(),
                    FontSize,
                    AnalyzedScript,
                    static_cast<uint32_t>(ClusterMap.size()),
                    ClusterMap.data(),
                    static_cast<uint32_t>(originalGlyphs.size()),
                    originalGlyphs.data(),
                    static_cast<uint32_t>(justifiedGlyphs.size()),
                    justifiedGlyphs.data(),
                    static_cast<uint32_t>(glyphShaping.size()),
                    glyphShaping.data(),
                    &valueCount,
                    &valueElements));
            }

            Assert::AreEqual(glyphCount + 1, valueCount); // Should've added one glyph

            for (int i = 0; i < static_cast<int>(valueCount); ++i)
            {
                Assert::AreEqual(GetGlyphIndex(i) + 1, valueElements[i].Index); // Index should be the same.
                Assert::AreEqual(GetGlyphAdvance(i) + 2, valueElements[i].Advance);

                auto offset = GetGlyphOffset(i);
                Assert::AreEqual(offset.advanceOffset + 2, valueElements[i].AdvanceOffset);
                Assert::AreEqual(offset.ascenderOffset + 2, valueElements[i].AscenderOffset);
            }

            if (outputClusterMap)
            {
                Assert::AreEqual(static_cast<uint32_t>(ClusterMap.size()), modifiedClusterMapIndicesCount);
                for (int i = 0; i < static_cast<int>(ClusterMap.size()); ++i)
                {
                    Assert::AreEqual(ClusterMap[i] + 1, modifiedClusterMapIndicesElements[i]);
                }
            }
        }

        ComPtr<ICanvasTextAnalyzer> Create()
        {
            ComPtr<ICanvasTextAnalyzer> analyzer;
            ThrowIfFailed(m_textAnalyzerFactory->Create(WinString(Text.c_str()), TextDirection, &analyzer));

            return analyzer;
        }

        ComPtr<ICanvasTextAnalyzer> CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel()
        {
            ComPtr<ICanvasTextAnalyzer> analyzer;
            ThrowIfFailed(m_textAnalyzerFactory->CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(
                WinString(Text.c_str()),
                TextDirection,
                NumberSubstitution.Get(),
                VerticalGlyphOrientation,
                BidiLevel,
                &analyzer));

            return analyzer;
        }

        ComPtr<ICanvasTextAnalyzer> CreateWithOptions()
        {
            ComPtr<ICanvasTextAnalyzer> analyzer;
            ThrowIfFailed(m_textAnalyzerFactory->CreateWithOptions(
                WinString(Text.c_str()),
                TextDirection,
                Options.Get(),
                &analyzer));

            return analyzer;
        }

        void CreateAnalyzerAndGetFonts()
        {
            auto textAnalyzer = Create();

            ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
            Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(TextFormat.Get(), &result));
        }

    private:

        uint32_t GetGlyphCount()
        {
            return static_cast<int>(this->Text.length()) + AdditionalGlyphsToAddDuringExpansion;
        }
        
        DWRITE_SHAPING_GLYPH_PROPERTIES GetDWriteShaping(int i)
        {
            DWRITE_SHAPING_GLYPH_PROPERTIES s{};
            s.justification = static_cast<uint16_t>(15);
            s.isClusterStart = i % 2 == 0;
            s.isDiacritic = i % 2 != 0;
            s.isZeroWidthSpace = i % 2 == 0;

            return s;
        }

        CanvasGlyphShaping GetShaping(int i)
        {
            CanvasGlyphShaping s{};
            s.Justification = CanvasGlyphJustification::ArabicSeenM;
            s.IsClusterStart = i % 2 == 0;
            s.IsDiacritic = i % 2 != 0;
            s.IsZeroWidthSpace = i % 2 == 0;

            return s;
        }

        DWRITE_JUSTIFICATION_OPPORTUNITY GetDWriteJustificationOpportunity(int i)
        {
            DWRITE_JUSTIFICATION_OPPORTUNITY o{};
            o.expansionMinimum = static_cast<float>(i * 1.0f);
            o.expansionMaximum = static_cast<float>(i * 2.0f);
            o.compressionMaximum = static_cast<float>(i * 3.0f);
            o.expansionPriority = i;
            o.compressionPriority = i + 1;
            o.allowResidualExpansion = static_cast<uint32_t>(i % 2 == 0);
            o.allowResidualCompression = static_cast<uint32_t>(i % 2 != 0);
            o.applyToLeadingEdge = static_cast<uint32_t>(i % 2 == 0);
            o.applyToTrailingEdge = static_cast<uint32_t>(i % 2 != 0);
            return o;
        }

        CanvasJustificationOpportunity GetJustificationOpportunity(int i)
        {
            CanvasJustificationOpportunity o{};
            o.ExpansionMinimum = static_cast<float>(i * 1.0f);
            o.ExpansionMaximum = static_cast<float>(i * 2.0f);
            o.CompressionMaximum = static_cast<float>(i * 3.0f);
            o.ExpansionPriority = static_cast<uint8_t>(i);
            o.CompressionPriority = static_cast<uint8_t>(i + 1);
            o.AllowResidualExpansion = static_cast<boolean>(i % 2 == 0);
            o.AllowResidualCompression = static_cast<boolean>(i % 2 != 0);
            o.ApplyToLeadingEdge = static_cast<boolean>(i % 2 == 0);
            o.ApplyToTrailingEdge = static_cast<boolean>(i % 2 != 0);
            return o;
        }

        int GetGlyphIndex(int i)
        {
            return i * 3 + 2;
        }

        float GetGlyphAdvance(int i)
        {
            return static_cast<float>(i) * 11.0f + 1.0f;
        }

        DWRITE_GLYPH_OFFSET GetGlyphOffset(int i)
        {
            return DWRITE_GLYPH_OFFSET{ static_cast<float>(i)* 12.0f + 2.0f, static_cast<float>(i)* 13.0f + 3.0f };
        }
    };

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_UsesSystemFontCollection)
    {
        Fixture f;

        f.ExpectGetSystemFontCollection();
        f.ExpectMapCharacters();

        f.CreateAnalyzerAndGetFonts();
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_NullFontSet_UsesSystemFontCollection)
    {
        Fixture f;

        f.ExpectGetSystemFontCollection();
        f.ExpectMapCharacters();

        auto textAnalyzer = f.Create();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFonts(Make<CanvasTextFormat>().Get(), nullptr, &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_PassesThrough_TextFormatProperties)
    {
        Fixture f;

        f.ExpectedWeight = DWRITE_FONT_WEIGHT_ULTRA_BOLD;
        f.ExpectedStyle = DWRITE_FONT_STYLE_ITALIC;
        f.ExpectedStretch = DWRITE_FONT_STRETCH_EXPANDED;
        f.ExpectMapCharacters();

        ThrowIfFailed(f.TextFormat->put_FontWeight(ABI::Windows::UI::Text::FontWeight{ 800 }));
        ThrowIfFailed(f.TextFormat->put_FontStyle(ABI::Windows::UI::Text::FontStyle_Italic));
        ThrowIfFailed(f.TextFormat->put_FontStretch(ABI::Windows::UI::Text::FontStretch_Expanded));

        f.CreateAnalyzerAndGetFonts();
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_PassesThrough_TextFormatFontFamily)
    {
        Fixture f;

        f.ExpectedFamilyName = L"Parchment";
        f.ExpectMapCharacters();

        ThrowIfFailed(f.TextFormat->put_FontFamily(WinString(L"Parchment")));

        f.CreateAnalyzerAndGetFonts();
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFontsUsingSystemFontSet_PassesThroughCorrectFontSet)
    {
        Fixture f;

        auto dwriteFontCollection = Make<MockDWriteFontCollection>();
        f.ExpectedFontCollection = dwriteFontCollection;
        f.ExpectMapCharacters();

        auto textAnalyzer = f.Create();

#if WINVER > _WIN32_WINNT_WINBLUE
        auto dwriteFontSet = Make<MockDWriteFontSet>();
        f.GetAdapter()->GetMockDWriteFactory()->CreateFontCollectionFromFontSetMethod.SetExpectedCalls(1,
            [&](IDWriteFontSet* fontSet, IDWriteFontCollection1** fontCollection)
            {
                Assert::IsTrue(IsSameInstance(dwriteFontSet.Get(), fontSet));
                dwriteFontCollection.CopyTo(fontCollection);
                return S_OK;
            });
        auto canvasFontSet = ResourceManager::GetOrCreate<ICanvasFontSet>(dwriteFontSet.Get());
#else
        auto canvasFontSet = ResourceManager::GetOrCreate<ICanvasFontSet>(dwriteFontCollection.Get());
#endif

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFonts(f.TextFormat.Get(), canvasFontSet.Get(), &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_UsesCorrectTextPositionAndLength)
    {
        Fixture f;

        f.Text = L"Some text";

        f.ExpectedTextPosition = 0;
        f.ExpectedTextLength = static_cast<uint32_t>(f.Text.length());
        f.ReturnedMappedLength = static_cast<uint32_t>(f.Text.length());
        f.ExpectMapCharacters();

        auto textAnalyzer = f.Create();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_TextAtPosition)
    {
        struct TestCase
        {
            uint32_t Position;
            wchar_t const* ExpectedText;
            uint32_t ExpectedCharacterCount;
        } testCases[] = {
            { 0, L"abc", 3 },
            { 1, L"bc", 2 },
            { 2, L"c", 1 },
            { 3, nullptr, 0 },
            { 999, nullptr, 0 }
        };

        for (auto testCase : testCases)
        {
            Fixture f;

            f.MockDoingThingsToTextAnalysisSource =
                [&](IDWriteTextAnalysisSource1* source)
                {
                    wchar_t const* result;
                    uint32_t characterCount;
                    Assert::AreEqual(S_OK, source->GetTextAtPosition(testCase.Position, &result, &characterCount));
                    Assert::AreEqual(testCase.ExpectedText, result);
                    Assert::AreEqual(testCase.ExpectedCharacterCount, characterCount);
                };
            f.ExpectMapCharacters();

            f.CreateAnalyzerAndGetFonts();
        }
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_TextBeforePosition)
    {
        struct TestCase
        {
            uint32_t Position;
            wchar_t const* ExpectedText;
            uint32_t ExpectedCharacterCount;
        } testCases[] = {
            { 0, nullptr, 0 },
            { 1, L"abc", 1 },
            { 2, L"abc", 2 },
            { 3, L"abc", 3 },
            { 999, nullptr, 0 }
        };

        for (auto testCase : testCases)
        {
            Fixture f;

            f.MockDoingThingsToTextAnalysisSource =
                [&](IDWriteTextAnalysisSource1* source)
                {
                    wchar_t const* result;
                    uint32_t characterCount;
                    Assert::AreEqual(S_OK, source->GetTextBeforePosition(testCase.Position, &result, &characterCount));
                    Assert::AreEqual(testCase.ExpectedText, result);
                    Assert::AreEqual(testCase.ExpectedCharacterCount, characterCount);
                };
            f.ExpectMapCharacters();

            f.CreateAnalyzerAndGetFonts();
        }
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_ParagraphReadingDirection)
    {
        Fixture f;

        f.MockDoingThingsToTextAnalysisSource =
            [](IDWriteTextAnalysisSource1* source)
            {
                Assert::AreEqual(DWRITE_READING_DIRECTION_BOTTOM_TO_TOP, source->GetParagraphReadingDirection());
            };
        f.ExpectMapCharacters();

        f.TextDirection = CanvasTextDirection::BottomToTopThenRightToLeft;

        auto textAnalyzer = f.Create();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(Make<CanvasTextFormat>().Get(), &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_LocaleName_FromTextFormat)
    {
        for (auto testCase : testCasesForCharacterRanges)
        {
            Fixture f;

            f.MockDoingThingsToTextAnalysisSource =
                [&](IDWriteTextAnalysisSource1* source)
                {
                    wchar_t const* result;
                    uint32_t characterCount;
                    Assert::AreEqual(S_OK, source->GetLocaleName(testCase.Position, &characterCount, &result));
                    Assert::AreEqual(L"xx-yy", result);
                    Assert::AreEqual(testCase.ExpectedCharacterCount, characterCount);
                };
            f.ExpectMapCharacters();

            ThrowIfFailed(f.TextFormat->put_LocaleName(WinString(L"xx-yy")));

            f.CreateAnalyzerAndGetFonts();
        }
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_LocaleName_FromOptions_FormatChangeAtEachCharacter)
    {
        Fixture f;

        f.Options->GetLocaleNameMethod.SetExpectedCalls(3,
            [&](int index, int* characterCount, HSTRING* out)
            {
                static WinString locales[] = { WinString(L"00-00"), WinString(L"11-11"), WinString(L"22-22") };

                Assert::IsTrue(index >= 0 && index < 3);
                locales[index].CopyTo(out);

                *characterCount = 1;

                return S_OK;
            });

        f.MockDoingThingsToTextAnalysisSource =
            [](IDWriteTextAnalysisSource1* source)
            {
                wchar_t const* result;
                uint32_t characterCount;

                Assert::AreEqual(S_OK, source->GetLocaleName(0, &characterCount, &result));
                Assert::AreEqual(L"00-00", result);
                Assert::AreEqual(1u, characterCount);

                Assert::AreEqual(S_OK, source->GetLocaleName(1, &characterCount, &result));
                Assert::AreEqual(L"11-11", result);
                Assert::AreEqual(1u, characterCount);

                Assert::AreEqual(S_OK, source->GetLocaleName(2, &characterCount, &result));
                Assert::AreEqual(L"22-22", result);
                Assert::AreEqual(1u, characterCount);
            };
        f.ExpectMapCharacters();

        auto textAnalyzer = f.CreateWithOptions();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_LocaleName_FromOptions_TwoCharactersWithOneFormatThenOneWithAnother)
    {
        Fixture f;

        f.Options->GetLocaleNameMethod.SetExpectedCalls(3,
            [&](int index, int* characterCount, HSTRING* out)
            {
                static WinString locales[] = { WinString(L"00-00"), WinString(L"11-11") };
                if (index == 0)
                {
                    locales[0].CopyTo(out);
                    *characterCount = 2;
                }
                else if (index == 1)
                {
                    locales[0].CopyTo(out);
                    *characterCount = 1;
                }
                else if (index == 2)
                {
                    locales[1].CopyTo(out);
                    *characterCount = 1;
                }

                return S_OK;
            });

        f.MockDoingThingsToTextAnalysisSource =
            [](IDWriteTextAnalysisSource1* source)
            {
                wchar_t const* result;
                uint32_t characterCount;

                Assert::AreEqual(S_OK, source->GetLocaleName(0, &characterCount, &result));
                Assert::AreEqual(L"00-00", result);
                Assert::AreEqual(2u, characterCount);

                Assert::AreEqual(S_OK, source->GetLocaleName(1, &characterCount, &result));
                Assert::AreEqual(L"00-00", result);
                Assert::AreEqual(1u, characterCount);

                Assert::AreEqual(S_OK, source->GetLocaleName(2, &characterCount, &result));
                Assert::AreEqual(L"11-11", result);
                Assert::AreEqual(1u, characterCount);
            };
        f.ExpectMapCharacters();

        auto textAnalyzer = f.CreateWithOptions();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_NumberSubstitution_FromDefault)
    {
        auto dwriteNumberSubstitution = Make<MockDWriteNumberSubstitution>();
        auto numberSubstitution = ResourceManager::GetOrCreate<ICanvasNumberSubstitution>(dwriteNumberSubstitution.Get());

        for (auto testCase : testCasesForCharacterRanges)
        {
            Fixture f;

            f.MockDoingThingsToTextAnalysisSource =
                [&](IDWriteTextAnalysisSource1* source)
                {
                    ComPtr<IDWriteNumberSubstitution> result;
                    uint32_t characterCount;
                    Assert::AreEqual(S_OK, source->GetNumberSubstitution(testCase.Position, &characterCount, &result));
                    Assert::IsTrue(IsSameInstance(dwriteNumberSubstitution.Get(), result.Get()));
                    Assert::AreEqual(testCase.ExpectedCharacterCount, characterCount);
                };
            f.ExpectMapCharacters();

            f.NumberSubstitution = numberSubstitution;

            auto textAnalyzer = f.CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel();

            ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
            Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
        }
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_NumberSubstitution_FromOptions_FormatChangeAtEachCharacter)
    {
        ComPtr<MockDWriteNumberSubstitution> dwriteNumberSubstitutions[3];
        ComPtr<ICanvasNumberSubstitution> numberSubstitutions[3];
        for (int i = 0; i < 3; ++i)
        {
            dwriteNumberSubstitutions[i] = Make<MockDWriteNumberSubstitution>();
            numberSubstitutions[i] = ResourceManager::GetOrCreate<ICanvasNumberSubstitution>(dwriteNumberSubstitutions[i].Get());
        }

        Fixture f;

        f.Options->GetNumberSubstitutionMethod.SetExpectedCalls(3,
            [&](int index, int* characterCount, ICanvasNumberSubstitution** out)
            {
                Assert::IsTrue(index >= 0 && index < 3);
                numberSubstitutions[index].CopyTo(out);
                *characterCount = 1;
                return S_OK;
            });

        f.MockDoingThingsToTextAnalysisSource =
            [&](IDWriteTextAnalysisSource1* source)
            {
                ComPtr<IDWriteNumberSubstitution> result;
                uint32_t characterCount;

                for (int i = 0; i < 3; i++)
                {
                    Assert::AreEqual(S_OK, source->GetNumberSubstitution(i, &characterCount, &result));
                    Assert::IsTrue(IsSameInstance(dwriteNumberSubstitutions[i].Get(), result.Get()));
                    Assert::AreEqual(1, static_cast<int>(characterCount));
                }
            };
        f.ExpectMapCharacters();

        auto textAnalyzer = f.CreateWithOptions();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_NumberSubstitution_FromOptions_TwoCharactersWithOneFormatThenOneWithAnother)
    {
        ComPtr<MockDWriteNumberSubstitution> dwriteNumberSubstitutions[2];
        ComPtr<ICanvasNumberSubstitution> numberSubstitutions[2];
        for (int i = 0; i < 2; ++i)
        {
            dwriteNumberSubstitutions[i] = Make<MockDWriteNumberSubstitution>();
            numberSubstitutions[i] = ResourceManager::GetOrCreate<ICanvasNumberSubstitution>(dwriteNumberSubstitutions[i].Get());
        }

        Fixture f;

        f.Options->GetNumberSubstitutionMethod.SetExpectedCalls(3,
            [&](int index, int* characterCount, ICanvasNumberSubstitution** out)
            {
                if (index == 0)
                {
                    numberSubstitutions[0].CopyTo(out);
                    *characterCount = 2;
                }
                else if (index == 1)
                {
                    numberSubstitutions[0].CopyTo(out);
                    *characterCount = 1;
                }
                else if (index == 2)
                {
                    numberSubstitutions[1].CopyTo(out);
                    *characterCount = 1;
                }
                return S_OK;
            });

        f.MockDoingThingsToTextAnalysisSource =
            [&](IDWriteTextAnalysisSource1* source)
            {
                ComPtr<IDWriteNumberSubstitution> result;
                uint32_t characterCount;

                Assert::AreEqual(S_OK, source->GetNumberSubstitution(0, &characterCount, &result));
                Assert::IsTrue(IsSameInstance(dwriteNumberSubstitutions[0].Get(), result.Get()));
                Assert::AreEqual(2, static_cast<int>(characterCount));

                Assert::AreEqual(S_OK, source->GetNumberSubstitution(1, &characterCount, &result));
                Assert::IsTrue(IsSameInstance(dwriteNumberSubstitutions[0].Get(), result.Get()));
                Assert::AreEqual(1, static_cast<int>(characterCount));

                Assert::AreEqual(S_OK, source->GetNumberSubstitution(2, &characterCount, &result));
                Assert::IsTrue(IsSameInstance(dwriteNumberSubstitutions[1].Get(), result.Get()));
                Assert::AreEqual(1, static_cast<int>(characterCount));
            };
        f.ExpectMapCharacters();

        auto textAnalyzer = f.CreateWithOptions();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_VerticalGlyphOrientation_FromDefault)
    {
        for (auto testCase : testCasesForCharacterRanges)
        {
            Fixture f;

            f.MockDoingThingsToTextAnalysisSource =
                [&](IDWriteTextAnalysisSource1* source)
                {
                    DWRITE_VERTICAL_GLYPH_ORIENTATION result;
                    uint32_t characterCount;
                    uint8_t unused;
                    Assert::AreEqual(S_OK, source->GetVerticalGlyphOrientation(testCase.Position, &characterCount, &result, &unused));
                    Assert::AreEqual(DWRITE_VERTICAL_GLYPH_ORIENTATION_STACKED, result);
                    Assert::AreEqual(testCase.ExpectedCharacterCount, characterCount);
                };
            f.ExpectMapCharacters();

            f.VerticalGlyphOrientation = CanvasVerticalGlyphOrientation::Stacked;

            auto textAnalyzer = f.CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel();

            ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
            Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
        }
    }


    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_VerticalGlyphOrientation_FromOptions_FormatChangeAtEachCharacter)
    {
        Fixture f;

        f.Options->GetVerticalGlyphOrientationMethod.SetExpectedCalls(3,
            [&](int index, int* characterCount, CanvasVerticalGlyphOrientation* out)
            {
                *out = index % 2 == 0 ? CanvasVerticalGlyphOrientation::Stacked : CanvasVerticalGlyphOrientation::Default;
                *characterCount = 1;
                return S_OK;
            });

        f.MockDoingThingsToTextAnalysisSource =
            [](IDWriteTextAnalysisSource1* source)
            {
                DWRITE_VERTICAL_GLYPH_ORIENTATION result;
                uint8_t unused;
                uint32_t characterCount;

                for (int i = 0; i < 3; i++)
                {
                    Assert::AreEqual(S_OK, source->GetVerticalGlyphOrientation(i, &characterCount, &result, &unused));
                    Assert::AreEqual(i % 2 == 0 ? DWRITE_VERTICAL_GLYPH_ORIENTATION_STACKED : DWRITE_VERTICAL_GLYPH_ORIENTATION_DEFAULT, result);
                    Assert::AreEqual(1, static_cast<int>(characterCount));
                }
            };
        f.ExpectMapCharacters();

        auto textAnalyzer = f.CreateWithOptions();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_VerticalGlyphOrientation_FromOptions_TwoCharactersWithOneFormatThenOneWithAnother)
    {
        Fixture f;

        f.Options->GetVerticalGlyphOrientationMethod.SetExpectedCalls(3,
            [&](int index, int* characterCount, CanvasVerticalGlyphOrientation* out)
            {
                if (index == 0)
                {
                    *out = CanvasVerticalGlyphOrientation::Stacked;
                    *characterCount = 2;
                }
                else if (index == 1)
                {
                    *out = CanvasVerticalGlyphOrientation::Stacked;
                    *characterCount = 1;
                }
                else if (index == 2)
                {
                    *out = CanvasVerticalGlyphOrientation::Default;
                    *characterCount = 1;
                }

                return S_OK;
            });

        f.MockDoingThingsToTextAnalysisSource =
            [](IDWriteTextAnalysisSource1* source)
            {
                DWRITE_VERTICAL_GLYPH_ORIENTATION result;
                uint8_t unused;
                uint32_t characterCount;

                Assert::AreEqual(S_OK, source->GetVerticalGlyphOrientation(0, &characterCount, &result, &unused));
                Assert::AreEqual(DWRITE_VERTICAL_GLYPH_ORIENTATION_STACKED, result);
                Assert::AreEqual(2, static_cast<int>(characterCount));

                Assert::AreEqual(S_OK, source->GetVerticalGlyphOrientation(1, &characterCount, &result, &unused));
                Assert::AreEqual(DWRITE_VERTICAL_GLYPH_ORIENTATION_STACKED, result);
                Assert::AreEqual(1, static_cast<int>(characterCount));

                Assert::AreEqual(S_OK, source->GetVerticalGlyphOrientation(2, &characterCount, &result, &unused));
                Assert::AreEqual(DWRITE_VERTICAL_GLYPH_ORIENTATION_DEFAULT, result);
                Assert::AreEqual(1, static_cast<int>(characterCount));
            };
        f.ExpectMapCharacters();

        auto textAnalyzer = f.CreateWithOptions();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
    }


    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_Bidi_FromDefault)
    {
        for (auto testCase : testCasesForCharacterRanges)
        {
            Fixture f;

            f.MockDoingThingsToTextAnalysisSource =
                [&](IDWriteTextAnalysisSource1* source)
                {
                    DWRITE_VERTICAL_GLYPH_ORIENTATION unused;
                    uint32_t characterCount;
                    uint8_t result;
                    Assert::AreEqual(S_OK, source->GetVerticalGlyphOrientation(testCase.Position, &characterCount, &unused, &result));
                    Assert::AreEqual(123, static_cast<int>(result));
                };
            f.ExpectMapCharacters();

            f.BidiLevel = 123;

            auto textAnalyzer = f.CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel();

            ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
            Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
        }
    }


    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_BidiLevel_FromOptions_FormatChangeAtEachCharacter)
    {
        Fixture f;

        f.Options->GetBidiLevelMethod.SetExpectedCalls(3,
            [&](int index, int* characterCount, uint32_t* out)
            {
                *out = static_cast<uint32_t>(index * 3 + 1);
                *characterCount = 1;
                return S_OK;
            });

        f.MockDoingThingsToTextAnalysisSource =
            [](IDWriteTextAnalysisSource1* source)
            {
                DWRITE_VERTICAL_GLYPH_ORIENTATION unused;
                uint8_t result;
                uint32_t characterCount;

                for (int i = 0; i < 3; i++)
                {
                    Assert::AreEqual(S_OK, source->GetVerticalGlyphOrientation(i, &characterCount, &unused, &result));
                    Assert::AreEqual(i * 3 + 1, static_cast<int>(result));
                    Assert::AreEqual(1, static_cast<int>(characterCount));
                }
            };
        f.ExpectMapCharacters();

        auto textAnalyzer = f.CreateWithOptions();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
    }


    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_BidiLevel_FromOptions_TwoCharactersWithOneFormatThenOneWithAnother)
    {
        Fixture f;


        f.Options->GetBidiLevelMethod.SetExpectedCalls(3,
            [&](int index, int* characterCount, uint32_t* out)
            {
                if (index == 0)
                {
                    *out = 12;
                    *characterCount = 2;
                }
                else if (index == 1)
                {
                    *out = 12;
                    *characterCount = 1;
                }
                else if (index == 2)
                {
                    *out = 34;
                    *characterCount = 1;
                }
                return S_OK;
            });

        f.MockDoingThingsToTextAnalysisSource =
            [](IDWriteTextAnalysisSource1* source)
            {
                DWRITE_VERTICAL_GLYPH_ORIENTATION unused;
                uint8_t result;
                uint32_t characterCount;

                Assert::AreEqual(S_OK, source->GetVerticalGlyphOrientation(0, &characterCount, &unused, &result));
                Assert::AreEqual(12, static_cast<int>(result));
                Assert::AreEqual(2, static_cast<int>(characterCount));

                Assert::AreEqual(S_OK, source->GetVerticalGlyphOrientation(1, &characterCount, &unused, &result));
                Assert::AreEqual(12, static_cast<int>(result));
                Assert::AreEqual(1, static_cast<int>(characterCount));

                Assert::AreEqual(S_OK, source->GetVerticalGlyphOrientation(2, &characterCount, &unused, &result));
                Assert::AreEqual(34, static_cast<int>(result));
                Assert::AreEqual(1, static_cast<int>(characterCount));
            };
        f.ExpectMapCharacters();

        auto textAnalyzer = f.CreateWithOptions();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetFonts_AppReturnsBadBidi_CausesError)
    {
        Fixture f;

        f.Options->GetBidiLevelMethod.SetExpectedCalls(1,
            [&](int index, int* characterCount, uint32_t* out)
            {
                *out = UINT8_MAX + 1;
                *characterCount = static_cast<uint32_t>(f.Text.length()) - index;
                return S_OK;
            });

        f.MockDoingThingsToTextAnalysisSource =
            [](IDWriteTextAnalysisSource1* source)
            {
                uint32_t characterCount;
                DWRITE_VERTICAL_GLYPH_ORIENTATION result;
                uint8_t unused;
                Assert::AreEqual(E_INVALIDARG, source->GetVerticalGlyphOrientation(0, &characterCount, &result, &unused));
            };
        f.ExpectMapCharacters();

        auto textAnalyzer = f.CreateWithOptions();

        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, CanvasScaledFont*>*>> result;
        Assert::AreEqual(S_OK, textAnalyzer->GetFontsUsingSystemFontSet(f.TextFormat.Get(), &result));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetScript_BadArg)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetScript(nullptr));
        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetScriptWithLocale(WinString(L""), nullptr));
    }

    template<typename RETURN_TYPE, typename ELEMENT_IMPL_TYPE=RETURN_TYPE, typename ANALYSIS_METHOD>
    RETURN_TYPE AssertUniformSpanAndReturnElement(
        ComPtr<ICanvasTextAnalyzer> const& textAnalyzer,
        ANALYSIS_METHOD analysisMethod,
        int spanLength)
    {
        ComPtr<IVectorView<IKeyValuePair<CanvasCharacterRange, ELEMENT_IMPL_TYPE>*>> result;
        Assert::AreEqual(S_OK, (textAnalyzer.Get()->*analysisMethod)(&result));

        uint32_t size;
        Assert::AreEqual(S_OK, result->get_Size(&size));
        Assert::AreEqual(1u, size);

        ComPtr<IKeyValuePair<CanvasCharacterRange, ELEMENT_IMPL_TYPE>> element;
        ThrowIfFailed(result->GetAt(0, &element));

        CanvasCharacterRange range;
        ThrowIfFailed(element->get_Key(&range));
        Assert::AreEqual(0, range.CharacterIndex);
        Assert::AreEqual(spanLength, range.CharacterCount);

        RETURN_TYPE analyzedElement;
        ThrowIfFailed(element->get_Value(&analyzedElement));

        return analyzedElement;
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetScript_UniformSpan)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.TextAnalyzer->AnalyzeScriptMethod.SetExpectedCalls(1,
            [&](IDWriteTextAnalysisSource*, uint32_t textPosition, uint32_t textLength, IDWriteTextAnalysisSink* sink)
            {
                Assert::AreEqual(0u, textPosition);
                Assert::AreEqual(static_cast<uint32_t>(f.Text.length()), textLength);

                DWRITE_SCRIPT_ANALYSIS scriptAnalysis{};
                scriptAnalysis.script = 123;
                scriptAnalysis.shapes = DWRITE_SCRIPT_SHAPES_NO_VISUAL;
                ThrowIfFailed(sink->SetScriptAnalysis(textPosition, textLength, &scriptAnalysis));

                return S_OK;
            });

        auto analyzedScript = AssertUniformSpanAndReturnElement<CanvasAnalyzedScript>(textAnalyzer, &ICanvasTextAnalyzer::GetScript, static_cast<int>(f.Text.length()));

        Assert::AreEqual(123, analyzedScript.ScriptIdentifier);
        Assert::AreEqual(CanvasScriptShape::NoVisual, analyzedScript.Shape);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetScriptProperties_BadArg)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        CanvasAnalyzedScript analyzedScript{};
        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetScriptProperties(analyzedScript, nullptr));
    }

    uint32_t MakeIsoScriptCode(wchar_t const* name)
    {
        return
            (static_cast<uint32_t>(name[0]) << 0) |
            (static_cast<uint32_t>(name[1]) << 8) |
            (static_cast<uint32_t>(name[2]) << 16) |
            (static_cast<uint32_t>(name[3]) << 24);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetScriptProperties_ValuesPassedThrough)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.TextAnalyzer->GetScriptPropertiesMethod.SetExpectedCalls(1,
            [&](DWRITE_SCRIPT_ANALYSIS scriptAnalysis, DWRITE_SCRIPT_PROPERTIES* scriptProperties)
            {
                DWRITE_SCRIPT_PROPERTIES result{};

                result.isoScriptCode = MakeIsoScriptCode(L"Zzzz");
                result.isoScriptNumber = 123;
                result.clusterLookahead = 456;
                result.justificationCharacter = '%';

                result.restrictCaretToClusters = TRUE;
                result.isDiscreteWriting = TRUE;
                result.isDistributedWithinCluster = TRUE;

                result.usesWordDividers = FALSE;
                result.isBlockWriting = FALSE;
                result.isConnectedWriting = FALSE;
                result.isCursiveWriting = FALSE;
                *scriptProperties = result;

                return S_OK;
            });

        CanvasAnalyzedScript analyzedScript{};
        CanvasScriptProperties scriptProperties{};
        Assert::AreEqual(S_OK, textAnalyzer->GetScriptProperties(analyzedScript, &scriptProperties));

        Assert::AreEqual(0, wcscmp(L"Zzzz", static_cast<wchar_t const*>(WinString(scriptProperties.IsoScriptCode))));

        Assert::AreEqual(123, scriptProperties.IsoScriptNumber);
        Assert::AreEqual(456, scriptProperties.ClusterLookahead);

        Assert::AreEqual(0, wcscmp(L"%", static_cast<wchar_t const*>(WinString(scriptProperties.JustificationCharacter))));

        Assert::IsTrue(!!scriptProperties.RestrictCaretToClusters);
        Assert::IsTrue(!!scriptProperties.IsDiscreteWriting);
        Assert::IsTrue(!!scriptProperties.IsDistributedWithinCluster);

        Assert::IsFalse(!!scriptProperties.UsesWordDividers);
        Assert::IsFalse(!!scriptProperties.IsBlockWriting);
        Assert::IsFalse(!!scriptProperties.IsConnectedWriting);
        Assert::IsFalse(!!scriptProperties.IsCursiveWriting);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetScriptProperties_IsoScriptNameConversion)
    {
        wchar_t const* isoScriptCodeNames[] = { // From http://unicode.org/iso15924/iso15924-codes.html
            L"Adlm", L"Afak", L"Aghb", L"Ahom", L"Arab", L"Aran", L"Armi", L"Armn", L"Avst", L"Bali", L"Bamu", L"Bass", L"Batk", L"Beng", L"Bhks", L"Blis", L"Bopo",
            L"Brah", L"Brai", L"Bugi", L"Buhd", L"Cakm", L"Cans", L"Cari", L"Cham", L"Cher", L"Cirt", L"Copt", L"Cprt", L"Cyrl", L"Cyrs", L"Deva", L"Dsrt", L"Dupl",
            L"Egyd", L"Egyh", L"Egyp", L"Elba", L"Ethi", L"Geok", L"Geor", L"Glag", L"Goth", L"Gran", L"Grek", L"Gujr", L"Guru", L"Hang", L"Hani", L"Hano", L"Hans",
            L"Hant", L"Hatr", L"Hebr", L"Hira", L"Hluw", L"Hmng", L"Hrkt", L"Hung", L"Inds", L"Ital", L"Java", L"Jpan", L"Jurc", L"Kali", L"Kana", L"Khar", L"Khmr",
            L"Khoj", L"Kitl", L"Kits", L"Knda", L"Kore", L"Kpel", L"Kthi", L"Lana", L"Laoo", L"Latf", L"Latg", L"Latn", L"Leke", L"Lepc", L"Limb", L"Lina", L"Linb",
            L"Lisu", L"Loma", L"Lyci", L"Lydi", L"Mahj", L"Mand", L"Mani", L"Marc", L"Maya", L"Mend", L"Merc", L"Mero", L"Mlym", L"Modi", L"Mong", L"Moon", L"Mroo",
            L"Mtei", L"Mult", L"Mymr", L"Narb", L"Nbat", L"Nkgb", L"Nkoo", L"Nshu", L"Ogam", L"Olck", L"Orkh", L"Orya", L"Osge", L"Osma", L"Palm", L"Pauc", L"Perm",
            L"Phag", L"Phli", L"Phlp", L"Phlv", L"Phnx", L"Plrd", L"Prti", L"Qaaa", L"Qabx", L"Rjng", L"Roro", L"Runr", L"Samr", L"Sara", L"Sarb", L"Saur", L"Sgnw",
            L"Shaw", L"Shrd", L"Sidd", L"Sind", L"Sinh", L"Sora", L"Sund", L"Sylo", L"Syrc", L"Syre", L"Syrj", L"Syrn", L"Tagb", L"Takr", L"Tale", L"Talu", L"Taml",
            L"Tang", L"Tavt", L"Telu", L"Teng", L"Tfng", L"Tglg", L"Thaa", L"Thai", L"Tibt", L"Tirh", L"Ugar", L"Vaii", L"Visp", L"Wara", L"Wole", L"Xpeo", L"Xsux",
            L"Yiii", L"Zinh", L"Zmth", L"Zsym", L"Zxxx", L"Zyyy", L"Zzzz"
        };

        for (auto name : isoScriptCodeNames)
        {
            Fixture f;
            auto textAnalyzer = f.Create();

            f.TextAnalyzer->GetScriptPropertiesMethod.SetExpectedCalls(1,
                [&](DWRITE_SCRIPT_ANALYSIS scriptAnalysis, DWRITE_SCRIPT_PROPERTIES* scriptProperties)
                {
                    DWRITE_SCRIPT_PROPERTIES result{};
                    result.isoScriptCode = MakeIsoScriptCode(name);
                    *scriptProperties = result;

                    return S_OK;
                });

            CanvasAnalyzedScript analyzedScript{};
            CanvasScriptProperties scriptProperties{};
            Assert::AreEqual(S_OK, textAnalyzer->GetScriptProperties(analyzedScript, &scriptProperties));

            Assert::AreEqual(0, wcscmp(name, static_cast<wchar_t const*>(WinString(scriptProperties.IsoScriptCode))));
        }
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetScriptProperties_TwoCodeUnitJustificationCharacter)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.TextAnalyzer->GetScriptPropertiesMethod.SetExpectedCalls(1,
            [&](DWRITE_SCRIPT_ANALYSIS scriptAnalysis, DWRITE_SCRIPT_PROPERTIES* scriptProperties)
            {
                DWRITE_SCRIPT_PROPERTIES result{};
                result.justificationCharacter = 0x1f197; // 🆗
                *scriptProperties = result;

                return S_OK;
            });

        CanvasAnalyzedScript analyzedScript{};
        CanvasScriptProperties scriptProperties{};
        Assert::AreEqual(S_OK, textAnalyzer->GetScriptProperties(analyzedScript, &scriptProperties));
        Assert::AreEqual(0, wcscmp(L"🆗", static_cast<wchar_t const*>(WinString(scriptProperties.JustificationCharacter))));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetGlyphs_BasicTest)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ExpectGetGlyphs();
        f.GetGlyphs(textAnalyzer);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetGlyphsWithAllOptions_BasicTest)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ExpectGetGlyphs();
        f.GetGlyphsWithAllOptions(textAnalyzer);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetGlyphsWithAllOptions_NumberSubstitution)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ExpectGetGlyphs();
        f.UseNumberSubstitution();
        f.GetGlyphsWithAllOptions(textAnalyzer);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetGlyphsWithAllOptions_TypographyRanges)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ExpectGetGlyphs();
        f.UseTypographyRanges();
        f.GetGlyphsWithAllOptions(textAnalyzer);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetGlyphsWithAllOptions_Locale)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ExpectGetGlyphs();
        f.Locale = L"xx-yy";
        f.GetGlyphsWithAllOptions(textAnalyzer);
    }

    TEST_METHOD_EX(CanvasGlyphJustification_Values)
    {
        Assert::AreEqual(0, static_cast<int>(CanvasGlyphJustification::None));
        Assert::AreEqual(1, static_cast<int>(CanvasGlyphJustification::ArabicBlank));
        Assert::AreEqual(2, static_cast<int>(CanvasGlyphJustification::Character));
        Assert::AreEqual(4, static_cast<int>(CanvasGlyphJustification::Blank));
        Assert::AreEqual(7, static_cast<int>(CanvasGlyphJustification::ArabicNormal));
        Assert::AreEqual(8, static_cast<int>(CanvasGlyphJustification::ArabicKashida));
        Assert::AreEqual(9, static_cast<int>(CanvasGlyphJustification::ArabicAlef));
        Assert::AreEqual(10, static_cast<int>(CanvasGlyphJustification::ArabicHa));
        Assert::AreEqual(11, static_cast<int>(CanvasGlyphJustification::ArabicRa));
        Assert::AreEqual(12, static_cast<int>(CanvasGlyphJustification::ArabicBa));
        Assert::AreEqual(13, static_cast<int>(CanvasGlyphJustification::ArabicBara));
        Assert::AreEqual(14, static_cast<int>(CanvasGlyphJustification::ArabicSeen));
        Assert::AreEqual(15, static_cast<int>(CanvasGlyphJustification::ArabicSeenM));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetGlyphs_NeedsToResizeBuffer)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        const int bufferSize = 3 * static_cast<int>(f.Text.length()) / 2 + 16;

        f.ExpectGetGlyphs(2);
        f.AdditionalGlyphsToAddDuringExpansion = bufferSize - static_cast<int>(f.Text.length()) + 1;

        f.GetGlyphs(textAnalyzer);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetGlyphs_GlyphCountTooHigh)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ExpectGetGlyphs(3, 0);
        f.AdditionalGlyphsToAddDuringExpansion = 999;

        uint32_t glyphCount;
        CanvasGlyph* glyphElements;

        CanvasCharacterRange characterRange{ 0, static_cast<int>(f.Text.length()) };
        Assert::AreEqual(HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER), textAnalyzer->GetGlyphs(
            characterRange,
            f.FontFace.Get(),
            f.FontSize,
            f.IsSideways,
            f.IsRightToLeft,
            f.AnalyzedScript,
            &glyphCount,
            &glyphElements));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetBidi_BadArg)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetBidi(nullptr));
        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetBidiWithLocale(WinString(L""), nullptr));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetBidi_UniformSpan)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.TextAnalyzer->AnalyzeBidiMethod.SetExpectedCalls(1,
            [&](IDWriteTextAnalysisSource*, uint32_t textPosition, uint32_t textLength, IDWriteTextAnalysisSink* sink)
            {
                Assert::AreEqual(0u, textPosition);
                Assert::AreEqual(static_cast<uint32_t>(f.Text.length()), textLength);

                ThrowIfFailed(sink->SetBidiLevel(textPosition, textLength, 12, 34));

                return S_OK;
            });

        auto element = AssertUniformSpanAndReturnElement<CanvasAnalyzedBidi>(textAnalyzer, &ICanvasTextAnalyzer::GetBidi, static_cast<int>(f.Text.length()));

        Assert::AreEqual(12u, element.ExplicitLevel);
        Assert::AreEqual(34u, element.ResolvedLevel);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetBreakpoints_BadArg)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        uint32_t breakpointCount;
        CanvasAnalyzedBreakpoint* breakpoints;
        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetBreakpoints(nullptr, &breakpoints));
        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetBreakpoints(&breakpointCount, nullptr));

        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetBreakpointsWithLocale(WinString(L""), nullptr, &breakpoints));
        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetBreakpointsWithLocale(WinString(L""), &breakpointCount, nullptr));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_AnalyzeLineBreakpoints)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        DWRITE_LINE_BREAKPOINT dwriteLineBreakpoint;
        dwriteLineBreakpoint.breakConditionBefore = DWRITE_BREAK_CONDITION_MAY_NOT_BREAK;
        dwriteLineBreakpoint.breakConditionAfter = DWRITE_BREAK_CONDITION_MUST_BREAK;
        dwriteLineBreakpoint.isWhitespace = false;
        dwriteLineBreakpoint.isSoftHyphen = true;

        f.TextAnalyzer->AnalyzeLineBreakpointsMethod.SetExpectedCalls(1,
            [&](IDWriteTextAnalysisSource*, uint32_t textPosition, uint32_t textLength, IDWriteTextAnalysisSink* sink)
            {
                Assert::AreEqual(0u, textPosition);
                Assert::AreEqual(static_cast<uint32_t>(f.Text.length()), textLength);

                std::vector<DWRITE_LINE_BREAKPOINT> dwriteLineBreakpoints;
                dwriteLineBreakpoints.resize(textLength);

                for (uint32_t i = 0; i < textLength; ++i)
                {
                    dwriteLineBreakpoints[i] = GetTestBreakpoint(i).DWriteBreakpoint;
                }

                ThrowIfFailed(sink->SetLineBreakpoints(textPosition, textLength, dwriteLineBreakpoints.data()));

                return S_OK;
            });

        uint32_t breakpointCount;
        CanvasAnalyzedBreakpoint* breakpoints;
        Assert::AreEqual(S_OK, textAnalyzer->GetBreakpoints(&breakpointCount, &breakpoints));

        Assert::AreEqual(static_cast<uint32_t>(f.Text.length()), breakpointCount);

        for (uint32_t i = 0; i < breakpointCount; ++i)
        {
            auto expected = GetTestBreakpoint(i).Breakpoint;
            Assert::AreEqual(expected.BreakBefore, breakpoints[i].BreakBefore);
            Assert::AreEqual(expected.BreakAfter, breakpoints[i].BreakAfter);
            Assert::AreEqual(expected.IsWhitespace, breakpoints[i].IsWhitespace);
            Assert::AreEqual(expected.IsSoftHyphen, breakpoints[i].IsSoftHyphen);
        }
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetNumberSubstitutions_BadArg)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetNumberSubstitutions(nullptr));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetNumberSubstitutions_UniformSpan)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        auto dwriteNumberSubstitution = Make<MockDWriteNumberSubstitution>();
        auto numberSubstitution = ResourceManager::GetOrCreate<ICanvasNumberSubstitution>(dwriteNumberSubstitution.Get());

        f.TextAnalyzer->AnalyzeNumberSubstitutionMethod.SetExpectedCalls(1,
            [&](IDWriteTextAnalysisSource*, uint32_t textPosition, uint32_t textLength, IDWriteTextAnalysisSink* sink)
            {
                Assert::AreEqual(0u, textPosition);
                Assert::AreEqual(static_cast<uint32_t>(f.Text.length()), textLength);

                ThrowIfFailed(sink->SetNumberSubstitution(textPosition, textLength, dwriteNumberSubstitution.Get()));

                return S_OK;
            });

        auto element = AssertUniformSpanAndReturnElement<ComPtr<ICanvasNumberSubstitution>, CanvasNumberSubstitution*>(textAnalyzer, &ICanvasTextAnalyzer::GetNumberSubstitutions, static_cast<int>(f.Text.length()));

        Assert::IsTrue(IsSameInstance(numberSubstitution.Get(), element.Get()));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetGlyphOrientations_BadArg)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetGlyphOrientations(nullptr));
        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetGlyphOrientationsWithLocale(WinString(L""), nullptr));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetGlyphOrientations_UniformSpan)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.TextAnalyzer->AnalyzeVerticalGlyphOrientationMethod.SetExpectedCalls(1,
            [&](IDWriteTextAnalysisSource*, uint32_t textPosition, uint32_t textLength, IDWriteTextAnalysisSink1* sink)
            {
                Assert::AreEqual(0u, textPosition);
                Assert::AreEqual(static_cast<uint32_t>(f.Text.length()), textLength);

                ThrowIfFailed(sink->SetGlyphOrientation(
                    textPosition, 
                    textLength, 
                    DWRITE_GLYPH_ORIENTATION_ANGLE_90_DEGREES,
                    123,
                    false,
                    true));

                return S_OK;
            });

        auto element = AssertUniformSpanAndReturnElement<CanvasAnalyzedGlyphOrientation>(textAnalyzer, &ICanvasTextAnalyzer::GetGlyphOrientations, static_cast<int>(f.Text.length()));

        Assert::AreEqual(CanvasGlyphOrientation::Clockwise90Degrees, element.GlyphOrientation);
        Assert::AreEqual(123u, element.AdjustedBidiLevel);
        Assert::IsFalse(!!element.IsSideways);
        Assert::IsTrue(!!element.IsRightToLeft);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetJustificationOpportunities_InvalidArgs)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        CanvasAnalyzedScript analyzedScript{};
        int clusterMap{};
        CanvasGlyphShaping glyphShaping{};
        uint32_t valueCount;
        CanvasJustificationOpportunity* valueElements;

        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetJustificationOpportunities(CanvasCharacterRange{ 0, 1 }, f.FontFace.Get(), 0, analyzedScript, 0, nullptr, 1, &glyphShaping, &valueCount, &valueElements));

        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetJustificationOpportunities(CanvasCharacterRange{ 0, 1 }, f.FontFace.Get(), 0, analyzedScript, 1, &clusterMap, 0, nullptr, &valueCount, &valueElements));

        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetJustificationOpportunities(CanvasCharacterRange{ 0, 1 }, f.FontFace.Get(), 0, analyzedScript, 1, &clusterMap, 1, &glyphShaping, 0, nullptr));

        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetJustificationOpportunities(CanvasCharacterRange{ -1, 1 }, f.FontFace.Get(), 0, analyzedScript, 1, &clusterMap, 1, &glyphShaping, &valueCount, &valueElements));

        Assert::AreEqual(E_INVALIDARG, textAnalyzer->GetJustificationOpportunities(CanvasCharacterRange{ 0, -1 }, f.FontFace.Get(), 0, analyzedScript, 1, &clusterMap, 1, &glyphShaping, &valueCount, &valueElements));
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetJustificationOpportunities_Typical)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ExpectGetJustificationOpportunities();

        f.GetJustificationOpportunities(textAnalyzer);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_GetJustificationOpportunities_NullFontFace)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.FontFace = nullptr;
        f.RealizedFontFace = nullptr;

        f.ExpectGetJustificationOpportunities();

        f.GetJustificationOpportunities(textAnalyzer);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_ApplyJustificationOpportunities_Typical)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ExpectJustifyGlyphAdvances();

        f.ApplyJustificationOpportunities(textAnalyzer);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_ApplyJustificationOpportunities_BadGlyphIndex)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ApplyJustificationOpportunities(textAnalyzer, true, E_INVALIDARG);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_AddGlyphsAfterJustification_NoClusterMap)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ExpectGetJustifiedGlyphs();

        f.AddGlyphsAfterJustification(textAnalyzer, false);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_AddGlyphsAfterJustification_ClusterMap)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        f.ExpectGetJustifiedGlyphs();

        f.AddGlyphsAfterJustification(textAnalyzer, true);
    }

    TEST_METHOD_EX(CanvasTextAnalyzer_AddGlyphsAfterJustification_NeedsToResizeBuffer)
    {
        Fixture f;
        auto textAnalyzer = f.Create();

        const int bufferSize = 3 * static_cast<int>(f.Text.length()) / 2 + 16;

        f.ExpectGetJustifiedGlyphs(2);
        f.AdditionalGlyphsToAddDuringExpansion = bufferSize - static_cast<int>(f.Text.length()) + 1;

        f.AddGlyphsAfterJustification(textAnalyzer, false);
    }
};