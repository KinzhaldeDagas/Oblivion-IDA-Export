char *__usercall _mbsnbcpy_l@<eax>(int a1@<edi>, char *Dest, char *Source, size_t Count)
{
  char *v4; // esi
  char *result; // eax
  char *v6; // ecx
  int v7; // edx
  char v8; // al
  bool v9; // zf
  char *v10; // esi
  char *v11; // ecx
  char v12; // al
  size_t v13; // [esp-4h] [ebp-1Ch]
  _BYTE v14[4]; // [esp+8h] [ebp-10h] BYREF
  int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  char v17; // [esp+14h] [ebp-4h]

  v4 = Dest; /*0x982db7*/
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v14, (struct localeinfo_struct *)HIDWORD(Count)); /*0x982dc3*/
  if ( !Dest && (_DWORD)Count || (v6 = Source) == 0 && (_DWORD)Count ) /*0x982e05*/
  {
    *_errno() = 0x16; /*0x982ddd*/
    _invalid_parameter(0, a1, (int)Dest); /*0x982de3*/
    if ( v17 ) /*0x982dee*/
      *(_DWORD *)(v16 + 0x70) &= ~2u; /*0x982df3*/
    return 0; /*0x982df9*/
  }
  v7 = v15; /*0x982e07*/
  if ( !*(_DWORD *)(v15 + 8) ) /*0x982e0a*/
  {
    LODWORD(v13) = Count; /*0x982e0f*/
    result = strncpy(Dest, Source, v13); /*0x982e14*/
    if ( v17 ) /*0x982e1f*/
      *(_DWORD *)(v16 + 0x70) &= ~2u; /*0x982e24*/
    return result; /*0x982e28*/
  }
  if ( !(_DWORD)Count ) /*0x982e2d*/
    goto LABEL_18; /*0x982e2d*/
  while ( 1 ) /*0x982e30*/
  {
    v8 = *v6; /*0x982e30*/
    LODWORD(Count) = Count - 1; /*0x982e32*/
    v9 = (*(_BYTE *)((unsigned __int8)*v6 + v7 + 0x1D) & 4) == 0; /*0x982e38*/
    *v4 = *v6; /*0x982e3d*/
    if ( !v9 ) /*0x982e3f*/
      break; /*0x982e3f*/
    ++v4; /*0x982e7e*/
    ++v6; /*0x982e7f*/
    if ( !v8 ) /*0x982e82*/
      goto LABEL_16; /*0x982e82*/
LABEL_23:
    if ( !(_DWORD)Count ) /*0x982e87*/
      goto LABEL_18; /*0x982e87*/
  }
  v10 = v4 + 1; /*0x982e41*/
  v11 = v6 + 1; /*0x982e42*/
  if ( !(_DWORD)Count ) /*0x982e46*/
  {
    v10[0xFFFFFFFF] = 0; /*0x982e8b*/
    goto LABEL_18; /*0x982e8e*/
  }
  v12 = *v11; /*0x982e48*/
  LODWORD(Count) = Count - 1; /*0x982e4a*/
  *v10 = *v11; /*0x982e4d*/
  v4 = v10 + 1; /*0x982e4f*/
  v6 = v11 + 1; /*0x982e50*/
  if ( v12 ) /*0x982e53*/
    goto LABEL_23; /*0x982e53*/
  v4[0xFFFFFFFE] = 0; /*0x982e55*/
LABEL_16:
  if ( (_DWORD)Count ) /*0x982e5b*/
    _memset((int)v4, 0, Count); /*0x982e62*/
LABEL_18:
  if ( v17 ) /*0x982e6e*/
    *(_DWORD *)(v16 + 0x70) &= ~2u; /*0x982e73*/
  return Dest; /*0x982e7a*/
}
