int __usercall memchr_::str_misaligned_0@<eax>(int a1@<eax>, char *a2@<edx>, char a3@<bl>)
{
  char v3; // cl

  while ( 1 )
  {
    v3 = *a2++;
    if ( a3 == v3 )
      return memchr_::found();
    if ( !--a1 )
      break;
    if ( ((unsigned __int8)a2 & 3) == 0 )
      return memchr_::main_loop_start_0();
  }
  return memchr_::retnull_0();
}
