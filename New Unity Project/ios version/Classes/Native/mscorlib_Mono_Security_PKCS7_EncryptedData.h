﻿#pragma once
#include <stdint.h>
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1162;
// System.Byte[]
struct ByteU5BU5D_t67;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t1163  : public Object_t
{
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t1162 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t1162 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t67* ____encrypted_3;
};
