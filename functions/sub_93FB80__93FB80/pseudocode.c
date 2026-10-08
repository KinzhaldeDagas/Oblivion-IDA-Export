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

  v141 = this; /*0x93fb98*/
  while ( 2 ) /*0x93fba2*/
  {
    v6 = *a3; /*0x93fba2*/
    v140 = 0x3E7; /*0x93fba8*/
    switch ( v6 ) /*0x93fbbd*/
    {
      case 0: /*0x93fbbd*/
        return;
      case 1: /*0x93fbbd*/
      case 2: /*0x93fbbd*/
      case 3: /*0x93fbbd*/
      case 4: /*0x93fbbd*/
        v109 = a3[2]; /*0x9405a2*/
        v110 = *a4; /*0x9405a6*/
        v135 = a3[1]; /*0x9405a9*/
        v111 = a3[3]; /*0x9405ad*/
        v147.m128_f32[0] = (float)v135; /*0x9405be*/
        v147.m128_i32[3] = 0; /*0x9405cc*/
        v147.m128_f32[1] = (float)v109; /*0x9405d4*/
        v135 = 1 << v6; /*0x9405dc*/
        v147.m128_f32[2] = (float)v111; /*0x9405e0*/
        v112 = v147; /*0x9405e4*/
        v113 = (double)(1 << v6); /*0x9405e9*/
        *a4 = _mm_sub_ps(v110, v147); /*0x9405f0*/
        v114 = _mm_sub_ps(a4[1], v112); /*0x9405f7*/
        *(float *)&v135 = v113; /*0x9405fa*/
        v115 = (__m128)(unsigned int)v135; /*0x9405fe*/
        a4[1] = v114; /*0x940606*/
        v116 = _mm_shuffle_ps(v115, v115, 0); /*0x94060d*/
        *a4 = _mm_mul_ps(*a4, v116); /*0x940614*/
        a4[1] = _mm_mul_ps(a4[1], v116); /*0x94061e*/
        v148 = _mm_mul_ps(_mm_add_ps(*a2, v112), v116); /*0x94062b*/
        v151 = v6 + a2[2].m128_i32[1]; /*0x940635*/
        a3 += 4; /*0x94063c*/
        v152 = v113 * a2[2].m128_f32[2]; /*0x94063f*/
        v149 = _mm_mul_ps(v116, a2[1]); /*0x94064a*/
        v150 = v113 * a2[2].m128_f32[0]; /*0x940652*/
        v154 = a2[3].m128_i32[0]; /*0x940659*/
        v153 = a2[2].m128_i32[3]; /*0x940663*/
        a2 = &v148; /*0x940667*/
        continue; /*0x94066b*/
      case 5: /*0x93fbbd*/
        a3 += a3[1] + 2; /*0x940560*/
        continue; /*0x940564*/
      case 6: /*0x93fbbd*/
        a3 += 0x100 * a3[1] + a3[2] + 3; /*0x940576*/
        continue; /*0x94057a*/
      case 7: /*0x93fbbd*/
        a3 += 0x100 * (a3[2] + (a3[1] << 8)) + a3[3] + 4; /*0x940595*/
        continue; /*0x940599*/
      case 9: /*0x93fbbd*/
        v135 = a3[1]; /*0x94067a*/
        if ( a2 != &v148 ) /*0x94067e*/
        {
          sub_93FB40(&v148, (int)a2); /*0x940685*/
          a2 = &v148; /*0x94068a*/
        }
        v153 += v135; /*0x940698*/
        a3 += 2; /*0x94069c*/
        continue; /*0x94069f*/
      case 0xA: /*0x93fbbd*/
        v117 = a3[2] + (a3[1] << 8); /*0x9406af*/
        v135 = v117; /*0x9406b7*/
        if ( a2 != &v148 ) /*0x9406bb*/
        {
          sub_93FB40(&v148, (int)a2); /*0x9406c2*/
          v117 = v135; /*0x9406c7*/
          a2 = &v148; /*0x9406cb*/
        }
        v153 += v117; /*0x9406cf*/
        a3 += 3; /*0x9406d3*/
        continue; /*0x9406d6*/
      case 0xB: /*0x93fbbd*/
        v118 = a3[4] + ((a3[3] + ((a3[2] + (a3[1] << 8)) << 8)) << 8); /*0x9406f8*/
        v135 = v118; /*0x940700*/
        if ( a2 != &v148 ) /*0x940704*/
        {
          sub_93FB40(&v148, (int)a2); /*0x94070b*/
          v118 = v135; /*0x940710*/
          a2 = &v148; /*0x940714*/
        }
        v153 = v118; /*0x940718*/
        a3 += 5; /*0x94071c*/
        continue; /*0x94071f*/
      case 0x10: /*0x93fbbd*/
      case 0x11: /*0x93fbbd*/
      case 0x12: /*0x93fbbd*/
        v56 = a3[1]; /*0x93ff41*/
        v135 = a3[2]; /*0x93ff45*/
        v140 = v6 - 0x10; /*0x93ff4c*/
        v57 = (double)v135; /*0x93ff50*/
        v135 = v56; /*0x93ff54*/
        v137 = v57 - a2[0xFFFFFFFD].m128_f32[v6]; /*0x93ff5c*/
        v138 = (double)v56 + a2[0xFFFFFFFD].m128_f32[v6]; /*0x93ff68*/
        v11 = a4[0xFFFFFFFC].m128_f32[v6]; /*0x93ff6c*/
        v12 = a4[0xFFFFFFFD].m128_f32[v6]; /*0x93ff6f*/
        goto LABEL_16; /*0x93ff6f*/
      case 0x13: /*0x93fbbd*/
        v7 = a2[1].m128_f32[2] + a2[1].m128_f32[1]; /*0x93fbcb*/
        v8 = a3[1]; /*0x93fbce*/
        v135 = 2 * a3[2]; /*0x93fbd4*/
        v9 = v7 + v7; /*0x93fbda*/
        v10 = (double)v135; /*0x93fbdc*/
        v135 = 2 * v8; /*0x93fbe0*/
        v137 = v10 - v9; /*0x93fbe6*/
        v138 = (double)(2 * v8) + v9; /*0x93fbf0*/
        v11 = a4->m128_f32[2] + a4->m128_f32[1]; /*0x93fbf9*/
        v12 = a4[1].m128_f32[2] + a4[1].m128_f32[1]; /*0x93fbff*/
        goto LABEL_16; /*0x93fc02*/
      case 0x14: /*0x93fbbd*/
        v13 = a2[1].m128_f32[2] + a2[1].m128_f32[1]; /*0x93fc0e*/
        v14 = a3[1]; /*0x93fc11*/
        v135 = 2 * a3[2] - 0xFF; /*0x93fc1c*/
        v15 = v13 + v13; /*0x93fc27*/
        v16 = (double)v135; /*0x93fc29*/
        v135 = 2 * v14 - 0xFF; /*0x93fc2d*/
        v137 = v16 - v15; /*0x93fc33*/
        v138 = (double)v135 + v15; /*0x93fc3d*/
        v11 = a4->m128_f32[1] - a4->m128_f32[2]; /*0x93fc46*/
        v12 = a4[1].m128_f32[1] - a4[1].m128_f32[2]; /*0x93fc4c*/
        goto LABEL_16; /*0x93fc4f*/
      case 0x15: /*0x93fbbd*/
        v17 = a2[1].m128_f32[2] + a2[1].m128_f32[0]; /*0x93fc5b*/
        v18 = a3[1]; /*0x93fc5e*/
        v135 = 2 * a3[2]; /*0x93fc64*/
        v19 = v17 + v17; /*0x93fc6a*/
        v20 = (double)v135; /*0x93fc6c*/
        v135 = 2 * v18; /*0x93fc70*/
        v137 = v20 - v19; /*0x93fc76*/
        v138 = (double)(2 * v18) + v19; /*0x93fc80*/
        v11 = a4->m128_f32[2] + a4->m128_f32[0]; /*0x93fc89*/
        v12 = a4[1].m128_f32[2] + a4[1].m128_f32[0]; /*0x93fc8e*/
        goto LABEL_16; /*0x93fc91*/
      case 0x16: /*0x93fbbd*/
        v21 = a2[1].m128_f32[2] + a2[1].m128_f32[0]; /*0x93fc9d*/
        v22 = a3[1]; /*0x93fca0*/
        v135 = 2 * a3[2] - 0xFF; /*0x93fcab*/
        v23 = v21 + v21; /*0x93fcb6*/
        v24 = (double)v135; /*0x93fcb8*/
        v135 = 2 * v22 - 0xFF; /*0x93fcbc*/
        v137 = v24 - v23; /*0x93fcc2*/
        v138 = (double)v135 + v23; /*0x93fccc*/
        v11 = a4->m128_f32[0] - a4->m128_f32[2]; /*0x93fcd4*/
        v12 = a4[1].m128_f32[0] - a4[1].m128_f32[2]; /*0x93fcda*/
        goto LABEL_16; /*0x93fcdd*/
      case 0x17: /*0x93fbbd*/
        v25 = a2[1].m128_f32[1] + a2[1].m128_f32[0]; /*0x93fce9*/
        v26 = a3[1]; /*0x93fcec*/
        v135 = 2 * a3[2]; /*0x93fcf2*/
        v27 = v25 + v25; /*0x93fcf8*/
        v28 = (double)v135; /*0x93fcfa*/
        v135 = 2 * v26; /*0x93fcfe*/
        v137 = v28 - v27; /*0x93fd04*/
        v138 = (double)(2 * v26) + v27; /*0x93fd0e*/
        v11 = a4->m128_f32[1] + a4->m128_f32[0]; /*0x93fd17*/
        v12 = a4[1].m128_f32[1] + a4[1].m128_f32[0]; /*0x93fd1c*/
        goto LABEL_16; /*0x93fd1f*/
      case 0x18: /*0x93fbbd*/
        v29 = a2[1].m128_f32[1] + a2[1].m128_f32[0]; /*0x93fd2b*/
        v30 = a3[1]; /*0x93fd2e*/
        v135 = 2 * a3[2] - 0xFF; /*0x93fd39*/
        v31 = v29 + v29; /*0x93fd44*/
        v32 = (double)v135; /*0x93fd46*/
        v135 = 2 * v30 - 0xFF; /*0x93fd4a*/
        v137 = v32 - v31; /*0x93fd50*/
        v138 = (double)v135 + v31; /*0x93fd5a*/
        v11 = a4->m128_f32[0] - a4->m128_f32[1]; /*0x93fd62*/
        v12 = a4[1].m128_f32[0] - a4[1].m128_f32[1]; /*0x93fd68*/
        goto LABEL_16; /*0x93fd6b*/
      case 0x19: /*0x93fbbd*/
        v33 = a2[2].m128_f32[0]; /*0x93fd74*/
        v34 = a3[1]; /*0x93fd7a*/
        v135 = 3 * a3[2]; /*0x93fd7e*/
        v35 = (double)v135; /*0x93fd85*/
        v135 = 3 * v34; /*0x93fd89*/
        v137 = v35 - v33; /*0x93fd8f*/
        v138 = (double)(3 * v34) + v33; /*0x93fd99*/
        v11 = a4->m128_f32[2] + a4->m128_f32[1] + a4->m128_f32[0]; /*0x93fda5*/
        v12 = a4[1].m128_f32[2] + a4[1].m128_f32[1] + a4[1].m128_f32[0]; /*0x93fdad*/
        goto LABEL_16; /*0x93fdb0*/
      case 0x1A: /*0x93fbbd*/
        v36 = a2[2].m128_f32[0]; /*0x93fdb9*/
        v135 = 3 * (a3[2] - 0x55); /*0x93fdc2*/
        v37 = (double)v135 - v36; /*0x93fdd1*/
        v135 = 3 * (a3[1] - 0x55); /*0x93fdd6*/
        v137 = v37; /*0x93fdda*/
        v138 = (double)v135 + v36; /*0x93fde4*/
        v11 = a4->m128_f32[1] + a4->m128_f32[0] - a4->m128_f32[2]; /*0x93fdef*/
        v12 = a4[1].m128_f32[1] + a4[1].m128_f32[0] - a4[1].m128_f32[2]; /*0x93fdf8*/
        goto LABEL_16; /*0x93fdfb*/
      case 0x1B: /*0x93fbbd*/
        v38 = a2[2].m128_f32[0]; /*0x93fe04*/
        v39 = a3[1]; /*0x93fe0d*/
        v135 = 3 * (a3[2] - 0x55); /*0x93fe11*/
        v40 = (double)v135; /*0x93fe1b*/
        v135 = 3 * (v39 - 0x55); /*0x93fe1f*/
        v137 = v40 - v38; /*0x93fe25*/
        v138 = (double)v135 + v38; /*0x93fe2f*/
        v11 = a4->m128_f32[0] - a4->m128_f32[1] + a4->m128_f32[2]; /*0x93fe3a*/
        v12 = a4[1].m128_f32[0] - a4[1].m128_f32[1] + a4[1].m128_f32[2]; /*0x93fe43*/
        goto LABEL_16; /*0x93fe46*/
      case 0x1C: /*0x93fbbd*/
        v41 = a2[2].m128_f32[0]; /*0x93fe4f*/
        v42 = a3[1]; /*0x93fe5a*/
        v135 = 3 * (a3[2] - 0xAA); /*0x93fe5e*/
        v43 = (double)v135; /*0x93fe6a*/
        v135 = 3 * (v42 - 0xAA); /*0x93fe6e*/
        v137 = v43 - v41; /*0x93fe74*/
        v138 = (double)v135 + v41; /*0x93fe7e*/
        v11 = a4->m128_f32[0] - a4->m128_f32[1] - a4->m128_f32[2]; /*0x93fe89*/
        v12 = a4[1].m128_f32[0] - a4[1].m128_f32[1] - a4[1].m128_f32[2]; /*0x93fe92*/
LABEL_16:
        v55 = a3[3]; /*0x93ff73*/
        v45 = a3 + 4; /*0x93ff77*/
        v139 = 0.0; /*0x93ff7a*/
        goto LABEL_17; /*0x93ff7a*/
      case 0x20: /*0x93fbbd*/
      case 0x21: /*0x93fbbd*/
      case 0x22: /*0x93fbbd*/
        v44 = a3[2]; /*0x93fe9e*/
        v135 = a3[1]; /*0x93fea2*/
        v45 = a3 + 3; /*0x93fea9*/
        v46 = (double)v135; /*0x93feac*/
        v140 = v6 - 0x20; /*0x93feb0*/
        v47 = fConstant_1; /*0x93feb4*/
        v135 = v44; /*0x93feba*/
        v137 = v46 - a2[0xFFFFFFF9].m128_f32[v6]; /*0x93fec6*/
        v138 = v47 + v46 + a2[0xFFFFFFF9].m128_f32[v6]; /*0x93fece*/
        v11 = a4[0xFFFFFFF8].m128_f32[v6]; /*0x93fed2*/
        v12 = a4[0xFFFFFFF9].m128_f32[v6]; /*0x93fed5*/
        v48 = 0.0; /*0x93fed9*/
        v139 = 0.0; /*0x93fedb*/
        goto LABEL_18; /*0x93fedf*/
      case 0x23: /*0x93fbbd*/
      case 0x24: /*0x93fbbd*/
      case 0x25: /*0x93fbbd*/
        v49 = a3[1]; /*0x93fee8*/
        v135 = a3[2]; /*0x93feec*/
        v50 = a3[3]; /*0x93fef0*/
        v51 = (double)v135; /*0x93fef4*/
        v52 = v6 - 0x23; /*0x93fef8*/
        v135 = v49; /*0x93fefb*/
        v53 = v51 - a2[1].m128_f32[v52]; /*0x93feff*/
        v54 = a3[6]; /*0x93ff03*/
        v140 = v52; /*0x93ff07*/
        v137 = v53; /*0x93ff0b*/
        v45 = a3 + 7; /*0x93ff16*/
        v138 = (double)v135 + a2[1].m128_f32[v52]; /*0x93ff1d*/
        v11 = a4->m128_f32[v52]; /*0x93ff21*/
        v12 = a4[1].m128_f32[v52]; /*0x93ff24*/
        LODWORD(v139) = v45[0xFFFFFFFD] + (v50 << 8); /*0x93ff2e*/
        v55 = v54 + (v45[0xFFFFFFFE] << 8); /*0x93ff39*/
LABEL_17:
        v48 = v139; /*0x93ff82*/
        v135 = v55; /*0x93ff86*/
LABEL_18:
        v136 = v12; /*0x93ff8a*/
        if ( v136 >= (double)v137 || v11 >= v137 ) /*0x93ffa6*/
        {
          v58 = v135; /*0x93ffb3*/
          a3 = &v45[v135]; /*0x93ffb7*/
          if ( v11 <= v138 || v136 <= (double)v138 ) /*0x93ffcd*/
          {
            v59 = *a4; /*0x93ffd7*/
            v60 = a4[1]; /*0x93ffdc*/
            v161 = *a4; /*0x93ffe0*/
            v162 = v60; /*0x93ffe8*/
            v144 = v11 - v138; /*0x93fff0*/
            *(float *)&v142 = v11 - v137; /*0x93fff8*/
            *(float *)&v143 = v136 - v138; /*0x940004*/
            v136 = v136 - v137; /*0x940010*/
            if ( v144 >= (double)*(float *)&v143 ) /*0x940021*/
            {
              if ( v136 * *(float *)&v142 < *(float *)&SrcStr ) /*0x9401ac*/
              {
                *(float *)&v142 = *(float *)&v142 / (*(float *)&v142 - v136); /*0x9401ba*/
                v76 = _mm_shuffle_ps((__m128)v142, (__m128)v142, 0); /*0x9401c4*/
                v162 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v76), v59), _mm_mul_ps(v76, v60)); /*0x9401de*/
              }
              sub_93FB80(v141, a2, a3, &v161); /*0x9401f4*/
              if ( *(float *)&v143 * v144 < *(float *)&SrcStr ) /*0x94020c*/
              {
                v77 = a4[1]; /*0x940212*/
                v78 = (__m128)xmmword_A6DFE0; /*0x94021a*/
                *(float *)&v143 = v144 / (v144 - *(float *)&v143); /*0x940225*/
                v79 = _mm_shuffle_ps((__m128)v143, (__m128)v143, 0); /*0x94022f*/
                *a4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v78, v79), *a4), _mm_mul_ps(v79, v77)); /*0x940245*/
              }
              v80 = v141; /*0x940248*/
              if ( v141[7] < (double)v141[8] ) /*0x940257*/
              {
                v81 = *((_DWORD *)v141 + 7); /*0x94025d*/
                *((_DWORD *)v141 + 8) = v81; /*0x940260*/
                v82 = (__m128)xmmword_A6DFE0; /*0x940263*/
                v83 = v81; /*0x94026a*/
                v84 = *((__m128 **)v80 + 0xB); /*0x94026c*/
                v85 = v84[1]; /*0x94026f*/
                v86 = *(__m128 *)(*((_DWORD *)v80 + 4) + 0x10); /*0x940276*/
                v156 = v83; /*0x94027a*/
                v87 = _mm_shuffle_ps((__m128)v83, (__m128)v83, 0); /*0x94028a*/
                v88 = _mm_mul_ps(v87, v85); /*0x940291*/
                v89 = *v84; /*0x940294*/
                v90 = v140; /*0x940297*/
                v73 = v140 < 3; /*0x94029b*/
                a4[1] = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v82, v87), v89), v88), v86); /*0x9402aa*/
                v91 = a4[1]; /*0x9402b1*/
                v146 = a2[2].m128_i32[2]; /*0x9402b5*/
                a4[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v146, (__m128)(unsigned int)v146, 0), v91); /*0x9402c9*/
                a4[1] = _mm_sub_ps(a4[1], *a2); /*0x9402d7*/
                if ( v73 && a4[1].m128_f32[v90] > (double)v138 ) /*0x9402ea*/
                  return; /*0x9402ea*/
              }
              a3 += LODWORD(v139) - v135; /*0x9402f8*/
            }
            else
            {
              if ( *(float *)&v143 * v144 < *(float *)&SrcStr ) /*0x94003a*/
              {
                *(float *)&v135 = v144 / (v144 - *(float *)&v143); /*0x940048*/
                v61 = _mm_shuffle_ps((__m128)(unsigned int)v135, (__m128)(unsigned int)v135, 0); /*0x940052*/
                v162 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v61), v59), _mm_mul_ps(v61, v60)); /*0x94006c*/
              }
              sub_93FB80(v141, a2, &a3[LODWORD(v48) - v58], &v161); /*0x940086*/
              if ( v136 * *(float *)&v142 < *(float *)&SrcStr ) /*0x94009e*/
              {
                v62 = a4[1]; /*0x9400a4*/
                v63 = (__m128)xmmword_A6DFE0; /*0x9400ac*/
                *(float *)&v135 = *(float *)&v142 / (*(float *)&v142 - v136); /*0x9400b7*/
                v64 = _mm_shuffle_ps((__m128)(unsigned int)v135, (__m128)(unsigned int)v135, 0); /*0x9400c1*/
                *a4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v63, v64), *a4), _mm_mul_ps(v64, v62)); /*0x9400d7*/
              }
              if ( v141[7] < (double)v141[8] ) /*0x9400e9*/
              {
                v65 = v141; /*0x9400ef*/
                v66 = *((_DWORD *)v141 + 7); /*0x9400f3*/
                *((_DWORD *)v141 + 8) = v66; /*0x9400f6*/
                v67 = (__m128)xmmword_A6DFE0; /*0x9400f9*/
                v68 = v66; /*0x940100*/
                v69 = *((__m128 **)v65 + 0xB); /*0x940102*/
                v70 = v69[1]; /*0x940105*/
                v71 = *(__m128 *)(*((_DWORD *)v65 + 4) + 0x10); /*0x94010c*/
                v72 = v140; /*0x940110*/
                v73 = v140 < 3; /*0x940114*/
                v155 = v68; /*0x940117*/
                v74 = _mm_shuffle_ps((__m128)v68, (__m128)v68, 0); /*0x940127*/
                a4[1] = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v67, v74), *v69), _mm_mul_ps(v74, v70)), v71); /*0x940140*/
                v75 = a4[1]; /*0x940147*/
                v157 = a2[2].m128_i32[2]; /*0x94014b*/
                a4[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v157, (__m128)(unsigned int)v157, 0), v75); /*0x940165*/
                a4[1] = _mm_sub_ps(a4[1], *a2); /*0x940173*/
                if ( v73 && a4[1].m128_f32[v72] < (double)v137 ) /*0x94018a*/
                  return; /*0x94018a*/
              }
            }
          }
        }
        else
        {
          a3 = &v45[LODWORD(v48)]; /*0x93ffa8*/
        }
        continue; /*0x93ffaa*/
      case 0x26: /*0x93fbbd*/
      case 0x27: /*0x93fbbd*/
      case 0x28: /*0x93fbbd*/
        v135 = a3[1]; /*0x940370*/
        v97 = (double)v135; /*0x940378*/
        v93 = v6 - 0x26; /*0x94037c*/
        v95 = 4 * v93 + 0x10; /*0x94037f*/
        v135 = a3[2]; /*0x940386*/
        a3 += 3; /*0x94038d*/
        v137 = v97 - *(float *)((char *)a2->m128_f32 + v95); /*0x940390*/
        v96 = (double)v135; /*0x940394*/
        goto LABEL_42; /*0x940394*/
      case 0x29: /*0x93fbbd*/
      case 0x2A: /*0x93fbbd*/
      case 0x2B: /*0x93fbbd*/
        v92 = a3[4]; /*0x940315*/
        v135 = a3[3] + (((a3[1] << 8) + a3[2]) << 8); /*0x940319*/
        v93 = v6 - 0x29; /*0x940321*/
        v94 = (double)v135 * v141[5] * a2[2].m128_f32[2] - a2->m128_f32[v93]; /*0x94033e*/
        v135 = a3[6] + ((a3[5] + (v92 << 8)) << 8); /*0x940343*/
        v95 = 4 * v93 + 0x10; /*0x94034f*/
        a3 += 7; /*0x940356*/
        v137 = v94 - a2[1].m128_f32[v93]; /*0x940359*/
        v96 = (double)v135 * v141[5] * a2[2].m128_f32[2] - a2->m128_f32[v93]; /*0x940367*/
