void __usercall memchr_::str_misaligned_0(unsigned int a1@<eax>, char *a2@<edx>, unsigned __int8 a3@<bl>)
{
  unsigned __int8 v3; // cl

  while ( 1 ) /*0x988fdb*/
  {
    v3 = *a2++; /*0x988fdb*/
    if ( a3 == v3 ) /*0x988fe0*/
    {
      memchr_::found(0, (int)a2); /*0x988fe2*/
      return; /*0x988fe2*/
    }
    if ( !--a1 ) /*0x988fe7*/
      break; /*0x988fe7*/
    if ( ((unsigned __int8)a2 & 3) == 0 ) /*0x988fef*/
    {
      memchr_::main_loop_start_0(a1); /*0x988ff0*/
      return; /*0x988ff0*/
    }
  }
  memchr_::retnull_0(); /*0x988fe7*/
}
