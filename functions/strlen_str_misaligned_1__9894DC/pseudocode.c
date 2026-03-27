size_t __cdecl strlen_::str_misaligned_1(const char *a1)
{
  _BYTE *v1; // ecx

  do
  {
    if ( !*v1++ )
      JUMPOUT(0x989533);
  }
  while ( ((unsigned __int8)v1 & 3) != 0 );
  return strlen_::main_loop_3(a1);
}
