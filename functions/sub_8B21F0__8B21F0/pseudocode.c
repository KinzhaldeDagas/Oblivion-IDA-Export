void __cdecl sub_8B21F0(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edi
  int v6; // edx
  int v7; // esi
  float *i; // ecx
  float *j; // ecx
  int v10; // edi
  double v11; // st7
  __int128 v12; // xmm0
  int v13; // eax
  int v14; // ecx
  float v15; // [esp+24h] [ebp-4Ch]
  int v16; // [esp+60h] [ebp-10h]

  v4 = a1;
  v5 = a2;
  while ( 1 )
  {
    v6 = a3;
    v7 = v5;
    v15 = *(float *)(0x30 * ((v5 + a3) >> 1) + v4 + 0x14);
    do
    {
      for ( i = (float *)(0x30 * v7 + v4 + 0x14); *i < (double)v15; i += 0xC )
        ++v7;
      for ( j = (float *)(0x30 * v6 + v4 + 0x14); v15 < (double)*j; j += 0xFFFFFFF4 )
        --v6;
      if ( v6 < v7 )
        break;
      if ( v6 != v7 )
      {
        v10 = *(_DWORD *)(0x30 * v6 + v4 + 0x10);
        v11 = *(float *)(0x30 * v6 + v4 + 0x14);
        v12 = *(_OWORD *)(0x30 * v6 + v4);
        v13 = 0x30 * v6 + v4;
        v16 = *(_DWORD *)(v13 + 0x20);
        v14 = v4 + 0x30 * v7;
        *(_OWORD *)v13 = *(_OWORD *)v14;
        *(_DWORD *)(v13 + 0x10) = *(_DWORD *)(v14 + 0x10);
        *(_DWORD *)(v13 + 0x14) = *(_DWORD *)(v14 + 0x14);
        *(_DWORD *)(v13 + 0x20) = *(_DWORD *)(v14 + 0x20);
        *(float *)(v14 + 0x14) = v11;
        v4 = a1;
        *(_DWORD *)(v14 + 0x10) = v10;
        v5 = a2;
        *(_OWORD *)v14 = v12;
        *(_DWORD *)(v14 + 0x20) = v16;
      }
      --v6;
      ++v7;
    }
    while ( v7 <= v6 );
    if ( v5 < v6 )
      sub_8B21F0(v4, v5, v6, a4);
    if ( v7 >= a3 )
      break;
    v5 = v7;
    a2 = v7;
  }
}
