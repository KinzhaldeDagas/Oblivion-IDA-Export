int __cdecl sub_93DE40(int ***a1, float a2, int a3, int a4, char *a5, __m128 *a6, __m128 *a7)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  float *v12; // ebx
  int v13; // ecx
  double v14; // st7
  double v15; // st7
  double v16; // st6
  __int32 v17; // ecx
  float *v18; // edx
  float v19; // edi
  float v20; // edx
  int **v21; // eax
  int *v22; // ecx
  float v23; // edi
  double v24; // st7
  double v25; // st6
  __m128 v26; // xmm1
  double v27; // st5
  __m128 v28; // xmm1
  int v29; // eax
  int v30; // ecx
  double v31; // st7
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  __m128 v35; // xmm0
  __m128 v36; // xmm0
  __m128 v37; // xmm5
  __m128 v38; // xmm2
  __m128 v39; // xmm4
  __m128 v40; // xmm0
  __m128 v41; // xmm2
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  __m128 v44; // xmm2
  __m128 v45; // xmm0
  double v46; // st6
  double v47; // st7
  float *v48; // edi
  __int32 v49; // eax
  int **v50; // ecx
  int *v51; // edx
  double v52; // st7
  int **v53; // ecx
  int v54; // ecx
  unsigned int v55; // edx
  int v56; // eax
  double v57; // st7
  _DWORD *v58; // edi
  int v59; // ecx
  int v60; // eax
  _DWORD *v61; // ecx
  unsigned __int64 v62; // rax
  double v63; // st7
  double v64; // st7
  int v65; // eax
  __m128 v66; // xmm0
  bool v67; // cf
  int v68; // edi
  _DWORD *v69; // ecx
  unsigned __int64 v70; // rax
  float *v71; // edi
  float v72; // eax
  __m128 v73; // xmm2
  bool v74; // zf
  __m128 v75; // xmm0
  __m128 v76; // xmm0
  __m128 v77; // xmm1
  __m128 v78; // xmm0
  __m128 v79; // xmm2
  __m128 v80; // xmm1
  __m128 v81; // xmm5
  __m128 v82; // xmm3
  __m128 v83; // xmm2
  __m128 v84; // xmm7
  __m128 v85; // xmm0
  __m128 v86; // xmm0
  _DWORD *v87; // edx
  int v88; // eax
  int v89; // ebx
  _DWORD *v90; // edi
  unsigned __int64 v91; // rax
  int **v92; // eax
  double v93; // st7
  double v94; // st7
  double v95; // st7
  float *v96; // edi
  int **v97; // edx
  float v98; // ecx
  float v99; // ebx
  __m128 v100; // xmm0
  int v101; // ecx
  __m128 v102; // xmm1
  __m128 v103; // xmm2
  __m128 v104; // xmm3
  __m128 v105; // xmm4
  __m128 *v106; // eax
  __m128 v107; // xmm2
  __m128 v108; // xmm0
  double v109; // st7
  float *v110; // ecx
  double v111; // st7
  float *v112; // ecx
  double v113; // st7
  int *v114; // edi
  int **v115; // eax
  int **v116; // ebx
  __m128 *v117; // edi
  __m128 *v118; // edx
  __m128 v119; // xmm2
  __m128 v120; // xmm4
  double v121; // st7
  __m128 v122; // xmm1
  __m128 v123; // xmm1
  __m128 v124; // xmm2
  __m128 v125; // xmm0
  __m128 v126; // xmm0
  double v127; // st7
  __m128 v128; // xmm0
  __int32 v129; // ecx
  __int32 v130; // edx
  __int32 v131; // eax
  int v132; // esi
  _DWORD *v133; // ecx
  int v134; // eax
  double v135; // st7
  int v136; // ecx
  int v137; // eax
  unsigned __int64 v138; // rax
  int v139; // edi
  _DWORD *v140; // ecx
  float v142; // [esp+34h] [ebp-39Ch]
  float v143; // [esp+34h] [ebp-39Ch]
  float v144; // [esp+34h] [ebp-39Ch]
  float v145; // [esp+38h] [ebp-398h]
  unsigned int v146; // [esp+38h] [ebp-398h]
  unsigned int v147; // [esp+38h] [ebp-398h]
  float v148; // [esp+38h] [ebp-398h]
  int v149; // [esp+38h] [ebp-398h]
  float v150; // [esp+38h] [ebp-398h]
  int *v151; // [esp+3Ch] [ebp-394h]
  float v152; // [esp+3Ch] [ebp-394h]
  unsigned int v153; // [esp+3Ch] [ebp-394h]
  unsigned int v154; // [esp+3Ch] [ebp-394h]
  unsigned int v155; // [esp+3Ch] [ebp-394h]
  float v156; // [esp+40h] [ebp-390h]
  float v157; // [esp+44h] [ebp-38Ch]
  float v158; // [esp+44h] [ebp-38Ch]
  float v159; // [esp+48h] [ebp-388h] BYREF
  float v160; // [esp+4Ch] [ebp-384h]
  float v161; // [esp+50h] [ebp-380h]
  __int64 v162; // [esp+54h] [ebp-37Ch]
  float v163[4]; // [esp+5Ch] [ebp-374h]
  char v164; // [esp+6Ch] [ebp-364h]
  float v165; // [esp+70h] [ebp-360h]
  int v166; // [esp+74h] [ebp-35Ch]
  _DWORD v167[2]; // [esp+78h] [ebp-358h] BYREF
  __m128 v168; // [esp+80h] [ebp-350h] BYREF
  __m128 v169; // [esp+90h] [ebp-340h] BYREF
  float v170; // [esp+ACh] [ebp-324h]
  __m128 v171; // [esp+B0h] [ebp-320h] BYREF
  __int32 v172; // [esp+C4h] [ebp-30Ch]
  _QWORD v173[3]; // [esp+C8h] [ebp-308h] BYREF
  __m128 v174; // [esp+E0h] [ebp-2F0h] BYREF
  __m128 v175; // [esp+F0h] [ebp-2E0h] BYREF
  int v176; // [esp+100h] [ebp-2D0h]
  float v177; // [esp+104h] [ebp-2CCh]
  float v178; // [esp+108h] [ebp-2C8h]
  float v179; // [esp+10Ch] [ebp-2C4h]
  __m128 v180; // [esp+110h] [ebp-2C0h]
  __m128 v181; // [esp+120h] [ebp-2B0h]
  _DWORD *v182; // [esp+130h] [ebp-2A0h]
  float v183; // [esp+134h] [ebp-29Ch]
  _QWORD v184[3]; // [esp+138h] [ebp-298h]
  __m128 v185; // [esp+150h] [ebp-280h] BYREF
  __m128 v186; // [esp+160h] [ebp-270h]
  float v187; // [esp+170h] [ebp-260h]
  _QWORD v188[3]; // [esp+178h] [ebp-258h] BYREF
  __m128 v189; // [esp+190h] [ebp-240h] BYREF
  __m128 v190; // [esp+1A0h] [ebp-230h]
  __m128 v191; // [esp+1B0h] [ebp-220h]
  __m128 v192; // [esp+1D0h] [ebp-200h] BYREF
  __m128 v193; // [esp+1E0h] [ebp-1F0h]
  __m128 v194; // [esp+1F0h] [ebp-1E0h]
  __m128 v195; // [esp+200h] [ebp-1D0h]
  __m128 v196[4]; // [esp+210h] [ebp-1C0h] BYREF
  __m128 v197; // [esp+250h] [ebp-180h] BYREF
  char v198; // [esp+260h] [ebp-170h]
  int v199; // [esp+264h] [ebp-16Ch]
  __m128 v200[8]; // [esp+270h] [ebp-160h] BYREF
  __m128 v201[4]; // [esp+2F0h] [ebp-E0h] BYREF
  _BYTE v202[80]; // [esp+330h] [ebp-A0h] BYREF
  __m128 v203; // [esp+380h] [ebp-50h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v8 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
  {
    v9 = ThreadLocalStoragePointer[TlsIndex];
    v10 = *(_DWORD **)(v8 + 0x1A4);
    *v10 = "LtToi";
    v10[3] = "setup";
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 4;
  }
  v12 = (float *)a1[2];
  v13 = *((_DWORD *)v12 + 0xA);
  v14 = a2 * *(float *)(v13 + 0x2C);
  v168.m128_u64[0] = __PAIR64__(a3, a4);
  v169.m128_f32[0] = v14;
  v15 = *(float *)(v13 + 0x20);
  v16 = a2 * *(float *)(v13 + 0x1C);
  if ( v16 > v15 )
  {
    v145 = v16;
    v15 = v145;
  }
  v17 = *(_DWORD *)(v13 + 0x34);
  v18 = (float *)a1[1];
  v19 = *v18;
  v20 = v18[2];
  v168.m128_f32[2] = v15 * v12[7];
  v21 = *a1;
  v168.m128_i32[3] = v17;
  v22 = *v21;
  v162 = LODWORD(v19);
  v23 = *((float *)v21 + 2);
  v175.m128_i32[2] = 0;
  v24 = v12[6];
  v25 = *(float *)(LODWORD(v20) + 0x5C);
  v26 = *(__m128 *)(LODWORD(v23) + 0x90);
  v27 = v24 * *(float *)(LODWORD(v23) + 0x5C);
  v163[0] = v20;
  v164 = 0;
  LOBYTE(v170) = 0;
  *(float *)&v146 = v27;
  v185 = _mm_mul_ps(_mm_shuffle_ps((__m128)v146, (__m128)v146, 0), v26);
  v28 = *(__m128 *)(LODWORD(v20) + 0x90);
  *(float *)&v147 = v25 * v24;
  v197.m128_i32[0] = a5[8];
  v197.m128_i32[1] = a5[9];
  v197.m128_i32[2] = a5[0xA];
  v197.m128_i32[3] = a5[0xB];
  v186 = _mm_mul_ps(_mm_shuffle_ps((__m128)v147, (__m128)v147, 0), v28);
  v166 = 0;
  v198 = 0;
  v199 = 0;
  v29 = *v22;
  v151 = v22;
  v163[1] = v23;
  (*(void (__stdcall **)(char *, __int32, __m128 *))(v29 + 0x28))(a5, v197.m128_i32[0], v200);
  (*(void (__thiscall **)(_DWORD, char *, __int32, _BYTE *))(*(_DWORD *)v162 + 0x28))(
    v162,
    &a5[2 * v197.m128_i32[0]],
    v197.m128_i32[1],
    v202);
  v148 = v169.m128_f32[0] + *(float *)&a4;
  v165 = a6->m128_f32[3];
  v157 = v165;
  v30 = 1;
  v156 = 0.0;
  if ( v165 <= (double)v148 )
  {
LABEL_39:
    v87 = NtCurrentTeb()->ThreadLocalStoragePointer;
    v88 = v87[TlsIndex];
    if ( *(_DWORD *)(v88 + 0x1A4) < *(_DWORD *)(v88 + 0x1A8) )
    {
      v89 = v87[TlsIndex];
      v90 = *(_DWORD **)(v88 + 0x1A4);
      *v90 = "Stfinal";
      v91 = __rdtsc();
      v90[1] = v91;
      *(_DWORD *)(v89 + 0x1A4) = v90 + 3;
    }
    *(float *)&v162 = v157;
    v160 = v165;
    v143 = v156;
    v92 = *a1;
    v161 = *((float *)&v162 + 1);
    v149 = v30;
    v93 = *((float *)*v92 + 3) + *((float *)*a1[1] + 3);
    v163[0] = 0.0;
    v163[3] = v93;
    *((float *)&v162 + 1) = (v157 - v165) / (v156 - *((float *)&v162 + 1));
    v152 = -v169.m128_f32[0];
    do
    {
      v94 = *(float *)&v162 - v160;
      if ( v94 > v152 )
      {
        v94 = flt_A3D65C;
        v143 = v161;
      }
      if ( fabs(*(float *)&v162 - *(float *)&a4) >= v169.m128_f32[0] )
      {
        v164 = 0;
        v95 = (*(float *)&a4 - v160) / v94;
        if ( v95 > flt_A2FAAC )
        {
          if ( v95 >= flt_A37450 )
            v95 = flt_A37450;
        }
        else
        {
          v95 = flt_A2FAAC;
        }
        v158 = (fConstant_1 - v95) * v161 + v95 * v143;
      }
      else
      {
        v164 = 1;
        v149 = 0;
        v158 = v143;
      }
      v96 = (float *)a1[2];
      v97 = *a1;
      v98 = v96[4];
      v163[2] = v158 * v96[6];
      v99 = v163[2];
      sub_8DD340((__m128 *)v97[2] + 4, v98, v163[2], &v189);
      sub_8DD340((__m128 *)a1[1][2] + 4, v96[4], v99, v196);
      sub_8B1FF0(&v192, &v189, v196);
      if ( v149 )
      {
        sub_93C690(&v197, **a1, *a1[1], &v192, &v171);
        if ( v197.m128_i32[0] == 1 )
        {
          *(__m128 *)&v173[1] = v200[0];
        }
        else if ( v197.m128_i32[1] == 1 )
        {
          v100 = _mm_shuffle_ps(v171, v171, 0xFF);
          *(__m128 *)&v173[1] = _mm_add_ps(v201[0], _mm_mul_ps(_mm_shuffle_ps(v100, v100, 0), v171));
        }
        else
        {
          *(__m128 *)&v173[1] = v203;
        }
      }
      else
      {
        v101 = v197.m128_i32[1];
        v102 = v195;
        v103 = v194;
        v104 = v193;
        v105 = v192;
        v106 = (__m128 *)v202;
        do
        {
          v106[0xFFFFFFFC] = _mm_add_ps(
                               _mm_add_ps(
                                 _mm_mul_ps(v105, _mm_shuffle_ps(*v106, *v106, 0)),
                                 _mm_mul_ps(v104, _mm_shuffle_ps(*v106, *v106, 0x55))),
                               _mm_add_ps(_mm_mul_ps(v103, _mm_shuffle_ps(*v106, *v106, 0xAA)), v102));
          ++v106;
          --v101;
        }
        while ( v101 > 0 );
        v107 = _mm_shuffle_ps(v191, v191, 0x44);
        v108 = _mm_shuffle_ps(v189, v190, 0x44);
        v174 = _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(
                     _mm_shuffle_ps(v108, v107, 0x88),
                     _mm_shuffle_ps(*(__m128 *)&v188[1], *(__m128 *)&v188[1], 0)),
                   _mm_mul_ps(
                     _mm_shuffle_ps(v108, v107, 0xDD),
                     _mm_shuffle_ps(*(__m128 *)&v188[1], *(__m128 *)&v188[1], 0x55))),
                 _mm_mul_ps(
                   _mm_shuffle_ps(_mm_shuffle_ps(v189, v190, 0xEE), _mm_shuffle_ps(v191, v191, 0xEE), 0x88),
                   _mm_shuffle_ps(*(__m128 *)&v188[1], *(__m128 *)&v188[1], 0xAA)));
        sub_93BA20(v200, v201, v197.m128_i32[0], v197.m128_i32[1], &v174, (__m128 *)&v173[1], &v171);
      }
      v109 = v171.m128_f32[3] - v163[3];
      v163[1] = v109;
      if ( fabs(v109 - *(float *)&a4) < v169.m128_f32[0] )
        break;
      if ( v164 )
        break;
      if ( v161 == v143 )
        break;
      if ( v109 >= *(float *)&a4 )
      {
        v160 = v109;
        v161 = v158;
      }
      else
      {
        *(float *)&v162 = v109;
        v143 = v158;
      }
      ++LODWORD(v163[0]);
    }
    while ( SLODWORD(v163[0]) < 0xA );
    v110 = (float *)a1[2];
    v111 = v158 * v110[6];
    v112 = v110 + 4;
    LODWORD(v163[2]) = v112;
    if ( v111 <= v168.m128_f32[3] )
      v111 = v168.m128_f32[3];
    v113 = v111 + *v112;
    v144 = v113;
    if ( v113 < a7[0x303].m128_f32[1] && v112[1] - v168.m128_f32[3] > v144 )
    {
      v114 = **a1;
      sub_88FCC0((__m128 *)&v188[1], &v189, (__m128 *)&v173[1]);
      sub_88FE00(&v169, &v189, &v171);
      v115 = *a1;
      v116 = a1[1];
      *(float *)&v153 = -*((float *)v114 + 3) - v163[1];
      v168 = _mm_add_ps(*(__m128 *)&v188[1], _mm_mul_ps(_mm_shuffle_ps((__m128)v153, (__m128)v153, 0), v169));
      v169.m128_f32[3] = v163[1];
      v117 = (__m128 *)v115[2];
      v118 = (__m128 *)v116[2];
      v119 = v117[5];
      v120 = v117[4];
      v121 = (v144 - v117[4].m128_f32[3]) * v117[5].m128_f32[3];
      LODWORD(v163[3]) = v115;
      *(float *)&v154 = v121;
      v122 = _mm_shuffle_ps((__m128)v154, (__m128)v154, 0);
      v123 = _mm_sub_ps(
               v168,
               _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v122), v120), _mm_mul_ps(v122, v119)));
      *(float *)&v155 = (v144 - v118[4].m128_f32[3]) * v118[5].m128_f32[3];
      v124 = _mm_shuffle_ps((__m128)v155, (__m128)v155, 0);
      v125 = _mm_sub_ps(
               v168,
               _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v124), v118[4]), _mm_mul_ps(v124, v118[5])));
      v126 = _mm_mul_ps(
               _mm_sub_ps(
                 _mm_add_ps(
                   _mm_xor_ps(*((__m128 *)a1 + 6), (__m128)xmmword_A965C0),
                   _mm_sub_ps(
                     _mm_mul_ps(_mm_shuffle_ps(v185, v185, 0xC9), _mm_shuffle_ps(v123, v123, 0xD2)),
                     _mm_mul_ps(_mm_shuffle_ps(v185, v185, 0xD2), _mm_shuffle_ps(v123, v123, 0xC9)))),
                 _mm_sub_ps(
                   _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xC9), _mm_shuffle_ps(v125, v125, 0xD2)),
                   _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xD2), _mm_shuffle_ps(v125, v125, 0xC9)))),
               v169);
      v160 = _mm_shuffle_ps(v126, v126, 0xAA).m128_f32[0]
           + (float)(_mm_shuffle_ps(v126, v126, 0x55).m128_f32[0] + v126.m128_f32[0]);
      v127 = v160;
      if ( *((float *)&v162 + 1) < (double)v160 )
      {
        if ( v160 * flt_A57414 >= *((float *)&v162 + 1) )
        {
          v127 = sub_93D820(v117, v118, &v185, &v168, &v169, (__m128 *)a1 + 6, v144);
          if ( *(float *)&SrcStr < v127 )
            v127 = *(float *)&SrcStr;
        }
        else
        {
          v127 = *((float *)&v162 + 1);
        }
      }
      v150 = v127 * *(float *)(LODWORD(v163[2]) + 0xC);
      if ( !((int (__thiscall *)(int **, _DWORD, int **, int **, __m128 *, float, float, _DWORD *))(*a1[3])[7])(
              a1[3],
              LODWORD(v163[3]),
              v116,
              a1[2],
              &v168,
              COERCE_FLOAT(LODWORD(v144)),
              COERCE_FLOAT(LODWORD(v150)),
              v167) )
      {
        v128 = v168;
        a7[0x303].m128_f32[0] = v150;
        v129 = v167[0];
        a7[1] = v128;
        a7[2] = v169;
        a7[0x303].m128_f32[1] = v144;
        v130 = v167[1];
        a7[0x303].m128_i32[2] = v129;
        a7[0x303].m128_i32[3] = v130;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v31 = fConstant_1 - v156;
      if ( v31 <= *(float *)&SrcStr )
        break;
      v32 = *a6;
      v33 = _mm_shuffle_ps(v32, v32, 0xC9);
      v34 = _mm_shuffle_ps(*a6, *a6, 0xD2);
      v35 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v185, v185, 0xC9), v34),
              _mm_mul_ps(_mm_shuffle_ps(v185, v185, 0xD2), v33));
      v36 = _mm_mul_ps(v35, v35);
      v37 = _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xD2), v33);
      v38 = _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xC9), v34);
      v34.m128_f32[0] = _mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0];
      v39 = _mm_shuffle_ps(v36, v36, 0xAA);
      v40 = v39;
      v40.m128_f32[0] = v39.m128_f32[0] + v34.m128_f32[0];
      v171 = v40;
      v171.m128_i32[0] = fsqrt(v39.m128_f32[0] + v34.m128_f32[0]);
      v41 = _mm_sub_ps(v38, v37);
      HIDWORD(v173[0]) = v171.m128_i32[0];
      v42 = _mm_mul_ps(v41, v41);
      v41.m128_f32[0] = _mm_shuffle_ps(v42, v42, 0x55).m128_f32[0] + v42.m128_f32[0];
      v43 = _mm_shuffle_ps(v42, v42, 0xAA);
      v43.m128_f32[0] = v43.m128_f32[0] + v41.m128_f32[0];
      v44 = *((__m128 *)a1 + 6);
      v171 = v43;
      v171.m128_i32[0] = fsqrt(v43.m128_f32[0]);
      v172 = v171.m128_i32[0];
      v45 = _mm_mul_ps(v44, v32);
      v159 = v171.m128_f32[0] * *(float *)(LODWORD(v163[0]) + 0xA0)
           + *((float *)v173 + 1) * *(float *)(LODWORD(v23) + 0xA0);
      v160 = _mm_shuffle_ps(v45, v45, 0xAA).m128_f32[0]
           + (float)(_mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]);
      v46 = v160 + v159;
      v161 = v46;
      if ( v46 <= *(float *)&SrcStr || a6->m128_f32[3] - v161 * v31 > *(float *)&a3 )
        break;
      v47 = (a6->m128_f32[3] - *(float *)&a3) / v161;
      v142 = v47;
      if ( v47 >= flt_A3D9A4 || LOBYTE(v170) || !v164 || v160 * flt_A31C80 >= v159 )
      {
        v58 = NtCurrentTeb()->ThreadLocalStoragePointer;
      }
      else
      {
        if ( !v175.m128_i32[2] )
        {
          v48 = (float *)**a1;
          v49 = (__int32)(*a1)[2];
          v50 = a1[1];
          v51 = *v50;
          v175.m128_i32[1] = (__int32)v50[2];
          v175.m128_i32[0] = v49;
          v52 = *((float *)v51 + 3) + v48[3];
          LODWORD(v173[0]) = v175.m128_i32[1];
          v53 = a1[2];
          v167[0] = v49;
          v177 = v52;
          v182 = v53 + 4;
          *(__m128 *)&v184[1] = v44;
          (*(void (__thiscall **)(float *, _QWORD *))(*(_DWORD *)v48 + 0x1C))(v48, &v173[1]);
          v54 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          v176 = v173[1];
          v175.m128_i32[3] = v173[1];
          v159 = *(float *)(v54 + 0x20);
          v55 = 0x10 * (LODWORD(v173[1]) + 1) + LODWORD(v159);
          if ( v55 > *(_DWORD *)(v54 + 0x2C) )
          {
            v56 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v54 + 0xC))(v54, 0x10 * (LODWORD(v173[1]) + 1));
          }
          else
          {
            v56 = LODWORD(v159);
            *(_DWORD *)(v54 + 0x20) = v55;
          }
          v175.m128_i32[2] = v56;
          (*(void (__thiscall **)(float *, int))(*(_DWORD *)v48 + 0x20))(v48, v56);
          v57 = v186.m128_f32[3] * *(float *)(LODWORD(v173[0]) + 0xA0) * v186.m128_f32[3]
              + v185.m128_f32[3] * *(float *)(v167[0] + 0xA0) * v185.m128_f32[3];
          v178 = v57;
          v179 = fConstant_1 / (v57 + flt_AA1DC8);
        }
        v58 = NtCurrentTeb()->ThreadLocalStoragePointer;
        v59 = TlsIndex;
        v183 = v161;
        v60 = v58[v59];
        v187 = v156;
        if ( *(_DWORD *)(v60 + 0x1A4) < *(_DWORD *)(v60 + 0x1A8) )
        {
          v61 = *(_DWORD **)(v60 + 0x1A4);
          v167[0] = v60;
          *v61 = "Stplane";
          v62 = __rdtsc();
          LODWORD(v163[3]) = v62;
          HIDWORD(v62) = v167[0];
          v61[1] = v62;
          *(_DWORD *)(HIDWORD(v62) + 0x1A4) = v61 + 3;
        }
        v159 = 1.0;
        sub_93DB40(&v175, v168.m128_f32, &v159);
        v63 = v159 - v156;
        if ( v63 >= v142 + v142 )
          v142 = v63;
        else
          LOBYTE(v170) = 1;
      }
      if ( v142 + v156 >= fConstant_1 )
        goto LABEL_79;
      *((float *)&v162 + 1) = v156;
      if ( v168.m128_f32[2] > (double)v142 )
        v142 = v168.m128_f32[2];
      v64 = v142 + v156;
      v156 = v64;
      if ( v64 >= fConstant_1 )
        v156 = 1.0;
      v65 = v58[TlsIndex];
      v66 = *a6;
      v165 = a6->m128_f32[3];
      v67 = *(_DWORD *)(v65 + 0x1A4) < *(_DWORD *)(v65 + 0x1A8);
      *(__m128 *)&v188[1] = v66;
      if ( v67 )
      {
        v68 = v65;
        v69 = *(_DWORD **)(v65 + 0x1A4);
        *v69 = "StsepNormal";
        v70 = __rdtsc();
        LODWORD(v163[2]) = v70;
        v69[1] = v70;
        *(_DWORD *)(v68 + 0x1A4) = v69 + 3;
      }
      v71 = (float *)a1[2];
      v72 = v71[4];
      v159 = v156 * v71[6];
      sub_8DD340((__m128 *)(LODWORD(v163[1]) + 0x40), v72, v159, v196);
      sub_8DD340((__m128 *)(LODWORD(v163[0]) + 0x40), v71[4], v159, &v189);
      ++v166;
      sub_8B1FF0(&v192, v196, &v189);
      sub_93C690(&v197, v151, (int *)v162, &v192, &v174);
      v73 = v174;
      v74 = v197.m128_i32[0] == 1;
      *a6 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(v196[0], _mm_shuffle_ps(v174, v174, 0)),
                _mm_mul_ps(v196[1], _mm_shuffle_ps(v174, v174, 0x55))),
              _mm_mul_ps(v196[2], _mm_shuffle_ps(v174, v174, 0xAA)));
      if ( v74 )
      {
        v75 = v200[0];
      }
      else if ( v197.m128_i32[1] == 1 )
      {
        v76 = _mm_shuffle_ps(v73, v73, 0xFF);
        v75 = _mm_add_ps(v201[0], _mm_mul_ps(_mm_shuffle_ps(v76, v76, 0), v73));
      }
      else
      {
        v75 = v203;
      }
      v77 = _mm_shuffle_ps(v73, v73, 0xFF);
      v78 = _mm_sub_ps(_mm_sub_ps(v75, _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0), v73)), v195);
      v79 = _mm_shuffle_ps(v194, v194, 0x44);
      v80 = _mm_shuffle_ps(v192, v193, 0x44);
      v81 = v190;
      v30 = v199;
      v82 = v189;
      v181 = _mm_add_ps(
               _mm_add_ps(
                 _mm_mul_ps(_mm_shuffle_ps(v80, v79, 0x88), _mm_shuffle_ps(v78, v78, 0)),
                 _mm_mul_ps(_mm_shuffle_ps(v80, v79, 0xDD), _mm_shuffle_ps(v78, v78, 0x55))),
               _mm_mul_ps(
                 _mm_shuffle_ps(_mm_shuffle_ps(v192, v193, 0xEE), _mm_shuffle_ps(v194, v194, 0xEE), 0x88),
                 _mm_shuffle_ps(v78, v78, 0xAA)));
      v83 = _mm_shuffle_ps(v191, v191, 0x44);
      v84 = v191;
      v85 = _mm_shuffle_ps(v189, v190, 0x44);
      a6->m128_f32[3] = v174.m128_f32[3] - *((float *)v151 + 3) - *(float *)(v162 + 0xC);
      v157 = a6->m128_f32[3];
      v86 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v85, v83, 0x88), _mm_shuffle_ps(*a6, *a6, 0)),
                _mm_mul_ps(_mm_shuffle_ps(v85, v83, 0xDD), _mm_shuffle_ps(*a6, *a6, 0x55))),
              _mm_mul_ps(
                _mm_shuffle_ps(_mm_shuffle_ps(v82, v81, 0xEE), _mm_shuffle_ps(v84, v84, 0xEE), 0x88),
                _mm_shuffle_ps(*a6, *a6, 0xAA)));
      v164 = 1;
      v180 = v86;
      if ( v157 <= (double)v148 )
        goto LABEL_39;
      v23 = v163[1];
    }
  }
  v58 = NtCurrentTeb()->ThreadLocalStoragePointer;
