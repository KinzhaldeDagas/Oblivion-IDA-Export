int __stdcall sub_79AC10(_DWORD *a1)
{
  if ( a1[6] >= 0x10u )
    FormHeapFree(a1[1]);
  a1[6] = 0xF;
  a1[5] = 0;
  *((_BYTE *)a1 + 4) = 0;
  return 0;
}
