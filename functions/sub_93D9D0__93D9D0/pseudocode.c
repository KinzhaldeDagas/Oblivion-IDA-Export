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

  v18 = a4;
  v9 = 0;
  v19 = a2[4] * flt_A41304;
  do
  {
    if ( a6 <= (double)*a2 )
      break;
    v10 = a7 - a6;
    if ( v10 > -v19 )
      break;
    v11 = (*a2 - a6) / v10;
    if ( v11 > flt_A2FAAC )
    {
      if ( v11 >= flt_A37450 )
        v11 = flt_A37450;
    }
    else
    {
      v11 = flt_A2FAAC;
    }
    v18 = (fConstant_1 - v11) * a4 + v11 * a5;
    sub_93D670(a1, v18, v20);
    v12 = _mm_mul_ps(v21, _mm_sub_ps(*a3, v22));
    v13 = (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0])
        + (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] + _mm_shuffle_ps(v21, v21, 0xFF).m128_f32[0]);
    if ( fabs(v13 - *a2) < v19 )
      break;
    if ( v13 >= (double)*a2 )
    {
      a6 = v13;
      a4 = v18;
    }
    else
    {
      a7 = v13;
      a5 = v18;
    }
    ++v9;
  }
  while ( v9 < 0xA );
  result = v18;
  if ( v16 | v17 )
    *a9 = v18;
  return result;
}
