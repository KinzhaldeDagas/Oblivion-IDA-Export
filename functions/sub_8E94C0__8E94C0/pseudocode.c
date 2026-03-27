unsigned int __thiscall sub_8E94C0(__m128 *this, __m128 *a2)
{
  unsigned int result; // eax

  result = *((_DWORD *)this + 0x31);
  *(this + 0xE) = _mm_add_ps(*(this + 0xE), _mm_mul_ps(_mm_shuffle_ps((__m128)result, (__m128)result, 0), *a2));
  return result;
}