LABEL_42:
        v98 = v96 + *(float *)((char *)a2->m128_f32 + v95); /*0x940398*/
        v139 = a4->m128_f32[v93]; /*0x94039e*/
        v136 = *(float *)((char *)a4->m128_f32 + v95); /*0x9403a5*/
        if ( v139 < (double)v136 ) /*0x9403b6*/
        {
          if ( v136 < (double)v137 || v139 > v98 ) /*0x9403d6*/
            return; /*0x9403d6*/
          v140 = 0; /*0x9403dc*/
LABEL_49:
          v99 = a4->m128_i32[1]; /*0x940412*/
          v158.m128_i32[0] = a4->m128_i32[0]; /*0x94041f*/
          v100 = a4->m128_i32[2]; /*0x940426*/
          *(float *)&v135 = v139 - v98; /*0x940429*/
          *(unsigned __int64 *)((char *)v158.m128_u64 + 4) = __PAIR64__(v100, v99); /*0x94042d*/
          v101 = v136 - v98; /*0x940437*/
          v102 = a4[1].m128_i32[0]; /*0x94044b*/
          v158.m128_i32[3] = a4->m128_i32[3]; /*0x94044d*/
          v103 = a4[1].m128_i32[1]; /*0x940454*/
          v104 = *(float *)&v135 * v101 < *(float *)&SrcStr; /*0x940457*/
          v159.m128_i32[0] = v102; /*0x94045d*/
          *(unsigned __int64 *)((char *)v159.m128_u64 + 4) = __PAIR64__(a4[1].m128_i32[2], v103); /*0x940467*/
          v159.m128_i32[3] = a4[1].m128_i32[3]; /*0x94047d*/
          if ( v104 ) /*0x940484*/
          {
            v134 = *(float *)&v135 / (*(float *)&v135 - v101); /*0x940498*/
            sub_535AA0(&v163, v134); /*0x94049d*/
            v105 = _mm_shuffle_ps(v163, v163, 0); /*0x9404b5*/
            a4[-v140 + 1] = _mm_add_ps( /*0x9404d9*/
                              _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v105), v158),
                              _mm_mul_ps(v105, v159));
          }
          v106 = v139 - v137; /*0x9404e5*/
          v107 = v136 - v137; /*0x9404ed*/
          if ( v107 * v106 < *(float *)&SrcStr ) /*0x940500*/
          {
            v134 = v106 / (v106 - v107); /*0x940514*/
            sub_535AA0(&v164, v134); /*0x94051b*/
            v108 = _mm_shuffle_ps(v164, v164, 0); /*0x940533*/
            a4[v140] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v108), v158), _mm_mul_ps(v108, v159)); /*0x940553*/
          }
          continue; /*0x940557*/
        }
        if ( v139 >= (double)v137 && v136 <= v98 ) /*0x940404*/
        {
          v140 = 1; /*0x94040a*/
          goto LABEL_49; /*0x94040a*/
        }
        return;
      case 0x30: /*0x93fbbd*/
      case 0x31: /*0x93fbbd*/
      case 0x32: /*0x93fbbd*/
      case 0x33: /*0x93fbbd*/
      case 0x34: /*0x93fbbd*/
      case 0x35: /*0x93fbbd*/
      case 0x36: /*0x93fbbd*/
      case 0x37: /*0x93fbbd*/
      case 0x38: /*0x93fbbd*/
      case 0x39: /*0x93fbbd*/
      case 0x3A: /*0x93fbbd*/
      case 0x3B: /*0x93fbbd*/
      case 0x3C: /*0x93fbbd*/
      case 0x3D: /*0x93fbbd*/
      case 0x3E: /*0x93fbbd*/
      case 0x3F: /*0x93fbbd*/
      case 0x40: /*0x93fbbd*/
      case 0x41: /*0x93fbbd*/
      case 0x42: /*0x93fbbd*/
      case 0x43: /*0x93fbbd*/
      case 0x44: /*0x93fbbd*/
      case 0x45: /*0x93fbbd*/
      case 0x46: /*0x93fbbd*/
      case 0x47: /*0x93fbbd*/
      case 0x48: /*0x93fbbd*/
      case 0x49: /*0x93fbbd*/
      case 0x4A: /*0x93fbbd*/
      case 0x4B: /*0x93fbbd*/
      case 0x4C: /*0x93fbbd*/
      case 0x4D: /*0x93fbbd*/
      case 0x4E: /*0x93fbbd*/
      case 0x4F: /*0x93fbbd*/
        v120 = v6 - 0x30; /*0x940876*/
        goto LABEL_78; /*0x940876*/
      case 0x50: /*0x93fbbd*/
        v120 = a3[1]; /*0x940827*/
        goto LABEL_78; /*0x94082b*/
      case 0x51: /*0x93fbbd*/
        v120 = a3[2] + (a3[1] << 8); /*0x940838*/
        goto LABEL_78; /*0x94083a*/
      case 0x52: /*0x93fbbd*/
        v120 = a3[3] + ((a3[2] + (a3[1] << 8)) << 8); /*0x940850*/
        goto LABEL_78; /*0x940852*/
      case 0x53: /*0x93fbbd*/
        v120 = ((a3[2] + (a3[1] << 8)) << 0x10) + a3[4] + (a3[3] << 8); /*0x940871*/
