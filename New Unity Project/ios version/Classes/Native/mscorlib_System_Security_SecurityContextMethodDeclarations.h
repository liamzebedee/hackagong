﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t1553;
// System.Threading.CompressedStack
struct CompressedStack_t1554;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m9441 (SecurityContext_t1553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m9442 (SecurityContext_t1553 * __this, SecurityContext_t1553 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1553 * SecurityContext_Capture_m9443 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m9444 (SecurityContext_t1553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1554 * SecurityContext_get_CompressedStack_m9445 (SecurityContext_t1553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
