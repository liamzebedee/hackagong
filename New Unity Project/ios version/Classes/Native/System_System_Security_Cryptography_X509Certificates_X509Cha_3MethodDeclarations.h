﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t957;
// System.Collections.IEnumerable
struct IEnumerable_t870;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t954;

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
extern "C" void X509ChainElementEnumerator__ctor_m5078 (X509ChainElementEnumerator_t957 * __this, Object_t * ___enumerable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_m5079 (X509ChainElementEnumerator_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::get_Current()
extern "C" X509ChainElement_t954 * X509ChainElementEnumerator_get_Current_m5080 (X509ChainElementEnumerator_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
extern "C" bool X509ChainElementEnumerator_MoveNext_m5081 (X509ChainElementEnumerator_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
