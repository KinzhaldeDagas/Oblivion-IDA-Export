_BYTE *__stdcall sub_8CE690(_BYTE *a1, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm0

  if ( a2[2].m128_i32[1] != 1
    || a3[2].m128_i32[1] == 1
    || (v3 = _mm_mul_ps(a2[1], _mm_sub_ps(*a2, *a3)),
        (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0])) <= 0.0) )
  {
    *a1 = 0;
    return a1;
  }
  else
  {
    *a1 = 1;
    return a1;
  }
}
