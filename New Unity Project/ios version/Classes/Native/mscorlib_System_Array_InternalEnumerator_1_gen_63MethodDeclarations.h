﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17103_gshared (InternalEnumerator_1_t2277 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17103(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2277 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17103_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17104_gshared (InternalEnumerator_1_t2277 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17104(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2277 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17104_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17105_gshared (InternalEnumerator_1_t2277 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17105(__this, method) (( void (*) (InternalEnumerator_1_t2277 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17105_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17106_gshared (InternalEnumerator_1_t2277 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17106(__this, method) (( bool (*) (InternalEnumerator_1_t2277 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17106_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2276  InternalEnumerator_1_get_Current_m17107_gshared (InternalEnumerator_1_t2277 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17107(__this, method) (( KeyValuePair_2_t2276  (*) (InternalEnumerator_1_t2277 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17107_gshared)(__this, method)
