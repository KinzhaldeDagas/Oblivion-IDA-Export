int __cdecl __crtLCMapStringA(
        struct localeinfo_struct *a1,
        LCID Locale,
        DWORD dwMapFlags,
        _BYTE *a4,
        int cchSrc,
        int a6,
        int a7,
        UINT a8)
{
  int result; // eax
  _BYTE v9[8]; // [esp+0h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-8h]
  char v11; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, a1);
  result = unknown_libname_67(Locale, dwMapFlags, a4, cchSrc, a6, a7, a8);
  if ( v11 )
    *(_DWORD *)(v10 + 0x70) &= ~2u;
  return result;
}
