int __stdcall sub_556F40(unsigned int *a1)
{
  if ( a1[0xA] >= 0x10 ) /*0x556f49*/
    FormHeapFree(a1[5]); /*0x556f4f*/
  a1[0xA] = 0xF; /*0x556f59*/
  a1[9] = 0; /*0x556f60*/
  *((_BYTE *)a1 + 0x14) = 0; /*0x556f63*/
  return 0; /*0x556f66*/
}
