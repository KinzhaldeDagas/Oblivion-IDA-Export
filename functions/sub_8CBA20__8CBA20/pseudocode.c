char __cdecl sub_8CBA20(int a1, int a2)
{
  int v2; // eax
  int v3; // ebx

  if ( *(_DWORD *)(a1 + 0x3C) == (*(_DWORD *)(a1 + 0x40) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)(a1 + 0x38), 4);
  *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * (*(_DWORD *)(a1 + 0x3C))++) = a2;
  *(_DWORD *)(*(_DWORD *)(a1 + 0x44) + 4 * *(unsigned __int16 *)(a2 + 0x20)) = *(_DWORD *)(*(_DWORD *)(a1 + 0x44)
                                                                                         + 4 * *(_DWORD *)(a1 + 0x48)
                                                                                         - 4);
  *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x44) + 4 * *(unsigned __int16 *)(a2 + 0x20)) + 0x20) = *(_WORD *)(a2 + 0x20);
  --*(_DWORD *)(a1 + 0x48);
  *(_WORD *)(a2 + 0x20) = *(_WORD *)(a1 + 0x3C) - 1;
  *(_BYTE *)(a2 + 0x29) = 1;
  v2 = *(_DWORD *)(a2 + 0x38);
  v3 = 0;
  *(_DWORD *)(a2 + 0x2C) = 0;
  *(_DWORD *)(a2 + 0x30) = 0;
  if ( v2 > 0 )
  {
    do
      sub_8DD0C0(0.0, 0, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x34) + 4 * v3++) + 0x50) + 0x10);
    while ( v3 < *(_DWORD *)(a2 + 0x38) );
  }
  sub_8E77F0(a2, *(float *)(a2 + 0x68), *(_DWORD *)(a1 + 0x160), *(_DWORD **)(a1 + 0x74));
  return sub_8DCAC0(a1, a2);
}
