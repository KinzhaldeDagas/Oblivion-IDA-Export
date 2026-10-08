int __usercall strncat_::tail_loop_0@<eax>(int a1@<ecx>, _BYTE *a2@<edi>, char *a3@<esi>, int a4, int a5)
{
  char v5; // dl

  while ( 1 ) /*0x98943d*/
  {
    v5 = *a3++; /*0x98943d*/
    *a2++ = v5; /*0x989442*/
    if ( !v5 ) /*0x989449*/
      break; /*0x989449*/
    if ( !--a1 ) /*0x98944e*/
      return strncat_::empty_counter(0, a2); /*0x98944f*/
  }
  return strncat_::finish1(a4, a5);
}
