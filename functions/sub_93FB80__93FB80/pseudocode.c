void __thiscall sub_93FB80(float *this, __m128 *a2, unsigned __int8 *a3, __m128 *a4)
{
  int v6; // ecx
  double v7; // st7
  int v8; // edx
  double v9; // st7
  double v10; // st6
  double v11; // st7
  double v12; // st6
  double v13; // st7
  int v14; // edx
  double v15; // st7
  double v16; // st6
  double v17; // st7
  int v18; // edx
  double v19; // st7
  double v20; // st6
  double v21; // st7
  int v22; // edx
  double v23; // st7
  double v24; // st6
  double v25; // st7
  int v26; // edx
  double v27; // st7
  double v28; // st6
  double v29; // st7
  int v30; // edx
  double v31; // st7
  double v32; // st6
  double v33; // st7
  int v34; // eax
  double v35; // st6
  double v36; // st7
  double v37; // st6
  double v38; // st7
  int v39; // eax
  double v40; // st6
  double v41; // st7
  int v42; // eax
  double v43; // st6
  int v44; // edx
  unsigned __int8 *v45; // esi
  double v46; // st7
  double v47; // st6
  float v48; // ecx
  int v49; // edx
  int v50; // eax
  double v51; // st7
  int v52; // ecx
  double v53; // st7
  int v54; // edx
  int v55; // eax
  int v56; // edx
  double v57; // st7
  int v58; // edx
  __m128 v59; // xmm1
  __m128 v60; // xmm2
  __m128 v61; // xmm0
  __m128 v62; // xmm1
  __m128 v63; // xmm3
  __m128 v64; // xmm0
  float *v65; // eax
  unsigned int v66; // ecx
  __m128 v67; // xmm4
  unsigned int v68; // edx
  __m128 *v69; // ecx
  __m128 v70; // xmm2
  __m128 v71; // xmm1
  int v72; // eax
  bool v73; // cc
  __m128 v74; // xmm0
  __m128 v75; // xmm1
  __m128 v76; // xmm0
  __m128 v77; // xmm1
  __m128 v78; // xmm3
  __m128 v79; // xmm0
  float *v80; // ecx
  unsigned int v81; // eax
  __m128 v82; // xmm4
  unsigned int v83; // edx
  __m128 *v84; // eax
  __m128 v85; // xmm2
  __m128 v86; // xmm1
  __m128 v87; // xmm0
  __m128 v88; // xmm3
  __m128 v89; // xmm2
  int v90; // eax
  __m128 v91; // xmm1
  int v92; // edx
  int v93; // ecx
  double v94; // st7
  int v95; // eax
  double v96; // st7
  double v97; // st7
  double v98; // st7
  __int32 v99; // edx
  __int32 v100; // ecx
  double v101; // st7
  __int32 v102; // ecx
  __int32 v103; // edx
  bool v104; // c0
  __m128 v105; // xmm0
  double v106; // st7
  double v107; // st6
  __m128 v108; // xmm0
  int v109; // eax
  __m128 v110; // xmm2
  int v111; // edx
  __m128 v112; // xmm1
  double v113; // st7
  __m128 v114; // xmm2
  __m128 v115; // xmm0
  __m128 v116; // xmm0
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // edi
  __int32 v121; // edi
  int v122; // eax
  int v123; // esi
  int v124; // edx
  int (__thiscall ***v125)(_DWORD, char *, int, _DWORD, _DWORD, int, __int32); // ecx
  int (__thiscall **v126)(_DWORD, char *, int, _DWORD, _DWORD, int, __int32); // ebx
  int v127; // eax
  float *v128; // esi
  int v129; // eax
  int v130; // ecx
  int v131[4]; // [esp+0h] [ebp-430h]
  int v132[4]; // [esp+10h] [ebp-420h]
  int v133[58]; // [esp+20h] [ebp-410h]
  float v134; // [esp+11Ch] [ebp-314h]
  int v135; // [esp+130h] [ebp-300h]
  float v136; // [esp+134h] [ebp-2FCh]
  float v137; // [esp+138h] [ebp-2F8h]
  float v138; // [esp+13Ch] [ebp-2F4h]
  float v139; // [esp+140h] [ebp-2F0h]
  int v140; // [esp+144h] [ebp-2ECh]
  float *v141; // [esp+148h] [ebp-2E8h]
  unsigned int v142; // [esp+14Ch] [ebp-2E4h]
  unsigned int v143; // [esp+150h] [ebp-2E0h]
  float v144; // [esp+154h] [ebp-2DCh]
  char v145; // [esp+15Bh] [ebp-2D5h] BYREF
  __int32 v146; // [esp+15Ch] [ebp-2D4h]
  __m128 v147; // [esp+160h] [ebp-2D0h] BYREF
  __m128 v148; // [esp+170h] [ebp-2C0h] BYREF
  __m128 v149; // [esp+180h] [ebp-2B0h]
  float v150; // [esp+190h] [ebp-2A0h]
  __int32 v151; // [esp+194h] [ebp-29Ch]
  float v152; // [esp+198h] [ebp-298h]
  __int32 v153; // [esp+19Ch] [ebp-294h]
  __int32 v154; // [esp+1A0h] [ebp-290h]
  unsigned int v155; // [esp+1B4h] [ebp-27Ch]
  unsigned int v156; // [esp+1B8h] [ebp-278h]
  __int32 v157; // [esp+1BCh] [ebp-274h]
  __m128 v158; // [esp+1C0h] [ebp-270h]
  __m128 v159; // [esp+1D0h] [ebp-260h]
  int *v160[3]; // [esp+1E4h] [ebp-24Ch] BYREF
  __m128 v161; // [esp+1F0h] [ebp-240h] BYREF
  __m128 v162; // [esp+200h] [ebp-230h]
  __m128 v163; // [esp+210h] [ebp-220h] BYREF
  __m128 v164; // [esp+220h] [ebp-210h] BYREF
  char v165[512]; // [esp+230h] [ebp-200h] BYREF

  v141 = this;
  while ( 2 )
  {
    v6 = *a3;
    v140 = 0x3E7;
    switch ( v6 )
    {
      case 0:
        return;
      case 1:
      case 2:
      case 3:
      case 4:
        v109 = a3[2];
        v110 = *a4;
        v135 = a3[1];
        v111 = a3[3];
        v147.m128_f32[0] = (float)v135;
        v147.m128_i32[3] = 0;
        v147.m128_f32[1] = (float)v109;
        v135 = 1 << v6;
        v147.m128_f32[2] = (float)v111;
        v112 = v147;
        v113 = (double)(1 << v6);
        *a4 = _mm_sub_ps(v110, v147);
        v114 = _mm_sub_ps(a4[1], v112);
        *(float *)&v135 = v113;
        v115 = (__m128)(unsigned int)v135;
        a4[1] = v114;
        v116 = _mm_shuffle_ps(v115, v115, 0);
        *a4 = _mm_mul_ps(*a4, v116);
        a4[1] = _mm_mul_ps(a4[1], v116);
        v148 = _mm_mul_ps(_mm_add_ps(*a2, v112), v116);
        v151 = v6 + a2[2].m128_i32[1];
        a3 += 4;
        v152 = v113 * a2[2].m128_f32[2];
        v149 = _mm_mul_ps(v116, a2[1]);
        v150 = v113 * a2[2].m128_f32[0];
        v154 = a2[3].m128_i32[0];
        v153 = a2[2].m128_i32[3];
        a2 = &v148;
        continue;
      case 5:
        a3 += a3[1] + 2;
        continue;
      case 6:
        a3 += 0x100 * a3[1] + a3[2] + 3;
        continue;
      case 7:
        a3 += 0x100 * (a3[2] + (a3[1] << 8)) + a3[3] + 4;
        continue;
      case 9:
        v135 = a3[1];
        if ( a2 != &v148 )
        {
          sub_93FB40(&v148, (int)a2);
          a2 = &v148;
        }
        v153 += v135;
        a3 += 2;
        continue;
      case 0xA:
        v117 = a3[2] + (a3[1] << 8);
        v135 = v117;
        if ( a2 != &v148 )
        {
          sub_93FB40(&v148, (int)a2);
          v117 = v135;
          a2 = &v148;
        }
        v153 += v117;
        a3 += 3;
        continue;
      case 0xB:
        v118 = a3[4] + ((a3[3] + ((a3[2] + (a3[1] << 8)) << 8)) << 8);
        v135 = v118;
        if ( a2 != &v148 )
        {
          sub_93FB40(&v148, (int)a2);
          v118 = v135;
          a2 = &v148;
        }
        v153 = v118;
        a3 += 5;
        continue;
      case 0x10:
      case 0x11:
      case 0x12:
        v56 = a3[1];
        v135 = a3[2];
        v140 = v6 - 0x10;
        v57 = (double)v135;
        v135 = v56;
        v137 = v57 - a2[0xFFFFFFFD].m128_f32[v6];
        v138 = (double)v56 + a2[0xFFFFFFFD].m128_f32[v6];
        v11 = a4[0xFFFFFFFC].m128_f32[v6];
        v12 = a4[0xFFFFFFFD].m128_f32[v6];
        goto LABEL_16;
      case 0x13:
        v7 = a2[1].m128_f32[2] + a2[1].m128_f32[1];
        v8 = a3[1];
        v135 = 2 * a3[2];
        v9 = v7 + v7;
        v10 = (double)v135;
        v135 = 2 * v8;
        v137 = v10 - v9;
        v138 = (double)(2 * v8) + v9;
        v11 = a4->m128_f32[2] + a4->m128_f32[1];
        v12 = a4[1].m128_f32[2] + a4[1].m128_f32[1];
        goto LABEL_16;
      case 0x14:
        v13 = a2[1].m128_f32[2] + a2[1].m128_f32[1];
        v14 = a3[1];
        v135 = 2 * a3[2] - 0xFF;
        v15 = v13 + v13;
        v16 = (double)v135;
        v135 = 2 * v14 - 0xFF;
        v137 = v16 - v15;
        v138 = (double)v135 + v15;
        v11 = a4->m128_f32[1] - a4->m128_f32[2];
        v12 = a4[1].m128_f32[1] - a4[1].m128_f32[2];
        goto LABEL_16;
      case 0x15:
        v17 = a2[1].m128_f32[2] + a2[1].m128_f32[0];
        v18 = a3[1];
        v135 = 2 * a3[2];
        v19 = v17 + v17;
        v20 = (double)v135;
        v135 = 2 * v18;
        v137 = v20 - v19;
        v138 = (double)(2 * v18) + v19;
        v11 = a4->m128_f32[2] + a4->m128_f32[0];
        v12 = a4[1].m128_f32[2] + a4[1].m128_f32[0];
        goto LABEL_16;
      case 0x16:
        v21 = a2[1].m128_f32[2] + a2[1].m128_f32[0];
        v22 = a3[1];
        v135 = 2 * a3[2] - 0xFF;
        v23 = v21 + v21;
        v24 = (double)v135;
        v135 = 2 * v22 - 0xFF;
        v137 = v24 - v23;
        v138 = (double)v135 + v23;
        v11 = a4->m128_f32[0] - a4->m128_f32[2];
        v12 = a4[1].m128_f32[0] - a4[1].m128_f32[2];
        goto LABEL_16;
      case 0x17:
        v25 = a2[1].m128_f32[1] + a2[1].m128_f32[0];
        v26 = a3[1];
        v135 = 2 * a3[2];
        v27 = v25 + v25;
        v28 = (double)v135;
        v135 = 2 * v26;
        v137 = v28 - v27;
        v138 = (double)(2 * v26) + v27;
        v11 = a4->m128_f32[1] + a4->m128_f32[0];
        v12 = a4[1].m128_f32[1] + a4[1].m128_f32[0];
        goto LABEL_16;
      case 0x18:
        v29 = a2[1].m128_f32[1] + a2[1].m128_f32[0];
        v30 = a3[1];
        v135 = 2 * a3[2] - 0xFF;
        v31 = v29 + v29;
        v32 = (double)v135;
        v135 = 2 * v30 - 0xFF;
        v137 = v32 - v31;
        v138 = (double)v135 + v31;
        v11 = a4->m128_f32[0] - a4->m128_f32[1];
        v12 = a4[1].m128_f32[0] - a4[1].m128_f32[1];
        goto LABEL_16;
      case 0x19:
        v33 = a2[2].m128_f32[0];
        v34 = a3[1];
        v135 = 3 * a3[2];
        v35 = (double)v135;
        v135 = 3 * v34;
        v137 = v35 - v33;
        v138 = (double)(3 * v34) + v33;
        v11 = a4->m128_f32[2] + a4->m128_f32[1] + a4->m128_f32[0];
        v12 = a4[1].m128_f32[2] + a4[1].m128_f32[1] + a4[1].m128_f32[0];
        goto LABEL_16;
      case 0x1A:
        v36 = a2[2].m128_f32[0];
        v135 = 3 * (a3[2] - 0x55);
        v37 = (double)v135 - v36;
        v135 = 3 * (a3[1] - 0x55);
        v137 = v37;
        v138 = (double)v135 + v36;
        v11 = a4->m128_f32[1] + a4->m128_f32[0] - a4->m128_f32[2];
        v12 = a4[1].m128_f32[1] + a4[1].m128_f32[0] - a4[1].m128_f32[2];
        goto LABEL_16;
      case 0x1B:
        v38 = a2[2].m128_f32[0];
        v39 = a3[1];
        v135 = 3 * (a3[2] - 0x55);
        v40 = (double)v135;
        v135 = 3 * (v39 - 0x55);
        v137 = v40 - v38;
        v138 = (double)v135 + v38;
        v11 = a4->m128_f32[0] - a4->m128_f32[1] + a4->m128_f32[2];
        v12 = a4[1].m128_f32[0] - a4[1].m128_f32[1] + a4[1].m128_f32[2];
        goto LABEL_16;
      case 0x1C:
        v41 = a2[2].m128_f32[0];
        v42 = a3[1];
        v135 = 3 * (a3[2] - 0xAA);
        v43 = (double)v135;
        v135 = 3 * (v42 - 0xAA);
        v137 = v43 - v41;
        v138 = (double)v135 + v41;
        v11 = a4->m128_f32[0] - a4->m128_f32[1] - a4->m128_f32[2];
        v12 = a4[1].m128_f32[0] - a4[1].m128_f32[1] - a4[1].m128_f32[2];
LABEL_16:
        v55 = a3[3];
        v45 = a3 + 4;
        v139 = 0.0;
        goto LABEL_17;
      case 0x20:
      case 0x21:
      case 0x22:
        v44 = a3[2];
        v135 = a3[1];
        v45 = a3 + 3;
        v46 = (double)v135;
        v140 = v6 - 0x20;
        v47 = fConstant_1;
        v135 = v44;
        v137 = v46 - a2[0xFFFFFFF9].m128_f32[v6];
        v138 = v47 + v46 + a2[0xFFFFFFF9].m128_f32[v6];
        v11 = a4[0xFFFFFFF8].m128_f32[v6];
        v12 = a4[0xFFFFFFF9].m128_f32[v6];
        v48 = 0.0;
        v139 = 0.0;
        goto LABEL_18;
      case 0x23:
      case 0x24:
      case 0x25:
        v49 = a3[1];
        v135 = a3[2];
        v50 = a3[3];
        v51 = (double)v135;
        v52 = v6 - 0x23;
        v135 = v49;
        v53 = v51 - a2[1].m128_f32[v52];
        v54 = a3[6];
        v140 = v52;
        v137 = v53;
        v45 = a3 + 7;
        v138 = (double)v135 + a2[1].m128_f32[v52];
        v11 = a4->m128_f32[v52];
        v12 = a4[1].m128_f32[v52];
        LODWORD(v139) = v45[0xFFFFFFFD] + (v50 << 8);
        v55 = v54 + (v45[0xFFFFFFFE] << 8);
LABEL_17:
        v48 = v139;
        v135 = v55;
LABEL_18:
        v136 = v12;
        if ( v136 >= (double)v137 || v11 >= v137 )
        {
          v58 = v135;
          a3 = &v45[v135];
          if ( v11 <= v138 || v136 <= (double)v138 )
          {
            v59 = *a4;
            v60 = a4[1];
            v161 = *a4;
            v162 = v60;
            v144 = v11 - v138;
            *(float *)&v142 = v11 - v137;
            *(float *)&v143 = v136 - v138;
            v136 = v136 - v137;
            if ( v144 >= (double)*(float *)&v143 )
            {
              if ( v136 * *(float *)&v142 < *(float *)&SrcStr )
              {
                *(float *)&v142 = *(float *)&v142 / (*(float *)&v142 - v136);
                v76 = _mm_shuffle_ps((__m128)v142, (__m128)v142, 0);
                v162 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v76), v59), _mm_mul_ps(v76, v60));
              }
              sub_93FB80(v141, a2, a3, &v161);
              if ( *(float *)&v143 * v144 < *(float *)&SrcStr )
              {
                v77 = a4[1];
                v78 = (__m128)xmmword_A6DFE0;
                *(float *)&v143 = v144 / (v144 - *(float *)&v143);
                v79 = _mm_shuffle_ps((__m128)v143, (__m128)v143, 0);
                *a4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v78, v79), *a4), _mm_mul_ps(v79, v77));
              }
              v80 = v141;
              if ( v141[7] < (double)v141[8] )
              {
                v81 = *((_DWORD *)v141 + 7);
                *((_DWORD *)v141 + 8) = v81;
                v82 = (__m128)xmmword_A6DFE0;
                v83 = v81;
                v84 = *((__m128 **)v80 + 0xB);
                v85 = v84[1];
                v86 = *(__m128 *)(*((_DWORD *)v80 + 4) + 0x10);
                v156 = v83;
                v87 = _mm_shuffle_ps((__m128)v83, (__m128)v83, 0);
                v88 = _mm_mul_ps(v87, v85);
                v89 = *v84;
                v90 = v140;
                v73 = v140 < 3;
                a4[1] = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v82, v87), v89), v88), v86);
                v91 = a4[1];
                v146 = a2[2].m128_i32[2];
                a4[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v146, (__m128)(unsigned int)v146, 0), v91);
                a4[1] = _mm_sub_ps(a4[1], *a2);
                if ( v73 && a4[1].m128_f32[v90] > (double)v138 )
                  return;
              }
              a3 += LODWORD(v139) - v135;
            }
            else
            {
              if ( *(float *)&v143 * v144 < *(float *)&SrcStr )
              {
                *(float *)&v135 = v144 / (v144 - *(float *)&v143);
                v61 = _mm_shuffle_ps((__m128)(unsigned int)v135, (__m128)(unsigned int)v135, 0);
                v162 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v61), v59), _mm_mul_ps(v61, v60));
              }
              sub_93FB80(v141, a2, &a3[LODWORD(v48) - v58], &v161);
              if ( v136 * *(float *)&v142 < *(float *)&SrcStr )
              {
                v62 = a4[1];
                v63 = (__m128)xmmword_A6DFE0;
                *(float *)&v135 = *(float *)&v142 / (*(float *)&v142 - v136);
                v64 = _mm_shuffle_ps((__m128)(unsigned int)v135, (__m128)(unsigned int)v135, 0);
                *a4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v63, v64), *a4), _mm_mul_ps(v64, v62));
              }
              if ( v141[7] < (double)v141[8] )
              {
                v65 = v141;
                v66 = *((_DWORD *)v141 + 7);
                *((_DWORD *)v141 + 8) = v66;
                v67 = (__m128)xmmword_A6DFE0;
                v68 = v66;
                v69 = *((__m128 **)v65 + 0xB);
                v70 = v69[1];
                v71 = *(__m128 *)(*((_DWORD *)v65 + 4) + 0x10);
                v72 = v140;
                v73 = v140 < 3;
                v155 = v68;
                v74 = _mm_shuffle_ps((__m128)v68, (__m128)v68, 0);
                a4[1] = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v67, v74), *v69), _mm_mul_ps(v74, v70)), v71);
                v75 = a4[1];
                v157 = a2[2].m128_i32[2];
                a4[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v157, (__m128)(unsigned int)v157, 0), v75);
                a4[1] = _mm_sub_ps(a4[1], *a2);
                if ( v73 && a4[1].m128_f32[v72] < (double)v137 )
                  return;
              }
            }
          }
        }
        else
        {
          a3 = &v45[LODWORD(v48)];
        }
        continue;
      case 0x26:
      case 0x27:
      case 0x28:
        v135 = a3[1];
        v97 = (double)v135;
        v93 = v6 - 0x26;
        v95 = 4 * v93 + 0x10;
        v135 = a3[2];
        a3 += 3;
        v137 = v97 - *(float *)((char *)a2->m128_f32 + v95);
        v96 = (double)v135;
        goto LABEL_42;
      case 0x29:
      case 0x2A:
      case 0x2B:
        v92 = a3[4];
        v135 = a3[3] + (((a3[1] << 8) + a3[2]) << 8);
        v93 = v6 - 0x29;
        v94 = (double)v135 * v141[5] * a2[2].m128_f32[2] - a2->m128_f32[v93];
        v135 = a3[6] + ((a3[5] + (v92 << 8)) << 8);
        v95 = 4 * v93 + 0x10;
        a3 += 7;
        v137 = v94 - a2[1].m128_f32[v93];
        v96 = (double)v135 * v141[5] * a2[2].m128_f32[2] - a2->m128_f32[v93];
