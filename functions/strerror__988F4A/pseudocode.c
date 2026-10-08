char *__cdecl strerror(int Src)
{
  DWORD *v1; // eax
  DWORD *v2; // esi
  int v4; // eax
  char *v5; // esi
  char *sys_err_msg; // eax
  errno_t v7; // eax
  int v8; // edx
  int v9; // ecx

  v1 = _getptd_noexit(); /*0x988f4c*/
  v2 = v1; /*0x988f51*/
  if ( !v1 )
    return "Visual C++ CRT: Not enough memory to complete call to strerror.";
  if ( !v1[9] )
  {
    v4 = unknown_libname_74(); /*0x988f6e*/
    v2[9] = v4; /*0x988f77*/
    if ( !v4 )
      return "Visual C++ CRT: Not enough memory to complete call to strerror.";
  }
  v5 = (char *)v2[9]; /*0x988f87*/
  sys_err_msg = _get_sys_err_msg(Src); /*0x988f8a*/
  v7 = strcpy_s(v5, 0x86u, sys_err_msg); /*0x988f92*/
  if ( v7 ) /*0x988f9c*/
    _invoke_watson(v7, v8, v9, 0, 0x86, (int)v5); /*0x988fa3*/
  return v5; /*0x988fae*/
}
