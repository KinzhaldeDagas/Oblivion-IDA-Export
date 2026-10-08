int __usercall strchr_::str_misaligned@<eax>(int a1@<edx>, char a2@<bl>)
{
  char v2; // cl

  while ( 1 ) /*0x982ed8*/
  {
    v2 = *(_BYTE *)a1++; /*0x982ed8*/
    if ( v2 == a2 ) /*0x982edf*/
      return strchr_::found_bx(v2, a1); /*0x982edf*/
    if ( !v2 ) /*0x982ee3*/
      break; /*0x982ee3*/
    if ( (a1 & 3) == 0 ) /*0x982eeb*/
      return strchr_::main_loop_start(); /*0x982eec*/
  }
  return strchr_::retnull_bx();
}
