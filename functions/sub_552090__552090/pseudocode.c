void __stdcall sub_552090(unsigned int *a1)
{
  if ( a1[0xC] >= 0x10 )
    FormHeapFree(a1[7]);
  a1[0xC] = 0xF;
  a1[0xB] = 0;
  *((_BYTE *)a1 + 0x1C) = 0;
  if ( a1[3] )
    FormHeapFree(a1[3]);
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
}
