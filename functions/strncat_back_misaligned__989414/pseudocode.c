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
  char v8; // bl
  unsigned int v9; // ecx

  do /*0x98942d*/
  {
    v7 = *a3++; /*0x989414*/
    if ( !v7 ) /*0x98941b*/
    {
      *a2 = 0; /*0x98945a*/
      return a4; /*0x989463*/
    }
    *a2++ = v7; /*0x98941d*/
    if ( !--a1 ) /*0x989425*/
      return strncat_::empty_counter(0, a2); /*0x989425*/
  }
  while ( ((unsigned __int8)a3 & 3) != 0 ); /*0x98942d*/
  v8 = a1; /*0x98942f*/
  v9 = a1 >> 2; /*0x989431*/
  if ( v9 ) /*0x989434*/
    return strncat_::main_loop_entrance_0(v9, v8, (int)a2, (int *)a3, a4, a5, a6, a7); /*0x989434*/
  else
    return strncat_::tail_loop_start_0(v8); /*0x989435*/
}
