int __cdecl unknown_libname_198(
        int a1,
        LCID Locale,
        LCTYPE LCType,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        UINT CodePage)
{
  int v6; // eax
  int LocaleInfoW; // eax
  WCHAR_0 *v8; // edi
  WCHAR_0 *v9; // eax
  size_t v11; // [esp-4h] [ebp-18h] BYREF
  int v12; // [esp+8h] [ebp-Ch] BYREF
  int cchData; // [esp+Ch] [ebp-8h]

  v6 = dword_BAA778;
  if ( !dword_BAA778 )
  {
    if ( GetLocaleInfoW(0, 1u, 0, 0) )
    {
      dword_BAA778 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 0x78 )
    {
      v6 = 2;
      dword_BAA778 = 2;
    }
    else
    {
      v6 = dword_BAA778;
    }
  }
  if ( v6 == 2 || !v6 )
    JUMPOUT(0x99CFC0);
  if ( v6 != 1 )
    goto LABEL_31;
LABEL_10:
  if ( !CodePage )
    CodePage = *(_DWORD *)(*(_DWORD *)a1 + 4);
  LocaleInfoW = GetLocaleInfoW(Locale, LCType, 0, 0);
  cchData = LocaleInfoW;
  if ( !LocaleInfoW )
    goto LABEL_31;
  if ( LocaleInfoW <= 0 || 0xFFFFFFE0 / LocaleInfoW < 2 )
  {
    v8 = 0;
  }
  else if ( (unsigned int)(2 * LocaleInfoW + 8) > 0x400 )
  {
    LODWORD(v11) = 2 * LocaleInfoW + 8;
    v9 = (WCHAR_0 *)malloc(v11);
    if ( v9 )
    {
      *(_DWORD *)v9 = 0xDDDD;
      v9 += 4;
    }
    v8 = v9;
  }
  else
  {
    _alloca_(SHIDWORD(v11));
    if ( &v11 == (size_t *)0xFFFFFFFC )
      goto LABEL_31;
    HIDWORD(v11) = 0xCCCC;
    v8 = (WCHAR_0 *)&v12;
  }
  if ( !v8 )
LABEL_31:
    JUMPOUT(0x99CFD2);
  if ( GetLocaleInfoW(Locale, LCType, v8, cchData) )
  {
    LODWORD(v11) = 0;
    if ( cbMultiByte )
      WideCharToMultiByte(CodePage, 0, v8, 0xFFFFFFFF, lpMultiByteStr, cbMultiByte, 0, (LPBOOL)v11);
    else
      WideCharToMultiByte(CodePage, 0, v8, 0xFFFFFFFF, 0, 0, 0, (LPBOOL)v11);
  }
  return unknown_libname_198_::unknown_libname_199(a1, Locale, LCType, lpMultiByteStr, cbMultiByte, CodePage);
}
