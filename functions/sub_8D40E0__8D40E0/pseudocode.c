_DWORD *__cdecl sub_8D40E0(float a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *result; // eax
  int i; // edi
  int v6; // ebp
  int v7; // esi

  result = a2;
  for ( i = 0; i < a2[0xE]; *(float *)(v7 + 0x5C) = fConstant_1 / (*(float *)(a2[7] + 0x18) - a1) )
  {
    v6 = *(_DWORD *)(a2[0xD] + 4 * i);
    v7 = *(_DWORD *)(v6 + 0x50) + 0x10;
    sub_8DD530(a1, v7);
    if ( *(_BYTE *)(i + *a3) != 8 )
    {
      if ( *(_DWORD *)(a4 + 4) == (*(_DWORD *)(a4 + 8) & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)a4, 4);
      *(_DWORD *)(*(_DWORD *)a4 + 4 * (*(_DWORD *)(a4 + 4))++) = v6;
      *(_BYTE *)(i + *a3) = 8;
    }
    result = a2;
    *(_OWORD *)(v7 + 0x40) = *(_OWORD *)(v7 + 0x50);
    *(_OWORD *)(v7 + 0x60) = *(_OWORD *)(v7 + 0x70);
    *(float *)(v7 + 0x4C) = a1;
    ++i;
  }
  return result;
}
