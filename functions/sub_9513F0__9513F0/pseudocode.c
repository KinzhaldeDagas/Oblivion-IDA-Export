bool *__cdecl sub_9513F0(bool *a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, float a7)
{
  bool v7; // cl
  int v8; // ebx
  bool v9; // cl
  int v10; // edx
  __m128 v11; // xmm1
  __int16 v12; // cx
  bool v13; // al
  int v14; // esi
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  __m128 v18; // xmm2
  bool v19; // cc
  int v20; // esi
  char v22[5]; // [esp+13h] [ebp-1Dh] BYREF
  _BYTE v23[4]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v24[4]; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v25[4]; // [esp+20h] [ebp-10h] BYREF
  int v26; // [esp+24h] [ebp-Ch]
  int v27; // [esp+28h] [ebp-8h]
  int v28; // [esp+2Ch] [ebp-4h]

  v7 = *sub_9511B0((bool *)v22, a2, a4, a5, a7); /*0x951416*/
  v8 = a6[1]; /*0x95141b*/
  v9 = v7; /*0x951423*/
  v10 = 0; /*0x951426*/
  *(_DWORD *)&v22[1] = 0; /*0x95142a*/
  v28 = v8; /*0x95142e*/
  if ( v8 > 0 ) /*0x951432*/
  {
    v11 = (__m128)xmmword_A372D0; /*0x951438*/
    v26 = 0; /*0x95143f*/
    do /*0x951572*/
    {
      v13 = 0; /*0x95146a*/
      if ( v9 ) /*0x951445*/
      {
        v12 = **(_WORD **)(*a6 + v10 + 0x14); /*0x951450*/
        if ( **(_WORD **)(*a6 + v10 + 0x10) != v12 && v12 != **(_WORD **)(v10 + *a6 + 0x18) ) /*0x951464*/
          v13 = 1; /*0x951445*/
      }
      v14 = 0; /*0x95146c*/
      v23[0] = 0; /*0x951470*/
      v24[0] = 0; /*0x951475*/
      v25[0] = 0; /*0x95147a*/
      if ( v8 > 0 ) /*0x95147f*/
      {
        v15 = 0; /*0x951485*/
        do /*0x951538*/
        {
          if ( v14 != *(_DWORD *)&v22[1] ) /*0x951494*/
          {
            v13 = v13 /*0x951528*/
               && ((v16 = v15 + *a6, v17 = v10 + *a6, **(_WORD **)(v17 + 0x10) != **(_WORD **)(v16 + 0x10))
                || **(_WORD **)(v17 + 0x14) != **(_WORD **)(v16 + 0x14)
                || **(_WORD **)(v17 + 0x18) != **(_WORD **)(v16 + 0x18)
                || (v18 = _mm_sub_ps(*(__m128 *)v17, *(__m128 *)v16),
                    v27 = 0x3A83126F,
                    _mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)0x3A83126Fu, (__m128)0x3A83126Fu, 0), _mm_and_ps(v18, v11)))))
               && *sub_9510E0(v22, (unsigned __int16 **)v17, (unsigned __int16 **)v16, v23, v24, v25);
            v10 = v26; /*0x95152a*/
            v8 = v28; /*0x95152e*/
          }
          ++v14; /*0x951532*/
          v15 += 0x20; /*0x951533*/
        }
        while ( v14 < v8 ); /*0x951538*/
      }
      v9 = v13 && v23[0] && v24[0] && v25[0]; /*0x95155a*/
      v10 += 0x20; /*0x951565*/
      v19 = ++*(_DWORD *)&v22[1] < v8; /*0x951568*/
      v26 = v10; /*0x95156e*/
    }
    while ( v19 ); /*0x951572*/
  }
  v20 = a4[1]; /*0x95157b*/
  if ( v20 > 2 ) /*0x951581*/
  {
    if ( v9 && v8 - *(_DWORD *)(a3 + 8) / 2 + v20 == 2 ) /*0x95159a*/
    {
      *a1 = 1; /*0x9515a1*/
      return a1; /*0x9515a9*/
    }
    v9 = 0; /*0x9515aa*/
  }
  *a1 = v9; /*0x9515b1*/
  return a1; /*0x9515a3*/
}
