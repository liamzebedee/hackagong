﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t1862;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1814;
// System.Object[]
struct ObjectU5BU5D_t78;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m11866_gshared (InvokableCall_1_t1862 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m11866(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1862 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m11866_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m11867_gshared (InvokableCall_1_t1862 * __this, UnityAction_1_t1814 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m11867(__this, ___action, method) (( void (*) (InvokableCall_1_t1862 *, UnityAction_1_t1814 *, const MethodInfo*))InvokableCall_1__ctor_m11867_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m11868_gshared (InvokableCall_1_t1862 * __this, ObjectU5BU5D_t78* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m11868(__this, ___args, method) (( void (*) (InvokableCall_1_t1862 *, ObjectU5BU5D_t78*, const MethodInfo*))InvokableCall_1_Invoke_m11868_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m11869_gshared (InvokableCall_1_t1862 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m11869(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1862 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m11869_gshared)(__this, ___targetObj, ___method, method)
