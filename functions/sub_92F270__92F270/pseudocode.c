int __cdecl sub_92F270(__m128 *a1, __m128 *a2, signed int a3, const void **a4, __m128 **a5)
{
  bool v5; // zf
  __m128 *v6; // edi
  __m128 v7; // xmm0
  __m128 *v8; // eax
  __m128 *v9; // eax
  _DWORD *ThreadLocalStoragePointer; // edx
  int v11; // ecx
  _DWORD *v12; // eax
  __m128 v13; // xmm0
  unsigned int v14; // edx
  __m128 v15; // xmm3
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  double v18; // st7
  signed int v19; // ecx
  __m128 *v20; // edi
  __m128 v21; // xmm1
  __m128 *v22; // eax
  __m128 v23; // xmm5
  unsigned int v24; // edi
  __m128 v25; // xmm1
  __m128 v26; // xmm0
  float v27; // xmm2_4
  float v28; // xmm3_4
  __m128 v29; // xmm0
  unsigned int v30; // ecx
  __m128 v31; // xmm3
  __m128 v32; // xmm0
  __m128 v33; // xmm1
  __m128 v34; // xmm2
  __m128 v35; // xmm0
  double v36; // st7
  __m128 v37; // xmm0
  __m128 v38; // xmm1
  double v39; // st7
  double v40; // st6
  double v41; // st6
  __m128 v42; // xmm6
  __m128 v43; // xmm0
  __m128 v44; // xmm6
  __m128 *v45; // ecx
  __m128 v46; // xmm1
  __m128 v47; // xmm2
  __m128 v48; // xmm0
  bool v49; // c0
  double v50; // st7
  __m128 v51; // xmm1
  __m128 v52; // xmm0
  float v53; // xmm2_4
  float v54; // xmm6_4
  __m128 v55; // xmm0
  __m128 v56; // xmm0
  __m128 v57; // xmm0
  const void **v58; // ecx
  bool v59; // c0
  __m128 *v60; // eax
  __m128 v61; // xmm1
  __m128 v62; // xmm0
  float v63; // xmm2_4
  float v64; // xmm6_4
  __m128 v65; // xmm0
  __m128 v66; // xmm0
  unsigned int v67; // edi
  __m128 v68; // xmm1
  __m128 *v69; // edi
  __m128 v70; // xmm0
  __m128 *v71; // edx
  __m128 *v72; // ecx
  __m128 v73; // xmm2
  __m128 v74; // xmm0
  bool v75; // c0
  double v76; // st7
  __m128 v77; // xmm1
  __m128 v78; // xmm0
  float v79; // xmm2_4
  float v80; // xmm3_4
  __m128 v81; // xmm0
  __m128 v82; // xmm0
  __m128 v83; // xmm0
  int result; // eax
  unsigned int v85; // [esp+14h] [ebp-ACh]
  float v86; // [esp+18h] [ebp-A8h]
  float v87; // [esp+1Ch] [ebp-A4h]
  unsigned int v88; // [esp+1Ch] [ebp-A4h]
  __m128 *v89; // [esp+20h] [ebp-A0h]
  __m128 *v90; // [esp+20h] [ebp-A0h]
  float v91; // [esp+24h] [ebp-9Ch]
  unsigned int v92; // [esp+24h] [ebp-9Ch]
  unsigned int v93; // [esp+28h] [ebp-98h]
  unsigned int v94; // [esp+2Ch] [ebp-94h]
  __m128 v95; // [esp+30h] [ebp-90h]
  float v96; // [esp+40h] [ebp-80h]
  float v97; // [esp+40h] [ebp-80h]
  float v98; // [esp+40h] [ebp-80h]
  float v99; // [esp+50h] [ebp-70h]
  unsigned int v100; // [esp+54h] [ebp-6Ch]
  float v101; // [esp+58h] [ebp-68h]
  int v102; // [esp+60h] [ebp-60h]
  float v103; // [esp+80h] [ebp-40h]
  _DWORD *v104; // [esp+94h] [ebp-2Ch]
  __m128 v105; // [esp+A0h] [ebp-20h]

  v5 = ((unsigned int)a5[2] & 0x3FFFFFFF) == 0;
  v6 = a1;
  a5[1] = 0;
  v7 = _mm_xor_ps(*a1, (__m128)xmmword_A965C0);
  if ( v5 )
    sub_8A6EE0((const void **)a5, 0x10);
  v8 = &(*a5)[(_DWORD)a5[1]];
  a5[1] = (__m128 *)((char *)a5[1] + 1);
  *v8 = *a1;
  if ( a5[1] == (__m128 *)((unsigned int)a5[2] & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)a5, 0x10);
  v9 = &(*a5)[(_DWORD)a5[1]];
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  a5[1] = (__m128 *)((char *)a5[1] + 1);
  v11 = TlsIndex;
  *v9 = v7;
  v102 = ThreadLocalStoragePointer[v11];
  v12 = sub_8A7560(*(_DWORD *)(v102 + 0x19C), a3, 0x14);
  v104 = v12;
  if ( a3 > 0 )
  {
    memset(v12, 0, a3);
    v6 = a1;
  }
  v13 = *v6;
  v14 = 0xFFFFFFFF;
  v94 = 0xFFFFFFFF;
  v95.m128_i32[3] = 0;
  v95.m128_i32[1] = 0;
  if ( fabs(fConstant_1 - fabs(v6->m128_f32[2])) >= flt_A372CC )
  {
    v95.m128_i32[0] = 0;
    v95.m128_i32[2] = 0x3F800000;
    v15 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0xD2), _mm_shuffle_ps(v95, v95, 0xC9));
    v16 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0xC9), _mm_shuffle_ps(v95, v95, 0xD2));
  }
  else
  {
    v95.m128_i32[0] = 0x3F800000;
    v95.m128_i32[2] = 0;
    v15 = _mm_mul_ps(_mm_shuffle_ps(v95, v95, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9));
    v16 = _mm_mul_ps(_mm_shuffle_ps(v95, v95, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2));
  }
  v17 = _mm_sub_ps(v16, v15);
  v18 = flt_A3B888;
  v19 = 0;
  if ( a3 > 0 )
  {
    v20 = a2;
    do
    {
      v21 = _mm_mul_ps(*v20, v17);
      v87 = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]);
      if ( v87 > v18 )
      {
        v94 = v19;
        v18 = v87;
        v14 = v19;
      }
      ++v19;
      ++v20;
    }
    while ( v19 < a3 );
  }
  *((_BYTE *)v12 + v14) = 1;
  if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
  {
    sub_8A6EE0(a4, 0x10);
    v14 = v94;
  }
  v22 = (__m128 *)((char *)*a4 + 0x10 * (_DWORD)a4[1]);
  a4[1] = (char *)a4[1] + 1;
  *v22 = a2[v14];
  v23 = (__m128)0x3F000000u;
  v24 = 0xFFFFFFFF;
  v25 = _mm_add_ps(
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0xC9), _mm_shuffle_ps(*a1, *a1, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0xD2), _mm_shuffle_ps(*a1, *a1, 0xC9))),
          v17);
  v93 = v14;
  v88 = v14;
  v100 = 0xFFFFFFFF;
  while ( 1 )
  {
    v26 = _mm_mul_ps(v25, v25);
    v27 = _mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0];
    v28 = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0];
    v96 = 1.0 / fsqrt(v28 + v27);
    v29 = v23;
    v29.m128_f32[0] = (float)(v23.m128_f32[0] * v96) * (float)(3.0 - (float)((float)((float)(v28 + v27) * v96) * v96));
    v30 = 0;
    v31 = _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v25);
    v86 = -2.0;
    v99 = 3.4028235e38;
    if ( a3 > 0 )
    {
      v89 = a2;
      while ( v30 == v14 )
      {
LABEL_31:
        ++v89;
        if ( (int)++v30 >= a3 )
          goto LABEL_32;
      }
      v32 = _mm_sub_ps(*v89, a2[v14]);
      v33 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xC9), _mm_shuffle_ps(v32, v32, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xD2), _mm_shuffle_ps(v32, v32, 0xC9)));
      v34 = _mm_mul_ps(v31, v32);
      v35 = _mm_mul_ps(v32, v32);
      v101 = _mm_shuffle_ps(v34, v34, 0xAA).m128_f32[0]
           + (float)(_mm_shuffle_ps(v34, v34, 0x55).m128_f32[0] + v34.m128_f32[0]);
      v36 = fConstant_1
          / fsqrt(
              _mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]));
      v37 = _mm_mul_ps(v33, v33);
      v38 = _mm_mul_ps(v33, *a1);
      v91 = v36;
      v39 = v36
          * fsqrt(
              _mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0]));
      if ( (float)(_mm_shuffle_ps(v38, v38, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0])) > (double)*(float *)&SrcStr )
        v39 = v39 * flt_A30634;
      if ( v91 * v101 >= *(float *)&SrcStr )
      {
        if ( v39 > *(float *)&SrcStr )
        {
          v41 = v39;
          goto LABEL_29;
        }
        v40 = flt_A46B10;
      }
      else
      {
        v40 = fConstant_2;
      }
      v41 = v40 - v39;
