char *__cdecl _get_sys_err_msg(int a1)
{
  int v1; // esi

  v1 = a1; /*0x988f28*/
  if ( a1 < 0 || a1 >= *(_DWORD *)sub_99987A() ) /*0x988f37*/
    v1 = *(_DWORD *)sub_99987A(); /*0x988f3e*/
  return sub_999880()[v1]; /*0x988f48*/
}
