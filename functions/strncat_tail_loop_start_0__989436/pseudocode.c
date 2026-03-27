int __usercall strncat_::tail_loop_start_0@<eax>(char a1@<bl>)
{
  if ( (a1 & 3) != 0 )
    return strncat_::tail_loop_0();
  else
    return strncat_::empty_counter();
}
