float *__cdecl sub_923C00(int a1, int a2)
{
  _DWORD *i; // eax
  int v3; // ecx
  float *v4; // eax
  float *result; // eax
  int v6; // edx

  for ( i = *(_DWORD **)(a1 + 0x1C); (unsigned int)i < *(_DWORD *)(a1 + 0x4C); ++i )
    *i = 0;
  if ( !a2 )
  {
    v3 = *(_DWORD *)(a1 + 0x34);
    *(_DWORD *)(a1 + 0x30) = *(_DWORD *)(a1 + 0x24);
    *(_DWORD *)(a1 + 0x40) = v3;
  }
  v4 = *(float **)(a1 + 0x30);
  if ( v4 != *(float **)(a1 + 0x2C) )
    sub_9202A0(*(_DWORD *)(a1 + 4), v4, *(_DWORD *)(a1 + 0xC), *(float **)(a1 + 0x1C));
  result = *(float **)(a1 + 0x40);
  if ( result != *(float **)(a1 + 0x3C) )
    result = (float *)sub_9202A0(*(_DWORD *)(a1 + 4), result, *(_DWORD *)(a1 + 0xC), *(float **)(a1 + 0x1C));
  v6 = *(_DWORD *)(a1 + 0x3C);
  *(_DWORD *)(a1 + 0x30) = *(_DWORD *)(a1 + 0x2C);
  *(_DWORD *)(a1 + 0x40) = v6;
  return result;
}
