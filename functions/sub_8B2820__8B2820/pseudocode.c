void __thiscall sub_8B2820(__m128 *this, _DWORD *a2, int *a3)
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
  int v16; // ebx
  __m128 v17; // xmm1
  int v18; // ecx
  __int32 v19; // edx
  unsigned int v20; // eax
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  long double v23; // st7
  unsigned int v24; // eax
  int v25; // [esp+14h] [ebp-ACh]
  float v26; // [esp+18h] [ebp-A8h]
  __m128 v27; // [esp+20h] [ebp-A0h] BYREF
  __m128 v28; // [esp+30h] [ebp-90h]
  __m128 v29; // [esp+40h] [ebp-80h]
  __m128 v30; // [esp+50h] [ebp-70h] BYREF
  __m128 v31; // [esp+60h] [ebp-60h] BYREF
  __m128 v32; // [esp+70h] [ebp-50h]
  __m128 v33; // [esp+80h] [ebp-40h]
  __m128 v34; // [esp+90h] [ebp-30h] BYREF
  __m128 v35; // [esp+A0h] [ebp-20h]
  __m128 v36; // [esp+B0h] [ebp-10h]

  sub_8F0F70((int)a2, a3, a2[0xA], 8);
  v4 = (__m128 *)a2[7];
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = this + 2;
  v9 = 4;
  do
  {
    *(__m128 *)((char *)v8 + (char *)&v30 - (char *)(this + 2)) = _mm_add_ps(
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
  v30 = _mm_add_ps(v30, v10);
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v15 = this + 6;
  v16 = 3;
  do
  {
    *(__m128 *)((char *)v15 + (char *)&v34 - (char *)(this + 6)) = _mm_add_ps(
                                                                     _mm_add_ps(
                                                                       _mm_mul_ps(v12, _mm_shuffle_ps(*v15, *v15, 0)),
                                                                       _mm_mul_ps(v13, _mm_shuffle_ps(*v15, *v15, 0x55))),
                                                                     _mm_mul_ps(v14, _mm_shuffle_ps(*v15, *v15, 0xAA)));
    ++v15;
    --v16;
  }
  while ( v16 );
  v17 = _mm_add_ps(v34, v11[3]);
  v28 = v32;
  v27 = v33;
  v34 = v17;
  v29 = v35;
  sub_8F1310(&v27, (int)a2, (int)a3);
  v28 = v33;
  v27 = v32;
  v29 = _mm_xor_ps(v35, (__m128)xmmword_A965C0);
  sub_8F1310(&v27, (int)a2, (int)a3);
  v18 = a2[0xA];
  v19 = this->m128_i32[3];
  v20 = *((_DWORD *)this + 4);
  v27 = v31;
  v21 = _mm_mul_ps(v36, v32);
  v25 = v18;
  v26 = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]);
  v22 = _mm_mul_ps(
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0xC9), _mm_shuffle_ps(v35, v35, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0xD2), _mm_shuffle_ps(v35, v35, 0xC9))),
          v32);
  v28.m128_u64[0] = __PAIR64__(v20, v19);
  v23 = sub_8ECBB0(
          v26,
          _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]));
  v28.m128_f32[2] = v23;
  if ( *(float *)(v25 + 0x38) - v23 <= flt_A97E64 )
  {
    if ( v23 - *(float *)(v25 + 0x38) <= flt_A97E64 )
      goto LABEL_10;
    v23 = v23 - flt_A46B14;
  }
  else
  {
    v23 = v23 + flt_A46B14;
  }
  v28.m128_f32[2] = v23;
LABEL_10:
  *(float *)(v25 + 0x38) = v23;
  sub_8F1B60(&v27, (int)a2, (int)a3);
  sub_8F1CC0(&v30, &v34, (int)a2, (__m128 **)a3);
  if ( *((float *)this + 5) != *(float *)&SrcStr )
  {
    v24 = *((_DWORD *)this + 5);
    v27.m128_i32[0] = (__int32)&v31;
    v27.m128_u64[1] = v24 | 0x100000000LL;
    v27.m128_i32[1] = v25 + 0x30;
    sub_8F1460((int)&v27, (int)a2, (int)a3);
  }
}
