void __cdecl sub_8AF760(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edi
  int v6; // edx
  int v7; // esi
  float *i; // ecx
  float *j; // ecx
  int v10; // edi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  int v14; // ecx
  int v15; // [esp+34h] [ebp-3Ch]
  int v16; // [esp+38h] [ebp-38h]
  int v17; // [esp+3Ch] [ebp-34h]
  __int128 v18; // [esp+50h] [ebp-20h]

  v4 = a1;
  v5 = a2;
  while ( 1 )
  {
    v6 = a3;
    v7 = v5;
    v18 = *(_OWORD *)(0x30 * ((v5 + a3) >> 1) + v4 + 0x10);
    do
    {
      for ( i = (float *)(0x30 * v7 + v4 + 0x1C); *i < (double)*((float *)&v18 + 3); i += 0xC )
        ++v7;
      for ( j = (float *)(0x30 * v6 + v4 + 0x1C); *((float *)&v18 + 3) < (double)*j; j += 0xFFFFFFF4 )
        --v6;
      if ( v6 < v7 )
        break;
      if ( v6 != v7 )
      {
        v10 = *(_DWORD *)(0x30 * v6 + v4 + 0x20);
        v11 = *(_OWORD *)(0x30 * v6 + v4);
        v12 = *(_OWORD *)(0x30 * v6 + v4 + 0x10);
        v13 = 0x30 * v6 + v4;
        v15 = *(_DWORD *)(v13 + 0x24);
        v16 = *(_DWORD *)(v13 + 0x28);
        v17 = *(_DWORD *)(v13 + 0x2C);
        v14 = v4 + 0x30 * v7;
        *(_OWORD *)v13 = *(_OWORD *)v14;
        *(_OWORD *)(v13 + 0x10) = *(_OWORD *)(v14 + 0x10);
        *(_DWORD *)(v13 + 0x20) = *(_DWORD *)(v14 + 0x20);
        *(_DWORD *)(v13 + 0x24) = *(_DWORD *)(v14 + 0x24);
        *(_DWORD *)(v13 + 0x28) = *(_DWORD *)(v14 + 0x28);
        *(_DWORD *)(v13 + 0x2C) = *(_DWORD *)(v14 + 0x2C);
        v4 = a1;
        *(_DWORD *)(v14 + 0x24) = v15;
        *(_DWORD *)(v14 + 0x28) = v16;
        *(_DWORD *)(v14 + 0x20) = v10;
        v5 = a2;
        *(_OWORD *)v14 = v11;
        *(_OWORD *)(v14 + 0x10) = v12;
        *(_DWORD *)(v14 + 0x2C) = v17;
      }
      --v6;
      ++v7;
    }
    while ( v7 <= v6 );
    if ( v5 < v6 )
      sub_8AF760(v4, v5, v6, a4);
    if ( v7 >= a3 )
      break;
    v5 = v7;
    a2 = v7;
  }
}
