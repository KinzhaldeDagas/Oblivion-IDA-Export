bool __cdecl sub_8E8140(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  bool result; // al
  int v4; // edx
  int v5; // ecx
  __m128 v6; // xmm0
  __m128 v7; // xmm3

  v2 = a1[1]; /*0x8e8150*/
  result = v2 == a2[1]; /*0x8e8156*/
  if ( v2 == a2[1] ) /*0x8e815b*/
  {
    v4 = 0; /*0x8e815d*/
    if ( v2 > 0 ) /*0x8e8161*/
    {
      v5 = 0; /*0x8e8172*/
      do /*0x8e81a6*/
      {
        if ( !result ) /*0x8e8176*/
          break; /*0x8e8176*/
        v6 = *(__m128 *)(*a2 + v5); /*0x8e8180*/
        v7 = _mm_sub_ps(*(__m128 *)(*a1 + v5), v6); /*0x8e8184*/
        v6.m128_f32[0] = flt_A37080; /*0x8e8187*/
        result = _mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps(v6, v6, 0), _mm_and_ps(v7, (__m128)xmmword_A372D0))) == 0; /*0x8e819b*/
        ++v4; /*0x8e819e*/
        v5 += 0x10; /*0x8e81a1*/
      }
      while ( v4 < v2 ); /*0x8e81a6*/
    }
  }
  return result; /*0x8e81a8*/
}
