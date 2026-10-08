bool __thiscall sub_429490(BSExtraData *this, BSExtraData *a2)
{
  char *v3; // esi
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  BSExtraData *v7; // edx
  int v8; // esi
  unsigned int v9; // eax
  unsigned __int8 *v10; // ecx
  unsigned __int8 *v11; // edx
  unsigned int v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned __int8 *v15; // ecx
  unsigned __int8 *v16; // edx
  int v17; // eax

  v3 = (char *)OblivionDynamicCast( /*0x4294ad*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                 &ExtraPackageStartLocation `RTTI Type Descriptor',
                 0);
  if ( !v3 || BSExtraData_CompareTo(this, a2) ) /*0x4294c1*/
    return 1; /*0x4294bb*/
  v5 = 0x14; /*0x4294ca*/
  v6 = v3 + 0xC; /*0x4294cf*/
  v7 = this + 1; /*0x4294d2*/
  do /*0x4294e7*/
  {
    if ( v7->vtbl != (BSExtraDataVtbl *)*v6 ) /*0x4294d9*/
      goto LABEL_8; /*0x4294d9*/
    v5 -= 4; /*0x4294db*/
    ++v6; /*0x4294de*/
    v7 = (BSExtraData *)((char *)v7 + 4); /*0x4294e1*/
  }
  while ( v5 >= 4 ); /*0x4294e7*/
  if ( !v5 ) /*0x4294eb*/
  {
LABEL_17:
    v17 = 0; /*0x429553*/
    return v17 != 0; /*0x429553*/
  }
LABEL_8:
  v8 = LOBYTE(v7->vtbl) - *(unsigned __int8 *)v6; /*0x4294ed*/
  if ( !v8 ) /*0x4294f5*/
  {
    v9 = v5 - 1; /*0x4294f7*/
    v10 = (unsigned __int8 *)v6 + 1; /*0x4294fa*/
    v11 = (unsigned __int8 *)&v7->vtbl + 1; /*0x4294fd*/
    if ( !v9 ) /*0x429502*/
      goto LABEL_17; /*0x429502*/
    v8 = *v11 - *v10; /*0x42950a*/
    if ( !v8 ) /*0x42950c*/
    {
      v12 = v9 - 1; /*0x42950e*/
      v13 = v10 + 1; /*0x429511*/
      v14 = v11 + 1; /*0x429514*/
      if ( !v12 ) /*0x429519*/
        goto LABEL_17; /*0x429519*/
      v8 = *v14 - *v13; /*0x429521*/
      if ( !v8 ) /*0x429523*/
      {
        v15 = v13 + 1; /*0x429528*/
        v16 = v14 + 1; /*0x42952b*/
        if ( v12 == 1 ) /*0x429530*/
          goto LABEL_17; /*0x429530*/
        v8 = *v16 - *v15; /*0x429538*/
        if ( !v8 ) /*0x42953a*/
          goto LABEL_17; /*0x42953a*/
      }
    }
  }
  v17 = 1; /*0x42953e*/
  if ( v8 <= 0 ) /*0x429543*/
    return 1; /*0x429550*/
  return v17 != 0; /*0x4294b6*/
}
