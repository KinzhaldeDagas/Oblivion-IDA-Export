int __cdecl unknown_libname_196(int a1, LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData, UINT CodePage)
{
  int v6; // eax
  int LocaleInfoA; // eax
  int v8; // ebx
  int v9; // eax
  CHAR *v10; // esi
  CHAR *v11; // eax
  int v12; // eax
  size_t v14; // [esp-4h] [ebp-18h] BYREF
  int v15; // [esp+8h] [ebp-Ch] BYREF
  int v16; // [esp+Ch] [ebp-8h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v6 = dword_BA9E10[0x259]; /*0x99cd40*/
  if ( !dword_BA9E10[0x259] ) /*0x99cd52*/
  {
    if ( GetLocaleInfoW(0, 1u, 0, 0) ) /*0x99cd5b*/
    {
      dword_BA9E10[0x259] = 1; /*0x99cd61*/
LABEL_8:
      GetLocaleInfoW(Locale, LCType, lpLCData, cchData); /*0x99cd88*/
      goto LABEL_30; /*0x99cd96*/
    }
    if ( GetLastError() == 0x78 ) /*0x99cd72*/
    {
      v6 = 2; /*0x99cd76*/
      dword_BA9E10[0x259] = 2; /*0x99cd77*/
    }
    else
    {
      v6 = dword_BA9E10[0x259]; /*0x99cd7e*/
    }
  }
  if ( v6 == 1 ) /*0x99cd86*/
    goto LABEL_8; /*0x99cd86*/
  if ( v6 != 2 && v6 ) /*0x99cda2*/
    goto LABEL_30; /*0x99cda2*/
  v16 = 0; /*0x99cda7*/
  if ( !CodePage ) /*0x99cdaa*/
    CodePage = *(_DWORD *)(*(_DWORD *)a1 + 4); /*0x99cdb4*/
  LocaleInfoA = GetLocaleInfoA(Locale, LCType, 0, 0); /*0x99cdc5*/
  v8 = LocaleInfoA; /*0x99cdc7*/
  if ( !LocaleInfoA ) /*0x99cdcb*/
    goto LABEL_30; /*0x99cdcb*/
  if ( LocaleInfoA > 0 && 0xFFFFFFE0 / LocaleInfoA ) /*0x99cddb*/
  {
    v9 = LocaleInfoA + 8; /*0x99cde2*/
    if ( (unsigned int)(v8 + 8) > 0x400 ) /*0x99cdea*/
    {
      LODWORD(v14) = v8 + 8; /*0x99ce02*/
      v11 = (CHAR *)malloc(v14); /*0x99ce03*/
      if ( v11 ) /*0x99ce0b*/
      {
        *(_DWORD *)v11 = 0xDDDD; /*0x99ce0d*/
        v11 += 8; /*0x99ce13*/
      }
      v10 = v11; /*0x99ce16*/
    }
    else
    {
      _alloca_(v9); /*0x99cdec*/
      if ( &v14 == (size_t *)0xFFFFFFFC ) /*0x99cdf5*/
        goto LABEL_30; /*0x99cdf5*/
      HIDWORD(v14) = 0xCCCC; /*0x99cdf7*/
      v10 = (CHAR *)&v15; /*0x99cdfd*/
    }
  }
  else
  {
    v10 = 0; /*0x99ce1a*/
  }
  if ( !v10 ) /*0x99ce1e*/
LABEL_30:
    JUMPOUT(0x99CE5A); /*0x99ce5a*/
  if ( !GetLocaleInfoA(Locale, LCType, v10, v8) ) /*0x99ce28*/
    return unknown_libname_196_::unknown_libname_197((int)&savedregs); /*0x99ce2c*/
  if ( cchData ) /*0x99ce33*/
    v12 = MultiByteToWideChar(CodePage, 1u, v10, 0xFFFFFFFF, lpLCData, cchData); /*0x99ce47*/
  else
    v12 = MultiByteToWideChar(CodePage, 1u, v10, 0xFFFFFFFF, 0, 0); /*0x99ce37*/
  v16 = v12; /*0x99ce4d*/
  return unknown_libname_196_::unknown_libname_197((int)&savedregs);
}
