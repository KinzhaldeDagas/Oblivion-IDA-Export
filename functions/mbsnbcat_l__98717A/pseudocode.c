char *__usercall _mbsnbcat_l@<eax>(int a1@<edi>, char *Dest, char *Source, size_t Count)
{
  char *result; // eax
  char *v5; // edi
  char *v6; // esi
  char v7; // al
  bool v8; // zf
  char *v9; // edi
  char v10; // al
  int v11; // edi
  size_t v12; // [esp-Ch] [ebp-24h]
  struct localeinfo_struct v13; // [esp+4h] [ebp-14h] BYREF
  int v14; // [esp+Ch] [ebp-Ch]
  char v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  if ( !(_DWORD)Count )
    return Dest;
  if ( !Dest )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, 0);
    return 0;
  }
  HIDWORD(v12) = a1;
  v5 = Source;
  if ( !Source )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, (int)Dest);
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v13, (struct localeinfo_struct *)HIDWORD(Count));
  if ( !v13.mbcinfo->ismbcodepage )
  {
    LODWORD(v12) = Count;
    result = strncat(Dest, Source, v12);
    if ( v15 )
      *(_DWORD *)(v14 + 0x70) &= ~2u;
    return result;
  }
  v16 = (int)Dest;
  v6 = &Dest[strlen(Dest)];
  if ( v6 != Dest && _mbsbtype_l((int)Dest, v6 - Dest - 1, &v13) == 1 )
    --v6;
  while ( 1 )
  {
    v7 = *v5;
    LODWORD(Count) = Count - 1;
    v8 = (v13.mbcinfo->mbctype[(unsigned __int8)*v5 + 1] & 4) == 0;
    *v6 = *v5;
    if ( v8 )
    {
      ++v6;
      ++v5;
      if ( !v7 )
        goto LABEL_17;
      goto LABEL_21;
    }
    ++v6;
    v9 = v5 + 1;
    if ( !(_DWORD)Count )
      break;
    v10 = *v9;
    LODWORD(Count) = Count - 1;
    *v6++ = *v9;
    v5 = v9 + 1;
    if ( !v10 )
    {
      v6[0xFFFFFFFE] = 0;
      goto LABEL_17;
    }
LABEL_21:
    if ( !(_DWORD)Count )
      goto LABEL_17;
  }
  v6[0xFFFFFFFF] = 0;
LABEL_17:
  v11 = v16;
  if ( v6 == (char *)v16 || _mbsbtype_l(v16, (int)&v6[-v16 - 1], &v13) != 1 )
    *v6 = 0;
  else
    v6[0xFFFFFFFF] = 0;
  if ( v15 )
    *(_DWORD *)(v14 + 0x70) &= ~2u;
  return (char *)v11;
}
