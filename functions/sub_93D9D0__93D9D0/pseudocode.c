double __cdecl sub_93D9D0(__m128 *a1, float *a2, __m128 *a3, float a4, float a5, float a6, float a7, int a8, float *a9)
{
  int v9; // edi
  double v10; // st7
  double v11; // st7
  __m128 v12; // xmm0
  float v13; // xmm2_4
  double result; // st7
  unsigned __int8 v16; // c0
  unsigned __int8 v17; // c2
  float v18; // [esp+14h] [ebp-11Ch]
  float v19; // [esp+18h] [ebp-118h]
  __m128 v20[12]; // [esp+20h] [ebp-110h] BYREF
  __m128 v21; // [esp+E0h] [ebp-50h]
  __m128 v22; // [esp+F0h] [ebp-40h]

  v18 = a4; /*0x93d9f1*/
  v9 = 0; /*0x93d9f5*/
  v19 = a2[4] * flt_A41304; /*0x93d9f7*/
  do /*0x93db09*/
  {
    if ( a6 <= (double)*a2 ) /*0x93da0a*/
      break; /*0x93da0a*/
    v10 = a7 - a6; /*0x93da13*/
    if ( v10 > -v19 ) /*0x93da25*/
      break; /*0x93da25*/
    v11 = (*a2 - a6) / v10; /*0x93da30*/
    if ( v11 > kFaceEarNormalMatchRadius ) /*0x93da3d*/
    {
      if ( v11 >= flt_A37450 ) /*0x93da54*/
        v11 = flt_A37450; /*0x93da58*/
    }
    else
    {
      v11 = kFaceEarNormalMatchRadius; /*0x93da41*/
    }
    v18 = (fConstant_1 - v11) * a4 + v11 * a5; /*0x93da78*/
    sub_93D670(a1, v18, v20); /*0x93da82*/
    v12 = _mm_mul_ps(v21, _mm_sub_ps(*a3, v22)); /*0x93daa3*/
    v13 = (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]) /*0x93dac7*/
        + (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] + _mm_shuffle_ps(v21, v21, 0xFF).m128_f32[0]);
    if ( fabs(v13 - *a2) < v19 ) /*0x93dae4*/
      break; /*0x93dae4*/
    if ( v13 >= (double)*a2 ) /*0x93daed*/
    {
      a6 = v13; /*0x93daff*/
      a4 = v18; /*0x93db02*/
    }
    else
    {
      a7 = v13; /*0x93daf3*/
      a5 = v18; /*0x93daf6*/
    }
    ++v9; /*0x93db05*/
  }
  while ( v9 < 0xA ); /*0x93db09*/
  result = v18; /*0x93db1c*/
  if ( v16 | v17 ) /*0x93db22*/
    *a9 = v18; /*0x93db2b*/
  return result; /*0x93db2d*/
}
