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

  v4 = a1; /*0x8b21fa*/
  v5 = a2; /*0x8b21ff*/
  while ( 1 ) /*0x8b2202*/
  {
    v6 = a3; /*0x8b2202*/
    v7 = v5; /*0x8b2214*/
    v15 = *(float *)(0x30 * ((v5 + a3) >> 1) + v4 + 0x14); /*0x8b2216*/
    do /*0x8b22c0*/
    {
      for ( i = (float *)(0x30 * v7 + v4 + 0x14); *i < (double)v15; i += 0xC ) /*0x8b2226*/
        ++v7; /*0x8b223d*/
      for ( j = (float *)(0x30 * v6 + v4 + 0x14); v15 < (double)*j; j += 0xFFFFFFF4 ) /*0x8b2249*/
        --v6; /*0x8b225d*/
      if ( v6 < v7 ) /*0x8b2265*/
        break; /*0x8b2265*/
      if ( v6 != v7 ) /*0x8b2267*/
      {
        v10 = *(_DWORD *)(0x30 * v6 + v4 + 0x10); /*0x8b226f*/
        v11 = *(float *)(0x30 * v6 + v4 + 0x14); /*0x8b2273*/
        v12 = *(_OWORD *)(0x30 * v6 + v4); /*0x8b2277*/
        v13 = 0x30 * v6 + v4; /*0x8b227b*/
        v16 = *(_DWORD *)(v13 + 0x20); /*0x8b2281*/
        v14 = v4 + 0x30 * v7; /*0x8b228f*/
        *(_OWORD *)v13 = *(_OWORD *)v14; /*0x8b2291*/
        *(_DWORD *)(v13 + 0x10) = *(_DWORD *)(v14 + 0x10); /*0x8b2297*/
        *(_DWORD *)(v13 + 0x14) = *(_DWORD *)(v14 + 0x14); /*0x8b229d*/
        *(_DWORD *)(v13 + 0x20) = *(_DWORD *)(v14 + 0x20); /*0x8b22a3*/
        *(float *)(v14 + 0x14) = v11; /*0x8b22a6*/
        v4 = a1; /*0x8b22ad*/
        *(_DWORD *)(v14 + 0x10) = v10; /*0x8b22b0*/
        v5 = a2; /*0x8b22b3*/
        *(_OWORD *)v14 = v12; /*0x8b22b6*/
        *(_DWORD *)(v14 + 0x20) = v16; /*0x8b22b9*/
      }
      --v6; /*0x8b22bc*/
      ++v7; /*0x8b22bd*/
    }
    while ( v7 <= v6 ); /*0x8b22c0*/
    if ( v5 < v6 ) /*0x8b22c8*/
      sub_8B21F0(v4, v5, v6, a4); /*0x8b22d1*/
    if ( v7 >= a3 ) /*0x8b22dc*/
      break; /*0x8b22dc*/
    v5 = v7; /*0x8b22de*/
    a2 = v7; /*0x8b22e0*/
  }
}
