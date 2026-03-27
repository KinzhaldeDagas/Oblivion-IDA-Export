int __cdecl _strnicoll_l(const char *Str1, const char *Str2, size_t MaxCount, _locale_t Locale)
{
  int v4; // edi
  localeinfo_struct_0 *v5; // esi
  int result; // eax
  LCID v7; // ecx
  int v8; // eax
  struct localeinfo_struct v9; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  char v11; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, (struct localeinfo_struct *)HIDWORD(MaxCount));
  if ( !(_DWORD)MaxCount )
  {
    if ( v11 )
      *(_DWORD *)(v10 + 0x70) &= ~2u;
    return 0;
  }
  if ( !Str1 || !Str2 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, v4, (int)v5);
    if ( v11 )
      *(_DWORD *)(v10 + 0x70) &= ~2u;
    return 0x7FFFFFFF;
  }
  if ( (unsigned int)MaxCount > 0x7FFFFFFF )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, v4, 0x7FFFFFFF);
LABEL_16:
    if ( v11 )
      *(_DWORD *)(v10 + 0x70) &= ~2u;
    return 0x7FFFFFFF;
  }
  v7 = v9.locinfo->lc_handle[1];
  if ( v7 )
  {
    v8 = __crtCompareStringA(&v9, v7, 0x1001u, Str1, MaxCount, Str2, MaxCount, v9.locinfo->lc_collate_cp);
    if ( !v8 )
    {
      *_errno() = 0x16;
      goto LABEL_16;
    }
    result = v8 - 2;
  }
  else
  {
    result = _strnicmp_l(Str1, Str2, __PAIR64__(&v9, MaxCount), v5);
  }
  if ( v11 )
    *(_DWORD *)(v10 + 0x70) &= ~2u;
  return result;
}
