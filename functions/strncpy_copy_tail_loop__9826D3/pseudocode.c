int __usercall strncpy_::copy_tail_loop@<eax>(
        int a1@<ebx>,
        _BYTE *a2@<edi>,
        char *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  char v7; // al

  while ( 1 )
  {
    v7 = *a3++;
    *a2++ = v7;
    if ( !v7 )
      break;
    if ( !--a1 )
      return strncpy_::fill_tail_end1(a4, a5, a6, a7);
  }
  return strncpy_::fill_tail_zero_bytes();
}
