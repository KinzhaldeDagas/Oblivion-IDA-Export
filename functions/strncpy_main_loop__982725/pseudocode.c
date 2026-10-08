char *__usercall strncpy_::main_loop@<eax>(
        char a1@<bl>,
        int edx0@<edx>,
        int ecx0@<ecx>,
        _DWORD *edi0@<edi>,
        int *a5@<esi>,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int *v9; // edi
  int v10; // ecx

  *edi0 = edx0; /*0x982725*/
  v9 = edi0 + 1; /*0x982727*/
  v10 = ecx0 - 1; /*0x98272a*/
  if ( v10 ) /*0x98272d*/
    return strncpy_::main_loop_entrance(v10, a1, v9, a5, a6, a7, a8, a9); /*0x98272e*/
  else
    return (char *)strncpy_::tail_loop_start(a1, v9, (char *)a5, a6, a7, a8, a9); /*0x98272d*/
}
