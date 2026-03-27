void __cdecl sub_8F8E00(__m128 ***a1, int a2, _OWORD *a3)
{
  __m128 **v3; // edx
  __m128 *v4; // ebx
  __m128 *v5; // edi
  __m128 *v6; // eax
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm4
  __m128 *v11; // ecx
  int v12; // esi
  __m128 *v13; // ecx
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 v16; // xmm3
  __m128 v17; // xmm4
  __m128 *v18; // eax
  int v19; // edx
  int v20; // [esp+0h] [ebp-C0h] BYREF
  __m128 v21[2]; // [esp+10h] [ebp-B0h] BYREF
  __m128 v22; // [esp+30h] [ebp-90h] BYREF
  __int128 v23; // [esp+40h] [ebp-80h]
  __int128 v24; // [esp+60h] [ebp-60h]
  __m128 v25[3]; // [esp+90h] [ebp-30h] BYREF

  v3 = a1[1];
  v4 = *v3;
  v5 = **a1;
  v6 = (*a1)[2];
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v10 = v6[3];
  v11 = v5 + 1;
  v12 = 2;
  do
  {
    *(__m128 *)((char *)v11 + (char *)&v20 - (char *)v5) = _mm_add_ps(
                                                             _mm_add_ps(
                                                               _mm_mul_ps(v7, _mm_shuffle_ps(*v11, *v11, 0)),
                                                               _mm_mul_ps(v8, _mm_shuffle_ps(*v11, *v11, 0x55))),
                                                             _mm_add_ps(
                                                               _mm_mul_ps(v9, _mm_shuffle_ps(*v11, *v11, 0xAA)),
                                                               v10));
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = v3[2];
  v14 = *v13;
  v15 = v13[1];
  v16 = v13[2];
  v17 = v13[3];
  v18 = v4 + 1;
  v19 = 3;
  do
  {
    *(__m128 *)((char *)v18 + (char *)v25 - (char *)&v4[1]) = _mm_add_ps(
                                                                _mm_add_ps(
                                                                  _mm_mul_ps(v14, _mm_shuffle_ps(*v18, *v18, 0)),
                                                                  _mm_mul_ps(v15, _mm_shuffle_ps(*v18, *v18, 0x55))),
                                                                _mm_add_ps(
                                                                  _mm_mul_ps(v16, _mm_shuffle_ps(*v18, *v18, 0xAA)),
                                                                  v17));
    ++v18;
    --v19;
  }
  while ( v19 );
  sub_8D0CA0(v21, v5->m128_f32[3], v25, v4->m128_f32[3], (float *)(a2 + 8), 3.4028235e38, 0, &v22);
  if ( *((float *)&v23 + 3) >= (double)*((float *)&v24 + 3) )
    *a3 = v24;
  else
    *a3 = v23;
}
