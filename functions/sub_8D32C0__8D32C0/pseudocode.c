int __cdecl sub_8D32C0(int a1, _DWORD *a2)
{
  int result; // eax
  int i; // esi
  int v4; // ecx
  int v5; // eax
  char v6; // dl

  result = a2[1];
  for ( i = 0; i < result; ++i )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(*a2 + 4 * i) + 0x50);
    v5 = *(_DWORD *)(a1 + 0xC) + *(_DWORD *)(v4 + 8);
    v6 = *(_BYTE *)(v5 + 0xC);
    *(_OWORD *)(v5 + 0x10) = *(_OWORD *)(v4 + 0xD0);
    if ( v6 )
      *(_OWORD *)(v5 + 0x20) = *(_OWORD *)(v4 + 0xE0);
    else
      sub_88FE00((__m128 *)(v5 + 0x20), (__m128 *)(v5 + 0x50), (__m128 *)(v4 + 0xE0));
    result = a2[1];
  }
  return result;
}
