void __stdcall sub_557130(unsigned int *a1)
{
  if ( a1[8] ) /*0x557136*/
    FormHeapFree(a1[8]); /*0x557140*/
  a1[8] = 0; /*0x557148*/
  a1[9] = 0; /*0x55714b*/
  a1[0xA] = 0; /*0x55714e*/
  if ( a1[6] >= 0x10 ) /*0x557155*/
    FormHeapFree(a1[1]); /*0x55715b*/
  a1[5] = 0; /*0x557163*/
  a1[6] = 0xF; /*0x557166*/
  *((_BYTE *)a1 + 4) = 0; /*0x55716d*/
}
