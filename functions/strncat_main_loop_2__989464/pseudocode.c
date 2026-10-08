int __usercall strncat_::main_loop_2@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        char a3@<bl>,
        _DWORD *a4@<edi>,
        int *a5@<esi>,
        int a6,
        int a7,
        int a8,
        int a9)
{
  _BYTE *v9; // edi
  int v10; // ecx

  *a4 = a1; /*0x989464*/
  v9 = a4 + 1; /*0x989466*/
  v10 = a2 - 1; /*0x989469*/
  if ( v10 ) /*0x98946c*/
    return strncat_::main_loop_entrance_0(v10, a3, (int)v9, a5, a6, a7, a8, a9); /*0x98946d*/
  else
    return strncat_::tail_loop_start_0(a3, v9, (char *)a5); /*0x98946c*/
}
