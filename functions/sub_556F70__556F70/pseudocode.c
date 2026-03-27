void __stdcall sub_556F70(unsigned int *a1)
{
  if ( a1[9] )
    FormHeapFree(a1[9]);
  a1[9] = 0;
  a1[0xA] = 0;
  a1[0xB] = 0;
  if ( a1[6] >= 0x10 )
    FormHeapFree(a1[1]);
  a1[5] = 0;
  a1[6] = 0xF;
  *((_BYTE *)a1 + 4) = 0;
}
