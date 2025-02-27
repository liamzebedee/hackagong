﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12300_gshared (InternalEnumerator_1_t1896 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12300(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1896 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12300_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12301_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12301(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1896 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12301_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12302_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12302(__this, method) (( void (*) (InternalEnumerator_1_t1896 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12302_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12303_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12303(__this, method) (( bool (*) (InternalEnumerator_1_t1896 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12303_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
extern "C" RaycastHit_t71  InternalEnumerator_1_get_Current_m12304_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12304(__this, method) (( RaycastHit_t71  (*) (InternalEnumerator_1_t1896 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12304_gshared)(__this, method)
