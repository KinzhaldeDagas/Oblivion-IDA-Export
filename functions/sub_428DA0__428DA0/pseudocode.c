bool __thiscall sub_428DA0(BSExtraData *this, BSExtraData *a2)
{
  char *v3; // esi
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  unsigned __int8 *v7; // edx
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

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                 &ExtraStartingPosition `RTTI Type Descriptor',
                 0);
  if ( !v3 || BSExtraData_CompareTo(this, a2) )
    return 1;
  v5 = 0x18;
  v6 = v3 + 0xC;
  v7 = (unsigned __int8 *)(this + 1);
  do
  {
    if ( *(_DWORD *)v7 != *v6 )
      goto LABEL_8;
    v5 -= 4;
    ++v6;
    v7 += 4;
  }
  while ( v5 >= 4 );
  if ( !v5 )
  {
LABEL_17:
    v17 = 0;
    return v17 != 0;
  }
LABEL_8:
  v8 = *v7 - *(unsigned __int8 *)v6;
  if ( !v8 )
  {
    v9 = v5 - 1;
    v10 = (unsigned __int8 *)v6 + 1;
    v11 = v7 + 1;
    if ( !v9 )
      goto LABEL_17;
    v8 = *v11 - *v10;
    if ( !v8 )
    {
      v12 = v9 - 1;
      v13 = v10 + 1;
      v14 = v11 + 1;
      if ( !v12 )
        goto LABEL_17;
      v8 = *v14 - *v13;
      if ( !v8 )
      {
        v15 = v13 + 1;
        v16 = v14 + 1;
        if ( v12 == 1 )
          goto LABEL_17;
        v8 = *v16 - *v15;
        if ( !v8 )
          goto LABEL_17;
      }
    }
  }
  v17 = 1;
  if ( v8 <= 0 )
    return 1;
  return v17 != 0;
}
