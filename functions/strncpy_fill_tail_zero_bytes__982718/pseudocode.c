// positive sp value has been detected, the output may be wrong!
int __usercall strncpy_::fill_tail_zero_bytes@<eax>(char a1@<al>, int a2@<ebx>, _BYTE *a3@<edi>, int a4, int a5)
{
  if ( a2 == 1 )
    return strncpy_::finish(a4, a5);
  else
    return strncpy_::finish_loop(a1, a3);
}
