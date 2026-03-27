signed int __thiscall sub_93B220(__m128 *this, int a2, int a3, _DWORD *a4, _DWORD *a5, char a6, int a7)
{
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm0
  __m128 *v10; // ebx
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  float v13; // xmm4_4
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  float v16; // xmm2_4
  __m128 v17; // xmm5
  __m128 v18; // xmm1
  __m128 v19; // xmm0
  __int128 v21; // xmm0
  unsigned __int64 v22; // rax
  __int128 v23; // xmm0
  BOOL v24; // eax
  __m128 v25; // xmm3
  __m128 v26; // xmm4
  __m128 v27; // xmm1
  __m128 *v28; // edi
  __m128 v29; // xmm0
  float v30; // xmm2_4
  __m128 v31; // xmm5
  __m128 v32; // xmm0
  __int32 v33; // eax
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm0
  int v37; // eax
  int v38; // ecx
  __m128 v39; // [esp+10h] [ebp-A0h] BYREF
  __m128 *v40; // [esp+28h] [ebp-88h]
  float v41; // [esp+2Ch] [ebp-84h]
  __m128 v42; // [esp+30h] [ebp-80h] BYREF
  __m128 v43; // [esp+40h] [ebp-70h] BYREF
  __m128 v44[2]; // [esp+50h] [ebp-60h] BYREF
  float v45; // [esp+70h] [ebp-40h]
  __m128 v46[2]; // [esp+80h] [ebp-30h] BYREF
  float v47; // [esp+A0h] [ebp-10h]

  if ( !a6 )
  {
    v25 = *(__m128 *)a3;
    v26 = *(__m128 *)(a2 + 0x10);
    v27 = *(this + 0x12);
    v28 = (__m128 *)(a2 + 0x10);
    v29 = _mm_mul_ps(v27, _mm_sub_ps(v26, *(__m128 *)a3));
    v40 = this + 0x16;
    v30 = _mm_shuffle_ps(v29, v29, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]);
    v31 = *(__m128 *)a2;
    v32 = _mm_mul_ps(v27, _mm_sub_ps(*(__m128 *)a2, v25));
    v39.m128_i32[0] = *((_DWORD *)this + 0x58);
    v27.m128_f32[0] = _mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0];
    v39.m128_i32[1] = *((_DWORD *)this + 0x59);
    v33 = *((_DWORD *)this + 0x5B);
    v34 = _mm_shuffle_ps(v32, v32, 0xAA);
    v34.m128_f32[0] = v34.m128_f32[0] + v27.m128_f32[0];
    v35 = v34;
    v39.m128_i32[2] = *((_DWORD *)this + 0x5A);
    v35.m128_f32[0] = v34.m128_f32[0] * v30;
    v39.m128_i32[3] = v33;
    if ( (_mm_movemask_ps(v35) & 1) != 0 )
    {
      v34.m128_f32[0] = v34.m128_f32[0] / (float)(v34.m128_f32[0] - v30);
      v36 = _mm_shuffle_ps(v34, v34, 0);
      v42 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v36), v31), _mm_mul_ps(v36, v26));
      if ( sub_93B000(this, &v42, (__m128 *)a3, 0) == 7 )
        return 1;
    }
    v37 = sub_93B000(this, v28, (__m128 *)a3, 0);
    if ( v37 == 7 )
    {
      --*a4;
      *(__m128 *)a2 = *v28;
      *(_OWORD *)(a2 + 0x40) = *(_OWORD *)(a2 + 0x50);
      *(_DWORD *)(v38 + 0x170) = a7;
      return 0;
    }
    if ( v37 != 6 )
    {
      switch ( v37 )
      {
        case 5:
LABEL_25:
          --*a5;
          *(_OWORD *)(a3 + 0x10) = *(_OWORD *)(a3 + 0x20);
          *(_OWORD *)(a3 + 0x50) = *(_OWORD *)(a3 + 0x60);
          return 2;
        case 3:
LABEL_22:
          --*a5;
          return 2;
        case 1:
          if ( (*(float *)(v38 + 0x168) - v39.m128_f32[2]) * v39.m128_f32[1] >= (*(float *)(v38 + 0x164)
                                                                               - v39.m128_f32[1])
                                                                              * v39.m128_f32[2] )
            goto LABEL_25;
          goto LABEL_22;
        case 2:
          if ( (v40->m128_f32[0] - v39.m128_f32[0]) * v39.m128_f32[2] >= (*(float *)(v38 + 0x168) - v39.m128_f32[2])
                                                                       * v39.m128_f32[0] )
            goto LABEL_22;
          break;
        default:
          if ( v37 == 4
            && (*(float *)(v38 + 0x164) - v39.m128_f32[1]) * v39.m128_f32[0] < (v40->m128_f32[0] - v39.m128_f32[0])
                                                                             * v39.m128_f32[1] )
          {
            goto LABEL_25;
          }
          break;
      }
    }
    --*a5;
    *(_OWORD *)a3 = *(_OWORD *)(a3 + 0x20);
    *(_OWORD *)(a3 + 0x40) = *(_OWORD *)(a3 + 0x60);
    return 2;
  }
  v7 = *(__m128 *)a3;
  v8 = *(__m128 *)(a3 + 0x20);
  v9 = _mm_sub_ps(*(__m128 *)(a3 + 0x10), v8);
  v10 = (__m128 *)(a3 + 0x20);
  v42 = _mm_sub_ps(*(__m128 *)a3, v8);
  v43 = v9;
  v11 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0xC9), _mm_shuffle_ps(v42, v42, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0xD2), _mm_shuffle_ps(v42, v42, 0xC9)));
  v12 = _mm_mul_ps(v11, _mm_sub_ps(*(__m128 *)a2, v7));
  v13 = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0];
  v14 = _mm_shuffle_ps(v12, v12, 0xAA);
  v14.m128_f32[0] = v14.m128_f32[0] + v13;
  v15 = _mm_mul_ps(v11, _mm_sub_ps(*(__m128 *)(a2 + 0x10), v7));
  v16 = _mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0];
  v17 = _mm_shuffle_ps(v15, v15, 0xAA);
  v18 = v17;
  v18.m128_f32[0] = v17.m128_f32[0] + v16;
  if ( (((unsigned __int8)_mm_movemask_ps(v14) ^ (unsigned __int8)_mm_movemask_ps(v18)) & 1) != 0 )
  {
    v14.m128_f32[0] = v14.m128_f32[0] / (float)(v14.m128_f32[0] - v18.m128_f32[0]);
    v19 = _mm_shuffle_ps(v14, v14, 0);
    v39 = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v19), *(__m128 *)a2),
            _mm_mul_ps(v19, *(__m128 *)(a2 + 0x10)));
    if ( sub_93B000(this, &v39, (__m128 *)a3, 0) == 7 )
      return 1;
  }
  else
  {
    v40 = (__m128 *)v14.m128_i32[0];
    v41 = v17.m128_f32[0] + v16;
    if ( fabs(v18.m128_f32[0]) < fabs(v14.m128_f32[0]) )
    {
      v21 = *(_OWORD *)(a2 + 0x10);
      v39.m128_u64[0] = *(_QWORD *)a2;
      v22 = *(_QWORD *)(a2 + 8);
      *(_OWORD *)a2 = v21;
      v39.m128_u64[1] = v22;
      *(__m128 *)(a2 + 0x10) = v39;
      v23 = *(_OWORD *)(a2 + 0x50);
      v39.m128_u64[0] = *(_QWORD *)(a2 + 0x40);
      HIDWORD(v22) = *(_DWORD *)(a2 + 0x48);
      LODWORD(v22) = *(_DWORD *)(a2 + 0x4C);
      *(_OWORD *)(a2 + 0x40) = v23;
      v39.m128_u64[1] = __PAIR64__(v22, HIDWORD(v22));
      *(__m128 *)(a2 + 0x50) = v39;
    }
    if ( sub_93B000(this, (__m128 *)a2, (__m128 *)a3, 1) == 7 )
    {
      --*a4;
      return 0;
    }
  }
  v39 = _mm_sub_ps(*(__m128 *)(a2 + 0x10), *(__m128 *)a2);
  sub_8D1A30((__m128 *)a2, &v39, v10, &v43, v44);
  sub_8D1A30((__m128 *)a2, &v39, v10, &v42, v46);
  v24 = v45 > (double)v47;
  *(__m128 *)(0x10 * v24 + a3) = *v10;
  *(_OWORD *)(0x10 * (v24 + 4) + a3) = *(_OWORD *)(a3 + 0x60);
  --*a5;
  return 2;
}
