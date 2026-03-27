int __thiscall sub_916400(__m128 *this)
{
  double v1; // st7
  __m128 v3; // xmm1
  double v4; // st6
  __m128 v5; // xmm0
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm3
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  double v13; // st7
  const void **v14; // ebx
  const void **v15; // eax
  char *v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // esi
  int v21; // eax
  __m128 v22; // xmm0
  int v23; // eax
  int v24; // eax
  __m128 *v25; // esi
  int v26; // eax
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __m128 v29; // xmm6
  __m128 v30; // xmm0
  __m128 v31; // xmm2
  int v32; // eax
  __m128 v33; // xmm0
  __m128 v34; // xmm0
  int v35; // ebx
  int v36; // esi
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // ebx
  int v41; // esi
  int v42; // eax
  int v43; // eax
  __int32 v44; // ecx
  int v45; // eax
  int v46; // ecx
  __int32 v47; // edx
  int v48; // esi
  int v49; // ebx
  int v50; // eax
  const void **v51; // esi
  int v52; // eax
  int v53; // eax
  char *v54; // ecx
  char *v55; // eax
  int v56; // esi
  int v57; // ebx
  int v58; // eax
  const void **v59; // esi
  int v60; // eax
  int v61; // eax
  char *v62; // ecx
  __int32 v63; // esi
  char *v64; // eax
  __int64 v65; // rcx
  bool v66; // cc
  __int32 v67; // esi
  int v68; // ecx
  int v69; // eax
  int result; // eax
  int v71; // edx
  int v72; // esi
  int v73; // eax
  int v74; // esi
  int v75; // eax
  bool v76; // zf
  float v77; // ecx
  int v78; // ebx
  int v79; // eax
  int *v80; // eax
  int v81; // eax
  _DWORD *v82; // eax
  int v83; // ecx
  float v84; // [esp+0h] [ebp-E4h]
  unsigned int v85; // [esp+18h] [ebp-CCh]
  unsigned int v86; // [esp+18h] [ebp-CCh]
  unsigned int v87; // [esp+18h] [ebp-CCh]
  unsigned int v88; // [esp+18h] [ebp-CCh]
  unsigned int v89; // [esp+18h] [ebp-CCh]
  int v90; // [esp+18h] [ebp-CCh]
  int v91; // [esp+1Ch] [ebp-C8h]
  int v92; // [esp+1Ch] [ebp-C8h]
  int v93; // [esp+1Ch] [ebp-C8h]
  float v94; // [esp+20h] [ebp-C4h]
  int v95; // [esp+20h] [ebp-C4h]
  int v96; // [esp+20h] [ebp-C4h]
  __m128 v97; // [esp+24h] [ebp-C0h] BYREF
  __int32 v98; // [esp+40h] [ebp-A4h]
  __m128 v99; // [esp+44h] [ebp-A0h] BYREF
  int v100; // [esp+58h] [ebp-8Ch]
  float v101; // [esp+5Ch] [ebp-88h]
  int v102; // [esp+60h] [ebp-84h]
  __m128 v103; // [esp+64h] [ebp-80h] BYREF
  __m128 v104; // [esp+74h] [ebp-70h]
  __m128 v105; // [esp+84h] [ebp-60h]
  __m128 v106; // [esp+94h] [ebp-50h] BYREF
  __m128 v107; // [esp+A4h] [ebp-40h]
  __m128 v108; // [esp+B4h] [ebp-30h]
  __m128 v109; // [esp+C4h] [ebp-20h] BYREF
  __m128 v110; // [esp+D4h] [ebp-10h]

  v1 = fConstant_1;
  v3 = _mm_sub_ps(*(this + 6), *(this + 7));
  v4 = v1 / (double)*((int *)this + 0x22);
  v5 = _mm_mul_ps(v3, v3);
  v101 = fsqrt(_mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0]
                                                                + v5.m128_f32[0]));
  *(float *)&v85 = v4;
  v6 = _mm_mul_ps(_mm_shuffle_ps((__m128)v85, (__m128)v85, 0), v3);
  v7 = _mm_mul_ps(v6, v6);
  v3.m128_f32[0] = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0];
  v8 = _mm_shuffle_ps(v7, v7, 0xAA);
  v9 = v8;
  v9.m128_f32[0] = v8.m128_f32[0] + v3.m128_f32[0];
  v99 = v9;
  v99.m128_f32[0] = 1.0 / fsqrt(v8.m128_f32[0] + v3.m128_f32[0]);
  v10 = (__m128)0x3F000000u;
  v10.m128_f32[0] = (float)(0.5 * v99.m128_f32[0])
                  * (float)(3.0
                          - (float)((float)((float)(v8.m128_f32[0] + v3.m128_f32[0]) * v99.m128_f32[0]) * v99.m128_f32[0]));
  v11 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v6);
  v103 = v11;
  v105 = v6;
  if ( fabs(v11.m128_f32[0]) <= flt_A3D65C )
  {
    if ( fabs(v103.m128_f32[1]) <= flt_A3D65C )
    {
      if ( fabs(v103.m128_f32[2]) <= flt_A3D65C )
      {
        v12 = v106;
      }
      else
      {
        v99.m128_f32[0] = v1;
        memset(&v99.m128_i16[2], 0, 0xC);
        v12 = (__m128)COERCE_UNSIGNED_INT(v99.m128_f32[0]);
      }
    }
    else
    {
      v99.m128_f32[2] = v1;
      v99.m128_u64[0] = 0;
      v99.m128_i32[3] = 0;
      v12 = v99;
    }
  }
  else
  {
    v99.m128_f32[1] = v1;
    v99.m128_i32[0] = 0;
    v99.m128_u64[1] = 0;
    v12 = (__m128)v99.m128_u64[0];
  }
  v13 = flt_A46B14 / (double)*((int *)this + 0x21);
  v107 = _mm_mul_ps(
           _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x20), (__m128)*((unsigned int *)this + 0x20), 0),
           _mm_sub_ps(
             _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v12, v12, 0xD2)),
             _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v12, v12, 0xC9))));
  v84 = v13;
  sub_8B1B00(&v109, &v103, v84);
  v14 = 0;
  sub_8B1B00(&v97, &v103, 0.0);
  v15 = (const void **)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
  if ( v15 )
  {
    *v15 = 0;
    v15[1] = 0;
    v15[2] = (const void *)0x80000000;
    v15[3] = 0;
    v15[4] = 0;
    v15[5] = (const void *)0x80000000;
    v14 = v15;
  }
  *((_DWORD *)this + 0x14) = v14;
  v16 = (char *)v14[1];
  v17 = (unsigned int)v14[2] & 0x3FFFFFFF;
  if ( v17 < (int)(v16 + 1) )
  {
    v18 = 2 * v17;
    if ( (int)(v16 + 1) >= v18 )
      v18 = (int)(v16 + 1);
    sub_8A6E40(v14, v18, 0x10);
  }
  v14[1] = v16 + 1;
  *((__m128 *)*v14 + (unsigned int)v16) = *(this + 7);
  v19 = *((_DWORD *)this + 0x14);
  *(float *)&v86 = (float)*((int *)this + 0x22);
  v20 = *(_DWORD *)(v19 + 4);
  v21 = *(_DWORD *)(v19 + 8) & 0x3FFFFFFF;
  v22 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v86, (__m128)v86, 0), v105), *(this + 7));
  v104 = v22;
  if ( v21 < v20 + 1 )
  {
    v23 = 2 * v21;
    if ( v20 + 1 >= v23 )
      v23 = v20 + 1;
    sub_8A6E40((const void **)v19, v23, 0x10);
    v22 = v104;
  }
  v24 = v20 + 1;
  v25 = (__m128 *)(*(_DWORD *)v19 + 0x10 * v20);
  *(_DWORD *)(v19 + 4) = v24;
  *v25 = v22;
  v26 = *((_DWORD *)this + 0x21);
  v98 = 0;
  if ( v26 > 0 )
  {
    v27 = v107;
    v28 = _mm_shuffle_ps(v107, v107, 0xC9);
    v29 = _mm_shuffle_ps(v107, v107, 0xD2);
    v108 = v28;
    v110 = v29;
    while ( 1 )
    {
      v104 = v97;
      v104.m128_i32[3] = 0;
      v30 = _mm_mul_ps(v104, v27);
      *(float *)&v87 = v97.m128_f32[3] * v97.m128_f32[3] + v97.m128_f32[3] * v97.m128_f32[3] - fConstant_1;
      v31 = (__m128)v87;
      v94 = _mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]);
      v32 = *((_DWORD *)this + 0x22);
      *(float *)&v88 = v94 + v94;
      v33 = (__m128)v88;
      *(float *)&v89 = v97.m128_f32[3] + v97.m128_f32[3];
      v34 = _mm_add_ps(
              *(this + 7),
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v27), _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v104)),
                _mm_mul_ps(
                  _mm_shuffle_ps((__m128)v89, (__m128)v89, 0),
                  _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0xC9), v29),
                    _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0xD2), v28)))));
      v99 = v34;
      v91 = 0;
      if ( v32 > 0 )
      {
        do
        {
          v35 = *((_DWORD *)this + 0x14);
          v36 = *(_DWORD *)(v35 + 4);
          v37 = *(_DWORD *)(v35 + 8) & 0x3FFFFFFF;
          if ( v37 < v36 + 1 )
          {
            v38 = 2 * v37;
            if ( v36 + 1 >= v38 )
              v38 = v36 + 1;
            sub_8A6E40((const void **)v35, v38, 0x10);
            v34 = v99;
          }
          *(_DWORD *)(v35 + 4) = v36 + 1;
          *(__m128 *)(*(_DWORD *)v35 + 0x10 * v36) = v34;
          v34 = _mm_add_ps(v34, v105);
          v39 = *((_DWORD *)this + 0x22);
          v99 = v34;
          ++v91;
        }
        while ( v91 < v39 );
      }
      v40 = *((_DWORD *)this + 0x14);
      v41 = *(_DWORD *)(v40 + 4);
      v42 = *(_DWORD *)(v40 + 8) & 0x3FFFFFFF;
      if ( v42 < v41 + 1 )
      {
        v43 = 2 * v42;
        if ( v41 + 1 >= v43 )
          v43 = v41 + 1;
        sub_8A6E40((const void **)v40, v43, 0x10);
        v34 = v99;
      }
      *(_DWORD *)(v40 + 4) = v41 + 1;
      *(__m128 *)(*(_DWORD *)v40 + 0x10 * v41) = v34;
      v106 = v97;
      sub_889470(&v97, &v106, &v109);
      v44 = *((_DWORD *)this + 0x21);
      if ( ++v98 >= v44 )
        break;
      v28 = v108;
      v29 = v110;
      v27 = v107;
    }
  }
  v45 = *((_DWORD *)this + 0x22);
  v46 = *((_DWORD *)this + 0x21);
  v102 = v45 + 1;
  v47 = v46 * (v45 + 1) + 2;
  v98 = v47;
  v97.m128_i32[0] = 2;
  v97.m128_i32[1] = v45 + 3;
  v97.m128_i32[2] = 3;
  v97.m128_i32[3] = v45 + 4;
  v95 = 0;
  if ( v46 > 0 )
  {
    do
    {
      v92 = 0;
      if ( v45 > 0 )
      {
        do
        {
          v48 = *((_DWORD *)this + 0x14);
          v49 = *(_DWORD *)(v48 + 0x10);
          v50 = *(_DWORD *)(v48 + 0x14);
          v51 = (const void **)(v48 + 0xC);
          v52 = v50 & 0x3FFFFFFF;
          if ( v52 < v49 + 1 )
          {
            v53 = 2 * v52;
            if ( v49 + 1 >= v53 )
              v53 = v49 + 1;
            sub_8A6E40(v51, v53, 0xC);
            v47 = v98;
          }
          v54 = (char *)*v51;
          v51[1] = (const void *)(v49 + 1);
          v55 = &v54[0xC * v49];
          *(_QWORD *)v55 = v97.m128_u64[0];
          *((_DWORD *)v55 + 2) = v97.m128_i32[2];
          v56 = *((_DWORD *)this + 0x14);
          v57 = *(_DWORD *)(v56 + 0x10);
          v58 = *(_DWORD *)(v56 + 0x14);
          v59 = (const void **)(v56 + 0xC);
          v60 = v58 & 0x3FFFFFFF;
          if ( v60 < v57 + 1 )
          {
            v61 = 2 * v60;
            if ( v57 + 1 >= v61 )
              v61 = v57 + 1;
            sub_8A6E40(v59, v61, 0xC);
            v47 = v98;
          }
          v62 = (char *)*v59;
          v59[1] = (const void *)(v57 + 1);
          v63 = v97.m128_i32[3];
          v64 = &v62[0xC * v57];
          v65 = *(__int64 *)((char *)v97.m128_i64 + 4);
          *((_DWORD *)v64 + 1) = v97.m128_i32[1];
          *(_DWORD *)v64 = HIDWORD(v65);
          *((_DWORD *)v64 + 2) = v63;
          v97.m128_i32[1] = v65 + 1;
          ++v97.m128_i32[0];
          v45 = *((_DWORD *)this + 0x22);
          v66 = v92 + 1 < v45;
          v97.m128_i32[2] = HIDWORD(v65) + 1;
          v97.m128_i32[3] = v63 + 1;
          ++v92;
        }
        while ( v66 );
      }
      v67 = v97.m128_i32[1] + 1;
      ++v97.m128_i32[2];
      v66 = v97.m128_i32[3] + 1 < v47;
      ++v97.m128_i32[0];
      ++v97.m128_i32[1];
      ++v97.m128_i32[3];
      if ( !v66 )
      {
        v97.m128_i32[1] = 2 - v47 + v67;
        v97.m128_i32[3] += 2 - v47;
      }
      ++v95;
    }
    while ( v95 < *((_DWORD *)this + 0x21) );
  }
  v68 = 0;
  v96 = 0;
  do
  {
    if ( v68 )
      v69 = *((_DWORD *)this + 0x22);
    else
      v69 = 0;
    v100 = v69 + 2;
    result = *((_DWORD *)this + 0x21);
    v90 = 0;
    if ( result > 0 )
    {
      do
      {
        v71 = v102 + v100;
        v93 = v102 + v100;
        if ( v102 + v100 >= v98 )
        {
          v71 += 2 - v98;
          v93 = v71;
        }
        v72 = *((_DWORD *)this + 0x14);
        v73 = *(_DWORD *)(v72 + 0x14);
        v74 = v72 + 0xC;
        v75 = v73 & 0x3FFFFFFF;
        v76 = v68 == 0;
        v77 = *(float *)(v74 + 4);
        v78 = LODWORD(v77) + 1;
        v101 = v77;
        if ( v76 )
        {
          if ( v75 < v78 )
          {
            v81 = 2 * v75;
            if ( v78 >= v81 )
              v81 = LODWORD(v77) + 1;
            sub_8A6E40((const void **)v74, v81, 0xC);
            v71 = v93;
            v77 = v101;
          }
          v82 = (_DWORD *)(*(_DWORD *)v74 + 0xC * LODWORD(v77));
          v83 = v100;
          *(_DWORD *)(v74 + 4) = v78;
          *v82 = 0;
          v82[1] = v71;
          v82[2] = v83;
        }
        else
        {
          if ( v75 < v78 )
          {
            v79 = 2 * v75;
            if ( v78 >= v79 )
              v79 = LODWORD(v77) + 1;
            sub_8A6E40((const void **)v74, v79, 0xC);
            v71 = v93;
            v77 = v101;
          }
          v80 = (int *)(*(_DWORD *)v74 + 0xC * LODWORD(v77));
          *(_DWORD *)(v74 + 4) = v78;
          *v80 = v96;
          v80[1] = v100;
          v80[2] = v71;
        }
        result = v90 + 1;
        v66 = v90 + 1 < *((_DWORD *)this + 0x21);
        v68 = v96;
        v100 = v71;
        ++v90;
      }
      while ( v66 );
    }
    v96 = ++v68;
  }
  while ( v68 < 2 );
  return result;
}
