int __fastcall sub_8F67C0(__m128 *a1, int a2, unsigned __int64 a3, int a4, int a5)
{
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // esi
  unsigned __int64 v8; // rax
  double v9; // st7
  __m128 *v10; // eax
  __m128 *v11; // ecx
  double v12; // rt0
  double v13; // st6
  __m128 v14; // xmm0
  __m128 *v15; // esi
  __m128 v16; // xmm3
  __m128 v17; // xmm5
  int v18; // eax
  __m128 v19; // xmm4
  __m128 v20; // xmm0
  char v21; // dl
  int v22; // ebx
  __m128 *v23; // eax
  __m128 v24; // xmm4
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  __m128 v27; // xmm5
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  __m128 v30; // xmm1
  __m128 v31; // xmm2
  __m128 v32; // xmm5
  __m128 v33; // xmm0
  __m128 v34; // xmm6
  __m128 v35; // xmm3
  __m128 v36; // xmm2
  __m128 *v37; // eax
  __m128 v38; // xmm1
  __m128 v39; // xmm4
  __m128 v40; // xmm2
  __m128 v41; // xmm4
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v43; // edi
  int v44; // eax
  int v45; // esi
  _DWORD *v46; // ecx
  unsigned __int64 v47; // rax
  int v48; // edi
  int v49; // ecx
  unsigned __int64 v50; // rax
  int v51; // eax
  int v52; // esi
  _DWORD *v53; // ecx
  float v55; // [esp+0h] [ebp-318h]
  float v56; // [esp+0h] [ebp-318h]
  unsigned int v57; // [esp+1Ch] [ebp-2FCh]
  unsigned int v58; // [esp+20h] [ebp-2F8h]
  __m128 *v59; // [esp+24h] [ebp-2F4h]
  __m128 v60; // [esp+28h] [ebp-2F0h] BYREF
  __m128 v61; // [esp+38h] [ebp-2E0h]
  __m128 v62; // [esp+48h] [ebp-2D0h]
  __m128 v63; // [esp+58h] [ebp-2C0h] BYREF
  __m128 v64[5]; // [esp+68h] [ebp-2B0h] BYREF
  __m128 v65; // [esp+B8h] [ebp-260h]
  __m128 v66[4]; // [esp+C8h] [ebp-250h] BYREF
  int *v67; // [esp+108h] [ebp-210h] BYREF
  int v68; // [esp+10Ch] [ebp-20Ch]
  int v69; // [esp+110h] [ebp-208h]
  unsigned int v70; // [esp+114h] [ebp-204h] BYREF

  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8f67db*/
  v59 = a1; /*0x8f67ed*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8f67f1*/
  {
    v6 = v5; /*0x8f67f3*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8f67f5*/
    *v7 = "LtBvTree3"; /*0x8f67fb*/
    v7[3] = "QueryTree"; /*0x8f6801*/
    v8 = __rdtsc(); /*0x8f6808*/
    v7[1] = v8; /*0x8f6812*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 4; /*0x8f6818*/
  }
  v9 = *(float *)(a4 + 0x18); /*0x8f6824*/
  v10 = *(__m128 **)(a3 + 8); /*0x8f682c*/
  v63.m128_i32[3] = a1->m128_i32[2]; /*0x8f6832*/
  v11 = *(__m128 **)(HIDWORD(a3) + 8); /*0x8f6836*/
  v63.m128_u64[0] = a3; /*0x8f6839*/
  v63.m128_i32[2] = a4; /*0x8f6841*/
  v12 = v9 * v10[5].m128_f32[3]; /*0x8f684c*/
  v13 = v9 * v11[5].m128_f32[3]; /*0x8f684e*/
  *(float *)&v58 = v12; /*0x8f685a*/
  v14 = (__m128)v58; /*0x8f685e*/
  *(float *)&v58 = v13; /*0x8f6865*/
  v65 = _mm_add_ps( /*0x8f6891*/
          _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), _mm_sub_ps(v10[4], v10[5])),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v58, (__m128)v58, 0), _mm_sub_ps(v11[5], v11[4])));
  v65.m128_f32[3] = v11[0xA].m128_f32[0] * v11[9].m128_f32[3] * v13 + v10[0xA].m128_f32[0] * v10[9].m128_f32[3] * v12; /*0x8f68bc*/
  sub_8B1FF0(v64, v10, v11); /*0x8f68c7*/
  v67 = (int *)&v70; /*0x8f68df*/
  v69 = 0x80000080; /*0x8f68e6*/
  v70 = 0xFFFFFFFF; /*0x8f68f1*/
  v68 = 1; /*0x8f68fc*/
  sub_8B1F10(v66, v64); /*0x8f6907*/
  v15 = *(__m128 **)(HIDWORD(a3) + 8); /*0x8f690c*/
  v16 = v15[2]; /*0x8f690f*/
  v17 = v15[1]; /*0x8f691e*/
  v18 = *(_DWORD *)(a3 + 8); /*0x8f6922*/
  v19 = _mm_shuffle_ps(v16, v16, 0x44); /*0x8f6932*/
  v20 = _mm_shuffle_ps(*v15, v17, 0x44); /*0x8f693a*/
  v57 = v18; /*0x8f695a*/
  v21 = *(_BYTE *)(*(_DWORD *)(a4 + 0x28) + 0x10); /*0x8f6967*/
  v22 = *(_DWORD *)a3; /*0x8f696c*/
  v62 = _mm_add_ps( /*0x8f6985*/
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v20, v19, 0x88), _mm_shuffle_ps(v65, v65, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v20, v19, 0xDD), _mm_shuffle_ps(v65, v65, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(*v15, v17, 0xEE), _mm_shuffle_ps(v16, v16, 0xEE), 0x88),
            _mm_shuffle_ps(v65, v65, 0xAA)));
  if ( v21 ) /*0x8f698c*/
  {
    *(float *)&v58 = v15[0xA].m128_f32[0] * v15[9].m128_f32[3] * v15[9].m128_f32[3]; /*0x8f69a6*/
    v55 = (*(float *)(v18 + 0x9C) + v15[9].m128_f32[3]) * *(float *)(v18 + 0xA0) /*0x8f69d2*/
        + *(float *)&v58
        + *(float *)(a4 + 8) * kHeadBodyNormalMatchRadius;
    (*(void (__thiscall **)(int, __m128 *, _DWORD, __m128 *))(*(_DWORD *)v22 + 0xC))(v22, v66, LODWORD(v55), &v60); /*0x8f69d6*/
    v23 = *(__m128 **)(HIDWORD(a3) + 8); /*0x8f69e9*/
    v24 = v23[2]; /*0x8f69f4*/
    v25 = _mm_sub_ps(*(__m128 *)(v57 + 0x50), v23[3]); /*0x8f6a09*/
    *(float *)&v57 = *(float *)(a4 + 8) * kHeadBodyNormalMatchRadius + *(float *)&v58 + *(float *)(v57 + 0xA0); /*0x8f6a0f*/
    v26 = _mm_shuffle_ps(*v23, v23[1], 0x44); /*0x8f6a19*/
    v27 = _mm_shuffle_ps(v24, v24, 0x44); /*0x8f6a20*/
    v28 = _mm_shuffle_ps((__m128)v57, (__m128)v57, 0); /*0x8f6a63*/
    v29 = _mm_add_ps( /*0x8f6a6a*/
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v26, v27, 0x88), _mm_shuffle_ps(v25, v25, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v26, v27, 0xDD), _mm_shuffle_ps(v25, v25, 0x55))),
            _mm_mul_ps(
              _mm_shuffle_ps(_mm_shuffle_ps(*v23, v23[1], 0xEE), _mm_shuffle_ps(v24, v24, 0xEE), 0x88),
              _mm_shuffle_ps(v25, v25, 0xAA)));
    v30 = _mm_max_ps(v60, _mm_sub_ps(v29, v28)); /*0x8f6a7b*/
    v31 = _mm_min_ps(v61, _mm_add_ps(v29, v28)); /*0x8f6a89*/
    v60 = v30; /*0x8f6a8c*/
    v61 = v31; /*0x8f6a91*/
    v32 = _mm_sub_ps(v31, v30); /*0x8f6aa5*/
    if ( v15[9].m128_f32[3] <= (double)*(float *)&SrcStr ) /*0x8f6aad*/
    {
      v34 = v62; /*0x8f6b0e*/
    }
    else
    {
      v33 = _mm_sub_ps(v29, v15[8]); /*0x8f6abc*/
      *(float *)&v57 = v15[5].m128_f32[3] * *(float *)(a4 + 0x18); /*0x8f6acd*/
      v34 = _mm_add_ps( /*0x8f6b04*/
              v62,
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)v57, (__m128)v57, 0),
                _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0xC9), _mm_shuffle_ps(v15[9], v15[9], 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0xD2), _mm_shuffle_ps(v15[9], v15[9], 0xC9)))));
      v62 = v34; /*0x8f6b07*/
    }
    v35 = _mm_add_ps(v30, _mm_min_ps((__m128)0LL, v34)); /*0x8f6b22*/
    v36 = _mm_add_ps(v31, _mm_max_ps((__m128)0LL, v34)); /*0x8f6b25*/
    v60 = v35; /*0x8f6b28*/
    v61 = v36; /*0x8f6b2d*/
  }
  else
  {
    v56 = *(float *)(a4 + 8) * kHeadBodyNormalMatchRadius; /*0x8f6b46*/
    (*(void (__thiscall **)(int, __m128 *, _DWORD, __m128 *))(*(_DWORD *)v22 + 0xC))(v22, v66, LODWORD(v56), &v60); /*0x8f6b4a*/
    v36 = v61; /*0x8f6b4d*/
    v35 = v60; /*0x8f6b52*/
    v34 = v62; /*0x8f6b57*/
    v32 = _mm_sub_ps(v61, v60); /*0x8f6b5f*/
  }
  v37 = v59 + 1; /*0x8f6b66*/
  if ( v59 != (__m128 *)0xFFFFFFF0 ) /*0x8f6b69*/
  {
    if ( ((unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(v36, v59[2])) /*0x8f6b8f*/
        & (unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(*v37, v35))
        & 7) == 7 )
    {
      v58 = 1; /*0x8f6b91*/
      goto LABEL_14; /*0x8f6b99*/
    }
    *(float *)&v57 = *(float *)(a4 + 8) * kHeadBodyNormalMatchRadius; /*0x8f6baa*/
    v38 = _mm_shuffle_ps((__m128)v57, (__m128)v57, 0); /*0x8f6bb4*/
    v39 = _mm_add_ps(v36, v38); /*0x8f6bbe*/
    *(float *)&v57 = 0.40000001; /*0x8f6bcf*/
    v40 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3ECCCCCDu, (__m128)0x3ECCCCCDu, 0), v32); /*0x8f6be7*/
    v41 = _mm_add_ps( /*0x8f6c1f*/
            v39,
            _mm_min_ps(
              _mm_mul_ps(_mm_shuffle_ps((__m128)0xC0000000, (__m128)0xC0000000, 0), _mm_min_ps((__m128)0LL, v62)),
              v40));
    v60 = _mm_add_ps( /*0x8f6c22*/
            _mm_sub_ps(v35, v38),
            _mm_max_ps(
              _mm_mul_ps(_mm_shuffle_ps((__m128)0xC0000000, (__m128)0xC0000000, 0), _mm_max_ps((__m128)0LL, v34)),
              _mm_xor_ps(v40, (__m128)xmmword_A965C0)));
    v61 = v41; /*0x8f6c27*/
    *v37 = v60; /*0x8f6c2c*/
    v59[2] = v41; /*0x8f6c2f*/
  }
  (*(void (__thiscall **)(_DWORD, __m128 *, int **))(**(_DWORD **)HIDWORD(a3) + 0x24))( /*0x8f6c47*/
    *(_DWORD *)HIDWORD(a3),
    &v60,
    &v67);
  *(float *)&v58 = 0.0; /*0x8f6c4a*/
