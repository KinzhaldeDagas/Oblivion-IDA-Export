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
  int v8; // ecx
  unsigned int v9; // eax
  WCHAR_0 *v10; // edi
  WCHAR_0 *v11; // eax
  int v12; // eax
  size_t v14; // [esp-4h] [ebp-18h] BYREF
  int v15; // [esp+8h] [ebp-Ch] BYREF
  int cchData; // [esp+Ch] [ebp-8h]

  v6 = dword_BA9E10[0x25A]; /*0x99ceb6*/
  if ( !dword_BA9E10[0x25A] ) /*0x99cecb*/
  {
    if ( GetLocaleInfoW(0, 1u, 0, 0) ) /*0x99ced1*/
    {
      dword_BA9E10[0x25A] = 1; /*0x99ced7*/
      goto LABEL_10; /*0x99cedd*/
    }
    if ( GetLastError() == 0x78 ) /*0x99cee8*/
    {
      v6 = 2; /*0x99ceec*/
      dword_BA9E10[0x25A] = 2; /*0x99ceed*/
    }
    else
    {
      v6 = dword_BA9E10[0x25A]; /*0x99cef4*/
    }
  }
  if ( v6 == 2 || !v6 ) /*0x99cf04*/
    JUMPOUT(0x99CFC0); /*0x99cfc0*/
  if ( v6 != 1 ) /*0x99cf0c*/
    goto LABEL_31; /*0x99cf0c*/
LABEL_10:
  if ( !CodePage ) /*0x99cf11*/
    CodePage = *(_DWORD *)(*(_DWORD *)a1 + 4); /*0x99cf1b*/
  LocaleInfoW = GetLocaleInfoW(Locale, LCType, 0, 0); /*0x99cf26*/
  v8 = LocaleInfoW; /*0x99cf28*/
  cchData = LocaleInfoW; /*0x99cf2c*/
  if ( !LocaleInfoW ) /*0x99cf2f*/
    goto LABEL_31; /*0x99cf2f*/
  if ( LocaleInfoW <= 0 || 0xFFFFFFE0 / LocaleInfoW < 2 ) /*0x99cf44*/
  {
    v10 = 0; /*0x99cf7f*/
  }
  else
  {
    v9 = 2 * LocaleInfoW + 8; /*0x99cf46*/
    if ( v9 > 0x400 ) /*0x99cf4f*/
    {
      LODWORD(v14) = 2 * v8 + 8; /*0x99cf67*/
      v11 = (WCHAR_0 *)malloc(v14); /*0x99cf68*/
      if ( v11 ) /*0x99cf70*/
      {
        *(_DWORD *)v11 = 0xDDDD; /*0x99cf72*/
        v11 += 4; /*0x99cf78*/
      }
      v10 = v11; /*0x99cf7b*/
    }
    else
    {
      _alloca_(v9); /*0x99cf51*/
      if ( &v14 == (size_t *)0xFFFFFFFC ) /*0x99cf5a*/
        goto LABEL_31; /*0x99cf5a*/
      HIDWORD(v14) = 0xCCCC; /*0x99cf5c*/
      v10 = (WCHAR_0 *)&v15; /*0x99cf62*/
    }
  }
  if ( !v10 ) /*0x99cf83*/
LABEL_31:
    JUMPOUT(0x99CFD2); /*0x99cfd2*/
  if ( !GetLocaleInfoW(Locale, LCType, v10, cchData) ) /*0x99cf8f*/
    return unknown_libname_198_::unknown_libname_199(0); /*0x99cf93*/
  LODWORD(v14) = 0; /*0x99cf98*/
  if ( cbMultiByte ) /*0x99cf9a*/
    v12 = WideCharToMultiByte(CodePage, 0, v10, 0xFFFFFFFF, lpMultiByteStr, cbMultiByte, 0, (LPBOOL)v14); /*0x99cfad*/
  else
    v12 = WideCharToMultiByte(CodePage, 0, v10, 0xFFFFFFFF, 0, 0, 0, (LPBOOL)v14); /*0x99cf9e*/
  return unknown_libname_198_::unknown_libname_199(v12);
}
