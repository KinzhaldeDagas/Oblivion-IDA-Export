void __usercall memchr_::tail_less_then_4(int a1@<eax>, char *a2@<edx>, char a3@<bl>)
{
  int v3; // eax

  v3 = a1 + 4; /*0x989008*/
  if ( v3 ) /*0x98900b*/
    memchr_::tail_loop(v3, a2, a3); /*0x98900c*/
  else
    memchr_::retnull_0(); /*0x98900b*/
}
