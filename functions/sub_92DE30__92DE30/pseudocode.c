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

  result = a5;
  *(_BYTE *)a5 = 0;
  if ( *(_BYTE *)a4 )
  {
    v6 = a1;
    v7 = a1[2];
    v8 = a1[1];
    v9 = *a1;
    v10 = 0;
    v83 = v8;
    v87 = v9;
    if ( v7 > 0 )
    {
      do
        *(_WORD *)(a1[1] + 8 * v10++ + 6) = 0;
      while ( v10 < a1[2] );
    }
    v11 = a1[2];
    v12 = 0;
    v75 = 0.0;
    if ( v11 > 0 )
    {
      do
      {
        v13 = (unsigned __int16 *)(v6[1] + 8 * v12);
        if ( v13[3] != 1 )
        {
          v14 = v13[1];
          v13[3] = 1;
          *(_WORD *)(v8 + 8 * v14 + 6) = 1;
          v15 = *v13;
          LODWORD(v79) = *(unsigned __int16 *)(v8 + 8 * v14);
          v16 = (float *)(v9 + 0x10 * LODWORD(v79));
          v17 = (float *)(v9 + 0x10 * v15);
          v18 = *v16;
          v82 = v15;
          v73 = (float *)v15;
          v19 = v18 - *v17;
          v74 = (float *)LODWORD(v79);
          v86.m128_f32[0] = v19;
          v20 = 0;
          v21 = v16[1];
          v81 = 0.000001;
          v86.m128_f32[1] = v21 - v17[1];
          v86.m128_f32[2] = v16[2] - v17[2];
          v22 = v16[3] - v17[3];
          v70 = 0;
          v72 = 0x80000000;
          v71 = 0;
          v86.m128_f32[3] = v22;
          v23 = v86;
          v24 = _mm_mul_ps(v86, v86);
          v84 = _mm_shuffle_ps(v24, v24, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v24, v24, 0x55).m128_f32[0] + v24.m128_f32[0]);
          v80 = v84;
          if ( LODWORD(v79) != v15 && v17[3] == *(float *)&SrcStr && v16[3] == *(float *)&SrcStr )
          {
            v77 = a2;
            if ( (int)a2 < a3 + 1 )
            {
              v78 = 0x10 * (_DWORD)a2 + v9 + 0xC;
              do
              {
                if ( (float *)v82 != v77 && (float *)LODWORD(v79) != v77 && *(float *)v78 == *(float *)&SrcStr )
                {
                  v88.m128_f32[0] = *(float *)(v78 - 0xC) - *v17;
                  v88.m128_f32[1] = *(float *)(v78 - 8) - v17[1];
                  v88.m128_f32[2] = *(float *)(v78 - 4) - v17[2];
                  v88.m128_f32[3] = *(float *)v78 - v17[3];
                  v25 = _mm_mul_ps(v23, v88);
                  v26 = _mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0]);
                  v27 = _mm_sub_ps(
                          _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xC9), _mm_shuffle_ps(v88, v88, 0xD2)),
                          _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xD2), _mm_shuffle_ps(v88, v88, 0xC9)));
                  v28 = _mm_mul_ps(v27, v27);
                  v76 = v26;
                  v85 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]);
                  if ( v85 < (double)*(float *)(a4 + 8) )
                  {
                    if ( v76 >= (double)v81 )
                    {
                      if ( v76 <= (double)v80 )
                      {
                        if ( v20 == (v72 & 0x3FFFFFFF) )
                        {
                          sub_8A6EE0((const void **)&v70, 4);
                          v20 = v71;
                          v23 = v86;
                        }
                        v70->m128_i32[v20] = (__int32)v77;
                      }
                      else
                      {
                        if ( v20 == (v72 & 0x3FFFFFFF) )
                        {
                          sub_8A6EE0((const void **)&v70, 4);
                          v20 = v71;
                          v23 = v86;
                        }
                        v70->m128_i32[v20] = (__int32)v74;
                        v74 = v77;
                        v80 = v76;
                      }
                    }
                    else
                    {
                      if ( v20 == (v72 & 0x3FFFFFFF) )
                      {
                        sub_8A6EE0((const void **)&v70, 4);
                        v20 = v71;
                        v23 = v86;
                      }
                      v70->m128_i32[v20] = (__int32)v73;
                      v73 = v77;
                      v81 = v76;
                    }
                    v20 = ++v71;
                  }
                }
                v78 += 0x10;
                v77 = (float *)((char *)v77 + 1);
              }
              while ( (int)v77 < a3 + 1 );
            }
          }
          for ( i = 0; i < v20; ++i )
          {
            v30 = (float *)v70->m128_i32[i];
            if ( v30 != v73 && v30 != v74 )
            {
              *(_DWORD *)(0x10 * (_DWORD)v30 + v9 + 0xC) = 0x3F800000;
              *(_BYTE *)a5 = 1;
              v20 = v71;
            }
          }
          if ( v72 >= 0 )
            sub_8A75D0(
              *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
              v70,
              4 * v72,
              0x14);
          v6 = a1;
        }
        v31 = v6[2];
        v12 = ++LODWORD(v75);
      }
      while ( SLODWORD(v75) < v31 );
    }
    for ( j = 0; j < v6[2]; ++j )
      *(_WORD *)(v6[1] + 8 * j + 6) = 0;
    result = a2;
    if ( a3 - (int)a2 > 2 && v6[2] > 2 )
    {
      v74 = a2;
      LODWORD(v76) = a3 + 1;
      if ( (int)a2 < a3 + 1 )
      {
        result = (float *)(0x10 * (_DWORD)a2 + v9 + 0xC);
        v73 = result;
        do
        {
          if ( *result == *(float *)&SrcStr )
          {
            v33 = v6[2];
            v34 = 0.0;
            v35 = 0x80000000;
            v70 = 0;
            v71 = 0;
            v72 = 0x80000000;
            v75 = 0.0;
            if ( v33 > 0 )
            {
              do
              {
                v36 = v6[1];
                v37 = *(_WORD *)(v36 + 8 * LODWORD(v34) + 6) == 1;
                v38 = (unsigned __int16 *)(v36 + 8 * LODWORD(v34));
                if ( !v37 && (float *)*v38 == v74 )
                {
                  *(_WORD *)(v6[1] + 8 * LODWORD(v34) + 6) = 1;
                  v39 = *(unsigned __int16 *)(v6[1] + 8 * LODWORD(v34) + 2);
                  v85 = 3.0;
                  v40 = (unsigned __int16 *)(v8 + 8 * v39);
                  v90 = 0x40400000u;
                  v84 = 0.5;
                  v80 = *(float *)&v40;
                  v91 = (__m128)0x3F000000u;
                  do
                  {
                    *(_WORD *)(v8 + 8 * v40[2] + 6) = 1;
                    v41 = v40[2];
                    v42 = (float *)(v9 + 0x10 * *v40);
                    v43 = (float *)(v9 + 0x10 * *(unsigned __int16 *)(v8 + 8 * v41));
                    v44 = (float *)(v9 + 0x10 * *(unsigned __int16 *)(v8 + 8 * *(unsigned __int16 *)(v8 + 8 * v41 + 4)));
                    v45 = v71;
                    v46 = v71 + 1;
                    v86.m128_f32[0] = *v42 - *v43;
                    v86.m128_f32[1] = v42[1] - v43[1];
                    v86.m128_f32[2] = v42[2] - v43[2];
                    v86.m128_f32[3] = v42[3] - v43[3];
                    v88.m128_f32[0] = *v44 - *v43;
                    v88.m128_f32[1] = v44[1] - v43[1];
                    v88.m128_f32[2] = v44[2] - v43[2];
                    v88.m128_f32[3] = v44[3] - v43[3];
                    if ( (v72 & 0x3FFFFFFF) < v71 + 1 )
                    {
                      v47 = 2 * (v72 & 0x3FFFFFFF);
                      if ( v46 >= v47 )
                        v47 = v71 + 1;
                      sub_8A6E40((const void **)&v70, v47, 0x10);
                    }
                    v48 = v83;
                    v49 = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0xC9), _mm_shuffle_ps(v88, v88, 0xD2)),
                            _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0xD2), _mm_shuffle_ps(v88, v88, 0xC9)));
                    v50 = _mm_mul_ps(v49, v49);
                    v51 = _mm_shuffle_ps(v50, v50, 0x55).m128_f32[0] + v50.m128_f32[0];
                    v52 = _mm_shuffle_ps(v50, v50, 0xAA);
                    v52.m128_f32[0] = v52.m128_f32[0] + v51;
                    v89 = v52;
                    v89.m128_f32[0] = 1.0 / fsqrt(v52.m128_f32[0]);
                    v53 = *(float *)&v90 - (float)((float)(v52.m128_f32[0] * v89.m128_f32[0]) * v89.m128_f32[0]);
                    v54 = v91;
                    v54.m128_f32[0] = (float)(v91.m128_f32[0] * v89.m128_f32[0]) * v53;
                    v71 = v46;
                    v8 = v83;
                    v70[v45] = _mm_mul_ps(_mm_shuffle_ps(v54, v54, 0), v49);
                    v9 = v87;
                    v40 = (unsigned __int16 *)(v48 + 8 * *(unsigned __int16 *)(v48 + 8 * v40[2] + 2));
                  }
                  while ( v40 != (unsigned __int16 *)LODWORD(v80) );
                  v34 = v75;
                  v6 = a1;
                  v35 = v72;
                }
                v55 = v6[2];
                ++LODWORD(v34);
                v75 = v34;
              }
              while ( SLODWORD(v34) < v55 );
              v56 = v71;
              if ( v71 > 0 )
              {
                v57 = v70;
                v58 = 0;
                do
                {
                  v59 = *v57++;
                  --v56;
                  v58 = _mm_add_ps(v58, v59);
                }
                while ( v56 );
                v60 = _mm_mul_ps(v58, v58);
                v81 = _mm_shuffle_ps(v60, v60, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0]);
                if ( v81 > (double)*(float *)(a4 + 0xC) )
                {
                  v61 = _mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0];
                  v62 = _mm_shuffle_ps(v60, v60, 0xAA);
                  v63 = v62;
                  v63.m128_f32[0] = v62.m128_f32[0] + v61;
                  v89 = v63;
                  v89.m128_f32[0] = 1.0 / fsqrt(v62.m128_f32[0] + v61);
                  v82 = 0x40400000;
                  v78 = 0x3F000000;
                  v64 = (__m128)0x3F000000u;
                  v64.m128_f32[0] = (float)(0.5 * v89.m128_f32[0])
                                  * (float)(3.0
                                          - (float)((float)((float)(v62.m128_f32[0] + v61) * v89.m128_f32[0])
                                                  * v89.m128_f32[0]));
                  v65 = 0;
                  v66 = _mm_mul_ps(_mm_shuffle_ps(v64, v64, 0), v58);
                  v67 = v70;
                  v75 = fConstant_1 - *(float *)(a4 + 0xC);
                  do
                  {
                    v68 = _mm_mul_ps(*v67, v66);
                    v79 = _mm_shuffle_ps(v68, v68, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v68, v68, 0x55).m128_f32[0] + v68.m128_f32[0]);
                    if ( v79 < (double)v75 )
                    {
                      v35 = v72;
                      goto LABEL_66;
                    }
                    ++v65;
                    ++v67;
                  }
                  while ( v65 < v71 );
                  v35 = v72;
                  *v73 = 1.0;
                  *(_BYTE *)a5 = 1;
                }
              }
            }
LABEL_66:
            if ( v35 >= 0 )
              sub_8A75D0(
                *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
                v70,
                0x10 * v35,
                0x14);
          }
          result = v73 + 4;
          v69 = (int)v74 + 1 < SLODWORD(v76);
          v74 = (float *)((char *)v74 + 1);
          v73 += 4;
        }
        while ( v69 );
      }
    }
  }
  return result;
}
