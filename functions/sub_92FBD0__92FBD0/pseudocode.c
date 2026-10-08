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

  v2 = a1; /*0x92fbde*/
  v3 = 0; /*0x92fbe6*/
  if ( a1[1] > 0 ) /*0x92fbeb*/
  {
    v4 = 0; /*0x92fbed*/
    do /*0x92fbff*/
    {
      *(_DWORD *)(v4 + *a1 + 0xC) = 0; /*0x92fbf2*/
      ++v3; /*0x92fbf9*/
      v4 += 0x10; /*0x92fbfa*/
    }
    while ( v3 < a1[1] ); /*0x92fbff*/
  }
  v5 = a1[1]; /*0x92fc01*/
  if ( v5 > 0 ) /*0x92fc06*/
  {
    v6 = 0; /*0x92fc0c*/
    v7 = 1; /*0x92fc0e*/
    v49 = 0; /*0x92fc13*/
    v48 = 1; /*0x92fc17*/
    do /*0x930029*/
    {
      v46 = v7; /*0x92fc22*/
      if ( v7 < v5 ) /*0x92fc26*/
      {
        v44 = v6 + 0x10; /*0x92fc2f*/
        v8 = v7 + 1; /*0x92fc33*/
        v47 = v7 + 1; /*0x92fc36*/
        do /*0x93000f*/
        {
          v45 = v8; /*0x92fc42*/
          if ( v8 < v5 ) /*0x92fc46*/
          {
            v9 = v44 + 0x10; /*0x92fc50*/
            do /*0x92ffe3*/
            {
              v10 = *v2; /*0x92fc53*/
              v11 = *(_DWORD *)(*v2 + v6 + 0xC); /*0x92fc55*/
              v12 = (_DWORD *)(*v2 + v6 + 0xC); /*0x92fc5f*/
              if ( v11 != 0x3F800000 /*0x92fc8d*/
                && *(_DWORD *)(v44 + v10 + 0xC) != 0x3F800000
                && *(_DWORD *)(v9 + v10 + 0xC) != 0x3F800000 )
              {
                v6 = v49; /*0x92fc9b*/
                v13 = *(__m128 *)(v10 + v49); /*0x92fc9f*/
                v53 = *(__m128 *)(v44 + v10); /*0x92fca3*/
                v14 = _mm_sub_ps(v13, v53); /*0x92fcab*/
                v15 = _mm_mul_ps(v14, v14); /*0x92fcb1*/
                v15.m128_f32[0] = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x92fcc9*/
                                + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
                v50 = 1.0 / fsqrt(v15.m128_f32[0]); /*0x92fcd6*/
                v16 = (__m128)0x3F000000u; /*0x92fcff*/
                v17 = 3.0 - (float)((float)(v15.m128_f32[0] * v50) * v50); /*0x92fd08*/
                v18 = (__m128)0x3F000000u; /*0x92fd0c*/
                v18.m128_f32[0] = (float)(0.5 * v50) * v17; /*0x92fd13*/
                v19 = *(__m128 *)(v9 + v10); /*0x92fd21*/
                v20 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v14); /*0x92fd25*/
                v21 = _mm_sub_ps(v13, v19); /*0x92fd28*/
                v22 = _mm_sub_ps(v19, v53); /*0x92fd2b*/
                v55 = _mm_xor_ps(v20, *(__m128 *)0xA965C0); /*0x92fd3a*/
                v23 = _mm_mul_ps(v21, v21); /*0x92fd45*/
                v24 = _mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]; /*0x92fd4f*/
                v25 = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]; /*0x92fd56*/
                v51 = 1.0 / fsqrt(v25 + v24); /*0x92fd6a*/
                v26 = (__m128)0x3F000000u; /*0x92fd84*/
                v26.m128_f32[0] = (float)(0.5 * v51) * (float)(3.0 - (float)((float)((float)(v25 + v24) * v51) * v51)); /*0x92fd8b*/
                v27 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v21); /*0x92fd99*/
                v54 = _mm_xor_ps(v27, *(__m128 *)0xA965C0); /*0x92fda6*/
                v28 = _mm_mul_ps(v22, v22); /*0x92fdae*/
                v29 = _mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]; /*0x92fdb8*/
                v30 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0]; /*0x92fdbf*/
                v52 = 1.0 / fsqrt(v30 + v29); /*0x92fdd3*/
                v16.m128_f32[0] = (float)(0.5 * v52) * (float)(3.0 - (float)((float)((float)(v30 + v29) * v52) * v52)); /*0x92fdee*/
                v31 = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v22); /*0x92fdfc*/
                v32 = _mm_sub_ps( /*0x92fe24*/
                        _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0xC9), _mm_shuffle_ps(v27, v27, 0xD2)),
                        _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0xD2), _mm_shuffle_ps(v27, v27, 0xC9)));
                v33 = _mm_mul_ps(v32, v32); /*0x92fe27*/
                v34 = _mm_xor_ps(v31, *(__m128 *)0xA965C0); /*0x92fe52*/
                if ( (float)(_mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0] /*0x92fe90*/
                           + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0])) >= (double)a2
                  || (v35 = _mm_mul_ps(v20, v27),
                      (float)(_mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0])) >= (double)*(float *)&SrcStr) )
                {
                  v36 = _mm_sub_ps( /*0x92fec7*/
                          _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xC9), _mm_shuffle_ps(v54, v54, 0xD2)),
                          _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xD2), _mm_shuffle_ps(v54, v54, 0xC9)));
                  v37 = _mm_mul_ps(v36, v36); /*0x92feca*/
                  if ( (float)(_mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0] /*0x92ff29*/
                             + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0])) >= (double)a2
                    || (v38 = _mm_mul_ps(v31, v54),
                        (float)(_mm_shuffle_ps(v38, v38, 0xAA).m128_f32[0]
                              + (float)(_mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0])) >= (double)*(float *)&SrcStr) )
                  {
                    v39 = _mm_sub_ps( /*0x92ff63*/
                            _mm_mul_ps(_mm_shuffle_ps(v55, v55, 0xC9), _mm_shuffle_ps(v34, v34, 0xD2)),
                            _mm_mul_ps(_mm_shuffle_ps(v55, v55, 0xD2), _mm_shuffle_ps(v34, v34, 0xC9)));
                    v40 = _mm_mul_ps(v39, v39); /*0x92ff66*/
                    if ( (float)(_mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0] /*0x92ff93*/
                               + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0])) < (double)a2 )
                    {
                      v41 = _mm_mul_ps(v55, v34); /*0x92ff95*/
                      if ( (float)(_mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0] /*0x92ffc5*/
                                 + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0])) < (double)*(float *)&SrcStr )
                        *(_DWORD *)(v44 + v10 + 0xC) = 0x3F800000; /*0x92ffc7*/
                    }
                  }
                  else
                  {
                    *(_DWORD *)(v9 + v10 + 0xC) = 0x3F800000; /*0x92ff2b*/
                  }
                }
                else
                {
                  *v12 = 0x3F800000; /*0x92fe92*/
                }
              }
              v9 += 0x10; /*0x92ffd8*/
              v42 = ++v45 < a1[1]; /*0x92ffdb*/
              v2 = a1; /*0x92ffe1*/
            }
            while ( v42 ); /*0x92ffe3*/
            v7 = v48; /*0x92ffe9*/
            v8 = v47; /*0x92ffed*/
          }
          v44 += 0x10; /*0x92fffd*/
          v5 = v2[1]; /*0x930001*/
          ++v8; /*0x930004*/
          v42 = ++v46 < v5; /*0x930005*/
          v47 = v8; /*0x93000b*/
        }
        while ( v42 ); /*0x93000f*/
      }
      v5 = v2[1]; /*0x930015*/
      ++v7; /*0x930018*/
      v6 += 0x10; /*0x930019*/
      v48 = v7; /*0x930021*/
      v49 = v6; /*0x930025*/
    }
    while ( v7 - 1 < v5 ); /*0x930029*/
  }
  return sub_92EB50((int)v2); /*0x930038*/
}
