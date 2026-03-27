float *__usercall sub_959630@<eax>(int *a1@<ecx>, __m128 *a2@<edi>, __m128 *a3@<esi>, int *a4, __m128 *a5)
{
  int v5; // eax
  __m128 v6; // xmm3
  __m128 v7; // xmm5
  int v8; // eax
  __m128 v9; // xmm4
  __m128 v10; // xmm0
  __m128 *v11; // ebx
  __m128 v12; // xmm0
  float v14; // [esp+10h] [ebp-24h] BYREF
  __m128 v15; // [esp+14h] [ebp-20h] BYREF
  __m128 v16; // [esp+24h] [ebp-10h] BYREF

  a2[2] = *a5;
  v5 = *a1;
  v15 = _mm_xor_ps(*a5, (__m128)xmmword_A965C0);
  (*(void (__thiscall **)(int *, __m128 *, __m128 *))(v5 + 0x24))(a1, &v15, a2);
  v6 = a3[2];
  v7 = a3[1];
  v8 = *a4;
  v9 = _mm_shuffle_ps(v6, v6, 0x44);
  v10 = _mm_shuffle_ps(*a3, v7, 0x44);
  v11 = a2 + 1;
  v16 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v10, v9, 0x88), _mm_shuffle_ps(*a5, *a5, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v10, v9, 0xDD), _mm_shuffle_ps(*a5, *a5, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(*a3, v7, 0xEE), _mm_shuffle_ps(v6, v6, 0xEE), 0x88),
            _mm_shuffle_ps(*a5, *a5, 0xAA)));
  (*(void (__thiscall **)(int *, __m128 *, __m128 *))(v8 + 0x24))(a4, &v16, a2 + 1);
  v12 = _mm_mul_ps(
          _mm_sub_ps(
            *a2,
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*a3, _mm_shuffle_ps(*v11, *v11, 0)),
                _mm_mul_ps(a3[1], _mm_shuffle_ps(*v11, *v11, 0x55))),
              _mm_add_ps(_mm_mul_ps(a3[2], _mm_shuffle_ps(*v11, *v11, 0xAA)), a3[3]))),
          a2[2]);
  v14 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
  a2[2].m128_f32[3] = v14;
  return &v14;
}
