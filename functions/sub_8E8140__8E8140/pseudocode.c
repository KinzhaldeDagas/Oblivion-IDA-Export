bool __cdecl sub_8E8140(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  bool result; // al
  int v4; // edx
  int v5; // ecx
  __m128 v6; // xmm0
  __m128 v7; // xmm3

  v2 = a1[1];
  result = v2 == a2[1];
  if ( v2 == a2[1] )
  {
    v4 = 0;
    if ( v2 > 0 )
    {
      v5 = 0;
      do
      {
        if ( !result )
          break;
        v6 = *(__m128 *)(*a2 + v5);
        v7 = _mm_sub_ps(*(__m128 *)(*a1 + v5), v6);
        v6.m128_f32[0] = flt_A37080;
        result = _mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps(v6, v6, 0), _mm_and_ps(v7, (__m128)xmmword_A372D0))) == 0;
        ++v4;
        v5 += 0x10;
      }
      while ( v4 < v2 );
    }
  }
  return result;
}
