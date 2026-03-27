int __cdecl sub_8DC1C0(int a1)
{
  int i; // edi
  int v2; // ecx
  int result; // eax
  int j; // edi
  int v5; // ecx

  for ( i = *(_DWORD *)(a1 + 0xB0) - 1; i >= 0; --i )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 0xAC) + 4 * i);
    if ( v2 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 8))(v2, a1);
  }
  while ( *(_DWORD *)(a1 + 0x6C) )
    (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)(a1 + 0x68) + 0xC))(**(_DWORD **)(a1 + 0x68), a1);
  while ( *(_DWORD *)(a1 + 0x78) )
    (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)(a1 + 0x74) + 0xC))(**(_DWORD **)(a1 + 0x74), a1);
  result = *(_DWORD *)(a1 + 0xBC);
  for ( j = 0; j < result; ++j )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB8) + 4 * j);
    if ( v5 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x14))(v5, a1);
    result = *(_DWORD *)(a1 + 0xBC);
  }
  return result;
}
