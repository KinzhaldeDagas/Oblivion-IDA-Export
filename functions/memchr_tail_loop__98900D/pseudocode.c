int __usercall memchr_::tail_loop@<eax>(int a1@<eax>, char *a2@<edx>, char a3@<bl>)
{
  char v3; // cl

  while ( 1 )
  {
    v3 = *a2++;
    if ( a3 == v3 )
      break;
    if ( !--a1 )
      return memchr_::retnull_0();
  }
  return memchr_::found();
}
