int __cdecl __crtLCMapStringA(
        struct localeinfo_struct *a1,
        LCID Locale,
        DWORD dwMapFlags,
        char *a4,
        int cchSrc,
        CHAR *a6,
        int a7,
        UINT a8)
{
  int result; // eax
  _BYTE v9[8]; // [esp+0h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-8h]
  char v11; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, a1); /*0x9899a1*/
  result = unknown_libname_67(Locale, dwMapFlags, a4, cchSrc, a6, a7, a8); /*0x9899c1*/
  if ( v11 ) /*0x9899cd*/
    *(_DWORD *)(v10 + 0x70) &= ~2u; /*0x9899d2*/
  return result; /*0x9899d6*/
}
