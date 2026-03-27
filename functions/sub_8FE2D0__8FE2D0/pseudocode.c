unsigned int __cdecl sub_8FE2D0(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  __int32 v15; // eax
  unsigned __int8 *v16; // esi
  int i; // edi
  __m128 ***v18; // eax
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  float v21; // xmm2_4
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  long double v26; // st7
  __int32 v27; // ecx
  __int32 v28; // eax
  int v29; // edi
  __int32 v30; // ecx
  __int32 j; // eax
  __int32 v32; // ecx
  __int32 k; // eax
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st7
  double v38; // st6
  _DWORD *v39; // ecx
  int v40; // eax
  int v41; // edi
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  _DWORD *v44; // ecx
  int v45; // eax
  int v46; // edi
  _DWORD *v47; // ecx
  unsigned __int64 v48; // rax
  _BYTE *v49; // ebx
  int v50; // edi
  int v51; // eax
  _DWORD *v52; // eax
  int v53; // ecx
  int v54; // edx
  int v55; // edi
  _DWORD *v56; // eax
  _DWORD *v57; // ecx
  int v58; // eax
  int v59; // edi
  _DWORD *v60; // ecx
  unsigned __int64 v61; // rax
  _BYTE *v62; // ebx
  int v63; // edi
  int v64; // eax
  _DWORD *v65; // eax
  int v66; // ecx
  int v67; // edx
  int v68; // edi
  _DWORD *v69; // eax
  float **v70; // edx
  _DWORD *v71; // ebx
  float *v72; // edi
  int v73; // ecx
  __m128 v74; // xmm0
  unsigned __int8 v75; // al
  double v76; // st7
  __m128 *v77; // eax
  int v78; // edx
  __m128 v79; // xmm1
  __m128 v80; // xmm2
  __m128 v81; // xmm3
  __m128 v82; // xmm4
  int v83; // ebx
  __m128 *v84; // ecx
  char *v85; // ebx
  __m128 *v86; // eax
  int v87; // edx
  __m128 v88; // xmm1
  __m128 v89; // xmm2
  __m128 v90; // xmm3
  __m128 v91; // xmm4
  __m128 *v92; // ecx
  unsigned __int8 v93; // al
  int v94; // ecx
  __m128 *v95; // ebx
  __int32 v96; // edx
  __int32 v97; // ecx
  __int8 v98; // al
  unsigned __int64 v99; // rax
  __int32 v100; // ecx
  int v101; // ecx
  unsigned __int8 v102; // al
  float **v103; // ecx
  float **v104; // edx
  float *v105; // ebx
  float *v106; // ecx
  double v107; // st7
  __m128 *v108; // eax
  int v109; // edx
  __m128 v110; // xmm1
  __m128 v111; // xmm2
  __m128 v112; // xmm3
  __m128 v113; // xmm4
  __m128 *v114; // ecx
  int v115; // eax
  float v116; // ecx
  __m128 *v117; // eax
  int v118; // edx
  __m128 *v119; // ecx
  __m128 v120; // xmm1
  __m128 v121; // xmm2
  __m128 v122; // xmm3
  __m128 v123; // xmm4
  __m128 *v124; // ebx
  int v125; // ecx
  int v126; // eax
  double v127; // st7
  signed int v128; // eax
  int v129; // edx
  __m128 ***v130; // ecx
  __m128 **v131; // eax
  __int16 v132; // ax
  int v133; // eax
  int m; // edi
  int **v135; // ebx
  int v136; // ecx
  _DWORD *v137; // edi
  int v138; // ebx
  int v139; // eax
  _DWORD *v140; // ecx
  unsigned __int64 v141; // rax
  int v142; // eax
  int v143; // edi
  _DWORD *v144; // ecx
  unsigned __int64 v145; // rax
  int v147; // [esp+Ch] [ebp-1E4h]
  int v148; // [esp+Ch] [ebp-1E4h]
  float v149; // [esp+28h] [ebp-1C8h]
  int v150; // [esp+28h] [ebp-1C8h]
  int v151; // [esp+28h] [ebp-1C8h]
  __m128 *v152; // [esp+28h] [ebp-1C8h]
  float v153; // [esp+2Ch] [ebp-1C4h]
  float v154; // [esp+2Ch] [ebp-1C4h]
  float v155; // [esp+2Ch] [ebp-1C4h]
  float v156; // [esp+2Ch] [ebp-1C4h]
  float **v157; // [esp+2Ch] [ebp-1C4h]
  signed int v158; // [esp+2Ch] [ebp-1C4h]
  float v159; // [esp+30h] [ebp-1C0h]
  float v160; // [esp+30h] [ebp-1C0h]
  _DWORD *v161; // [esp+30h] [ebp-1C0h]
  _DWORD *v162; // [esp+30h] [ebp-1C0h]
  int v163; // [esp+30h] [ebp-1C0h]
  __m128 *v164; // [esp+30h] [ebp-1C0h]
  int v165; // [esp+34h] [ebp-1BCh]
  float v166; // [esp+34h] [ebp-1BCh]
  int v167; // [esp+34h] [ebp-1BCh]
  _DWORD v168[2]; // [esp+38h] [ebp-1B8h]
  __m128 v169; // [esp+40h] [ebp-1B0h] BYREF
  float **v170; // [esp+54h] [ebp-19Ch]
  _DWORD v171[2]; // [esp+58h] [ebp-198h]
  __m128 v172; // [esp+60h] [ebp-190h] BYREF
  _DWORD v173[2]; // [esp+70h] [ebp-180h]
  _DWORD v174[5]; // [esp+78h] [ebp-178h]
  _BYTE v175[20]; // [esp+8Ch] [ebp-164h] BYREF
  __m128 v176; // [esp+A0h] [ebp-150h] BYREF
  _DWORD v177[5]; // [esp+BCh] [ebp-134h] BYREF
  char v178[256]; // [esp+D0h] [ebp-120h] BYREF
  __m128 v179; // [esp+1D0h] [ebp-20h]
  float v180; // [esp+1E0h] [ebp-10h]
  float v181; // [esp+1E4h] [ebp-Ch]
  float v182; // [esp+1E8h] [ebp-8h]
  float v183; // [esp+1ECh] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = TlsIndex;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtPredGskf3";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = ThreadLocalStoragePointer[v6];
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) )
  {
    v12 = ThreadLocalStoragePointer[v6];
    v13 = *(_DWORD **)(v11 + 0x1A4);
    *v13 = "Ltintern";
    v13[3] = "init";
    v14 = __rdtsc();
    v13[1] = v14;
    *(_DWORD *)(v12 + 0x1A4) = v13 + 4;
  }
  v159 = a1[5].m128_f32[0];
  LOBYTE(v173[0]) = a2->m128_i8[4] & 1;
  v171[1] = &a1->m128_i32[1];
  v15 = a2->m128_i32[1];
  BYTE1(v173[0]) = (v15 & 2) != 0;
  BYTE1(v168[0]) = (v15 & 8) != 0;
  v174[0] = 0;
  v174[1] = 0;
  v16 = &a3->m128_u8[0xC];
  v171[0] = a1;
  LOBYTE(v168[0]) = (v15 & 4) != 0;
  sub_8FF1C0(a1, (char *)a3, &v172);
  for ( i = 0; i < 2; ++i )
  {
    if ( !*((_BYTE *)v173 + i) )
      continue;
    v18 = (__m128 ***)v171[i];
    v19 = _mm_sub_ps((**v18)[3], (**v18)[2]);
    v20 = _mm_mul_ps(v19, v19);
    v21 = _mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0];
    v22 = _mm_shuffle_ps(v20, v20, 0xAA);
    v23 = v22;
    v23.m128_f32[0] = v22.m128_f32[0] + v21;
    v176 = v23;
    v176.m128_f32[0] = 1.0 / fsqrt(v22.m128_f32[0] + v21);
    v24 = (__m128)0x3F000000u;
    v24.m128_f32[0] = (float)(0.5 * v176.m128_f32[0])
                    * (float)(3.0
                            - (float)((float)((float)(v22.m128_f32[0] + v21) * v176.m128_f32[0]) * v176.m128_f32[0]));
    v169 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v19);
    sub_88FE00(&v169, (*v18)[2], &v169);
    v25 = _mm_mul_ps(v169, v172);
    v26 = fabs((float)(_mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0])));
    if ( *((_BYTE *)v168 + i) )
    {
      if ( v26 <= flt_A643B0 )
        continue;
      v27 = a2->m128_i32[1];
      *((_BYTE *)v168 + i) = 0;
      a2->m128_i32[1] = ~(4 << i) & v27;
      sub_939B60(v16, a1->m128_i32[3]);
      a2->m128_i8[2] = a3->m128_i8[0xE];
    }
    else
    {
      if ( v26 >= flt_A9B9F8 )
        continue;
      v28 = a2->m128_i32[1];
      *((_BYTE *)v168 + i) = 1;
      a2->m128_i32[1] = (4 << i) | v28;
      sub_939B60(v16, a1->m128_i32[3]);
      a2->m128_i8[2] = a3->m128_i8[0xE];
    }
    *(_DWORD *)v16 = 0;
  }
  v29 = *(_DWORD *)(a1->m128_i32[2] + 0x28);
  if ( !*(_BYTE *)(v29 + 0x10) )
    goto LABEL_39;
  v30 = a1->m128_i32[0];
  for ( j = *(_DWORD *)(a1->m128_i32[0] + 0xC); j; j = *(_DWORD *)(j + 0xC) )
    v30 = j;
  v165 = *(int *)(v30 + 0x20);
  v32 = a1->m128_i32[1];
  for ( k = *(_DWORD *)(v32 + 0xC); k; k = *(_DWORD *)(k + 0xC) )
    v32 = k;
  v149 = *(float *)&v165 >= (double)*(float *)(v32 + 0x20) ? *(float *)(v32 + 0x20) : *(float *)&v165;
  v34 = a4->m128_f32[3];
  v35 = v149 * *(float *)(v29 + 0x18) + v34;
  v36 = v149 * *(float *)(v29 + 0x14);
  if ( v36 >= v35 )
  {
    v166 = v35;
  }
  else
  {
    v153 = v36;
    v166 = v153;
  }
  if ( v159 < (double)v166 )
  {
    v37 = v34 + v149 * *(float *)(v29 + 0x28);
    v38 = v149 * *(float *)(v29 + 0x24);
    if ( v38 >= v37 )
    {
      v160 = v37;
    }
    else
    {
      v154 = v38;
      v160 = v154;
    }
    v39 = NtCurrentTeb()->ThreadLocalStoragePointer;
    v40 = v39[TlsIndex];
    if ( *(_DWORD *)(v40 + 0x1A4) < *(_DWORD *)(v40 + 0x1A8) )
    {
      v41 = v39[TlsIndex];
      v42 = *(_DWORD **)(v40 + 0x1A4);
      *v42 = "Sttoi";
      v43 = __rdtsc();
      v42[1] = v43;
      *(_DWORD *)(v41 + 0x1A4) = v42 + 3;
    }
    sub_93DE40((int)a1, v149, SLODWORD(v166), SLODWORD(v160), (int)a3, (int)a4, a5);
LABEL_32:
    v44 = NtCurrentTeb()->ThreadLocalStoragePointer;
    v45 = v44[TlsIndex];
    if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) )
    {
      v46 = v44[TlsIndex];
      v47 = *(_DWORD **)(v45 + 0x1A4);
      *v47 = "Stprocess";
      v48 = __rdtsc();
      v47[1] = v48;
      *(_DWORD *)(v46 + 0x1A4) = v47 + 3;
    }
    v150 = 0;
    v49 = v175;
    do
    {
      if ( *((_BYTE *)v168 + v150) )
      {
        v50 = **(_DWORD **)v171[v150];
        v51 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x30, 0x24);
        *(_WORD *)(v51 + 4) = 0x30;
        v155 = *(float *)(v50 + 0xC);
        v161 = (_DWORD *)v51;
        *(float *)&v147 = sub_8F2260((float *)v50) + v155 + flt_A58FF8;
        v52 = sub_8F3490(v161, (_OWORD *)(v50 + 0x20), (_OWORD *)(v50 + 0x30), v147);
        v53 = v150;
        if ( v49 != (_BYTE *)0xC )
        {
          v54 = *(_DWORD *)v171[v150];
          v55 = *(_DWORD *)(v54 + 8);
          *(_DWORD *)v49 = v54;
          *((_DWORD *)v49 + 0xFFFFFFFF) = v55;
        }
        *((_DWORD *)v49 + 0xFFFFFFFE) = *(_DWORD *)(*(_DWORD *)v49 + 4);
        *((_DWORD *)v49 + 0xFFFFFFFD) = v52;
        v56 = (_DWORD *)v171[v150];
        v174[v150] = *v56;
        *v56 = v49 + 0xFFFFFFF4;
      }
      else
      {
        v53 = v150;
        v174[v150] = 0;
      }
      v49 += 0x10;
      v150 = v53 + 1;
    }
    while ( v53 + 1 < 2 );
    v95 = a3;
    v164 = a3;
    if ( LOWORD(v168[0]) )
    {
      v96 = a3->m128_i32[1];
      v169.m128_i32[0] = a3->m128_i32[0];
      v97 = a3->m128_i32[2];
      v95 = &v169;
      v164 = &v169;
      *(unsigned __int64 *)((char *)v169.m128_u64 + 4) = __PAIR64__(v97, v96);
      if ( LOBYTE(v168[0]) )
      {
        v169.m128_i16[0] = 0x10 * (1 - ((unsigned __int8)v169.m128_i8[0] >> 7));
        v98 = v97;
        if ( (char)v97 > 1 )
        {
          v169.m128_i32[0] = 0x10;
          if ( (_BYTE)v97 == 3 )
          {
            v98 = 2;
            v169.m128_i8[8] = 2;
            v169.m128_i16[2] = v169.m128_i16[3];
          }
        }
      }
      else
      {
        v98 = v169.m128_i8[8];
      }
      if ( BYTE1(v168[0]) )
      {
        v169.m128_i16[v98] = 0x10 * (1 - ((unsigned __int8)v169.m128_i8[2 * v98] >> 7));
        if ( v169.m128_i8[9] > 1 )
        {
          v169.m128_i16[v169.m128_i8[8]] = 0x10;
          v169.m128_i16[v169.m128_i8[8] + 1] = 0;
          if ( v169.m128_i8[9] == 3 )
            v169.m128_i8[9] = 2;
        }
      }
    }
    v99 = a1->m128_u64[0];
    v177[2] = *(_DWORD *)a1->m128_i32[0];
    v177[3] = *(_DWORD *)HIDWORD(v99);
    v100 = a1->m128_i32[2];
    v177[0] = a1 + 1;
    v177[1] = *(_DWORD *)(v99 + 8);
    v177[4] = *(_DWORD *)(v100 + 8);
    if ( sub_93D4A0((int)v177, (char *)v95, a4, &v176) == 1 )
    {
      if ( a3->m128_i8[0xE] )
        sub_939B60(v16, a1->m128_i32[3]);
      goto LABEL_103;
    }
    v101 = (unsigned __int8)sub_93A620((int)v16, (int)v95);
    v152 = *(__m128 **)a5;
    v102 = a3->m128_u8[0xE];
    v158 = v101;
    if ( v102 > v101 )
    {
      v103 = (float **)a1->m128_i32[0];
      v104 = (float **)a1->m128_i32[1];
      v182 = *(float *)(a1->m128_i32[2] + 8);
      v105 = *v104;
      v173[0] = v104;
      v170 = v103;
      v106 = *v103;
      v180 = v106[3];
      v181 = v105[3];
      v179 = *a4;
      v107 = v181 + v180 + v182;
      v183 = v107 * v107;
      if ( v102 )
      {
        v167 = (int)&v16[8 * v102 + 4];
        (*(void (__thiscall **)(float *, int, _DWORD, char *))(*(_DWORD *)v106 + 0x28))(v106, v167, *v16, v178);
        v108 = (__m128 *)v170[2];
        v109 = *v16;
        v110 = *v108;
        v111 = v108[1];
        v112 = v108[2];
        v113 = v108[3];
        v170 = (float **)v109;
        v114 = (__m128 *)v178;
        v115 = v109;
        do
        {
          *v114 = _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(v110, _mm_shuffle_ps(*v114, *v114, 0)),
                      _mm_mul_ps(v111, _mm_shuffle_ps(*v114, *v114, 0x55))),
                    _mm_add_ps(_mm_mul_ps(v112, _mm_shuffle_ps(*v114, *v114, 0xAA)), v113));
          ++v114;
          --v115;
        }
        while ( v115 > 0 );
        v116 = *v105;
        v168[0] = &v178[0x10 * v109];
        (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(LODWORD(v116) + 0x28))(
          v105,
          v167 + 2 * v109,
          a3->m128_u8[0xD],
          v168[0]);
        v117 = *(__m128 **)(v173[0] + 8);
        v118 = a3->m128_u8[0xD];
        v119 = (__m128 *)v168[0];
        v120 = *v117;
        v121 = v117[1];
        v122 = v117[2];
        v123 = v117[3];
        do
        {
          *v119 = _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(v120, _mm_shuffle_ps(*v119, *v119, 0)),
                      _mm_mul_ps(v121, _mm_shuffle_ps(*v119, *v119, 0x55))),
                    _mm_add_ps(_mm_mul_ps(v122, _mm_shuffle_ps(*v119, *v119, 0xAA)), v123));
          ++v119;
          --v118;
        }
        while ( v118 > 0 );
      }
      sub_939BB0(v16, (__m128 *)v178, v158, (__m128 **)a5, a1->m128_i32[3]);
    }
    v124 = *(__m128 **)a5;
    *v124 = v176;
    v124[1] = *a4;
    if ( v158 )
    {
      v124[2].m128_i16[0] = a3[1].m128_i16[1];
      *(_DWORD *)a5 += 0x30;
      goto LABEL_100;
    }
    v125 = a1->m128_i32[2];
    v126 = *(_DWORD *)(v125 + 0x28);
    if ( v164->m128_i8[8] + v164->m128_i8[9] == 4 )
      v127 = *(float *)(v126 + 4);
    else
      v127 = *(float *)(v126 + 8);
    if ( v127 <= a4->m128_f32[3] )
      goto LABEL_100;
    v128 = sub_93AB40(v16, a1->m128_i32[0], a1->m128_i32[1], v125, (int)v164, (int)v124, v152, a1->m128_i32[3], 1);
    if ( v128 != 4 )
    {
      if ( v128 == 5 )
      {
        v124 = v152;
      }
      else if ( v128 == 6 )
      {
        v124 = v152;
        *(_DWORD *)a5 -= 0x30;
      }
      else
      {
        v124 = &v152[3 * v128];
      }
      goto LABEL_100;
    }
    if ( v124[2].m128_i16[0] != (__int16)0xFFFF )
    {
      *(_DWORD *)a5 += 0x30;
      goto LABEL_100;
    }
    v129 = *(_DWORD *)a1->m128_i32[3];
    if ( *(_DWORD *)(a5 + 0x3040) )
    {
      if ( !(*(int (__stdcall **)(int))(v129 + 0xC))(1) )
      {
        v130 = *(__m128 ****)(a5 + 0x3040);
        v131 = *v130;
        *v130 += 3;
        v131[1] = a2;
        *v131 = v124;
        v131[2] = a3;
        *(_DWORD *)a5 += 0x30;
        goto LABEL_100;
      }
LABEL_93:
      sub_939B00(v16, 0);
      v124 = v152;
    }
    else
    {
      v132 = (*(int (__stdcall **)(__int32, __int32, __int32, __m128 *))(v129 + 8))(
               a1->m128_i32[0],
               a1->m128_i32[1],
               a1->m128_i32[2],
               v124);
      v124[2].m128_i16[0] = v132;
      if ( v132 == (__int16)0xFFFF )
        goto LABEL_93;
      a3[1].m128_i16[1] = v132;
      *(_DWORD *)a5 += 0x30;
    }
