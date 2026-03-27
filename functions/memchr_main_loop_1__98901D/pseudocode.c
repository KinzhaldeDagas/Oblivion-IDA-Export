int __usercall memchr_::main_loop_1@<eax>(unsigned int a1@<eax>)
{
  if ( a1 < 4 )
    return memchr_::return_from_main();
  else
    return memchr_::main_loop_entry();
}
