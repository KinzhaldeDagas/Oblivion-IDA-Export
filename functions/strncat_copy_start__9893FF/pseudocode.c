int __cdecl strncat_::copy_start(int a1, int a2, int a3, int a4, char a5)
{
  unsigned int v5; // ecx

  if ( (a5 & 3) != 0 )
    return strncat_::back_misaligned(a1, a2, a3, a4);
  if ( v5 >> 2 )
    return strncat_::main_loop_entrance_0(a1, a2, a3, a4);
  return strncat_::tail_loop_start_0();
}
