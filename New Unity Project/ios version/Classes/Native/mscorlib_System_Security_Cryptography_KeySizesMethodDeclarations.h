﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.KeySizes
struct KeySizes_t712;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t711;

// System.Void System.Security.Cryptography.KeySizes::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void KeySizes__ctor_m3751 (KeySizes_t712 * __this, int32_t ___minSize, int32_t ___maxSize, int32_t ___skipSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MaxSize()
extern "C" int32_t KeySizes_get_MaxSize_m9158 (KeySizes_t712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MinSize()
extern "C" int32_t KeySizes_get_MinSize_m9159 (KeySizes_t712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_SkipSize()
extern "C" int32_t KeySizes_get_SkipSize_m9160 (KeySizes_t712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegal(System.Int32)
extern "C" bool KeySizes_IsLegal_m9161 (KeySizes_t712 * __this, int32_t ___keySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegalKeySize(System.Security.Cryptography.KeySizes[],System.Int32)
extern "C" bool KeySizes_IsLegalKeySize_m9162 (Object_t * __this /* static, unused */, KeySizesU5BU5D_t711* ___legalKeys, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
