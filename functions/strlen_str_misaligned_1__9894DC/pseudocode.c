char *__cdecl strlen_::str_misaligned_1(int a1)
{
  _BYTE *v1; // ecx

  do /*0x9894eb*/
  {
    if ( !*v1++ ) /*0x9894dc*/
      JUMPOUT(0x989533); /*0x989533*/
  }
  while ( ((unsigned __int8)v1 & 3) != 0 ); /*0x9894eb*/
  return strlen_::main_loop_3(a1);
}
