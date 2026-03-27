void __cdecl sub_52EFE0(int a1)
{
  unsigned int v1; // esi
  unsigned int i; // eax
  int v3; // ecx

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 0xC);
    for ( i = 0; i < v1; ++i )
    {
      v3 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i);
      if ( v3 )
        *(_WORD *)(v3 + 0x20) = i;
    }
  }
}
