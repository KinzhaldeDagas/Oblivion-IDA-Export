// Recursive idle candidate search: a node is a fallback if ANAM high bit is set or model path is .kf; child matches override parent fallback.
unsigned __int8 **__thiscall sub_5206B0(unsigned __int8 **this, Actor *a2, TESObjectREFR *a3)
{
  unsigned __int8 **v4; // esi
  int v5; // eax
  UInt32 v6; // ebx
  UInt32 v7; // esi
  TESObjectREFR *v8; // ecx
  void *v9; // eax
  unsigned __int8 **v10; // eax
  unsigned __int8 **result; // eax
  unsigned __int8 **v12; // [esp+8h] [ebp-4h]

  v4 = 0; /*0x5206b8*/
  v12 = 0; /*0x5206bf*/
  if ( ((unsigned int)*(this + 2) & 0x20) != 0 ) /*0x5206c3*/
    return 0; /*0x520767*/
  if ( !ConditionList_EvaluateForActor(this + 0xC, a2, a3) ) /*0x5206d7*/
    return v4; /*0x5206d7*/
  if ( *((char *)this + 0x38) < 0 || TESIdleForm_ModelPathIsKF(this) ) /*0x5206ec*/
  {
    v12 = this; /*0x5206f5*/
    v4 = this; /*0x5206f9*/
  }
  v5 = (int)*(this + 0xF); /*0x5206fb*/
  if ( !v5 ) /*0x520700*/
    return v4; /*0x520770*/
  v6 = *(_DWORD *)(v5 + 0xC); /*0x520703*/
  if ( !v6 ) /*0x520708*/
    return v4; /*0x52075f*/
  v7 = 0; /*0x52070a*/
  while ( 1 ) /*0x520710*/
  {
    v8 = (TESObjectREFR *)*(this + 0xF); /*0x520710*/
    if ( v8 ) /*0x520715*/
    {
      v9 = (void *)sub_494ED0(v8, v7); /*0x520726*/
      v10 = (unsigned __int8 **)OblivionDynamicCast( /*0x52072c*/
                                  v9,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESIdleForm `RTTI Type Descriptor',
                                  0);
      if ( v10 ) /*0x520736*/
      {
        result = TESIdleForm_FindCandidateRecursive(v10, (int)a2, a3); /*0x520740*/
        if ( result ) /*0x520747*/
          break; /*0x520747*/
      }
    }
    if ( ++v7 >= v6 ) /*0x52074e*/
      return v12; /*0x520750*/
  }
  return result; /*0x520756*/
}
