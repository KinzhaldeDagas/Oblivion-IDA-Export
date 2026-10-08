unsigned int __thiscall sub_937DB0(__m128 *this, __m128 *a2, __int32 a3)
{
  unsigned int result; // eax
  __m128 v4; // xmm0
  __m128 v5; // [esp+10h] [ebp-10h]

  a2[3].m128_i32[2] = a3; /*0x937dbf*/
  v5.m128_f32[0] = *((float *)this + a3 + 8); /*0x937dc6*/
  v5.m128_i32[3] = 0; /*0x937dca*/
  v5.m128_f32[1] = *((float *)this + a3 + 0xC); /*0x937dd6*/
  v5.m128_f32[2] = *((float *)this + a3 + 0x10); /*0x937dde*/
  if ( *((float *)this + a3 + 0x30) >= (double)*(float *)&SrcStr ) /*0x937df4*/
  {
    a2[3].m128_i32[0] = 0x3F800000; /*0x937e07*/
    a2[1] = _mm_xor_ps(*(this + 7), (__m128)xmmword_A965C0); /*0x937e1c*/
  }
  else
  {
    a2[3].m128_i32[0] = 0xBF800000; /*0x937df6*/
    a2[1] = *(this + 7); /*0x937e01*/
  }
  result = a2[3].m128_u32[0]; /*0x937e20*/
  v4 = _mm_cmplt_ps(_mm_shuffle_ps((__m128)0, (__m128)0, 0), *(this + 0xD)); /*0x937e42*/
  a2[1] = _mm_xor_ps( /*0x937ea6*/
            a2[1],
            _mm_and_ps(
              _mm_add_ps(
                v5,
                _mm_mul_ps(
                  _mm_shuffle_ps((__m128)result, (__m128)result, 0),
                  _mm_or_ps(
                    _mm_and_ps(v4, _mm_shuffle_ps((__m128)0x3727C5ACu, (__m128)0x3727C5ACu, 0)),
                    _mm_andnot_ps(v4, _mm_shuffle_ps((__m128)0xB727C5AC, (__m128)0xB727C5AC, 0))))),
              (__m128)xmmword_A965C0));
  *a2 = _mm_add_ps( /*0x937ee5*/
          _mm_add_ps(
            _mm_mul_ps(*(this + 2), _mm_shuffle_ps(a2[1], a2[1], 0)),
            _mm_mul_ps(*(this + 3), _mm_shuffle_ps(a2[1], a2[1], 0x55))),
          _mm_add_ps(_mm_mul_ps(*(this + 4), _mm_shuffle_ps(a2[1], a2[1], 0xAA)), *(this + 5)));
  return result; /*0x937ee8*/
}
