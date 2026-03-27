int __cdecl _strnicmp_l(const char *Str1, const char *Str2, size_t MaxCount, _locale_t Locale)
{
  const char *v4; // edi
  int v5; // esi
  int result; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  struct localeinfo_struct v10; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-8h]
  char v12; // [esp+18h] [ebp-4h]

  if ( !(_DWORD)MaxCount )
    return 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v10, (struct localeinfo_struct *)HIDWORD(MaxCount));
  if ( Str1 && (v4 = Str2) != 0 )
  {
    if ( (unsigned int)MaxCount <= 0x7FFFFFFF )
    {
      if ( v10.locinfo->lc_handle[2] )
      {
        do
        {
          v7 = _tolower_l(*(unsigned __int8 *)Str1++, (_locale_t)&v10);
          v8 = v7;
          v9 = _tolower_l(*(unsigned __int8 *)v4++, (_locale_t)&v10);
          LODWORD(MaxCount) = MaxCount - 1;
        }
        while ( (_DWORD)MaxCount && v8 && v8 == v9 );
        result = v8 - v9;
      }
      else
      {
        result = __ascii_strnicmp(Str1, Str2, MaxCount);
      }
      if ( v12 )
        *(_DWORD *)(v11 + 0x70) &= ~2u;
    }
    else
    {
      *_errno() = 0x16;
      _invalid_parameter(0, (int)Str2, 0x7FFFFFFF);
      if ( v12 )
        *(_DWORD *)(v11 + 0x70) &= ~2u;
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, (int)v4, v5);
    if ( v12 )
      *(_DWORD *)(v11 + 0x70) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}
