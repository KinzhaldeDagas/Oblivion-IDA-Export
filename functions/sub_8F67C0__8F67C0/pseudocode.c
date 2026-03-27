int __fastcall sub_8F67C0(__m128 *a1, int a2, int *a3, _DWORD *a4, int a5, int a6)
{
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // esi
  unsigned __int64 v9; // rax
  double v10; // st7
  __m128 *v11; // eax
  __m128 *v12; // ecx
  double v13; // rt0
  double v14; // st6
  __m128 v15; // xmm0
  __m128 *v16; // esi
  __m128 v17; // xmm3
  __m128 v18; // xmm5
  int v19; // eax
  __m128 v20; // xmm4
  __m128 v21; // xmm0
  char v22; // dl
  int v23; // ebx
  __m128 *v24; // eax
  __m128 v25; // xmm4
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  __m128 v28; // xmm5
  __m128 v29; // xmm2
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm5
  __m128 v34; // xmm0
  __m128 v35; // xmm6
  __m128 v36; // xmm3
  __m128 v37; // xmm2
  __m128 *v38; // eax
  __m128 v39; // xmm1
  __m128 v40; // xmm4
  __m128 v41; // xmm2
  __m128 v42; // xmm4
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v44; // edi
  int v45; // eax
  int v46; // esi
  _DWORD *v47; // ecx
  unsigned __int64 v48; // rax
  int v49; // edi
  int v50; // ecx
  unsigned __int64 v51; // rax
  int v52; // eax
  int v53; // esi
  _DWORD *v54; // ecx
  float v56; // [esp+0h] [ebp-318h]
  float v57; // [esp+0h] [ebp-318h]
  unsigned int v58; // [esp+1Ch] [ebp-2FCh]
  unsigned int v59; // [esp+20h] [ebp-2F8h]
  __m128 *v60; // [esp+24h] [ebp-2F4h]
  __m128 v61; // [esp+28h] [ebp-2F0h] BYREF
  __m128 v62; // [esp+38h] [ebp-2E0h]
  __m128 v63; // [esp+48h] [ebp-2D0h]
  _DWORD v64[4]; // [esp+58h] [ebp-2C0h] BYREF
  __m128 v65[5]; // [esp+68h] [ebp-2B0h] BYREF
  __m128 v66; // [esp+B8h] [ebp-260h]
  __m128 v67[4]; // [esp+C8h] [ebp-250h] BYREF
  unsigned int *v68; // [esp+108h] [ebp-210h] BYREF
  int v69; // [esp+10Ch] [ebp-20Ch]
  int v70; // [esp+110h] [ebp-208h]
  unsigned int v71; // [esp+114h] [ebp-204h] BYREF

  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v60 = a1;
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = v6;
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "LtBvTree3";
    v8[3] = "QueryTree";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4;
  }
  v10 = *(float *)(a5 + 0x18);
  v11 = (__m128 *)a3[2];
  v64[3] = a1->m128_i32[2];
  v12 = (__m128 *)a4[2];
  v64[0] = a3;
  v64[1] = a4;
  v64[2] = a5;
  v13 = v10 * v11[5].m128_f32[3];
  v14 = v10 * v12[5].m128_f32[3];
  *(float *)&v59 = v13;
  v15 = (__m128)v59;
  *(float *)&v59 = v14;
  v66 = _mm_add_ps(
          _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), _mm_sub_ps(v11[4], v11[5])),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v59, (__m128)v59, 0), _mm_sub_ps(v12[5], v12[4])));
  v66.m128_f32[3] = v12[0xA].m128_f32[0] * v12[9].m128_f32[3] * v14 + v11[0xA].m128_f32[0] * v11[9].m128_f32[3] * v13;
  sub_8B1FF0(v65, v11, v12);
  v68 = &v71;
  v70 = 0x80000080;
  v71 = 0xFFFFFFFF;
  v69 = 1;
  sub_8B1F10(v67, v65);
  v16 = (__m128 *)a4[2];
  v17 = v16[2];
  v18 = v16[1];
  v19 = a3[2];
  v20 = _mm_shuffle_ps(v17, v17, 0x44);
  v21 = _mm_shuffle_ps(*v16, v18, 0x44);
  v58 = v19;
  v22 = *(_BYTE *)(*(_DWORD *)(a5 + 0x28) + 0x10);
  v23 = *a3;
  v63 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v21, v20, 0x88), _mm_shuffle_ps(v66, v66, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v21, v20, 0xDD), _mm_shuffle_ps(v66, v66, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(*v16, v18, 0xEE), _mm_shuffle_ps(v17, v17, 0xEE), 0x88),
            _mm_shuffle_ps(v66, v66, 0xAA)));
  if ( v22 )
  {
    *(float *)&v59 = v16[0xA].m128_f32[0] * v16[9].m128_f32[3] * v16[9].m128_f32[3];
    v56 = (*(float *)(v19 + 0x9C) + v16[9].m128_f32[3]) * *(float *)(v19 + 0xA0)
        + *(float *)&v59
        + *(float *)(a5 + 8) * flt_A3D65C;
    (*(void (__thiscall **)(int, __m128 *, _DWORD, __m128 *))(*(_DWORD *)v23 + 0xC))(v23, v67, LODWORD(v56), &v61);
    v24 = (__m128 *)a4[2];
    v25 = v24[2];
    v26 = _mm_sub_ps(*(__m128 *)(v58 + 0x50), v24[3]);
    *(float *)&v58 = *(float *)(a5 + 8) * flt_A3D65C + *(float *)&v59 + *(float *)(v58 + 0xA0);
    v27 = _mm_shuffle_ps(*v24, v24[1], 0x44);
    v28 = _mm_shuffle_ps(v25, v25, 0x44);
    v29 = _mm_shuffle_ps((__m128)v58, (__m128)v58, 0);
    v30 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v27, v28, 0x88), _mm_shuffle_ps(v26, v26, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v27, v28, 0xDD), _mm_shuffle_ps(v26, v26, 0x55))),
            _mm_mul_ps(
              _mm_shuffle_ps(_mm_shuffle_ps(*v24, v24[1], 0xEE), _mm_shuffle_ps(v25, v25, 0xEE), 0x88),
              _mm_shuffle_ps(v26, v26, 0xAA)));
    v31 = _mm_max_ps(v61, _mm_sub_ps(v30, v29));
    v32 = _mm_min_ps(v62, _mm_add_ps(v30, v29));
    v61 = v31;
    v62 = v32;
    v33 = _mm_sub_ps(v32, v31);
    if ( v16[9].m128_f32[3] <= (double)*(float *)&SrcStr )
    {
      v35 = v63;
    }
    else
    {
      v34 = _mm_sub_ps(v30, v16[8]);
      *(float *)&v58 = v16[5].m128_f32[3] * *(float *)(a5 + 0x18);
      v35 = _mm_add_ps(
              v63,
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)v58, (__m128)v58, 0),
                _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xC9), _mm_shuffle_ps(v16[9], v16[9], 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xD2), _mm_shuffle_ps(v16[9], v16[9], 0xC9)))));
      v63 = v35;
    }
    v36 = _mm_add_ps(v31, _mm_min_ps((__m128)0LL, v35));
    v37 = _mm_add_ps(v32, _mm_max_ps((__m128)0LL, v35));
    v61 = v36;
    v62 = v37;
  }
  else
  {
    v57 = *(float *)(a5 + 8) * flt_A3D65C;
    (*(void (__thiscall **)(int, __m128 *, _DWORD, __m128 *))(*(_DWORD *)v23 + 0xC))(v23, v67, LODWORD(v57), &v61);
    v37 = v62;
    v36 = v61;
    v35 = v63;
    v33 = _mm_sub_ps(v62, v61);
  }
  v38 = v60 + 1;
  if ( v60 != (__m128 *)0xFFFFFFF0 )
  {
    if ( ((unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(v37, v60[2]))
        & (unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(*v38, v36))
        & 7) == 7 )
    {
      v59 = 1;
      goto LABEL_14;
    }
    *(float *)&v58 = *(float *)(a5 + 8) * flt_A3D65C;
    v39 = _mm_shuffle_ps((__m128)v58, (__m128)v58, 0);
    v40 = _mm_add_ps(v37, v39);
    *(float *)&v58 = 0.40000001;
    v41 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3ECCCCCDu, (__m128)0x3ECCCCCDu, 0), v33);
    v42 = _mm_add_ps(
            v40,
            _mm_min_ps(
              _mm_mul_ps(_mm_shuffle_ps((__m128)0xC0000000, (__m128)0xC0000000, 0), _mm_min_ps((__m128)0LL, v63)),
              v41));
    v61 = _mm_add_ps(
            _mm_sub_ps(v36, v39),
            _mm_max_ps(
              _mm_mul_ps(_mm_shuffle_ps((__m128)0xC0000000, (__m128)0xC0000000, 0), _mm_max_ps((__m128)0LL, v35)),
              _mm_xor_ps(v41, (__m128)xmmword_A965C0)));
    v62 = v42;
    *v38 = v61;
    v60[2] = v42;
  }
  (*(void (__thiscall **)(_DWORD, __m128 *, unsigned int **))(*(_DWORD *)*a4 + 0x24))(*a4, &v61, &v68);
  *(float *)&v59 = 0.0;
