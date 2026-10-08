// TES4 authoritative: converts Havok-unit vector to TES/world units using dbl_A372E0 (inverse hkFactor).
float *__cdecl HavokVector_ToWorldVector(float *a1, __m128 *a2)
{
  double v3; // rt0

  v3 = dbl_A372E0; /*0x43f40f*/
  *a1 = a2->m128_f32[0] * v3; /*0x43f411*/
  a1[1] = _mm_shuffle_ps(*a2, *a2, 0x55).m128_f32[0] * v3; /*0x43f426*/
  a1[2] = v3 * _mm_shuffle_ps(*a2, *a2, 0xAA).m128_f32[0]; /*0x43f440*/
  return a1; /*0x43f443*/
}
