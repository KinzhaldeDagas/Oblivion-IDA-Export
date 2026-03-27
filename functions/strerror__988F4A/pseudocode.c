char *__cdecl strerror(int Src)
{
  int v1; // eax
  int v2; // esi
  int v4; // eax
  char *v5; // esi
  char *sys_err_msg; // eax
  errno_t v7; // eax
  int v8; // edx
  int v9; // ecx

  v1 = _getptd_noexit();
  v2 = v1;
  if ( !v1 )
    return "Visual C++ CRT: Not enough memory to complete call to strerror.";
  if ( !*(_DWORD *)(v1 + 0x24) )
  {
    v4 = unknown_libname_74(0x86, 1);
    *(_DWORD *)(v2 + 0x24) = v4;
    if ( !v4 )
      return "Visual C++ CRT: Not enough memory to complete call to strerror.";
  }
  v5 = *(char **)(v2 + 0x24);
  sys_err_msg = _get_sys_err_msg(Src);
  v7 = strcpy_s(v5, 0x86u, sys_err_msg);
  if ( v7 )
    _invoke_watson(v7, v8, v9, 0, 0x86, (int)v5);
  return v5;
}
