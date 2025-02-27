﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t1780;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m10911_gshared (Predicate_1_t1780 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m10911(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1780 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m10911_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m10912_gshared (Predicate_1_t1780 * __this, Object_t * ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m10912(__this, ___obj, method) (( bool (*) (Predicate_1_t1780 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m10912_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m10913_gshared (Predicate_1_t1780 * __this, Object_t * ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m10913(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1780 *, Object_t *, AsyncCallback_t9 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m10913_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m10914_gshared (Predicate_1_t1780 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m10914(__this, ___result, method) (( bool (*) (Predicate_1_t1780 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m10914_gshared)(__this, ___result, method)
