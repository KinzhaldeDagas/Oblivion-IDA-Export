int __thiscall sub_93B000(__m128 *this, __m128 *a2, __m128 *a3, int a4)
{
  __m128 v4; // xmm7
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __m128 v7; // xmm5
  __m128 v8; // xmm2
  __m128 v9; // xmm6
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm4
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __m128 v18; // xmm0
  __m128 v19; // xmm2
  __m128 v20; // xmm0
  int v21; // esi
  __m128 v22; // xmm0
  __m128 v23; // xmm2
  __int32 v24; // edi
  __int32 v25; // eax
  __int32 v26; // ebx
  __int32 v27; // edi
  double v28; // st7
  __m128 v30; // [esp+10h] [ebp-30h]
  __m128 v31; // [esp+10h] [ebp-30h]
  __m128 v32; // [esp+20h] [ebp-20h]
  __m128 v33; // [esp+30h] [ebp-10h]

  v4 = a3[1];
  v5 = _mm_sub_ps(a3[2], v4);
  v6 = _mm_sub_ps(*a3, a3[2]);
  v7 = _mm_shuffle_ps(v6, v6, 0xC9);
  v8 = _mm_sub_ps(v4, *a3);
  v30 = _mm_shuffle_ps(v5, v5, 0xC9);
  v9 = _mm_shuffle_ps(v5, v5, 0xD2);
  v32 = _mm_shuffle_ps(v6, v6, 0xD2);
  v10 = _mm_sub_ps(_mm_mul_ps(v30, v32), _mm_mul_ps(v9, v7));
  v11 = _mm_sub_ps(*a2, v4);
  v12 = _mm_sub_ps(*a2, a3[2]);
  v33 = _mm_sub_ps(*a2, *a3);
  v13 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0xC9), v32), _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0xD2), v7));
  v14 = _mm_mul_ps(
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0xC9), _mm_shuffle_ps(v8, v8, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0xD2), _mm_shuffle_ps(v8, v8, 0xC9))),
          v10);
  v15 = _mm_mul_ps(
          _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), v9), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), v30)),
          v10);
  v16 = _mm_mul_ps(v13, v10);
  v17 = _mm_shuffle_ps(v14, v14, 0x44);
  v18 = _mm_shuffle_ps(_mm_shuffle_ps(v15, v16, 0xEE), _mm_shuffle_ps(v14, v14, 0xEE), 0x88);
  v19 = _mm_shuffle_ps(v15, v16, 0x44);
  v20 = _mm_add_ps(_mm_add_ps(_mm_shuffle_ps(v19, v17, 0x88), _mm_shuffle_ps(v19, v17, 0xDD)), v18);
  v21 = _mm_movemask_ps(v20) & 7;
  *(this + 0x16) = v20;
  if ( a4 )
  {
    *(this + 0x12) = v10;
    if ( v21 == 7 )
    {
      v22 = _mm_mul_ps(v10, _mm_sub_ps(*(this + 2), *(this + 0xA)));
      v23 = _mm_shuffle_ps(v22, v22, 0xAA);
      v23.m128_f32[0] = v23.m128_f32[0] + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]);
      if ( (_mm_movemask_ps(v23) & 1) != 0 )
      {
        *(this + 0x12) = _mm_xor_ps(v10, (__m128)xmmword_A965C0);
        v31.m128_u64[0] = a3->m128_u64[0];
        v24 = a3->m128_i32[2];
        v25 = a3->m128_i32[3];
        *a3 = a3[1];
        v31.m128_u64[1] = __PAIR64__(v25, v24);
        a3[1] = v31;
        v31.m128_u64[0] = a3[4].m128_u64[0];
        v26 = a3[4].m128_i32[2];
        v27 = a3[4].m128_i32[3];
        a3[4] = a3[5];
        v31.m128_u64[1] = __PAIR64__(v27, v26);
        a3[5] = v31;
        v28 = *((float *)this + 0x58);
        *((_DWORD *)this + 0x58) = *((_DWORD *)this + 0x59);
        *((float *)this + 0x59) = v28;
        *((_DWORD *)this + 5) = 1;
      }
    }
  }
  return v21;
}
