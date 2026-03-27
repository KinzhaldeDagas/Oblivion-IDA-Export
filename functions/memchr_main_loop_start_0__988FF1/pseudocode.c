int __usercall memchr_::main_loop_start_0@<eax>(unsigned int a1@<eax>)
{
  if ( a1 < 4 )
    return memchr_::tail_less_then_4();
  else
    return memchr_::main_loop_entry();
}
