void __usercall sub_8EBCD0(int a1@<edi>, __m128 *a2, __m128 *a3, __m128 *a4, __m128 *a5)
{
  __m128 v5; // xmm6
  __m128 v6; // xmm0
  __m128 v7; // xmm7
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  __m128 v10; // xmm0
  __m128 v11; // xmm5
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm7
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  __m128 v21; // xmm1
  __m128 *v22; // eax
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  __m128 v25; // xmm3
  float v26; // xmm5_4
  __m128 v27; // xmm3
  __m128 v28; // xmm2
  long double v29; // st7
  double v30; // st5
  double v31; // st6
  double v32; // st5
  float v33; // [esp+Ch] [ebp-40h]
  float v34; // [esp+10h] [ebp-3Ch]
  float v35; // [esp+10h] [ebp-3Ch]
  float v36; // [esp+10h] [ebp-3Ch]
  float v37; // [esp+14h] [ebp-38h]
  unsigned int v38; // [esp+14h] [ebp-38h]
  float v39; // [esp+18h] [ebp-34h]
  unsigned int v40; // [esp+18h] [ebp-34h]
  __m128 v41; // [esp+1Ch] [ebp-30h]
  __m128 v42; // [esp+1Ch] [ebp-30h]
  __m128 v43; // [esp+2Ch] [ebp-20h]

  v5 = *a3;
  v6 = *a2;
  v43 = _mm_shuffle_ps(v6, v6, 0xD2);
  v41 = _mm_shuffle_ps(v6, v6, 0xC9);
  v7 = _mm_shuffle_ps(v5, v5, 0xD2);
  v8 = _mm_shuffle_ps(v5, v5, 0xC9);
  v9 = _mm_sub_ps(_mm_mul_ps(v41, v7), _mm_mul_ps(v43, v8));
  v10 = _mm_mul_ps(v9, v9);
  v37 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
  if ( v37 <= (double)flt_A9AFD8 )
    goto LABEL_3;
  *(float *)&v38 = fConstant_1 / sqrt(v37);
  v11 = (__m128)v38;
  v12 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v9);
  v13 = _mm_shuffle_ps(v12, v12, 0xC9);
  v14 = _mm_shuffle_ps(v12, v12, 0xD2);
  v15 = _mm_sub_ps(_mm_mul_ps(v8, v14), _mm_mul_ps(v7, v13));
  v16 = _mm_mul_ps(v14, v41);
  v17 = _mm_mul_ps(v13, v43);
  v18 = _mm_mul_ps(v5, a3[1]);
  v19 = _mm_sub_ps(v17, v16);
  v16.m128_f32[0] = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
  v20 = _mm_mul_ps(*a2, a2[1]);
  v34 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  v21 = _mm_mul_ps(v12, _mm_add_ps(a2[1], a3[1]));
  v22 = *(__m128 **)(a1 + 0x38);
  v42.m128_f32[1] = v34;
  v42.m128_u64[1] = v16.m128_u32[0];
  v42.m128_f32[0] = (float)(_mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]))
                  * flt_A3D65C;
  v23 = _mm_mul_ps(
          _mm_shuffle_ps(v11, v11, 0),
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(v9, _mm_shuffle_ps(v42, v42, 0)), _mm_mul_ps(v15, _mm_shuffle_ps(v42, v42, 0x55))),
            _mm_mul_ps(v19, _mm_shuffle_ps(v42, v42, 0xAA))));
  if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v23, (__m128)xmmword_A372D0), v22[2])) & 7) == 7 )
  {
    v24 = _mm_sub_ps(*a4, v23);
    v25 = _mm_mul_ps(v24, v24);
    v26 = _mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0]);
    v27 = _mm_mul_ps(v22[3], v12);
    v28 = _mm_mul_ps(v24, v12);
    v33 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]);
    v29 = v33;
    v35 = _mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]);
    if ( v33 * v35 <= *(float *)&SrcStr )
      v30 = a2[2].m128_f32[2] + a3[2].m128_f32[2];
    else
      v30 = a2[2].m128_f32[1] + a3[2].m128_f32[1];
    v31 = (a2[2].m128_f32[0] + a3[2].m128_f32[0] + v30 * v35) * flt_A3D65C;
    v36 = (a2[2].m128_f32[3] + a3[2].m128_f32[3]) * flt_A3D65C;
    v32 = v33 * v33;
    if ( (v26 - v32) * (v31 * v31) < v32 )
    {
      if ( v36 < (double)fConstant_1 )
      {
        v39 = v32;
        if ( v26 * flt_A37080 < v39 )
          v29 = (fabs(fConstant_1 / v33) * sqrt(v26) * (fConstant_1 - v36) + v36) * v33;
      }
      *(float *)&v40 = v29;
      *a5 = _mm_add_ps(v23, _mm_mul_ps(_mm_shuffle_ps((__m128)v40, (__m128)v40, 0), v12));
    }
    else
    {
      *a5 = v23;
    }
  }
  else
  {
LABEL_3:
    sub_8EB7E0(a1);
    *(_DWORD *)(0x10 * (((int)a2 - *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 0x48)) >> 6)
              + *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x24)
              + 0xC) = 2;
    *(_DWORD *)(0x10 * (((int)a3 - *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 0x48)) >> 6)
              + *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x24)
              + 0xC) = 2;
    if ( a2[3].m128_i32[0] <= a3[3].m128_i32[0] )
    {
      sub_8EB970(a2, a5, a1, a4);
      sub_8EB970(a3, a5, a1, a5);
    }
    else
    {
      sub_8EB970(a3, a5, a1, a5);
      sub_8EB970(a2, a5, a1, a4);
    }
  }
}
