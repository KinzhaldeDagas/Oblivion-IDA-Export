__m128 *__thiscall sub_8CE060(__m128 *this, __m128 *a2, float a3, __m128 *a4)
{
  unsigned int v5; // [esp+0h] [ebp-8h]

  *(float *)&v5 = a3 + this->m128_f32[3];
  return sub_8CDF30(a2, this + 1, v5, a4);
}
