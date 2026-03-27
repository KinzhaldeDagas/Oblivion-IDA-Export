int __cdecl unknown_libname_196(int a1, LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData, UINT CodePage)
{
  int v6; // eax
  int LocaleInfoA; // eax
  int v8; // ebx
  CHAR *v9; // esi
  CHAR *v10; // eax
  size_t v12; // [esp-4h] [ebp-18h] BYREF
  _DWORD v13[2]; // [esp+8h] [ebp-Ch] BYREF

  v6 = dword_BAA774;
  if ( !dword_BAA774 )
  {
    if ( GetLocaleInfoW(0, 1u, 0, 0) )
    {
      dword_BAA774 = 1;
LABEL_8:
      GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
      goto LABEL_29;
    }
    if ( GetLastError() == 0x78 )
    {
      v6 = 2;
      dword_BAA774 = 2;
    }
    else
    {
      v6 = dword_BAA774;
    }
  }
  if ( v6 == 1 )
    goto LABEL_8;
  if ( v6 != 2 && v6 )
    goto LABEL_29;
  v13[1] = 0;
  if ( !CodePage )
    CodePage = *(_DWORD *)(*(_DWORD *)a1 + 4);
  LocaleInfoA = GetLocaleInfoA(Locale, LCType, 0, 0);
  v8 = LocaleInfoA;
  if ( !LocaleInfoA )
    goto LABEL_29;
  if ( LocaleInfoA > 0 && 0xFFFFFFE0 / LocaleInfoA )
  {
    if ( (unsigned int)(LocaleInfoA + 8) > 0x400 )
    {
      LODWORD(v12) = LocaleInfoA + 8;
      v10 = (CHAR *)malloc(v12);
      if ( v10 )
      {
        *(_DWORD *)v10 = 0xDDDD;
        v10 += 8;
      }
      v9 = v10;
    }
    else
    {
      _alloca_(SHIDWORD(v12));
      if ( &v12 == (size_t *)0xFFFFFFFC )
        goto LABEL_29;
      HIDWORD(v12) = 0xCCCC;
      v9 = (CHAR *)v13;
    }
  }
  else
  {
    v9 = 0;
  }
  if ( !v9 )
LABEL_29:
    JUMPOUT(0x99CE5A);
  if ( GetLocaleInfoA(Locale, LCType, v9, v8) )
  {
    if ( cchData )
      MultiByteToWideChar(CodePage, 1u, v9, 0xFFFFFFFF, lpLCData, cchData);
    else
      MultiByteToWideChar(CodePage, 1u, v9, 0xFFFFFFFF, 0, 0);
  }
  return unknown_libname_196_::unknown_libname_197(a1, Locale, LCType, lpLCData, cchData, CodePage);
}
