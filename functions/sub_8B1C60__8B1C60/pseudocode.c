__m128 *__thiscall sub_8B1C60(__m128 *this, __m128 *a2, __m128 *a3, float a4)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  long double v7; // st7
  long double v8; // st6
  long double v9; // st5
  long double v10; // st7
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  float v15; // [esp+Ch] [ebp-1Ch]
  float v16; // [esp+10h] [ebp-18h]
  unsigned int v17; // [esp+10h] [ebp-18h]
  unsigned int v18; // [esp+10h] [ebp-18h]
  float v19; // [esp+14h] [ebp-14h]
  unsigned int v20; // [esp+14h] [ebp-14h]
  unsigned int v21; // [esp+14h] [ebp-14h]

  v4 = *a2;
  v5 = _mm_mul_ps(*a2, *a3);
  v6 = _mm_add_ps(_mm_shuffle_ps(v5, v5, 0x4E), v5);
  v16 = v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 0xB1).m128_f32[0];
  v15 = v16;
  v19 = 1.0;
  if ( v16 < (double)*(float *)&SrcStr )
  {
    v19 = -1.0;
    v15 = -v16;
  }
  if ( v15 >= (double)flt_A3F478 )
  {
    *(float *)&v18 = fConstant_1 - a4;
    v11 = _mm_shuffle_ps((__m128)v18, (__m128)v18, 0);
    *(float *)&v21 = v19 * a4;
    v12 = (__m128)v21;
  }
  else
  {
    if ( fabs(v15) < fConstant_1 )
    {
      v7 = acos(v15);
      v4 = *a2;
    }
    else if ( v15 <= (double)*(float *)&SrcStr )
    {
      v7 = flt_A97E28;
    }
    else
    {
      v7 = *(float *)&SrcStr;
    }
    v8 = fConstant_1 / sqrt(fConstant_1 - v15 * v15);
    v9 = v7;
    v10 = v7 * a4;
    *(float *)&v17 = sin(v9 - v10) * v8;
    v11 = _mm_shuffle_ps((__m128)v17, (__m128)v17, 0);
    *(float *)&v20 = sin(v10) * v8 * v19;
    v12 = (__m128)v20;
  }
  v13 = _mm_mul_ps(v11, v4);
  *this = v13;
  *this = _mm_add_ps(v13, _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *a3));
  return sub_4D6830(this);
}
