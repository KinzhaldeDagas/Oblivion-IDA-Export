bool __thiscall sub_4A9220(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  unsigned int v6; // eax
  TESFormMembr *p_member; // ecx
  _DWORD *v8; // edx
  int v9; // esi
  unsigned int v10; // eax
  unsigned __int8 *pad; // ecx
  unsigned __int8 *v12; // edx
  unsigned int v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  int v18; // eax

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESAmmo `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  v6 = 8;
  p_member = &v4[5].member;
  v8 = (_DWORD *)((char *)this + 0x7C);
  do
  {
    if ( *v8 != *(_DWORD *)&p_member->type )
      goto LABEL_8;
    v6 -= 4;
    p_member = (TESFormMembr *)((char *)p_member + 4);
    ++v8;
  }
  while ( v6 >= 4 );
  if ( !v6 )
  {
LABEL_17:
    v18 = 0;
    return v18 != 0;
  }
LABEL_8:
  v9 = *(unsigned __int8 *)v8 - (unsigned __int8)p_member->type;
  if ( !v9 )
  {
    v10 = v6 - 1;
    pad = p_member->pad;
    v12 = (unsigned __int8 *)v8 + 1;
    if ( !v10 )
      goto LABEL_17;
    v9 = *v12 - *pad;
    if ( !v9 )
    {
      v13 = v10 - 1;
      v14 = pad + 1;
      v15 = v12 + 1;
      if ( !v13 )
        goto LABEL_17;
      v9 = *v15 - *v14;
      if ( !v9 )
      {
        v16 = v14 + 1;
        v17 = v15 + 1;
        if ( v13 == 1 )
          goto LABEL_17;
        v9 = *v17 - *v16;
        if ( !v9 )
          goto LABEL_17;
      }
    }
  }
  v18 = 1;
  if ( v9 <= 0 )
    return 1;
  return v18 != 0;
}
