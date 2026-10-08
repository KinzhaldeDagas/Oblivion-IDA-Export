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

  v3 = *(this + 4); /*0x93682d*/
  v4 = a3[3].m128_i32[3] & 0xF; /*0x936831*/
  v5 = *((float *)this + v4 + 0x1C); /*0x936834*/
  v6 = a3[3].m128_i32[2] & 0xF; /*0x936838*/
  v7 = *(__m128 *)((char *)&unk_AA1CC0 + (a3[3].m128_i8[8] & 0x70)); /*0x936845*/
  *(float *)&v41 = v5 + v5; /*0x936848*/
  v8 = a3[3].m128_i8[0xC]; /*0x936852*/
  v9 = *((float *)this + v6 + 0x18) * flt_A53954; /*0x936855*/
  v10 = *(this + 7); /*0x936861*/
  v36 = v9; /*0x936865*/
  v44 = _mm_mul_ps(v7, *(this + 6)); /*0x936869*/
  v11 = _mm_mul_ps(*(__m128 *)((char *)&unk_AA1CC0 + (v8 & 0x70)), v10); /*0x936879*/
  v12 = _mm_mul_ps(_mm_shuffle_ps((__m128)v41, (__m128)v41, 0), *(this + v4 + 2)); /*0x936896*/
  v13 = *(this + 5); /*0x936899*/
  v45 = v12; /*0x93689d*/
  v37 = v9 * v45.m128_f32[v6]; /*0x9368ad*/
  v14 = *((float *)this + v4 + 0x1C); /*0x9368bc*/
  v38 = v14 * v14 * flt_A46B10; /*0x9368de*/
  v15 = _mm_sub_ps( /*0x9368f8*/
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(*(this + 2), _mm_shuffle_ps(v11, v11, 0)),
              _mm_mul_ps(*(this + 3), _mm_shuffle_ps(v11, v11, 0x55))),
            _mm_add_ps(_mm_mul_ps(v3, _mm_shuffle_ps(v11, v11, 0xAA)), v13)),
          v44);
  v16 = _mm_mul_ps(v12, v15); /*0x9368fe*/
  v46 = v15; /*0x936927*/
  v40 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x93692c*/
      + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
  v39 = fabs(v36 * v36 * v38 - v37 * v37); /*0x936934*/
  v34 = v36 * v46.m128_f32[v6] * v38 - v40 * v37; /*0x93694e*/
  if ( flt_B3058C * v39 >= v34 ) /*0x936965*/
    goto LABEL_10; /*0x936965*/
  v17 = fConstant_1 - flt_B3058C; /*0x936971*/
  v42 = v17; /*0x936977*/
  if ( v17 * v39 <= v34 ) /*0x936988*/
    goto LABEL_10; /*0x936988*/
  v18 = v34 / v39; /*0x936992*/
  v35 = v18; /*0x936996*/
  v19 = v18 * v37 - v40; /*0x93699e*/
  if ( v19 <= flt_B3058C * v38 ) /*0x9369b5*/
    goto LABEL_10; /*0x9369b5*/
  if ( v19 >= v42 * v38 ) /*0x9369cc*/
    goto LABEL_10; /*0x9369cc*/
  v45 = 0; /*0x9369dd*/
  v44.m128_f32[v6] = v35 * v36 + v44.m128_f32[v6]; /*0x9369fe*/
  v45.m128_f32[v6] = v36 * kHeadBodyNormalMatchRadius; /*0x936a14*/
  v20 = _mm_sub_ps( /*0x936a3b*/
          _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0xC9), _mm_shuffle_ps(v12, v12, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0xD2), _mm_shuffle_ps(v12, v12, 0xC9)));
  v21 = _mm_mul_ps(v20, v20); /*0x936a41*/
  v22 = _mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]; /*0x936a4b*/
  v23 = _mm_shuffle_ps(v21, v21, 0xAA); /*0x936a52*/
  v24 = v23; /*0x936a56*/
  v24.m128_f32[0] = v23.m128_f32[0] + v22; /*0x936a59*/
  v45 = v24; /*0x936a5d*/
  v45.m128_f32[0] = 1.0 / fsqrt(v23.m128_f32[0] + v22); /*0x936a66*/
  v25 = 3.0 - (float)((float)((float)(v23.m128_f32[0] + v22) * v45.m128_f32[0]) * v45.m128_f32[0]); /*0x936a7c*/
  v26 = (__m128)0x3F000000u; /*0x936a80*/
  v26.m128_f32[0] = 0.5 * v45.m128_f32[0]; /*0x936a86*/
  v27 = v26; /*0x936a8a*/
  v27.m128_f32[0] = (float)(0.5 * v45.m128_f32[0]) * v25; /*0x936a8d*/
  v28 = _mm_shuffle_ps(v27, v27, 0); /*0x936a91*/
  v29 = _mm_mul_ps(v28, v20); /*0x936aae*/
  if ( (float)(v24.m128_f32[0] * v28.m128_f32[0]) < (double)*((float *)this + 0x2D) ) /*0x936ab6*/
    goto LABEL_10; /*0x936ab6*/
  v30 = _mm_mul_ps(v29, v7); /*0x936abf*/
  if ( (float)(_mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0] /*0x936aef*/
             + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0])) < (double)*(float *)&SrcStr )
    v29 = _mm_xor_ps(v29, (__m128)xmmword_A965C0); /*0x936af8*/
  v31 = _mm_mul_ps(v29, v15); /*0x936afe*/
  v43 = _mm_shuffle_ps(v31, v31, 0xAA).m128_f32[0] /*0x936b1b*/
      + (float)(_mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]);
  if ( v43 > (double)*((float *)this + 0x2C) ) /*0x936b2e*/
  {
LABEL_10:
    *a2 = 0; /*0x936b61*/
    return a2; /*0x936b5d*/
  }
  else
  {
    *a3 = v44; /*0x936b39*/
    v32 = (__m128)xmmword_A965C0; /*0x936b3c*/
    a3[3].m128_f32[1] = v43; /*0x936b43*/
    a3[2] = _mm_xor_ps(v29, v32); /*0x936b4c*/
    *a2 = 1; /*0x936b50*/
    return a2; /*0x936b46*/
  }
}
