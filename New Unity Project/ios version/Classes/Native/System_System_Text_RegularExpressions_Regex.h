﻿#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t983;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t984;
// System.Collections.IDictionary
struct IDictionary_t985;
// System.String[]
struct StringU5BU5D_t82;
// System.Int32[]
struct Int32U5BU5D_t107;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t240;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t982;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Text.RegularExpressions.Regex
struct  Regex_t109  : public Object_t
{
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	Object_t * ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	Object_t * ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_5;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t82* ___group_names_6;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t107* ___group_numbers_7;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_8;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Text.RegularExpressions.Regex::capnames
	Dictionary_2_t240 * ___capnames_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> System.Text.RegularExpressions.Regex::caps
	Dictionary_2_t982 * ___caps_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t82* ___capslist_13;
};
struct Regex_t109_StaticFields{
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t983 * ___cache_0;
};
