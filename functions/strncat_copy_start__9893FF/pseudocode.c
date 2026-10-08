int __usercall strncat_::copy_start@<eax>(
        unsigned int a1@<ecx>,
        _BYTE *a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        char *a7)
{
  char v7; // bl
  unsigned int v8; // ecx

  if ( ((unsigned __int8)a7 & 3) != 0 ) /*0x989409*/
    return strncat_::back_misaligned(a1, a2, a7, a3, a4, a5, a6); /*0x989409*/
  v7 = a1; /*0x98940b*/
  v8 = a1 >> 2; /*0x98940d*/
  if ( v8 ) /*0x989410*/
    return strncat_::main_loop_entrance_0(v8, v7, (int)a2, (int *)a7, a3, a4, a5, a6); /*0x989410*/
  else
    return strncat_::tail_loop_start_0(v7, a2, a7); /*0x989412*/
}
