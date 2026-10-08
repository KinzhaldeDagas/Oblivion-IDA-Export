_BYTE *__thiscall sub_8F3880(__m128 *this, _BYTE *a2, __m128 *a3, __m128 *a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 v10; // xmm6
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  float v13; // xmm1_4
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm7
  __m128 v18; // xmm7
  __m128 v19; // xmm3
  __m128 v20; // xmm0
  float v21; // xmm1_4
  __m128 v22; // xmm2
  __m128 v23; // xmm0
  float v24; // xmm4_4
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  double v28; // st7
  __m128 v29; // xmm1
  __m128 v30; // xmm0
  __m128 v31; // xmm7
  __m128 v32; // xmm0
  long double v33; // st6
  float v34; // xmm2_4
  long double v35; // st6
  __m128 v36; // xmm0
  float v37; // xmm4_4
  __m128 v38; // xmm0
  __m128 v39; // xmm2
  __m128 v40; // xmm0
  __m128 v41; // xmm0
  __m128 v42; // xmm1
  __m128 v43; // xmm0
  float v44; // xmm2_4
  __m128 v45; // xmm3
  __m128 v46; // xmm0
  __m128 v47; // xmm0
  int v48; // eax
  int v49; // esi
  _DWORD *v50; // ecx
  unsigned __int64 v51; // rax
  __m128 v53; // xmm0
  __m128 v54; // xmm1
  __m128 v55; // xmm0
  __m128 v56; // xmm0
  __m128 v57; // xmm0
  float v58; // xmm2_4
  __m128 v59; // xmm5
  __m128 v60; // xmm0
  bool v61; // c0
  bool v62; // c3
  __m128 v63; // xmm6
  __m128 v64; // xmm4
  int v65; // eax
  int v66; // esi
  _DWORD *v67; // ecx
  unsigned __int64 v68; // rax
  int v69; // edx
  int v70; // eax
  int v71; // esi
  _DWORD *v72; // ecx
  unsigned __int64 v73; // rax
  float v74; // [esp+0h] [ebp-C4h]
  int v75; // [esp+0h] [ebp-C4h]
  unsigned int v76; // [esp+14h] [ebp-B0h]
  float v77; // [esp+18h] [ebp-ACh] BYREF
  unsigned int v78; // [esp+1Ch] [ebp-A8h] BYREF
  unsigned int v79; // [esp+20h] [ebp-A4h] BYREF
  __m128 v80; // [esp+24h] [ebp-A0h] BYREF
  __m128 v81; // [esp+34h] [ebp-90h] BYREF
  __m128 v82; // [esp+44h] [ebp-80h]
  __m128 v83; // [esp+54h] [ebp-70h] BYREF
  __m128 v84; // [esp+64h] [ebp-60h] BYREF
  __m128 v85; // [esp+74h] [ebp-50h] BYREF
  __m128 v86[2]; // [esp+84h] [ebp-40h] BYREF
  int v87; // [esp+A4h] [ebp-20h]
  int v88; // [esp+A8h] [ebp-1Ch]
  __m128 v89; // [esp+B4h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f388e*/
  v5 = MEMORY[0xBA9DE4]; /*0x8f3896*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f389c*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8f38af*/
  {
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8f38b1*/
    *v8 = "TtrcCapsule"; /*0x8f38b7*/
    v9 = __rdtsc(); /*0x8f38bd*/
    HIDWORD(v9) = v9; /*0x8f38c3*/
    LODWORD(v9) = ThreadLocalStoragePointer[v5]; /*0x8f38c7*/
    v8[1] = HIDWORD(v9); /*0x8f38ca*/
    *(_DWORD *)(v9 + 0x1A4) = v8 + 3; /*0x8f38d0*/
  }
  sub_8F37A0(a3, this + 1, this + 2, &v81); /*0x8f38e7*/
  v10 = *a3; /*0x8f38ef*/
  v11 = _mm_sub_ps(*a3, v81); /*0x8f38fa*/
  v12 = _mm_mul_ps(v11, v11); /*0x8f38fd*/
  v13 = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]; /*0x8f390a*/
  v14 = _mm_shuffle_ps(v12, v12, 0xAA); /*0x8f390e*/
  v15 = v14; /*0x8f3912*/
  v15.m128_f32[0] = v14.m128_f32[0] + v13; /*0x8f3915*/
  v80 = v15; /*0x8f3919*/
  v80.m128_i32[0] = fsqrt(v14.m128_f32[0] + v13); /*0x8f3922*/
  if ( v80.m128_f32[0] < (double)this->m128_f32[3] ) /*0x8f3944*/
    goto LABEL_19; /*0x8f3944*/
  v16 = *(this + 1); /*0x8f394a*/
  v17 = a3[1]; /*0x8f394e*/
  v81 = *(this + 2); /*0x8f3980*/
  v84 = v17; /*0x8f3985*/
  v18 = _mm_sub_ps(v17, v10); /*0x8f3990*/
  v77 = 3.4028235e38; /*0x8f3994*/
  v83 = v18; /*0x8f399c*/
  v82 = v16; /*0x8f39a1*/
  v80 = _mm_sub_ps(v81, v16); /*0x8f39a6*/
  sub_8F35D0(a3, &v83, this + 1, &v80, &v77, (float *)&v79, (float *)&v78, &v89, &v85); /*0x8f39ab*/
  if ( v77 > this->m128_f32[3] * this->m128_f32[3] ) /*0x8f39c7*/
    goto LABEL_19; /*0x8f39c7*/
  v19 = v80; /*0x8f39cd*/
  v20 = _mm_mul_ps(v80, v80); /*0x8f39d5*/
  if ( (float)(_mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x8f3a05*/
             + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0])) <= (double)flt_A9B288 )
  {
    v28 = *(float *)&SrcStr; /*0x8f3a8d*/
    v29 = 0; /*0x8f3a93*/
  }
  else
  {
    v21 = _mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]; /*0x8f3a12*/
    v22 = _mm_shuffle_ps(v20, v20, 0xAA); /*0x8f3a19*/
    v23 = v22; /*0x8f3a1d*/
    v23.m128_f32[0] = v22.m128_f32[0] + v21; /*0x8f3a20*/
    v80 = v23; /*0x8f3a24*/
    v80.m128_f32[0] = 1.0 / fsqrt(v22.m128_f32[0] + v21); /*0x8f3a2d*/
    v24 = 3.0 - (float)((float)((float)(v22.m128_f32[0] + v21) * v80.m128_f32[0]) * v80.m128_f32[0]); /*0x8f3a51*/
    v25 = (__m128)0x3F000000u; /*0x8f3a5d*/
    v25.m128_f32[0] = 0.5 * v80.m128_f32[0]; /*0x8f3a63*/
    v26 = v25; /*0x8f3a67*/
    v26.m128_f32[0] = (float)(0.5 * v80.m128_f32[0]) * v24; /*0x8f3a6a*/
    v27 = _mm_shuffle_ps(v26, v26, 0); /*0x8f3a71*/
    v28 = (float)(v23.m128_f32[0] * v27.m128_f32[0]); /*0x8f3a84*/
    v29 = _mm_mul_ps(v27, v19); /*0x8f3a88*/
  }
  v30 = _mm_mul_ps(v18, v29); /*0x8f3a99*/
  *(float *)&v76 = -(float)(_mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0] /*0x8f3ac3*/
                          + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]));
  v31 = _mm_add_ps(v18, _mm_mul_ps(_mm_shuffle_ps((__m128)v76, (__m128)v76, 0), v29)); /*0x8f3ade*/
  v32 = _mm_mul_ps(v31, v31); /*0x8f3ae8*/
  v33 = sqrt(this->m128_f32[3] * this->m128_f32[3] - v77); /*0x8f3af2*/
  v32.m128_f32[0] = _mm_shuffle_ps(v32, v32, 0xAA).m128_f32[0] /*0x8f3b02*/
                  + (float)(_mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0]);
  v80.m128_f32[0] = 1.0 / fsqrt(v32.m128_f32[0]); /*0x8f3b1d*/
  v34 = v80.m128_f32[0]; /*0x8f3b23*/
  v85 = (__m128)0x3F000000u; /*0x8f3b36*/
  v32.m128_f32[0] = v32.m128_f32[0] * v80.m128_f32[0]; /*0x8f3b3b*/
  v80 = (__m128)0x40400000u; /*0x8f3b3f*/
  v35 = *(float *)&v79 - v33 * (float)((float)(0.5 * v34) * (float)(3.0 - (float)(v32.m128_f32[0] * v34))); /*0x8f3b60*/
  *(float *)&v79 = v35; /*0x8f3b64*/
  if ( v35 >= a4[1].m128_f32[1] ) /*0x8f3b70*/
    goto LABEL_19; /*0x8f3b70*/
  v36 = _mm_mul_ps(v82, v29); /*0x8f3b82*/
  v37 = _mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0] /*0x8f3b97*/
      + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]);
  v77 = *(float *)&v79; /*0x8f3b9b*/
  v38 = _mm_shuffle_ps((__m128)v79, (__m128)v79, 0); /*0x8f3ba5*/
  v39 = (__m128)xmmword_A6DFE0; /*0x8f3bbf*/
  v83 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v38), v10), _mm_mul_ps(v38, v84)); /*0x8f3bd5*/
  v40 = _mm_mul_ps(v83, v29); /*0x8f3bda*/
  v77 = (float)(_mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0] /*0x8f3c03*/
              + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]))
      - v37;
  if ( *(float *)&v79 >= (double)*(float *)&SrcStr && v77 > (double)*(float *)&SrcStr && v77 < v28 ) /*0x8f3c3c*/
  {
    v74 = v77 / v28; /*0x8f3c4d*/
    sub_535AA0(&v84, v74); /*0x8f3c52*/
    v41 = _mm_shuffle_ps(v84, v84, 0); /*0x8f3c5c*/
    v42 = _mm_sub_ps(v83, _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v41), v82), _mm_mul_ps(v41, v81))); /*0x8f3c8c*/
    v43 = _mm_mul_ps(v42, v42); /*0x8f3c92*/
    v44 = _mm_shuffle_ps(v43, v43, 0x55).m128_f32[0] + v43.m128_f32[0]; /*0x8f3c9c*/
    v45 = _mm_shuffle_ps(v43, v43, 0xAA); /*0x8f3ca3*/
    v46 = v45; /*0x8f3ca7*/
    v46.m128_f32[0] = v45.m128_f32[0] + v44; /*0x8f3caa*/
    v82 = v46; /*0x8f3cae*/
    v82.m128_f32[0] = 1.0 / fsqrt(v45.m128_f32[0] + v44); /*0x8f3cb7*/
    v47 = v85; /*0x8f3cd9*/
    v47.m128_f32[0] = (float)(v85.m128_f32[0] * v82.m128_f32[0]) /*0x8f3ce2*/
                    * (float)(v80.m128_f32[0]
                            - (float)((float)((float)(v45.m128_f32[0] + v44) * v82.m128_f32[0]) * v82.m128_f32[0]));
    a4[1].m128_f32[1] = *(float *)&v79; /*0x8f3ced*/
    a4[1].m128_i32[0] = 0xFFFFFFFF; /*0x8f3cf0*/
    *a4 = _mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v42); /*0x8f3cfa*/
    v48 = ThreadLocalStoragePointer[v5]; /*0x8f3cfd*/
    if ( *(_DWORD *)(v48 + 0x1A4) < *(_DWORD *)(v48 + 0x1A8) ) /*0x8f3d0c*/
    {
      v49 = ThreadLocalStoragePointer[v5]; /*0x8f3d0e*/
      v50 = *(_DWORD **)(v48 + 0x1A4); /*0x8f3d10*/
      *v50 = "Et"; /*0x8f3d16*/
      v51 = __rdtsc(); /*0x8f3d1c*/
      v50[1] = v51; /*0x8f3d26*/
      *(_DWORD *)(v49 + 0x1A4) = v50 + 3; /*0x8f3d2c*/
    }
    *a2 = 1; /*0x8f3d35*/
    return a2; /*0x8f3d3e*/
  }
  v53 = _mm_mul_ps(v10, v29); /*0x8f3d44*/
  *(float *)&v78 = _mm_shuffle_ps(v53, v53, 0xAA).m128_f32[0] /*0x8f3d61*/
                 + (float)(_mm_shuffle_ps(v53, v53, 0x55).m128_f32[0] + v53.m128_f32[0]);
  v54 = v81; /*0x8f3d6d*/
  *(float *)&v78 = (*(float *)&v78 - v37) / v28; /*0x8f3d78*/
  v55 = _mm_shuffle_ps((__m128)v78, (__m128)v78, 0); /*0x8f3d82*/
  v56 = _mm_sub_ps(v10, _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v39, v55), v82), _mm_mul_ps(v55, v81))); /*0x8f3d9a*/
  v57 = _mm_mul_ps(v56, v56); /*0x8f3d9d*/
  v58 = _mm_shuffle_ps(v57, v57, 0x55).m128_f32[0] + v57.m128_f32[0]; /*0x8f3daa*/
  v59 = _mm_shuffle_ps(v57, v57, 0xAA); /*0x8f3dae*/
  v60 = v59; /*0x8f3db2*/
  v60.m128_f32[0] = v59.m128_f32[0] + v58; /*0x8f3db5*/
  v81 = v60; /*0x8f3db9*/
  v81.m128_i32[0] = fsqrt(v59.m128_f32[0] + v58); /*0x8f3dc2*/
  v78 = v81.m128_f32[0]; /*0x8f3dcd*/
  if ( v81.m128_f32[0] <= (double)this->m128_f32[3] ) /*0x8f3ddd*/
    goto LABEL_17; /*0x8f3ddd*/
  if ( *(float *)&v79 < (double)*(float *)&SrcStr ) /*0x8f3dee*/
  {
LABEL_19:
    v65 = ThreadLocalStoragePointer[v5]; /*0x8f3e1b*/
    if ( *(_DWORD *)(v65 + 0x1A4) < *(_DWORD *)(v65 + 0x1A8) ) /*0x8f3e2a*/
    {
      v66 = ThreadLocalStoragePointer[v5]; /*0x8f3e2c*/
      v67 = *(_DWORD **)(v65 + 0x1A4); /*0x8f3e2e*/
      *v67 = "Et"; /*0x8f3e34*/
      v68 = __rdtsc(); /*0x8f3e3a*/
      v78 = v68; /*0x8f3e3c*/
      v67[1] = v68; /*0x8f3e44*/
      *(_DWORD *)(v66 + 0x1A4) = v67 + 3; /*0x8f3e4a*/
    }
    *a2 = 0; /*0x8f3e53*/
    return a2; /*0x8f3e50*/
  }
  else
  {
LABEL_17:
    v61 = v77 < (double)*(float *)&SrcStr; /*0x8f3df6*/
    v62 = v77 == *(float *)&SrcStr; /*0x8f3df6*/
    v87 = 0; /*0x8f3dfc*/
    v88 = 0; /*0x8f3e03*/
    if ( v61 || v62 ) /*0x8f3e0c*/
    {
      v63 = _mm_sub_ps(v10, v82); /*0x8f3e11*/
      v64 = _mm_sub_ps(v84, v82); /*0x8f3e14*/
    }
    else
    {
      v63 = _mm_sub_ps(v10, v54); /*0x8f3e5f*/
      v64 = _mm_sub_ps(v84, v54); /*0x8f3e62*/
    }
    v75 = this->m128_i32[3]; /*0x8f3e68*/
    v86[0] = v63; /*0x8f3e6d*/
    v86[1] = v64; /*0x8f3e75*/
    sub_8ED410(&v80, v75); /*0x8f3e7d*/
    v70 = ThreadLocalStoragePointer[v5]; /*0x8f3e82*/
    if ( *(_DWORD *)(v70 + 0x1A4) < *(_DWORD *)(v70 + 0x1A8) ) /*0x8f3e91*/
    {
      v71 = ThreadLocalStoragePointer[v5]; /*0x8f3e93*/
      v72 = *(_DWORD **)(v70 + 0x1A4); /*0x8f3e95*/
      *v72 = "Et"; /*0x8f3e9b*/
      v73 = __rdtsc(); /*0x8f3ea1*/
      v78 = v73; /*0x8f3ea3*/
      v69 = v73; /*0x8f3ea7*/
      v72[1] = v73; /*0x8f3eab*/
      *(_DWORD *)(v71 + 0x1A4) = v72 + 3; /*0x8f3eb1*/
    }
    sub_8ED4E0((int)&v80, v69, a2, v86, a4); /*0x8f3ecb*/
    return a2; /*0x8f3ed1*/
  }
}
