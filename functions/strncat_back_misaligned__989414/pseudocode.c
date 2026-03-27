// positive sp value has been detected, the output may be wrong!
int __usercall strncat_::back_misaligned@<eax>(
        unsigned int a1@<ecx>,
        _BYTE *a2@<edi>,
        char *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  char v7; // dl

  do
  {
    v7 = *a3++;
    if ( !v7 )
    {
      *a2 = 0;
      return a4;
    }
    *a2++ = v7;
    if ( !--a1 )
      return strncat_::empty_counter();
  }
  while ( ((unsigned __int8)a3 & 3) != 0 );
  if ( a1 >> 2 )
    return strncat_::main_loop_entrance_0(a4, a5, a6, a7);
  else
    return strncat_::tail_loop_start_0();
}
