float *__cdecl sub_43F3E0(float *a1, __m128 *a2)
{
  double v3; // rt0

  v3 = dbl_A372E0;
  *a1 = a2->m128_f32[0] * v3;
  a1[1] = _mm_shuffle_ps(*a2, *a2, 0x55).m128_f32[0] * v3;
  a1[2] = v3 * _mm_shuffle_ps(*a2, *a2, 0xAA).m128_f32[0];
  return a1;
}
