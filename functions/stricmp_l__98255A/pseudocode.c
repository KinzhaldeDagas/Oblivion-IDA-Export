int __cdecl _stricmp_l(const char *Str1, const char *Str2, _locale_t Locale)
{
  int result; // eax
  const char *v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  struct localeinfo_struct v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  char v10; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, (struct localeinfo_struct *)Locale);
  if ( Str1 )
  {
    v4 = Str2;
    if ( Str2 )
    {
      if ( v8.locinfo->lc_handle[2] )
      {
        do
        {
          v5 = _tolower_l(*(unsigned __int8 *)Str1++, (_locale_t)&v8);
          v6 = v5;
          v7 = _tolower_l(*(unsigned __int8 *)v4++, (_locale_t)&v8);
        }
        while ( v6 && v6 == v7 );
        result = v6 - v7;
      }
      else
      {
        result = __ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
      }
      if ( v10 )
        *(_DWORD *)(v9 + 0x70) &= ~2u;
    }
    else
    {
      *_errno() = 0x16;
      _invalid_parameter(0, 0, 0, 0, 0);
      if ( v10 )
        *(_DWORD *)(v9 + 0x70) &= ~2u;
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    if ( v10 )
      *(_DWORD *)(v9 + 0x70) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}
