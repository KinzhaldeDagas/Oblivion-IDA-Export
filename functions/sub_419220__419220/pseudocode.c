char __thiscall sub_419220(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  int v4; // ecx
  int v6; // eax
  char v7; // al
  _DWORD *v8; // esi
  TESForm *v9; // eax
  void *v10; // edi
  _DWORD *v11; // ecx
  int v12; // esi
  UInt32 SummonedObj; // eax
  TESForm *v14; // eax
  _WORD *v15; // eax

  v3 = this + 0xA; /*0x419223*/
  v4 = 0; /*0x419226*/
  if ( !v3 ) /*0x41922a*/
    return sub_419243((int)a2); /*0x41922a*/
  do /*0x41923d*/
  {
    if ( *v3 ) /*0x419230*/
      ++v4; /*0x419235*/
    v3 = (_DWORD *)v3[1]; /*0x419238*/
  }
  while ( v3 ); /*0x41923d*/
  if ( !v4 ) /*0x419241*/
    return sub_419243((int)a2); /*0x419242*/
  v6 = a2[0x16]; /*0x41924e*/
  if ( (v6 & 0x70000) == 0 ) /*0x419256*/
    return 1; /*0x41925c*/
  if ( (v6 & 0x10000) != 0 ) /*0x419267*/
  {
    EffectItemList_HasEffectWithFlags(this + 9, 0x10000); /*0x419271*/
    return v7 == 0; /*0x41927f*/
  }
  if ( (v6 & 0x20000) == 0 ) /*0x419288*/
    return 1; /*0x419288*/
  v8 = this + 9; /*0x419296*/
  if ( !EffectItemList_HasEffect(this + 9, a2[0x26], 0x48) )
  {
    v9 = TESForm_LookupByFormID(a2[0x18]); /*0x4192bb*/
    v10 = OblivionDynamicCast( /*0x4192c9*/
            v9,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESBipedModelForm `RTTI Type Descriptor',
            0);
    if ( v10 && this && this != (_DWORD *)0xFFFFFFDC )
    {
      while ( 1 )
      {
        v11 = (_DWORD *)v8[1]; /*0x4192e0*/
        v12 = v8[2]; /*0x4192e3*/
        v8 = v12 ? (_DWORD *)(v12 - 4) : 0;
        if ( v11 ) /*0x4192f3*/
        {
          if ( (*(_DWORD *)(v11[7] + 0x58) & 0x20000) != 0 ) /*0x419300*/
          {
            SummonedObj = EffectItem_GetSummonedObj_(v11); /*0x419310*/
            v14 = TESForm_LookupByFormID(SummonedObj); /*0x419316*/
            v15 = OblivionDynamicCast( /*0x41931f*/
                    v14,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESBipedModelForm `RTTI Type Descriptor',
                    0);
            if ( v15 ) /*0x419329*/
            {
              if ( TESBipedModelForm_SlotOverlap(v15, (int)v10) ) /*0x41932e*/
                break; /*0x41932e*/
            }
          }
        }
        if ( !v8 ) /*0x419339*/
          return 1; /*0x419339*/
      }
      return 0; /*0x419335*/
    }
    return 1; /*0x419340*/
  }
  return 0; /*0x41925b*/
}
