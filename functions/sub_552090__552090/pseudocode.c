void __stdcall sub_552090(unsigned int *a1)
{
  if ( a1[0xC] >= 0x10 ) /*0x55209a*/
    FormHeapFree(a1[7]); /*0x5520a0*/
  a1[0xC] = 0xF; /*0x5520aa*/
  a1[0xB] = 0; /*0x5520b1*/
  *((_BYTE *)a1 + 0x1C) = 0; /*0x5520b4*/
  if ( a1[3] ) /*0x5520b7*/
    FormHeapFree(a1[3]); /*0x5520bf*/
  a1[3] = 0; /*0x5520c7*/
  a1[4] = 0; /*0x5520ca*/
  a1[5] = 0; /*0x5520cd*/
}
