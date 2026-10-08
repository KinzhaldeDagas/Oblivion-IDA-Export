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

  v4 = *a2; /*0x8b1c6c*/
  v5 = _mm_mul_ps(*a2, *a3); /*0x8b1c7a*/
  v6 = _mm_add_ps(_mm_shuffle_ps(v5, v5, 0x4E), v5); /*0x8b1c84*/
  v16 = v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 0xB1).m128_f32[0]; /*0x8b1c97*/
  v15 = v16; /*0x8b1cae*/
  v19 = 1.0; /*0x8b1cb2*/
  if ( v16 < (double)*(float *)&SrcStr ) /*0x8b1cbf*/
  {
    v19 = -1.0; /*0x8b1cc5*/
    v15 = -v16; /*0x8b1ccf*/
  }
  if ( v15 >= (double)flt_A3F478 ) /*0x8b1ce2*/
  {
    *(float *)&v18 = fConstant_1 - a4; /*0x8b1d82*/
    v11 = _mm_shuffle_ps((__m128)v18, (__m128)v18, 0); /*0x8b1d9a*/
    *(float *)&v21 = v19 * a4; /*0x8b1d9d*/
    v12 = (__m128)v21; /*0x8b1da1*/
  }
  else
  {
    if ( fabs(v15) < fConstant_1 ) /*0x8b1cf9*/
    {
      v7 = acos(v15); /*0x8b1d20*/
      v4 = *a2; /*0x8b1d25*/
    }
    else if ( v15 <= (double)*(float *)&SrcStr ) /*0x8b1d0a*/
    {
      v7 = flt_A97E28; /*0x8b1d14*/
    }
    else
    {
      v7 = *(float *)&SrcStr; /*0x8b1d0c*/
    }
    v8 = fConstant_1 / sqrt(fConstant_1 - v15 * v15); /*0x8b1d3a*/
    v9 = v7; /*0x8b1d45*/
    v10 = v7 * a4; /*0x8b1d45*/
    *(float *)&v17 = sin(v9 - v10) * v8; /*0x8b1d4d*/
    v11 = _mm_shuffle_ps((__m128)v17, (__m128)v17, 0); /*0x8b1d62*/
    *(float *)&v20 = sin(v10) * v8 * v19; /*0x8b1d6b*/
    v12 = (__m128)v20; /*0x8b1d6f*/
  }
  v13 = _mm_mul_ps(v11, v4); /*0x8b1da7*/
  *this = v13; /*0x8b1daa*/
  *this = _mm_add_ps(v13, _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *a3)); /*0x8b1dbf*/
  return hkQuaternion_Normalize(this); /*0x8b1dc9*/
}
