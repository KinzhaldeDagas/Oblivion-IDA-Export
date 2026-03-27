char __thiscall sub_419220(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  int v4; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  TESForm *v8; // eax
  void *v9; // edi
  _DWORD *v10; // ecx
  int v11; // esi
  UInt32 SummonedObj; // eax
  TESForm *v13; // eax
  _WORD *v14; // eax

  v3 = this + 0xA;
  v4 = 0;
  if ( !v3 )
    return sub_419243(a2);
  do
  {
    if ( *v3 )
      ++v4;
    v3 = (_DWORD *)v3[1];
  }
  while ( v3 );
  if ( !v4 )
    return sub_419243(a2);
  v6 = a2[0x16];
  if ( (v6 & 0x70000) == 0 )
    return 1;
  if ( (v6 & 0x10000) != 0 )
    return EffectItemList_HasEffectWithFlags(this + 9, 0x10000) == 0;
  if ( (v6 & 0x20000) == 0 )
    return 1;
  v7 = this + 9;
  if ( !EffectItemList_HasEffect(this + 9, a2[0x26], 0x48) )
  {
    v8 = TESForm_LookupByFormID(a2[0x18]);
    v9 = OblivionDynamicCast(
           v8,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESBipedModelForm `RTTI Type Descriptor',
           0);
    if ( v9 && this && this != (_DWORD *)0xFFFFFFDC )
    {
      while ( 1 )
      {
        v10 = (_DWORD *)v7[1];
        v11 = v7[2];
        v7 = v11 ? (_DWORD *)(v11 - 4) : 0;
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10[7] + 0x58) & 0x20000) != 0 )
          {
            SummonedObj = EffectItem_GetSummonedObj_(v10);
            v13 = TESForm_LookupByFormID(SummonedObj);
            v14 = OblivionDynamicCast(
                    v13,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESBipedModelForm `RTTI Type Descriptor',
                    0);
            if ( v14 )
            {
              if ( TESBipedModelForm_SlotOverlap(v14, (int)v9) )
                break;
            }
          }
        }
        if ( !v7 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
