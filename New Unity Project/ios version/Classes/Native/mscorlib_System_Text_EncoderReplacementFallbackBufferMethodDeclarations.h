﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderReplacementFallbackBuffer
struct EncoderReplacementFallbackBuffer_t1579;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t1578;

// System.Void System.Text.EncoderReplacementFallbackBuffer::.ctor(System.Text.EncoderReplacementFallback)
extern "C" void EncoderReplacementFallbackBuffer__ctor_m9565 (EncoderReplacementFallbackBuffer_t1579 * __this, EncoderReplacementFallback_t1578 * ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderReplacementFallbackBuffer::get_Remaining()
extern "C" int32_t EncoderReplacementFallbackBuffer_get_Remaining_m9566 (EncoderReplacementFallbackBuffer_t1579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Int32)
extern "C" bool EncoderReplacementFallbackBuffer_Fallback_m9567 (EncoderReplacementFallbackBuffer_t1579 * __this, uint16_t ___charUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
extern "C" bool EncoderReplacementFallbackBuffer_Fallback_m9568 (EncoderReplacementFallbackBuffer_t1579 * __this, uint16_t ___charUnknownHigh, uint16_t ___charUnknownLow, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Int32)
extern "C" bool EncoderReplacementFallbackBuffer_Fallback_m9569 (EncoderReplacementFallbackBuffer_t1579 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderReplacementFallbackBuffer::GetNextChar()
extern "C" uint16_t EncoderReplacementFallbackBuffer_GetNextChar_m9570 (EncoderReplacementFallbackBuffer_t1579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
