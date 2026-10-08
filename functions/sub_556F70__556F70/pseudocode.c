void __stdcall sub_556F70(unsigned int *a1)
{
  if ( a1[9] ) /*0x556f76*/
    FormHeapFree(a1[9]); /*0x556f80*/
  a1[9] = 0; /*0x556f88*/
  a1[0xA] = 0; /*0x556f8b*/
  a1[0xB] = 0; /*0x556f8e*/
  if ( a1[6] >= 0x10 ) /*0x556f95*/
    FormHeapFree(a1[1]); /*0x556f9b*/
  a1[5] = 0; /*0x556fa3*/
  a1[6] = 0xF; /*0x556fa6*/
  *((_BYTE *)a1 + 4) = 0; /*0x556fad*/
}
