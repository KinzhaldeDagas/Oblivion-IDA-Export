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

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, (struct localeinfo_struct *)HIDWORD(MaxCount)); /*0x9a15ca*/
  if ( !(_DWORD)MaxCount ) /*0x9a15d6*/
  {
    if ( v11 ) /*0x9a15db*/
      *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x9a15e0*/
    return 0; /*0x9a15e6*/
  }
  if ( !Str1 || !Str2 ) /*0x9a1621*/
  {
    *_errno() = 0x16; /*0x9a15fa*/
    _invalid_parameter(0, v4, (int)v5); /*0x9a1600*/
    if ( v11 ) /*0x9a160b*/
      *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x9a1610*/
    return 0x7FFFFFFF; /*0x9a1619*/
  }
  if ( (unsigned int)MaxCount > 0x7FFFFFFF ) /*0x9a162b*/
  {
    *_errno() = 0x16; /*0x9a1637*/
    _invalid_parameter(0, v4, 0x7FFFFFFF); /*0x9a163d*/
LABEL_16:
    if ( v11 ) /*0x9a1695*/
      *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x9a169a*/
    return 0x7FFFFFFF; /*0x9a16a0*/
  }
  v7 = v9.locinfo->lc_handle[1]; /*0x9a164a*/
  if ( v7 ) /*0x9a164f*/
  {
    v8 = __crtCompareStringA(&v9, v7, 0x1001u, Str1, MaxCount, Str2, MaxCount, v9.locinfo->lc_collate_cp); /*0x9a167b*/
    if ( !v8 ) /*0x9a1685*/
    {
      *_errno() = 0x16; /*0x9a168c*/
      goto LABEL_16; /*0x9a168c*/
    }
    result = v8 - 2; /*0x9a16a2*/
  }
  else
  {
    result = _strnicmp_l(Str1, Str2, __PAIR64__(&v9, MaxCount), v5); /*0x9a165c*/
  }
  if ( v11 ) /*0x9a16a8*/
    *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x9a16ad*/
  return result; /*0x9a16b2*/
}
