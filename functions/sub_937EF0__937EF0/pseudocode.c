void __thiscall sub_937EF0(__m128 *this, __m128 *a2, int a3)
{
  __m128 v3; // xmm0
  __m128 v4; // xmm0
  __m128 v5; // xmm3
  __m128 v6; // xmm5
  __m128 v7; // xmm0
  __m128 v8; // xmm4
  __m128 v9; // xmm1
  unsigned int v10; // [esp+Ch] [ebp-14h]
  __m128 v11; // [esp+10h] [ebp-10h]

  a2[3].m128_i32[2] = a3 + 4; /*0x937f03*/
  v11 = *(this + a3 + 2); /*0x937f20*/
  if ( *((float *)this + a3 + 0x34) >= (double)*(float *)&SrcStr ) /*0x937f3c*/
  {
    a2[3].m128_i32[0] = 0x3F800000; /*0x937f58*/
    *a2 = *(this + 6); /*0x937f63*/
  }
  else
  {
    a2[3].m128_i32[0] = 0xBF800000; /*0x937f3e*/
    *a2 = _mm_xor_ps(*(this + 6), (__m128)xmmword_A965C0); /*0x937f53*/
  }
  v3 = _mm_cmplt_ps(_mm_shuffle_ps((__m128)0, (__m128)0, 0), *(this + 0xC)); /*0x937f91*/
  *(float *)&v10 = -a2[3].m128_f32[0]; /*0x937fa3*/
  v4 = _mm_xor_ps( /*0x937fed*/
         *a2,
         _mm_and_ps(
           _mm_add_ps(
             v11,
             _mm_mul_ps(
               _mm_shuffle_ps((__m128)v10, (__m128)v10, 0),
               _mm_or_ps(
                 _mm_and_ps(v3, _mm_shuffle_ps((__m128)0xB727C5AC, (__m128)0xB727C5AC, 0)),
                 _mm_andnot_ps(v3, _mm_shuffle_ps((__m128)0x3727C5ACu, (__m128)0x3727C5ACu, 0))))),
           (__m128)xmmword_A965C0));
  *a2 = v4; /*0x937ff0*/
  v5 = *(this + 4); /*0x937ff3*/
  v6 = *(this + 3); /*0x937fff*/
  v7 = _mm_sub_ps(v4, *(this + 5)); /*0x938003*/
  v8 = _mm_shuffle_ps(v5, v5, 0x44); /*0x938009*/
  v9 = _mm_shuffle_ps(*(this + 2), v6, 0x44); /*0x938013*/
  a2[1] = _mm_add_ps( /*0x938053*/
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v9, v8, 0x88), _mm_shuffle_ps(v7, v7, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v9, v8, 0xDD), _mm_shuffle_ps(v7, v7, 0x55))),
            _mm_mul_ps(
              _mm_shuffle_ps(_mm_shuffle_ps(*(this + 2), v6, 0xEE), _mm_shuffle_ps(v5, v5, 0xEE), 0x88),
              _mm_shuffle_ps(v7, v7, 0xAA)));
}
