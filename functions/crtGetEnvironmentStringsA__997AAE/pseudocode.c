CHAR *__crtGetEnvironmentStringsA()
{
  int v0; // eax
  CHAR *v1; // ebx
  WCHAR_0 *EnvironmentStringsW; // esi
  WCHAR_0 *i; // eax
  int v5; // ebp
  CHAR *v6; // eax
  LPCH EnvironmentStrings; // eax
  CHAR *v8; // esi
  int v9; // ebp
  void *v10; // eax
  void *v11; // edi
  size_t v12; // [esp-4h] [ebp-1Ch]
  CHAR *Memory; // [esp+10h] [ebp-8h]
  int cchWideChar; // [esp+14h] [ebp-4h]

  v0 = dword_BAA758;
  v1 = 0;
  EnvironmentStringsW = 0;
  if ( !dword_BAA758 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW )
    {
      dword_BAA758 = 1;
      goto LABEL_8;
    }
    if ( GetLastError() == 0x78 )
    {
      v0 = 2;
      dword_BAA758 = 2;
    }
    else
    {
      v0 = dword_BAA758;
    }
  }
  if ( v0 == 1 )
  {
LABEL_8:
    if ( !EnvironmentStringsW )
    {
      EnvironmentStringsW = GetEnvironmentStringsW();
      if ( !EnvironmentStringsW )
        return 0;
    }
    for ( i = EnvironmentStringsW; *i; ++i )
    {
      do
        ++i;
      while ( *i );
    }
    cchWideChar = i - EnvironmentStringsW + 1;
    v5 = WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, 0, 0, 0, 0);
    if ( v5 )
    {
      v6 = (CHAR *)unknown_libname_72();
      Memory = v6;
      if ( v6 )
      {
        if ( !WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, v6, v5, 0, 0) )
        {
          free(Memory);
          Memory = 0;
        }
        v1 = Memory;
      }
    }
    FreeEnvironmentStringsW(EnvironmentStringsW);
    return v1;
  }
  if ( v0 != 2 && v0 )
    return 0;
  EnvironmentStrings = GetEnvironmentStrings();
  v8 = EnvironmentStrings;
  if ( !EnvironmentStrings )
    return 0;
  for ( ; *EnvironmentStrings; ++EnvironmentStrings )
  {
    do
      ++EnvironmentStrings;
    while ( *EnvironmentStrings );
  }
  v9 = EnvironmentStrings - v8 + 1;
  v10 = (void *)unknown_libname_72();
  v11 = v10;
  if ( !v10 )
  {
    FreeEnvironmentStringsA(v8);
    return 0;
  }
  LODWORD(v12) = v9;
  memcpy(v10, v8, v12);
  FreeEnvironmentStringsA(v8);
  return (CHAR *)v11;
}
