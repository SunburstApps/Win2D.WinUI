// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

#pragma once

namespace canvas
{
    class MockDWriteFontFamily : public RuntimeClass <
        RuntimeClassFlags<ClassicCom>,
        ChainInterfaces < IDWriteFontFamily, IDWriteFontList >>
    {
    public:

        CALL_COUNTER_WITH_MOCK(GetFamilyNamesMethod, HRESULT(IDWriteLocalizedStrings**));
        CALL_COUNTER_WITH_MOCK(GetFontCountMethod, UINT32());
        CALL_COUNTER_WITH_MOCK(GetFontMethod, HRESULT(UINT32, IDWriteFont**));

        IFACEMETHODIMP GetFamilyNames(IDWriteLocalizedStrings** names)
        {
            return GetFamilyNamesMethod.WasCalled(names);
        }

        IFACEMETHODIMP GetFirstMatchingFont(
            DWRITE_FONT_WEIGHT  weight,
            DWRITE_FONT_STRETCH stretch,
            DWRITE_FONT_STYLE   style,
            IDWriteFont** matchingFont)
        {
            Assert::Fail(L"Unexpected call to GetFirstMatchingFont");
            return E_NOTIMPL;
        }

        IFACEMETHODIMP GetMatchingFonts(
            DWRITE_FONT_WEIGHT      weight,
            DWRITE_FONT_STRETCH     stretch,
            DWRITE_FONT_STYLE       style,
            IDWriteFontList** matchingFonts)
        {
            Assert::Fail(L"Unexpected call to GetMatchingFonts");
            return E_NOTIMPL;
        }

        IFACEMETHODIMP GetFontCollection(IDWriteFontCollection** fontCollection)
        {
            Assert::Fail(L"Unexpected call to GetFontCollection");
            return E_NOTIMPL;
        }

        IFACEMETHODIMP_(UINT32) GetFontCount()
        {
            return GetFontCountMethod.WasCalled();
        }

        IFACEMETHODIMP GetFont(
            UINT32 index,
            IDWriteFont** font)
        {
            return GetFontMethod.WasCalled(index, font);
        }
    };
}