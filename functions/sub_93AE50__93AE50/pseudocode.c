signed int __usercall sub_93AE50@<eax>(__m128 *a1@<edi>, __m128 *a2, float *a3)
{
  int v3; // esi
  int v4; // ecx
  int v5; // edx
  __m128 v6; // xmm3
  __m128 v7; // xmm2
  __m128 v8; // xmm1
  __m128 v9; // xmm4
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 *v15; // [esp+Ch] [ebp-14h]
  float v16; // [esp+14h] [ebp-Ch]

  v3 = 0; /*0x93ae5e*/
  v15 = a1; /*0x93ae60*/
  do /*0x93af97*/
  {
    v4 = byte_A99F0E[v3]; /*0x93ae70*/
    v5 = byte_A99F0C[v3]; /*0x93ae77*/
    if ( a3[v4] >= (double)*(float *)&SrcStr && a3[v5] >= (double)*(float *)&SrcStr ) /*0x93aea0*/
    {
      v6 = _mm_sub_ps(a1[v4], *v15); /*0x93aeba*/
      v7 = _mm_sub_ps(a1[3], *v15); /*0x93aebd*/
      v8 = _mm_sub_ps(*a2, *v15); /*0x93aecf*/
      v9 = _mm_sub_ps(a1[v5], *v15); /*0x93aed2*/
      v10 = _mm_mul_ps(v8, v6); /*0x93aed8*/
      v11 = _mm_mul_ps(v8, v9); /*0x93aee6*/
      v16 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x93af0e*/
          + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
      v12 = _mm_mul_ps(v7, v6); /*0x93af15*/
      v13 = _mm_mul_ps(v7, v9); /*0x93af2e*/
      if ( (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] /*0x93af76*/
                 + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]))
         * (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0])) <= (float)(_mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]))
                                                                                           * v16 )
        a3[v4] = -1.0; /*0x93af81*/
      else
        a3[v5] = -1.0; /*0x93af78*/
    }
    ++v3; /*0x93af8c*/
    ++v15; /*0x93af93*/
  }
  while ( v3 < 3 ); /*0x93af97*/
  if ( *a3 > (double)*(float *)&SrcStr ) /*0x93afaa*/
    return 0; /*0x93afac*/
  if ( a3[1] > (double)*(float *)&SrcStr ) /*0x93afc2*/
    return 1; /*0x93afc4*/
  if ( a3[2] <= (double)*(float *)&SrcStr ) /*0x93afdd*/
    return 0xFFFFFFFF; /*0x93afeb*/
  return 2; /*0x93afae*/
}
