__m128 *__thiscall sub_9148E0(__m128 *this, __m128 *a2, float a3, __m128 *a4)
{
  __m128 v6; // xmm3
  __m128 v7; // xmm0
  unsigned int v8; // [esp+4h] [ebp-44h]
  __m128 v9; // [esp+8h] [ebp-40h] BYREF
  __m128 v10; // [esp+18h] [ebp-30h] BYREF
  __m128 v11; // [esp+28h] [ebp-20h] BYREF
  __m128 v12; // [esp+38h] [ebp-10h]

  *(float *)&v8 = a3 + this->m128_f32[3];
  v12 = _mm_shuffle_ps((__m128)v8, (__m128)v8, 0);
  sub_88FCC0(&v11, a2, this + 1);
  sub_88FCC0(&v10, a2, this + 2);
  sub_88FCC0(&v9, a2, this + 3);
  v6 = _mm_max_ps(_mm_max_ps(v11, v10), v9);
  v7 = v12;
  *a4 = _mm_sub_ps(_mm_min_ps(_mm_min_ps(v11, v10), v9), v12);
  a4[1] = v6;
  a4[1] = _mm_add_ps(a4[1], v7);
  return a4;
}
