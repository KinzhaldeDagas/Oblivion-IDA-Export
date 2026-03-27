float *__thiscall sub_9153F0(__m128 *this, int a2, int a3)
{
  float *result; // eax
  __m128 *v4; // edx
  int v5; // edi
  __m128 v6; // xmm0

  result = (float *)a2;
  v4 = *(__m128 **)a2;
  if ( *(_DWORD *)(a2 + 4) - 1 >= 0 )
  {
    result = (float *)(a3 + 0xC);
    v5 = *(_DWORD *)(a2 + 4);
    do
    {
      if ( (_mm_movemask_ps(_mm_cmple_ps(_mm_and_ps(_mm_sub_ps(*v4, *(this + 2)), (__m128)xmmword_A372D0), *(this + 3)))
          & 7) == 7 )
      {
        *(__m128 *)(result + 0xFFFFFFFD) = *(this + 1);
        v6 = _mm_mul_ps(*(this + 1), *v4);
        *result = (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0])
                + (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
                        + _mm_shuffle_ps(*(this + 1), *(this + 1), 0xFF).m128_f32[0]);
      }
      else
      {
        *result = 3.4028235e38;
      }
      result += 4;
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
