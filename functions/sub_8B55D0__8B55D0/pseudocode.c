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

  if ( a4 <= (double)*(float *)&SrcStr || a5 < (double)*(float *)&SrcStr ) /*0x8b55fd*/
    return 1; /*0x8b55ff*/
  v7 = a5 < (double)flt_A3C778; /*0x8b5614*/
  v8 = *a2; /*0x8b561d*/
  v9 = *a3; /*0x8b5620*/
  v10 = *a1; /*0x8b5623*/
  v11 = _mm_sub_ps(*a3, *a2); /*0x8b5629*/
  v12 = _mm_sub_ps(*a1, *a2); /*0x8b562f*/
  v13 = _mm_sub_ps( /*0x8b5654*/
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v12, v12, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v12, v12, 0xC9)));
  v14 = _mm_mul_ps(v13, v13); /*0x8b565a*/
  v15 = _mm_shuffle_ps(v14, v14, 0xAA); /*0x8b566e*/
  v15.m128_f32[0] = v15.m128_f32[0] + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]); /*0x8b5672*/
  v76 = v15; /*0x8b5676*/
  v76.m128_i32[0] = fsqrt(v15.m128_f32[0]); /*0x8b5683*/
  v80 = v76.m128_f32[0]; /*0x8b568e*/
  if ( v7 ) /*0x8b5697*/
  {
    v16 = a2->m128_f32[0]; /*0x8b569d*/
    v79 = 0.33333334; /*0x8b569f*/
    v17 = a3->m128_f32[0]; /*0x8b56ad*/
    v18 = a1->m128_f32[0]; /*0x8b56af*/
    v76 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3EAAAAABu, (__m128)0x3EAAAAABu, 0), _mm_add_ps(_mm_add_ps(v10, v8), v9)); /*0x8b56c4*/
    v19 = (v76.m128_f32[0] * v76.m128_f32[0] * flt_A97F58 + v18 * v18 + v17 * v17 + v16 * v16) * a4 * flt_A8C5F8; /*0x8b56f2*/
    v20 = (v76.m128_f32[1] * v76.m128_f32[1] * flt_A97F58 /*0x8b572a*/
         + a3->m128_f32[1] * a3->m128_f32[1]
         + a2->m128_f32[1] * a2->m128_f32[1]
         + a1->m128_f32[1] * a1->m128_f32[1])
        * a4
        * flt_A8C5F8;
    v21 = (v76.m128_f32[2] * v76.m128_f32[2] * flt_A97F58 /*0x8b575c*/
         + a3->m128_f32[2] * a3->m128_f32[2]
         + a2->m128_f32[2] * a2->m128_f32[2]
         + a1->m128_f32[2] * a1->m128_f32[2])
        * a4
        * flt_A8C5F8;
    *(float *)&v81 = v21 + v20; /*0x8b576c*/
    *((float *)&v82 + 1) = v21 + v19; /*0x8b5772*/
    *((float *)&v83 + 2) = v20 + v19; /*0x8b5778*/
    *((float *)&v81 + 1) = -((v76.m128_f32[1] * v76.m128_f32[0] * flt_A97F58 /*0x8b57b0*/
                            + a3->m128_f32[1] * a3->m128_f32[0]
                            + a1->m128_f32[0] * a1->m128_f32[1]
                            + a2->m128_f32[0] * a2->m128_f32[1])
                           * a4
                           * flt_A8C5F8);
    *(float *)&v82 = *((float *)&v81 + 1); /*0x8b57b4*/
    *((float *)&v81 + 2) = -((v76.m128_f32[2] * v76.m128_f32[0] * flt_A97F58 /*0x8b57e6*/
                            + a3->m128_f32[2] * a3->m128_f32[0]
                            + a1->m128_f32[0] * a1->m128_f32[2]
                            + a2->m128_f32[0] * a2->m128_f32[2])
                           * a4
                           * flt_A8C5F8);
    *(float *)&v83 = *((float *)&v81 + 2); /*0x8b57ea*/
    *((float *)&v83 + 1) = -((v76.m128_f32[2] * v76.m128_f32[1] * flt_A97F58 /*0x8b5829*/
                            + a1->m128_f32[2] * a1->m128_f32[1]
                            + a2->m128_f32[2] * a2->m128_f32[1]
                            + a3->m128_f32[2] * a3->m128_f32[1])
                           * a4
                           * flt_A8C5F8);
    *((float *)&v82 + 2) = *((float *)&v83 + 1); /*0x8b582d*/
    sub_8B36D0(v76.m128_f32, a4, (float *)&v81); /*0x8b5831*/
  }
  else if ( v80 >= (double)flt_A3C778 ) /*0x8b584d*/
  {
    v26 = a5 * kHeadBodyNormalMatchRadius; /*0x8b58fc*/
    v27 = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]; /*0x8b5906*/
    v28 = _mm_shuffle_ps(v14, v14, 0xAA); /*0x8b590d*/
    v29 = v28; /*0x8b5911*/
    v29.m128_f32[0] = v28.m128_f32[0] + v27; /*0x8b5914*/
    v76 = v29; /*0x8b5918*/
    v76.m128_f32[0] = 1.0 / fsqrt(v28.m128_f32[0] + v27); /*0x8b5921*/
    v30 = (__m128)0x3F000000u; /*0x8b594e*/
    v79 = v26; /*0x8b5954*/
    v30.m128_f32[0] = (float)(0.5 * v76.m128_f32[0]) /*0x8b5965*/
                    * (float)(3.0 - (float)((float)((float)(v28.m128_f32[0] + v27) * v76.m128_f32[0]) * v76.m128_f32[0]));
    v31 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v13); /*0x8b5976*/
    v32 = (__m128)LODWORD(v79); /*0x8b5979*/
    v79 = a5 * flt_A45E4C; /*0x8b597f*/
    v92[0] = _mm_add_ps(v10, _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v31)); /*0x8b5996*/
    v92[1] = _mm_add_ps(v10, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v79), (__m128)LODWORD(v79), 0), v31)); /*0x8b59ab*/
    v92[3] = _mm_add_ps(v8, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v79), (__m128)LODWORD(v79), 0), v31)); /*0x8b59d0*/
    v89 = v92; /*0x8b5a06*/
    v91 = 0x80000006; /*0x8b5a0d*/
    v90 = 6; /*0x8b5a18*/
    v92[2] = _mm_add_ps(v8, _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v31)); /*0x8b5a23*/
    v92[4] = _mm_add_ps(v9, _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v31)); /*0x8b5a2b*/
    v92[5] = _mm_add_ps(v9, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v79), (__m128)LODWORD(v79), 0), v31)); /*0x8b5a33*/
    v84[0] = 0; /*0x8b5a3b*/
    v84[1] = 0; /*0x8b5a43*/
    v85 = 0; /*0x8b5a4b*/
    v86 = 0; /*0x8b5a53*/
    v87 = 0; /*0x8b5a5b*/
    v88 = 0; /*0x8b5a63*/
    v76.m128_u64[0] = 0; /*0x8b5a6b*/
    v76.m128_u64[1] = 0x80000000LL; /*0x8b5a73*/
    v33 = MEMORY[0xBA9DE4]; /*0x8b5a77*/
    v78 = 0x80000000; /*0x8b5a7d*/
    v79 = *((float *)NtCurrentTeb()->ThreadLocalStoragePointer + v33); /*0x8b5a8a*/
    v34 = *(_DWORD *)(LODWORD(v79) + 0x19C); /*0x8b5a8e*/
    v77 = 0; /*0x8b5a9a*/
    if ( !v34 ) /*0x8b5a9e*/
      v34 = unk_BA7D9C; /*0x8b5aa0*/
    v35 = sub_8A7560(v34, 0x60, 0x14); /*0x8b5aab*/
    v36 = v90; /*0x8b5ab4*/
    v76.m128_u64[0] = __PAIR64__(v90, (unsigned int)v35); /*0x8b5ac5*/
    v76.m128_i32[2] = v90 | v76.m128_i32[2] & 0x40000000; /*0x8b5ac9*/
    v37 = v35; /*0x8b5ad3*/
    v38 = v89; /*0x8b5ad5*/
    do /*0x8b5aed*/
    {
      *v37++ = *v38++; /*0x8b5ae3*/
      --v36; /*0x8b5aec*/
    }
    while ( v36 ); /*0x8b5aed*/
    v39 = v77; /*0x8b5aef*/
    v40 = v77 + 1; /*0x8b5af7*/
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 ) /*0x8b5b01*/
    {
      v41 = 2 * (v78 & 0x3FFFFFFF); /*0x8b5b03*/
      if ( v40 >= v41 ) /*0x8b5b07*/
        v41 = v77 + 1; /*0x8b5b09*/
      sub_8A6E40((const void **)&v76.m128_i32[3], v41, 0xC); /*0x8b5b13*/
    }
    v77 = v40; /*0x8b5b1f*/
    v42 = (_DWORD *)(v76.m128_i32[3] + 0xC * v39); /*0x8b5b26*/
    *v42 = 0; /*0x8b5b29*/
    v42[1] = 2; /*0x8b5b2b*/
    v42[2] = 4; /*0x8b5b37*/
    v43 = v77; /*0x8b5b3a*/
    v44 = v77 + 1; /*0x8b5b42*/
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 ) /*0x8b5b4c*/
    {
      v45 = 2 * (v78 & 0x3FFFFFFF); /*0x8b5b4e*/
      if ( v44 >= v45 ) /*0x8b5b52*/
        v45 = v77 + 1; /*0x8b5b54*/
      sub_8A6E40((const void **)&v76.m128_i32[3], v45, 0xC); /*0x8b5b5e*/
    }
    v77 = v44; /*0x8b5b6a*/
    v46 = (_DWORD *)(v76.m128_i32[3] + 0xC * v43); /*0x8b5b71*/
    *v46 = 1; /*0x8b5b74*/
    v46[1] = 5; /*0x8b5b7a*/
    v46[2] = 3; /*0x8b5b81*/
    v47 = v77; /*0x8b5b88*/
    v48 = v77 + 1; /*0x8b5b90*/
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 ) /*0x8b5b9a*/
    {
      v49 = 2 * (v78 & 0x3FFFFFFF); /*0x8b5b9c*/
      if ( v48 >= v49 ) /*0x8b5ba0*/
        v49 = v77 + 1; /*0x8b5ba2*/
      sub_8A6E40((const void **)&v76.m128_i32[3], v49, 0xC); /*0x8b5bac*/
    }
    v77 = v48; /*0x8b5bb8*/
    v50 = (_DWORD *)(v76.m128_i32[3] + 0xC * v47); /*0x8b5bbf*/
    *v50 = 0; /*0x8b5bc2*/
    v50[1] = 3; /*0x8b5bc8*/
    v50[2] = 2; /*0x8b5bcf*/
    v51 = v77; /*0x8b5bd6*/
    v52 = v77 + 1; /*0x8b5bde*/
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 ) /*0x8b5be8*/
    {
      v53 = 2 * (v78 & 0x3FFFFFFF); /*0x8b5bea*/
      if ( v52 >= v53 ) /*0x8b5bee*/
        v53 = v77 + 1; /*0x8b5bf0*/
      sub_8A6E40((const void **)&v76.m128_i32[3], v53, 0xC); /*0x8b5bfa*/
    }
    v77 = v52; /*0x8b5c06*/
    v54 = (_DWORD *)(v76.m128_i32[3] + 0xC * v51); /*0x8b5c0d*/
    *v54 = 0; /*0x8b5c10*/
    v54[1] = 1; /*0x8b5c16*/
    v54[2] = 3; /*0x8b5c1d*/
    v55 = v77; /*0x8b5c24*/
    v56 = v77 + 1; /*0x8b5c2c*/
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 ) /*0x8b5c36*/
    {
      v57 = 2 * (v78 & 0x3FFFFFFF); /*0x8b5c38*/
      if ( v56 >= v57 ) /*0x8b5c3c*/
        v57 = v77 + 1; /*0x8b5c3e*/
      sub_8A6E40((const void **)&v76.m128_i32[3], v57, 0xC); /*0x8b5c48*/
    }
    v77 = v56; /*0x8b5c54*/
    v58 = (_DWORD *)(v76.m128_i32[3] + 0xC * v55); /*0x8b5c5b*/
    *v58 = 1; /*0x8b5c5e*/
    v58[1] = 0; /*0x8b5c64*/
    v58[2] = 4; /*0x8b5c6b*/
    v59 = v77; /*0x8b5c6e*/
    v60 = v77 + 1; /*0x8b5c76*/
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 ) /*0x8b5c80*/
    {
      v61 = 2 * (v78 & 0x3FFFFFFF); /*0x8b5c82*/
      if ( v60 >= v61 ) /*0x8b5c86*/
        v61 = v77 + 1; /*0x8b5c88*/
      sub_8A6E40((const void **)&v76.m128_i32[3], v61, 0xC); /*0x8b5c92*/
    }
    v77 = v60; /*0x8b5c9e*/
    v62 = (_DWORD *)(v76.m128_i32[3] + 0xC * v59); /*0x8b5ca5*/
    *v62 = 1; /*0x8b5ca8*/
    v62[1] = 4; /*0x8b5cae*/
    v62[2] = 5; /*0x8b5cb1*/
    v63 = v77; /*0x8b5cb8*/
    v64 = v77 + 1; /*0x8b5cc0*/
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 ) /*0x8b5cca*/
    {
      v65 = 2 * (v78 & 0x3FFFFFFF); /*0x8b5ccc*/
      if ( v64 >= v65 ) /*0x8b5cd0*/
        v65 = v77 + 1; /*0x8b5cd2*/
      sub_8A6E40((const void **)&v76.m128_i32[3], v65, 0xC); /*0x8b5cdc*/
    }
    v77 = v64; /*0x8b5ce8*/
    v66 = (_DWORD *)(v76.m128_i32[3] + 0xC * v63); /*0x8b5cef*/
    *v66 = 2; /*0x8b5cf2*/
    v66[1] = 5; /*0x8b5cf8*/
    v66[2] = 4; /*0x8b5cff*/
    v67 = v77; /*0x8b5d02*/
    v68 = v77 + 1; /*0x8b5d0a*/
    if ( (int)(v78 & 0x3FFFFFFF) < v77 + 1 ) /*0x8b5d14*/
    {
      v69 = 2 * (v78 & 0x3FFFFFFF); /*0x8b5d16*/
      if ( v68 >= v69 ) /*0x8b5d1a*/
        v69 = v77 + 1; /*0x8b5d1c*/
      sub_8A6E40((const void **)&v76.m128_i32[3], v69, 0xC); /*0x8b5d26*/
    }
    v77 = v68; /*0x8b5d32*/
    v70 = (_DWORD *)(v76.m128_i32[3] + 0xC * v67); /*0x8b5d39*/
    *v70 = 2; /*0x8b5d40*/
    v70[1] = 3; /*0x8b5d46*/
    v70[2] = 5; /*0x8b5d4d*/
    sub_8B43E0((__m128 **)&v76, a4, (int)v84); /*0x8b5d5e*/
    sub_8B44C0(&v76); /*0x8b5d6a*/
    v76 = v85; /*0x8b5d80*/
    v81 = v86; /*0x8b5d8d*/
    v82 = v87; /*0x8b5d9a*/
    v83 = v88; /*0x8b5da7*/
    if ( v91 >= 0 ) /*0x8b5dac*/
    {
      v71 = *(_DWORD *)(LODWORD(v79) + 0x19C); /*0x8b5db2*/
      if ( !v71 ) /*0x8b5dba*/
        v71 = unk_BA7D9C; /*0x8b5dbc*/
      sub_8A75D0(v71, v89, 0x10 * v91, 0x14); /*0x8b5dd5*/
    }
  }
  else
  {
    v79 = 0.33333334; /*0x8b5853*/
    v76 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3EAAAAABu, (__m128)0x3EAAAAABu, 0), _mm_add_ps(_mm_add_ps(v10, v8), v9)); /*0x8b5874*/
    v22 = v76.m128_f32[2] * v76.m128_f32[2]; /*0x8b587d*/
    v23 = v76.m128_f32[1] * v76.m128_f32[1]; /*0x8b5885*/
    *(float *)&v81 = (v22 + v23) * a4; /*0x8b5890*/
    v24 = v22; /*0x8b589c*/
    v25 = v76.m128_f32[0] * v76.m128_f32[0]; /*0x8b589c*/
    *((float *)&v82 + 1) = (v24 + v25) * a4; /*0x8b58a3*/
    *((float *)&v83 + 2) = (v23 + v25) * a4; /*0x8b58ac*/
    *(float *)&v82 = -(v76.m128_f32[1] * v76.m128_f32[0] * a4); /*0x8b58bf*/
    *((float *)&v81 + 1) = *(float *)&v82; /*0x8b58c3*/
    *(float *)&v83 = -(v76.m128_f32[2] * v76.m128_f32[0] * a4); /*0x8b58d4*/
    *((float *)&v81 + 2) = *(float *)&v83; /*0x8b58d8*/
    *((float *)&v82 + 2) = -(v76.m128_f32[2] * v76.m128_f32[1] * a4); /*0x8b58e9*/
    *((float *)&v83 + 1) = *((float *)&v82 + 2); /*0x8b58ed*/
  }
  v72 = v81; /*0x8b5de0*/
  *(float *)(a6 + 4) = a4; /*0x8b5de5*/
  v73 = v80; /*0x8b5de8*/
  *(_OWORD *)(a6 + 0x20) = v72; /*0x8b5dec*/
  *(__int128 *)(a6 + 0x30) = v82; /*0x8b5df8*/
  v74 = v73 * a5 * kHeadBodyNormalMatchRadius; /*0x8b5e01*/
  *(__int128 *)(a6 + 0x40) = v83; /*0x8b5e07*/
  v75 = v76; /*0x8b5e0b*/
  *(float *)a6 = v74; /*0x8b5e12*/
  *(__m128 *)(a6 + 0x10) = v75; /*0x8b5e14*/
  return 0; /*0x8b5607*/
}
