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
  const void *v16; // esi
  signed int v17; // eax
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
  char *v47; // esi
  signed int v48; // eax
  char *v49; // eax
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
  const void *v101; // ebx
  signed int v102; // eax
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

  v8 = a3; /*0x93004c*/
  v9 = a3[1]; /*0x930051*/
  v175 = *a3; /*0x930055*/
  v10 = a3[2]; /*0x93005c*/
  v156 = v9; /*0x93005f*/
  v11 = 0; /*0x930063*/
  v158 = 0; /*0x930069*/
  if ( v10 > 0 ) /*0x93006d*/
  {
    do /*0x930548*/
    {
      v12 = v8[1]; /*0x930073*/
      v13 = *(const void **)(v12 + 8 * v11); /*0x930076*/
      v14 = *(unsigned __int16 *)(v12 + 8 * v11 + 4); /*0x930079*/
      LODWORD(v15) = *(unsigned __int16 *)(v156 + 8 * v14 + 4); /*0x930084*/
      v181[0] = v13; /*0x930089*/
      v157 = v15; /*0x930090*/
      if ( v11 < v14 && v11 < SLODWORD(v15) ) /*0x93009c*/
      {
        v16 = a7[1]; /*0x9300a5*/
        v17 = (unsigned int)a7[2] & 0x3FFFFFFF; /*0x9300ae*/
        if ( v17 < (int)v16 + 1 ) /*0x9300b5*/
        {
          v18 = 2 * v17; /*0x9300b7*/
          if ( (int)v16 + 1 >= v18 ) /*0x9300bb*/
            v18 = (int)v16 + 1; /*0x9300bd*/
          sub_8A6E40(a7, v18, 0x10); /*0x9300c3*/
          v8 = a3; /*0x9300c8*/
        }
        a7[1] = (char *)v16 + 1; /*0x9300d1*/
        v19 = (__m128 *)((char *)*a7 + 0x10 * (_DWORD)v16); /*0x9300d9*/
        v20 = *v8; /*0x9300db*/
        v21 = *v8 + 0x10 * LOWORD(v181[0]); /*0x9300e8*/
        v163.m128_u64[0] = *(_QWORD *)v21; /*0x9300ec*/
        v22 = *(_DWORD *)(v21 + 8); /*0x9300fb*/
        v163.m128_i32[3] = *(_DWORD *)(v21 + 0xC); /*0x930101*/
        v163.m128_i32[2] = v22; /*0x930105*/
        v23 = (unsigned __int16 *)(v156 + 8 * v14); /*0x930114*/
        v24 = (float *)(v20 + 0x10 * *v23); /*0x930117*/
        v170 = *v24; /*0x93011b*/
        v171 = v24[1]; /*0x93012c*/
        v25 = v24[2]; /*0x930133*/
        v26 = v24[3]; /*0x930136*/
        v186.m128_f32[0] = v163.m128_f32[0] - v170; /*0x930139*/
        v173 = v26; /*0x930140*/
        v172 = v25; /*0x930156*/
        v186.m128_f32[1] = v163.m128_f32[1] - v171; /*0x930164*/
        LODWORD(v157) = v156 + 8 * LODWORD(v157); /*0x93016b*/
        v27 = 0x10 * (unsigned __int16)*(_WORD *)LODWORD(v157); /*0x93017d*/
        v186.m128_f32[2] = v163.m128_f32[2] - v25; /*0x930180*/
        v28 = (float *)(v20 + v27); /*0x930187*/
        v177 = *v28; /*0x930196*/
        v29 = v28[1]; /*0x93019d*/
        v162 = 0x40400000; /*0x9301a0*/
        v186.m128_f32[3] = v163.m128_f32[3] - v173; /*0x9301ae*/
        v30 = _mm_mul_ps(v186, v186); /*0x9301c0*/
        v31 = _mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]; /*0x9301ca*/
        v32 = _mm_shuffle_ps(v30, v30, 0xAA); /*0x9301d1*/
        v33 = v32; /*0x9301d5*/
        v33.m128_f32[0] = v32.m128_f32[0] + v31; /*0x9301d8*/
        v159[0] = v33; /*0x9301dc*/
        v178 = v29; /*0x9301e5*/
        v34 = v28[2]; /*0x9301ec*/
        v35 = v28[3]; /*0x9301ef*/
        v36 = 1.0 / fsqrt(v32.m128_f32[0] + v31); /*0x9301f8*/
        v161 = 0x3F000000; /*0x930201*/
        v37 = 3.0 - (float)((float)(v33.m128_f32[0] * v36) * v36); /*0x930216*/
        v155 = (int)v23; /*0x93021a*/
        v179 = v34; /*0x93021e*/
        v180 = v35; /*0x930225*/
        v38 = (__m128)0x3F000000u; /*0x93022c*/
        v38.m128_f32[0] = (float)(0.5 * v36) * v37; /*0x930241*/
        v183.m128_f32[0] = v177 - v170; /*0x93024c*/
        v186 = _mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), v186); /*0x930267*/
        v183.m128_f32[1] = v178 - v171; /*0x930276*/
        v183.m128_f32[2] = v34 - v25; /*0x93028b*/
        v183.m128_f32[3] = v35 - v173; /*0x9302a0*/
        v39 = _mm_mul_ps(v183, v183); /*0x9302b2*/
        v40 = _mm_shuffle_ps(v39, v39, 0x55).m128_f32[0] + v39.m128_f32[0]; /*0x9302bc*/
        v41 = _mm_shuffle_ps(v39, v39, 0xAA); /*0x9302c3*/
        v42 = v41; /*0x9302c7*/
        v42.m128_f32[0] = v41.m128_f32[0] + v40; /*0x9302ca*/
        v159[0] = v42; /*0x9302ce*/
        *(float *)v159 = 1.0 / fsqrt(v41.m128_f32[0] + v40); /*0x9302d7*/
        v43 = (__m128)0x3F000000u; /*0x9302f1*/
        v43.m128_f32[0] = (float)(0.5 * *(float *)v159) /*0x9302f8*/
                        * (float)(3.0
                                - (float)((float)((float)(v41.m128_f32[0] + v40) * *(float *)v159) * *(float *)v159));
        v183 = _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v183); /*0x930321*/
        v44 = _mm_sub_ps( /*0x930336*/
                _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xC9), _mm_shuffle_ps(v183, v183, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xD2), _mm_shuffle_ps(v183, v183, 0xC9)));
        v45 = _mm_mul_ps(v44, v44); /*0x93033c*/
        v46 = _mm_shuffle_ps(v45, v45, 0xAA).m128_f32[0] /*0x930351*/
            + (float)(_mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]);
        v184 = v46; /*0x930355*/
        *v19 = v44; /*0x930360*/
        if ( v46 >= (double)a2[2] ) /*0x93036b*/
        {
          v50 = _mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]; /*0x9303a0*/
          v51 = _mm_shuffle_ps(v45, v45, 0xAA); /*0x9303a7*/
          v52 = v51; /*0x9303ab*/
          v52.m128_f32[0] = v51.m128_f32[0] + v50; /*0x9303ae*/
          v159[0] = v52; /*0x9303b2*/
          *(float *)v159 = 1.0 / fsqrt(v51.m128_f32[0] + v50); /*0x9303bb*/
          v53 = (__m128)0x3F000000u; /*0x9303d2*/
          v53.m128_f32[0] = (float)(0.5 * *(float *)v159) /*0x9303d9*/
                          * (float)(3.0
                                  - (float)((float)((float)(v51.m128_f32[0] + v50) * *(float *)v159) * *(float *)v159));
          v54 = _mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), v44); /*0x9303e7*/
          v55 = v163; /*0x9303ea*/
          *v19 = v54; /*0x9303ef*/
          v56 = _mm_mul_ps(v54, v55); /*0x9303f2*/
          v185 = _mm_shuffle_ps(v56, v56, 0xAA).m128_f32[0] /*0x930412*/
               + (float)(_mm_shuffle_ps(v56, v56, 0x55).m128_f32[0] + v56.m128_f32[0]);
          v19->m128_f32[3] = -v185; /*0x930422*/
          v57 = *(_DWORD *)(a8 + 4); /*0x930425*/
          v58 = *(_DWORD *)(a8 + 8); /*0x93042f*/
          v176[0].m128_f32[0] = v170 - v163.m128_f32[0]; /*0x930440*/
          v59 = v58 & 0x3FFFFFFF; /*0x930447*/
          v176[0].m128_f32[1] = v171 - v163.m128_f32[1]; /*0x930459*/
          v176[0].m128_f32[2] = v172 - v163.m128_f32[2]; /*0x93046b*/
          v176[0].m128_f32[3] = v173 - v163.m128_f32[3]; /*0x93047d*/
          v176[0] = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), v176[0]); /*0x93049a*/
          v160.m128_f32[0] = v177 - v163.m128_f32[0]; /*0x9304a9*/
          v160.m128_f32[1] = v178 - v163.m128_f32[1]; /*0x9304b8*/
          v160.m128_f32[2] = v179 - v163.m128_f32[2]; /*0x9304c7*/
          v160.m128_f32[3] = v180 - v163.m128_f32[3]; /*0x9304d6*/
          v160 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), v160); /*0x9304e2*/
          if ( v59 < v57 + 1 ) /*0x9304e7*/
          {
            v60 = 2 * v59; /*0x9304e9*/
            if ( v57 + 1 >= v60 ) /*0x9304ed*/
              v60 = v57 + 1; /*0x9304ef*/
            sub_8A6E40((const void **)a8, v60, 0x20); /*0x9304f5*/
            v23 = (unsigned __int16 *)v155; /*0x9304fa*/
          }
          *(_DWORD *)(a8 + 4) = v57 + 1; /*0x930504*/
          v61 = (__m128 *)(*(_DWORD *)a8 + 0x20 * v57); /*0x930514*/
          *v61 = *v19; /*0x930516*/
          v62 = a3[1]; /*0x930519*/
          v63 = 8 * v158; /*0x930520*/
          v61[1].m128_f32[1] = *(float *)&v23; /*0x930523*/
          v64 = v157; /*0x930526*/
          v61[1].m128_i32[0] = v63 + v62; /*0x93052c*/
          v61[1].m128_f32[2] = v64; /*0x93052f*/
          sub_92DC50(v61); /*0x930532*/
        }
        else
        {
          v47 = (char *)a7[1] + 0xFFFFFFFF; /*0x930373*/
          v48 = (unsigned int)a7[2] & 0x3FFFFFFF; /*0x930374*/
          if ( v48 < (int)v47 ) /*0x93037b*/
          {
            v49 = (char *)(2 * v48); /*0x93037d*/
            if ( (int)v47 >= (int)v49 ) /*0x930381*/
              v49 = (char *)a7[1] + 0xFFFFFFFF; /*0x930383*/
            sub_8A6E40(a7, (int)v49, 0x10); /*0x930389*/
          }
          a7[1] = v47; /*0x930391*/
        }
        v8 = a3; /*0x930537*/
        v11 = v158; /*0x93053a*/
      }
      v65 = v8[2]; /*0x93053e*/
      v158 = ++v11; /*0x930544*/
    }
    while ( v11 < v65 ); /*0x930548*/
  }
  v66 = (int *)a8; /*0x930551*/
  *a6 = 0; /*0x930554*/
  if ( *(int *)(a8 + 4) > 0 ) /*0x93055c*/
  {
    v67 = 1; /*0x930562*/
    v158 = 0; /*0x930567*/
    LODWORD(v157) = 1; /*0x93056f*/
    do /*0x9308ce*/
    {
      v68 = v67 < v66[1]; /*0x930573*/
      v162 = v67; /*0x930576*/
      if ( v68 ) /*0x93057a*/
      {
        v161 = v158 + 0x20; /*0x930587*/
        do /*0x9308ac*/
        {
          v69 = *v66; /*0x930590*/
          qmemcpy(v176, (const void *)(*v66 + v158), sizeof(v176)); /*0x9305a5*/
          qmemcpy(v159, (const void *)(v69 + v161), sizeof(v159)); /*0x9305b7*/
          v160.m128_f32[0] = *(float *)v159 + v176[0].m128_f32[0]; /*0x9305c4*/
          v160.m128_f32[1] = *((float *)v159 + 1) + v176[0].m128_f32[1]; /*0x9305d3*/
          v160.m128_f32[2] = *((float *)v159 + 2) + v176[0].m128_f32[2]; /*0x9305e9*/
          v160.m128_f32[3] = *((float *)v159 + 3) + v176[0].m128_f32[3]; /*0x9305f8*/
          v70 = _mm_mul_ps(v160, v160); /*0x930601*/
          v71 = _mm_add_ps(_mm_shuffle_ps(v70, v70, 0x4E), v70); /*0x93060b*/
          *(float *)&v155 = v71.m128_f32[0] + _mm_shuffle_ps(v71, v71, 0xB1).m128_f32[0]; /*0x930618*/
          if ( *(float *)&v155 < (double)a2[6] ) /*0x930628*/
          {
            v72 = (__int16 *)v176[1].m128_i32[1]; /*0x930635*/
            v73 = (__int16 *)v176[1].m128_i32[0]; /*0x93063e*/
            v176[0].m128_f32[0] = -*(float *)v159; /*0x930645*/
            v74 = (__int16 *)v159[1]; /*0x930657*/
            v176[0].m128_f32[1] = -*((float *)v159 + 1); /*0x93065b*/
            v75 = *((float *)v159 + 2); /*0x930662*/
            *a6 = 1; /*0x930666*/
            v176[0].m128_f32[2] = -v75; /*0x930676*/
            v76 = sub_92C790(&v164, v156, v73, v74, v72, (__int16 *)DWORD1(v159[1])); /*0x93068f*/
            v77 = (__int16 *)v176[1].m128_i32[2]; /*0x930696*/
            if ( *v76 || *sub_92C790(&v174, v156, v73, (__int16 *)v159[1], v72, (__int16 *)DWORD2(v159[1])) ) /*0x9306cf*/
            {
              *a6 = 1; /*0x9306de*/
              sub_92E640( /*0x93070c*/
                v176,
                (__m128 *)(v175 + 0x10 * (unsigned __int16)*v73),
                (float *)(v175 + 0x10 * (unsigned __int16)*v72),
                (float *)(v175 + 0x10 * (unsigned __int16)*v77),
                a7);
            }
            if ( *sub_92C790(&v165, v156, v73, (__int16 *)v159[1], v77, (__int16 *)DWORD1(v159[1])) /*0x930773*/
              || *sub_92C790(&v169, v156, v73, (__int16 *)v159[1], v77, (__int16 *)DWORD2(v159[1])) )
            {
              v78 = v175; /*0x93077f*/
              *a6 = 1; /*0x930789*/
              sub_92E640( /*0x9307b0*/
                v176,
                (__m128 *)(v78 + 0x10 * (unsigned __int16)*v73),
                (float *)(v78 + 0x10 * (unsigned __int16)*v77),
                (float *)(v78 + 0x10 * (unsigned __int16)*v72),
                a7);
            }
            if ( *sub_92C790(&v168, v156, v72, (__int16 *)v159[1], v77, (__int16 *)DWORD1(v159[1])) /*0x93084b*/
              || *sub_92C790(&v166, v156, v72, (__int16 *)v159[1], v77, (__int16 *)DWORD2(v159[1]))
              || *sub_92C790(&v167, v156, v72, (__int16 *)DWORD1(v159[1]), v77, (__int16 *)DWORD2(v159[1])) )
            {
              *a6 = 1; /*0x93085a*/
              sub_92E640( /*0x930888*/
                v176,
                (__m128 *)(v175 + 0x10 * (unsigned __int16)*v72),
                (float *)(v175 + 0x10 * (unsigned __int16)*v77),
                (float *)(v175 + 0x10 * (unsigned __int16)*v73),
                a7);
            }
            v66 = (int *)a8; /*0x930890*/
          }
          v68 = ++v162 < v66[1]; /*0x9308a2*/
          v161 += 0x20; /*0x9308a8*/
        }
        while ( v68 ); /*0x9308ac*/
        *(float *)&v67 = v157; /*0x9308b2*/
      }
      v79 = v66[1]; /*0x9308ba*/
      ++v67; /*0x9308bd*/
      v157 = *(float *)&v67; /*0x9308c6*/
      v158 += 0x20; /*0x9308ca*/
    }
    while ( v67 - 1 < v79 ); /*0x9308ce*/
    if ( *a6 ) /*0x9308d7*/
    {
      v80 = _mm_sub_ps(**a4, (*a4)[1]); /*0x9308ef*/
      v81 = _mm_sub_ps(**a4, (*a4)[2]); /*0x9308f6*/
      v82 = _mm_sub_ps( /*0x93091e*/
              _mm_mul_ps(_mm_shuffle_ps(v80, v80, 0xC9), _mm_shuffle_ps(v81, v81, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v80, v80, 0xD2), _mm_shuffle_ps(v81, v81, 0xC9)));
      v83 = _mm_mul_ps(v82, v82); /*0x930924*/
      v84 = _mm_shuffle_ps(v83, v83, 0x55).m128_f32[0] + v83.m128_f32[0]; /*0x93092e*/
      v85 = _mm_shuffle_ps(v83, v83, 0xAA); /*0x930935*/
      v86 = v85; /*0x930939*/
      v86.m128_f32[0] = v85.m128_f32[0] + v84; /*0x93093c*/
      v159[0] = v86; /*0x930940*/
      *(float *)v159 = 1.0 / fsqrt(v85.m128_f32[0] + v84); /*0x930949*/
      *(float *)&v155 = 0.5; /*0x93096e*/
      v87 = (__m128)0x3F000000u; /*0x930976*/
      v87.m128_f32[0] = (float)(0.5 * *(float *)v159) /*0x930980*/
                      * (float)(3.0 - (float)((float)((float)(v85.m128_f32[0] + v84) * *(float *)v159) * *(float *)v159));
      *a5 = v82; /*0x930984*/
      v88 = _mm_mul_ps(_mm_shuffle_ps(v87, v87, 0), v82); /*0x930991*/
      *a5 = v88; /*0x930994*/
      v89 = _mm_mul_ps(v88, **a4); /*0x93099c*/
      *(float *)&v155 = _mm_shuffle_ps(v89, v89, 0xAA).m128_f32[0] /*0x9309b9*/
                      + (float)(_mm_shuffle_ps(v89, v89, 0x55).m128_f32[0] + v89.m128_f32[0]);
      a5->m128_f32[3] = -*(float *)&v155; /*0x9309c3*/
    }
  }
  v90 = (int)a7[1]; /*0x9309c9*/
  if ( v90 > 1 ) /*0x9309cf*/
    sub_92B640((int)*a7, 0, v90 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0); /*0x9309dd*/
  v91 = a2; /*0x9309e5*/
  sub_92DCA0(a2[4], (int)a7, &v155); /*0x9309f2*/
  v92 = (int)a7[1]; /*0x9309f7*/
  if ( v92 < 2 ) /*0x930a00*/
  {
    if ( a3[2] == 1 ) /*0x930a0d*/
    {
      v93 = *(__m128 *)(0x10 * *(unsigned __int16 *)a3[1] + *a3); /*0x930a1a*/
      v160.m128_u64[0] = 0x3F800000; /*0x930a20*/
      v160.m128_u64[1] = 0; /*0x930a30*/
      v94 = _mm_add_ps(v93, (__m128)0x3F800000uLL); /*0x930a48*/
      v176[0] = v93; /*0x930a4b*/
      v183 = v94; /*0x930a53*/
    }
    else
    {
      v95 = *a3; /*0x930a63*/
      v93 = *(__m128 *)(0x10 * *(unsigned __int16 *)a3[1] + *a3); /*0x930a6b*/
      v96 = *(unsigned __int16 *)(a3[1] + 8 * *(unsigned __int16 *)(a3[1] + 2)); /*0x930a73*/
      v176[0] = v93; /*0x930a77*/
      v183 = *(__m128 *)(0x10 * v96 + v95); /*0x930a86*/
      v94 = v183; /*0x930a8e*/
    }
    v97 = _mm_sub_ps(v93, v94); /*0x930a9e*/
    v159[0] = v97; /*0x930aa1*/
    v157 = 3.4028235e38; /*0x930aa6*/
    for ( i = 0; i < 3; ++i ) /*0x930aae*/
    {
      memset(&v160, 0, sizeof(v160)); /*0x930ac0*/
      v160.m128_i32[i] = 0x3F800000; /*0x930ae0*/
      v99 = _mm_mul_ps(v97, v160); /*0x930aec*/
      *(float *)&v155 = _mm_shuffle_ps(v99, v99, 0xAA).m128_f32[0] /*0x930b09*/
                      + (float)(_mm_shuffle_ps(v99, v99, 0x55).m128_f32[0] + v99.m128_f32[0]);
      v100 = fabs(*(float *)&v155); /*0x930b11*/
      if ( v100 < v157 ) /*0x930b1c*/
      {
        v157 = v100; /*0x930b1e*/
        v186 = v160; /*0x930b22*/
      }
    }
    v101 = (const void *)(v92 + 6); /*0x930b37*/
    v102 = (unsigned int)a7[2] & 0x3FFFFFFF; /*0x930b3a*/
    if ( v102 < v92 + 6 ) /*0x930b41*/
    {
      v103 = 2 * v102; /*0x930b43*/
      if ( (int)v101 >= v103 ) /*0x930b47*/
        v103 = v92 + 6; /*0x930b49*/
      sub_8A6E40(a7, v103, 0x10); /*0x930b4f*/
      v97 = (__m128)v159[0]; /*0x930b54*/
    }
    v104 = (char *)*a7; /*0x930b6b*/
    v105 = _mm_shuffle_ps(v97, v97, 0xD2); /*0x930b70*/
    v106 = _mm_shuffle_ps(v97, v97, 0xC9); /*0x930b84*/
    v107 = _mm_sub_ps( /*0x930b91*/
             _mm_mul_ps(v106, _mm_shuffle_ps(v186, v186, 0xD2)),
             _mm_mul_ps(v105, _mm_shuffle_ps(v186, v186, 0xC9)));
    v108 = _mm_mul_ps(v107, v107); /*0x930b97*/
    v109 = _mm_shuffle_ps(v108, v108, 0x55).m128_f32[0] + v108.m128_f32[0]; /*0x930ba1*/
    v110 = _mm_shuffle_ps(v108, v108, 0xAA); /*0x930ba8*/
    v111 = v110; /*0x930bac*/
    v111.m128_f32[0] = v110.m128_f32[0] + v109; /*0x930baf*/
    v159[0] = v111; /*0x930bb3*/
    *(float *)v159 = 1.0 / fsqrt(v110.m128_f32[0] + v109); /*0x930bc4*/
    v160 = (__m128)0x3F000000u; /*0x930beb*/
    v112 = (__m128)0x3F000000u; /*0x930bf7*/
    v112.m128_f32[0] = (float)(0.5 * *(float *)v159) /*0x930c00*/
                     * (float)(3.0 - (float)((float)((float)(v110.m128_f32[0] + v109) * *(float *)v159) * *(float *)v159));
    a7[1] = v101; /*0x930c10*/
    v113 = (__m128 *)&v104[0x10 * v92]; /*0x930c16*/
    *v113 = v107; /*0x930c18*/
    v114 = _mm_mul_ps(_mm_shuffle_ps(v112, v112, 0), v107); /*0x930c1b*/
    v115 = v176[0]; /*0x930c1e*/
    *v113 = v114; /*0x930c26*/
    v116 = _mm_mul_ps(v114, v115); /*0x930c29*/
    *(float *)&v155 = _mm_shuffle_ps(v116, v116, 0xAA).m128_f32[0] /*0x930c46*/
                    + (float)(_mm_shuffle_ps(v116, v116, 0x55).m128_f32[0] + v116.m128_f32[0]);
    v113->m128_f32[3] = -*(float *)&v155; /*0x930c50*/
    v117 = _mm_sub_ps( /*0x930c6c*/
             _mm_mul_ps(v106, _mm_shuffle_ps(*v113, *v113, 0xD2)),
             _mm_mul_ps(v105, _mm_shuffle_ps(*v113, *v113, 0xC9)));
    v118 = _mm_mul_ps(v117, v117); /*0x930c72*/
    v119 = (__m128 *)((char *)*a7 + 0x10 * v92 + 0x10); /*0x930c75*/
    *v119 = v117; /*0x930c80*/
    v105.m128_f32[0] = _mm_shuffle_ps(v118, v118, 0x55).m128_f32[0] + v118.m128_f32[0]; /*0x930c83*/
    v120 = _mm_shuffle_ps(v118, v118, 0xAA); /*0x930c8a*/
    v121 = v120; /*0x930c8e*/
    v121.m128_f32[0] = v120.m128_f32[0] + v105.m128_f32[0]; /*0x930c91*/
    v159[0] = v121; /*0x930c95*/
    *(float *)v159 = 1.0 / fsqrt(v120.m128_f32[0] + v105.m128_f32[0]); /*0x930c9e*/
    v122 = 3.0 - (float)((float)((float)(v120.m128_f32[0] + v105.m128_f32[0]) * *(float *)v159) * *(float *)v159); /*0x930cb8*/
    v123 = v160; /*0x930cbb*/
    v124 = v160; /*0x930cc0*/
    v124.m128_f32[0] = (float)(v160.m128_f32[0] * *(float *)v159) * v122; /*0x930cc7*/
    v125 = _mm_mul_ps(_mm_shuffle_ps(v124, v124, 0), v117); /*0x930cd5*/
    *v119 = v125; /*0x930cd8*/
    v126 = _mm_mul_ps(v125, v115); /*0x930cdb*/
    *(float *)&v155 = _mm_shuffle_ps(v126, v126, 0xAA).m128_f32[0] /*0x930cf8*/
                    + (float)(_mm_shuffle_ps(v126, v126, 0x55).m128_f32[0] + v126.m128_f32[0]);
    v119->m128_f32[3] = -*(float *)&v155; /*0x930d05*/
    v127 = (char *)*a7; /*0x930d0b*/
    v128 = _mm_xor_ps(*v113, (__m128)xmmword_A965C0); /*0x930d14*/
    v129 = 0x10 * (v92 + 2); /*0x930d17*/
    *(__m128 *)&v127[v129] = v128; /*0x930d1a*/
    v130 = _mm_mul_ps(v128, v115); /*0x930d1e*/
    *(float *)&v155 = _mm_shuffle_ps(v130, v130, 0xAA).m128_f32[0] /*0x930d3d*/
                    + (float)(_mm_shuffle_ps(v130, v130, 0x55).m128_f32[0] + v130.m128_f32[0]);
    *(float *)&v127[v129 + 0xC] = -*(float *)&v155; /*0x930d4a*/
    v131 = (char *)*a7; /*0x930d4d*/
    v132 = _mm_xor_ps(*v119, (__m128)xmmword_A965C0); /*0x930d59*/
    v133 = 0x10 * (v92 + 3); /*0x930d5c*/
    *(__m128 *)&v131[v133] = v132; /*0x930d5f*/
    v134 = _mm_mul_ps(v132, v115); /*0x930d65*/
    *(float *)&v155 = _mm_shuffle_ps(v134, v134, 0xAA).m128_f32[0] /*0x930d82*/
                    + (float)(_mm_shuffle_ps(v134, v134, 0x55).m128_f32[0] + v134.m128_f32[0]);
    *(float *)&v131[v133 + 0xC] = -*(float *)&v155; /*0x930d8f*/
    v135 = (__m128 *)((char *)*a7 + 0x10 * v92 + 0x40); /*0x930d9a*/
    v136 = _mm_mul_ps(v97, v97); /*0x930d9c*/
    *v135 = v97; /*0x930d9f*/
    v117.m128_f32[0] = _mm_shuffle_ps(v136, v136, 0x55).m128_f32[0] + v136.m128_f32[0]; /*0x930da9*/
    v137 = _mm_shuffle_ps(v136, v136, 0xAA); /*0x930db0*/
    v138 = v137; /*0x930db4*/
    v138.m128_f32[0] = v137.m128_f32[0] + v117.m128_f32[0]; /*0x930db7*/
    v159[0] = v138; /*0x930dbb*/
    *(float *)v159 = 1.0 / fsqrt(v137.m128_f32[0] + v117.m128_f32[0]); /*0x930dc4*/
    v139 = v123; /*0x930dde*/
    v139.m128_f32[0] = (float)(v123.m128_f32[0] * *(float *)v159) /*0x930de5*/
                     * (float)(3.0
                             - (float)((float)((float)(v137.m128_f32[0] + v117.m128_f32[0]) * *(float *)v159)
                                     * *(float *)v159));
    v140 = _mm_mul_ps(_mm_shuffle_ps(v139, v139, 0), v97); /*0x930df3*/
    *v135 = v140; /*0x930df6*/
    v141 = _mm_mul_ps(v140, v115); /*0x930df9*/
    *(float *)&v155 = _mm_shuffle_ps(v141, v141, 0xAA).m128_f32[0] /*0x930e16*/
                    + (float)(_mm_shuffle_ps(v141, v141, 0x55).m128_f32[0] + v141.m128_f32[0]);
    v142 = v92 + 5; /*0x930e20*/
    v135->m128_f32[3] = -*(float *)&v155; /*0x930e23*/
    v143 = (char *)*a7; /*0x930e30*/
    v144 = _mm_xor_ps(*v135, (__m128)xmmword_A965C0); /*0x930e35*/
    v145 = _mm_mul_ps(v144, v144); /*0x930e3b*/
    v117.m128_f32[0] = _mm_shuffle_ps(v145, v145, 0x55).m128_f32[0] + v145.m128_f32[0]; /*0x930e45*/
    v146 = _mm_shuffle_ps(v145, v145, 0xAA); /*0x930e4c*/
    v147 = v146; /*0x930e50*/
    v147.m128_f32[0] = v146.m128_f32[0] + v117.m128_f32[0]; /*0x930e53*/
    v159[0] = v147; /*0x930e57*/
    *(float *)v159 = 1.0 / fsqrt(v146.m128_f32[0] + v117.m128_f32[0]); /*0x930e60*/
    v148 = (__m128 *)&v143[0x10 * v142]; /*0x930e7a*/
    v123.m128_f32[0] = (float)(v123.m128_f32[0] * *(float *)v159) /*0x930e80*/
                     * (float)(3.0
                             - (float)((float)((float)(v146.m128_f32[0] + v117.m128_f32[0]) * *(float *)v159)
                                     * *(float *)v159));
    *v148 = v144; /*0x930e87*/
    v149 = _mm_mul_ps(_mm_shuffle_ps(v123, v123, 0), v144); /*0x930e8e*/
    *v148 = v149; /*0x930e91*/
    if ( a3[2] == 1 ) /*0x930e98*/
      v150 = _mm_mul_ps(v149, v115); /*0x930e9a*/
    else
      v150 = _mm_mul_ps(v149, v183); /*0x930ebd*/
    *(float *)&v155 = _mm_shuffle_ps(v150, v150, 0xAA).m128_f32[0] /*0x930eb7*/
                    + (float)(_mm_shuffle_ps(v150, v150, 0x55).m128_f32[0] + v150.m128_f32[0]);
    v91 = a2; /*0x930ee7*/
    v148->m128_f32[3] = -*(float *)&v155; /*0x930eec*/
  }
  if ( *a6 ) /*0x930ef2*/
  {
    if ( *((_BYTE *)v91 + 2) ) /*0x930ef7*/
    {
      a7[1] = 0; /*0x930f04*/
      v154 = a4[1]; /*0x930f17*/
      v153 = *a4; /*0x930f18*/
      v181[0] = 0; /*0x930f1a*/
      v181[1] = 0; /*0x930f21*/
      v182 = 0x80000000; /*0x930f28*/
      sub_92F270(a5, v153, (signed int)v154, v181, (__m128 **)a7); /*0x930f33*/
      if ( v182 >= 0 ) /*0x930f44*/
        sub_8A75D0( /*0x930f6e*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          (_DWORD *)v181[0],
          0x10 * v182,
          0x14);
    }
  }
  v151 = (int)a7[1]; /*0x930f77*/
  if ( v151 > 1 ) /*0x930f7d*/
    sub_92B640((int)*a7, 0, v151 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0); /*0x930f8a*/
  sub_92DCA0(v91[4], (int)a7, &v155); /*0x930f9c*/
  *a1 = 1; /*0x930fa9*/
  return a1; /*0x930fa7*/
}
