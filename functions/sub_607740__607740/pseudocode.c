int __cdecl sub_607740(int a1, __m128 *a2)
{
  int result; // eax
  float *v4; // ecx
  int v5; // esi
  __m128 v6; // xmm0

  result = a1; /*0x607754*/
  v4 = (float *)(a1 + 0x18); /*0x60775b*/
  v5 = 3; /*0x60775e*/
  do /*0x6077a0*/
  {
    v6 = *a2; /*0x607763*/
    v4[0xFFFFFFFA] = a2->m128_f32[0]; /*0x607770*/
    v4[0xFFFFFFFD] = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0]; /*0x607784*/
    *v4 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]; /*0x607795*/
    ++a2; /*0x607797*/
    ++v4; /*0x60779a*/
    --v5; /*0x60779d*/
  }
  while ( v5 ); /*0x6077a0*/
  return result; /*0x6077a2*/
}
