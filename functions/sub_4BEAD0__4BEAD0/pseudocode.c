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

  v3 = (TESForm *)OblivionDynamicCast( /*0x4beae7*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESClimate `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4beaec*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x4beaff*/
    return 1; /*0x4beaf9*/
  v6 = 0; /*0x4beb0c*/
  v7 = (char *)v4 - (char *)this; /*0x4beb0e*/
  v8 = (char *)this + 0x38; /*0x4beb10*/
  while ( 1 ) /*0x4beb24*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(char *, char *))(*(_DWORD *)v8 + 0xC))(v8, &v8[v7]) ) /*0x4beb2e*/
      return 1; /*0x4beb32*/
    ++v6; /*0x4beb34*/
    v8 += 0xC; /*0x4beb37*/
    if ( v6 >= 2 ) /*0x4beb3d*/
      break; /*0x4beb3d*/
    v7 = (char *)v4 - (char *)this; /*0x4beb20*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(TESForm *, TESForm *))(*((_DWORD *)this + 6) + 0xC))(this + 1, v4 + 1) /*0x4beb59*/
    || sub_4EEBB0((_DWORD *)this + 0xC, (const void **)&v4[2].vtbl) )
  {
    return 1; /*0x4beb68*/
  }
  v9 = 6; /*0x4beb6b*/
  p_flags = &v4[3].member.flags; /*0x4beb70*/
  v11 = (_DWORD *)((char *)this + 0x50); /*0x4beb73*/
  do /*0x4beb88*/
  {
    if ( *v11 != *p_flags ) /*0x4beb7a*/
      goto LABEL_15; /*0x4beb7a*/
    v9 -= 4; /*0x4beb7c*/
    ++p_flags; /*0x4beb7f*/
    ++v11; /*0x4beb82*/
  }
  while ( v9 >= 4 ); /*0x4beb88*/
  if ( !v9 ) /*0x4beb8c*/
  {
LABEL_24:
    v21 = 0; /*0x4bebf5*/
    return v21 != 0; /*0x4bebf5*/
  }
LABEL_15:
  v12 = *(unsigned __int8 *)v11 - *(unsigned __int8 *)p_flags; /*0x4beb8e*/
  if ( !v12 ) /*0x4beb96*/
  {
    v13 = v9 - 1; /*0x4beb98*/
    v14 = (unsigned __int8 *)p_flags + 1; /*0x4beb9b*/
    v15 = (unsigned __int8 *)v11 + 1; /*0x4beb9e*/
    if ( !v13 ) /*0x4beba3*/
      goto LABEL_24; /*0x4beba3*/
    v12 = *v15 - *v14; /*0x4bebab*/
    if ( !v12 ) /*0x4bebad*/
    {
      v16 = v13 - 1; /*0x4bebaf*/
      v17 = v14 + 1; /*0x4bebb2*/
      v18 = v15 + 1; /*0x4bebb5*/
      if ( !v16 ) /*0x4bebba*/
        goto LABEL_24; /*0x4bebba*/
      v12 = *v18 - *v17; /*0x4bebc2*/
      if ( !v12 ) /*0x4bebc4*/
      {
        v19 = v17 + 1; /*0x4bebc9*/
        v20 = v18 + 1; /*0x4bebcc*/
        if ( v16 == 1 ) /*0x4bebd1*/
          goto LABEL_24; /*0x4bebd1*/
        v12 = *v20 - *v19; /*0x4bebd9*/
        if ( !v12 ) /*0x4bebdb*/
          goto LABEL_24; /*0x4bebdb*/
      }
    }
  }
  v21 = 1; /*0x4bebdf*/
  if ( v12 <= 0 ) /*0x4bebe4*/
    return 1; /*0x4bebf2*/
  return v21 != 0; /*0x4beaf5*/
}
