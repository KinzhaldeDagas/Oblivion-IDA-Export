int __usercall strchr_::str_misaligned@<eax>(int a1@<edx>, char a2@<bl>)
{
  char v2; // cl

  while ( 1 )
  {
    v2 = *(_BYTE *)a1++;
    if ( v2 == a2 )
      return strchr_::found_bx(v2, a1);
    if ( !v2 )
      break;
    if ( (a1 & 3) == 0 )
      return strchr_::main_loop_start();
  }
  return strchr_::retnull_bx(0, a1);
}
