int __cdecl sub_8D32C0(int a1, _DWORD *a2)
{
  int result; // eax
  int i; // esi
  int v4; // ecx
  int v5; // eax
  char v6; // dl

  result = a2[1]; /*0x8d32c6*/
  for ( i = 0; i < result; ++i ) /*0x8d32cd*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)(*a2 + 4 * i) + 0x50); /*0x8d32d9*/
    v5 = *(_DWORD *)(a1 + 0xC) + *(_DWORD *)(v4 + 8); /*0x8d32e9*/
    v6 = *(_BYTE *)(v5 + 0xC); /*0x8d32eb*/
    *(_OWORD *)(v5 + 0x10) = *(_OWORD *)(v4 + 0xD0); /*0x8d32f0*/
    if ( v6 ) /*0x8d32f4*/
      *(_OWORD *)(v5 + 0x20) = *(_OWORD *)(v4 + 0xE0); /*0x8d32fd*/
    else
      hkBasis_TransformVector((__m128 *)(v5 + 0x20), (__m128 *)(v5 + 0x50), (__m128 *)(v4 + 0xE0)); /*0x8d3311*/
    result = a2[1]; /*0x8d3316*/
  }
  return result; /*0x8d331f*/
}
