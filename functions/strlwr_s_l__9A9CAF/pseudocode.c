errno_t __cdecl _strlwr_s_l(char *Str, size_t Size, _locale_t Locale)
{
  errno_t result; // eax
  struct localeinfo_struct v4; // [esp+0h] [ebp-10h] BYREF
  int v5; // [esp+8h] [ebp-8h]
  char v6; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v4, (struct localeinfo_struct *)HIDWORD(Size)); /*0x9a9cbb*/
  result = _strlwr_s_l_stat(Str, __PAIR64__(&v4, Size)); /*0x9a9cca*/
  if ( v6 ) /*0x9a9cd6*/
    *(_DWORD *)(v5 + 0x70) &= ~2u; /*0x9a9cdb*/
  return result; /*0x9a9cdf*/
}
