float *__cdecl sub_4D68A0(float *a1, __m128 *a2)
{
  *a1 = a2->m128_f32[0];
  a1[1] = _mm_shuffle_ps(*a2, *a2, 0x55).m128_f32[0];
  a1[2] = _mm_shuffle_ps(*a2, *a2, 0xAA).m128_f32[0];
  return a1;
}
