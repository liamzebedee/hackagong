﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
struct NetscapeCertTypeExtension_t770;
// Mono.Security.X509.X509Extension
struct X509Extension_t759;
// System.String
struct String_t;
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"

// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void NetscapeCertTypeExtension__ctor_m4112 (NetscapeCertTypeExtension_t770 * __this, X509Extension_t759 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Decode()
extern "C" void NetscapeCertTypeExtension_Decode_m4113 (NetscapeCertTypeExtension_t770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Support(Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes)
extern "C" bool NetscapeCertTypeExtension_Support_m4114 (NetscapeCertTypeExtension_t770 * __this, int32_t ___usage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.NetscapeCertTypeExtension::ToString()
extern "C" String_t* NetscapeCertTypeExtension_ToString_m4115 (NetscapeCertTypeExtension_t770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
