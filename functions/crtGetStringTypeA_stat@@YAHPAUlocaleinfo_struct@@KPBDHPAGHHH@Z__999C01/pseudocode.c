int __cdecl __crtGetStringTypeA_stat(
        DWORD dwInfoType,
        CHAR *lpMultiByteStr,
        const char *cbMultiByte,
        LPWORD lpCharType,
        UINT CodePage,
        LCID Locale,
        int a7)
{
  int v7; // ecx
  int v8; // eax
  WCHAR_0 *v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // edi
  WCHAR_0 *v13; // eax
  int v14; // eax
  CHAR *v16; // esi
  UINT v17; // eax
  const CHAR *v18; // eax
  BOOL StringTypeA; // edi
  size_t v20[2]; // [esp-4h] [ebp-18h] BYREF
  WORD CharType[2]; // [esp+Ch] [ebp-8h] BYREF

  v8 = dword_BAA75C;
  v9 = 0;
  v10 = v7;
  if ( !dword_BAA75C )
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, CharType) )
    {
      dword_BAA75C = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 0x78 )
    {
      v8 = 2;
      dword_BAA75C = 2;
    }
    else
    {
      v8 = dword_BAA75C;
    }
  }
  if ( v8 != 2 && v8 )
  {
    if ( v8 != 1 )
      return 0;
LABEL_10:
    *(_DWORD *)CharType = 0;
    if ( !CodePage )
      CodePage = *(_DWORD *)(*(_DWORD *)v10 + 4);
    v11 = MultiByteToWideChar(CodePage, 8 * (a7 != 0) + 1, lpMultiByteStr, (int)cbMultiByte, 0, 0);
    v12 = v11;
    if ( !v11 )
      return 0;
    if ( v11 <= 0 || (unsigned int)v11 > 0x7FFFFFF0 )
      goto LABEL_22;
    if ( (unsigned int)(2 * v11 + 8) > 0x400 )
    {
      LODWORD(v20[0]) = 2 * v11 + 8;
      v13 = (WCHAR_0 *)malloc(v20[0]);
      if ( v13 )
      {
        *(_DWORD *)v13 = 0xDDDD;
        goto LABEL_20;
      }
    }
    else
    {
      _alloca_(SHIDWORD(v20[0]));
      v13 = (WCHAR_0 *)v20 + 2;
      if ( v20 != (size_t *)0xFFFFFFFC )
      {
        HIDWORD(v20[0]) = 0xCCCC;
LABEL_20:
        v13 += 4;
      }
    }
    v9 = v13;
LABEL_22:
    if ( v9 )
    {
      _memset((int)v9, 0, 2 * v12);
      v14 = MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, (int)cbMultiByte, v9, v12);
      if ( v14 )
        *(_DWORD *)CharType = GetStringTypeW(dwInfoType, v9, v14, lpCharType);
      _freea(v9);
      return *(_DWORD *)CharType;
    }
    return 0;
  }
  v16 = 0;
  if ( !Locale )
    Locale = *(_DWORD *)(*(_DWORD *)v10 + 0x14);
  if ( !CodePage )
    CodePage = *(_DWORD *)(*(_DWORD *)v10 + 4);
  v17 = __ansicp(Locale);
  if ( v17 == 0xFFFFFFFF )
    return 0;
  if ( v17 != CodePage )
  {
    v18 = (const CHAR *)__convertcp(CodePage, v17, lpMultiByteStr, (int *)&cbMultiByte, 0, 0);
    v16 = (CHAR *)v18;
    if ( !v18 )
      return 0;
    lpMultiByteStr = (CHAR *)v18;
  }
  StringTypeA = GetStringTypeA(Locale, dwInfoType, lpMultiByteStr, (int)cbMultiByte, lpCharType);
  if ( v16 )
    free(v16);
  return StringTypeA;
}
