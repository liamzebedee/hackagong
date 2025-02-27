﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1106;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.SafeHandles.SafeWaitHandle::.ctor(System.IntPtr,System.Boolean)
extern "C" void SafeWaitHandle__ctor_m6590 (SafeWaitHandle_t1106 * __this, IntPtr_t ___existingHandle, bool ___ownsHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.SafeHandles.SafeWaitHandle::ReleaseHandle()
extern "C" bool SafeWaitHandle_ReleaseHandle_m6591 (SafeWaitHandle_t1106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
