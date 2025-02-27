﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m12406_gshared (KeyValuePair_2_t1904 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m12406(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t1904 *, Object_t *, int32_t, const MethodInfo*))KeyValuePair_2__ctor_m12406_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m12407_gshared (KeyValuePair_2_t1904 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m12407(__this, method) (( Object_t * (*) (KeyValuePair_2_t1904 *, const MethodInfo*))KeyValuePair_2_get_Key_m12407_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m12408_gshared (KeyValuePair_2_t1904 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m12408(__this, ___value, method) (( void (*) (KeyValuePair_2_t1904 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m12408_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m12409_gshared (KeyValuePair_2_t1904 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m12409(__this, method) (( int32_t (*) (KeyValuePair_2_t1904 *, const MethodInfo*))KeyValuePair_2_get_Value_m12409_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m12410_gshared (KeyValuePair_2_t1904 * __this, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m12410(__this, ___value, method) (( void (*) (KeyValuePair_2_t1904 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Value_m12410_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m12411_gshared (KeyValuePair_2_t1904 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m12411(__this, method) (( String_t* (*) (KeyValuePair_2_t1904 *, const MethodInfo*))KeyValuePair_2_ToString_m12411_gshared)(__this, method)
