bool *__cdecl sub_9511B0(bool *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, float a5)
{
  int v5; // edi
  bool v6; // cl
  int v7; // esi
  int v8; // edx
  __m128 v9; // xmm0
  int v10; // esi
  int v11; // edx
  __m128 v12; // xmm0
  int v14; // [esp+10h] [ebp-10h]
  float v15; // [esp+18h] [ebp-8h]

  v5 = 0; /*0x9511c2*/
  v6 = 1; /*0x9511c4*/
  v14 = 0; /*0x9511c6*/
  do /*0x9512d6*/
  {
    if ( v14 >= a4[1] ) /*0x9511d8*/
      break; /*0x9511d8*/
    v7 = 0; /*0x9511de*/
    v8 = 0; /*0x9511e7*/
    do /*0x951252*/
    {
      if ( v7 >= a2[1] ) /*0x9511f3*/
        break; /*0x9511f3*/
      v9 = _mm_mul_ps(*(__m128 *)(*a4 + v5), *(__m128 *)(*a2 + v8)); /*0x95120b*/
      v15 = (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]) /*0x951232*/
          + (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                  + _mm_shuffle_ps(*(__m128 *)(*a4 + v5), *(__m128 *)(*a4 + v5), 0xFF).m128_f32[0]);
      v6 = v15 < (double)a5; /*0x951244*/
      ++v7; /*0x95124c*/
      v8 += 0x10; /*0x95124d*/
    }
    while ( v15 < (double)a5 ); /*0x951252*/
    v10 = 0; /*0x951254*/
    if ( v6 ) /*0x951258*/
    {
      v11 = 0; /*0x951260*/
      do /*0x9512c6*/
      {
        if ( v10 >= a3[1] ) /*0x951264*/
          break; /*0x951264*/
        v12 = _mm_mul_ps(*(__m128 *)(*a4 + v5), *(__m128 *)(*a3 + v11)); /*0x951281*/
        v6 = (float)((float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]) /*0x9512b8*/
                   + (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
                           + _mm_shuffle_ps(*(__m128 *)(*a4 + v5), *(__m128 *)(*a4 + v5), 0xFF).m128_f32[0])) < (double)a5;
        ++v10; /*0x9512c0*/
        v11 += 0x10; /*0x9512c1*/
      }
      while ( v6 ); /*0x9512c6*/
    }
    v5 += 0x10; /*0x9512cd*/
    ++v14; /*0x9512d2*/
  }
  while ( v6 ); /*0x9512d6*/
  *a1 = v6; /*0x9512e1*/
  return a1; /*0x9512df*/
}
