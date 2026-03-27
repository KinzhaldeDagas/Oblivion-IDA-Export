char __cdecl sub_8DCC10(int a1, int a2)
{
  int i; // esi
  int v3; // ecx
  int j; // edx
  int v5; // ecx
  int k; // eax
  int v7; // eax
  int m; // ebp
  int v9; // esi
  int v10; // edi
  _DWORD *v11; // esi
  int n; // edi
  int v13; // ecx
  int ii; // edx
  int v15; // ecx
  int jj; // eax
  int v17; // eax

  ++*(_DWORD *)(a1 + 0x88);
  for ( i = *(_DWORD *)(a1 + 0x104) - 1; i >= 0; --i )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * i);
    if ( v3 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 8))(v3, a2);
  }
  for ( j = *(_DWORD *)(a1 + 0x104) - 1; j >= 0; --j )
  {
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * j) )
    {
      v5 = *(_DWORD *)(a1 + 0x104) - 1;
      *(_DWORD *)(a1 + 0x104) = v5;
      for ( k = j; k < *(_DWORD *)(a1 + 0x104); ++k )
        *(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * k) = *(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * k + 4);
    }
  }
  v7 = a2;
  for ( m = 0; m < *(_DWORD *)(a2 + 0x38); ++m )
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v7 + 0x34) + 4 * m);
    v10 = *(_DWORD *)(v9 + 0xA4);
    v11 = (_DWORD *)(v9 + 0xA0);
    for ( n = v10 - 1; n >= 0; --n )
    {
      v13 = *(_DWORD *)(*v11 + 4 * n);
      if ( v13 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 4))(v13, *(_DWORD *)(*(_DWORD *)(a2 + 0x34) + 4 * m));
    }
    for ( ii = v11[1] - 1; ii >= 0; --ii )
    {
      if ( !*(_DWORD *)(*v11 + 4 * ii) )
      {
        v15 = v11[1] - 1;
        v11[1] = v15;
        for ( jj = ii; jj < v11[1]; ++jj )
          *(_DWORD *)(*v11 + 4 * jj) = *(_DWORD *)(*v11 + 4 * jj + 4);
      }
    }
    v7 = a2;
  }
  v17 = *(_DWORD *)(a1 + 0x88) - 1;
  *(_DWORD *)(a1 + 0x88) = v17;
  if ( !v17 )
  {
    v17 = *(_DWORD *)(a1 + 0x84);
    if ( v17 )
    {
      LOBYTE(v17) = *(_BYTE *)(a1 + 0x90);
      if ( !(_BYTE)v17 )
        LOBYTE(v17) = sub_899210(a1);
    }
  }
  return v17;
}
