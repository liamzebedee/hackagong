﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"

// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.IntPtr)
extern "C" void RuntimeHelpers_InitializeArray_m6581 (Object_t * __this /* static, unused */, Array_t * ___array, IntPtr_t ___fldHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" void RuntimeHelpers_InitializeArray_m462 (Object_t * __this /* static, unused */, Array_t * ___array, RuntimeFieldHandle_t1079  ___fldHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
extern "C" int32_t RuntimeHelpers_get_OffsetToStringData_m6582 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
