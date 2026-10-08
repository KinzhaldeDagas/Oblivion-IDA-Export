__m128 *__thiscall sub_914E00(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm5
  __m128 v5; // xmm4
  __m128 v6; // xmm0
  double v7; // st7
  int v8; // edx
  __m128 v10; // [esp+0h] [ebp-10h]

  v3 = *(this + 3); /*0x914e09*/
  v4 = *(this + 2); /*0x914e11*/
  v5 = _mm_shuffle_ps(v3, v3, 0x44); /*0x914e1e*/
  v6 = _mm_shuffle_ps(*(this + 1), v4, 0x44); /*0x914e28*/
  v10 = _mm_add_ps( /*0x914e67*/
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v6, v5, 0x88), _mm_shuffle_ps(*a2, *a2, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v6, v5, 0xDD), _mm_shuffle_ps(*a2, *a2, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(*(this + 1), v4, 0xEE), _mm_shuffle_ps(v3, v3, 0xEE), 0x88),
            _mm_shuffle_ps(*a2, *a2, 0xAA)));
  if ( v10.m128_f32[2] <= (double)v10.m128_f32[1] ) /*0x914e78*/
  {
    v7 = v10.m128_f32[1]; /*0x914e85*/
    v8 = 0x10; /*0x914e89*/
  }
  else
  {
    v7 = v10.m128_f32[2]; /*0x914e7a*/
    v8 = 0x20; /*0x914e7e*/
  }
  if ( v10.m128_f32[0] > v7 ) /*0x914e9a*/
    v8 = 0; /*0x914e9c*/
  *a3 = *(__m128 *)((char *)this + v8 + 0x10); /*0x914eac*/
  a3->m128_i32[3] = v8 | 0x3F000000; /*0x914eaf*/
  return a3; /*0x914eb2*/
}
