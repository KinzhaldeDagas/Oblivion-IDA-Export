int __usercall strncpy_::finish_loop@<eax>(char a1@<al>, _BYTE *a2@<edi>, int a3@<ebx>, int a4, int a5)
{
  *a2 = a1; /*0x982713*/
  return strncpy_::fill_tail_zero_bytes(a1, a3, a2 + 1, a4, a5);
}
