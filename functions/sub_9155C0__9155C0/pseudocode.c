__m128 *__thiscall sub_9155C0(__m128 *this)
{
  float v1; // xmm4_4
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  float v7; // xmm2_4
  float v8; // xmm3_4
  __m128 v9; // xmm0

  v1 = *(float *)&dword_A46C30; /*0x9155c0*/
  v3 = _mm_sub_ps(*(this + 2), *(this + 1)); /*0x9155d5*/
  v4 = _mm_sub_ps(*(this + 3), *(this + 2)); /*0x9155dc*/
  *(this + 4) = _mm_sub_ps( /*0x915601*/
                  _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0xD2), _mm_shuffle_ps(v3, v3, 0xC9)),
                  _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0xC9), _mm_shuffle_ps(v3, v3, 0xD2)));
  v5 = *(this + 4); /*0x915605*/
  v6 = _mm_mul_ps(v5, v5); /*0x91560c*/
  v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] /*0x91561e*/
                 + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]);
  v7 = 1.0 / fsqrt(v6.m128_f32[0]); /*0x915625*/
  v8 = v1 - (float)((float)(v6.m128_f32[0] * v7) * v7); /*0x915640*/
  v9 = 0; /*0x915644*/
  v9.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v7) * v8; /*0x91564f*/
  *(this + 4) = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v5); /*0x91565d*/
  return this; /*0x915661*/
}
