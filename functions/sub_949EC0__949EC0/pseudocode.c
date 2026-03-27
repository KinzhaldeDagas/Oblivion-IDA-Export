char *__thiscall sub_949EC0(__m128 *this)
{
  const void **v2; // eax
  const void **v3; // ebx
  const void *v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  double v8; // st7
  double v9; // st6
  int v10; // edi
  int v11; // ebx
  int v12; // edi
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  double v16; // st7
  double v17; // st6
  int v18; // edi
  int v19; // ebx
  int v20; // edi
  int v21; // ebp
  int v22; // eax
  int v23; // eax
  double v24; // st7
  double v25; // st6
  int v26; // edi
  int v27; // ebx
  int v28; // edi
  int v29; // ebp
  int v30; // eax
  int v31; // eax
  double v32; // st7
  double v33; // st6
  int v34; // edi
  int v35; // ebx
  int v36; // edi
  int v37; // ebp
  int v38; // eax
  int v39; // eax
  double v40; // st7
  double v41; // st6
  int v42; // edi
  int v43; // ebx
  int v44; // edi
  int v45; // ebp
  int v46; // eax
  int v47; // eax
  double v48; // st7
  double v49; // st6
  int v50; // edi
  int v51; // ebx
  int v52; // edi
  int v53; // ebp
  int v54; // eax
  int v55; // eax
  double v56; // st7
  double v57; // st6
  int v58; // edi
  const void **v59; // ebx
  char *v60; // edi
  int v61; // ebp
  int v62; // eax
  int v63; // eax
  char *v64; // ecx
  double v65; // st7
  float *v66; // edi
  double v67; // st6
  int v68; // edi
  int v69; // ebx
  int v70; // edi
  int v71; // ebx
  int v72; // eax
  const void **v73; // edi
  int v74; // ebp
  int v75; // eax
  int v76; // eax
  char *v77; // ecx
  char *v78; // eax
  int v79; // edi
  int v80; // ebx
  int v81; // eax
  const void **v82; // edi
  int v83; // ebp
  int v84; // eax
  int v85; // eax
  char *v86; // eax
  char *v87; // eax
  int v88; // edi
  int v89; // ebx
  int v90; // eax
  const void **v91; // edi
  int v92; // ebp
  int v93; // eax
  int v94; // eax
  char *v95; // edx
  char *v96; // eax
  int v97; // edi
  int v98; // ebx
  int v99; // eax
  const void **v100; // edi
  int v101; // ebp
  int v102; // eax
  int v103; // eax
  char *v104; // ecx
  char *v105; // eax
  int v106; // edi
  int v107; // ebx
  int v108; // eax
  const void **v109; // edi
  int v110; // ebp
  int v111; // eax
  int v112; // eax
  char *v113; // eax
  char *v114; // eax
  int v115; // edi
  int v116; // ebx
  int v117; // eax
  const void **v118; // edi
  int v119; // ebp
  int v120; // eax
  int v121; // eax
  char *v122; // edx
  char *v123; // eax
  int v124; // edi
  int v125; // ebx
  int v126; // eax
  const void **v127; // edi
  int v128; // ebp
  int v129; // eax
  int v130; // eax
  char *v131; // ecx
  char *v132; // eax
  int v133; // edi
  int v134; // ebx
  int v135; // eax
  const void **v136; // edi
  int v137; // ebp
  int v138; // eax
  int v139; // eax
  char *v140; // eax
  char *v141; // eax
  int v142; // edi
  int v143; // ebx
  int v144; // eax
  const void **v145; // edi
  int v146; // ebp
  int v147; // eax
  int v148; // eax
  char *v149; // edx
  char *v150; // eax
  int v151; // edi
  int v152; // ebx
  int v153; // eax
  const void **v154; // edi
  int v155; // ebp
  int v156; // eax
  int v157; // eax
  char *v158; // ecx
  char *v159; // eax
  int v160; // edi
  int v161; // ebx
  int v162; // eax
  const void **v163; // edi
  int v164; // ebp
  int v165; // eax
  int v166; // eax
  char *v167; // eax
  char *v168; // eax
  int v169; // esi
  int v170; // ebx
  int v171; // eax
  const void **v172; // esi
  int v173; // edi
  int v174; // eax
  int v175; // eax
  char *v176; // edx
  char *result; // eax

  v2 = (const void **)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
  if ( v2 )
  {
    *v2 = 0;
    v2[1] = 0;
    v2[2] = (const void *)0x80000000;
    v2[3] = 0;
    v2[4] = 0;
    v2[5] = (const void *)0x80000000;
    v3 = v2;
  }
  else
  {
    v3 = 0;
  }
  *((_DWORD *)this + 0x14) = v3;
  v4 = v3[1];
  v5 = (int)v4 + 1;
  v6 = (unsigned int)v3[2] & 0x3FFFFFFF;
  if ( v6 < (int)v4 + 1 )
  {
    v7 = 2 * v6;
    if ( v5 >= v7 )
      v7 = (int)v4 + 1;
    sub_8A6E40(v3, v7, 0x10);
  }
  v3[1] = (const void *)v5;
  v8 = *((float *)this + 0x1A);
  v9 = *((float *)this + 0x19);
  v10 = (int)*v3 + 0x10 * (_DWORD)v4;
  *(float *)v10 = -*((float *)this + 0x18);
  *(float *)(v10 + 4) = v9;
  *(float *)(v10 + 8) = v8;
  *(_DWORD *)(v10 + 0xC) = 0;
  v11 = *((_DWORD *)this + 0x14);
  v12 = *(_DWORD *)(v11 + 4);
  v13 = v12 + 1;
  v14 = *(_DWORD *)(v11 + 8) & 0x3FFFFFFF;
  if ( v14 < v12 + 1 )
  {
    v15 = 2 * v14;
    if ( v13 >= v15 )
      v15 = v12 + 1;
    sub_8A6E40((const void **)v11, v15, 0x10);
  }
  *(_DWORD *)(v11 + 4) = v13;
  v16 = *((float *)this + 0x1A);
  v17 = *((float *)this + 0x19);
  v18 = *(_DWORD *)v11 + 0x10 * v12;
  *(_DWORD *)v18 = *((_DWORD *)this + 0x18);
  *(float *)(v18 + 4) = v17;
  *(float *)(v18 + 8) = v16;
  *(_DWORD *)(v18 + 0xC) = 0;
  v19 = *((_DWORD *)this + 0x14);
  v20 = *(_DWORD *)(v19 + 4);
  v21 = v20 + 1;
  v22 = *(_DWORD *)(v19 + 8) & 0x3FFFFFFF;
  if ( v22 < v20 + 1 )
  {
    v23 = 2 * v22;
    if ( v21 >= v23 )
      v23 = v20 + 1;
    sub_8A6E40((const void **)v19, v23, 0x10);
  }
  *(_DWORD *)(v19 + 4) = v21;
  v24 = *((float *)this + 0x1A);
  v25 = -*((float *)this + 0x19);
  v26 = *(_DWORD *)v19 + 0x10 * v20;
  *(_DWORD *)v26 = *((_DWORD *)this + 0x18);
  *(float *)(v26 + 4) = v25;
  *(float *)(v26 + 8) = v24;
  *(_DWORD *)(v26 + 0xC) = 0;
  v27 = *((_DWORD *)this + 0x14);
  v28 = *(_DWORD *)(v27 + 4);
  v29 = v28 + 1;
  v30 = *(_DWORD *)(v27 + 8) & 0x3FFFFFFF;
  if ( v30 < v28 + 1 )
  {
    v31 = 2 * v30;
    if ( v29 >= v31 )
      v31 = v28 + 1;
    sub_8A6E40((const void **)v27, v31, 0x10);
  }
  *(_DWORD *)(v27 + 4) = v29;
  v32 = *((float *)this + 0x1A);
  v33 = -*((float *)this + 0x19);
  v34 = *(_DWORD *)v27 + 0x10 * v28;
  *(float *)v34 = -*((float *)this + 0x18);
  *(float *)(v34 + 4) = v33;
  *(float *)(v34 + 8) = v32;
  *(_DWORD *)(v34 + 0xC) = 0;
  v35 = *((_DWORD *)this + 0x14);
  v36 = *(_DWORD *)(v35 + 4);
  v37 = v36 + 1;
  v38 = *(_DWORD *)(v35 + 8) & 0x3FFFFFFF;
  if ( v38 < v36 + 1 )
  {
    v39 = 2 * v38;
    if ( v37 >= v39 )
      v39 = v36 + 1;
    sub_8A6E40((const void **)v35, v39, 0x10);
  }
  *(_DWORD *)(v35 + 4) = v37;
  v40 = -*((float *)this + 0x1A);
  v41 = *((float *)this + 0x19);
  v42 = *(_DWORD *)v35 + 0x10 * v36;
  *(float *)v42 = -*((float *)this + 0x18);
  *(float *)(v42 + 4) = v41;
  *(float *)(v42 + 8) = v40;
  *(_DWORD *)(v42 + 0xC) = 0;
  v43 = *((_DWORD *)this + 0x14);
  v44 = *(_DWORD *)(v43 + 4);
  v45 = v44 + 1;
  v46 = *(_DWORD *)(v43 + 8) & 0x3FFFFFFF;
  if ( v46 < v44 + 1 )
  {
    v47 = 2 * v46;
    if ( v45 >= v47 )
      v47 = v44 + 1;
    sub_8A6E40((const void **)v43, v47, 0x10);
  }
  *(_DWORD *)(v43 + 4) = v45;
  v48 = -*((float *)this + 0x1A);
  v49 = *((float *)this + 0x19);
  v50 = *(_DWORD *)v43 + 0x10 * v44;
  *(_DWORD *)v50 = *((_DWORD *)this + 0x18);
  *(float *)(v50 + 4) = v49;
  *(float *)(v50 + 8) = v48;
  *(_DWORD *)(v50 + 0xC) = 0;
  v51 = *((_DWORD *)this + 0x14);
  v52 = *(_DWORD *)(v51 + 4);
  v53 = v52 + 1;
  v54 = *(_DWORD *)(v51 + 8) & 0x3FFFFFFF;
  if ( v54 < v52 + 1 )
  {
    v55 = 2 * v54;
    if ( v53 >= v55 )
      v55 = v52 + 1;
    sub_8A6E40((const void **)v51, v55, 0x10);
  }
  *(_DWORD *)(v51 + 4) = v53;
  v56 = -*((float *)this + 0x1A);
  v57 = -*((float *)this + 0x19);
  v58 = *(_DWORD *)v51 + 0x10 * v52;
  *(_DWORD *)v58 = *((_DWORD *)this + 0x18);
  *(float *)(v58 + 4) = v57;
  *(float *)(v58 + 8) = v56;
  *(_DWORD *)(v58 + 0xC) = 0;
  v59 = *((const void ***)this + 0x14);
  v60 = (char *)v59[1];
  v61 = (int)(v60 + 1);
  v62 = (unsigned int)v59[2] & 0x3FFFFFFF;
  if ( v62 < (int)(v60 + 1) )
  {
    v63 = 2 * v62;
    if ( v61 >= v63 )
      v63 = (int)(v60 + 1);
    sub_8A6E40(v59, v63, 0x10);
  }
  v64 = (char *)*v59;
  v59[1] = (const void *)v61;
  v65 = -*((float *)this + 0x1A);
  v66 = (float *)&v64[0x10 * (_DWORD)v60];
  v67 = -*((float *)this + 0x19);
  *v66 = -*((float *)this + 0x18);
  v66[1] = v67;
  v66[2] = v65;
  v66[3] = 0.0;
  v68 = 0;
  if ( *(int *)(*((_DWORD *)this + 0x14) + 4) > 0 )
  {
    v69 = 0;
    do
    {
      sub_88FCC0((__m128 *)(v69 + **((_DWORD **)this + 0x14)), this + 1, (__m128 *)(v69 + **((_DWORD **)this + 0x14)));
      ++v68;
      v69 += 0x10;
    }
    while ( v68 < *(_DWORD *)(*((_DWORD *)this + 0x14) + 4) );
  }
  v70 = *((_DWORD *)this + 0x14);
  v71 = *(_DWORD *)(v70 + 0x10);
  v72 = *(_DWORD *)(v70 + 0x14);
  v73 = (const void **)(v70 + 0xC);
  v74 = v71 + 1;
  v75 = v72 & 0x3FFFFFFF;
  if ( v75 < v71 + 1 )
  {
    v76 = 2 * v75;
    if ( v74 >= v76 )
      v76 = v71 + 1;
    sub_8A6E40(v73, v76, 0xC);
  }
  v77 = (char *)*v73;
  v73[1] = (const void *)v74;
  v78 = &v77[0xC * v71];
  *(_DWORD *)v78 = 3;
  *((_DWORD *)v78 + 1) = 2;
  *((_DWORD *)v78 + 2) = 1;
  v79 = *((_DWORD *)this + 0x14);
  v80 = *(_DWORD *)(v79 + 0x10);
  v81 = *(_DWORD *)(v79 + 0x14);
  v82 = (const void **)(v79 + 0xC);
  v83 = v80 + 1;
  v84 = v81 & 0x3FFFFFFF;
  if ( v84 < v80 + 1 )
  {
    v85 = 2 * v84;
    if ( v83 >= v85 )
      v85 = v80 + 1;
    sub_8A6E40(v82, v85, 0xC);
  }
  v86 = (char *)*v82;
  v82[1] = (const void *)v83;
  v87 = &v86[0xC * v80];
  *(_DWORD *)v87 = 3;
  *((_DWORD *)v87 + 1) = 1;
  *((_DWORD *)v87 + 2) = 0;
  v88 = *((_DWORD *)this + 0x14);
  v89 = *(_DWORD *)(v88 + 0x10);
  v90 = *(_DWORD *)(v88 + 0x14);
  v91 = (const void **)(v88 + 0xC);
  v92 = v89 + 1;
  v93 = v90 & 0x3FFFFFFF;
  if ( v93 < v89 + 1 )
  {
    v94 = 2 * v93;
    if ( v92 >= v94 )
      v94 = v89 + 1;
    sub_8A6E40(v91, v94, 0xC);
  }
  v95 = (char *)*v91;
  v91[1] = (const void *)v92;
  v96 = &v95[0xC * v89];
  *(_DWORD *)v96 = 6;
  *((_DWORD *)v96 + 1) = 7;
  *((_DWORD *)v96 + 2) = 4;
  v97 = *((_DWORD *)this + 0x14);
  v98 = *(_DWORD *)(v97 + 0x10);
  v99 = *(_DWORD *)(v97 + 0x14);
  v100 = (const void **)(v97 + 0xC);
  v101 = v98 + 1;
  v102 = v99 & 0x3FFFFFFF;
  if ( v102 < v98 + 1 )
  {
    v103 = 2 * v102;
    if ( v101 >= v103 )
      v103 = v98 + 1;
    sub_8A6E40(v100, v103, 0xC);
  }
  v104 = (char *)*v100;
  v100[1] = (const void *)v101;
  v105 = &v104[0xC * v98];
  *(_DWORD *)v105 = 6;
  *((_DWORD *)v105 + 1) = 4;
  *((_DWORD *)v105 + 2) = 5;
  v106 = *((_DWORD *)this + 0x14);
  v107 = *(_DWORD *)(v106 + 0x10);
  v108 = *(_DWORD *)(v106 + 0x14);
  v109 = (const void **)(v106 + 0xC);
  v110 = v107 + 1;
  v111 = v108 & 0x3FFFFFFF;
  if ( v111 < v107 + 1 )
  {
    v112 = 2 * v111;
    if ( v110 >= v112 )
      v112 = v107 + 1;
    sub_8A6E40(v109, v112, 0xC);
  }
  v113 = (char *)*v109;
  v109[1] = (const void *)v110;
  v114 = &v113[0xC * v107];
  *(_DWORD *)v114 = 4;
  *((_DWORD *)v114 + 1) = 7;
  *((_DWORD *)v114 + 2) = 3;
  v115 = *((_DWORD *)this + 0x14);
  v116 = *(_DWORD *)(v115 + 0x10);
  v117 = *(_DWORD *)(v115 + 0x14);
  v118 = (const void **)(v115 + 0xC);
  v119 = v116 + 1;
  v120 = v117 & 0x3FFFFFFF;
  if ( v120 < v116 + 1 )
  {
    v121 = 2 * v120;
    if ( v119 >= v121 )
      v121 = v116 + 1;
    sub_8A6E40(v118, v121, 0xC);
  }
  v122 = (char *)*v118;
  v118[1] = (const void *)v119;
  v123 = &v122[0xC * v116];
  *(_DWORD *)v123 = 4;
  *((_DWORD *)v123 + 1) = 3;
  *((_DWORD *)v123 + 2) = 0;
  v124 = *((_DWORD *)this + 0x14);
  v125 = *(_DWORD *)(v124 + 0x10);
  v126 = *(_DWORD *)(v124 + 0x14);
  v127 = (const void **)(v124 + 0xC);
  v128 = v125 + 1;
  v129 = v126 & 0x3FFFFFFF;
  if ( v129 < v125 + 1 )
  {
    v130 = 2 * v129;
    if ( v128 >= v130 )
      v130 = v125 + 1;
    sub_8A6E40(v127, v130, 0xC);
  }
  v131 = (char *)*v127;
  v127[1] = (const void *)v128;
  v132 = &v131[0xC * v125];
  *(_DWORD *)v132 = 2;
  *((_DWORD *)v132 + 1) = 6;
  *((_DWORD *)v132 + 2) = 5;
  v133 = *((_DWORD *)this + 0x14);
  v134 = *(_DWORD *)(v133 + 0x10);
  v135 = *(_DWORD *)(v133 + 0x14);
  v136 = (const void **)(v133 + 0xC);
  v137 = v134 + 1;
  v138 = v135 & 0x3FFFFFFF;
  if ( v138 < v134 + 1 )
  {
    v139 = 2 * v138;
    if ( v137 >= v139 )
      v139 = v134 + 1;
    sub_8A6E40(v136, v139, 0xC);
  }
  v140 = (char *)*v136;
  v136[1] = (const void *)v137;
  v141 = &v140[0xC * v134];
  *(_DWORD *)v141 = 2;
  *((_DWORD *)v141 + 1) = 5;
  *((_DWORD *)v141 + 2) = 1;
  v142 = *((_DWORD *)this + 0x14);
  v143 = *(_DWORD *)(v142 + 0x10);
  v144 = *(_DWORD *)(v142 + 0x14);
  v145 = (const void **)(v142 + 0xC);
  v146 = v143 + 1;
  v147 = v144 & 0x3FFFFFFF;
  if ( v147 < v143 + 1 )
  {
    v148 = 2 * v147;
    if ( v146 >= v148 )
      v148 = v143 + 1;
    sub_8A6E40(v145, v148, 0xC);
  }
  v149 = (char *)*v145;
  v145[1] = (const void *)v146;
  v150 = &v149[0xC * v143];
  *(_DWORD *)v150 = 7;
  *((_DWORD *)v150 + 1) = 6;
  *((_DWORD *)v150 + 2) = 2;
  v151 = *((_DWORD *)this + 0x14);
  v152 = *(_DWORD *)(v151 + 0x10);
  v153 = *(_DWORD *)(v151 + 0x14);
  v154 = (const void **)(v151 + 0xC);
  v155 = v152 + 1;
  v156 = v153 & 0x3FFFFFFF;
  if ( v156 < v152 + 1 )
  {
    v157 = 2 * v156;
    if ( v155 >= v157 )
      v157 = v152 + 1;
    sub_8A6E40(v154, v157, 0xC);
  }
  v158 = (char *)*v154;
  v154[1] = (const void *)v155;
  v159 = &v158[0xC * v152];
  *(_DWORD *)v159 = 7;
  *((_DWORD *)v159 + 1) = 2;
  *((_DWORD *)v159 + 2) = 3;
  v160 = *((_DWORD *)this + 0x14);
  v161 = *(_DWORD *)(v160 + 0x10);
  v162 = *(_DWORD *)(v160 + 0x14);
  v163 = (const void **)(v160 + 0xC);
  v164 = v161 + 1;
  v165 = v162 & 0x3FFFFFFF;
  if ( v165 < v161 + 1 )
  {
    v166 = 2 * v165;
    if ( v164 >= v166 )
      v166 = v161 + 1;
    sub_8A6E40(v163, v166, 0xC);
  }
  v167 = (char *)*v163;
  v163[1] = (const void *)v164;
  v168 = &v167[0xC * v161];
  *(_DWORD *)v168 = 1;
  *((_DWORD *)v168 + 1) = 5;
  *((_DWORD *)v168 + 2) = 4;
  v169 = *((_DWORD *)this + 0x14);
  v170 = *(_DWORD *)(v169 + 0x10);
  v171 = *(_DWORD *)(v169 + 0x14);
  v172 = (const void **)(v169 + 0xC);
  v173 = v170 + 1;
  v174 = v171 & 0x3FFFFFFF;
  if ( v174 < v170 + 1 )
  {
    v175 = 2 * v174;
    if ( v173 >= v175 )
      v175 = v170 + 1;
    sub_8A6E40(v172, v175, 0xC);
  }
  v176 = (char *)*v172;
  v172[1] = (const void *)v173;
  result = &v176[0xC * v170];
  *(_DWORD *)result = 1;
  *((_DWORD *)result + 1) = 4;
  *((_DWORD *)result + 2) = 0;
  return result;
}
