unsigned int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  UInt32 v5; // ebp
  char *v6; // eax
  errno_t v7; // eax
  int v8; // edx
  int v9; // ecx

  if ( !dword_BABC14 )
    __initmbctable();
  v0 = dword_BA9DF8;
  v1 = 0;
  if ( !dword_BA9DF8 )
    return 0xFFFFFFFF;
  while ( *v0 )
  {
    if ( *v0 != 0x3D )
      ++v1;
    v0 += strlen(v0) + 1;
  }
  v3 = (char **)unknown_libname_74();
  dword_BA9DB4 = v3;
  if ( !v3 )
    return 0xFFFFFFFF;
  for ( i = dword_BA9DF8; ; i += v5 )
  {
    if ( !*i )
    {
      free(dword_BA9DF8);
      dword_BA9DF8 = 0;
      *v3 = 0;
      dword_BABC08 = 1;
      return 0;
    }
    v5 = strlen(i) + 1;
    if ( *i != 0x3D )
      break;
LABEL_16:
    ;
  }
  v6 = (char *)unknown_libname_74();
  *v3 = v6;
  if ( v6 )
  {
    v7 = strcpy_s(v6, v5, i);
    if ( v7 )
      _invoke_watson(v7, v8, v9, 0, (int)v3, (int)i);
    ++v3;
    goto LABEL_16;
  }
  free(dword_BA9DB4);
  dword_BA9DB4 = 0;
  return 0xFFFFFFFF;
}
