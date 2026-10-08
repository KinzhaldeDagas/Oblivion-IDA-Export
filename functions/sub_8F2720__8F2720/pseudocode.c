int __thiscall sub_8F2720(__m128 *this, _WORD *a2, int a3, __m128 *a4)
{
  int result; // eax
  unsigned __int8 v6; // bl
  double v7; // st7
  double v8; // st6
  __m128 v9; // xmm0
  float v10; // [esp+10h] [ebp-10h]
  unsigned int v11; // [esp+10h] [ebp-10h]
  unsigned int v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+14h] [ebp-Ch]

  result = a3 - 1; /*0x8f272c*/
  if ( a3 - 1 >= 0 ) /*0x8f2732*/
  {
    v13 = a3; /*0x8f273c*/
    do /*0x8f284c*/
    {
      v6 = *a2; /*0x8f2751*/
      v7 = ((double)(v6 & 0xF) + kHeadBodyNormalMatchRadius) * flt_B2FDC0; /*0x8f2779*/
      v10 = v7; /*0x8f2785*/
      if ( (v6 & 0x10) != 0 ) /*0x8f2783*/
        v7 = sqrt(fConstant_1 - v7 * v7); /*0x8f2793*/
      else
        v10 = sqrt(fConstant_1 - v10 * v10); /*0x8f27a7*/
      v8 = v10; /*0x8f27ad*/
      if ( (v6 & 0x40) == 0 ) /*0x8f27b1*/
        v8 = -v8; /*0x8f27b3*/
      if ( (*a2 & 0x20) == 0 ) /*0x8f27bb*/
        v7 = -v7; /*0x8f27c1*/
      *(float *)&v11 = v7; /*0x8f27cc*/
      v9 = (__m128)v11; /*0x8f27d0*/
      *(float *)&v12 = v8; /*0x8f27d8*/
      *a4 = _mm_add_ps( /*0x8f282b*/
              *(this + 3 - (v6 >> 7 != 0)),
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)*((unsigned int *)this + 4), (__m128)*((unsigned int *)this + 4), 0),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *(this + 4)),
                  _mm_mul_ps(_mm_shuffle_ps((__m128)v12, (__m128)v12, 0), *(this + 5)))));
      a4->m128_i32[3] = (unsigned __int16)*a2 | 0x3F000000; /*0x8f2837*/
      ++a4; /*0x8f283d*/
      ++a2; /*0x8f2844*/
      result = --v13; /*0x8f2847*/
    }
    while ( v13 ); /*0x8f284c*/
  }
  return result; /*0x8f2852*/
}
