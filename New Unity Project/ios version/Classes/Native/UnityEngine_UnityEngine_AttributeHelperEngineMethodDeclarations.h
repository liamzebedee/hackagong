﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t645;

// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern "C" void AttributeHelperEngine__cctor_m3399 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3400 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern "C" TypeU5BU5D_t645* AttributeHelperEngine_GetRequiredComponents_m3401 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m3402 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
