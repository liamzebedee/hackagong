﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_65.h"
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"

// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17168_gshared (InternalEnumerator_1_t2285 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17168(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2285 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17168_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17169_gshared (InternalEnumerator_1_t2285 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17169(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2285 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17169_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17170_gshared (InternalEnumerator_1_t2285 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17170(__this, method) (( void (*) (InternalEnumerator_1_t2285 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17170_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Uri/UriScheme>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17171_gshared (InternalEnumerator_1_t2285 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17171(__this, method) (( bool (*) (InternalEnumerator_1_t2285 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17171_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Uri/UriScheme>::get_Current()
extern "C" UriScheme_t1038  InternalEnumerator_1_get_Current_m17172_gshared (InternalEnumerator_1_t2285 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17172(__this, method) (( UriScheme_t1038  (*) (InternalEnumerator_1_t2285 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17172_gshared)(__this, method)
