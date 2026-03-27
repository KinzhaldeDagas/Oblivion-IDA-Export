void __usercall sub_8EC0A0(
        __m128 *a1@<eax>,
        _DWORD *a2@<edx>,
        __m128 *a3@<ecx>,
        __m128 *a4,
        int a5,
        __m128 *a6,
        __m128 *a7)
{
  __m128 *v7; // ebx
  __m128 v10; // xmm3
  __m128 *v11; // ecx
  __m128 v12; // xmm2
  __m128 v13; // xmm4
  __m128 v14; // xmm1
  __m128 v15; // xmm7
  __m128 v16; // xmm0
  __m128 v17; // xmm5
  __m128 v18; // xmm6
  __m128 v19; // xmm4
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  float v25; // [esp+10h] [ebp-70h]
  int v26; // [esp+10h] [ebp-70h]
  unsigned int v27; // [esp+1Ch] [ebp-64h]
  __m128 v28; // [esp+20h] [ebp-60h]
  __m128 v29; // [esp+30h] [ebp-50h]
  __m128 v30; // [esp+40h] [ebp-40h]
  __m128 v31; // [esp+70h] [ebp-10h]

  v7 = a1;
  v10 = *a1;
  v11 = a4;
  v12 = *a4;
  v29 = _mm_shuffle_ps(v10, v10, 0xC9);
  v30 = _mm_shuffle_ps(v10, v10, 0xD2);
  v13 = _mm_shuffle_ps(v12, v12, 0xD2);
  v14 = _mm_shuffle_ps(v12, v12, 0xC9);
  v15 = _mm_sub_ps(_mm_mul_ps(v29, v13), _mm_mul_ps(v30, v14));
  v16 = *a3;
  v17 = _mm_shuffle_ps(v16, v16, 0xC9);
  v18 = _mm_shuffle_ps(*a3, *a3, 0xD2);
  v19 = _mm_sub_ps(_mm_mul_ps(v14, v18), _mm_mul_ps(v13, v17));
  v31 = _mm_sub_ps(_mm_mul_ps(v17, v30), _mm_mul_ps(v18, v29));
  v20 = _mm_mul_ps(v15, *a3);
  v25 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  if ( fabs(v25) < flt_A9AFD8 )
    goto LABEL_3;
  v21 = _mm_mul_ps(v12, a4[1]);
  v22 = _mm_mul_ps(v10, a1[1]);
  v23 = _mm_mul_ps(v16, a3[1]);
  v28.m128_f32[0] = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
  *(unsigned __int64 *)((char *)v28.m128_u64 + 4) = __PAIR64__(
                                                      _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]
                                                    + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0]
                                                            + v21.m128_f32[0]),
                                                      _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0]
                                                    + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0]
                                                            + v22.m128_f32[0]));
  v28.m128_i32[3] = 0;
  *(float *)&v27 = fConstant_1 / v25;
  v24 = _mm_mul_ps(
          _mm_shuffle_ps((__m128)v27, (__m128)v27, 0),
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(v15, _mm_shuffle_ps(v28, v28, 0)), _mm_mul_ps(v19, _mm_shuffle_ps(v28, v28, 0x55))),
            _mm_mul_ps(v31, _mm_shuffle_ps(v28, v28, 0xAA))));
  if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v24, (__m128)xmmword_A372D0), *(__m128 *)(a2[0xE] + 0x20))) & 7) == 7 )
  {
    *a7 = v24;
  }
  else
  {
LABEL_3:
    if ( a5 )
    {
      sub_8EB7E0((int)a2);
      v11 = (__m128 *)a2[7];
      a3 = (__m128 *)a2[1];
      v7 = (__m128 *)a2[4];
      a4 = v11;
    }
    *(_DWORD *)(0x10 * (((int)a3 - *(_DWORD *)(a2[0xE] + 0x48)) >> 6) + *(_DWORD *)(a2[0xF] + 0x24) + 0xC) = 1;
    *(_DWORD *)(0x10 * (((int)v7 - *(_DWORD *)(a2[0xE] + 0x48)) >> 6) + *(_DWORD *)(a2[0xF] + 0x24) + 0xC) = 1;
    *(_DWORD *)(0x10 * (((int)v11 - *(_DWORD *)(a2[0xE] + 0x48)) >> 6) + *(_DWORD *)(a2[0xF] + 0x24) + 0xC) = 1;
    v26 = a2[0xC];
    sub_8EBCD0((int)a2, a3, v7, a6, a7);
    if ( v26 == a2[0xC] )
      sub_8EBCD0((int)a2, a3, a4, a7, a7);
    if ( v26 == a2[0xC] )
      sub_8EBCD0((int)a2, v7, a4, a7, a7);
  }
}
