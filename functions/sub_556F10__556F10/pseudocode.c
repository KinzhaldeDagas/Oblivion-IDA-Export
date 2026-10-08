int __stdcall sub_556F10(unsigned int *a1)
{
  if ( a1[7] >= 0x10 ) /*0x556f19*/
    FormHeapFree(a1[2]); /*0x556f1f*/
  a1[7] = 0xF; /*0x556f29*/
  a1[6] = 0; /*0x556f30*/
  *((_BYTE *)a1 + 8) = 0; /*0x556f33*/
  return 0; /*0x556f36*/
}
