int __cdecl _tolower_l(int C, _locale_t Locale)
{
  pthreadlocinfo locinfo; // ecx
  int v4; // eax
  int result; // eax
  int v6; // ecx
  int v7; // eax
  unsigned __int16 v8; // ax
  struct localeinfo_struct v9; // [esp+8h] [ebp-18h] BYREF
  int v10; // [esp+10h] [ebp-10h]
  char v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h] BYREF
  int v13; // [esp+1Ch] [ebp-4h] BYREF
  int Ca; // [esp+28h] [ebp+8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, (struct localeinfo_struct *)Locale); /*0x984d7c*/
  if ( (unsigned int)C >= 0x100 ) /*0x984d8b*/
  {
    if ( v9.locinfo->mb_cur_max > 1 && (Ca = C >> 8, _isleadbyte_l(BYTE1(C), (_locale_t)&v9)) ) /*0x984e01*/
    {
      LOBYTE(v13) = Ca; /*0x984e11*/
      *(_WORD *)((char *)&v13 + 1) = (unsigned __int8)C; /*0x984e14*/
      v6 = 2; /*0x984e1b*/
    }
    else
    {
      *_errno() = 0x2A; /*0x984e23*/
      LOWORD(v13) = (unsigned __int8)C; /*0x984e2b*/
      v6 = 1; /*0x984e32*/
    }
    v7 = __crtLCMapStringA(&v9, v9.locinfo->lc_handle[2], 0x100u, &v13, v6, (int)&v12, 3, v9.locinfo->lc_codepage); /*0x984e4e*/
    if ( v7 ) /*0x984e58*/
    {
      if ( v7 == 1 ) /*0x984e61*/
      {
        result = (unsigned __int8)v12; /*0x984e63*/
      }
      else
      {
        LOBYTE(v8) = 0; /*0x984e6d*/
        HIBYTE(v8) = v12; /*0x984e6f*/
        result = BYTE1(v12) | v8; /*0x984e72*/
      }
      goto LABEL_18; /*0x984e67*/
    }
  }
  else
  {
    locinfo = v9.locinfo; /*0x984d8d*/
    if ( v9.locinfo->mb_cur_max <= 1 ) /*0x984d97*/
    {
      v4 = v9.locinfo->pctype[C] & 1; /*0x984db7*/
    }
    else
    {
      v4 = _isctype_l(C, 1, (_locale_t)&v9); /*0x984da0*/
      locinfo = v9.locinfo; /*0x984da5*/
    }
    if ( v4 ) /*0x984dbc*/
    {
      result = locinfo->pclmap[C]; /*0x984dc4*/
LABEL_18:
      if ( v11 ) /*0x984e78*/
        *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x984e7d*/
      return result; /*0x984e7d*/
    }
  }
  if ( v11 ) /*0x984dd1*/
    *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x984dd6*/
  return C; /*0x984e81*/
}
