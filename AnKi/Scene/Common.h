// Copyright (C) 2009-2022, Panagiotis Christopoulos Charitos and contributors.
// All rights reserved.
// Code licensed under the BSD License.
// http://www.anki3d.org/LICENSE

#pragma once

#include <AnKi/Util/String.h>
#include <AnKi/Scene/Forward.h>
#include <functional>

namespace anki {

/// @addtogroup scene
/// @{

#define ANKI_SCENE_LOGI(...) ANKI_LOG("SCEN", kNormal, __VA_ARGS__)
#define ANKI_SCENE_LOGE(...) ANKI_LOG("SCEN", kError, __VA_ARGS__)
#define ANKI_SCENE_LOGW(...) ANKI_LOG("SCEN", kWarning, __VA_ARGS__)
#define ANKI_SCENE_LOGF(...) ANKI_LOG("SCEN", kFatal, __VA_ARGS__)

#define ANKI_SCENE_ASSERT(expression) \
	ANKI_LIKELY(std::invoke([&]() -> Bool { \
		const Bool ok = (expression); \
		if(ANKI_UNLIKELY(!ok)) \
		{ \
			ANKI_SCENE_LOGE("Expression failed: " #expression); \
		} \
		return ok; \
	}))
/// @}

} // end namespace anki
