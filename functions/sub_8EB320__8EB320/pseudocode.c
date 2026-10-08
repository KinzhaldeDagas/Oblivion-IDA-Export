__m128 *__thiscall sub_8EB320(__m128 *this, float *a2, __m128 *a3)
{
  double v3; // st7
  double v5; // st6
  double v6; // st7
  __m128 v7; // xmm0
  unsigned int v9; // [esp+Ch] [ebp-4h]
  unsigned int v10; // [esp+Ch] [ebp-4h]
  unsigned int v11; // [esp+Ch] [ebp-4h]

  v3 = a2[2]; /*0x8eb32a*/
  v5 = fConstant_1 - v3 * *((float *)this + 0x32); /*0x8eb33a*/
  if ( *(float *)&SrcStr > v5 ) /*0x8eb34d*/
    v5 = *(float *)&SrcStr; /*0x8eb351*/
  *(float *)&v9 = v5; /*0x8eb35e*/
  *(this + 0xD) = _mm_mul_ps(_mm_shuffle_ps((__m128)v9, (__m128)v9, 0), *(this + 0xD)); /*0x8eb372*/
  v6 = fConstant_1 - v3 * *((float *)this + 0x33); /*0x8eb37f*/
  if ( *(float *)&SrcStr > v6 ) /*0x8eb392*/
    v6 = *(float *)&SrcStr; /*0x8eb396*/
  *(float *)&v10 = v6; /*0x8eb3a3*/
  *(this + 0xE) = _mm_mul_ps(_mm_shuffle_ps((__m128)v10, (__m128)v10, 0), *(this + 0xE)); /*0x8eb3c1*/
  sub_8D2860((__m128 *)a3[5].m128_i32, (_DWORD *)this + 4); /*0x8eb3c8*/
  a3->m128_i8[0] = 0; /*0x8eb3d0*/
  a3[3] = *(this + 0xF); /*0x8eb3da*/
  a3[1] = *(this + 0xD); /*0x8eb3e5*/
  *(float *)&v11 = (*a2 - *((float *)this + 0x17)) * *((float *)this + 0x1B); /*0x8eb3fc*/
  v7 = _mm_shuffle_ps((__m128)v11, (__m128)v11, 0); /*0x8eb406*/
  a3[4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v7), *(this + 5)), _mm_mul_ps(v7, *(this + 6))); /*0x8eb41d*/
  a3[2] = _mm_add_ps( /*0x8eb458*/
            _mm_add_ps(
              _mm_mul_ps(a3[5], _mm_shuffle_ps(*(this + 0xE), *(this + 0xE), 0)),
              _mm_mul_ps(a3[6], _mm_shuffle_ps(*(this + 0xE), *(this + 0xE), 0x55))),
            _mm_mul_ps(a3[7], _mm_shuffle_ps(*(this + 0xE), *(this + 0xE), 0xAA)));
  a3->m128_i8[0xC] = 0; /*0x8eb45c*/
  a3->m128_i32[2] = *((unsigned __int16 *)this + 0x5E); /*0x8eb467*/
  a3->m128_i32[1] = *((unsigned __int16 *)this + 0x5F); /*0x8eb471*/
  return a3 + 8; /*0x8eb474*/
}
