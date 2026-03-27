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

  result = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    v13 = a3;
    do
    {
      v6 = *a2;
      v7 = ((double)(v6 & 0xF) + flt_A3D65C) * flt_B2FDC0;
      v10 = v7;
      if ( (v6 & 0x10) != 0 )
        v7 = sqrt(fConstant_1 - v7 * v7);
      else
        v10 = sqrt(fConstant_1 - v10 * v10);
      v8 = v10;
      if ( (v6 & 0x40) == 0 )
        v8 = -v8;
      if ( (*a2 & 0x20) == 0 )
        v7 = -v7;
      *(float *)&v11 = v7;
      v9 = (__m128)v11;
      *(float *)&v12 = v8;
      *a4 = _mm_add_ps(
              *(this + 3 - (v6 >> 7 != 0)),
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)*((unsigned int *)this + 4), (__m128)*((unsigned int *)this + 4), 0),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *(this + 4)),
                  _mm_mul_ps(_mm_shuffle_ps((__m128)v12, (__m128)v12, 0), *(this + 5)))));
      a4->m128_i32[3] = (unsigned __int16)*a2 | 0x3F000000;
      ++a4;
      ++a2;
      result = --v13;
    }
    while ( v13 );
  }
  return result;
}
