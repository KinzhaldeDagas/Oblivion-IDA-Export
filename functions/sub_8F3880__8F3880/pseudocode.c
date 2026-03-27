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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtrcCapsule";
    v9 = __rdtsc();
    HIDWORD(v9) = v9;
    LODWORD(v9) = ThreadLocalStoragePointer[v5];
    v8[1] = HIDWORD(v9);
    *(_DWORD *)(v9 + 0x1A4) = v8 + 3;
  }
  sub_8F37A0(a3, this + 1, this + 2, &v81);
  v10 = *a3;
  v11 = _mm_sub_ps(*a3, v81);
  v12 = _mm_mul_ps(v11, v11);
  v13 = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0];
  v14 = _mm_shuffle_ps(v12, v12, 0xAA);
  v15 = v14;
  v15.m128_f32[0] = v14.m128_f32[0] + v13;
  v80 = v15;
  v80.m128_i32[0] = fsqrt(v14.m128_f32[0] + v13);
  if ( v80.m128_f32[0] < (double)this->m128_f32[3] )
    goto LABEL_19;
  v16 = *(this + 1);
  v17 = a3[1];
  v81 = *(this + 2);
  v84 = v17;
  v18 = _mm_sub_ps(v17, v10);
  v77 = 3.4028235e38;
  v83 = v18;
  v82 = v16;
  v80 = _mm_sub_ps(v81, v16);
  sub_8F35D0(a3, &v83, this + 1, &v80, &v77, (float *)&v79, (float *)&v78, &v89, &v85);
  if ( v77 > this->m128_f32[3] * this->m128_f32[3] )
    goto LABEL_19;
  v19 = v80;
  v20 = _mm_mul_ps(v80, v80);
  if ( (float)(_mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0])) <= (double)flt_A9B288 )
  {
    v28 = *(float *)&SrcStr;
    v29 = 0;
  }
  else
  {
    v21 = _mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0];
    v22 = _mm_shuffle_ps(v20, v20, 0xAA);
    v23 = v22;
    v23.m128_f32[0] = v22.m128_f32[0] + v21;
    v80 = v23;
    v80.m128_f32[0] = 1.0 / fsqrt(v22.m128_f32[0] + v21);
    v24 = 3.0 - (float)((float)((float)(v22.m128_f32[0] + v21) * v80.m128_f32[0]) * v80.m128_f32[0]);
    v25 = (__m128)0x3F000000u;
    v25.m128_f32[0] = 0.5 * v80.m128_f32[0];
    v26 = v25;
    v26.m128_f32[0] = (float)(0.5 * v80.m128_f32[0]) * v24;
    v27 = _mm_shuffle_ps(v26, v26, 0);
    v28 = (float)(v23.m128_f32[0] * v27.m128_f32[0]);
    v29 = _mm_mul_ps(v27, v19);
  }
  v30 = _mm_mul_ps(v18, v29);
  *(float *)&v76 = -(float)(_mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]));
  v31 = _mm_add_ps(v18, _mm_mul_ps(_mm_shuffle_ps((__m128)v76, (__m128)v76, 0), v29));
  v32 = _mm_mul_ps(v31, v31);
  v33 = sqrt(this->m128_f32[3] * this->m128_f32[3] - v77);
  v32.m128_f32[0] = _mm_shuffle_ps(v32, v32, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0]);
  v80.m128_f32[0] = 1.0 / fsqrt(v32.m128_f32[0]);
  v34 = v80.m128_f32[0];
  v85 = (__m128)0x3F000000u;
  v32.m128_f32[0] = v32.m128_f32[0] * v80.m128_f32[0];
  v80 = (__m128)0x40400000u;
  v35 = *(float *)&v79 - v33 * (float)((float)(0.5 * v34) * (float)(3.0 - (float)(v32.m128_f32[0] * v34)));
  *(float *)&v79 = v35;
  if ( v35 >= a4[1].m128_f32[1] )
    goto LABEL_19;
  v36 = _mm_mul_ps(v82, v29);
  v37 = _mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]);
  v77 = *(float *)&v79;
  v38 = _mm_shuffle_ps((__m128)v79, (__m128)v79, 0);
  v39 = (__m128)xmmword_A6DFE0;
  v83 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v38), v10), _mm_mul_ps(v38, v84));
  v40 = _mm_mul_ps(v83, v29);
  v77 = (float)(_mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]))
      - v37;
  if ( *(float *)&v79 >= (double)*(float *)&SrcStr && v77 > (double)*(float *)&SrcStr && v77 < v28 )
  {
    v74 = v77 / v28;
    sub_535AA0(&v84, v74);
    v41 = _mm_shuffle_ps(v84, v84, 0);
    v42 = _mm_sub_ps(v83, _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v41), v82), _mm_mul_ps(v41, v81)));
    v43 = _mm_mul_ps(v42, v42);
    v44 = _mm_shuffle_ps(v43, v43, 0x55).m128_f32[0] + v43.m128_f32[0];
    v45 = _mm_shuffle_ps(v43, v43, 0xAA);
    v46 = v45;
    v46.m128_f32[0] = v45.m128_f32[0] + v44;
    v82 = v46;
    v82.m128_f32[0] = 1.0 / fsqrt(v45.m128_f32[0] + v44);
    v47 = v85;
    v47.m128_f32[0] = (float)(v85.m128_f32[0] * v82.m128_f32[0])
                    * (float)(v80.m128_f32[0]
                            - (float)((float)((float)(v45.m128_f32[0] + v44) * v82.m128_f32[0]) * v82.m128_f32[0]));
    a4[1].m128_f32[1] = *(float *)&v79;
    a4[1].m128_i32[0] = 0xFFFFFFFF;
    *a4 = _mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v42);
    v48 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v48 + 0x1A4) < *(_DWORD *)(v48 + 0x1A8) )
    {
      v49 = ThreadLocalStoragePointer[v5];
      v50 = *(_DWORD **)(v48 + 0x1A4);
      *v50 = "Et";
      v51 = __rdtsc();
      v50[1] = v51;
      *(_DWORD *)(v49 + 0x1A4) = v50 + 3;
    }
    *a2 = 1;
    return a2;
  }
  v53 = _mm_mul_ps(v10, v29);
  *(float *)&v78 = _mm_shuffle_ps(v53, v53, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v53, v53, 0x55).m128_f32[0] + v53.m128_f32[0]);
  v54 = v81;
  *(float *)&v78 = (*(float *)&v78 - v37) / v28;
  v55 = _mm_shuffle_ps((__m128)v78, (__m128)v78, 0);
  v56 = _mm_sub_ps(v10, _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v39, v55), v82), _mm_mul_ps(v55, v81)));
  v57 = _mm_mul_ps(v56, v56);
  v58 = _mm_shuffle_ps(v57, v57, 0x55).m128_f32[0] + v57.m128_f32[0];
  v59 = _mm_shuffle_ps(v57, v57, 0xAA);
  v60 = v59;
  v60.m128_f32[0] = v59.m128_f32[0] + v58;
  v81 = v60;
  v81.m128_i32[0] = fsqrt(v59.m128_f32[0] + v58);
  v78 = v81.m128_f32[0];
  if ( v81.m128_f32[0] <= (double)this->m128_f32[3] )
    goto LABEL_17;
  if ( *(float *)&v79 < (double)*(float *)&SrcStr )
  {
LABEL_19:
    v65 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v65 + 0x1A4) < *(_DWORD *)(v65 + 0x1A8) )
    {
      v66 = ThreadLocalStoragePointer[v5];
      v67 = *(_DWORD **)(v65 + 0x1A4);
      *v67 = "Et";
      v68 = __rdtsc();
      v78 = v68;
      v67[1] = v68;
      *(_DWORD *)(v66 + 0x1A4) = v67 + 3;
    }
    *a2 = 0;
    return a2;
  }
  else
  {
LABEL_17:
    v61 = v77 < (double)*(float *)&SrcStr;
    v62 = v77 == *(float *)&SrcStr;
    v87 = 0;
    v88 = 0;
    if ( v61 || v62 )
    {
      v63 = _mm_sub_ps(v10, v82);
      v64 = _mm_sub_ps(v84, v82);
    }
    else
    {
      v63 = _mm_sub_ps(v10, v54);
      v64 = _mm_sub_ps(v84, v54);
    }
    v75 = this->m128_i32[3];
    v86[0] = v63;
    v86[1] = v64;
    sub_8ED410(&v80, v75);
    v70 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v70 + 0x1A4) < *(_DWORD *)(v70 + 0x1A8) )
    {
      v71 = ThreadLocalStoragePointer[v5];
      v72 = *(_DWORD **)(v70 + 0x1A4);
      *v72 = "Et";
      v73 = __rdtsc();
      v78 = v73;
      v69 = v73;
      v72[1] = v73;
      *(_DWORD *)(v71 + 0x1A4) = v72 + 3;
    }
    sub_8ED4E0((int)&v80, v69, a2, v86, a4);
    return a2;
  }
}
