int __usercall strncpy_::finish_loop@<eax>(char a1@<al>, _BYTE *a2@<edi>)
{
  *a2 = a1;
  return strncpy_::fill_tail_zero_bytes();
}
