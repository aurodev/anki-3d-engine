// Copyright (C) 2009-2022, Panagiotis Christopoulos Charitos and contributors.
// All rights reserved.
// Code licensed under the BSD License.
// http://www.anki3d.org/LICENSE

// This file contains common code for all shaders. It's optional but it's recomended to include it

#pragma once

#include <AnKi/Shaders/Include/Common.h>
#include <AnKi/Shaders/TextureFunctions.glsl>

// Macros
#define UV_TO_NDC(x_) ((x_)*2.0 - 1.0)
#define NDC_TO_UV(x_) ((x_)*0.5 + 0.5)
#define saturate(x_) clamp((x_), 0.0, 1.0)
#define saturateRp(x) min(x, F32(kMaxF16))
#define mad(a_, b_, c_) fma((a_), (b_), (c_))

// Techniques
#define RENDERING_TECHNIQUE_GBUFFER 0
#define RENDERING_TECHNIQUE_GBUFFER_EZ 1
#define RENDERING_TECHNIQUE_SHADOWS 2
#define RENDERING_TECHNIQUE_FORWARD 3
