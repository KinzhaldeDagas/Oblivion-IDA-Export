_BYTE *__thiscall sub_936810(__m128 *this, _BYTE *a2, __m128 *a3)
{
  __m128 v3; // xmm6
  __int32 v4; // esi
  double v5; // st7
  __int32 v6; // edx
  __m128 v7; // xmm5
  __int8 v8; // al
  double v9; // st7
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 v13; // xmm3
  double v14; // st6
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  double v17; // st7
  double v18; // st7
  double v19; // st7
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  float v22; // xmm2_4
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  float v25; // xmm6_4
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm0
  __m128 v31; // xmm0
  __m128 v32; // xmm0
  float v34; // [esp+Ch] [ebp-4Ch]
  float v35; // [esp+Ch] [ebp-4Ch]
  float v36; // [esp+10h] [ebp-48h]
  float v37; // [esp+14h] [ebp-44h]
  float v38; // [esp+18h] [ebp-40h]
  float v39; // [esp+1Ch] [ebp-3Ch]
  float v40; // [esp+20h] [ebp-38h]
  unsigned int v41; // [esp+24h] [ebp-34h]
  float v42; // [esp+24h] [ebp-34h]
  float v43; // [esp+24h] [ebp-34h]
  __m128 v44; // [esp+28h] [ebp-30h]
  __m128 v45; // [esp+38h] [ebp-20h]
  __m128 v46; // [esp+48h] [ebp-10h]

  v3 = *(this + 4);
  v4 = a3[3].m128_i32[3] & 0xF;
  v5 = *((float *)this + v4 + 0x1C);
  v6 = a3[3].m128_i32[2] & 0xF;
  v7 = *(__m128 *)((char *)&unk_AA1CC0 + (a3[3].m128_i8[8] & 0x70));
  *(float *)&v41 = v5 + v5;
  v8 = a3[3].m128_i8[0xC];
  v9 = *((float *)this + v6 + 0x18) * flt_A53954;
  v10 = *(this + 7);
  v36 = v9;
  v44 = _mm_mul_ps(v7, *(this + 6));
  v11 = _mm_mul_ps(*(__m128 *)((char *)&unk_AA1CC0 + (v8 & 0x70)), v10);
  v12 = _mm_mul_ps(_mm_shuffle_ps((__m128)v41, (__m128)v41, 0), *(this + v4 + 2));
  v13 = *(this + 5);
  v45 = v12;
  v37 = v9 * v45.m128_f32[v6];
  v14 = *((float *)this + v4 + 0x1C);
  v38 = v14 * v14 * flt_A46B10;
  v15 = _mm_sub_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(*(this + 2), _mm_shuffle_ps(v11, v11, 0)),
              _mm_mul_ps(*(this + 3), _mm_shuffle_ps(v11, v11, 0x55))),
            _mm_add_ps(_mm_mul_ps(v3, _mm_shuffle_ps(v11, v11, 0xAA)), v13)),
          v44);
  v16 = _mm_mul_ps(v12, v15);
  v46 = v15;
  v40 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
  v39 = fabs(v36 * v36 * v38 - v37 * v37);
  v34 = v36 * v46.m128_f32[v6] * v38 - v40 * v37;
  if ( flt_B3058C * v39 >= v34 )
    goto LABEL_10;
  v17 = fConstant_1 - flt_B3058C;
  v42 = v17;
  if ( v17 * v39 <= v34 )
    goto LABEL_10;
  v18 = v34 / v39;
  v35 = v18;
  v19 = v18 * v37 - v40;
  if ( v19 <= flt_B3058C * v38 )
    goto LABEL_10;
  if ( v19 >= v42 * v38 )
    goto LABEL_10;
  v45 = 0;
  v44.m128_f32[v6] = v35 * v36 + v44.m128_f32[v6];
  v45.m128_f32[v6] = v36 * flt_A3D65C;
  v20 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0xC9), _mm_shuffle_ps(v12, v12, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0xD2), _mm_shuffle_ps(v12, v12, 0xC9)));
  v21 = _mm_mul_ps(v20, v20);
  v22 = _mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0];
  v23 = _mm_shuffle_ps(v21, v21, 0xAA);
  v24 = v23;
  v24.m128_f32[0] = v23.m128_f32[0] + v22;
  v45 = v24;
  v45.m128_f32[0] = 1.0 / fsqrt(v23.m128_f32[0] + v22);
  v25 = 3.0 - (float)((float)((float)(v23.m128_f32[0] + v22) * v45.m128_f32[0]) * v45.m128_f32[0]);
  v26 = (__m128)0x3F000000u;
  v26.m128_f32[0] = 0.5 * v45.m128_f32[0];
  v27 = v26;
  v27.m128_f32[0] = (float)(0.5 * v45.m128_f32[0]) * v25;
  v28 = _mm_shuffle_ps(v27, v27, 0);
  v29 = _mm_mul_ps(v28, v20);
  if ( (float)(v24.m128_f32[0] * v28.m128_f32[0]) < (double)*((float *)this + 0x2D) )
    goto LABEL_10;
  v30 = _mm_mul_ps(v29, v7);
  if ( (float)(_mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0])) < (double)*(float *)&SrcStr )
    v29 = _mm_xor_ps(v29, (__m128)xmmword_A965C0);
  v31 = _mm_mul_ps(v29, v15);
  v43 = _mm_shuffle_ps(v31, v31, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]);
  if ( v43 > (double)*((float *)this + 0x2C) )
  {
LABEL_10:
    *a2 = 0;
    return a2;
  }
  else
  {
    *a3 = v44;
    v32 = (__m128)xmmword_A965C0;
    a3[3].m128_f32[1] = v43;
    a3[2] = _mm_xor_ps(v29, v32);
    *a2 = 1;
    return a2;
  }
}