LABEL_79:
  v131 = v175.m128_i32[2];
  v132 = TlsIndex;
  if ( v175.m128_i32[2] )
  {
    v133 = *(_DWORD **)(v58[v132] + 0x19C);
    v74 = v175.m128_i32[2] == v133[0xA];
    v133[8] = v175.m128_i32[2];
    if ( v74 )
      (*(void (__thiscall **)(_DWORD *, __int32))(*v133 + 0x10))(v133, v131);
  }
  v134 = v58[v132];
  if ( *(_DWORD *)(v134 + 0x1A4) < *(_DWORD *)(v134 + 0x1A8) )
  {
    v135 = (double)v166;
    v136 = v58[v132];
    v137 = *(_DWORD *)(v134 + 0x1A4);
    *(_DWORD *)v137 = "MinumIter";
    *(float *)(v137 + 4) = v135;
    *(_DWORD *)(v136 + 0x1A4) = v137 + 8;
  }
  if ( v199 )
    sub_93B660(&v197, (int)a5);
  LODWORD(v138) = v58[v132];
  if ( *(_DWORD *)(v138 + 0x1A4) < *(_DWORD *)(v138 + 0x1A8) )
  {
    v139 = v58[v132];
    v140 = *(_DWORD **)(v138 + 0x1A4);
    *v140 = "lt";
    v138 = __rdtsc();
    v140[1] = v138;
    *(_DWORD *)(v139 + 0x1A4) = v140 + 3;
  }
  return v138;
}
