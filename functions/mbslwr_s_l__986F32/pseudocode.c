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

  v2 = Str; /*0x986f3b*/
  if ( Str ) /*0x986f42*/
  {
    if ( !(_DWORD)MaxCount ) /*0x986f47*/
    {
LABEL_7:
      *_errno() = 0x16; /*0x986f6a*/
      _invalid_parameter(0, (int)Str, 0x16); /*0x986f79*/
      return 0x16; /*0x986f83*/
    }
  }
  else if ( (_DWORD)MaxCount ) /*0x986f68*/
  {
    goto LABEL_7; /*0x986f68*/
  }
  if ( !Str ) /*0x986f4b*/
    return 0; /*0x987009*/
  LODWORD(v11) = MaxCount; /*0x986f51*/
  if ( (unsigned int)strnlen(Str, v11) >= (unsigned int)MaxCount ) /*0x986f5f*/
  {
    *Str = 0; /*0x986f61*/
    goto LABEL_7; /*0x986f63*/
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v12, (struct localeinfo_struct *)HIDWORD(MaxCount)); /*0x986f8e*/
  v4 = Str; /*0x986f93*/
  if ( !*Str ) /*0x986f97*/
  {
LABEL_19:
    v10 = v14 == 0; /*0x986ffb*/
    *v4 = 0; /*0x986ffe*/
    if ( !v10 ) /*0x987000*/
      *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x987005*/
    return 0; /*0x987005*/
  }
  while ( 1 ) /*0x986fa1*/
  {
    v5 = (char *)v12.mbcinfo + (unsigned __int8)*v2; /*0x986fa1*/
    v6 = v5[0x1D]; /*0x986fa3*/
    if ( (v6 & 4) == 0 ) /*0x986fa9*/
    {
      if ( (v6 & 0x10) != 0 ) /*0x986fe7*/
        v9 = v5[0x11D]; /*0x986fe9*/
      else
        v9 = *v2; /*0x986ff1*/
      *v4 = v9; /*0x986ff3*/
      goto LABEL_17; /*0x986ff3*/
    }
    v7 = __crtLCMapStringA(&v12, v12.mbcinfo->mblcid, 0x100u, v2, 2, (int)&v15, 2, v12.mbcinfo->mbcodepage); /*0x986fc8*/
    if ( !v7 ) /*0x986fd2*/
      break; /*0x986fd2*/
    v8 = BYTE1(v15); /*0x986fd4*/
    *v4++ = v15; /*0x986fd7*/
    ++v2; /*0x986fda*/
    if ( v7 > 1 ) /*0x986fde*/
    {
      *v4 = v8; /*0x986fe0*/
LABEL_17:
      ++v4; /*0x986ff5*/
    }
    if ( !*++v2 ) /*0x986ff7*/
      goto LABEL_19; /*0x986ff9*/
  }
  *_errno() = 0x2A; /*0x987015*/
  *Str = 0; /*0x98701e*/
  result = *_errno(); /*0x987028*/
  if ( v14 ) /*0x98702a*/
    *(_DWORD *)(v13 + 0x70) &= ~2u; /*0x98702f*/
  return result; /*0x98700b*/
}
