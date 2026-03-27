__m128 *__thiscall sub_8A2D60(__m128 *this, float a2)
{
  double v2; // st7
  __m128 v3; // xmm0
  __m128 *result; // eax
  double v5; // st6
  int v6; // edx
  double v7; // st5
  float v8; // [esp+Ch] [ebp-4h]

  v2 = a2;
  v3 = 0;
  v3.m128_f32[0] = a2;
  *(this + 0xA) = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *(this + 0xA));
  v8 = v2 * v2 * v2;
  result = this + 8;
  v5 = v8;
  v6 = 3;
  do
  {
    v7 = result[0xFFFFFFFF].m128_f32[0];
    result = (__m128 *)((char *)result + 4);
    --v6;
    result[0xFFFFFFFE].m128_f32[3] = v7 * v5;
    result[0xFFFFFFFF].m128_f32[3] = result[0xFFFFFFFF].m128_f32[3] * v5;
    result->m128_f32[3] = result->m128_f32[3] * v5;
  }
  while ( v6 );
  *((float *)this + 0x2C) = v2 * *((float *)this + 0x2C);
  return result;
}
