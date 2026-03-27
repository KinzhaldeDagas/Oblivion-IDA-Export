char *__usercall strncpy_::src_misaligned@<eax>(
        unsigned int a1@<ecx>,
        _BYTE *a2@<edi>,
        char *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  char v7; // al
  unsigned int v8; // ecx

  do
  {
    v7 = *a3++;
    *a2++ = v7;
    if ( !--a1 )
      return (char *)strncpy_::fill_tail_end1(a4, a5, a6, a7);
    if ( !v7 )
      return (char *)strncpy_::align_dest();
  }
  while ( ((unsigned __int8)a3 & 3) != 0 );
  v8 = a1 >> 2;
  if ( v8 )
    return strncpy_::main_loop_entrance(v8);
  else
    return (char *)strncpy_::tail_loop_start();
}
