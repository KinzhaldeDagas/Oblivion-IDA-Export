int __cdecl sub_99CFE4(
        struct localeinfo_struct *a1,
        LCID Locale,
        LCTYPE LCType,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        UINT CodePage)
{
  int result; // eax
  int v7[2]; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-8h]
  char v9; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a1); /*0x99cff0*/
  result = unknown_libname_198((int)v7, Locale, LCType, lpMultiByteStr, cbMultiByte, CodePage); /*0x99d008*/
  if ( v9 ) /*0x99d014*/
    *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x99d019*/
  return result; /*0x99d01d*/
}
