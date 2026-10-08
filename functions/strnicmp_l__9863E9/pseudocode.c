int __cdecl _strnicmp_l(const char *Str1, const char *Str2, size_t MaxCount, _locale_t Locale)
{
  const char *v4; // edi
  int v5; // esi
  __int16 v6; // dx
  int result; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  struct localeinfo_struct v11; // [esp+Ch] [ebp-10h] BYREF
  int v12; // [esp+14h] [ebp-8h]
  char v13; // [esp+18h] [ebp-4h]

  if ( !(_DWORD)MaxCount ) /*0x9863f7*/
    return 0; /*0x9864d2*/
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v11, (struct localeinfo_struct *)HIDWORD(MaxCount)); /*0x986403*/
  if ( Str1 && (v4 = Str2) != 0 ) /*0x986440*/
  {
    if ( (unsigned int)MaxCount <= 0x7FFFFFFF ) /*0x98644a*/
    {
      if ( v11.locinfo->lc_handle[2] ) /*0x986477*/
      {
        do /*0x9864ca*/
        {
          v8 = _tolower_l(*(unsigned __int8 *)Str1++, (_locale_t)&v11); /*0x9864a4*/
          v9 = v8; /*0x9864ac*/
          v10 = _tolower_l(*(unsigned __int8 *)v4++, (_locale_t)&v11); /*0x9864b6*/
          LODWORD(MaxCount) = MaxCount - 1; /*0x9864bf*/
        }
        while ( (_DWORD)MaxCount && v9 && v9 == v10 ); /*0x9864ca*/
        result = v9 - v10; /*0x9864ce*/
      }
      else
      {
        result = __ascii_strnicmp(v6, Str1, Str2, MaxCount); /*0x986483*/
      }
      if ( v13 ) /*0x98648e*/
        *(_DWORD *)(v12 + 0x70) &= ~2u; /*0x986493*/
    }
    else
    {
      *_errno() = 0x16; /*0x986456*/
      _invalid_parameter(0, (int)Str2, 0x7FFFFFFF); /*0x98645c*/
      if ( v13 ) /*0x986467*/
        *(_DWORD *)(v12 + 0x70) &= ~2u; /*0x98646c*/
      return 0x7FFFFFFF; /*0x986470*/
    }
  }
  else
  {
    *_errno() = 0x16; /*0x986417*/
    _invalid_parameter(0, (int)v4, v5); /*0x98641d*/
    if ( v13 ) /*0x986428*/
      *(_DWORD *)(v12 + 0x70) &= ~2u; /*0x98642d*/
    return 0x7FFFFFFF; /*0x986431*/
  }
  return result; /*0x9864d4*/
}
