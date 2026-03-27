int __cdecl _mbslwr_s_l(char *Str, size_t MaxCount)
{
  char *v2; // edi
  int result; // eax
  char *v4; // esi
  char *v5; // eax
  char v6; // dl
  int v7; // eax
  char v8; // ch
  char v9; // al
  bool v10; // zf
  size_t v11; // [esp-4h] [ebp-24h]
  struct localeinfo_struct v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-Ch]
  char v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h] BYREF

  v2 = Str;
  if ( Str )
  {
    if ( !(_DWORD)MaxCount )
    {
LABEL_7:
      *_errno() = 0x16;
      _invalid_parameter(0, (int)Str, 0x16);
      return 0x16;
    }
  }
  else if ( (_DWORD)MaxCount )
  {
    goto LABEL_7;
  }
  if ( !Str )
    return 0;
  LODWORD(v11) = MaxCount;
  if ( (unsigned int)strnlen(Str, v11) >= (unsigned int)MaxCount )
  {
    *Str = 0;
    goto LABEL_7;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v12, (struct localeinfo_struct *)HIDWORD(MaxCount));
  v4 = Str;
  if ( !*Str )
  {
LABEL_19:
    v10 = v14 == 0;
    *v4 = 0;
    if ( !v10 )
      *(_DWORD *)(v13 + 0x70) &= ~2u;
    return 0;
  }
  while ( 1 )
  {
    v5 = (char *)v12.mbcinfo + (unsigned __int8)*v2;
    v6 = v5[0x1D];
    if ( (v6 & 4) == 0 )
    {
      if ( (v6 & 0x10) != 0 )
        v9 = v5[0x11D];
      else
        v9 = *v2;
      *v4 = v9;
      goto LABEL_17;
    }
    v7 = __crtLCMapStringA(&v12, v12.mbcinfo->mblcid, 0x100u, (int)v2, 2, (int)&v15, 2, v12.mbcinfo->mbcodepage, 1);
    if ( !v7 )
      break;
    v8 = BYTE1(v15);
    *v4++ = v15;
    ++v2;
    if ( v7 > 1 )
    {
      *v4 = v8;
LABEL_17:
      ++v4;
    }
    if ( !*++v2 )
      goto LABEL_19;
  }
  *_errno() = 0x2A;
  *Str = 0;
  result = *_errno();
  if ( v14 )
    *(_DWORD *)(v13 + 0x70) &= ~2u;
  return result;
}