LABEL_14:
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f6c52*/
  v43 = MEMORY[0xBA9DE4]; /*0x8f6c59*/
  v44 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f6c5f*/
  if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) ) /*0x8f6c6e*/
  {
    v45 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f6c70*/
    v46 = *(_DWORD **)(v44 + 0x1A4); /*0x8f6c72*/
    *v46 = "StNarrow"; /*0x8f6c78*/
    v47 = __rdtsc(); /*0x8f6c7e*/
    v57 = v47; /*0x8f6c80*/
    v46[1] = v47; /*0x8f6c88*/
    *(_DWORD *)(v45 + 0x1A4) = v46 + 3; /*0x8f6c8e*/
  }
  if ( *(float *)&v58 == 0.0 ) /*0x8f6c9a*/
  {
    v48 = v68; /*0x8f6ca0*/
    v49 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8f6cc8*/
    HIDWORD(v50) = *(_DWORD *)(unk_BA7D98 + 8); /*0x8f6cca*/
    LODWORD(v50) = (v68 / 4 - v59[3].m128_i32[1] + 1) << 9; /*0x8f6ccd*/
    if ( SHIDWORD(v50) > v49 ) /*0x8f6cd2*/
      HIDWORD(v50) -= v49; /*0x8f6cd8*/
    else
      HIDWORD(v50) = 0; /*0x8f6cd4*/
    if ( (int)v50 > SHIDWORD(v50) ) /*0x8f6cdc*/
    {
      *(_DWORD *)(unk_BA7D98 + 4) = 1; /*0x8f6cde*/
      if ( v69 >= 0 ) /*0x8f6cee*/
      {
        v51 = *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x19C); /*0x8f6cfc*/
        if ( !v51 ) /*0x8f6d04*/
          v51 = unk_BA7D9C; /*0x8f6d06*/
LABEL_34:
        LODWORD(v50) = sub_8A75D0(v51, v67, 4 * v69, 0x14); /*0x8f6e03*/
        return v50; /*0x8f6e19*/
      }
      return v50; /*0x8f6cee*/
    }
    LOBYTE(v57) = 0; /*0x8f6d32*/
    if ( v68 > 1 ) /*0x8f6d37*/
    {
      sub_8F6580((int)v67, 0, v68 - 1, v57); /*0x8f6d4a*/
      v48 = v68; /*0x8f6d4f*/
    }
    sub_934DC0((int ***)&v59[3], &v63, *(_BYTE **)(*(_DWORD *)HIDWORD(a3) + 0xC), v67, v48, a5); /*0x8f6d7c*/
    v43 = MEMORY[0xBA9DE4]; /*0x8f6d81*/
  }
  else
  {
    sub_934DC0((int ***)&v59[3], &v63, *(_BYTE **)(*(_DWORD *)HIDWORD(a3) + 0xC), 0, 0, a5); /*0x8f6da7*/
  }
  LODWORD(v50) = ThreadLocalStoragePointer[v43]; /*0x8f6dac*/
  if ( *(_DWORD *)(v50 + 0x1A4) < *(_DWORD *)(v50 + 0x1A8) ) /*0x8f6dc0*/
  {
    v52 = ThreadLocalStoragePointer[v43]; /*0x8f6dc2*/
    v53 = *(_DWORD **)(v50 + 0x1A4); /*0x8f6dc4*/
    *v53 = "lt"; /*0x8f6dca*/
    v50 = __rdtsc(); /*0x8f6dd0*/
    v53[1] = v50; /*0x8f6dda*/
    *(_DWORD *)(v52 + 0x1A4) = v53 + 3; /*0x8f6de0*/
  }
  if ( v69 >= 0 ) /*0x8f6def*/
  {
    v51 = *(_DWORD *)(ThreadLocalStoragePointer[v43] + 0x19C); /*0x8f6df4*/
    if ( !v51 ) /*0x8f6dfc*/
      v51 = unk_BA7D9C; /*0x8f6dfe*/
    goto LABEL_34; /*0x8f6dfe*/
  }
  return v50; /*0x8f6d26*/
}
