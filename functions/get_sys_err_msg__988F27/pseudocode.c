char *__cdecl _get_sys_err_msg(int a1)
{
  int v1; // esi

  v1 = a1;
  if ( a1 < 0 || a1 >= *(_DWORD *)sub_99987A() )
    v1 = *(_DWORD *)sub_99987A();
  return sub_999880()[v1];
}
