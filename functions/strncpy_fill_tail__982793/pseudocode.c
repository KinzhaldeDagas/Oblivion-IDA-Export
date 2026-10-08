int __usercall strncpy_::fill_tail@<eax>(char a1@<al>, char a2@<bl>, _BYTE *a3@<edi>, int a4, int a5)
{
  int v5; // ebx

  v5 = a2 & 3; /*0x982793*/
  if ( v5 ) /*0x982796*/
    return strncpy_::finish_loop(a1, a3, v5, a4, a5); /*0x982796*/
  else
    return strncpy_::fill_tail_end(a4); /*0x982797*/
}
