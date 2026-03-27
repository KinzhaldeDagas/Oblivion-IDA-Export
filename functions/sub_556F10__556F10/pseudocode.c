int __stdcall sub_556F10(unsigned int *a1)
{
  if ( a1[7] >= 0x10 )
    FormHeapFree(a1[2]);
  a1[7] = 0xF;
  a1[6] = 0;
  *((_BYTE *)a1 + 8) = 0;
  return 0;
}
