int __cdecl _isleadbyte_l(int C, _locale_t Locale)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale); /*0x9933bd*/
  result = *(_WORD *)(*(_DWORD *)(v3 + 0xC8) + 2 * (unsigned __int8)C) & 0x8000; /*0x9933d3*/
  if ( v5 ) /*0x9933dc*/
    *(_DWORD *)(v4 + 0x70) &= ~2u; /*0x9933e1*/
  return result; /*0x9933e5*/
}
