int __cdecl __crtGetStringTypeA(
        struct localeinfo_struct *a1,
        DWORD dwInfoType,
        CHAR *lpMultiByteStr,
        char *cbMultiByte,
        LPWORD lpCharType,
        UINT CodePage,
        LCID Locale,
        int a8)
{
  int result; // eax
  _BYTE v9[8]; // [esp+0h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-8h]
  char v11; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, a1); /*0x999dc5*/
  result = __crtGetStringTypeA_stat(dwInfoType, lpMultiByteStr, cbMultiByte, lpCharType, CodePage, Locale, a8); /*0x999de2*/
  if ( v11 ) /*0x999dee*/
    *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x999df3*/
  return result; /*0x999df7*/
}
