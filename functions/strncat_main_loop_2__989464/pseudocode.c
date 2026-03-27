int __usercall strncat_::main_loop_2@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        char a3@<bl>,
        _DWORD *a4@<edi>,
        int a5,
        int a6,
        int a7,
        int a8)
{
  *a4 = a1;
  if ( a2 == 1 )
    return strncat_::tail_loop_start_0(a3);
  else
    return strncat_::main_loop_entrance_0(a5, a6, a7, a8);
}
