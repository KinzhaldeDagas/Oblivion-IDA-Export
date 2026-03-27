char *__thiscall sub_949680(float *this)
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
  int v59; // ebx
  int v60; // edi
  int v61; // ebp
  int v62; // eax
  int v63; // eax
  double v64; // st7
  double v65; // st6
  int v66; // edi
  int v67; // edi
  int v68; // ebx
  int v69; // eax
  const void **v70; // edi
  int v71; // ebp
  int v72; // eax
  int v73; // eax
  char *v74; // ecx
  char *v75; // eax
  int v76; // edi
  int v77; // ebx
  int v78; // eax
  const void **v79; // edi
  int v80; // ebp
  int v81; // eax
  int v82; // eax
  char *v83; // eax
  char *v84; // eax
  int v85; // edi
  int v86; // ebx
  int v87; // eax
  const void **v88; // edi
  int v89; // ebp
  int v90; // eax
  int v91; // eax
  char *v92; // edx
  char *v93; // eax
  int v94; // edi
  int v95; // ebx
  int v96; // eax
  const void **v97; // edi
  int v98; // ebp
  int v99; // eax
  int v100; // eax
  char *v101; // ecx
  char *v102; // eax
  int v103; // edi
  int v104; // ebx
  int v105; // eax
  const void **v106; // edi
  int v107; // ebp
  int v108; // eax
  int v109; // eax
  char *v110; // eax
  char *v111; // eax
  int v112; // edi
  int v113; // ebx
  int v114; // eax
  const void **v115; // edi
  int v116; // ebp
  int v117; // eax
  int v118; // eax
  char *v119; // edx
  char *v120; // eax
  int v121; // edi
  int v122; // ebx
  int v123; // eax
  const void **v124; // edi
  int v125; // ebp
  int v126; // eax
  int v127; // eax
  char *v128; // ecx
  char *v129; // eax
  int v130; // edi
  int v131; // ebx
  int v132; // eax
  const void **v133; // edi
  int v134; // ebp
  int v135; // eax
  int v136; // eax
  char *v137; // eax
  char *v138; // eax
  int v139; // edi
  int v140; // ebx
  int v141; // eax
  const void **v142; // edi
  int v143; // ebp
  int v144; // eax
  int v145; // eax
  char *v146; // edx
  char *v147; // eax
  int v148; // edi
  int v149; // ebx
  int v150; // eax
  const void **v151; // edi
  int v152; // ebp
  int v153; // eax
  int v154; // eax
  char *v155; // ecx
  char *v156; // eax
  int v157; // edi
  int v158; // ebx
  int v159; // eax
  const void **v160; // edi
  int v161; // ebp
  int v162; // eax
  int v163; // eax
  char *v164; // eax
  char *v165; // eax
  int v166; // esi
  int v167; // ebx
  int v168; // eax
  const void **v169; // esi
  int v170; // edi
  int v171; // eax
  int v172; // eax
  char *v173; // edx
  char *result; // eax

  v2 = (const void **)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
  v3 = 0;
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
  v8 = *(this + 0x1A);
  v9 = *(this + 0x19);
  v10 = (int)*v3 + 0x10 * (_DWORD)v4;
  *(float *)v10 = *(this + 0x18);
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
  v16 = *(this + 0x1E);
  v17 = *(this + 0x19);
  v18 = *(_DWORD *)v11 + 0x10 * v12;
  *(float *)v18 = *(this + 0x18);
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
  v24 = *(this + 0x1E);
  v25 = *(this + 0x19);
  v26 = *(_DWORD *)v19 + 0x10 * v20;
  *(float *)v26 = *(this + 0x1C);
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
  v32 = *(this + 0x1A);
  v33 = *(this + 0x19);
  v34 = *(_DWORD *)v27 + 0x10 * v28;
  *(float *)v34 = *(this + 0x1C);
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
  v40 = *(this + 0x1A);
  v41 = *(this + 0x1D);
  v42 = *(_DWORD *)v35 + 0x10 * v36;
  *(float *)v42 = *(this + 0x18);
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
  v48 = *(this + 0x1E);
  v49 = *(this + 0x1D);
  v50 = *(_DWORD *)v43 + 0x10 * v44;
  *(float *)v50 = *(this + 0x18);
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
  v56 = *(this + 0x1E);
  v57 = *(this + 0x1D);
  v58 = *(_DWORD *)v51 + 0x10 * v52;
  *(float *)v58 = *(this + 0x1C);
  *(float *)(v58 + 4) = v57;
  *(float *)(v58 + 8) = v56;
  *(_DWORD *)(v58 + 0xC) = 0;
  v59 = *((_DWORD *)this + 0x14);
  v60 = *(_DWORD *)(v59 + 4);
  v61 = v60 + 1;
  v62 = *(_DWORD *)(v59 + 8) & 0x3FFFFFFF;
  if ( v62 < v60 + 1 )
  {
    v63 = 2 * v62;
    if ( v61 >= v63 )
      v63 = v60 + 1;
    sub_8A6E40((const void **)v59, v63, 0x10);
  }
  *(_DWORD *)(v59 + 4) = v61;
  v64 = *(this + 0x1A);
  v65 = *(this + 0x1D);
  v66 = *(_DWORD *)v59 + 0x10 * v60;
  *(float *)v66 = *(this + 0x1C);
  *(float *)(v66 + 4) = v65;
  *(float *)(v66 + 8) = v64;
  *(_DWORD *)(v66 + 0xC) = 0;
  v67 = *((_DWORD *)this + 0x14);
  v68 = *(_DWORD *)(v67 + 0x10);
  v69 = *(_DWORD *)(v67 + 0x14);
  v70 = (const void **)(v67 + 0xC);
  v71 = v68 + 1;
  v72 = v69 & 0x3FFFFFFF;
  if ( v72 < v68 + 1 )
  {
    v73 = 2 * v72;
    if ( v71 >= v73 )
      v73 = v68 + 1;
    sub_8A6E40(v70, v73, 0xC);
  }
  v74 = (char *)*v70;
  v70[1] = (const void *)v71;
  v75 = &v74[0xC * v68];
  *(_DWORD *)v75 = 0;
  *((_DWORD *)v75 + 1) = 3;
  *((_DWORD *)v75 + 2) = 1;
  v76 = *((_DWORD *)this + 0x14);
  v77 = *(_DWORD *)(v76 + 0x10);
  v78 = *(_DWORD *)(v76 + 0x14);
  v79 = (const void **)(v76 + 0xC);
  v80 = v77 + 1;
  v81 = v78 & 0x3FFFFFFF;
  if ( v81 < v77 + 1 )
  {
    v82 = 2 * v81;
    if ( v80 >= v82 )
      v82 = v77 + 1;
    sub_8A6E40(v79, v82, 0xC);
  }
  v83 = (char *)*v79;
  v79[1] = (const void *)v80;
  v84 = &v83[0xC * v77];
  *(_DWORD *)v84 = 1;
  *((_DWORD *)v84 + 1) = 3;
  *((_DWORD *)v84 + 2) = 2;
  v85 = *((_DWORD *)this + 0x14);
  v86 = *(_DWORD *)(v85 + 0x10);
  v87 = *(_DWORD *)(v85 + 0x14);
  v88 = (const void **)(v85 + 0xC);
  v89 = v86 + 1;
  v90 = v87 & 0x3FFFFFFF;
  if ( v90 < v86 + 1 )
  {
    v91 = 2 * v90;
    if ( v89 >= v91 )
      v91 = v86 + 1;
    sub_8A6E40(v88, v91, 0xC);
  }
  v92 = (char *)*v88;
  v88[1] = (const void *)v89;
  v93 = &v92[0xC * v86];
  *(_DWORD *)v93 = 2;
  *((_DWORD *)v93 + 1) = 6;
  *((_DWORD *)v93 + 2) = 5;
  v94 = *((_DWORD *)this + 0x14);
  v95 = *(_DWORD *)(v94 + 0x10);
  v96 = *(_DWORD *)(v94 + 0x14);
  v97 = (const void **)(v94 + 0xC);
  v98 = v95 + 1;
  v99 = v96 & 0x3FFFFFFF;
  if ( v99 < v95 + 1 )
  {
    v100 = 2 * v99;
    if ( v98 >= v100 )
      v100 = v95 + 1;
    sub_8A6E40(v97, v100, 0xC);
  }
  v101 = (char *)*v97;
  v97[1] = (const void *)v98;
  v102 = &v101[0xC * v95];
  *(_DWORD *)v102 = 5;
  *((_DWORD *)v102 + 1) = 1;
  *((_DWORD *)v102 + 2) = 2;
  v103 = *((_DWORD *)this + 0x14);
  v104 = *(_DWORD *)(v103 + 0x10);
  v105 = *(_DWORD *)(v103 + 0x14);
  v106 = (const void **)(v103 + 0xC);
  v107 = v104 + 1;
  v108 = v105 & 0x3FFFFFFF;
  if ( v108 < v104 + 1 )
  {
    v109 = 2 * v108;
    if ( v107 >= v109 )
      v109 = v104 + 1;
    sub_8A6E40(v106, v109, 0xC);
  }
  v110 = (char *)*v106;
  v106[1] = (const void *)v107;
  v111 = &v110[0xC * v104];
  *(_DWORD *)v111 = 5;
  *((_DWORD *)v111 + 1) = 6;
  *((_DWORD *)v111 + 2) = 4;
  v112 = *((_DWORD *)this + 0x14);
  v113 = *(_DWORD *)(v112 + 0x10);
  v114 = *(_DWORD *)(v112 + 0x14);
  v115 = (const void **)(v112 + 0xC);
  v116 = v113 + 1;
  v117 = v114 & 0x3FFFFFFF;
  if ( v117 < v113 + 1 )
  {
    v118 = 2 * v117;
    if ( v116 >= v118 )
      v118 = v113 + 1;
    sub_8A6E40(v115, v118, 0xC);
  }
  v119 = (char *)*v115;
  v115[1] = (const void *)v116;
  v120 = &v119[0xC * v113];
  *(_DWORD *)v120 = 4;
  *((_DWORD *)v120 + 1) = 6;
  *((_DWORD *)v120 + 2) = 7;
  v121 = *((_DWORD *)this + 0x14);
  v122 = *(_DWORD *)(v121 + 0x10);
  v123 = *(_DWORD *)(v121 + 0x14);
  v124 = (const void **)(v121 + 0xC);
  v125 = v122 + 1;
  v126 = v123 & 0x3FFFFFFF;
  if ( v126 < v122 + 1 )
  {
    v127 = 2 * v126;
    if ( v125 >= v127 )
      v127 = v122 + 1;
    sub_8A6E40(v124, v127, 0xC);
  }
  v128 = (char *)*v124;
  v124[1] = (const void *)v125;
  v129 = &v128[0xC * v122];
  *(_DWORD *)v129 = 7;
  *((_DWORD *)v129 + 1) = 3;
  *((_DWORD *)v129 + 2) = 0;
  v130 = *((_DWORD *)this + 0x14);
  v131 = *(_DWORD *)(v130 + 0x10);
  v132 = *(_DWORD *)(v130 + 0x14);
  v133 = (const void **)(v130 + 0xC);
  v134 = v131 + 1;
  v135 = v132 & 0x3FFFFFFF;
  if ( v135 < v131 + 1 )
  {
    v136 = 2 * v135;
    if ( v134 >= v136 )
      v136 = v131 + 1;
    sub_8A6E40(v133, v136, 0xC);
  }
  v137 = (char *)*v133;
  v133[1] = (const void *)v134;
  v138 = &v137[0xC * v131];
  *(_DWORD *)v138 = 0;
  *((_DWORD *)v138 + 1) = 4;
  *((_DWORD *)v138 + 2) = 7;
  v139 = *((_DWORD *)this + 0x14);
  v140 = *(_DWORD *)(v139 + 0x10);
  v141 = *(_DWORD *)(v139 + 0x14);
  v142 = (const void **)(v139 + 0xC);
  v143 = v140 + 1;
  v144 = v141 & 0x3FFFFFFF;
  if ( v144 < v140 + 1 )
  {
    v145 = 2 * v144;
    if ( v143 >= v145 )
      v145 = v140 + 1;
    sub_8A6E40(v142, v145, 0xC);
  }
  v146 = (char *)*v142;
  v142[1] = (const void *)v143;
  v147 = &v146[0xC * v140];
  *(_DWORD *)v147 = 0;
  *((_DWORD *)v147 + 1) = 1;
  *((_DWORD *)v147 + 2) = 4;
  v148 = *((_DWORD *)this + 0x14);
  v149 = *(_DWORD *)(v148 + 0x10);
  v150 = *(_DWORD *)(v148 + 0x14);
  v151 = (const void **)(v148 + 0xC);
  v152 = v149 + 1;
  v153 = v150 & 0x3FFFFFFF;
  if ( v153 < v149 + 1 )
  {
    v154 = 2 * v153;
    if ( v152 >= v154 )
      v154 = v149 + 1;
    sub_8A6E40(v151, v154, 0xC);
  }
  v155 = (char *)*v151;
  v151[1] = (const void *)v152;
  v156 = &v155[0xC * v149];
  *(_DWORD *)v156 = 4;
  *((_DWORD *)v156 + 1) = 1;
  *((_DWORD *)v156 + 2) = 5;
  v157 = *((_DWORD *)this + 0x14);
  v158 = *(_DWORD *)(v157 + 0x10);
  v159 = *(_DWORD *)(v157 + 0x14);
  v160 = (const void **)(v157 + 0xC);
  v161 = v158 + 1;
  v162 = v159 & 0x3FFFFFFF;
  if ( v162 < v158 + 1 )
  {
    v163 = 2 * v162;
    if ( v161 >= v163 )
      v163 = v158 + 1;
    sub_8A6E40(v160, v163, 0xC);
  }
  v164 = (char *)*v160;
  v160[1] = (const void *)v161;
  v165 = &v164[0xC * v158];
  *(_DWORD *)v165 = 2;
  *((_DWORD *)v165 + 1) = 3;
  *((_DWORD *)v165 + 2) = 6;
  v166 = *((_DWORD *)this + 0x14);
  v167 = *(_DWORD *)(v166 + 0x10);
  v168 = *(_DWORD *)(v166 + 0x14);
  v169 = (const void **)(v166 + 0xC);
  v170 = v167 + 1;
  v171 = v168 & 0x3FFFFFFF;
  if ( v171 < v167 + 1 )
  {
    v172 = 2 * v171;
    if ( v170 >= v172 )
      v172 = v167 + 1;
    sub_8A6E40(v169, v172, 0xC);
  }
  v173 = (char *)*v169;
  v169[1] = (const void *)v170;
  result = &v173[0xC * v167];
  *(_DWORD *)result = 6;
  *((_DWORD *)result + 1) = 3;
  *((_DWORD *)result + 2) = 7;
  return result;
}
