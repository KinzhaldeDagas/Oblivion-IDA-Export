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

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, (struct localeinfo_struct *)Locale);
  if ( (unsigned int)C >= 0x100 )
  {
    if ( v9.locinfo->mb_cur_max > 1 && (Ca = C >> 8, _isleadbyte_l(BYTE1(C), (_locale_t)&v9)) )
    {
      LOBYTE(v13) = Ca;
      *(_WORD *)((char *)&v13 + 1) = (unsigned __int8)C;
      v6 = 2;
    }
    else
    {
      *_errno() = 0x2A;
      LOWORD(v13) = (unsigned __int8)C;
      v6 = 1;
    }
    v7 = __crtLCMapStringA(
           &v9,
           v9.locinfo->lc_handle[2],
           0x100u,
           (int)&v13,
           v6,
           (int)&v12,
           3,
           v9.locinfo->lc_codepage,
           1);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        result = (unsigned __int8)v12;
      }
      else
      {
        LOBYTE(v8) = 0;
        HIBYTE(v8) = v12;
        result = BYTE1(v12) | v8;
      }
      goto LABEL_18;
    }
  }
  else
  {
    locinfo = v9.locinfo;
    if ( v9.locinfo->mb_cur_max <= 1 )
    {
      v4 = v9.locinfo->pctype[C] & 1;
    }
    else
    {
      v4 = _isctype_l(C, 1, (_locale_t)&v9);
      locinfo = v9.locinfo;
    }
    if ( v4 )
    {
      result = locinfo->pclmap[C];
LABEL_18:
      if ( v11 )
        *(_DWORD *)(v10 + 0x70) &= ~2u;
      return result;
    }
  }
  if ( v11 )
    *(_DWORD *)(v10 + 0x70) &= ~2u;
  return C;
}
