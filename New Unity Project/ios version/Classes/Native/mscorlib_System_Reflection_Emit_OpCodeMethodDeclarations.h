﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Reflection.Emit.OpCode
#include "mscorlib_System_Reflection_Emit_OpCode.h"
// System.Reflection.Emit.StackBehaviour
#include "mscorlib_System_Reflection_Emit_StackBehaviour.h"

// System.Void System.Reflection.Emit.OpCode::.ctor(System.Int32,System.Int32)
extern "C" void OpCode__ctor_m8057 (OpCode_t1282 * __this, int32_t ___p, int32_t ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::GetHashCode()
extern "C" int32_t OpCode_GetHashCode_m8058 (OpCode_t1282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.OpCode::Equals(System.Object)
extern "C" bool OpCode_Equals_m8059 (OpCode_t1282 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::ToString()
extern "C" String_t* OpCode_ToString_m8060 (OpCode_t1282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::get_Name()
extern "C" String_t* OpCode_get_Name_m8061 (OpCode_t1282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::get_Size()
extern "C" int32_t OpCode_get_Size_m8062 (OpCode_t1282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPop()
extern "C" int32_t OpCode_get_StackBehaviourPop_m8063 (OpCode_t1282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPush()
extern "C" int32_t OpCode_get_StackBehaviourPush_m8064 (OpCode_t1282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
