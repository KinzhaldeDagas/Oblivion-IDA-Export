float *__thiscall sub_9153F0(__m128 *this, int a2, int a3)
{
  float *result; // eax
  __m128 *v4; // edx
  int v5; // edi
  __m128 v6; // xmm0

  result = (float *)a2; /*0x9153f9*/
  v4 = *(__m128 **)a2; /*0x9153fc*/
  if ( *(_DWORD *)(a2 + 4) - 1 >= 0 ) /*0x915406*/
  {
    result = (float *)(a3 + 0xC); /*0x91540f*/
    v5 = *(_DWORD *)(a2 + 4); /*0x915412*/
    do /*0x915499*/
    {
      if ( (_mm_movemask_ps(_mm_cmple_ps(_mm_and_ps(_mm_sub_ps(*v4, *(this + 2)), (__m128)xmmword_A372D0), *(this + 3))) /*0x915445*/
          & 7) == 7 )
      {
        *(__m128 *)(result + 0xFFFFFFFD) = *(this + 1); /*0x91544b*/
        v6 = _mm_mul_ps(*(this + 1), *v4); /*0x915459*/
        *result = (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]) /*0x915488*/
                + (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
                        + _mm_shuffle_ps(*(this + 1), *(this + 1), 0xFF).m128_f32[0]);
      }
      else
      {
        *result = 3.4028235e38; /*0x91548c*/
      }
      result += 4; /*0x915492*/
      ++v4; /*0x915495*/
      --v5; /*0x915498*/
    }
    while ( v5 ); /*0x915499*/
  }
  return result; /*0x91549b*/
}
