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
  unsigned int v13; // eax
  WCHAR_0 *v14; // eax
  int v15; // eax
  CHAR *v17; // esi
  UINT v18; // eax
  CHAR *v19; // eax
  BOOL StringTypeA; // edi
  size_t v21[2]; // [esp-4h] [ebp-18h] BYREF
  WORD CharType[2]; // [esp+Ch] [ebp-8h] BYREF

  v8 = dword_BA9E10[0x253]; /*0x999c10*/
  v9 = 0; /*0x999c17*/
  v10 = v7; /*0x999c1c*/
  if ( !dword_BA9E10[0x253] ) /*0x999c1e*/
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, CharType) ) /*0x999c2e*/
    {
      dword_BA9E10[0x253] = 1; /*0x999c38*/
      goto LABEL_10; /*0x999c3e*/
    }
    if ( GetLastError() == 0x78 ) /*0x999c49*/
    {
      v8 = 2; /*0x999c4d*/
      dword_BA9E10[0x253] = 2; /*0x999c4e*/
    }
    else
    {
      v8 = dword_BA9E10[0x253]; /*0x999c55*/
    }
  }
  if ( v8 != 2 && v8 ) /*0x999c65*/
  {
    if ( v8 != 1 ) /*0x999c6e*/
      return 0; /*0x999c6e*/
LABEL_10:
    *(_DWORD *)CharType = 0; /*0x999c74*/
    if ( !CodePage ) /*0x999c7a*/
      CodePage = *(_DWORD *)(*(_DWORD *)v10 + 4); /*0x999c81*/
    v11 = MultiByteToWideChar(CodePage, 8 * (a7 != 0) + 1, lpMultiByteStr, (int)cbMultiByte, 0, 0); /*0x999ca5*/
    v12 = v11; /*0x999ca7*/
    if ( !v11 ) /*0x999cab*/
      return 0; /*0x999cab*/
    if ( v11 <= 0 || (unsigned int)v11 > 0x7FFFFFF0 ) /*0x999cb9*/
      goto LABEL_22; /*0x999cb9*/
    v13 = 2 * v11 + 8; /*0x999cbb*/
    if ( v13 > 0x400 ) /*0x999cc4*/
    {
      LODWORD(v21[0]) = 2 * v12 + 8; /*0x999cd9*/
      v14 = (WCHAR_0 *)malloc(v21[0]); /*0x999cda*/
      if ( v14 ) /*0x999ce2*/
      {
        *(_DWORD *)v14 = 0xDDDD; /*0x999ce4*/
        goto LABEL_20; /*0x999ce4*/
      }
    }
    else
    {
      _alloca_(v13); /*0x999cc6*/
      v14 = (WCHAR_0 *)v21 + 2; /*0x999ccb*/
      if ( v21 != (size_t *)0xFFFFFFFC ) /*0x999ccf*/
      {
        HIDWORD(v21[0]) = 0xCCCC; /*0x999cd1*/
LABEL_20:
        v14 += 4; /*0x999cea*/
      }
    }
    v9 = v14; /*0x999ced*/
LABEL_22:
    if ( v9 ) /*0x999cf1*/
    {
      _memset((int)v9, 0, 2 * v12); /*0x999cfa*/
      v15 = MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, (int)cbMultiByte, v9, v12); /*0x999d0f*/
      if ( v15 ) /*0x999d13*/
        *(_DWORD *)CharType = GetStringTypeW(dwInfoType, v9, v15, lpCharType); /*0x999d23*/
      _freea(v9); /*0x999d27*/
      return *(_DWORD *)CharType; /*0x999d30*/
    }
    return 0; /*0x999d5e*/
  }
  v17 = 0; /*0x999d32*/
  if ( !Locale ) /*0x999d37*/
    Locale = *(_DWORD *)(*(_DWORD *)v10 + 0x14); /*0x999d3e*/
  if ( !CodePage ) /*0x999d44*/
    CodePage = *(_DWORD *)(*(_DWORD *)v10 + 4); /*0x999d4b*/
  v18 = __ansicp(Locale); /*0x999d51*/
  if ( v18 == 0xFFFFFFFF ) /*0x999d5a*/
    return 0; /*0x999d5a*/
  if ( v18 != CodePage ) /*0x999d63*/
  {
    v19 = (CHAR *)__convertcp(CodePage, v18, lpMultiByteStr, (int *)&cbMultiByte, 0, 0); /*0x999d72*/
    v17 = v19; /*0x999d77*/
    if ( !v19 ) /*0x999d7e*/
      return 0; /*0x999d7e*/
    lpMultiByteStr = v19; /*0x999d80*/
  }
  StringTypeA = GetStringTypeA(Locale, dwInfoType, lpMultiByteStr, (int)cbMultiByte, lpCharType); /*0x999d9a*/
  if ( v17 ) /*0x999d9c*/
    free(v17); /*0x999d9f*/
  return StringTypeA; /*0x999daa*/
}
