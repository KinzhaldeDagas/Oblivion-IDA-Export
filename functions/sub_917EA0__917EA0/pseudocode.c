__m128 *__thiscall sub_917EA0(__m128 *this, __m128 *a2)
{
  __m128 v4; // [esp+10h] [ebp-10h] BYREF

  (*(void (__thiscall **)(_DWORD, __m128 *))(**((_DWORD **)this + 4) + 0x2C))(*((_DWORD *)this + 4), &v4);
  *a2 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(*(this + 2), _mm_shuffle_ps(v4, v4, 0)),
            _mm_mul_ps(*(this + 3), _mm_shuffle_ps(v4, v4, 0x55))),
          _mm_add_ps(_mm_mul_ps(*(this + 4), _mm_shuffle_ps(v4, v4, 0xAA)), *(this + 5)));
  return a2;
}
