_BYTE *__thiscall sub_8F29A0(__m128 *this, _BYTE *a2, __m128 *a3, __m128 *a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // ebx
  unsigned __int64 v8; // rax
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  float v13; // xmm1_4
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  float v30; // xmm3_4
  __m128 v31; // xmm6
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  __m128 v34; // xmm3
  __m128 v35; // xmm0
  __m128 v36; // xmm0
  __m128 v37; // xmm0
  __m128 v38; // xmm1
  __m128 v39; // xmm0
  float v40; // xmm2_4
  __m128 v41; // xmm3
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  int v44; // eax
  __m128 v45; // xmm0
  __m128 v46; // xmm0
  double v47; // st7
  double v48; // st7
  __m128 v49; // xmm0
  __m128 v50; // xmm0
  __m128 v51; // xmm0
  __m128 v52; // xmm0
  int v53; // esi
  _DWORD *v54; // ecx
  unsigned __int64 v55; // rax
  int v57; // eax
  int v58; // esi
  _DWORD *v59; // ecx
  unsigned __int64 v60; // rax
  float v61; // [esp+0h] [ebp-114h]
  float v62; // [esp+14h] [ebp-100h]
  float v63; // [esp+18h] [ebp-FCh]
  float v64; // [esp+18h] [ebp-FCh]
  float v65; // [esp+18h] [ebp-FCh]
  float v66; // [esp+18h] [ebp-FCh]
  float v67; // [esp+1Ch] [ebp-F8h]
  float v68; // [esp+20h] [ebp-F4h]
  float v69; // [esp+20h] [ebp-F4h]
  float v70; // [esp+20h] [ebp-F4h]
  unsigned int v71; // [esp+24h] [ebp-F0h]
  float v72; // [esp+24h] [ebp-F0h]
  float v73; // [esp+28h] [ebp-ECh] BYREF
  float v74; // [esp+2Ch] [ebp-E8h] BYREF
  float v75; // [esp+30h] [ebp-E4h] BYREF
  __m128 v76; // [esp+34h] [ebp-E0h] BYREF
  __m128 v77; // [esp+44h] [ebp-D0h] BYREF
  __m128 v78; // [esp+54h] [ebp-C0h] BYREF
  __m128 v79; // [esp+64h] [ebp-B0h] BYREF
  __m128 v80; // [esp+74h] [ebp-A0h] BYREF
  __m128 v81; // [esp+84h] [ebp-90h] BYREF
  __m128 v82; // [esp+94h] [ebp-80h] BYREF
  __m128 v83; // [esp+A4h] [ebp-70h] BYREF
  __m128 v84; // [esp+B4h] [ebp-60h] BYREF
  __m128 v85; // [esp+C4h] [ebp-50h] BYREF
  __m128 v86; // [esp+D4h] [ebp-40h]
  __int128 v87; // [esp+E4h] [ebp-30h]
  __m128 v88; // [esp+F4h] [ebp-20h]
  __m128 v89; // [esp+104h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = *(_DWORD **)(v6 + 0x1A4);
    *v7 = "TtrcCylinder";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A4) = v7 + 3;
  }
  v63 = *((float *)this + 4) + this->m128_f32[3];
  v9 = _mm_mul_ps(
         _mm_shuffle_ps((__m128)this->m128_u32[3], (__m128)this->m128_u32[3], 0),
         _mm_sub_ps(
           _mm_mul_ps(_mm_shuffle_ps(*(this + 5), *(this + 5), 0xC9), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xD2)),
           _mm_mul_ps(_mm_shuffle_ps(*(this + 5), *(this + 5), 0xD2), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xC9))));
  v77 = _mm_add_ps(*(this + 2), v9);
  v78 = _mm_sub_ps(*(this + 3), v9);
  sub_8F37A0(a3, &v77, &v78, &v81);
  v10 = *a3;
  v11 = _mm_sub_ps(*a3, v81);
  v12 = _mm_mul_ps(v11, v11);
  v13 = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0];
  v14 = _mm_shuffle_ps(v12, v12, 0xAA);
  v14.m128_f32[0] = v14.m128_f32[0] + v13;
  v76 = v14;
  v76.m128_i32[0] = fsqrt(v14.m128_f32[0]);
  if ( v76.m128_f32[0] < (double)v63 )
  {
    v15 = _mm_sub_ps(v78, v77);
    v16 = _mm_mul_ps(v15, _mm_sub_ps(v10, v77));
    if ( (float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0])) > (double)*(float *)&SrcStr )
    {
      v17 = _mm_mul_ps(v15, _mm_sub_ps(v10, v78));
      if ( (float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0])) < (double)*(float *)&SrcStr )
        goto LABEL_24;
    }
  }
  v18 = _mm_sub_ps(a3[1], v10);
  v73 = 3.4028235e38;
  v79 = v18;
  v80 = _mm_sub_ps(v78, v77);
  sub_8F35D0(a3, &v79, &v77, &v80, &v73, (unsigned int *)&v74, &v75, &v82, &v83);
  v62 = v63 * v63;
  if ( v73 > (double)v62 )
    goto LABEL_24;
  v19 = _mm_mul_ps(v80, v80);
  if ( (float)(_mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0])) <= (double)flt_A9B21C )
    goto LABEL_24;
  v20 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]);
  v21 = 1.0 / fsqrt(v20);
  v22 = 3.0 - (float)((float)(v20 * v21) * v21);
  v23 = (__m128)0x3F000000u;
  v23.m128_f32[0] = 0.5 * v21;
  v24 = v23;
  v24.m128_f32[0] = v23.m128_f32[0] * v22;
  v25 = _mm_shuffle_ps(v24, v24, 0);
  v67 = v20 * v25.m128_f32[0];
  v26 = _mm_mul_ps(v25, v80);
  v27 = _mm_mul_ps(v79, v26);
  v85 = (__m128)0x3F000000u;
  *(float *)&v71 = -(float)(_mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]));
  v28 = _mm_add_ps(v79, _mm_mul_ps(_mm_shuffle_ps((__m128)v71, (__m128)v71, 0), v26));
  v29 = _mm_mul_ps(v28, v28);
  v30 = _mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0];
  v31 = _mm_shuffle_ps(v29, v29, 0xAA);
  v32 = v31;
  v32.m128_f32[0] = v31.m128_f32[0] + v30;
  v76 = v32;
  v76.m128_f32[0] = 1.0 / fsqrt(v31.m128_f32[0] + v30);
  v87 = 0x40400000u;
  v89 = v26;
  v68 = v74
      - sqrt(v62 - v73)
      * (float)((float)(0.5 * v76.m128_f32[0])
              * (float)(3.0 - (float)((float)((float)(v31.m128_f32[0] + v30) * v76.m128_f32[0]) * v76.m128_f32[0])));
  if ( v68 >= (double)a4[1].m128_f32[1] )
    goto LABEL_24;
  v33 = _mm_mul_ps(v77, v26);
  v72 = _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0]);
  v34 = *a3;
  v35 = _mm_shuffle_ps((__m128)LODWORD(v68), (__m128)LODWORD(v68), 0);
  v88 = a3[1];
  v86 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v35), v34), _mm_mul_ps(v35, v88));
  v36 = _mm_mul_ps(v86, v26);
  v84 = v34;
  v64 = (float)(_mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]))
      - v72;
  if ( v68 >= (double)*(float *)&SrcStr && v64 > (double)*(float *)&SrcStr && v64 < (double)v67 )
  {
    v61 = v64 / v67;
    sub_535AA0(&v76, v61);
    v37 = _mm_shuffle_ps(v76, v76, 0);
    v38 = _mm_sub_ps(v86, _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v37), v77), _mm_mul_ps(v37, v78)));
    v39 = _mm_mul_ps(v38, v38);
    v40 = _mm_shuffle_ps(v39, v39, 0x55).m128_f32[0] + v39.m128_f32[0];
    v41 = _mm_shuffle_ps(v39, v39, 0xAA);
    v42 = v41;
    v42.m128_f32[0] = v41.m128_f32[0] + v40;
    v76 = v42;
    v76.m128_f32[0] = 1.0 / fsqrt(v41.m128_f32[0] + v40);
    v43 = v85;
    v43.m128_f32[0] = (float)(v85.m128_f32[0] * v76.m128_f32[0])
                    * (float)(*(float *)&v87
                            - (float)((float)((float)(v41.m128_f32[0] + v40) * v76.m128_f32[0]) * v76.m128_f32[0]));
    a4[1].m128_f32[1] = v68;
    v44 = ThreadLocalStoragePointer[v5];
    *a4 = _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v38);
    a4[1].m128_i32[0] = 0xFFFFFFFF;
    if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) )
      goto LABEL_22;
    goto LABEL_23;
  }
  v45 = _mm_mul_ps(v34, v26);
  v65 = _mm_shuffle_ps(v45, v45, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]);
  if ( v65 >= (double)v72 )
  {
    if ( v72 + v67 >= v65 )
      goto LABEL_24;
    v66 = 1.0;
    v76 = v78;
  }
  else
  {
    v66 = -1.0;
    v76 = v77;
  }
  v46 = _mm_mul_ps(_mm_sub_ps(v76, v34), v26);
  v47 = (float)(_mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]))
      * v66
      * flt_A30634;
  v69 = v47;
  if ( v47 >= *(float *)&SrcStr )
  {
    v48 = (float)(_mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]))
        * v66
        * flt_A30634;
    if ( v48 * a4[1].m128_f32[1] > v69 )
    {
      v70 = v69 / v48;
      sub_535AA0(&v85, v70);
      v49 = _mm_shuffle_ps(v85, v85, 0);
      v50 = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v49), v84), _mm_mul_ps(v49, v88)), v76);
      v51 = _mm_mul_ps(v50, v50);
      if ( (float)(_mm_shuffle_ps(v51, v51, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v51, v51, 0x55).m128_f32[0] + v51.m128_f32[0])) <= (double)v62 )
      {
        sub_535AA0(&v84, v66);
        v52 = v84;
        a4[1].m128_f32[1] = v70;
        v44 = ThreadLocalStoragePointer[v5];
        *a4 = _mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), v89);
        a4[1].m128_i32[0] = 0xFFFFFFFF;
        if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) )
        {
LABEL_22:
          v53 = v44;
          v54 = *(_DWORD **)(v44 + 0x1A4);
          *v54 = "Et";
          v55 = __rdtsc();
          v54[1] = v55;
          *(_DWORD *)(v53 + 0x1A4) = v54 + 3;
        }
LABEL_23:
        *a2 = 1;
        return a2;
      }
    }
  }
LABEL_24:
  v57 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v57 + 0x1A4) < *(_DWORD *)(v57 + 0x1A8) )
  {
    v58 = ThreadLocalStoragePointer[v5];
    v59 = *(_DWORD **)(v57 + 0x1A4);
    *v59 = "Et";
    v60 = __rdtsc();
    v59[1] = v60;
    *(_DWORD *)(v58 + 0x1A4) = v59 + 3;
  }
  *a2 = 0;
  return a2;
}
