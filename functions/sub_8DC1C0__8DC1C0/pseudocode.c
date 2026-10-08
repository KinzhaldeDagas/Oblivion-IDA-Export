int __cdecl sub_8DC1C0(int a1)
{
  int i; // edi
  int v2; // ecx
  int result; // eax
  int j; // edi
  int v5; // ecx

  for ( i = *(_DWORD *)(a1 + 0xB0) - 1; i >= 0; --i ) /*0x8dc1cd*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 0xAC) + 4 * i); /*0x8dc1d6*/
    if ( v2 ) /*0x8dc1db*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 8))(v2, a1); /*0x8dc1e0*/
  }
  while ( *(_DWORD *)(a1 + 0x6C) ) /*0x8dc1e6*/
    (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)(a1 + 0x68) + 0xC))(**(_DWORD **)(a1 + 0x68), a1); /*0x8dc1f8*/
  while ( *(_DWORD *)(a1 + 0x78) ) /*0x8dc202*/
    (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)(a1 + 0x74) + 0xC))(**(_DWORD **)(a1 + 0x74), a1); /*0x8dc218*/
  result = *(_DWORD *)(a1 + 0xBC); /*0x8dc222*/
  for ( j = 0; j < result; ++j ) /*0x8dc22c*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB8) + 4 * j); /*0x8dc236*/
    if ( v5 ) /*0x8dc23b*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x14))(v5, a1); /*0x8dc240*/
    result = *(_DWORD *)(a1 + 0xBC); /*0x8dc243*/
  }
  return result; /*0x8dc24e*/
}
