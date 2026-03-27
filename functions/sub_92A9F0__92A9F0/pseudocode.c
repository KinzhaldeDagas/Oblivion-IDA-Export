int __thiscall sub_92A9F0(__m128 *this, __m128 *a2, int a3, __m128 *a4)
{
  int result; // eax
  __m128 v6; // xmm0

  result = (*(int (__thiscall **)(_DWORD, __m128 *, int, __m128 *))(**((_DWORD **)this + 4) + 0xC))(
             *((_DWORD *)this + 4),
             a2,
             a3,
             a4);
  v6 = _mm_add_ps(
         _mm_add_ps(
           _mm_mul_ps(*a2, _mm_shuffle_ps(*(this + 2), *(this + 2), 0)),
           _mm_mul_ps(a2[1], _mm_shuffle_ps(*(this + 2), *(this + 2), 0x55))),
         _mm_mul_ps(a2[2], _mm_shuffle_ps(*(this + 2), *(this + 2), 0xAA)));
  *a4 = _mm_add_ps(*a4, v6);
  a4[1] = _mm_add_ps(a4[1], v6);
  return result;
}
