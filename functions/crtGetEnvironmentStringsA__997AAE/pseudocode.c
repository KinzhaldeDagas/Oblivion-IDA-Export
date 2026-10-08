CHAR *__crtGetEnvironmentStringsA()
{
  int v0; // eax
  CHAR *v1; // ebx
  WCHAR_0 *EnvironmentStringsW; // esi
  WCHAR_0 *i; // eax
  int v5; // eax
  int v6; // ebp
  CHAR *v7; // eax
  LPCH EnvironmentStrings; // eax
  CHAR *v9; // esi
  int v10; // ebp
  void *v11; // eax
  void *v12; // edi
  CHAR *Memory; // [esp+10h] [ebp-8h]
  int cchWideChar; // [esp+14h] [ebp-4h]

  v0 = dword_BA9E10[0x252]; /*0x997ab0*/
  v1 = 0; /*0x997abf*/
  EnvironmentStringsW = 0; /*0x997ac1*/
  if ( !dword_BA9E10[0x252] ) /*0x997ac8*/
  {
    EnvironmentStringsW = GetEnvironmentStringsW(); /*0x997acc*/
    if ( EnvironmentStringsW ) /*0x997ad0*/
    {
      dword_BA9E10[0x252] = 1; /*0x997ad2*/
      goto LABEL_8; /*0x997adc*/
    }
    if ( GetLastError() == 0x78 ) /*0x997ae7*/
    {
      v0 = 2; /*0x997ae9*/
      dword_BA9E10[0x252] = 2; /*0x997aeb*/
    }
    else
    {
      v0 = dword_BA9E10[0x252]; /*0x997af2*/
    }
  }
  if ( v0 == 1 ) /*0x997afa*/
  {
LABEL_8:
    if ( !EnvironmentStringsW ) /*0x997b02*/
    {
      EnvironmentStringsW = GetEnvironmentStringsW(); /*0x997b06*/
      if ( !EnvironmentStringsW ) /*0x997b0a*/
        return 0; /*0x997b0a*/
    }
    for ( i = EnvironmentStringsW; *i; ++i ) /*0x997b13*/
    {
      do /*0x997b1c*/
        ++i; /*0x997b1a*/
      while ( *i ); /*0x997b1c*/
    }
    cchWideChar = i - EnvironmentStringsW + 1; /*0x997b3b*/
    v5 = WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, 0, 0, 0, 0); /*0x997b3f*/
    v6 = v5; /*0x997b41*/
    if ( v5 ) /*0x997b45*/
    {
      v7 = (CHAR *)unknown_libname_72(v5); /*0x997b48*/
      Memory = v7; /*0x997b50*/
      if ( v7 ) /*0x997b54*/
      {
        if ( !WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, v7, v6, 0, 0) ) /*0x997b61*/
        {
          free(Memory); /*0x997b6b*/
          Memory = 0; /*0x997b71*/
        }
        v1 = Memory; /*0x997b75*/
      }
    }
    FreeEnvironmentStringsW(EnvironmentStringsW); /*0x997b7a*/
    return v1; /*0x997b82*/
  }
  if ( v0 != 2 && v0 ) /*0x997b8a*/
    return 0; /*0x997b8a*/
  EnvironmentStrings = GetEnvironmentStrings(); /*0x997b8c*/
  v9 = EnvironmentStrings; /*0x997b92*/
  if ( !EnvironmentStrings ) /*0x997b96*/
    return 0; /*0x997b96*/
  for ( ; *EnvironmentStrings; ++EnvironmentStrings ) /*0x997b9c*/
  {
    do /*0x997ba1*/
      ++EnvironmentStrings; /*0x997ba0*/
    while ( *EnvironmentStrings ); /*0x997ba1*/
  }
  v10 = EnvironmentStrings - v9 + 1; /*0x997bad*/
  v11 = unknown_libname_72(v10); /*0x997bb0*/
  v12 = v11; /*0x997bb5*/
  if ( !v11 ) /*0x997bba*/
  {
    FreeEnvironmentStringsA(v9); /*0x997bbd*/
    return 0; /*0x997b0e*/
  }
  memcpy(v11, v9, v10); /*0x997bcb*/
  FreeEnvironmentStringsA(v9); /*0x997bd4*/
  return (CHAR *)v12; /*0x997bdc*/
}
