bool __thiscall sub_4C8EF0(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  unsigned __int8 *v4; // esi
  int v6; // eax
  int v7; // ecx
  TESForm *v8; // eax
  TESFormVtbl **v9; // ecx

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLandTexture `RTTI Type Descriptor',
                    0);
  v4 = (unsigned __int8 *)v3;
  if ( !v3 )
    return 1;
  if ( TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  v6 = *((unsigned __int8 *)this + 0x28) - v4[0x28];
  if ( v6
    || (v6 = *((unsigned __int8 *)this + 0x29) - v4[0x29]) != 0
    || (v6 = *((unsigned __int8 *)this + 0x2A) - v4[0x2A]) != 0 )
  {
    v7 = 1;
    if ( v6 <= 0 )
      v7 = 0xFFFFFFFF;
  }
  else
  {
    v7 = 0;
  }
  if ( v7 || *((_BYTE *)this + 0x2B) != v4[0x2B] )
    return 1;
  v8 = (TESForm *)((char *)this + 0x2C);
  v9 = (TESFormVtbl **)(v4 + 0x2C);
  if ( this == (TESForm *)0xFFFFFFD4 )
  {
LABEL_16:
    if ( v9 )
      return 1;
  }
  else
  {
    while ( v9 )
    {
      if ( v8->vtbl != *v9 )
        return 1;
      v8 = *(TESForm **)&v8->member.type;
      v9 = (TESFormVtbl **)v9[1];
      if ( !v8 )
        goto LABEL_16;
    }
  }
  return v8 != 0;
}
