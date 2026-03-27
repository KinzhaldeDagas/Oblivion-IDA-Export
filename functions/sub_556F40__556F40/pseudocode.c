int __stdcall sub_556F40(unsigned int *a1)
{
  if ( a1[0xA] >= 0x10 )
    FormHeapFree(a1[5]);
  a1[0xA] = 0xF;
  a1[9] = 0;
  *((_BYTE *)a1 + 0x14) = 0;
  return 0;
}
