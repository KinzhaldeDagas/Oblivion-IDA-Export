void __stdcall sub_557130(unsigned int *a1)
{
  if ( a1[8] )
    FormHeapFree(a1[8]);
  a1[8] = 0;
  a1[9] = 0;
  a1[0xA] = 0;
  if ( a1[6] >= 0x10 )
    FormHeapFree(a1[1]);
  a1[5] = 0;
  a1[6] = 0xF;
  *((_BYTE *)a1 + 4) = 0;
}
