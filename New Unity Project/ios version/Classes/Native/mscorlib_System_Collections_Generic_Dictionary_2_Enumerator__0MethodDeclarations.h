﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1874;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12120_gshared (Enumerator_t1881 * __this, Dictionary_2_t1874 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12120(__this, ___dictionary, method) (( void (*) (Enumerator_t1881 *, Dictionary_2_t1874 *, const MethodInfo*))Enumerator__ctor_m12120_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12121_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12121(__this, method) (( Object_t * (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12121_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1050  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12122_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12122(__this, method) (( DictionaryEntry_t1050  (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12122_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12123_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12123(__this, method) (( Object_t * (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12123_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12124_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12124(__this, method) (( Object_t * (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12124_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12125_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12125(__this, method) (( bool (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_MoveNext_m12125_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1876  Enumerator_get_Current_m12126_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12126(__this, method) (( KeyValuePair_2_t1876  (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_get_Current_m12126_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12127_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12127(__this, method) (( int32_t (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_get_CurrentKey_m12127_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12128_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12128(__this, method) (( Object_t * (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_get_CurrentValue_m12128_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12129_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12129(__this, method) (( void (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_VerifyState_m12129_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12130_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12130(__this, method) (( void (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_VerifyCurrent_m12130_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12131_gshared (Enumerator_t1881 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12131(__this, method) (( void (*) (Enumerator_t1881 *, const MethodInfo*))Enumerator_Dispose_m12131_gshared)(__this, method)
