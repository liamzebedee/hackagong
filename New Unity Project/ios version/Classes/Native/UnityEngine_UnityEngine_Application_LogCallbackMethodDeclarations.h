﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Application/LogCallback
struct LogCallback_t476;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LogCallback__ctor_m2803 (LogCallback_t476 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern "C" void LogCallback_Invoke_m2804 (LogCallback_t476 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
extern "C" void pinvoke_delegate_wrapper_LogCallback_t476(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type);
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern "C" Object_t * LogCallback_BeginInvoke_m2805 (LogCallback_t476 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C" void LogCallback_EndInvoke_m2806 (LogCallback_t476 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
