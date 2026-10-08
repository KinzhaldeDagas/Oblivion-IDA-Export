char __cdecl sub_8DCAC0(int a1, int a2)
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

  ++*(_DWORD *)(a1 + 0x88); /*0x8dcacd*/
  for ( i = *(_DWORD *)(a1 + 0x104) - 1; i >= 0; --i ) /*0x8dcada*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * i); /*0x8dcae6*/
    if ( v3 ) /*0x8dcaeb*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, a2); /*0x8dcaf4*/
  }
  for ( j = *(_DWORD *)(a1 + 0x104) - 1; j >= 0; --j ) /*0x8dcb03*/
  {
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * j) ) /*0x8dcb16*/
    {
      v5 = *(_DWORD *)(a1 + 0x104) - 1; /*0x8dcb23*/
      *(_DWORD *)(a1 + 0x104) = v5; /*0x8dcb27*/
      for ( k = j; k < *(_DWORD *)(a1 + 0x104); ++k ) /*0x8dcb2f*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * k) = *(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * k + 4); /*0x8dcb3e*/
    }
  }
  v7 = a2; /*0x8dcb4e*/
  for ( m = 0; m < *(_DWORD *)(a2 + 0x38); ++m ) /*0x8dcb59*/
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v7 + 0x34) + 4 * m); /*0x8dcb63*/
    v10 = *(_DWORD *)(v9 + 0xA4); /*0x8dcb66*/
    v11 = (_DWORD *)(v9 + 0xA0); /*0x8dcb6c*/
    for ( n = v10 - 1; n >= 0; --n ) /*0x8dcb73*/
    {
      v13 = *(_DWORD *)(*v11 + 4 * n); /*0x8dcb77*/
      if ( v13 ) /*0x8dcb7c*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 8))(v13, *(_DWORD *)(*(_DWORD *)(a2 + 0x34) + 4 * m)); /*0x8dcb8b*/
    }
    for ( ii = v11[1] - 1; ii >= 0; --ii ) /*0x8dcb95*/
    {
      if ( !*(_DWORD *)(*v11 + 4 * ii) ) /*0x8dcb99*/
      {
        v15 = v11[1] - 1; /*0x8dcba3*/
        v11[1] = v15; /*0x8dcba7*/
        for ( jj = ii; jj < v11[1]; ++jj ) /*0x8dcbac*/
          *(_DWORD *)(*v11 + 4 * jj) = *(_DWORD *)(*v11 + 4 * jj + 4); /*0x8dcbb9*/
      }
    }
    v7 = a2; /*0x8dcbc6*/
  }
  v17 = *(_DWORD *)(a1 + 0x88) - 1; /*0x8dcbd8*/
  *(_DWORD *)(a1 + 0x88) = v17; /*0x8dcbda*/
  if ( !v17 ) /*0x8dcbe1*/
  {
    v17 = *(_DWORD *)(a1 + 0x84); /*0x8dcbe3*/
    if ( v17 ) /*0x8dcbeb*/
    {
      LOBYTE(v17) = *(_BYTE *)(a1 + 0x90); /*0x8dcbed*/
      if ( !(_BYTE)v17 ) /*0x8dcbf5*/
        LOBYTE(v17) = sub_899210(a1); /*0x8dcbfb*/
    }
  }
  return v17; /*0x8dcbf7*/
}
