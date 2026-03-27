int __usercall strncpy_::tail_loop_start@<eax>(char a1@<bl>, int a2, int a3, int a4, int a5)
{
  if ( (a1 & 3) != 0 )
    return strncpy_::copy_tail_loop();
  else
    return strncpy_::fill_tail_end1(a2, a3, a4, a5);
}
