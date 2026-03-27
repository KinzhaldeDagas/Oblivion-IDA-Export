int __cdecl _isdigit_l(int C, _locale_t Locale)
{
  int result; // eax
  struct localeinfo_struct v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale);
  if ( v3.locinfo->mb_cur_max <= 1 )
    result = v3.locinfo->pctype[C] & 4;
  else
    result = _isctype_l(C, 4, (_locale_t)&v3);
  if ( v5 )
    *(_DWORD *)(v4 + 0x70) &= ~2u;
  return result;
}
