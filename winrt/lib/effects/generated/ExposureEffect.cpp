// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

// This file was automatically generated. Please do not edit it manually.

#include "pch.h"
#include "ExposureEffect.h"

#if (defined _WIN32_WINNT_WIN10) && (WINVER >= _WIN32_WINNT_WIN10)

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace Effects
{
    ExposureEffect::ExposureEffect(ICanvasDevice* device, ID2D1Effect* effect)
        : CanvasEffect(EffectId(), 1, 1, true, device, effect, static_cast<IExposureEffect*>(this))
    {
        if (!effect)
        {
            // Set default values
            SetBoxedProperty<float>(D2D1_EXPOSURE_PROP_EXPOSURE_VALUE, 0.0f);
        }
    }

    IMPLEMENT_EFFECT_PROPERTY_WITH_VALIDATION(ExposureEffect,
        Exposure,
        float,
        float,
        D2D1_EXPOSURE_PROP_EXPOSURE_VALUE,
        (value >= -2.0f) && (value <= 2.0f))

    IMPLEMENT_EFFECT_SOURCE_PROPERTY(ExposureEffect,
        Source,
        0)

    IMPLEMENT_EFFECT_PROPERTY_MAPPING(ExposureEffect,
        { L"Exposure", D2D1_EXPOSURE_PROP_EXPOSURE_VALUE, GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT })

    ActivatableClassWithFactory(ExposureEffect, ::SimpleAgileActivationFactory<ExposureEffect>);
}}}}}

#endif // _WIN32_WINNT_WIN10
