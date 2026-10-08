int __cdecl _isdigit_l(int C, _locale_t Locale)
{
  int result; // eax
  struct localeinfo_struct v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale); /*0x985027*/
  if ( v3.locinfo->mb_cur_max <= 1 ) /*0x985036*/
    result = v3.locinfo->pctype[C] & 4; /*0x985058*/
  else
    result = _isctype_l(C, 4, (_locale_t)&v3); /*0x985041*/
  if ( v5 ) /*0x98505f*/
    *(_DWORD *)(v4 + 0x70) &= ~2u; /*0x985064*/
  return result; /*0x985068*/
}
