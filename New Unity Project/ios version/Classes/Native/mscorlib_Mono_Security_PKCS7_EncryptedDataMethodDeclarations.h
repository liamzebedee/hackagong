﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1163;
// Mono.Security.ASN1
struct ASN1_t1151;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1162;
// System.Byte[]
struct ByteU5BU5D_t67;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m7025 (EncryptedData_t1163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m7026 (EncryptedData_t1163 * __this, ASN1_t1151 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1162 * EncryptedData_get_EncryptionAlgorithm_m7027 (EncryptedData_t1163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t67* EncryptedData_get_EncryptedContent_m7028 (EncryptedData_t1163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
