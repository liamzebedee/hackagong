﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.AesTransform
struct AesTransform_t698;
// System.Security.Cryptography.Aes
struct Aes_t696;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.UInt32[]
struct UInt32U5BU5D_t699;

// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern "C" void AesTransform__ctor_m3730 (AesTransform_t698 * __this, Aes_t696 * ___algo, bool ___encryption, ByteU5BU5D_t67* ___key, ByteU5BU5D_t67* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::.cctor()
extern "C" void AesTransform__cctor_m3731 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::ECB(System.Byte[],System.Byte[])
extern "C" void AesTransform_ECB_m3732 (AesTransform_t698 * __this, ByteU5BU5D_t67* ___input, ByteU5BU5D_t67* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern "C" uint32_t AesTransform_SubByte_m3733 (AesTransform_t698 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void AesTransform_Encrypt128_m3734 (AesTransform_t698 * __this, ByteU5BU5D_t67* ___indata, ByteU5BU5D_t67* ___outdata, UInt32U5BU5D_t699* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void AesTransform_Decrypt128_m3735 (AesTransform_t698 * __this, ByteU5BU5D_t67* ___indata, ByteU5BU5D_t67* ___outdata, UInt32U5BU5D_t699* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
