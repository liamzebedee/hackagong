﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t2127;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t2126;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_t2125  : public Object_t
{
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::m_Stack
	Stack_1_t2127 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::m_ActionOnGet
	UnityAction_1_t2126 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::m_ActionOnRelease
	UnityAction_1_t2126 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;
};
