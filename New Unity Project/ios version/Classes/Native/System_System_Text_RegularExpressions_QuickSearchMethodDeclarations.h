﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t1006;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.QuickSearch::.ctor(System.String,System.Boolean,System.Boolean)
extern "C" void QuickSearch__ctor_m5435 (QuickSearch_t1006 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.QuickSearch::.cctor()
extern "C" void QuickSearch__cctor_m5436 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.QuickSearch::get_Length()
extern "C" int32_t QuickSearch_get_Length_m5437 (QuickSearch_t1006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.QuickSearch::Search(System.String,System.Int32,System.Int32)
extern "C" int32_t QuickSearch_Search_m5438 (QuickSearch_t1006 * __this, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.QuickSearch::SetupShiftTable()
extern "C" void QuickSearch_SetupShiftTable_m5439 (QuickSearch_t1006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.QuickSearch::GetShiftDistance(System.Char)
extern "C" int32_t QuickSearch_GetShiftDistance_m5440 (QuickSearch_t1006 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.RegularExpressions.QuickSearch::GetChar(System.Char)
extern "C" uint16_t QuickSearch_GetChar_m5441 (QuickSearch_t1006 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
