int __cdecl sub_8E66D0(int a1, int a2)
{
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  _DWORD *i; // edx

  if ( *(_DWORD *)(a1 + 0x28) > *(_DWORD *)(a2 + 0x28) )
  {
    v2 = a2;
    v3 = a1;
  }
  else
  {
    v2 = a1;
    v3 = a2;
  }
  v4 = *(_DWORD *)(v2 + 0x28);
  v5 = 0;
  if ( v4 <= 0 )
    return 0;
  v6 = *(_DWORD *)(v2 + 0x24);
  for ( i = (_DWORD *)(v6 + 4); *i != v3; i += 2 )
  {
    if ( ++v5 >= v4 )
      return 0;
  }
  return *(_DWORD *)(v6 + 8 * v5);
}
