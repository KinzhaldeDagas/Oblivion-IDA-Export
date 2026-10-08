int __thiscall sub_952190(__m128 **this)
{
  __m128 v2; // xmm0
  long double v3; // st7
  int v4; // ecx
  long double v5; // st6
  int v6; // edx
  int v7; // edi
  __int32 v8; // eax
  double v9; // st7
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 *v12; // eax
  float v13; // xmm5_4
  float v14; // xmm6_4
  __m128 v15; // xmm4
  __m128 v16; // xmm0
  __m128 v17; // xmm5
  __m128 v18; // xmm0
  int v19; // edi
  __int32 v20; // ecx
  __m128 v21; // xmm0
  _DWORD *v22; // esi
  int result; // eax
  float v24; // [esp+4h] [ebp-A8h] BYREF
  float v25; // [esp+8h] [ebp-A4h] BYREF
  __m128 v26; // [esp+Ch] [ebp-A0h] BYREF
  __m128 v27; // [esp+1Ch] [ebp-90h] BYREF
  __m128 v28[4]; // [esp+2Ch] [ebp-80h] BYREF
  __m128 v29[4]; // [esp+6Ch] [ebp-40h] BYREF

  v2 = _mm_sub_ps(**(this + 0x1A), (*(this + 0x1A))[1]); /*0x9521a9*/
  v26 = v2; /*0x9521ac*/
  v3 = fabs(v2.m128_f32[0]); /*0x9521b5*/
  v4 = 0; /*0x9521b7*/
  v5 = fabs(v2.m128_f32[1]); /*0x9521bd*/
  v25 = v5; /*0x9521c0*/
  v6 = 1; /*0x9521c8*/
  v7 = 2; /*0x9521cf*/
  v24 = fabs(v2.m128_f32[2]); /*0x9521d4*/
  if ( v5 < v3 ) /*0x9521df*/
  {
    v6 = 0; /*0x9521e3*/
    v3 = v25; /*0x9521e5*/
    v4 = 1; /*0x9521e9*/
  }
  if ( v24 < v3 ) /*0x9521fb*/
  {
    v7 = v4; /*0x9521fd*/
    v4 = 2; /*0x9521ff*/
  }
  v8 = v26.m128_i32[v7]; /*0x952208*/
  v9 = -v26.m128_f32[v6]; /*0x95220f*/
  v27.m128_i32[v4] = 0; /*0x95221c*/
  v27.m128_i32[3] = 0; /*0x952224*/
  v27.m128_i32[v6] = v8; /*0x95222c*/
  v27.m128_f32[v7] = v9; /*0x952230*/
  v10 = _mm_sub_ps( /*0x952253*/
          _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0xC9), _mm_shuffle_ps(v27, v27, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0xD2), _mm_shuffle_ps(v27, v27, 0xC9)));
  v11 = _mm_mul_ps(v27, v27); /*0x952259*/
  v12 = *(this + 0x1A); /*0x95226e*/
  v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0] /*0x952274*/
                  + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
  v13 = 1.0 / fsqrt(v11.m128_f32[0]); /*0x952287*/
  v14 = 3.0 - (float)((float)(v11.m128_f32[0] * v13) * v13); /*0x9522a5*/
  v24 = 0.5; /*0x9522a9*/
  v15 = (__m128)0x3F000000u; /*0x9522b1*/
  v16 = (__m128)0x3F000000u; /*0x9522b7*/
  v16.m128_f32[0] = (float)(0.5 * v13) * v14; /*0x9522be*/
  v17 = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v27); /*0x9522c9*/
  v18 = _mm_mul_ps(v10, v10); /*0x9522cf*/
  v27 = v17; /*0x9522dd*/
  v18.m128_f32[0] = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x9522ec*/
                  + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
  v26.m128_f32[0] = 1.0 / fsqrt(v18.m128_f32[0]); /*0x9522f9*/
  v15.m128_f32[0] = (float)(0.5 * v26.m128_f32[0]) /*0x95231e*/
                  * (float)(3.0 - (float)((float)(v18.m128_f32[0] * v26.m128_f32[0]) * v26.m128_f32[0]));
  v26 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v10); /*0x952334*/
  sub_951DF0((__m128 *)this, &v27, v12, v28, &v24); /*0x952339*/
  sub_951DF0((__m128 *)this, &v26, *(this + 0x1A), v29, &v25); /*0x952353*/
  v19 = (int)*(this + 0x1A); /*0x952360*/
  v20 = (*(this + 0x1B))->m128_i32[0]; /*0x95236b*/
  if ( v24 <= (double)v25 ) /*0x95236d*/
  {
    *(__m128 *)(0x10 * v20 + v19) = v29[0]; /*0x9523a1*/
    (*(this + 0x18))[(*(this + 0x1B))->m128_i32[0]] = v29[1]; /*0x9523bc*/
    v21 = v29[2]; /*0x9523bf*/
  }
  else
  {
    *(__m128 *)(0x10 * v20 + v19) = v28[0]; /*0x952377*/
    (*(this + 0x18))[(*(this + 0x1B))->m128_i32[0]] = v28[1]; /*0x95238f*/
    v21 = v28[2]; /*0x952392*/
  }
  (*(this + 0x19))[(*(this + 0x1B))->m128_i32[0]] = v21; /*0x9523d4*/
  v22 = *(this + 0x1B); /*0x9523d7*/
  result = *v22 + 1; /*0x9523dc*/
  *v22 = result; /*0x9523de*/
  return result; /*0x9523e0*/
}
