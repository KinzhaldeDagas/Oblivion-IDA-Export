int __usercall strncpy_::fill_tail@<eax>(char a1@<al>, char a2@<bl>, _BYTE *a3@<edi>, int a4, int a5, int a6, int a7)
{
  if ( (a2 & 3) != 0 )
    return strncpy_::finish_loop(a1, a3);
  else
    return strncpy_::fill_tail_end(a4, a5, a6, a7);
}
