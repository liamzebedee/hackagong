﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CharacterClass
struct CharacterClass_t1032;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1052;
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
extern "C" void CharacterClass__ctor_m5537 (CharacterClass_t1032 * __this, bool ___negate, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
extern "C" void CharacterClass__ctor_m5538 (CharacterClass_t1032 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
extern "C" void CharacterClass__cctor_m5539 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern "C" void CharacterClass_AddCategory_m5540 (CharacterClass_t1032 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
extern "C" void CharacterClass_AddCharacter_m5541 (CharacterClass_t1032 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern "C" void CharacterClass_AddRange_m5542 (CharacterClass_t1032 * __this, uint16_t ___lo, uint16_t ___hi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CharacterClass_Compile_m5543 (CharacterClass_t1032 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern "C" void CharacterClass_GetWidth_m5544 (CharacterClass_t1032 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern "C" bool CharacterClass_IsComplex_m5545 (CharacterClass_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
extern "C" double CharacterClass_GetIntervalCost_m5546 (Object_t * __this /* static, unused */, Interval_t1008  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
