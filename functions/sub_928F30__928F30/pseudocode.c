void __thiscall sub_928F30(float *this, unsigned int a2, __m128 *a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // edi
  double v7; // st7
  int v8; // esi
  int v9; // ecx
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  __m128 v15; // xmm2
  float v16; // xmm5_4
  __m128 v17; // xmm0
  __m128 *v18; // edx
  __m128 v19; // xmm3
  __m128 v20; // xmm0
  float v21; // xmm4_4
  float v22; // xmm5_4
  __m128 v23; // xmm0
  __m128 v24; // xmm4
  __m128 v25; // xmm3
  __m128 v26; // xmm0
  float v27; // xmm5_4
  __m128 v28; // xmm0
  double v29; // st7
  __m128 v30; // xmm3
  __m128 v31; // xmm0
  float v32; // xmm4_4
  float v33; // xmm5_4
  __m128 v34; // xmm0
  __m128 v35; // xmm4
  __m128 v36; // xmm3
  __m128 v37; // xmm0
  float v38; // [esp+4h] [ebp-24h]
  int v39; // [esp+8h] [ebp-20h]
  float v40; // [esp+8h] [ebp-20h]
  float v41; // [esp+8h] [ebp-20h]
  int v42; // [esp+Ch] [ebp-1Ch]
  float v43; // [esp+10h] [ebp-18h]
  unsigned int v44; // [esp+14h] [ebp-14h]
  unsigned int v45; // [esp+14h] [ebp-14h]
  float v46; // [esp+18h] [ebp-10h]

  v38 = *(this + 2);
  v43 = fConstant_1 / v38;
  v4 = sub_8ECB30(a2);
  v5 = *((_DWORD *)this + 9);
  v6 = v4 + 1;
  v39 = v4;
  v42 = v4 + 1;
  if ( v4 + 1 >= v5 )
  {
    v6 = v5 - 1;
    v4 = v5 - 2;
LABEL_5:
    v39 = v4;
    v42 = v6;
    goto LABEL_6;
  }
  if ( v4 < 0 )
  {
    v4 = 0;
    v6 = 1;
    goto LABEL_5;
  }
LABEL_6:
  v7 = *(float *)&a2 - (double)v39;
  v8 = 0x10 * v4;
  v9 = 0x10 * v6;
  v10 = _mm_sub_ps(*(__m128 *)(0x10 * v6 + *((_DWORD *)this + 8)), *(__m128 *)(0x10 * v4 + *((_DWORD *)this + 8)));
  v11 = _mm_mul_ps(v10, v10);
  v12 = _mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0];
  v13 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0];
  v14 = 1.0 / fsqrt(v13 + v12);
  v11.m128_f32[0] = (float)((float)(v13 + v12) * v14) * v14;
  v15 = (__m128)0x3F000000u;
  v16 = 3.0 - v11.m128_f32[0];
  v17 = (__m128)0x3F000000u;
  v17.m128_f32[0] = (float)(0.5 * v14) * v16;
  *a3 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v10);
  if ( v7 >= v38 || v4 <= 0 )
  {
    v18 = a3;
  }
  else
  {
    --v6;
    v8 = 0x10 * (v4 - 1);
    v18 = a3;
    v9 = 0x10 * v6;
    v19 = _mm_sub_ps(*(__m128 *)(*((_DWORD *)this + 8) + 0x10 * v6), *(__m128 *)(*((_DWORD *)this + 8) + v8));
    v20 = _mm_mul_ps(v19, v19);
    v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
    v21 = 1.0 / fsqrt(v20.m128_f32[0]);
    v22 = 3.0 - (float)((float)(v20.m128_f32[0] * v21) * v21);
    v23 = (__m128)0x3F000000u;
    v23.m128_f32[0] = (float)(0.5 * v21) * v22;
    v40 = v7;
    *(float *)&v44 = (v38 - v40) * v43 * flt_A3D65C;
    v24 = _mm_shuffle_ps((__m128)v44, (__m128)v44, 0);
    v25 = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v24), *a3),
            _mm_mul_ps(v24, _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v19)));
    v26 = _mm_mul_ps(v25, v25);
    v26.m128_f32[0] = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
    v24.m128_f32[0] = 1.0 / fsqrt(v26.m128_f32[0]);
    v27 = 3.0 - (float)((float)(v26.m128_f32[0] * v24.m128_f32[0]) * v24.m128_f32[0]);
    v28 = (__m128)0x3F000000u;
    v28.m128_f32[0] = (float)(0.5 * v24.m128_f32[0]) * v27;
    v42 = v6;
    *a3 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v25);
  }
  v29 = (double)v42 - *(float *)&a2;
  if ( v29 < v38 && v6 < *((_DWORD *)this + 9) - 1 )
  {
    v30 = _mm_sub_ps(*(__m128 *)(*((_DWORD *)this + 8) + v9 + 0x10), *(__m128 *)(*((_DWORD *)this + 8) + v8 + 0x10));
    v31 = _mm_mul_ps(v30, v30);
    v31.m128_f32[0] = _mm_shuffle_ps(v31, v31, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]);
    v32 = 1.0 / fsqrt(v31.m128_f32[0]);
    v33 = 3.0 - (float)((float)(v31.m128_f32[0] * v32) * v32);
    v34 = (__m128)0x3F000000u;
    v34.m128_f32[0] = (float)(0.5 * v32) * v33;
    v41 = v29;
    *(float *)&v45 = (v38 - v41) * v43 * flt_A3D65C;
    v35 = _mm_shuffle_ps((__m128)v45, (__m128)v45, 0);
    v36 = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v35), *v18),
            _mm_mul_ps(v35, _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v30)));
    v37 = _mm_mul_ps(v36, v36);
    v37.m128_f32[0] = _mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0]);
    v46 = 1.0 / fsqrt(v37.m128_f32[0]);
    v15.m128_f32[0] = (float)(0.5 * v46) * (float)(3.0 - (float)((float)(v37.m128_f32[0] * v46) * v46));
    *v18 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v36);
  }
}
