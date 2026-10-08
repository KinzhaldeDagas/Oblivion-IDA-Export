char *__usercall strncpy_::src_misaligned@<eax>(
        unsigned int a1@<ecx>,
        int *a2@<edi>,
        char *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  char v7; // al
  char v8; // bl
  void *v9; // ecx

  do /*0x9826c5*/
  {
    v7 = *a3++; /*0x9826ac*/
    *(_BYTE *)a2 = v7; /*0x9826b1*/
    a2 = (int *)((char *)a2 + 1); /*0x9826b3*/
    if ( !--a1 ) /*0x9826b9*/
      return (char *)strncpy_::fill_tail_end1(a4); /*0x9826b9*/
    if ( !v7 ) /*0x9826bd*/
      return (char *)strncpy_::align_dest(a2, 0, a1, a4, a5, a6, a7); /*0x9826bd*/
  }
  while ( ((unsigned __int8)a3 & 3) != 0 ); /*0x9826c5*/
  v8 = a1; /*0x9826c7*/
  v9 = (void *)(a1 >> 2); /*0x9826c9*/
  if ( v9 ) /*0x9826cc*/
    return strncpy_::main_loop_entrance(v9, v8, a2, (int *)a3, a4, a5, a6, a7); /*0x9826cc*/
  else
    return (char *)strncpy_::tail_loop_start(v8, a2, a3, a4, a5, a6, a7); /*0x9826cd*/
}
