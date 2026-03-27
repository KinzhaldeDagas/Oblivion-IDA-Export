int __cdecl sub_8B55D0(__m128 *a1, __m128 *a2, __m128 *a3, float a4, float a5, int a6)
{
  bool v7; // c0
  __m128 v8; // xmm2
  __m128 v9; // xmm5
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __m128 v12; // xmm3
  __m128 v13; // xmm3
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st7
  double v20; // st6
  double v21; // st2
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st7
  double v26; // st7
  float v27; // xmm4_4
  __m128 v28; // xmm6
  __m128 v29; // xmm0
  __m128 v30; // xmm0
  __m128 v31; // xmm0
  __m128 v32; // xmm3
  int v33; // edx
  int v34; // eax
  _DWORD *v35; // eax
  int v36; // edx
  _OWORD *v37; // ecx
  _OWORD *v38; // eax
  int v39; // edi
  int v40; // esi
  int v41; // eax
  _DWORD *v42; // eax
  int v43; // edi
  int v44; // esi
  int v45; // eax
  _DWORD *v46; // eax
  int v47; // edi
  int v48; // esi
  int v49; // eax
  _DWORD *v50; // eax
  int v51; // edi
  int v52; // esi
  int v53; // eax
  _DWORD *v54; // eax
  int v55; // edi
  int v56; // esi
  int v57; // eax
  _DWORD *v58; // eax
  int v59; // edi
  int v60; // esi
  int v61; // eax
  _DWORD *v62; // eax
  int v63; // edi
  int v64; // esi
  int v65; // eax
  _DWORD *v66; // eax
  int v67; // edi
  int v68; // esi
  int v69; // eax
  _DWORD *v70; // eax
  int v71; // ecx
  __int128 v72; // xmm0
  double v73; // st7
  double v74; // st7
  __m128 v75; // xmm0
  __m128 v76; // [esp+4h] [ebp-120h] BYREF
  int v77; // [esp+14h] [ebp-110h]
  unsigned int v78; // [esp+18h] [ebp-10Ch]
  float v79; // [esp+2Ch] [ebp-F8h]
  float v80; // [esp+30h] [ebp-F4h]
  __int128 v81; // [esp+34h] [ebp-F0h] BYREF
  __int128 v82; // [esp+44h] [ebp-E0h]
  __int128 v83; // [esp+54h] [ebp-D0h]
  int v84[4]; // [esp+64h] [ebp-C0h] BYREF
  __m128 v85; // [esp+74h] [ebp-B0h]
  __int128 v86; // [esp+84h] [ebp-A0h]
  __int128 v87; // [esp+94h] [ebp-90h]
  __int128 v88; // [esp+A4h] [ebp-80h]
  _DWORD *v89; // [esp+B4h] [ebp-70h]
  int v90; // [esp+B8h] [ebp-6Ch]
  int v91; // [esp+BCh] [ebp-68h]
  _OWORD v92[6]; // [esp+C4h] [ebp-60h] BYREF

  if ( a4 <= (double)*(float *)&SrcStr || a5 < (double)*(float *)&SrcStr )
    return 1;
  v7 = a5 < (double)flt_A3C778;
  v8 = *a2;
  v9 = *a3;
  v10 = *a1;
  v11 = _mm_sub_ps(*a3, *a2);
  v12 = _mm_sub_ps(*a1, *a2);
  v13 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v12, v12, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v12, v12, 0xC9)));
  v14 = _mm_mul_ps(v13, v13);
  v15 = _mm_shuffle_ps(v14, v14, 0xAA);
  v15.m128_f32[0] = v15.m128_f32[0] + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
  v76 = v15;
  v76.m128_i32[0] = fsqrt(v15.m128_f32[0]);
  v80 = v76.m128_f32[0];
  if ( v7 )
  {
    v16 = a2->m128_f32[0];
    v79 = 0.33333334;
    v17 = a3->m128_f32[0];
    v18 = a1->m128_f32[0];
    v76 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3EAAAAABu, (__m128)0x3EAAAAABu, 0), _mm_add_ps(_mm_add_ps(v10, v8), v9));
    v19 = (v76.m128_f32[0] * v76.m128_f32[0] * flt_A97F58 + v18 * v18 + v17 * v17 + v16 * v16) * a4 * flt_A8C5F8;
    v20 = (v76.m128_f32[1] * v76.m128_f32[1] * flt_A97F58
         + a3->m128_f32[1] * a3->m128_f32[1]
         + a2->m128_f32[1] * a2->m128_f32[1]
         + a1->m128_f32[1] * a1->m128_f32[1])
        * a4
        * flt_A8C5F8;
    v21 = (v76.m128_f32[2] * v76.m128_f32[2] * flt_A97F58
         + a3->m128_f32[2] * a3->m128_f32[2]
         + a2->m128_f32[2] * a2->m128_f32[2]
         + a1->m128_f32[2] * a1->m128_f32[2])
        * a4
        * flt_A8C5F8;
    *(float *)&v81 = v21 + v20;
    *((float *)&v82 + 1) = v21 + v19;
    *((float *)&v83 + 2) = v20 + v19;
    *((float *)&v81 + 1) = -((v76.m128_f32[1] * v76.m128_f32[0] * flt_A97F58
                            + a3->m128_f32[1] * a3->m128_f32[0]
                            + a1->m128_f32[0] * a1->m128_f32[1]
                            + a2->m128_f32[0] * a2->m128_f32[1])
                           * a4
                           * flt_A8C5F8);
    *(float *)&v82 = *((float *)&v81 + 1);
    *((float *)&v81 + 2) = -((v76.m128_f32[2] * v76.m128_f32[0] * flt_A97F58
                            + a3->m128_f32[2] * a3->m128_f32[0]
                            + a1->m128_f32[0] * a1->m128_f32[2]
                            + a2->m128_f32[0] * a2->m128_f32[2])
                           * a4
                           * flt_A8C5F8);
    *(float *)&v83 = *((float *)&v81 + 2);
    *((float *)&v83 + 1) = -((v76.m128_f32[2] * v76.m128_f32[1] * flt_A97F58
                            + a1->m128_f32[2] * a1->m128_f32[1]
                            + a2->m128_f32[2] * a2->m128_f32[1]
                            + a3->m128_f32[2] * a3->m128_f32[1])
                           * a4
                           * flt_A8C5F8);
    *((float *)&v82 + 2) = *((float *)&v83 + 1);
    sub_8B36D0(v76.m128_f32, a4, (float *)&v81);
  }
  else if ( v80 >= (double)flt_A3C778 )
  {
    v26 = a5 * flt_A3D65C;
    v27 = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0];
    v28 = _mm_shuffle_ps(v14, v14, 0xAA);
    v29 = v28;
    v29.m128_f32[0] = v28.m128_f32[0] + v27;
    v76 = v29;
    v76.m128_f32[0] = 1.0 / fsqrt(v28.m128_f32[0] + v27);
    v30 = (__m128)0x3F000000u;
    v79 = v26;
    v30.m128_f32[0] = (float)(0.5 * v76.m128_f32[0])
                    * (float)(3.0 - (float)((float)((float)(v28.m128_f32[0] + v27) * v76.m128_f32[0]) * v76.m128_f32[0]));
    v31 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v13);
    v32 = (__m128)LODWORD(v79);
    v79 = a5 * flt_A45E4C;
    v92[0] = _mm_add_ps(v10, _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v31));
    v92[1] = _mm_add_ps(v10, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v79), (__m128)LODWORD(v79), 0), v31));
    v92[3] = _mm_add_ps(v8, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v79), (__m128)LODWORD(v79), 0), v31));
    v89 = v92;
    v91 = 0x80000006;
    v90 = 6;
    v92[2] = _mm_add_ps(v8, _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v31));
    v92[4] = _mm_add_ps(v9, _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v31));
    v92[5] = _mm_add_ps(v9, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v79), (__m128)LODWORD(v79), 0), v31));
    v84[0] = 0;
    v84[1] = 0;
    v85 = 0;
    v86 = 0;
    v87 = 0;
    v88 = 0;
    v76.m128_u64[0] = 0;
    v76.m128_u64[1] = 0x80000000LL;
    v33 = TlsIndex;
    v78 = 0x80000000;
    v79 = *((float *)NtCurrentTeb()->ThreadLocalStoragePointer + v33);
    v34 = *(_DWORD *)(LODWORD(v79) + 0x19C);
    v77 = 0;
    if ( !v34 )
      v34 = dword_BA7D9C;
    v35 = sub_8A7560(v34, 0x60, 0x14);
    v36 = v90;
    v76.m128_u64[0] = __PAIR64__(v90, (unsigned int)v35);
    v76.m128_i32[2] = v90 | v76.m128_i32[2] & 0x40000000;
    v37 = v35;
    v38 = v89;
    do
    {
      *v37++ = *v38++;
      --v36;
    }
    while ( v36 );
    v39 = v77;
    v40 = v77 + 1;
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 )
    {
      v41 = 2 * (v78 & 0x3FFFFFFF);
      if ( v40 >= v41 )
        v41 = v77 + 1;
      sub_8A6E40((const void **)&v76.m128_i32[3], v41, 0xC);
    }
    v77 = v40;
    v42 = (_DWORD *)(v76.m128_i32[3] + 0xC * v39);
    *v42 = 0;
    v42[1] = 2;
    v42[2] = 4;
    v43 = v77;
    v44 = v77 + 1;
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 )
    {
      v45 = 2 * (v78 & 0x3FFFFFFF);
      if ( v44 >= v45 )
        v45 = v77 + 1;
      sub_8A6E40((const void **)&v76.m128_i32[3], v45, 0xC);
    }
    v77 = v44;
    v46 = (_DWORD *)(v76.m128_i32[3] + 0xC * v43);
    *v46 = 1;
    v46[1] = 5;
    v46[2] = 3;
    v47 = v77;
    v48 = v77 + 1;
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 )
    {
      v49 = 2 * (v78 & 0x3FFFFFFF);
      if ( v48 >= v49 )
        v49 = v77 + 1;
      sub_8A6E40((const void **)&v76.m128_i32[3], v49, 0xC);
    }
    v77 = v48;
    v50 = (_DWORD *)(v76.m128_i32[3] + 0xC * v47);
    *v50 = 0;
    v50[1] = 3;
    v50[2] = 2;
    v51 = v77;
    v52 = v77 + 1;
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 )
    {
      v53 = 2 * (v78 & 0x3FFFFFFF);
      if ( v52 >= v53 )
        v53 = v77 + 1;
      sub_8A6E40((const void **)&v76.m128_i32[3], v53, 0xC);
    }
    v77 = v52;
    v54 = (_DWORD *)(v76.m128_i32[3] + 0xC * v51);
    *v54 = 0;
    v54[1] = 1;
    v54[2] = 3;
    v55 = v77;
    v56 = v77 + 1;
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 )
    {
      v57 = 2 * (v78 & 0x3FFFFFFF);
      if ( v56 >= v57 )
        v57 = v77 + 1;
      sub_8A6E40((const void **)&v76.m128_i32[3], v57, 0xC);
    }
    v77 = v56;
    v58 = (_DWORD *)(v76.m128_i32[3] + 0xC * v55);
    *v58 = 1;
    v58[1] = 0;
    v58[2] = 4;
    v59 = v77;
    v60 = v77 + 1;
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 )
    {
      v61 = 2 * (v78 & 0x3FFFFFFF);
      if ( v60 >= v61 )
        v61 = v77 + 1;
      sub_8A6E40((const void **)&v76.m128_i32[3], v61, 0xC);
    }
    v77 = v60;
    v62 = (_DWORD *)(v76.m128_i32[3] + 0xC * v59);
    *v62 = 1;
    v62[1] = 4;
    v62[2] = 5;
    v63 = v77;
    v64 = v77 + 1;
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 )
    {
      v65 = 2 * (v78 & 0x3FFFFFFF);
      if ( v64 >= v65 )
        v65 = v77 + 1;
      sub_8A6E40((const void **)&v76.m128_i32[3], v65, 0xC);
    }
    v77 = v64;
    v66 = (_DWORD *)(v76.m128_i32[3] + 0xC * v63);
    *v66 = 2;
    v66[1] = 5;
    v66[2] = 4;
    v67 = v77;
    v68 = v77 + 1;
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 )
    {
      v69 = 2 * (v78 & 0x3FFFFFFF);
      if ( v68 >= v69 )
        v69 = v77 + 1;
      sub_8A6E40((const void **)&v76.m128_i32[3], v69, 0xC);
    }
    v77 = v68;
    v70 = (_DWORD *)(v76.m128_i32[3] + 0xC * v67);
    *v70 = 2;
    v70[1] = 3;
    v70[2] = 5;
    sub_8B43E0((__m128 **)&v76, a4, (int)v84);
    sub_8B44C0(&v76);
    v76 = v85;
    v81 = v86;
    v82 = v87;
    v83 = v88;
    if ( v91 >= 0 )
    {
      v71 = *(_DWORD *)(LODWORD(v79) + 0x19C);
      if ( !v71 )
        v71 = dword_BA7D9C;
      sub_8A75D0(v71, v89, 0x10 * v91, 0x14);
    }
  }
  else
  {
    v79 = 0.33333334;
    v76 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3EAAAAABu, (__m128)0x3EAAAAABu, 0), _mm_add_ps(_mm_add_ps(v10, v8), v9));
    v22 = v76.m128_f32[2] * v76.m128_f32[2];
    v23 = v76.m128_f32[1] * v76.m128_f32[1];
    *(float *)&v81 = (v22 + v23) * a4;
    v24 = v22;
    v25 = v76.m128_f32[0] * v76.m128_f32[0];
    *((float *)&v82 + 1) = (v24 + v25) * a4;
    *((float *)&v83 + 2) = (v23 + v25) * a4;
    *(float *)&v82 = -(v76.m128_f32[1] * v76.m128_f32[0] * a4);
    *((float *)&v81 + 1) = *(float *)&v82;
    *(float *)&v83 = -(v76.m128_f32[2] * v76.m128_f32[0] * a4);
    *((float *)&v81 + 2) = *(float *)&v83;
    *((float *)&v82 + 2) = -(v76.m128_f32[2] * v76.m128_f32[1] * a4);
    *((float *)&v83 + 1) = *((float *)&v82 + 2);
  }
  v72 = v81;
  *(float *)(a6 + 4) = a4;
  v73 = v80;
  *(_OWORD *)(a6 + 0x20) = v72;
  *(__int128 *)(a6 + 0x30) = v82;
  v74 = v73 * a5 * flt_A3D65C;
  *(__int128 *)(a6 + 0x40) = v83;
  v75 = v76;
  *(float *)a6 = v74;
  *(__m128 *)(a6 + 0x10) = v75;
  return 0;
}
