int __cdecl _isalpha_l(int C, _locale_t Locale)
{
  int result; // eax
  struct localeinfo_struct v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale); /*0x984eb8*/
  if ( v3.locinfo->mb_cur_max <= 1 ) /*0x984ec7*/
    result = v3.locinfo->pctype[C] & 0x103; /*0x984eec*/
  else
    result = _isctype_l(C, 0x103, (_locale_t)&v3); /*0x984ed5*/
  if ( v5 ) /*0x984ef5*/
    *(_DWORD *)(v4 + 0x70) &= ~2u; /*0x984efa*/
  return result; /*0x984efe*/
}
