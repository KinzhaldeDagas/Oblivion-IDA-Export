__m128 *__thiscall sub_8A2D60(__m128 *this, float a2)
{
  double v2; // st7
  __m128 v3; // xmm0
  __m128 *result; // eax
  double v5; // st6
  int v6; // edx
  double v7; // st5
  float v8; // [esp+Ch] [ebp-4h]

  v2 = a2; /*0x8a2d69*/
  v3 = 0; /*0x8a2d73*/
  v3.m128_f32[0] = a2; /*0x8a2d78*/
  *(this + 0xA) = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *(this + 0xA)); /*0x8a2d8f*/
  v8 = v2 * v2 * v2; /*0x8a2d96*/
  result = this + 8; /*0x8a2d9a*/
  v5 = v8; /*0x8a2da0*/
  v6 = 3; /*0x8a2da4*/
  do /*0x8a2dc7*/
  {
    v7 = result[0xFFFFFFFF].m128_f32[0]; /*0x8a2da9*/
    result = (__m128 *)((char *)result + 4); /*0x8a2dac*/
    --v6; /*0x8a2daf*/
    result[0xFFFFFFFE].m128_f32[3] = v7 * v5; /*0x8a2db4*/
    result[0xFFFFFFFF].m128_f32[3] = result[0xFFFFFFFF].m128_f32[3] * v5; /*0x8a2dbc*/
    result->m128_f32[3] = result->m128_f32[3] * v5; /*0x8a2dc4*/
  }
  while ( v6 ); /*0x8a2dc7*/
  *((float *)this + 0x2C) = v2 * *((float *)this + 0x2C); /*0x8a2dd1*/
  return result; /*0x8a2dd7*/
}