LABEL_42:
        v98 = v96 + *(float *)((char *)a2->m128_f32 + v95);
        v139 = a4->m128_f32[v93];
        v136 = *(float *)((char *)a4->m128_f32 + v95);
        if ( v139 < (double)v136 )
        {
          if ( v136 < (double)v137 || v139 > v98 )
            return;
          v140 = 0;
LABEL_49:
          v99 = a4->m128_i32[1];
          v158.m128_i32[0] = a4->m128_i32[0];
          v100 = a4->m128_i32[2];
          *(float *)&v135 = v139 - v98;
          *(unsigned __int64 *)((char *)v158.m128_u64 + 4) = __PAIR64__(v100, v99);
          v101 = v136 - v98;
          v102 = a4[1].m128_i32[0];
          v158.m128_i32[3] = a4->m128_i32[3];
          v103 = a4[1].m128_i32[1];
          v104 = *(float *)&v135 * v101 < *(float *)&SrcStr;
          v159.m128_i32[0] = v102;
          *(unsigned __int64 *)((char *)v159.m128_u64 + 4) = __PAIR64__(a4[1].m128_i32[2], v103);
          v159.m128_i32[3] = a4[1].m128_i32[3];
          if ( v104 )
          {
            v134 = *(float *)&v135 / (*(float *)&v135 - v101);
            sub_535AA0(&v163, v134);
            v105 = _mm_shuffle_ps(v163, v163, 0);
            a4[-v140 + 1] = _mm_add_ps(
                              _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v105), v158),
                              _mm_mul_ps(v105, v159));
          }
          v106 = v139 - v137;
          v107 = v136 - v137;
          if ( v107 * v106 < *(float *)&SrcStr )
          {
            v134 = v106 / (v106 - v107);
            sub_535AA0(&v164, v134);
            v108 = _mm_shuffle_ps(v164, v164, 0);
            a4[v140] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v108), v158), _mm_mul_ps(v108, v159));
          }
          continue;
        }
        if ( v139 >= (double)v137 && v136 <= v98 )
        {
          v140 = 1;
          goto LABEL_49;
        }
        return;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
      case 0x3B:
      case 0x3C:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4A:
      case 0x4B:
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x4F:
        v120 = v6 - 0x30;
        goto LABEL_78;
      case 0x50:
        v120 = a3[1];
        goto LABEL_78;
      case 0x51:
        v120 = a3[2] + (a3[1] << 8);
        goto LABEL_78;
      case 0x52:
        v120 = a3[3] + ((a3[2] + (a3[1] << 8)) << 8);
        goto LABEL_78;
      case 0x53:
        v120 = ((a3[2] + (a3[1] << 8)) << 0x10) + a3[4] + (a3[3] << 8);
