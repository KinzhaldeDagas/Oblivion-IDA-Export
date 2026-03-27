void __cdecl sub_8EC790(__m128 *a1, __m128 *a2)
{
  float v2; // eax
  int v3; // ebx
  int v4; // eax
  __int32 v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // edx
  signed int v9; // ecx
  int v10; // edx
  __int32 v11; // eax
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  double v15; // st7
  __m128 v16; // xmm0
  double v17; // st7
  double v18; // st7
  double v19; // st7
  __m128 v20; // xmm1
  char *v21; // ecx
  int v22; // edx
  int v23; // eax
  double v24; // st6
  __m128 *v25; // eax
  int v26; // eax
  __int32 v27; // ebx
  int *v28; // eax
  __int32 v29; // ecx
  double v30; // st7
  float v31; // [esp+Ch] [ebp-64h]
  float v32; // [esp+10h] [ebp-60h]
  float v33; // [esp+14h] [ebp-5Ch]
  int v34; // [esp+18h] [ebp-58h]
  unsigned int v35; // [esp+1Ch] [ebp-54h]
  unsigned int v36; // [esp+28h] [ebp-48h]
  int v37[2]; // [esp+30h] [ebp-40h] BYREF
  char v38; // [esp+38h] [ebp-38h] BYREF
  int v39; // [esp+3Ch] [ebp-34h]
  int v40; // [esp+48h] [ebp-28h]
  int v41; // [esp+60h] [ebp-10h]
  float v42; // [esp+64h] [ebp-Ch]
  __m128 *v43; // [esp+68h] [ebp-8h]
  __m128 *v44; // [esp+6Ch] [ebp-4h]

  v2 = a1[4].m128_f32[0];
  a2[1] = a1[1];
  v3 = 0;
  v32 = v2;
  *a2 = *a1;
  v4 = a1[4].m128_i32[3];
  v5 = 0;
  v41 = 0;
  v42 = 0.0;
  v43 = a1;
  v44 = a2;
  if ( v4 > 0 )
  {
    v6 = 0;
    do
    {
      v7 = v6 + a2[2].m128_i32[1];
      *(_BYTE *)(v7 + 1) = 0;
      *(_BYTE *)v7 = 0;
      *(_DWORD *)(v7 + 4) = 0;
      *(_DWORD *)(v7 + 8) = 0;
      *(_DWORD *)(v7 + 0xC) = 0;
      ++v5;
      v6 += 0x10;
    }
    while ( v5 < a1[4].m128_i32[3] );
  }
  if ( v32 >= (double)*(float *)&SrcStr )
  {
    while ( 1 )
    {
      v8 = 0xFFFFFFFF;
      v31 = v32;
      v9 = 0;
      v35 = 0xFFFFFFFF;
      if ( a1[4].m128_i32[3] > 0 )
      {
        v10 = 0;
        v34 = 0;
        do
        {
          if ( (v3 < 1 || v37[0] != v9)
            && (v3 < 2 || v39 != v9)
            && (v3 < 3 || v40 != v9)
            && !*(_DWORD *)(a2[2].m128_i32[1] + v10 + 0xC) )
          {
            v11 = a1[4].m128_i32[2];
            v12 = *(__m128 *)(v11 + v34 + 0x10);
            v13 = *(__m128 *)(v11 + v34);
            v14 = _mm_mul_ps(_mm_sub_ps(a2[1], v12), v13);
            v15 = -(float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                         + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]));
            v33 = v15;
            if ( v15 <= *(float *)&SrcStr )
            {
              v3 = v41;
            }
            else
            {
              *(float *)&v36 = -v42;
              v16 = _mm_mul_ps(v13, _mm_add_ps(*a2, _mm_mul_ps(_mm_shuffle_ps((__m128)v36, (__m128)v36, 0), v12)));
              v17 = (float)((float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0])
                          + (float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
                                  + _mm_shuffle_ps(v13, v13, 0xFF).m128_f32[0]));
              if ( v17 <= flt_A9AFD8 )
                v17 = *(float *)&SrcStr;
              v18 = v17 + *(float *)(v44[2].m128_i32[1] + v10 + 8);
              v3 = v41;
              if ( v18 < v33 * v31 )
              {
                v35 = v9;
                v31 = v18 / v33;
              }
            }
          }
          v34 += 0x40;
          ++v9;
          v10 += 0x10;
        }
        while ( v9 < a1[4].m128_i32[3] );
        v8 = v35;
      }
      if ( v31 > (double)flt_A79DB4 )
      {
        v19 = v31 + v42;
        v20 = a2[1];
        v42 = v19;
        v32 = v32 - v31;
        *a2 = _mm_add_ps(*a2, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v31), (__m128)LODWORD(v31), 0), v20));
        if ( v3 > 0 )
        {
          v21 = &v38;
          v22 = v3;
          do
          {
            v23 = *(_DWORD *)v21;
            v24 = v31 + *(float *)(*(_DWORD *)v21 + 4);
            v21 += 0xC;
            --v22;
            *(float *)(v23 + 4) = v24;
            *(_BYTE *)v23 = 1;
          }
          while ( v22 );
          v8 = v35;
        }
        v25 = v43;
        a2[2].m128_f32[0] = v19;
        if ( v19 > v25[4].m128_f32[1] )
          break;
      }
      if ( v8 < 0 )
      {
        a2[2].m128_i32[0] = a1[4].m128_i32[0];
        return;
      }
      v26 = 3 * v3;
      v41 = v3 + 1;
      v27 = a2[2].m128_i32[1];
      v28 = &v37[v26];
      v28[1] = a1[4].m128_i32[2] + (v8 << 6);
      v29 = v27 + 0x10 * v8;
      v30 = *(float *)(v29 + 8) + flt_A9AFD8;
      v28[2] = v29;
      *v28 = v8;
      *(float *)(v29 + 8) = v30 + v30;
      sub_8EC340((int)v37);
      if ( v32 < (double)*(float *)&SrcStr )
        return;
      v3 = v41;
    }
  }
}
