﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t1541;
// System.Security.IPermission
struct IPermission_t1557;
// System.Security.SecurityElement
struct SecurityElement_t1168;
// System.Security.Permissions.SecurityPermissionFlag
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
extern "C" void SecurityPermission__ctor_m9389 (SecurityPermission_t1541 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
extern "C" void SecurityPermission_set_Flags_m9390 (SecurityPermission_t1541 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
extern "C" bool SecurityPermission_IsUnrestricted_m9391 (SecurityPermission_t1541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool SecurityPermission_IsSubsetOf_m9392 (SecurityPermission_t1541 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
extern "C" SecurityElement_t1168 * SecurityPermission_ToXml_m9393 (SecurityPermission_t1541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
extern "C" bool SecurityPermission_IsEmpty_m9394 (SecurityPermission_t1541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
extern "C" SecurityPermission_t1541 * SecurityPermission_Cast_m9395 (SecurityPermission_t1541 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
