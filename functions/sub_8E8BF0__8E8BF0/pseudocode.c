double __userpurge sub_8E8BF0@<st0>(__m128 *a1@<ecx>, double a2@<st0>, __m128 *a3)
{
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm5
  __int32 v7; // ecx
  __m128 v8; // xmm4
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  unsigned int v13; // [esp+8h] [ebp-14h]
  __m128 v14; // [esp+Ch] [ebp-10h] BYREF

  v4 = a1[4];
  v5 = a1[2];
  v6 = a1[3];
  v7 = a1->m128_i32[3];
  v8 = _mm_shuffle_ps(v4, v4, 0x44);
  v9 = _mm_shuffle_ps(v5, v6, 0x44);
  v14 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v9, v8, 0x88), _mm_shuffle_ps(*a3, *a3, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v9, v8, 0xDD), _mm_shuffle_ps(*a3, *a3, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(v5, v6, 0xEE), _mm_shuffle_ps(v4, v4, 0xEE), 0x88),
            _mm_shuffle_ps(*a3, *a3, 0xAA)));
  (*(void (__thiscall **)(__int32, __m128 *))(*(_DWORD *)v7 + 0x10))(v7, &v14);
  *(float *)&v13 = a2;
  v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v13, (__m128)v13, 0), v14);
  v11 = _mm_mul_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(a1[2], _mm_shuffle_ps(v10, v10, 0)),
              _mm_mul_ps(a1[3], _mm_shuffle_ps(v10, v10, 0x55))),
            _mm_add_ps(_mm_mul_ps(a1[4], _mm_shuffle_ps(v10, v10, 0xAA)), a1[5])),
          *a3);
  return (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]));
}
