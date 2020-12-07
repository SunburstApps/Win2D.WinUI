// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

// This file was automatically generated. Please do not edit it manually.

#include "pch.h"
#include "GrayscaleEffect.h"

#if (defined _WIN32_WINNT_WIN10) && (WINVER >= _WIN32_WINNT_WIN10)

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace Effects
{
    GrayscaleEffect::GrayscaleEffect(ICanvasDevice* device, ID2D1Effect* effect)
        : CanvasEffect(EffectId(), 0, 1, true, device, effect, static_cast<IGrayscaleEffect*>(this))
    {
        if (!effect)
        {
            // Set default values
        }
    }

    IMPLEMENT_EFFECT_SOURCE_PROPERTY(GrayscaleEffect,
        Source,
        0)

    ActivatableClassWithFactory(GrayscaleEffect, ::SimpleAgileActivationFactory<GrayscaleEffect>);
}}}}}

#endif // _WIN32_WINNT_WIN10
