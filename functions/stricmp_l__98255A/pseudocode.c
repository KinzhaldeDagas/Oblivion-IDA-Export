int __cdecl _stricmp_l(const char *Str1, const char *Str2, _locale_t Locale)
{
  int v3; // edi
  int v4; // esi
  int result; // eax
  const char *v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  struct localeinfo_struct v10; // [esp+4h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-8h]
  char v12; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v10, (struct localeinfo_struct *)Locale); /*0x982567*/
  if ( Str1 ) /*0x982571*/
  {
    v6 = Str2; /*0x9825a2*/
    if ( Str2 ) /*0x9825a7*/
    {
      if ( v10.locinfo->lc_handle[2] ) /*0x9825d7*/
      {
        do /*0x982616*/
        {
          v7 = _tolower_l(*(unsigned __int8 *)Str1++, (_locale_t)&v10); /*0x9825f5*/
          v8 = v7; /*0x9825fd*/
          v9 = _tolower_l(*(unsigned __int8 *)v6++, (_locale_t)&v10); /*0x982607*/
        }
        while ( v8 && v8 == v9 ); /*0x982616*/
        result = v8 - v9; /*0x98261a*/
      }
      else
      {
        result = __ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2); /*0x9825e0*/
      }
      if ( v12 ) /*0x982620*/
        *(_DWORD *)(v11 + 0x70) &= ~2u; /*0x982625*/
    }
    else
    {
      *_errno() = 0x16; /*0x9825b3*/
      _invalid_parameter(0, 0, v4); /*0x9825b9*/
      if ( v12 ) /*0x9825c4*/
        *(_DWORD *)(v11 + 0x70) &= ~2u; /*0x9825c9*/
      return 0x7FFFFFFF; /*0x9825cd*/
    }
  }
  else
  {
    *_errno() = 0x16; /*0x98257d*/
    _invalid_parameter(0, v3, v4); /*0x982583*/
    if ( v12 ) /*0x98258e*/
      *(_DWORD *)(v11 + 0x70) &= ~2u; /*0x982593*/
    return 0x7FFFFFFF; /*0x982597*/
  }
  return result; /*0x98262a*/
}
