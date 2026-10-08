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

  ++*(_DWORD *)(a1 + 0x88); /*0x8dcc1d*/
  for ( i = *(_DWORD *)(a1 + 0x104) - 1; i >= 0; --i ) /*0x8dcc2a*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * i); /*0x8dcc36*/
    if ( v3 ) /*0x8dcc3b*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 8))(v3, a2); /*0x8dcc44*/
  }
  for ( j = *(_DWORD *)(a1 + 0x104) - 1; j >= 0; --j ) /*0x8dcc53*/
  {
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * j) ) /*0x8dcc66*/
    {
      v5 = *(_DWORD *)(a1 + 0x104) - 1; /*0x8dcc73*/
      *(_DWORD *)(a1 + 0x104) = v5; /*0x8dcc77*/
      for ( k = j; k < *(_DWORD *)(a1 + 0x104); ++k ) /*0x8dcc7f*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * k) = *(_DWORD *)(*(_DWORD *)(a1 + 0x100) + 4 * k + 4); /*0x8dcc8e*/
    }
  }
  v7 = a2; /*0x8dcc9e*/
  for ( m = 0; m < *(_DWORD *)(a2 + 0x38); ++m ) /*0x8dcca9*/
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v7 + 0x34) + 4 * m); /*0x8dccb3*/
    v10 = *(_DWORD *)(v9 + 0xA4); /*0x8dccb6*/
    v11 = (_DWORD *)(v9 + 0xA0); /*0x8dccbc*/
    for ( n = v10 - 1; n >= 0; --n ) /*0x8dccc3*/
    {
      v13 = *(_DWORD *)(*v11 + 4 * n); /*0x8dccc7*/
      if ( v13 ) /*0x8dcccc*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 4))(v13, *(_DWORD *)(*(_DWORD *)(a2 + 0x34) + 4 * m)); /*0x8dccdb*/
    }
    for ( ii = v11[1] - 1; ii >= 0; --ii ) /*0x8dcce5*/
    {
      if ( !*(_DWORD *)(*v11 + 4 * ii) ) /*0x8dcce9*/
      {
        v15 = v11[1] - 1; /*0x8dccf3*/
        v11[1] = v15; /*0x8dccf7*/
        for ( jj = ii; jj < v11[1]; ++jj ) /*0x8dccfc*/
          *(_DWORD *)(*v11 + 4 * jj) = *(_DWORD *)(*v11 + 4 * jj + 4); /*0x8dcd09*/
      }
    }
    v7 = a2; /*0x8dcd16*/
  }
  v17 = *(_DWORD *)(a1 + 0x88) - 1; /*0x8dcd28*/
  *(_DWORD *)(a1 + 0x88) = v17; /*0x8dcd2a*/
  if ( !v17 ) /*0x8dcd31*/
  {
    v17 = *(_DWORD *)(a1 + 0x84); /*0x8dcd33*/
    if ( v17 ) /*0x8dcd3b*/
    {
      LOBYTE(v17) = *(_BYTE *)(a1 + 0x90); /*0x8dcd3d*/
      if ( !(_BYTE)v17 ) /*0x8dcd45*/
        LOBYTE(v17) = sub_899210(a1); /*0x8dcd4b*/
    }
  }
  return v17; /*0x8dcd47*/
}
