void __usercall memchr_::tail_loop(int a1@<eax>, char *a2@<edx>, unsigned __int8 a3@<bl>)
{
  unsigned __int8 v3; // cl

  while ( 1 ) /*0x98900d*/
  {
    v3 = *a2++; /*0x98900d*/
    if ( a3 == v3 ) /*0x989012*/
      break; /*0x989012*/
    if ( !--a1 ) /*0x989019*/
    {
      memchr_::retnull_0(); /*0x98901a*/
      return; /*0x98901a*/
    }
  }
  memchr_::found(0, (int)a2); /*0x989014*/
}
