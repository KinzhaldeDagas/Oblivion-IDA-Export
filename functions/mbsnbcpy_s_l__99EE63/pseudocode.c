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

  if ( Src )
  {
    if ( !Dst )
    {
LABEL_7:
      *_errno() = 0x16;
      _invalid_parameter(0, a1, 0x16);
      return 0x16;
    }
  }
  else if ( !Dst )
  {
    if ( !(_DWORD)SizeInBytes )
      return 0;
    goto LABEL_7;
  }
  if ( !(_DWORD)SizeInBytes )
    goto LABEL_7;
  if ( !Src )
  {
    *Dst = 0;
    return 0;
  }
  LODWORD(v15) = a1;
  v6 = (char *)HIDWORD(SizeInBytes);
  if ( !HIDWORD(SizeInBytes) )
  {
    *Dst = 0;
    v7 = 0x16;
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0x16);
    return v7;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v16, (struct localeinfo_struct *)MaxCount);
  if ( !v16.mbcinfo->ismbcodepage )
  {
    result = strncpy_s(Dst, SizeInBytes, Src, v15);
    goto LABEL_51;
  }
  v8 = SizeInBytes;
  v9 = Dst;
  if ( Src == (char *)0xFFFFFFFF )
  {
    do
    {
      v10 = *v6;
      *v9++ = *v6++;
      if ( !v10 )
        break;
      --v8;
    }
    while ( v8 );
  }
  else
  {
    do
    {
      v11 = *v6;
      *v9++ = *v6++;
      if ( !v11 )
        break;
      if ( !--v8 )
        break;
      --Src;
    }
    while ( Src );
    if ( !Src )
      *v9++ = 0;
  }
  if ( v8 )
  {
    if ( v9 - Dst < 2 )
      goto LABEL_53;
    v6 = v9 + 0xFFFFFFFE;
    for ( MaxCountb = v9 + 0xFFFFFFFE; MaxCountb >= Dst; --MaxCountb )
    {
      if ( !_ismbblead_l(*MaxCountb, &v16) )
        break;
    }
    if ( (((_BYTE)v6 - (_BYTE)MaxCountb) & 1) == 0 )
    {
LABEL_53:
      if ( v18 )
        *(_DWORD *)(v17 + 0x70) &= ~2u;
      return 0;
    }
LABEL_50:
    *v6 = 0;
    v14 = _errno();
    result = 0x2A;
    *v14 = 0x2A;
LABEL_51:
    if ( v18 )
      *(_DWORD *)(v17 + 0x70) &= ~2u;
    return result;
  }
  if ( !*v6 || Src == (char *)1 )
  {
    v6 = v9 + 0xFFFFFFFF;
    for ( i = v9 + 0xFFFFFFFF; i >= Dst; --i )
    {
      if ( !_ismbblead_l(*i, &v16) )
        break;
    }
    if ( (((_BYTE)v6 - (_BYTE)i) & 1) != 0 )
      goto LABEL_50;
  }
  if ( Src != (char *)0xFFFFFFFF )
  {
    *Dst = 0;
    v7 = 0x22;
    *_errno() = 0x22;
    _invalid_parameter(0, (int)v6, 0x22);
    if ( v18 )
      *(_DWORD *)(v17 + 0x70) &= ~2u;
    return v7;
  }
  v12 = SizeInBytes;
  if ( (unsigned int)SizeInBytes <= 1 )
    goto LABEL_38;
  v13 = &Dst[SizeInBytes - 2];
  MaxCounta = v13;
  if ( v13 >= Dst )
  {
    do
    {
      if ( !_ismbblead_l(*MaxCounta, &v16) )
        break;
      --MaxCounta;
    }
    while ( MaxCounta >= Dst );
    v12 = SizeInBytes;
  }
  if ( (((_BYTE)v13 - (_BYTE)MaxCounta) & 1) != 0 )
    *v13 = 0;
  else
LABEL_38:
    Dst[v12 - 1] = 0;
  if ( v18 )
    *(_DWORD *)(v17 + 0x70) &= ~2u;
  return 0x50;
}
