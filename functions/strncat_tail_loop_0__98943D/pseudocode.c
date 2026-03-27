int __usercall strncat_::tail_loop_0@<eax>(int a1@<ecx>, _BYTE *a2@<edi>, char *a3@<esi>)
{
  char v3; // dl

  while ( 1 )
  {
    v3 = *a3++;
    *a2++ = v3;
    if ( !v3 )
      break;
    if ( !--a1 )
      return strncat_::empty_counter();
  }
  return strncat_::finish1();
}
