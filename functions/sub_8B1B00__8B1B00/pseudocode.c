__m128 *__thiscall sub_8B1B00(__m128 *this, __m128 *a2, float a3)
{
  long double v4; // st7
  unsigned int v5; // [esp+Ch] [ebp-4h]

  v4 = a3 * flt_A3D65C;
  *(float *)&v5 = sin(v4);
  *this = _mm_mul_ps(_mm_shuffle_ps((__m128)v5, (__m128)v5, 0), *a2);
  this->m128_f32[3] = cos(v4);
  return a2;
}
