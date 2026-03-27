__int32 __thiscall sub_937DB0(__m128 *this, __m128 *a2, __int32 a3)
{
  __int32 result; // eax
  __m128 v4; // xmm0
  __m128 v5; // [esp+10h] [ebp-10h]

  a2[3].m128_i32[2] = a3;
  v5.m128_f32[0] = *((float *)this + a3 + 8);
  v5.m128_i32[3] = 0;
  v5.m128_f32[1] = *((float *)this + a3 + 0xC);
  v5.m128_f32[2] = *((float *)this + a3 + 0x10);
  if ( *((float *)this + a3 + 0x30) >= (double)*(float *)&SrcStr )
  {
    a2[3].m128_i32[0] = 0x3F800000;
    a2[1] = _mm_xor_ps(*(this + 7), (__m128)xmmword_A965C0);
  }
  else
  {
    a2[3].m128_i32[0] = 0xBF800000;
    a2[1] = *(this + 7);
  }
  result = a2[3].m128_i32[0];
  v4 = _mm_cmplt_ps(_mm_shuffle_ps((__m128)0, (__m128)0, 0), *(this + 0xD));
  a2[1] = _mm_xor_ps(
            a2[1],
            _mm_and_ps(
              _mm_add_ps(
                v5,
                _mm_mul_ps(
                  _mm_shuffle_ps((__m128)(unsigned int)result, (__m128)(unsigned int)result, 0),
                  _mm_or_ps(
                    _mm_and_ps(v4, _mm_shuffle_ps((__m128)0x3727C5ACu, (__m128)0x3727C5ACu, 0)),
                    _mm_andnot_ps(v4, _mm_shuffle_ps((__m128)0xB727C5AC, (__m128)0xB727C5AC, 0))))),
              (__m128)xmmword_A965C0));
  *a2 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(*(this + 2), _mm_shuffle_ps(a2[1], a2[1], 0)),
            _mm_mul_ps(*(this + 3), _mm_shuffle_ps(a2[1], a2[1], 0x55))),
          _mm_add_ps(_mm_mul_ps(*(this + 4), _mm_shuffle_ps(a2[1], a2[1], 0xAA)), *(this + 5)));
  return result;
}
