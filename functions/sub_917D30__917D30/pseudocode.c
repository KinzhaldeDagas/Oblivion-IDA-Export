__m128 *__thiscall sub_917D30(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm5
  int v7; // ecx
  __m128 v8; // xmm4
  __m128 v9; // xmm0
  __int32 v11; // ecx
  __m128 v12; // [esp+Ch] [ebp-20h] BYREF
  __m128 v13; // [esp+1Ch] [ebp-10h] BYREF

  v4 = *(this + 4);
  v5 = *(this + 2);
  v6 = *(this + 3);
  v7 = *((_DWORD *)this + 4);
  v8 = _mm_shuffle_ps(v4, v4, 0x44);
  v9 = _mm_shuffle_ps(v5, v6, 0x44);
  v13 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v9, v8, 0x88), _mm_shuffle_ps(*a2, *a2, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v9, v8, 0xDD), _mm_shuffle_ps(*a2, *a2, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(v5, v6, 0xEE), _mm_shuffle_ps(v4, v4, 0xEE), 0x88),
            _mm_shuffle_ps(*a2, *a2, 0xAA)));
  (*(void (__thiscall **)(int, __m128 *, __m128 *))(*(_DWORD *)v7 + 0x24))(v7, &v13, &v12);
  v11 = v12.m128_i32[3];
  *a3 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(*(this + 2), _mm_shuffle_ps(v12, v12, 0)),
            _mm_mul_ps(*(this + 3), _mm_shuffle_ps(v12, v12, 0x55))),
          _mm_add_ps(_mm_mul_ps(*(this + 4), _mm_shuffle_ps(v12, v12, 0xAA)), *(this + 5)));
  a3->m128_i32[3] = v11;
  return a3;
}
