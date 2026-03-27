bool __thiscall sub_4BEAD0(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // ebp
  int v6; // edi
  int v7; // eax
  char *v8; // esi
  unsigned int v9; // eax
  TESForm::FormFlags *p_flags; // ecx
  _DWORD *v11; // edx
  int v12; // esi
  unsigned int v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // edx
  unsigned int v16; // eax
  unsigned __int8 *v17; // ecx
  unsigned __int8 *v18; // edx
  unsigned __int8 *v19; // ecx
  unsigned __int8 *v20; // edx
  int v21; // eax

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESClimate `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  v6 = 0;
  v7 = (char *)v4 - (char *)this;
  v8 = (char *)this + 0x38;
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(char *, char *))(*(_DWORD *)v8 + 0xC))(v8, &v8[v7]) )
      return 1;
    ++v6;
    v8 += 0xC;
    if ( v6 >= 2 )
      break;
    v7 = (char *)v4 - (char *)this;
  }
  if ( (*(unsigned __int8 (__thiscall **)(TESForm *, TESForm *))(*((_DWORD *)this + 6) + 0xC))(this + 1, v4 + 1)
    || sub_4EEBB0((_DWORD *)this + 0xC, &v4[2].vtbl) )
  {
    return 1;
  }
  v9 = 6;
  p_flags = &v4[3].member.flags;
  v11 = (_DWORD *)((char *)this + 0x50);
  do
  {
    if ( *v11 != *p_flags )
      goto LABEL_15;
    v9 -= 4;
    ++p_flags;
    ++v11;
  }
  while ( v9 >= 4 );
  if ( !v9 )
  {
LABEL_24:
    v21 = 0;
    return v21 != 0;
  }
LABEL_15:
  v12 = *(unsigned __int8 *)v11 - *(unsigned __int8 *)p_flags;
  if ( !v12 )
  {
    v13 = v9 - 1;
    v14 = (unsigned __int8 *)p_flags + 1;
    v15 = (unsigned __int8 *)v11 + 1;
    if ( !v13 )
      goto LABEL_24;
    v12 = *v15 - *v14;
    if ( !v12 )
    {
      v16 = v13 - 1;
      v17 = v14 + 1;
      v18 = v15 + 1;
      if ( !v16 )
        goto LABEL_24;
      v12 = *v18 - *v17;
      if ( !v12 )
      {
        v19 = v17 + 1;
        v20 = v18 + 1;
        if ( v16 == 1 )
          goto LABEL_24;
        v12 = *v20 - *v19;
        if ( !v12 )
          goto LABEL_24;
      }
    }
  }
  v21 = 1;
  if ( v12 <= 0 )
    return 1;
  return v21 != 0;
}
