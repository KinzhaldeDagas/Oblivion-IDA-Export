int __usercall strncat_::tail_loop_start_0@<eax>(char a1@<bl>, _BYTE *a2@<edi>, char *a3@<esi>)
{
  int v3; // ecx

  v3 = a1 & 3; /*0x989438*/
  if ( (a1 & 3) != 0 ) /*0x98943b*/
    return strncat_::tail_loop_0(v3, a2, a3); /*0x98943c*/
  else
    return strncat_::empty_counter(v3, a2); /*0x98943b*/
}