LABEL_100:
    v133 = *(_DWORD *)(a5 + 0x3040);
    if ( v133 )
    {
      if ( (unsigned int)v124 < *(_DWORD *)a5 )
      {
        **(_DWORD **)(v133 + 4) = v124;
        *(_DWORD *)(*(_DWORD *)(a5 + 0x3040) + 4) += 4;
      }
    }
LABEL_103:
    *a4 = v172;
  }
  else
  {
LABEL_39:
    if ( v159 <= (double)*(float *)(v29 + 0xC) )
      goto LABEL_32;
    a4->m128_f32[3] = v159;
    if ( a3->m128_i8[0xE] )
    {
      v57 = NtCurrentTeb()->ThreadLocalStoragePointer;
      v58 = v57[TlsIndex];
      if ( *(_DWORD *)(v58 + 0x1A4) < *(_DWORD *)(v58 + 0x1A8) )
      {
        v59 = v57[TlsIndex];
        v60 = *(_DWORD **)(v58 + 0x1A4);
        *v60 = "StgetPoints";
        v61 = __rdtsc();
        v60[1] = v61;
        *(_DWORD *)(v59 + 0x1A4) = v60 + 3;
      }
      v151 = 0;
      v62 = v175;
      do
      {
        if ( *((_BYTE *)v168 + v151) )
        {
          v63 = **(_DWORD **)v171[v151];
          v64 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x30, 0x24);
          *(_WORD *)(v64 + 4) = 0x30;
          v156 = *(float *)(v63 + 0xC);
          v162 = (_DWORD *)v64;
          *(float *)&v148 = sub_8F2260((float *)v63) + v156 + flt_A58FF8;
          v65 = sub_8F3490(v162, (_OWORD *)(v63 + 0x20), (_OWORD *)(v63 + 0x30), v148);
          v66 = v151;
          if ( v62 != (_BYTE *)0xC )
          {
            v67 = *(_DWORD *)v171[v151];
            v68 = *(_DWORD *)(v67 + 8);
            *(_DWORD *)v62 = v67;
            *((_DWORD *)v62 + 0xFFFFFFFF) = v68;
          }
          *((_DWORD *)v62 + 0xFFFFFFFE) = *(_DWORD *)(*(_DWORD *)v62 + 4);
          *((_DWORD *)v62 + 0xFFFFFFFD) = v65;
          v69 = (_DWORD *)v171[v151];
          v174[v151] = *v69;
          *v69 = v62 + 0xFFFFFFF4;
        }
        else
        {
          v66 = v151;
          v174[v151] = 0;
        }
        v62 += 0x10;
        v151 = v66 + 1;
      }
      while ( v66 + 1 < 2 );
      v70 = (float **)a1->m128_i32[1];
      v71 = (_DWORD *)a1->m128_i32[0];
      v182 = *(float *)(a1->m128_i32[2] + 8);
      v72 = *v70;
      v73 = *v71;
      v157 = v70;
      v180 = *(float *)(*v71 + 0xC);
      v74 = *a4;
      v181 = v72[3];
      v75 = a3->m128_u8[0xE];
      v179 = v74;
      v76 = v181 + v180 + v182;
      v183 = v76 * v76;
      if ( v75 )
      {
        v163 = (int)&v16[8 * v75 + 4];
        (*(void (__thiscall **)(int, int, _DWORD, char *))(*(_DWORD *)v73 + 0x28))(v73, v163, *v16, v178);
        v77 = (__m128 *)v71[2];
        v78 = *v16;
        v79 = *v77;
        v80 = v77[1];
        v81 = v77[2];
        v82 = v77[3];
        v83 = v78;
        v84 = (__m128 *)v178;
        do
        {
          *v84 = _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v79, _mm_shuffle_ps(*v84, *v84, 0)),
                     _mm_mul_ps(v80, _mm_shuffle_ps(*v84, *v84, 0x55))),
                   _mm_add_ps(_mm_mul_ps(v81, _mm_shuffle_ps(*v84, *v84, 0xAA)), v82));
          ++v84;
          --v83;
        }
        while ( v83 > 0 );
        v85 = &v178[0x10 * v78];
        (*(void (__thiscall **)(float *, int, _DWORD, char *))(*(_DWORD *)v72 + 0x28))(
          v72,
          v163 + 2 * v78,
          a3->m128_u8[0xD],
          v85);
        v86 = (__m128 *)v157[2];
        v87 = a3->m128_u8[0xD];
        v88 = *v86;
        v89 = v86[1];
        v90 = v86[2];
        v91 = v86[3];
        v92 = (__m128 *)v85;
        do
        {
          *v92 = _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v88, _mm_shuffle_ps(*v92, *v92, 0)),
                     _mm_mul_ps(v89, _mm_shuffle_ps(*v92, *v92, 0x55))),
                   _mm_add_ps(_mm_mul_ps(v90, _mm_shuffle_ps(*v92, *v92, 0xAA)), v91));
          ++v92;
          --v87;
        }
        while ( v87 > 0 );
      }
      sub_939BB0(v16, (__m128 *)v178, 0, (__m128 **)a5, a1->m128_i32[3]);
      v93 = a3->m128_u8[0xE];
      if ( v93 )
      {
        v94 = *(_DWORD *)(a5 + 0x3040);
        if ( v94 )
        {
          **(_DWORD **)(v94 + 4) = *(_DWORD *)a5 - 0x30 * v93;
          *(_DWORD *)(*(_DWORD *)(a5 + 0x3040) + 4) += 4;
        }
      }
    }
  }
  for ( m = 0; m < 2; ++m )
  {
    if ( v174[m] )
    {
      v135 = (int **)v171[m];
      v136 = **v135;
      if ( *(_WORD *)(v136 + 4) )
      {
        if ( !--*(_WORD *)(v136 + 6) )
          (**(void (__thiscall ***)(int, int))v136)(v136, 1);
      }
      *v135 = (int *)v174[m];
    }
  }
  v137 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v138 = TlsIndex;
  a2->m128_i8[2] = a3->m128_i8[0xE];
  v139 = v137[v138];
  if ( *(_DWORD *)(v139 + 0x1A4) < *(_DWORD *)(v139 + 0x1A8) )
  {
    v140 = *(_DWORD **)(v139 + 0x1A4);
    *v140 = "lt";
    v141 = __rdtsc();
    v168[0] = v141;
    v140[1] = v141;
    *(_DWORD *)(v137[v138] + 0x1A4) = v140 + 3;
  }
  v142 = v137[v138];
  if ( *(_DWORD *)(v142 + 0x1A4) < *(_DWORD *)(v142 + 0x1A8) )
  {
    v143 = v137[v138];
    v144 = *(_DWORD **)(v142 + 0x1A4);
    *v144 = "Et";
    v145 = __rdtsc();
    v168[0] = v145;
    v144[1] = v145;
    *(_DWORD *)(v143 + 0x1A4) = v144 + 3;
  }
  return (unsigned int)a3 + ((2 * (a3->m128_u8[0xC] + a3->m128_u8[0xD] + 4 * a3->m128_u8[0xE]) + 0x1F) & 0xFFFFFFF0);
}