LABEL_78:
        v121 = a2[2].m128_i32[3] + v120; /*0x940879*/
        v122 = *((_DWORD *)v141 + 0xB); /*0x940880*/
        v123 = *(_DWORD *)(**(_DWORD **)(v122 + 0x38) + 0xC); /*0x940888*/
        v124 = *(_DWORD *)(v122 + 0x30); /*0x94088b*/
        v125 = *(int (__thiscall ****)(_DWORD, char *, int, _DWORD, _DWORD, int, __int32))(v124 + 4); /*0x94088e*/
        v126 = *v125; /*0x940891*/
        v146 = (__int32)v125; /*0x940894*/
        if ( *(_BYTE *)(*v126)(v125, &v145, v124, *(_DWORD *)(v122 + 0x34), *(_DWORD *)(v122 + 0x38), v123, v121) ) /*0x9408ad*/
        {
          v127 = (*(int (__thiscall **)(int, __int32, char *))(*(_DWORD *)v123 + 0x28))(v123, v121, v165); /*0x9408bf*/
          v128 = v141; /*0x9408c2*/
          v147.m128_i32[3] = *(_DWORD *)(*((_DWORD *)v141 + 0xB) + 0x38); /*0x9408cc*/
          v147.m128_i32[2] = *(_DWORD *)(v147.m128_i32[3] + 8); /*0x9408d3*/
          v147.m128_u64[0] = __PAIR64__(v121, v127); /*0x9408d7*/
          v129 = (*(int (__thiscall **)(int))(*(_DWORD *)v127 + 8))(v127); /*0x9408e3*/
          v130 = *((_DWORD *)v128 + 0xB); /*0x9408e6*/
          (*(void (__cdecl **)(_DWORD, __m128 *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v130 + 0x30) /*0x940916*/
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
          v128[7] = *(float *)(*((_DWORD *)v128 + 9) + 4); /*0x940922*/
        }
        return; /*0x940922*/
      case 0x60: /*0x93fbbd*/
      case 0x61: /*0x93fbbd*/
      case 0x62: /*0x93fbbd*/
      case 0x63: /*0x93fbbd*/
        v119 = a3[1]; /*0x940724*/
        a3 += 2; /*0x940728*/
        v133[v6] = v119; /*0x94072b*/
        goto LABEL_69; /*0x940732*/
      case 0x64: /*0x93fbbd*/
      case 0x65: /*0x93fbbd*/
      case 0x66: /*0x93fbbd*/
      case 0x67: /*0x93fbbd*/
        v132[v6] = a3[2] + (a3[1] << 8); /*0x940741*/
        a3 += 3; /*0x940748*/
        goto LABEL_69; /*0x94074b*/
      case 0x68: /*0x93fbbd*/
      case 0x69: /*0x93fbbd*/
      case 0x6A: /*0x93fbbd*/
      case 0x6B: /*0x93fbbd*/
        v131[v6] = a3[4] + ((a3[3] + ((a3[2] + (a3[1] << 8)) << 8)) << 8); /*0x94076c*/
        a3 += 5; /*0x940773*/
LABEL_69:
        if ( a2 != &v148 ) /*0x940783*/
        {
          v148 = *a2; /*0x940788*/
          v149 = a2[1]; /*0x940791*/
          v150 = a2[2].m128_f32[0]; /*0x940799*/
          v151 = a2[2].m128_i32[1]; /*0x9407a0*/
          v152 = a2[2].m128_f32[2]; /*0x9407a7*/
          v153 = a2[2].m128_i32[3]; /*0x9407ae*/
          a2 = &v148; /*0x9407b2*/
        }
        continue; /*0x9407b2*/
      default:
        sub_8BBFB0((int)v160, (int)a2, v165, 0x200u, 1); /*0x9407dc*/
        sub_8BBDB0(v160, "Unknown command.\n"); /*0x9407ed*/
        (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x940813*/
          unk_BA7FB0,
          3,
          0x1298FEDD,
          v165,
          ".\\collide\\mopp\\machine\\hkMoppAabbCastVirtualMachine.cpp",
          0x1C7);
        sub_8BC000(v160); /*0x94081d*/
        continue; /*0x940822*/
    }
  }
}
