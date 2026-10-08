errno_t __usercall _mbsnbcpy_s_l@<eax>(int a1@<edi>, char *Dst, rsize_t SizeInBytes, char *Src, rsize_t MaxCount)
{
  errno_t result; // eax
  char *v6; // edi
  int v7; // esi
  int v8; // edx
  char *v9; // eax
  char v10; // cl
  char v11; // cl
  int v12; // eax
  char *v13; // edi
  int *v14; // ecx
  rsize_t v15; // [esp-4h] [ebp-20h]
  struct localeinfo_struct v16; // [esp+8h] [ebp-14h] BYREF
  int v17; // [esp+10h] [ebp-Ch]
  char v18; // [esp+14h] [ebp-8h]
  char *i; // [esp+18h] [ebp-4h]
  char *MaxCounta; // [esp+30h] [ebp+14h]
  char *MaxCountb; // [esp+30h] [ebp+14h]

  if ( Src ) /*0x99ee73*/
  {
    if ( !Dst ) /*0x99ee87*/
    {
LABEL_7:
      *_errno() = 0x16; /*0x99ee8e*/
      _invalid_parameter(0, a1, 0x16); /*0x99ee9d*/
      return 0x16; /*0x99eea7*/
    }
  }
  else if ( !Dst ) /*0x99ee77*/
  {
    if ( !(_DWORD)SizeInBytes ) /*0x99ee7c*/
      return 0; /*0x99ee80*/
    goto LABEL_7; /*0x99ee7c*/
  }
  if ( !(_DWORD)SizeInBytes ) /*0x99ee8c*/
    goto LABEL_7; /*0x99ee8c*/
  if ( !Src ) /*0x99eeaf*/
  {
    *Dst = 0; /*0x99eeb1*/
    return 0; /*0x99eeb3*/
  }
  LODWORD(v15) = a1; /*0x99eeb5*/
  v6 = (char *)HIDWORD(SizeInBytes); /*0x99eeb6*/
  if ( !HIDWORD(SizeInBytes) ) /*0x99eebb*/
  {
    *Dst = 0; /*0x99eebd*/
    v7 = 0x16; /*0x99eec6*/
    *_errno() = 0x16; /*0x99eecc*/
    _invalid_parameter(0, 0, 0x16); /*0x99eece*/
    return v7; /*0x99f005*/
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v16, (struct localeinfo_struct *)MaxCount); /*0x99eee1*/
  if ( !v16.mbcinfo->ismbcodepage ) /*0x99eee9*/
  {
    result = strncpy_s(Dst, SizeInBytes, Src, v15); /*0x99eef6*/
    goto LABEL_51; /*0x99eefe*/
  }
  v8 = SizeInBytes; /*0x99ef07*/
  v9 = Dst; /*0x99ef0a*/
  if ( Src == (char *)0xFFFFFFFF ) /*0x99ef0c*/
  {
    do /*0x99ef19*/
    {
      v10 = *v6; /*0x99ef0e*/
      *v9++ = *v6++; /*0x99ef10*/
      if ( !v10 ) /*0x99ef16*/
        break; /*0x99ef16*/
      --v8; /*0x99ef18*/
    }
    while ( v8 ); /*0x99ef19*/
  }
  else
  {
    do /*0x99ef2d*/
    {
      v11 = *v6; /*0x99ef1d*/
      *v9++ = *v6++; /*0x99ef1f*/
      if ( !v11 ) /*0x99ef25*/
        break; /*0x99ef25*/
      if ( !--v8 ) /*0x99ef28*/
        break; /*0x99ef28*/
      --Src; /*0x99ef2a*/
    }
    while ( Src ); /*0x99ef2d*/
    if ( !Src ) /*0x99ef32*/
      *v9++ = 0; /*0x99ef34*/
  }
  if ( v8 ) /*0x99ef39*/
  {
    if ( v9 - Dst < 2 ) /*0x99f00e*/
      goto LABEL_53; /*0x99f00e*/
    v6 = v9 + 0xFFFFFFFE; /*0x99f010*/
    for ( MaxCountb = v9 + 0xFFFFFFFE; MaxCountb >= Dst; --MaxCountb ) /*0x99f018*/
    {
      if ( !_ismbblead_l(*MaxCountb, &v16) ) /*0x99f025*/
        break; /*0x99f02e*/
    }
    if ( (((_BYTE)v6 - (_BYTE)MaxCountb) & 1) == 0 ) /*0x99f03f*/
    {
LABEL_53:
      if ( v18 ) /*0x99f060*/
        *(_DWORD *)(v17 + 0x70) &= ~2u; /*0x99f065*/
      return 0; /*0x99f069*/
    }
LABEL_50:
    *v6 = 0; /*0x99f041*/
    v14 = _errno(); /*0x99f048*/
    result = 0x2A; /*0x99f04c*/
    *v14 = 0x2A; /*0x99f04d*/
LABEL_51:
    if ( v18 ) /*0x99f052*/
      *(_DWORD *)(v17 + 0x70) &= ~2u; /*0x99f057*/
    return result; /*0x99f05b*/
  }
  if ( !*v6 || Src == (char *)1 ) /*0x99ef47*/
  {
    v6 = v9 + 0xFFFFFFFF; /*0x99ef49*/
    for ( i = v9 + 0xFFFFFFFF; i >= Dst; --i ) /*0x99ef51*/
    {
      if ( !_ismbblead_l(*i, &v16) ) /*0x99ef5e*/
        break; /*0x99ef67*/
    }
    if ( (((_BYTE)v6 - (_BYTE)i) & 1) != 0 ) /*0x99ef78*/
      goto LABEL_50; /*0x99ef78*/
  }
  if ( Src != (char *)0xFFFFFFFF ) /*0x99ef82*/
  {
    *Dst = 0; /*0x99efde*/
    v7 = 0x22; /*0x99efe7*/
    *_errno() = 0x22; /*0x99efed*/
    _invalid_parameter(0, (int)v6, 0x22); /*0x99efef*/
    if ( v18 ) /*0x99effa*/
      *(_DWORD *)(v17 + 0x70) &= ~2u; /*0x99efff*/
    return v7; /*0x99efff*/
  }
  v12 = SizeInBytes; /*0x99ef84*/
  if ( (unsigned int)SizeInBytes <= 1 ) /*0x99ef8a*/
    goto LABEL_38; /*0x99ef8a*/
  v13 = &Dst[SizeInBytes - 2]; /*0x99ef8c*/
  MaxCounta = v13; /*0x99ef92*/
  if ( v13 >= Dst ) /*0x99ef95*/
  {
    do /*0x99efb3*/
    {
      if ( !_ismbblead_l(*MaxCounta, &v16) ) /*0x99efa2*/
        break; /*0x99efab*/
      --MaxCounta; /*0x99efad*/
    }
    while ( MaxCounta >= Dst ); /*0x99efb3*/
    v12 = SizeInBytes; /*0x99efb5*/
  }
  if ( (((_BYTE)v13 - (_BYTE)MaxCounta) & 1) != 0 ) /*0x99efc0*/
    *v13 = 0; /*0x99efc2*/
  else
LABEL_38:
    Dst[v12 - 1] = 0; /*0x99efc6*/
  if ( v18 ) /*0x99efcd*/
    *(_DWORD *)(v17 + 0x70) &= ~2u; /*0x99efd2*/
  return 0x50; /*0x99f06c*/
}
