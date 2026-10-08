bool __thiscall sub_428DA0(BSExtraData *this, BSExtraData *a2)
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

  v3 = (char *)OblivionDynamicCast( /*0x428dbd*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                 &ExtraStartingPosition `RTTI Type Descriptor',
                 0);
  if ( !v3 || BSExtraData_CompareTo(this, a2) ) /*0x428dd1*/
    return 1; /*0x428dcb*/
  v5 = 0x18; /*0x428dda*/
  v6 = v3 + 0xC; /*0x428ddf*/
  v7 = this + 1; /*0x428de2*/
  do /*0x428df7*/
  {
    if ( v7->vtbl != (BSExtraDataVtbl *)*v6 ) /*0x428de9*/
      goto LABEL_8; /*0x428de9*/
    v5 -= 4; /*0x428deb*/
    ++v6; /*0x428dee*/
    v7 = (BSExtraData *)((char *)v7 + 4); /*0x428df1*/
  }
  while ( v5 >= 4 ); /*0x428df7*/
  if ( !v5 ) /*0x428dfb*/
  {
LABEL_17:
    v17 = 0; /*0x428e63*/
    return v17 != 0; /*0x428e63*/
  }
LABEL_8:
  v8 = LOBYTE(v7->vtbl) - *(unsigned __int8 *)v6; /*0x428dfd*/
  if ( !v8 ) /*0x428e05*/
  {
    v9 = v5 - 1; /*0x428e07*/
    v10 = (unsigned __int8 *)v6 + 1; /*0x428e0a*/
    v11 = (unsigned __int8 *)&v7->vtbl + 1; /*0x428e0d*/
    if ( !v9 ) /*0x428e12*/
      goto LABEL_17; /*0x428e12*/
    v8 = *v11 - *v10; /*0x428e1a*/
    if ( !v8 ) /*0x428e1c*/
    {
      v12 = v9 - 1; /*0x428e1e*/
      v13 = v10 + 1; /*0x428e21*/
      v14 = v11 + 1; /*0x428e24*/
      if ( !v12 ) /*0x428e29*/
        goto LABEL_17; /*0x428e29*/
      v8 = *v14 - *v13; /*0x428e31*/
      if ( !v8 ) /*0x428e33*/
      {
        v15 = v13 + 1; /*0x428e38*/
        v16 = v14 + 1; /*0x428e3b*/
        if ( v12 == 1 ) /*0x428e40*/
          goto LABEL_17; /*0x428e40*/
        v8 = *v16 - *v15; /*0x428e48*/
        if ( !v8 ) /*0x428e4a*/
          goto LABEL_17; /*0x428e4a*/
      }
    }
  }
  v17 = 1; /*0x428e4e*/
  if ( v8 <= 0 ) /*0x428e53*/
    return 1; /*0x428e60*/
  return v17 != 0; /*0x428dc6*/
}
