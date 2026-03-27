double __cdecl _atof_l(const char *String, _locale_t Locale)
{
  int v2; // edi
  const char *v3; // esi
  double result; // st7
  int v6; // eax
  _BYTE v7[24]; // [esp+8h] [ebp-28h] BYREF
  struct localeinfo_struct v8; // [esp+20h] [ebp-10h] BYREF
  int v9; // [esp+28h] [ebp-8h]
  char v10; // [esp+2Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, (struct localeinfo_struct *)Locale);
  v3 = String;
  if ( String )
  {
    while ( v8.locinfo->mb_cur_max <= 1
          ? v8.locinfo->pctype[*(unsigned __int8 *)v3] & 8
          : _isctype_l(*(unsigned __int8 *)v3, 8, (_locale_t)&v8) )
      ++v3;
    v6 = strlen(v3);
    result = *(double *)(_fltin2(v7, v3, v6, 0, 0, &v8) + 0x10);
    if ( v10 )
      *(_DWORD *)(v9 + 0x70) &= ~2u;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, v2, 0);
    if ( v10 )
      *(_DWORD *)(v9 + 0x70) &= ~2u;
    return 0.0;
  }
  return result;
}
