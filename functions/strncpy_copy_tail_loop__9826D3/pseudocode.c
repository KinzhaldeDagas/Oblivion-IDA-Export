int __usercall strncpy_::copy_tail_loop@<eax>(int a1@<ebx>, _BYTE *a2@<edi>, char *a3@<esi>, int a4, int a5)
{
  char v5; // al

  while ( 1 ) /*0x9826d3*/
  {
    v5 = *a3++; /*0x9826d3*/
    *a2++ = v5; /*0x9826d8*/
    if ( !v5 ) /*0x9826df*/
      break; /*0x9826df*/
    if ( !--a1 ) /*0x9826e4*/
      return strncpy_::fill_tail_end1(a4); /*0x9826e5*/
  }
  return strncpy_::fill_tail_zero_bytes(0, a1, a2, a4, a5);
}
