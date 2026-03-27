_DWORD *__thiscall sub_910A40(__m128 *this, _DWORD *a2, int *a3)
{
  __m128 *v4; // ecx
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 *v8; // eax
  __m128 v9; // xmm1
  __m128 *v10; // ecx
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 *v13; // eax
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  int v17; // eax
  int v18; // ecx
  unsigned int v20; // [esp+18h] [ebp-C8h]
  int v21; // [esp+1Ch] [ebp-C4h]
  int v22; // [esp+1Ch] [ebp-C4h]
  __m128 v23; // [esp+20h] [ebp-C0h] BYREF
  __m128 v24; // [esp+30h] [ebp-B0h]
  __m128 v25; // [esp+40h] [ebp-A0h]
  int v26; // [esp+50h] [ebp-90h]
  int v27; // [esp+54h] [ebp-8Ch]
  __m128 v28; // [esp+60h] [ebp-80h] BYREF
  __m128 v29; // [esp+70h] [ebp-70h]
  __m128 v30; // [esp+80h] [ebp-60h] BYREF
  __m128 v31; // [esp+90h] [ebp-50h]
  __m128 v32; // [esp+A0h] [ebp-40h]
  __m128 v33; // [esp+B0h] [ebp-30h]
  __m128 v34; // [esp+C0h] [ebp-20h]

  sub_8F0F70((int)a2, a3, a2[0xA], 8);
  v4 = (__m128 *)a2[7];
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = this + 1;
  v21 = 2;
  do
  {
    *(__m128 *)((char *)v8 + (char *)&v28 - (char *)(this + 1)) = _mm_add_ps(
                                                                    _mm_add_ps(
                                                                      _mm_mul_ps(v5, _mm_shuffle_ps(*v8, *v8, 0)),
                                                                      _mm_mul_ps(v6, _mm_shuffle_ps(*v8, *v8, 0x55))),
                                                                    _mm_mul_ps(v7, _mm_shuffle_ps(*v8, *v8, 0xAA)));
    ++v8;
    --v21;
  }
  while ( v21 );
  v9 = v4[3];
  v10 = (__m128 *)a2[8];
  v11 = v10[1];
  v12 = v10[2];
  v13 = this + 3;
  v14 = _mm_add_ps(v28, v9);
  v15 = *v10;
  v28 = v14;
  v22 = 6;
  do
  {
    *(__m128 *)((char *)v13 + (char *)&v30 - (char *)(this + 3)) = _mm_add_ps(
                                                                     _mm_add_ps(
                                                                       _mm_mul_ps(v15, _mm_shuffle_ps(*v13, *v13, 0)),
                                                                       _mm_mul_ps(v11, _mm_shuffle_ps(*v13, *v13, 0x55))),
                                                                     _mm_mul_ps(v12, _mm_shuffle_ps(*v13, *v13, 0xAA)));
    ++v13;
    --v22;
  }
  while ( v22 );
  v30 = _mm_add_ps(v30, v10[3]);
  v24 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xC9), _mm_shuffle_ps(v31, v31, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xD2), _mm_shuffle_ps(v31, v31, 0xC9)));
  v23 = v29;
  v25 = v31;
  sub_8F1310(&v23, (int)a2, (int)a3);
  v24 = _mm_xor_ps(v31, (__m128)xmmword_A965C0);
  v23 = v29;
  v25 = v32;
  sub_8F1310(&v23, (int)a2, (int)a3);
  v16 = _mm_mul_ps(_mm_sub_ps(v28, v30), v33);
  *(float *)&v20 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
  v23 = v28;
  v24 = _mm_add_ps(v30, _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v33));
  v25 = v34;
  sub_8F1790(&v23, (int)a2, (__m128 **)a3);
  v25 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0xC9), _mm_shuffle_ps(v25, v25, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0xD2), _mm_shuffle_ps(v25, v25, 0xC9)));
  sub_8F1790(&v23, (int)a2, (__m128 **)a3);
  v17 = *((_DWORD *)this + 0x24);
  v18 = *((_DWORD *)this + 0x25);
  v23 = v28;
  v24 = v30;
  v26 = v17;
  v27 = v18;
  v25 = v33;
  sub_8F1970(&v23, (int)a2, a3);
  sub_8F0F20(*((_DWORD *)this + 0x26), *((_DWORD *)this + 0x27), (int)a3);
  v23 = v28;
  v24 = v30;
  v25 = v33;
  sub_8F1790(&v23, (int)a2, (__m128 **)a3);
  return sub_8F0F50((int)a3);
}
