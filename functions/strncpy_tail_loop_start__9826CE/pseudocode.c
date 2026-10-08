int __usercall strncpy_::tail_loop_start@<eax>(
        char a1@<bl>,
        _BYTE *a2@<edi>,
        char *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // ebx

  v7 = a1 & 3; /*0x9826ce*/
  if ( v7 ) /*0x9826d1*/
    return strncpy_::copy_tail_loop(v7, a2, a3, a4, a5, a6, a7); /*0x9826d2*/
  else
    return strncpy_::fill_tail_end1(a4); /*0x9826d1*/
}
