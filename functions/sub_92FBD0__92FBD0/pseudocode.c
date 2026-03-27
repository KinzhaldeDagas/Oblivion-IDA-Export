int __cdecl sub_92FBD0(int *a1, float a2)
{
  int *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ebx
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // esi
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  __m128 v16; // xmm4
  float v17; // xmm6_4
  __m128 v18; // xmm0
  __m128 v19; // xmm5
  __m128 v20; // xmm0
  __m128 v21; // xmm2
  __m128 v22; // xmm5
  __m128 v23; // xmm1
  float v24; // xmm6_4
  float v25; // xmm7_4
  __m128 v26; // xmm1
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  float v29; // xmm6_4
  float v30; // xmm7_4
  __m128 v31; // xmm3
  __m128 v32; // xmm2
  __m128 v33; // xmm2
  __m128 v34; // xmm4
  __m128 v35; // xmm0
  __m128 v36; // xmm0
  __m128 v37; // xmm0
  __m128 v38; // xmm3
  __m128 v39; // xmm0
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  bool v42; // cc
  int v44; // [esp+18h] [ebp-78h]
  int v45; // [esp+1Ch] [ebp-74h]
  int v46; // [esp+20h] [ebp-70h]
  int v47; // [esp+24h] [ebp-6Ch]
  int v48; // [esp+28h] [ebp-68h]
  int v49; // [esp+2Ch] [ebp-64h]
  float v50; // [esp+50h] [ebp-40h]
  float v51; // [esp+50h] [ebp-40h]
  float v52; // [esp+50h] [ebp-40h]
  __m128 v53; // [esp+60h] [ebp-30h]
  __m128 v54; // [esp+70h] [ebp-20h]
  __m128 v55; // [esp+80h] [ebp-10h]

  v2 = a1;
  v3 = 0;
  if ( a1[1] > 0 )
  {
    v4 = 0;
    do
    {
      *(_DWORD *)(v4 + *a1 + 0xC) = 0;
      ++v3;
      v4 += 0x10;
    }
    while ( v3 < a1[1] );
  }
  v5 = a1[1];
  if ( v5 > 0 )
  {
    v6 = 0;
    v7 = 1;
    v49 = 0;
    v48 = 1;
    do
    {
      v46 = v7;
      if ( v7 < v5 )
      {
        v44 = v6 + 0x10;
        v8 = v7 + 1;
        v47 = v7 + 1;
        do
        {
          v45 = v8;
          if ( v8 < v5 )
          {
            v9 = v44 + 0x10;
            do
            {
              v10 = *v2;
              v11 = *(_DWORD *)(*v2 + v6 + 0xC);
              v12 = (_DWORD *)(*v2 + v6 + 0xC);
              if ( v11 != 0x3F800000
                && *(_DWORD *)(v44 + v10 + 0xC) != 0x3F800000
                && *(_DWORD *)(v9 + v10 + 0xC) != 0x3F800000 )
              {
                v6 = v49;
                v13 = *(__m128 *)(v10 + v49);
                v53 = *(__m128 *)(v44 + v10);
                v14 = _mm_sub_ps(v13, v53);
                v15 = _mm_mul_ps(v14, v14);
                v15.m128_f32[0] = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
                                + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
                v50 = 1.0 / fsqrt(v15.m128_f32[0]);
                v16 = (__m128)0x3F000000u;
                v17 = 3.0 - (float)((float)(v15.m128_f32[0] * v50) * v50);
                v18 = (__m128)0x3F000000u;
                v18.m128_f32[0] = (float)(0.5 * v50) * v17;
                v19 = *(__m128 *)(v9 + v10);
                v20 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v14);
                v21 = _mm_sub_ps(v13, v19);
                v22 = _mm_sub_ps(v19, v53);
                v55 = _mm_xor_ps(v20, *(__m128 *)0xA965C0);
                v23 = _mm_mul_ps(v21, v21);
                v24 = _mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0];
                v25 = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0];
                v51 = 1.0 / fsqrt(v25 + v24);
                v26 = (__m128)0x3F000000u;
                v26.m128_f32[0] = (float)(0.5 * v51) * (float)(3.0 - (float)((float)((float)(v25 + v24) * v51) * v51));
                v27 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v21);
                v54 = _mm_xor_ps(v27, *(__m128 *)0xA965C0);
                v28 = _mm_mul_ps(v22, v22);
                v29 = _mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0];
                v30 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0];
                v52 = 1.0 / fsqrt(v30 + v29);
                v16.m128_f32[0] = (float)(0.5 * v52) * (float)(3.0 - (float)((float)((float)(v30 + v29) * v52) * v52));
                v31 = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v22);
                v32 = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0xC9), _mm_shuffle_ps(v27, v27, 0xD2)),
                        _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0xD2), _mm_shuffle_ps(v27, v27, 0xC9)));
                v33 = _mm_mul_ps(v32, v32);
                v34 = _mm_xor_ps(v31, *(__m128 *)0xA965C0);
                if ( (float)(_mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0]
                           + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0])) >= (double)a2
                  || (v35 = _mm_mul_ps(v20, v27),
                      (float)(_mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0])) >= (double)*(float *)&SrcStr) )
                {
                  v36 = _mm_sub_ps(
                          _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xC9), _mm_shuffle_ps(v54, v54, 0xD2)),
                          _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xD2), _mm_shuffle_ps(v54, v54, 0xC9)));
                  v37 = _mm_mul_ps(v36, v36);
                  if ( (float)(_mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0]
                             + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0])) >= (double)a2
                    || (v38 = _mm_mul_ps(v31, v54),
                        (float)(_mm_shuffle_ps(v38, v38, 0xAA).m128_f32[0]
                              + (float)(_mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0])) >= (double)*(float *)&SrcStr) )
                  {
                    v39 = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(v55, v55, 0xC9), _mm_shuffle_ps(v34, v34, 0xD2)),
                            _mm_mul_ps(_mm_shuffle_ps(v55, v55, 0xD2), _mm_shuffle_ps(v34, v34, 0xC9)));
                    v40 = _mm_mul_ps(v39, v39);
                    if ( (float)(_mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0]
                               + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0])) < (double)a2 )
                    {
                      v41 = _mm_mul_ps(v55, v34);
                      if ( (float)(_mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]
                                 + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0])) < (double)*(float *)&SrcStr )
                        *(_DWORD *)(v44 + v10 + 0xC) = 0x3F800000;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(v9 + v10 + 0xC) = 0x3F800000;
                  }
                }
                else
                {
                  *v12 = 0x3F800000;
                }
              }
              v9 += 0x10;
              v42 = ++v45 < a1[1];
              v2 = a1;
            }
            while ( v42 );
            v7 = v48;
            v8 = v47;
          }
          v44 += 0x10;
          v5 = v2[1];
          ++v8;
          v42 = ++v46 < v5;
          v47 = v8;
        }
        while ( v42 );
      }
      v5 = v2[1];
      ++v7;
      v6 += 0x10;
      v48 = v7;
      v49 = v6;
    }
    while ( v7 - 1 < v5 );
  }
  return sub_92EB50((int)v2);
}
