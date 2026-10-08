int __cdecl sub_99CE6C(
        struct localeinfo_struct *a1,
        LCID Locale,
        LCTYPE LCType,
        LPWSTR lpLCData,
        int cchData,
        UINT CodePage)
{
  int result; // eax
  int v7[2]; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-8h]
  char v9; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a1); /*0x99ce78*/
  result = unknown_libname_196((int)v7, Locale, LCType, lpLCData, cchData, CodePage); /*0x99ce90*/
  if ( v9 ) /*0x99ce9c*/
    *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x99cea1*/
  return result; /*0x99cea5*/
}
