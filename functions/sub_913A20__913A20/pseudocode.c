__m128 *__thiscall sub_913A20(__m128 *this, _DWORD *a2, int *a3)
{
  __m128 *v4; // ecx
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 *v8; // eax
  int v9; // ebx
  __m128 v10; // xmm0
  __m128 *v11; // ecx
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 *v15; // eax
  int v16; // edx
  int v17; // edi
  __m128 v18; // xmm1
  __m128 v20; // [esp+10h] [ebp-80h] BYREF
  __m128 v21; // [esp+20h] [ebp-70h]
  __m128 v22; // [esp+30h] [ebp-60h] BYREF
  __m128 v23; // [esp+40h] [ebp-50h]
  __m128 v24; // [esp+50h] [ebp-40h]
  __m128 v25; // [esp+60h] [ebp-30h] BYREF
  __m128 v26; // [esp+70h] [ebp-20h]
  __m128 v27; // [esp+80h] [ebp-10h]

  sub_8F0F70((int)a2, a3, a2[0xA], 8); /*0x913a3f*/
  v4 = (__m128 *)a2[7]; /*0x913a44*/
  v5 = *v4; /*0x913a47*/
  v6 = v4[1]; /*0x913a4a*/
  v7 = v4[2]; /*0x913a4e*/
  v8 = this + 1; /*0x913a52*/
  v9 = 3; /*0x913a5e*/
  do /*0x913a9b*/
  {
    *(__m128 *)((char *)v8 + (char *)&v25 - (char *)(this + 1)) = _mm_add_ps( /*0x913a93*/
                                                                    _mm_add_ps(
                                                                      _mm_mul_ps(v5, _mm_shuffle_ps(*v8, *v8, 0)),
                                                                      _mm_mul_ps(v6, _mm_shuffle_ps(*v8, *v8, 0x55))),
                                                                    _mm_mul_ps(v7, _mm_shuffle_ps(*v8, *v8, 0xAA)));
    ++v8; /*0x913a97*/
    --v9; /*0x913a9a*/
  }
  while ( v9 ); /*0x913a9b*/
  v10 = v4[3]; /*0x913a9d*/
  v11 = (__m128 *)a2[8]; /*0x913aa6*/
  v25 = _mm_add_ps(v25, v10); /*0x913aac*/
  v12 = *v11; /*0x913ab1*/
  v13 = v11[1]; /*0x913ab4*/
  v14 = v11[2]; /*0x913ab8*/
  v15 = this + 4; /*0x913abc*/
  v16 = (char *)&v20 - (char *)(this + 4); /*0x913ac3*/
  v17 = 2; /*0x913ac5*/
  do /*0x913b08*/
  {
    *(__m128 *)((char *)v15 + v16) = _mm_add_ps( /*0x913b00*/
                                       _mm_add_ps(
                                         _mm_mul_ps(v12, _mm_shuffle_ps(*v15, *v15, 0)),
                                         _mm_mul_ps(v13, _mm_shuffle_ps(*v15, *v15, 0x55))),
                                       _mm_mul_ps(v14, _mm_shuffle_ps(*v15, *v15, 0xAA)));
    ++v15; /*0x913b04*/
    --v17; /*0x913b07*/
  }
  while ( v17 ); /*0x913b08*/
  v18 = _mm_add_ps(v20, v11[3]); /*0x913b16*/
  v23 = v26; /*0x913b1e*/
  v22 = v27; /*0x913b30*/
  v20 = v18; /*0x913b3c*/
  v24 = v21; /*0x913b41*/
  sub_8F1310(&v22, (int)a2, (int)a3); /*0x913b46*/
  v23 = v27; /*0x913b58*/
  v22 = v26; /*0x913b63*/
  v24 = _mm_xor_ps(v21, (__m128)xmmword_A965C0); /*0x913b78*/
  sub_8F1310(&v22, (int)a2, (int)a3); /*0x913b7d*/
  return sub_8F1CC0(&v25, &v20, (int)a2, (__m128 **)a3); /*0x913b99*/
}
