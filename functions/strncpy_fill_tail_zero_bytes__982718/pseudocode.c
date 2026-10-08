// positive sp value has been detected, the output may be wrong!
int __usercall strncpy_::fill_tail_zero_bytes@<eax>(char a1@<al>, int a2@<ebx>, _BYTE *a3@<edi>, int a4, int a5)
{
  int v5; // ebx

  v5 = a2 - 1; /*0x982718*/
  if ( v5 ) /*0x98271b*/
    return strncpy_::finish_loop(a1, a3, v5, a4, a5); /*0x98271b*/
  else
    return strncpy_::finish(a4); /*0x98271e*/
}
