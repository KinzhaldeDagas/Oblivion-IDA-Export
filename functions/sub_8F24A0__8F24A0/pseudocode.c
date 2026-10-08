int __thiscall sub_8F24A0(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  float v6; // xmm3_4
  float v7; // xmm4_4
  __m128 v8; // xmm0
  long double v9; // st7
  long double v10; // st7
  long double v11; // st6
  BOOL v12; // edi
  long double v13; // st7
  int v14; // ecx
  __m128 v15; // xmm1
  BOOL v16; // eax
  int v17; // eax
  double v18; // st7
  double v19; // st6
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  int result; // eax
  float v23; // [esp+8h] [ebp-Ch]
  float v24; // [esp+Ch] [ebp-8h]
  float v25; // [esp+Ch] [ebp-8h]
  float v26; // [esp+10h] [ebp-4h]
  float v27; // [esp+10h] [ebp-4h]
  float v28; // [esp+10h] [ebp-4h]
  float v29; // [esp+10h] [ebp-4h]
  unsigned int v30; // [esp+10h] [ebp-4h]
  unsigned int v31; // [esp+10h] [ebp-4h]

  v4 = _mm_sub_ps(*(this + 3), *(this + 2)); /*0x8f24bb*/
  v5 = _mm_mul_ps(*(this + 4), *a2); /*0x8f24c2*/
  v6 = _mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]; /*0x8f24cc*/
  v7 = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0]; /*0x8f24d3*/
  v8 = _mm_mul_ps(*(this + 5), *a2); /*0x8f24df*/
  v24 = v7 + v6; /*0x8f24e6*/
  v23 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]); /*0x8f2504*/
  v9 = v23 * v23 + v24 * v24; /*0x8f2519*/
  if ( v9 < flt_A97F48 ) /*0x8f2526*/
  {
    v12 = 1; /*0x8f255c*/
    v10 = *(float *)&SrcStr; /*0x8f2561*/
    v11 = fConstant_1; /*0x8f2567*/
  }
  else
  {
    v26 = fConstant_1 / sqrt(v9); /*0x8f2530*/
    v10 = v23 * v26; /*0x8f2538*/
    v11 = v24 * v26; /*0x8f2540*/
    v12 = v10 >= *(float *)&SrcStr; /*0x8f2551*/
  }
  v27 = fabs(v10); /*0x8f258b*/
  v13 = fabs(v11); /*0x8f258f*/
  if ( v27 > v13 ) /*0x8f259c*/
  {
    v14 = 0; /*0x8f25e2*/
  }
  else
  {
    v14 = 1; /*0x8f25a0*/
    v13 = v27; /*0x8f25a5*/
  }
  v15 = _mm_mul_ps(v4, *a2); /*0x8f25a9*/
  v16 = (float)(_mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x8f25d9*/
              + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0])) <= (double)*(float *)&SrcStr;
  v28 = flt_B2FDBC * v13 - flt_B2FDC4 + flt_A43328; /*0x8f25fc*/
  v17 = (int)v28 + 0x10 * (v14 + 2 * ((v11 >= *(float *)&SrcStr) + 2 * (v12 + 2 * v16))); /*0x8f261a*/
  v18 = ((double)(v17 & 0xF) + kHeadBodyNormalMatchRadius) * flt_B2FDC0; /*0x8f2655*/
  if ( (v17 & 0x10) != 0 ) /*0x8f265f*/
  {
    v25 = v18; /*0x8f2661*/
    v18 = sqrt(fConstant_1 - v18 * v18); /*0x8f266f*/
  }
  else
  {
    v29 = v18; /*0x8f265b*/
    v25 = sqrt(fConstant_1 - v29 * v29); /*0x8f2683*/
  }
  v19 = v25; /*0x8f2689*/
  if ( (v17 & 0x40) == 0 ) /*0x8f268d*/
    v19 = -v19; /*0x8f268f*/
  if ( (v17 & 0x20) == 0 ) /*0x8f2697*/
    v18 = -v18; /*0x8f269d*/
  *(float *)&v30 = v18; /*0x8f26a8*/
  v20 = (__m128)v30; /*0x8f26ac*/
  *(float *)&v31 = v19; /*0x8f26b4*/
  v21 = _mm_add_ps( /*0x8f2705*/
          *(this + 3 - ((unsigned __int8)v17 >> 7 != 0)),
          _mm_mul_ps(
            _mm_shuffle_ps((__m128)*((unsigned int *)this + 4), (__m128)*((unsigned int *)this + 4), 0),
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), *(this + 4)),
              _mm_mul_ps(_mm_shuffle_ps((__m128)v31, (__m128)v31, 0), *(this + 5)))));
  result = v17 | 0x3F000000; /*0x8f2708*/
  *a3 = v21; /*0x8f270e*/
  a3->m128_i32[3] = result; /*0x8f2711*/
  return result; /*0x8f2715*/
}
