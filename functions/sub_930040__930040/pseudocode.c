_BYTE *__cdecl sub_930040(_BYTE *a1, float *a2, int *a3, __m128 **a4, __m128 *a5, _BYTE *a6, const void **a7, int a8)
{
  int *v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  const void *v13; // esi
  int v14; // ebx
  float v15; // edx
  char *v16; // esi
  int v17; // eax
  int v18; // eax
  __m128 *v19; // esi
  int v20; // eax
  int v21; // ecx
  __int32 v22; // edx
  unsigned __int16 *v23; // edx
  float *v24; // ecx
  float v25; // ebx
  float v26; // ecx
  int v27; // ecx
  float *v28; // ecx
  float v29; // eax
  __m128 v30; // xmm0
  float v31; // xmm1_4
  __m128 v32; // xmm2
  __m128 v33; // xmm0
  float v34; // eax
  float v35; // ecx
  float v36; // xmm1_4
  float v37; // xmm5_4
  __m128 v38; // xmm0
  __m128 v39; // xmm0
  float v40; // xmm4_4
  __m128 v41; // xmm6
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  __m128 v44; // xmm1
  __m128 v45; // xmm0
  float v46; // xmm5_4
  int v47; // esi
  int v48; // eax
  int v49; // eax
  float v50; // xmm4_4
  __m128 v51; // xmm5
  __m128 v52; // xmm0
  __m128 v53; // xmm0
  __m128 v54; // xmm0
  __m128 v55; // xmm1
  __m128 v56; // xmm0
  int v57; // edi
  int v58; // eax
  int v59; // eax
  int v60; // eax
  __m128 *v61; // ecx
  int v62; // esi
  int v63; // eax
  float v64; // edx
  int v65; // edx
  int *v66; // edx
  int v67; // eax
  bool v68; // cc
  int v69; // eax
  __m128 v70; // xmm1
  __m128 v71; // xmm0
  __int16 *v72; // esi
  __int16 *v73; // ebx
  __int16 *v74; // eax
  double v75; // st7
  _BYTE *v76; // eax
  __int16 *v77; // edi
  int v78; // eax
  int v79; // esi
  __m128 v80; // xmm0
  __m128 v81; // xmm1
  __m128 v82; // xmm1
  __m128 v83; // xmm0
  float v84; // xmm2_4
  __m128 v85; // xmm3
  __m128 v86; // xmm0
  __m128 v87; // xmm0
  __m128 v88; // xmm0
  __m128 v89; // xmm0
  int v90; // eax
  float *v91; // ebx
  int v92; // edi
  __m128 v93; // xmm0
  __m128 v94; // xmm1
  int v95; // ecx
  int v96; // eax
  __m128 v97; // xmm0
  int i; // ecx
  __m128 v99; // xmm1
  long double v100; // st7
  int v101; // ebx
  int v102; // eax
  int v103; // eax
  char *v104; // eax
  __m128 v105; // xmm2
  __m128 v106; // xmm3
  __m128 v107; // xmm4
  __m128 v108; // xmm1
  float v109; // xmm5_4
  __m128 v110; // xmm6
  __m128 v111; // xmm1
  __m128 v112; // xmm1
  __m128 *v113; // eax
  __m128 v114; // xmm1
  __m128 v115; // xmm4
  __m128 v116; // xmm1
  __m128 v117; // xmm3
  __m128 v118; // xmm1
  __m128 *v119; // edx
  __m128 v120; // xmm6
  __m128 v121; // xmm1
  float v122; // xmm7_4
  __m128 v123; // xmm2
  __m128 v124; // xmm1
  __m128 v125; // xmm1
  __m128 v126; // xmm1
  char *v127; // ebx
  __m128 v128; // xmm1
  int v129; // ecx
  __m128 v130; // xmm1
  char *v131; // ebx
  __m128 v132; // xmm1
  int v133; // eax
  __m128 v134; // xmm1
  __m128 *v135; // eax
  __m128 v136; // xmm1
  __m128 v137; // xmm6
  __m128 v138; // xmm1
  __m128 v139; // xmm1
  __m128 v140; // xmm1
  __m128 v141; // xmm1
  int v142; // ecx
  char *v143; // edi
  __m128 v144; // xmm1
  __m128 v145; // xmm0
  __m128 v146; // xmm6
  __m128 v147; // xmm0
  __m128 *v148; // ecx
  __m128 v149; // xmm0
  __m128 v150; // xmm0
  int v151; // eax
  __m128 *v153; // [esp-10h] [ebp-120h]
  __m128 *v154; // [esp-Ch] [ebp-11Ch]
  int v155; // [esp+10h] [ebp-100h] BYREF
  int v156; // [esp+14h] [ebp-FCh]
  float v157; // [esp+18h] [ebp-F8h]
  int v158; // [esp+1Ch] [ebp-F4h]
  _OWORD v159[2]; // [esp+20h] [ebp-F0h] BYREF
  __m128 v160; // [esp+40h] [ebp-D0h] BYREF
  int v161; // [esp+58h] [ebp-B8h]
  int v162; // [esp+5Ch] [ebp-B4h]
  __m128 v163; // [esp+60h] [ebp-B0h]
  char v164; // [esp+7Ah] [ebp-96h] BYREF
  char v165; // [esp+7Bh] [ebp-95h] BYREF
  char v166; // [esp+7Ch] [ebp-94h] BYREF
  char v167; // [esp+7Dh] [ebp-93h] BYREF
  char v168; // [esp+7Eh] [ebp-92h] BYREF
  char v169; // [esp+7Fh] [ebp-91h] BYREF
  float v170; // [esp+80h] [ebp-90h]
  float v171; // [esp+84h] [ebp-8Ch]
  float v172; // [esp+88h] [ebp-88h]
  float v173; // [esp+8Ch] [ebp-84h]
  char v174; // [esp+9Bh] [ebp-75h] BYREF
  int v175; // [esp+9Ch] [ebp-74h]
  __m128 v176[2]; // [esp+A0h] [ebp-70h] BYREF
  float v177; // [esp+C0h] [ebp-50h]
  float v178; // [esp+C4h] [ebp-4Ch]
  float v179; // [esp+C8h] [ebp-48h]
  float v180; // [esp+CCh] [ebp-44h]
  const void *v181[2]; // [esp+D4h] [ebp-3Ch] BYREF
  int v182; // [esp+DCh] [ebp-34h]
  __m128 v183; // [esp+E0h] [ebp-30h]
  float v184; // [esp+F8h] [ebp-18h]
  float v185; // [esp+FCh] [ebp-14h]
  __m128 v186; // [esp+100h] [ebp-10h]

  v8 = a3;
  v9 = a3[1];
  v175 = *a3;
  v10 = a3[2];
  v156 = v9;
  v11 = 0;
  v158 = 0;
  if ( v10 > 0 )
  {
    do
    {
      v12 = v8[1];
      v13 = *(const void **)(v12 + 8 * v11);
      v14 = *(unsigned __int16 *)(v12 + 8 * v11 + 4);
      LODWORD(v15) = *(unsigned __int16 *)(v156 + 8 * v14 + 4);
      v181[0] = v13;
      v157 = v15;
      if ( v11 < v14 && v11 < SLODWORD(v15) )
      {
        v16 = (char *)a7[1];
        v17 = (unsigned int)a7[2] & 0x3FFFFFFF;
        if ( v17 < (int)(v16 + 1) )
        {
          v18 = 2 * v17;
          if ( (int)(v16 + 1) >= v18 )
            v18 = (int)(v16 + 1);
          sub_8A6E40(a7, v18, 0x10);
          v8 = a3;
        }
        a7[1] = v16 + 1;
        v19 = (__m128 *)((char *)*a7 + 0x10 * (_DWORD)v16);
        v20 = *v8;
        v21 = *v8 + 0x10 * LOWORD(v181[0]);
        v163.m128_u64[0] = *(_QWORD *)v21;
        v22 = *(_DWORD *)(v21 + 8);
        v163.m128_i32[3] = *(_DWORD *)(v21 + 0xC);
        v163.m128_i32[2] = v22;
        v23 = (unsigned __int16 *)(v156 + 8 * v14);
        v24 = (float *)(v20 + 0x10 * *v23);
        v170 = *v24;
        v171 = v24[1];
        v25 = v24[2];
        v26 = v24[3];
        v186.m128_f32[0] = v163.m128_f32[0] - v170;
        v173 = v26;
        v172 = v25;
        v186.m128_f32[1] = v163.m128_f32[1] - v171;
        LODWORD(v157) = v156 + 8 * LODWORD(v157);
        v27 = 0x10 * (unsigned __int16)*(_WORD *)LODWORD(v157);
        v186.m128_f32[2] = v163.m128_f32[2] - v25;
        v28 = (float *)(v20 + v27);
        v177 = *v28;
        v29 = v28[1];
        v162 = 0x40400000;
        v186.m128_f32[3] = v163.m128_f32[3] - v173;
        v30 = _mm_mul_ps(v186, v186);
        v31 = _mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0];
        v32 = _mm_shuffle_ps(v30, v30, 0xAA);
        v33 = v32;
        v33.m128_f32[0] = v32.m128_f32[0] + v31;
        v159[0] = v33;
        v178 = v29;
        v34 = v28[2];
        v35 = v28[3];
        v36 = 1.0 / fsqrt(v32.m128_f32[0] + v31);
        v161 = 0x3F000000;
        v37 = 3.0 - (float)((float)(v33.m128_f32[0] * v36) * v36);
        v155 = (int)v23;
        v179 = v34;
        v180 = v35;
        v38 = (__m128)0x3F000000u;
        v38.m128_f32[0] = (float)(0.5 * v36) * v37;
        v183.m128_f32[0] = v177 - v170;
        v186 = _mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), v186);
        v183.m128_f32[1] = v178 - v171;
        v183.m128_f32[2] = v34 - v25;
        v183.m128_f32[3] = v35 - v173;
        v39 = _mm_mul_ps(v183, v183);
        v40 = _mm_shuffle_ps(v39, v39, 0x55).m128_f32[0] + v39.m128_f32[0];
        v41 = _mm_shuffle_ps(v39, v39, 0xAA);
        v42 = v41;
        v42.m128_f32[0] = v41.m128_f32[0] + v40;
        v159[0] = v42;
        *(float *)v159 = 1.0 / fsqrt(v41.m128_f32[0] + v40);
        v43 = (__m128)0x3F000000u;
        v43.m128_f32[0] = (float)(0.5 * *(float *)v159)
                        * (float)(3.0
                                - (float)((float)((float)(v41.m128_f32[0] + v40) * *(float *)v159) * *(float *)v159));
        v183 = _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v183);
        v44 = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xC9), _mm_shuffle_ps(v183, v183, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xD2), _mm_shuffle_ps(v183, v183, 0xC9)));
        v45 = _mm_mul_ps(v44, v44);
        v46 = _mm_shuffle_ps(v45, v45, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]);
        v184 = v46;
        *v19 = v44;
        if ( v46 >= (double)a2[2] )
        {
          v50 = _mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0];
          v51 = _mm_shuffle_ps(v45, v45, 0xAA);
          v52 = v51;
          v52.m128_f32[0] = v51.m128_f32[0] + v50;
          v159[0] = v52;
          *(float *)v159 = 1.0 / fsqrt(v51.m128_f32[0] + v50);
          v53 = (__m128)0x3F000000u;
          v53.m128_f32[0] = (float)(0.5 * *(float *)v159)
                          * (float)(3.0
                                  - (float)((float)((float)(v51.m128_f32[0] + v50) * *(float *)v159) * *(float *)v159));
          v54 = _mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), v44);
          v55 = v163;
          *v19 = v54;
          v56 = _mm_mul_ps(v54, v55);
          v185 = _mm_shuffle_ps(v56, v56, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v56, v56, 0x55).m128_f32[0] + v56.m128_f32[0]);
          v19->m128_f32[3] = -v185;
          v57 = *(_DWORD *)(a8 + 4);
          v58 = *(_DWORD *)(a8 + 8);
          v176[0].m128_f32[0] = v170 - v163.m128_f32[0];
          v59 = v58 & 0x3FFFFFFF;
          v176[0].m128_f32[1] = v171 - v163.m128_f32[1];
          v176[0].m128_f32[2] = v172 - v163.m128_f32[2];
          v176[0].m128_f32[3] = v173 - v163.m128_f32[3];
          v176[0] = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), v176[0]);
          v160.m128_f32[0] = v177 - v163.m128_f32[0];
          v160.m128_f32[1] = v178 - v163.m128_f32[1];
          v160.m128_f32[2] = v179 - v163.m128_f32[2];
          v160.m128_f32[3] = v180 - v163.m128_f32[3];
          v160 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), v160);
          if ( v59 < v57 + 1 )
          {
            v60 = 2 * v59;
            if ( v57 + 1 >= v60 )
              v60 = v57 + 1;
            sub_8A6E40((const void **)a8, v60, 0x20);
            v23 = (unsigned __int16 *)v155;
          }
          *(_DWORD *)(a8 + 4) = v57 + 1;
          v61 = (__m128 *)(*(_DWORD *)a8 + 0x20 * v57);
          *v61 = *v19;
          v62 = a3[1];
          v63 = 8 * v158;
          v61[1].m128_f32[1] = *(float *)&v23;
          v64 = v157;
          v61[1].m128_i32[0] = v63 + v62;
          v61[1].m128_f32[2] = v64;
          sub_92DC50(v61);
        }
        else
        {
          v47 = (int)a7[1] + 0xFFFFFFFF;
          v48 = (unsigned int)a7[2] & 0x3FFFFFFF;
          if ( v48 < v47 )
          {
            v49 = 2 * v48;
            if ( v47 >= v49 )
              v49 = (int)a7[1] + 0xFFFFFFFF;
            sub_8A6E40(a7, v49, 0x10);
          }
          a7[1] = (const void *)v47;
        }
        v8 = a3;
        v11 = v158;
      }
      v65 = v8[2];
      v158 = ++v11;
    }
    while ( v11 < v65 );
  }
  v66 = (int *)a8;
  *a6 = 0;
  if ( *(int *)(a8 + 4) > 0 )
  {
    v67 = 1;
    v158 = 0;
    LODWORD(v157) = 1;
    do
    {
      v68 = v67 < v66[1];
      v162 = v67;
      if ( v68 )
      {
        v161 = v158 + 0x20;
        do
        {
          v69 = *v66;
          qmemcpy(v176, (const void *)(*v66 + v158), sizeof(v176));
          qmemcpy(v159, (const void *)(v69 + v161), sizeof(v159));
          v160.m128_f32[0] = *(float *)v159 + v176[0].m128_f32[0];
          v160.m128_f32[1] = *((float *)v159 + 1) + v176[0].m128_f32[1];
          v160.m128_f32[2] = *((float *)v159 + 2) + v176[0].m128_f32[2];
          v160.m128_f32[3] = *((float *)v159 + 3) + v176[0].m128_f32[3];
          v70 = _mm_mul_ps(v160, v160);
          v71 = _mm_add_ps(_mm_shuffle_ps(v70, v70, 0x4E), v70);
          *(float *)&v155 = v71.m128_f32[0] + _mm_shuffle_ps(v71, v71, 0xB1).m128_f32[0];
          if ( *(float *)&v155 < (double)a2[6] )
          {
            v72 = (__int16 *)v176[1].m128_i32[1];
            v73 = (__int16 *)v176[1].m128_i32[0];
            v176[0].m128_f32[0] = -*(float *)v159;
            v74 = (__int16 *)v159[1];
            v176[0].m128_f32[1] = -*((float *)v159 + 1);
            v75 = *((float *)v159 + 2);
            *a6 = 1;
            v176[0].m128_f32[2] = -v75;
            v76 = sub_92C790(&v164, v156, v73, v74, v72, (__int16 *)DWORD1(v159[1]));
            v77 = (__int16 *)v176[1].m128_i32[2];
            if ( *v76 || *sub_92C790(&v174, v156, v73, (__int16 *)v159[1], v72, (__int16 *)DWORD2(v159[1])) )
            {
              *a6 = 1;
              sub_92E640(
                v176,
                (__m128 *)(v175 + 0x10 * (unsigned __int16)*v73),
                (float *)(v175 + 0x10 * (unsigned __int16)*v72),
                (float *)(v175 + 0x10 * (unsigned __int16)*v77),
                a7);
            }
            if ( *sub_92C790(&v165, v156, v73, (__int16 *)v159[1], v77, (__int16 *)DWORD1(v159[1]))
              || *sub_92C790(&v169, v156, v73, (__int16 *)v159[1], v77, (__int16 *)DWORD2(v159[1])) )
            {
              v78 = v175;
              *a6 = 1;
              sub_92E640(
                v176,
                (__m128 *)(v78 + 0x10 * (unsigned __int16)*v73),
                (float *)(v78 + 0x10 * (unsigned __int16)*v77),
                (float *)(v78 + 0x10 * (unsigned __int16)*v72),
                a7);
            }
            if ( *sub_92C790(&v168, v156, v72, (__int16 *)v159[1], v77, (__int16 *)DWORD1(v159[1]))
              || *sub_92C790(&v166, v156, v72, (__int16 *)v159[1], v77, (__int16 *)DWORD2(v159[1]))
              || *sub_92C790(&v167, v156, v72, (__int16 *)DWORD1(v159[1]), v77, (__int16 *)DWORD2(v159[1])) )
            {
              *a6 = 1;
              sub_92E640(
                v176,
                (__m128 *)(v175 + 0x10 * (unsigned __int16)*v72),
                (float *)(v175 + 0x10 * (unsigned __int16)*v77),
                (float *)(v175 + 0x10 * (unsigned __int16)*v73),
                a7);
            }
            v66 = (int *)a8;
          }
          v68 = ++v162 < v66[1];
          v161 += 0x20;
        }
        while ( v68 );
        *(float *)&v67 = v157;
      }
      v79 = v66[1];
      ++v67;
      v157 = *(float *)&v67;
      v158 += 0x20;
    }
    while ( v67 - 1 < v79 );
    if ( *a6 )
    {
      v80 = _mm_sub_ps(**a4, (*a4)[1]);
      v81 = _mm_sub_ps(**a4, (*a4)[2]);
      v82 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v80, v80, 0xC9), _mm_shuffle_ps(v81, v81, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v80, v80, 0xD2), _mm_shuffle_ps(v81, v81, 0xC9)));
      v83 = _mm_mul_ps(v82, v82);
      v84 = _mm_shuffle_ps(v83, v83, 0x55).m128_f32[0] + v83.m128_f32[0];
      v85 = _mm_shuffle_ps(v83, v83, 0xAA);
      v86 = v85;
      v86.m128_f32[0] = v85.m128_f32[0] + v84;
      v159[0] = v86;
      *(float *)v159 = 1.0 / fsqrt(v85.m128_f32[0] + v84);
      *(float *)&v155 = 0.5;
      v87 = (__m128)0x3F000000u;
      v87.m128_f32[0] = (float)(0.5 * *(float *)v159)
                      * (float)(3.0 - (float)((float)((float)(v85.m128_f32[0] + v84) * *(float *)v159) * *(float *)v159));
      *a5 = v82;
      v88 = _mm_mul_ps(_mm_shuffle_ps(v87, v87, 0), v82);
      *a5 = v88;
      v89 = _mm_mul_ps(v88, **a4);
      *(float *)&v155 = _mm_shuffle_ps(v89, v89, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v89, v89, 0x55).m128_f32[0] + v89.m128_f32[0]);
      a5->m128_f32[3] = -*(float *)&v155;
    }
  }
  v90 = (int)a7[1];
  if ( v90 > 1 )
    sub_92B640((int)*a7, 0, v90 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0);
  v91 = a2;
  sub_92DCA0(a2[4], (int)a7, &v155);
  v92 = (int)a7[1];
  if ( v92 < 2 )
  {
    if ( a3[2] == 1 )
    {
      v93 = *(__m128 *)(0x10 * *(unsigned __int16 *)a3[1] + *a3);
      v160.m128_u64[0] = 0x3F800000;
      v160.m128_u64[1] = 0;
      v94 = _mm_add_ps(v93, (__m128)0x3F800000uLL);
      v176[0] = v93;
      v183 = v94;
    }
    else
    {
      v95 = *a3;
      v93 = *(__m128 *)(0x10 * *(unsigned __int16 *)a3[1] + *a3);
      v96 = *(unsigned __int16 *)(a3[1] + 8 * *(unsigned __int16 *)(a3[1] + 2));
      v176[0] = v93;
      v183 = *(__m128 *)(0x10 * v96 + v95);
      v94 = v183;
    }
    v97 = _mm_sub_ps(v93, v94);
    v159[0] = v97;
    v157 = 3.4028235e38;
    for ( i = 0; i < 3; ++i )
    {
      memset(&v160, 0, sizeof(v160));
      v160.m128_i32[i] = 0x3F800000;
      v99 = _mm_mul_ps(v97, v160);
      *(float *)&v155 = _mm_shuffle_ps(v99, v99, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v99, v99, 0x55).m128_f32[0] + v99.m128_f32[0]);
      v100 = fabs(*(float *)&v155);
      if ( v100 < v157 )
      {
        v157 = v100;
        v186 = v160;
      }
    }
    v101 = v92 + 6;
    v102 = (unsigned int)a7[2] & 0x3FFFFFFF;
    if ( v102 < v92 + 6 )
    {
      v103 = 2 * v102;
      if ( v101 >= v103 )
        v103 = v92 + 6;
      sub_8A6E40(a7, v103, 0x10);
      v97 = (__m128)v159[0];
    }
    v104 = (char *)*a7;
    v105 = _mm_shuffle_ps(v97, v97, 0xD2);
    v106 = _mm_shuffle_ps(v97, v97, 0xC9);
    v107 = _mm_sub_ps(
             _mm_mul_ps(v106, _mm_shuffle_ps(v186, v186, 0xD2)),
             _mm_mul_ps(v105, _mm_shuffle_ps(v186, v186, 0xC9)));
    v108 = _mm_mul_ps(v107, v107);
    v109 = _mm_shuffle_ps(v108, v108, 0x55).m128_f32[0] + v108.m128_f32[0];
    v110 = _mm_shuffle_ps(v108, v108, 0xAA);
    v111 = v110;
    v111.m128_f32[0] = v110.m128_f32[0] + v109;
    v159[0] = v111;
    *(float *)v159 = 1.0 / fsqrt(v110.m128_f32[0] + v109);
    v160 = (__m128)0x3F000000u;
    v112 = (__m128)0x3F000000u;
    v112.m128_f32[0] = (float)(0.5 * *(float *)v159)
                     * (float)(3.0 - (float)((float)((float)(v110.m128_f32[0] + v109) * *(float *)v159) * *(float *)v159));
    a7[1] = (const void *)v101;
    v113 = (__m128 *)&v104[0x10 * v92];
    *v113 = v107;
    v114 = _mm_mul_ps(_mm_shuffle_ps(v112, v112, 0), v107);
    v115 = v176[0];
    *v113 = v114;
    v116 = _mm_mul_ps(v114, v115);
    *(float *)&v155 = _mm_shuffle_ps(v116, v116, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v116, v116, 0x55).m128_f32[0] + v116.m128_f32[0]);
    v113->m128_f32[3] = -*(float *)&v155;
    v117 = _mm_sub_ps(
             _mm_mul_ps(v106, _mm_shuffle_ps(*v113, *v113, 0xD2)),
             _mm_mul_ps(v105, _mm_shuffle_ps(*v113, *v113, 0xC9)));
    v118 = _mm_mul_ps(v117, v117);
    v119 = (__m128 *)((char *)*a7 + 0x10 * v92 + 0x10);
    *v119 = v117;
    v105.m128_f32[0] = _mm_shuffle_ps(v118, v118, 0x55).m128_f32[0] + v118.m128_f32[0];
    v120 = _mm_shuffle_ps(v118, v118, 0xAA);
    v121 = v120;
    v121.m128_f32[0] = v120.m128_f32[0] + v105.m128_f32[0];
    v159[0] = v121;
    *(float *)v159 = 1.0 / fsqrt(v120.m128_f32[0] + v105.m128_f32[0]);
    v122 = 3.0 - (float)((float)((float)(v120.m128_f32[0] + v105.m128_f32[0]) * *(float *)v159) * *(float *)v159);
    v123 = v160;
    v124 = v160;
    v124.m128_f32[0] = (float)(v160.m128_f32[0] * *(float *)v159) * v122;
    v125 = _mm_mul_ps(_mm_shuffle_ps(v124, v124, 0), v117);
    *v119 = v125;
    v126 = _mm_mul_ps(v125, v115);
    *(float *)&v155 = _mm_shuffle_ps(v126, v126, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v126, v126, 0x55).m128_f32[0] + v126.m128_f32[0]);
    v119->m128_f32[3] = -*(float *)&v155;
    v127 = (char *)*a7;
    v128 = _mm_xor_ps(*v113, (__m128)xmmword_A965C0);
    v129 = 0x10 * (v92 + 2);
    *(__m128 *)&v127[v129] = v128;
    v130 = _mm_mul_ps(v128, v115);
    *(float *)&v155 = _mm_shuffle_ps(v130, v130, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v130, v130, 0x55).m128_f32[0] + v130.m128_f32[0]);
    *(float *)&v127[v129 + 0xC] = -*(float *)&v155;
    v131 = (char *)*a7;
    v132 = _mm_xor_ps(*v119, (__m128)xmmword_A965C0);
    v133 = 0x10 * (v92 + 3);
    *(__m128 *)&v131[v133] = v132;
    v134 = _mm_mul_ps(v132, v115);
    *(float *)&v155 = _mm_shuffle_ps(v134, v134, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v134, v134, 0x55).m128_f32[0] + v134.m128_f32[0]);
    *(float *)&v131[v133 + 0xC] = -*(float *)&v155;
    v135 = (__m128 *)((char *)*a7 + 0x10 * v92 + 0x40);
    v136 = _mm_mul_ps(v97, v97);
    *v135 = v97;
    v117.m128_f32[0] = _mm_shuffle_ps(v136, v136, 0x55).m128_f32[0] + v136.m128_f32[0];
    v137 = _mm_shuffle_ps(v136, v136, 0xAA);
    v138 = v137;
    v138.m128_f32[0] = v137.m128_f32[0] + v117.m128_f32[0];
    v159[0] = v138;
    *(float *)v159 = 1.0 / fsqrt(v137.m128_f32[0] + v117.m128_f32[0]);
    v139 = v123;
    v139.m128_f32[0] = (float)(v123.m128_f32[0] * *(float *)v159)
                     * (float)(3.0
                             - (float)((float)((float)(v137.m128_f32[0] + v117.m128_f32[0]) * *(float *)v159)
                                     * *(float *)v159));
    v140 = _mm_mul_ps(_mm_shuffle_ps(v139, v139, 0), v97);
    *v135 = v140;
    v141 = _mm_mul_ps(v140, v115);
    *(float *)&v155 = _mm_shuffle_ps(v141, v141, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v141, v141, 0x55).m128_f32[0] + v141.m128_f32[0]);
    v142 = v92 + 5;
    v135->m128_f32[3] = -*(float *)&v155;
    v143 = (char *)*a7;
    v144 = _mm_xor_ps(*v135, (__m128)xmmword_A965C0);
    v145 = _mm_mul_ps(v144, v144);
    v117.m128_f32[0] = _mm_shuffle_ps(v145, v145, 0x55).m128_f32[0] + v145.m128_f32[0];
    v146 = _mm_shuffle_ps(v145, v145, 0xAA);
    v147 = v146;
    v147.m128_f32[0] = v146.m128_f32[0] + v117.m128_f32[0];
    v159[0] = v147;
    *(float *)v159 = 1.0 / fsqrt(v146.m128_f32[0] + v117.m128_f32[0]);
    v148 = (__m128 *)&v143[0x10 * v142];
    v123.m128_f32[0] = (float)(v123.m128_f32[0] * *(float *)v159)
                     * (float)(3.0
                             - (float)((float)((float)(v146.m128_f32[0] + v117.m128_f32[0]) * *(float *)v159)
                                     * *(float *)v159));
    *v148 = v144;
    v149 = _mm_mul_ps(_mm_shuffle_ps(v123, v123, 0), v144);
    *v148 = v149;
    if ( a3[2] == 1 )
      v150 = _mm_mul_ps(v149, v115);
    else
      v150 = _mm_mul_ps(v149, v183);
    *(float *)&v155 = _mm_shuffle_ps(v150, v150, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v150, v150, 0x55).m128_f32[0] + v150.m128_f32[0]);
    v91 = a2;
    v148->m128_f32[3] = -*(float *)&v155;
  }
  if ( *a6 )
  {
    if ( *((_BYTE *)v91 + 2) )
    {
      a7[1] = 0;
      v154 = a4[1];
      v153 = *a4;
      v181[0] = 0;
      v181[1] = 0;
      v182 = 0x80000000;
      sub_92F270(a5, v153, (signed int)v154, v181, (__m128 **)a7);
      if ( v182 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          (_DWORD *)v181[0],
          0x10 * v182,
          0x14);
    }
  }
  v151 = (int)a7[1];
  if ( v151 > 1 )
    sub_92B640((int)*a7, 0, v151 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0);
  sub_92DCA0(v91[4], (int)a7, &v155);
  *a1 = 1;
  return a1;
}
