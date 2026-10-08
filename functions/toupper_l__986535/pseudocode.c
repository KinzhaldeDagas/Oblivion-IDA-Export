int __cdecl _toupper_l(int C, _locale_t Locale)
{
  pthreadlocinfo locinfo; // ecx
  int v4; // eax
  int result; // eax
  int v6; // ecx
  int v7; // eax
  unsigned __int16 v8; // ax
  struct localeinfo_struct v9; // [esp+4h] [ebp-18h] BYREF
  int v10; // [esp+Ch] [ebp-10h]
  char v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF
  int Ca; // [esp+24h] [ebp+8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, (struct localeinfo_struct *)Locale); /*0x986542*/
  if ( (unsigned int)C >= 0x100 ) /*0x986550*/
  {
    if ( v9.locinfo->mb_cur_max > 1 && (Ca = C >> 8, _isleadbyte_l(BYTE1(C), (_locale_t)&v9)) ) /*0x9865c6*/
    {
      LOBYTE(v13) = Ca; /*0x9865d6*/
      *(_WORD *)((char *)&v13 + 1) = (unsigned __int8)C; /*0x9865d9*/
      v6 = 2; /*0x9865e0*/
    }
    else
    {
      *_errno() = 0x2A; /*0x9865e8*/
      LOWORD(v13) = (unsigned __int8)C; /*0x9865f0*/
      v6 = 1; /*0x9865f7*/
    }
    v7 = __crtLCMapStringA(&v9, v9.locinfo->lc_handle[2], 0x200u, &v13, v6, (int)&v12, 3, v9.locinfo->lc_codepage); /*0x986617*/
    if ( v7 ) /*0x986621*/
    {
      if ( v7 == 1 ) /*0x98662a*/
      {
        result = (unsigned __int8)v12; /*0x98662c*/
      }
      else
      {
        LOBYTE(v8) = 0; /*0x986636*/
        HIBYTE(v8) = v12; /*0x986638*/
        result = BYTE1(v12) | v8; /*0x98663b*/
      }
      goto LABEL_18; /*0x986630*/
    }
  }
  else
  {
    locinfo = v9.locinfo; /*0x986552*/
    if ( v9.locinfo->mb_cur_max <= 1 ) /*0x98655c*/
    {
      v4 = v9.locinfo->pctype[C] & 2; /*0x98657c*/
    }
    else
    {
      v4 = _isctype_l(C, 2, (_locale_t)&v9); /*0x986565*/
      locinfo = v9.locinfo; /*0x98656a*/
    }
    if ( v4 ) /*0x986581*/
    {
      result = locinfo->pcumap[C]; /*0x986589*/
LABEL_18:
      if ( v11 ) /*0x986641*/
        *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x986646*/
      return result; /*0x986646*/
    }
  }
  if ( v11 ) /*0x986596*/
    *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x98659b*/
  return C; /*0x98664a*/
}