LABEL_78:
        v121 = a2[2].m128_i32[3] + v120;
        v122 = *((_DWORD *)v141 + 0xB);
        v123 = *(_DWORD *)(**(_DWORD **)(v122 + 0x38) + 0xC);
        v124 = *(_DWORD *)(v122 + 0x30);
        v125 = *(int (__thiscall ****)(_DWORD, char *, int, _DWORD, _DWORD, int, __int32))(v124 + 4);
        v126 = *v125;
        v146 = (__int32)v125;
        if ( *(_BYTE *)(*v126)(v125, &v145, v124, *(_DWORD *)(v122 + 0x34), *(_DWORD *)(v122 + 0x38), v123, v121) )
        {
          v127 = (*(int (__thiscall **)(int, __int32, char *))(*(_DWORD *)v123 + 0x28))(v123, v121, v165);
          v128 = v141;
          v147.m128_i32[3] = *(_DWORD *)(*((_DWORD *)v141 + 0xB) + 0x38);
          v147.m128_i32[2] = *(_DWORD *)(v147.m128_i32[3] + 8);
          v147.m128_u64[0] = __PAIR64__(v121, v127);
          v129 = (*(int (__thiscall **)(int))(*(_DWORD *)v127 + 8))(v127);
          v130 = *((_DWORD *)v128 + 0xB);
          (*(void (__cdecl **)(_DWORD, __m128 *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v130 + 0x30)
                                                                        + 0x14
                                                                        * (*(unsigned __int8 *)(**(_DWORD **)(v130 + 0x30)
                                                                                              + 0x20
                                                                                              * *((_DWORD *)v128 + 6)
                                                                                              + v129
                                                                                              + 0x190)
                                                                         + 0x7B)))(
            *(_DWORD *)(v130 + 0x34),
            &v147,
            *(_DWORD *)(v130 + 0x30),
            *((_DWORD *)v128 + 9),
            *((_DWORD *)v128 + 0xA));
          v128[7] = *(float *)(*((_DWORD *)v128 + 9) + 4);
        }
        return;
      case 0x60:
      case 0x61:
      case 0x62:
      case 0x63:
        v119 = a3[1];
        a3 += 2;
        v133[v6] = v119;
        goto LABEL_69;
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x67:
        v132[v6] = a3[2] + (a3[1] << 8);
        a3 += 3;
        goto LABEL_69;
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
        v131[v6] = a3[4] + ((a3[3] + ((a3[2] + (a3[1] << 8)) << 8)) << 8);
        a3 += 5;
LABEL_69:
        if ( a2 != &v148 )
        {
          v148 = *a2;
          v149 = a2[1];
          v150 = a2[2].m128_f32[0];
          v151 = a2[2].m128_i32[1];
          v152 = a2[2].m128_f32[2];
          v153 = a2[2].m128_i32[3];
          a2 = &v148;
        }
        continue;
      default:
        sub_8BBFB0((int)v160, (int)a2, v165, 0x200u, 1);
        sub_8BBDB0(v160, "Unknown command.\n");
        (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
          dword_BA7FB0,
          3,
          0x1298FEDD,
          v165,
          ".\\collide\\mopp\\machine\\hkMoppAabbCastVirtualMachine.cpp",
          0x1C7);
        sub_8BC000(v160);
        continue;
    }
  }
}
