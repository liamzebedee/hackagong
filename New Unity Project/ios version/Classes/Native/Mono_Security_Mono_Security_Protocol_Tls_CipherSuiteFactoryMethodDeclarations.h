﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t781;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetSupportedCiphers(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" CipherSuiteCollection_t781 * CipherSuiteFactory_GetSupportedCiphers_m4201 (Object_t * __this /* static, unused */, int32_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetTls1SupportedCiphers()
extern "C" CipherSuiteCollection_t781 * CipherSuiteFactory_GetTls1SupportedCiphers_m4202 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetSsl3SupportedCiphers()
extern "C" CipherSuiteCollection_t781 * CipherSuiteFactory_GetSsl3SupportedCiphers_m4203 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
