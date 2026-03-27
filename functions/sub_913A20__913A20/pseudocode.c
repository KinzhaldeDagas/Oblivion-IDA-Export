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

  sub_8F0F70((int)a2, a3, a2[0xA], 8);
  v4 = (__m128 *)a2[7];
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = this + 1;
  v9 = 3;
  do
  {
    *(__m128 *)((char *)v8 + (char *)&v25 - (char *)(this + 1)) = _mm_add_ps(
                                                                    _mm_add_ps(
                                                                      _mm_mul_ps(v5, _mm_shuffle_ps(*v8, *v8, 0)),
                                                                      _mm_mul_ps(v6, _mm_shuffle_ps(*v8, *v8, 0x55))),
                                                                    _mm_mul_ps(v7, _mm_shuffle_ps(*v8, *v8, 0xAA)));
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = v4[3];
  v11 = (__m128 *)a2[8];
  v25 = _mm_add_ps(v25, v10);
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v15 = this + 4;
  v16 = (char *)&v20 - (char *)(this + 4);
  v17 = 2;
  do
  {
    *(__m128 *)((char *)v15 + v16) = _mm_add_ps(
                                       _mm_add_ps(
                                         _mm_mul_ps(v12, _mm_shuffle_ps(*v15, *v15, 0)),
                                         _mm_mul_ps(v13, _mm_shuffle_ps(*v15, *v15, 0x55))),
                                       _mm_mul_ps(v14, _mm_shuffle_ps(*v15, *v15, 0xAA)));
    ++v15;
    --v17;
  }
  while ( v17 );
  v18 = _mm_add_ps(v20, v11[3]);
  v23 = v26;
  v22 = v27;
  v20 = v18;
  v24 = v21;
  sub_8F1310(&v22, (int)a2, (int)a3);
  v23 = v27;
  v22 = v26;
  v24 = _mm_xor_ps(v21, (__m128)xmmword_A965C0);
  sub_8F1310(&v22, (int)a2, (int)a3);
  return sub_8F1CC0(&v25, &v20, (int)a2, (__m128 **)a3);
}
