int __usercall memchr_::tail_less_then_4@<eax>(int a1@<eax>)
{
  if ( a1 == 0xFFFFFFFC )
    return memchr_::retnull_0();
  else
    return memchr_::tail_loop();
}
