char *__usercall strncpy_::main_loop@<eax>(
        char a1@<bl>,
        int edx0@<edx>,
        int ecx0@<ecx>,
        _DWORD *edi0@<edi>,
        int a2,
        int a3,
        int a4,
        int a5)
{
  int v8; // ecx

  *edi0 = edx0;
  v8 = ecx0 - 1;
  if ( v8 )
    return strncpy_::main_loop_entrance(v8);
  else
    return (char *)strncpy_::tail_loop_start(a1, a2, a3, a4, a5);
}
