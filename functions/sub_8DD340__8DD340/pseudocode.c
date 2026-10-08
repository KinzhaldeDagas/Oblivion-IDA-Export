int __cdecl sub_8DD340(__m128 *a1, float a2, float a3, __m128 *a4)
{
  __m128 v4; // xmm4
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  double v8; // st7
  __m128 v9; // xmm0
  double v11; // st7
  unsigned __int8 v12; // c0
  unsigned __int8 v13; // c2
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm0
  float v21; // xmm3_4
  __m128 v22; // xmm0
  int result; // eax
  __m128 v24; // xmm0
  float v25; // [esp+0h] [ebp-18h]
  float v26; // [esp+4h] [ebp-14h]
  unsigned int v27; // [esp+4h] [ebp-14h]
  unsigned int v28; // [esp+4h] [ebp-14h]
  unsigned int v29; // [esp+4h] [ebp-14h]
  __m128 v30; // [esp+8h] [ebp-10h] BYREF

  v4 = a1[3]; /*0x8dd358*/
  v5 = _mm_add_ps(a1[2], v4); /*0x8dd35f*/
  v6 = _mm_mul_ps(v5, v5); /*0x8dd368*/
  v7 = _mm_add_ps(_mm_shuffle_ps(v6, v6, 0x4E), v6); /*0x8dd372*/
  v26 = v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 0xB1).m128_f32[0]; /*0x8dd386*/
  v25 = (a2 - a1->m128_f32[3] + a3) * a1[1].m128_f32[3]; /*0x8dd38a*/
  v8 = flt_A41328 - v26 * flt_A9A480; /*0x8dd398*/
  *(float *)&v27 = (flt_A35AA4 - v26 * v8 * v8 * kHeadBodyNormalMatchRadius) * v8; /*0x8dd3b4*/
  v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)v27, (__m128)v27, 0), v5); /*0x8dd3d4*/
  v11 = v25 + v25; /*0x8dd3db*/
  if ( v12 | v13 ) /*0x8dd3df*/
  {
    *(float *)&v28 = v11; /*0x8dd3e4*/
    v14 = _mm_shuffle_ps((__m128)v28, (__m128)v28, 0); /*0x8dd3ee*/
    v15 = _mm_mul_ps(v14, v9); /*0x8dd3f5*/
    v16 = _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v14), a1[2]); /*0x8dd405*/
  }
  else
  {
    *(float *)&v29 = v11 - fConstant_1; /*0x8dd417*/
    v17 = _mm_shuffle_ps((__m128)v29, (__m128)v29, 0); /*0x8dd421*/
    v15 = _mm_mul_ps(v17, v4); /*0x8dd42e*/
    v16 = _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v17), v9); /*0x8dd431*/
  }
  v18 = _mm_add_ps(v16, v15); /*0x8dd437*/
  v19 = _mm_mul_ps(v18, v18); /*0x8dd43d*/
  v20 = _mm_add_ps(_mm_shuffle_ps(v19, v19, 0x4E), v19); /*0x8dd447*/
  v20.m128_f32[0] = v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 0xB1).m128_f32[0]; /*0x8dd451*/
  v19.m128_f32[0] = 1.0 / fsqrt(v20.m128_f32[0]); /*0x8dd463*/
  v21 = 3.0 - (float)((float)(v20.m128_f32[0] * v19.m128_f32[0]) * v19.m128_f32[0]); /*0x8dd47e*/
  v22 = (__m128)0x3F000000u; /*0x8dd48a*/
  v22.m128_f32[0] = (float)(0.5 * v19.m128_f32[0]) * v21; /*0x8dd494*/
  v30 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v18); /*0x8dd4a9*/
  result = hkMatrix3_SetFromQuaternion(a4->m128_f32, v30.m128_f32); /*0x8dd4ae*/
  v24 = _mm_shuffle_ps((__m128)LODWORD(v25), (__m128)LODWORD(v25), 0); /*0x8dd4cc*/
  a4[3] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v24), *a1), _mm_mul_ps(v24, a1[1])); /*0x8dd4e2*/
  a4[3] = _mm_sub_ps( /*0x8dd521*/
            a4[3],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*a4, _mm_shuffle_ps(a1[4], a1[4], 0)),
                _mm_mul_ps(a4[1], _mm_shuffle_ps(a1[4], a1[4], 0x55))),
              _mm_mul_ps(a4[2], _mm_shuffle_ps(a1[4], a1[4], 0xAA))));
  return result; /*0x8dd526*/
}
