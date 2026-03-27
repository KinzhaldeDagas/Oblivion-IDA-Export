int __stdcall sub_7A3440(_DWORD *a1)
{
  if ( a1[0xB] >= 0x10u )
    FormHeapFree(a1[6]);
  a1[0xB] = 0xF;
  a1[0xA] = 0;
  *((_BYTE *)a1 + 0x18) = 0;
  return 0;
}
