int __cdecl _isxdigit_l(int C, _locale_t Locale)
{
  int result; // eax
  struct localeinfo_struct v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale); /*0x98509f*/
  if ( v3.locinfo->mb_cur_max <= 1 ) /*0x9850ae*/
    result = v3.locinfo->pctype[C] & 0x80; /*0x9850d3*/
  else
    result = _isctype_l(C, 0x80, (_locale_t)&v3); /*0x9850bc*/
  if ( v5 ) /*0x9850dc*/
    *(_DWORD *)(v4 + 0x70) &= ~2u; /*0x9850e1*/
  return result; /*0x9850e5*/
}
