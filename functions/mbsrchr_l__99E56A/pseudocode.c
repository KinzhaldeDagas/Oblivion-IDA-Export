char *__usercall _mbsrchr_l@<eax>(int a1@<edi>, char *Str, int a3, struct localeinfo_struct *a4)
{
  int v4; // esi
  char *result; // eax
  char *v6; // ecx
  unsigned __int8 v7; // dl
  int v8; // eax
  bool v9; // zf
  _BYTE v10[4]; // [esp+8h] [ebp-14h] BYREF
  int v11; // [esp+Ch] [ebp-10h]
  int v12; // [esp+10h] [ebp-Ch]
  char v13; // [esp+14h] [ebp-8h]
  char *v14; // [esp+18h] [ebp-4h]

  v14 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v10, a4);
  v4 = v11;
  if ( !*(_DWORD *)(v11 + 8) )
  {
    result = strrchr(Str, a3);
    if ( v13 )
      *(_DWORD *)(v12 + 0x70) &= ~2u;
    return result;
  }
  v6 = Str;
  if ( !Str )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, v4);
    if ( v13 )
      *(_DWORD *)(v12 + 0x70) &= ~2u;
    return 0;
  }
  do
  {
    v7 = *v6;
    v8 = (unsigned __int8)*v6;
    if ( (*(_BYTE *)((unsigned __int8)v8 + v11 + 0x1D) & 4) != 0 )
    {
      v7 = *++v6;
      if ( *v6 )
      {
        if ( a3 == (v7 | (v8 << 8)) )
          v14 = v6 + 0xFFFFFFFF;
        goto LABEL_16;
      }
      v9 = v14 == 0;
    }
    else
    {
      v9 = a3 == v8;
    }
    if ( v9 )
      v14 = v6;
LABEL_16:
    ++v6;
  }
  while ( v7 );
  if ( v13 )
    *(_DWORD *)(v12 + 0x70) &= ~2u;
  return v14;
}
