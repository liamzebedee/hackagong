﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.SortKey
struct SortKey_t1126;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.Object
struct Object_t;
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void System.Globalization.SortKey::.ctor(System.Int32,System.String,System.Globalization.CompareOptions)
extern "C" void SortKey__ctor_m6680 (SortKey_t1126 * __this, int32_t ___lcid, String_t* ___source, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.SortKey::.ctor(System.Int32,System.String,System.Byte[],System.Globalization.CompareOptions,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void SortKey__ctor_m6681 (SortKey_t1126 * __this, int32_t ___lcid, String_t* ___source, ByteU5BU5D_t67* ___buffer, int32_t ___opt, int32_t ___lv1Length, int32_t ___lv2Length, int32_t ___lv3Length, int32_t ___kanaSmallLength, int32_t ___markTypeLength, int32_t ___katakanaLength, int32_t ___kanaWidthLength, int32_t ___identLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.SortKey::Compare(System.Globalization.SortKey,System.Globalization.SortKey)
extern "C" int32_t SortKey_Compare_m6682 (Object_t * __this /* static, unused */, SortKey_t1126 * ___sortkey1, SortKey_t1126 * ___sortkey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.SortKey::get_OriginalString()
extern "C" String_t* SortKey_get_OriginalString_m6683 (SortKey_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Globalization.SortKey::get_KeyData()
extern "C" ByteU5BU5D_t67* SortKey_get_KeyData_m6684 (SortKey_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.SortKey::Equals(System.Object)
extern "C" bool SortKey_Equals_m6685 (SortKey_t1126 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.SortKey::GetHashCode()
extern "C" int32_t SortKey_GetHashCode_m6686 (SortKey_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.SortKey::ToString()
extern "C" String_t* SortKey_ToString_m6687 (SortKey_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
