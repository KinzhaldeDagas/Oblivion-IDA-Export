int __thiscall sub_951D00(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v4; // xmm3
  __m128 v5; // xmm5
  int v6; // ecx
  __m128 v7; // xmm0
  __m128 v8; // xmm4
  __m128 v9; // xmm1
  int result; // eax
  _QWORD v11[3]; // [esp+8h] [ebp-18h] BYREF

  (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *))(**((_DWORD **)this + 0x15) + 0x24))(
    *((_DWORD *)this + 0x15),
    a2,
    a3 + 1);
  v4 = *(this + 2);
  v5 = *(this + 1);
  v6 = *((_DWORD *)this + 0x16);
  v7 = _mm_xor_ps(*a2, (__m128)xmmword_A965C0);
  v8 = _mm_shuffle_ps(v4, v4, 0x44);
  v9 = _mm_shuffle_ps(*this, v5, 0x44);
  *(__m128 *)&v11[1] = _mm_add_ps(
                         _mm_add_ps(
                           _mm_mul_ps(_mm_shuffle_ps(v9, v8, 0x88), _mm_shuffle_ps(v7, v7, 0)),
                           _mm_mul_ps(_mm_shuffle_ps(v9, v8, 0xDD), _mm_shuffle_ps(v7, v7, 0x55))),
                         _mm_mul_ps(
                           _mm_shuffle_ps(_mm_shuffle_ps(*this, v5, 0xEE), _mm_shuffle_ps(v4, v4, 0xEE), 0x88),
                           _mm_shuffle_ps(v7, v7, 0xAA)));
  result = (*(int (__thiscall **)(int, _QWORD *, __m128 *))(*(_DWORD *)v6 + 0x24))(v6, &v11[1], a3 + 2);
  *a3 = _mm_sub_ps(
          a3[1],
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(*this, _mm_shuffle_ps(a3[2], a3[2], 0)),
              _mm_mul_ps(*(this + 1), _mm_shuffle_ps(a3[2], a3[2], 0x55))),
            _mm_add_ps(_mm_mul_ps(*(this + 2), _mm_shuffle_ps(a3[2], a3[2], 0xAA)), *(this + 3))));
  return result;
}
