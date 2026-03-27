int __cdecl __crtCompareStringA(
        struct localeinfo_struct *a1,
        LCID a2,
        DWORD a3,
        const CHAR *a4,
        int a5,
        const CHAR *a6,
        int a7,
        UINT a8)
{
  int result; // eax
  _BYTE v9[8]; // [esp+0h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-8h]
  char v11; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, a1);
  result = unknown_libname_201((int)v9, a4, a2, a3, a5, a6, a7, a8);
  if ( v11 )
    *(_DWORD *)(v10 + 0x70) &= ~2u;
  return result;
}
