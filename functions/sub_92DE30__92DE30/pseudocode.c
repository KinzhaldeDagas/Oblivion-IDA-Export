float *__cdecl sub_92DE30(int *a1, float *a2, int a3, int a4, float *a5)
{
  float *result; // eax
  int *v6; // esi
  int v7; // edx
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  unsigned __int16 *v13; // eax
  int v14; // ecx
  int v15; // eax
  float *v16; // ecx
  float *v17; // esi
  double v18; // st7
  double v19; // st7
  int v20; // edx
  double v21; // st7
  double v22; // st7
  __m128 v23; // xmm1
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  float v26; // xmm4_4
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  int i; // ecx
  float *v30; // eax
  int v31; // ecx
  int j; // eax
  int v33; // ecx
  float v34; // eax
  int v35; // edx
  int v36; // ecx
  bool v37; // zf
  unsigned __int16 *v38; // ecx
  int v39; // edx
  unsigned __int16 *v40; // esi
  int v41; // edx
  float *v42; // ecx
  float *v43; // eax
  float *v44; // edx
  int v45; // edi
  int v46; // ebx
  int v47; // eax
  int v48; // eax
  __m128 v49; // xmm1
  __m128 v50; // xmm0
  float v51; // xmm2_4
  __m128 v52; // xmm0
  float v53; // xmm3_4
  __m128 v54; // xmm0
  int v55; // ecx
  int v56; // ecx
  __m128 *v57; // eax
  __m128 v58; // xmm2
  __m128 v59; // xmm0
  __m128 v60; // xmm0
  float v61; // xmm1_4
  __m128 v62; // xmm3
  __m128 v63; // xmm0
  __m128 v64; // xmm0
  int v65; // ecx
  __m128 v66; // xmm1
  __m128 *v67; // edx
  __m128 v68; // xmm0
  bool v69; // cc
  __m128 *v70; // [esp+10h] [ebp-A0h] BYREF
  int v71; // [esp+14h] [ebp-9Ch]
  int v72; // [esp+18h] [ebp-98h]
  float *v73; // [esp+1Ch] [ebp-94h]
  float *v74; // [esp+20h] [ebp-90h]
  float v75; // [esp+24h] [ebp-8Ch]
  float v76; // [esp+28h] [ebp-88h]
  float *v77; // [esp+2Ch] [ebp-84h]
  int v78; // [esp+30h] [ebp-80h]
  float v79; // [esp+34h] [ebp-7Ch]
  float v80; // [esp+38h] [ebp-78h]
  float v81; // [esp+3Ch] [ebp-74h]
  int v82; // [esp+40h] [ebp-70h]
  int v83; // [esp+44h] [ebp-6Ch]
  float v84; // [esp+48h] [ebp-68h]
  float v85; // [esp+4Ch] [ebp-64h]
  __m128 v86; // [esp+50h] [ebp-60h]
  int v87; // [esp+6Ch] [ebp-44h]
  __m128 v88; // [esp+70h] [ebp-40h]
  __m128 v89; // [esp+80h] [ebp-30h]
  __int128 v90; // [esp+90h] [ebp-20h]
  __m128 v91; // [esp+A0h] [ebp-10h]

  result = a5; /*0x92de3c*/
  *(_BYTE *)a5 = 0; /*0x92de43*/
  if ( *(_BYTE *)a4 ) /*0x92de46*/
  {
    v6 = a1; /*0x92de51*/
    v7 = a1[2]; /*0x92de54*/
    v8 = a1[1]; /*0x92de57*/
    v9 = *a1; /*0x92de5a*/
    v10 = 0; /*0x92de5e*/
    v83 = v8; /*0x92de62*/
    v87 = v9; /*0x92de66*/
    if ( v7 > 0 ) /*0x92de6a*/
    {
      do /*0x92de7e*/
        *(_WORD *)(a1[1] + 8 * v10++ + 6) = 0; /*0x92de73*/
      while ( v10 < a1[2] ); /*0x92de7e*/
    }
    v11 = a1[2]; /*0x92de80*/
    v12 = 0; /*0x92de83*/
    v75 = 0.0; /*0x92de87*/
    if ( v11 > 0 ) /*0x92de8b*/
    {
      do /*0x92e201*/
      {
        v13 = (unsigned __int16 *)(v6[1] + 8 * v12); /*0x92de94*/
        if ( v13[3] != 1 ) /*0x92dea0*/
        {
          v14 = v13[1]; /*0x92dea6*/
          v13[3] = 1; /*0x92deaa*/
          *(_WORD *)(v8 + 8 * v14 + 6) = 1; /*0x92deae*/
          v15 = *v13; /*0x92deb3*/
          LODWORD(v79) = *(unsigned __int16 *)(v8 + 8 * v14); /*0x92debc*/
          v16 = (float *)(v9 + 0x10 * LODWORD(v79)); /*0x92dec5*/
          v17 = (float *)(v9 + 0x10 * v15); /*0x92deca*/
          v18 = *v16; /*0x92decc*/
          v82 = v15; /*0x92dece*/
          v73 = (float *)v15; /*0x92ded2*/
          v19 = v18 - *v17; /*0x92ded6*/
          v74 = (float *)LODWORD(v79); /*0x92dedc*/
          v86.m128_f32[0] = v19; /*0x92dee4*/
          v20 = 0; /*0x92dee8*/
          v21 = v16[1]; /*0x92deea*/
          v81 = 0.000001; /*0x92deed*/
          v86.m128_f32[1] = v21 - v17[1]; /*0x92def8*/
          v86.m128_f32[2] = v16[2] - v17[2]; /*0x92df02*/
          v22 = v16[3] - v17[3]; /*0x92df09*/
          v70 = 0; /*0x92df0c*/
          v72 = 0x80000000; /*0x92df14*/
          v71 = 0; /*0x92df1c*/
          v86.m128_f32[3] = v22; /*0x92df20*/
          v23 = v86; /*0x92df24*/
          v24 = _mm_mul_ps(v86, v86); /*0x92df2c*/
          v84 = _mm_shuffle_ps(v24, v24, 0xAA).m128_f32[0] /*0x92df45*/
              + (float)(_mm_shuffle_ps(v24, v24, 0x55).m128_f32[0] + v24.m128_f32[0]);
          v80 = v84; /*0x92df4d*/
          if ( LODWORD(v79) != v15 && v17[3] == *(float *)&SrcStr && v16[3] == *(float *)&SrcStr ) /*0x92df85*/
          {
            v77 = a2; /*0x92df94*/
            if ( (int)a2 < a3 + 1 ) /*0x92df98*/
            {
              v78 = 0x10 * (_DWORD)a2 + v9 + 0xC; /*0x92dfa5*/
              do /*0x92e17f*/
              {
                if ( (float *)v82 != v77 && (float *)LODWORD(v79) != v77 && *(float *)v78 == *(float *)&SrcStr ) /*0x92dfdb*/
                {
                  v88.m128_f32[0] = *(float *)(v78 - 0xC) - *v17; /*0x92dfed*/
                  v88.m128_f32[1] = *(float *)(v78 - 8) - v17[1]; /*0x92dff7*/
                  v88.m128_f32[2] = *(float *)(v78 - 4) - v17[2]; /*0x92e001*/
                  v88.m128_f32[3] = *(float *)v78 - v17[3]; /*0x92e00e*/
                  v25 = _mm_mul_ps(v23, v88); /*0x92e017*/
                  v26 = _mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0] /*0x92e02c*/
                      + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0]);
                  v27 = _mm_sub_ps( /*0x92e055*/
                          _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xC9), _mm_shuffle_ps(v88, v88, 0xD2)),
                          _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xD2), _mm_shuffle_ps(v88, v88, 0xC9)));
                  v28 = _mm_mul_ps(v27, v27); /*0x92e058*/
                  v76 = v26; /*0x92e06d*/
                  v85 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0] /*0x92e078*/
                      + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]);
                  if ( v85 < (double)*(float *)(a4 + 8) ) /*0x92e088*/
                  {
                    if ( v76 >= (double)v81 ) /*0x92e09b*/
                    {
                      if ( v76 <= (double)v80 ) /*0x92e0f0*/
                      {
                        if ( v20 == (v72 & 0x3FFFFFFF) ) /*0x92e137*/
                        {
                          sub_8A6EE0((const void **)&v70, 4); /*0x92e140*/
                          v20 = v71; /*0x92e145*/
                          v23 = v86; /*0x92e149*/
                        }
                        v70->m128_i32[v20] = (__int32)v77; /*0x92e159*/
                      }
                      else
                      {
                        if ( v20 == (v72 & 0x3FFFFFFF) ) /*0x92e0f9*/
                        {
                          sub_8A6EE0((const void **)&v70, 4); /*0x92e102*/
                          v20 = v71; /*0x92e107*/
                          v23 = v86; /*0x92e10b*/
                        }
                        v70->m128_i32[v20] = (__int32)v74; /*0x92e11b*/
                        v74 = v77; /*0x92e126*/
                        v80 = v76; /*0x92e12a*/
                      }
                    }
                    else
                    {
                      if ( v20 == (v72 & 0x3FFFFFFF) ) /*0x92e0a8*/
                      {
                        sub_8A6EE0((const void **)&v70, 4); /*0x92e0b1*/
                        v20 = v71; /*0x92e0b6*/
                        v23 = v86; /*0x92e0ba*/
                      }
                      v70->m128_i32[v20] = (__int32)v73; /*0x92e0ca*/
                      v73 = v77; /*0x92e0d5*/
                      v81 = v76; /*0x92e0d9*/
                    }
                    v20 = ++v71; /*0x92e160*/
                  }
                }
                v78 += 0x10; /*0x92e170*/
                v77 = (float *)((char *)v77 + 1); /*0x92e17b*/
              }
              while ( (int)v77 < a3 + 1 ); /*0x92e17f*/
            }
          }
          for ( i = 0; i < v20; ++i ) /*0x92e189*/
          {
            v30 = (float *)v70->m128_i32[i]; /*0x92e194*/
            if ( v30 != v73 && v30 != v74 ) /*0x92e1a1*/
            {
              *(_DWORD *)(0x10 * (_DWORD)v30 + v9 + 0xC) = 0x3F800000; /*0x92e1a9*/
              *(_BYTE *)a5 = 1; /*0x92e1b1*/
              v20 = v71; /*0x92e1b4*/
            }
          }
          if ( v72 >= 0 ) /*0x92e1c3*/
            sub_8A75D0( /*0x92e1eb*/
              *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
              v70,
              4 * v72,
              0x14);
          v6 = a1; /*0x92e1f0*/
        }
        v31 = v6[2]; /*0x92e1f7*/
        v12 = ++LODWORD(v75); /*0x92e1fa*/
      }
      while ( SLODWORD(v75) < v31 ); /*0x92e201*/
    }
    for ( j = 0; j < v6[2]; ++j ) /*0x92e210*/
      *(_WORD *)(v6[1] + 8 * j + 6) = 0; /*0x92e215*/
    result = a2; /*0x92e225*/
    if ( a3 - (int)a2 > 2 && v6[2] > 2 ) /*0x92e239*/
    {
      v74 = a2; /*0x92e242*/
      LODWORD(v76) = a3 + 1; /*0x92e246*/
      if ( (int)a2 < a3 + 1 ) /*0x92e24a*/
      {
        result = (float *)(0x10 * (_DWORD)a2 + v9 + 0xC); /*0x92e253*/
        v73 = result; /*0x92e257*/
        do /*0x92e632*/
        {
          if ( *result == *(float *)&SrcStr ) /*0x92e26f*/
          {
            v33 = v6[2]; /*0x92e275*/
            v34 = 0.0; /*0x92e278*/
            v35 = 0x80000000; /*0x92e27c*/
            v70 = 0; /*0x92e281*/
            v71 = 0; /*0x92e285*/
            v72 = 0x80000000; /*0x92e289*/
            v75 = 0.0; /*0x92e28d*/
            if ( v33 > 0 ) /*0x92e291*/
            {
              do /*0x92e49e*/
              {
                v36 = v6[1]; /*0x92e2a0*/
                v37 = *(_WORD *)(v36 + 8 * LODWORD(v34) + 6) == 1; /*0x92e2a3*/
                v38 = (unsigned __int16 *)(v36 + 8 * LODWORD(v34)); /*0x92e2a9*/
                if ( !v37 && (float *)*v38 == v74 ) /*0x92e2b9*/
                {
                  *(_WORD *)(v6[1] + 8 * LODWORD(v34) + 6) = 1; /*0x92e2c2*/
                  v39 = *(unsigned __int16 *)(v6[1] + 8 * LODWORD(v34) + 2); /*0x92e2cc*/
                  v85 = 3.0; /*0x92e2d1*/
                  v40 = (unsigned __int16 *)(v8 + 8 * v39); /*0x92e2df*/
                  v90 = 0x40400000u; /*0x92e2e2*/
                  v84 = 0.5; /*0x92e2ea*/
                  v80 = *(float *)&v40; /*0x92e2f8*/
                  v91 = (__m128)0x3F000000u; /*0x92e2fc*/
                  do /*0x92e483*/
                  {
                    *(_WORD *)(v8 + 8 * v40[2] + 6) = 1; /*0x92e314*/
                    v41 = v40[2]; /*0x92e31b*/
                    v42 = (float *)(v9 + 0x10 * *v40); /*0x92e334*/
                    v43 = (float *)(v9 + 0x10 * *(unsigned __int16 *)(v8 + 8 * v41)); /*0x92e339*/
                    v44 = (float *)(v9 + 0x10 * *(unsigned __int16 *)(v8 + 8 * *(unsigned __int16 *)(v8 + 8 * v41 + 4))); /*0x92e340*/
                    v45 = v71; /*0x92e344*/
                    v46 = v71 + 1; /*0x92e348*/
                    v86.m128_f32[0] = *v42 - *v43; /*0x92e34b*/
                    v86.m128_f32[1] = v42[1] - v43[1]; /*0x92e355*/
                    v86.m128_f32[2] = v42[2] - v43[2]; /*0x92e35f*/
                    v86.m128_f32[3] = v42[3] - v43[3]; /*0x92e369*/
                    v88.m128_f32[0] = *v44 - *v43; /*0x92e371*/
                    v88.m128_f32[1] = v44[1] - v43[1]; /*0x92e37b*/
                    v88.m128_f32[2] = v44[2] - v43[2]; /*0x92e385*/
                    v88.m128_f32[3] = v44[3] - v43[3]; /*0x92e39a*/
                    if ( (v72 & 0x3FFFFFFF) < v71 + 1 ) /*0x92e39e*/
                    {
                      v47 = 2 * (v72 & 0x3FFFFFFF); /*0x92e3a0*/
                      if ( v46 >= v47 ) /*0x92e3a4*/
                        v47 = v71 + 1; /*0x92e3a6*/
                      sub_8A6E40((const void **)&v70, v47, 0x10); /*0x92e3b0*/
                    }
                    v48 = v83; /*0x92e3e1*/
                    v49 = _mm_sub_ps( /*0x92e3f2*/
                            _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0xC9), _mm_shuffle_ps(v88, v88, 0xD2)),
                            _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0xD2), _mm_shuffle_ps(v88, v88, 0xC9)));
                    v50 = _mm_mul_ps(v49, v49); /*0x92e3f8*/
                    v51 = _mm_shuffle_ps(v50, v50, 0x55).m128_f32[0] + v50.m128_f32[0]; /*0x92e402*/
                    v52 = _mm_shuffle_ps(v50, v50, 0xAA); /*0x92e40d*/
                    v52.m128_f32[0] = v52.m128_f32[0] + v51; /*0x92e418*/
                    v89 = v52; /*0x92e41c*/
                    v89.m128_f32[0] = 1.0 / fsqrt(v52.m128_f32[0]); /*0x92e428*/
                    v53 = *(float *)&v90 - (float)((float)(v52.m128_f32[0] * v89.m128_f32[0]) * v89.m128_f32[0]); /*0x92e441*/
                    v54 = v91; /*0x92e445*/
                    v54.m128_f32[0] = (float)(v91.m128_f32[0] * v89.m128_f32[0]) * v53; /*0x92e456*/
                    v71 = v46; /*0x92e45a*/
                    v8 = v83; /*0x92e45e*/
                    v70[v45] = _mm_mul_ps(_mm_shuffle_ps(v54, v54, 0), v49); /*0x92e46c*/
                    v9 = v87; /*0x92e478*/
                    v40 = (unsigned __int16 *)(v48 + 8 * *(unsigned __int16 *)(v48 + 8 * v40[2] + 2)); /*0x92e47c*/
                  }
                  while ( v40 != (unsigned __int16 *)LODWORD(v80) ); /*0x92e483*/
                  v34 = v75; /*0x92e489*/
                  v6 = a1; /*0x92e48d*/
                  v35 = v72; /*0x92e490*/
                }
                v55 = v6[2]; /*0x92e494*/
                ++LODWORD(v34); /*0x92e497*/
                v75 = v34; /*0x92e49a*/
              }
              while ( SLODWORD(v34) < v55 ); /*0x92e49e*/
              v56 = v71; /*0x92e4a4*/
              if ( v71 > 0 ) /*0x92e4aa*/
              {
                v57 = v70; /*0x92e4b0*/
                v58 = 0; /*0x92e4b4*/
                do /*0x92e4c1*/
                {
                  v59 = *v57++; /*0x92e4b7*/
                  --v56; /*0x92e4bd*/
                  v58 = _mm_add_ps(v58, v59); /*0x92e4be*/
                }
                while ( v56 ); /*0x92e4c1*/
                v60 = _mm_mul_ps(v58, v58); /*0x92e4c9*/
                v81 = _mm_shuffle_ps(v60, v60, 0xAA).m128_f32[0] /*0x92e4e6*/
                    + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0]);
                if ( v81 > (double)*(float *)(a4 + 0xC) ) /*0x92e4f6*/
                {
                  v61 = _mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0]; /*0x92e507*/
                  v62 = _mm_shuffle_ps(v60, v60, 0xAA); /*0x92e50e*/
                  v63 = v62; /*0x92e512*/
                  v63.m128_f32[0] = v62.m128_f32[0] + v61; /*0x92e515*/
                  v89 = v63; /*0x92e519*/
                  v89.m128_f32[0] = 1.0 / fsqrt(v62.m128_f32[0] + v61); /*0x92e525*/
                  v82 = 0x40400000; /*0x92e53e*/
                  v78 = 0x3F000000; /*0x92e550*/
                  v64 = (__m128)0x3F000000u; /*0x92e558*/
                  v64.m128_f32[0] = (float)(0.5 * v89.m128_f32[0]) /*0x92e562*/
                                  * (float)(3.0
                                          - (float)((float)((float)(v62.m128_f32[0] + v61) * v89.m128_f32[0])
                                                  * v89.m128_f32[0]));
                  v65 = 0; /*0x92e569*/
                  v66 = _mm_mul_ps(_mm_shuffle_ps(v64, v64, 0), v58); /*0x92e571*/
                  v67 = v70; /*0x92e582*/
                  v75 = fConstant_1 - *(float *)(a4 + 0xC); /*0x92e586*/
                  do /*0x92e5cd*/
                  {
                    v68 = _mm_mul_ps(*v67, v66); /*0x92e593*/
                    v79 = _mm_shuffle_ps(v68, v68, 0xAA).m128_f32[0] /*0x92e5b0*/
                        + (float)(_mm_shuffle_ps(v68, v68, 0x55).m128_f32[0] + v68.m128_f32[0]);
                    if ( v79 < (double)v75 ) /*0x92e5c1*/
                    {
                      v35 = v72; /*0x92e5e5*/
                      goto LABEL_66; /*0x92e5e5*/
                    }
                    ++v65; /*0x92e5c7*/
                    ++v67; /*0x92e5c8*/
                  }
                  while ( v65 < v71 ); /*0x92e5cd*/
                  v35 = v72; /*0x92e5cf*/
                  *v73 = 1.0; /*0x92e5da*/
                  *(_BYTE *)a5 = 1; /*0x92e5e0*/
                }
              }
            }
LABEL_66:
            if ( v35 >= 0 ) /*0x92e5eb*/
              sub_8A75D0( /*0x92e613*/
                *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
                v70,
                0x10 * v35,
                0x14);
          }
          result = v73 + 4; /*0x92e625*/
          v69 = (int)v74 + 1 < SLODWORD(v76); /*0x92e628*/
          v74 = (float *)((char *)v74 + 1); /*0x92e62a*/
          v73 += 4; /*0x92e62e*/
        }
        while ( v69 ); /*0x92e632*/
      }
    }
  }
  return result; /*0x92e638*/
}
