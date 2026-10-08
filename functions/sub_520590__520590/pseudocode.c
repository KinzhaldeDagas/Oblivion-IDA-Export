char __thiscall sub_520590(TESObjectREFR **this, TESObjectREFR **a2)
{
  int v4; // eax
  UInt32 v5; // edi
  UInt32 v6; // esi
  TESObjectREFR *v7; // ecx
  void *v8; // eax
  TESObjectREFR **v9; // eax

  if ( !a2 ) /*0x52059c*/
    return 0; /*0x520617*/
  if ( a2 == this ) /*0x5205a0*/
    return 1; /*0x5205a3*/
  v4 = (int)*(this + 0xF); /*0x5205a9*/
  v5 = 0; /*0x5205ad*/
  if ( v4 ) /*0x5205b1*/
    v5 = *(_DWORD *)(v4 + 0xC); /*0x5205b3*/
  v6 = 0; /*0x5205b7*/
  if ( !v5 ) /*0x5205bb*/
    return 0; /*0x520610*/
  while ( 1 ) /*0x5205c0*/
  {
    v7 = *(this + 0xF); /*0x5205c0*/
    if ( v7 ) /*0x5205c5*/
    {
      v8 = (void *)sub_494ED0(v7, v6); /*0x5205d6*/
      v9 = (TESObjectREFR **)OblivionDynamicCast( /*0x5205dc*/
                               v8,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESIdleForm `RTTI Type Descriptor',
                               0);
      if ( v9 ) /*0x5205e6*/
      {
        if ( sub_520590(v9, a2) ) /*0x5205eb*/
          break; /*0x5205eb*/
      }
    }
    if ( ++v6 >= v5 ) /*0x5205f9*/
      return 0; /*0x520601*/
  }
  return 1; /*0x5205a2*/
}
