__m128 *__thiscall sub_8EAB80(__m128 *this, _BYTE *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1
  __m128 v4; // xmm2
  __m128 v5; // xmm0
  __m128 v6; // xmm2
  __m128 v7; // xmm1
  __m128 v9[3]; // [esp+0h] [ebp-30h] BYREF

  v2 = *(this + 0xF); /*0x8eab9e*/
  v3 = *(this + 2); /*0x8eaba8*/
  v9[0] = _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0), *(this + 1)); /*0x8eabac*/
  v4 = _mm_shuffle_ps(v2, v2, 0x55); /*0x8eabb3*/
  v5 = *(this + 0xF); /*0x8eabb7*/
  v6 = _mm_mul_ps(v4, v3); /*0x8eabbe*/
  v7 = *(this + 3); /*0x8eabc1*/
  v9[1] = v6; /*0x8eabc8*/
  v9[2] = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0xAA), v7); /*0x8eabdd*/
  return sub_8D2B10(a2, v9, (int *)this + 4); /*0x8eabe7*/
}