LABEL_29:
      if ( v41 < v99 )
      {
        v99 = v41;
        v24 = v30;
        v86 = v39;
      }
      goto LABEL_31;
    }
LABEL_32:
    if ( v14 == v94 )
    {
      v100 = v24;
    }
    else
    {
      v42 = a2[v14];
      v90 = &a2[v14];
      v43 = _mm_sub_ps(v42, a2[v88]);
      v44 = _mm_sub_ps(v42, a2[v24]);
      if ( a5[1] == (__m128 *)((unsigned int)a5[2] & 0x3FFFFFFF) )
      {
        sub_8A6EE0((const void **)a5, 0x10);
        v23 = (__m128)0x3F000000u;
        v14 = v93;
      }
      v45 = &(*a5)[(_DWORD)a5[1]];
      a5[1] = (__m128 *)((char *)a5[1] + 1);
      if ( v88 == v24 )
        v46 = *a1;
      else
        v46 = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xC9), _mm_shuffle_ps(v44, v44, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xD2), _mm_shuffle_ps(v44, v44, 0xC9)));
      v47 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xC9), _mm_shuffle_ps(v46, v46, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xD2), _mm_shuffle_ps(v46, v46, 0xC9)));
      v48 = _mm_mul_ps(v47, v44);
      v49 = (float)(_mm_shuffle_ps(v48, v48, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v48, v48, 0x55).m128_f32[0] + v48.m128_f32[0])) < (double)flt_A372CC;
      *v45 = v47;
      v50 = v49 ? flt_A30634 : fConstant_1;
      *(float *)&v92 = v50;
      v51 = _mm_mul_ps(_mm_shuffle_ps((__m128)v92, (__m128)v92, 0), v47);
      v52 = _mm_mul_ps(v51, v51);
      v53 = _mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0];
      v54 = _mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0];
      v97 = 1.0 / fsqrt(v54 + v53);
      v55 = v23;
      v55.m128_f32[0] = (float)(v23.m128_f32[0] * v97) * (float)(3.0 - (float)((float)((float)(v54 + v53) * v97) * v97));
      *v45 = v51;
      v56 = _mm_mul_ps(_mm_shuffle_ps(v55, v55, 0), v51);
      *v45 = v56;
      v57 = _mm_mul_ps(v56, *v90);
      v45->m128_f32[3] = -(float)(_mm_shuffle_ps(v57, v57, 0xAA).m128_f32[0]
                                + (float)(_mm_shuffle_ps(v57, v57, 0x55).m128_f32[0] + v57.m128_f32[0]));
    }
    if ( *((_BYTE *)v104 + v24) )
      break;
    v58 = a4;
    *((_BYTE *)v104 + v24) = 1;
    if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
    {
      sub_8A6EE0(a4, 0x10);
      v23 = (__m128)0x3F000000u;
      v58 = a4;
    }
    v59 = v86 < (double)flt_A79DB4;
    v60 = (__m128 *)((char *)*v58 + 0x10 * (_DWORD)v58[1]);
    v58[1] = (char *)v58[1] + 1;
    *v60 = a2[v24];
    v61 = _mm_sub_ps(a2[v24], a2[v93]);
    v62 = _mm_mul_ps(v61, v61);
    v63 = _mm_shuffle_ps(v62, v62, 0x55).m128_f32[0] + v62.m128_f32[0];
    v64 = _mm_shuffle_ps(v62, v62, 0xAA).m128_f32[0];
    v98 = 1.0 / fsqrt(v64 + v63);
    v65 = v23;
    v65.m128_f32[0] = (float)(v23.m128_f32[0] * v98) * (float)(3.0 - (float)((float)((float)(v64 + v63) * v98) * v98));
    v66 = _mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v61);
    if ( !v59 )
      v66 = _mm_add_ps(v66, v31);
    v88 = v93;
    v25 = v66;
    v93 = v24;
    v14 = v24;
  }
  v67 = v24;
  v68 = a2[v67];
  v69 = &a2[v67];
  v70 = _mm_sub_ps(v68, a2[v14]);
  v105 = _mm_sub_ps(v68, a2[v100]);
  if ( a5[1] == (__m128 *)((unsigned int)a5[2] & 0x3FFFFFFF) )
  {
    sub_8A6EE0((const void **)a5, 0x10);
    v23 = (__m128)0x3F000000u;
  }
  v71 = *a5;
  v72 = &(*a5)[(_DWORD)a5[1]];
  a5[1] = (__m128 *)((char *)a5[1] + 1);
  v73 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v70, v70, 0xC9), _mm_shuffle_ps(*v71, *v71, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v70, v70, 0xD2), _mm_shuffle_ps(*v71, *v71, 0xC9)));
  v74 = _mm_mul_ps(v73, v105);
  v75 = (float)(_mm_shuffle_ps(v74, v74, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v74, v74, 0x55).m128_f32[0] + v74.m128_f32[0])) < (double)flt_A372CC;
  *v72 = v73;
  if ( v75 )
    v76 = flt_A30634;
  else
    v76 = fConstant_1;
  *(float *)&v85 = v76;
  v77 = _mm_mul_ps(_mm_shuffle_ps((__m128)v85, (__m128)v85, 0), v73);
  v78 = _mm_mul_ps(v77, v77);
  v79 = _mm_shuffle_ps(v78, v78, 0x55).m128_f32[0] + v78.m128_f32[0];
  v80 = _mm_shuffle_ps(v78, v78, 0xAA).m128_f32[0];
  v103 = 1.0 / fsqrt(v80 + v79);
  v23.m128_f32[0] = v23.m128_f32[0] * v103;
  *v72 = v77;
  v81 = v23;
  v81.m128_f32[0] = v23.m128_f32[0] * (float)(3.0 - (float)((float)((float)(v80 + v79) * v103) * v103));
  v82 = _mm_mul_ps(_mm_shuffle_ps(v81, v81, 0), v77);
  *v72 = v82;
  v83 = _mm_mul_ps(v82, *v69);
  result = a3;
  v72->m128_f32[3] = -(float)(_mm_shuffle_ps(v83, v83, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v83, v83, 0x55).m128_f32[0] + v83.m128_f32[0]));
  if ( a3 >= 0 )
    return sub_8A75D0(*(_DWORD *)(v102 + 0x19C), v104, a3 & 0x3FFFFFFF, 0x14);
  return result;
}