LABEL_14:
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v44 = TlsIndex;
  v45 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) )
  {
    v46 = ThreadLocalStoragePointer[TlsIndex];
    v47 = *(_DWORD **)(v45 + 0x1A4);
    *v47 = "StNarrow";
    v48 = __rdtsc();
    v58 = v48;
    v47[1] = v48;
    *(_DWORD *)(v46 + 0x1A4) = v47 + 3;
  }
  if ( *(float *)&v59 == 0.0 )
  {
    v49 = v69;
    v50 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
    HIDWORD(v51) = *(_DWORD *)(dword_BA7D98 + 8);
    LODWORD(v51) = (v69 / 4 - v60[3].m128_i32[1] + 1) << 9;
    if ( SHIDWORD(v51) > v50 )
      HIDWORD(v51) -= v50;
    else
      HIDWORD(v51) = 0;
    if ( (int)v51 > SHIDWORD(v51) )
    {
      *(_DWORD *)(dword_BA7D98 + 4) = 1;
      if ( v70 >= 0 )
      {
        v52 = *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x19C);
        if ( !v52 )
          v52 = dword_BA7D9C;
LABEL_34:
        LODWORD(v51) = sub_8A75D0(v52, v68, 4 * v70, 0x14);
        return v51;
      }
      return v51;
    }
    LOBYTE(v58) = 0;
    if ( v69 > 1 )
    {
      sub_8F6580((int)v68, 0, v69 - 1, v58);
      v49 = v69;
    }
    sub_934DC0(&v60[3], v64, *(_DWORD *)(*a4 + 0xC), v68, v49, a6);
    v44 = TlsIndex;
  }
  else
  {
    sub_934DC0(&v60[3], v64, *(_DWORD *)(*a4 + 0xC), 0, 0, a6);
  }
  LODWORD(v51) = ThreadLocalStoragePointer[v44];
  if ( *(_DWORD *)(v51 + 0x1A4) < *(_DWORD *)(v51 + 0x1A8) )
  {
    v53 = ThreadLocalStoragePointer[v44];
    v54 = *(_DWORD **)(v51 + 0x1A4);
    *v54 = "lt";
    v51 = __rdtsc();
    v54[1] = v51;
    *(_DWORD *)(v53 + 0x1A4) = v54 + 3;
  }
  if ( v70 >= 0 )
  {
    v52 = *(_DWORD *)(ThreadLocalStoragePointer[v44] + 0x19C);
    if ( !v52 )
      v52 = dword_BA7D9C;
    goto LABEL_34;
  }
  return v51;
}
