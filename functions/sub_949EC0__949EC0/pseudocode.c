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

  v2 = (const void **)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x949ed1*/
  if ( v2 ) /*0x949ed8*/
  {
    *v2 = 0; /*0x949edf*/
    v2[1] = 0; /*0x949ee1*/
    v2[2] = (const void *)0x80000000; /*0x949ee4*/
    v2[3] = 0; /*0x949ee7*/
    v2[4] = 0; /*0x949eea*/
    v2[5] = (const void *)0x80000000; /*0x949eed*/
    v3 = v2; /*0x949ef0*/
  }
  else
  {
    v3 = 0; /*0x949ef4*/
  }
  *((_DWORD *)this + 0x14) = v3; /*0x949ef6*/
  v4 = v3[1]; /*0x949ef9*/
  v5 = (int)v4 + 1; /*0x949f00*/
  v6 = (unsigned int)v3[2] & 0x3FFFFFFF; /*0x949f03*/
  if ( v6 < (int)v4 + 1 ) /*0x949f0a*/
  {
    v7 = 2 * v6; /*0x949f0c*/
    if ( v5 >= v7 ) /*0x949f10*/
      v7 = (int)v4 + 1; /*0x949f12*/
    sub_8A6E40(v3, v7, 0x10); /*0x949f18*/
  }
  v3[1] = (const void *)v5; /*0x949f22*/
  v8 = *((float *)this + 0x1A); /*0x949f25*/
  v9 = *((float *)this + 0x19); /*0x949f2a*/
  v10 = (int)*v3 + 0x10 * (_DWORD)v4; /*0x949f33*/
  *(float *)v10 = -*((float *)this + 0x18); /*0x949f37*/
  *(float *)(v10 + 4) = v9; /*0x949f39*/
  *(float *)(v10 + 8) = v8; /*0x949f3c*/
  *(_DWORD *)(v10 + 0xC) = 0; /*0x949f3f*/
  v11 = *((_DWORD *)this + 0x14); /*0x949f42*/
  v12 = *(_DWORD *)(v11 + 4); /*0x949f45*/
  v13 = v12 + 1; /*0x949f4b*/
  v14 = *(_DWORD *)(v11 + 8) & 0x3FFFFFFF; /*0x949f4e*/
  if ( v14 < v12 + 1 ) /*0x949f55*/
  {
    v15 = 2 * v14; /*0x949f57*/
    if ( v13 >= v15 ) /*0x949f5b*/
      v15 = v12 + 1; /*0x949f5d*/
    sub_8A6E40((const void **)v11, v15, 0x10); /*0x949f63*/
  }
  *(_DWORD *)(v11 + 4) = v13; /*0x949f6b*/
  v16 = *((float *)this + 0x1A); /*0x949f6e*/
  v17 = *((float *)this + 0x19); /*0x949f73*/
  v18 = *(_DWORD *)v11 + 0x10 * v12; /*0x949f7c*/
  *(_DWORD *)v18 = *((_DWORD *)this + 0x18); /*0x949f7e*/
  *(float *)(v18 + 4) = v17; /*0x949f80*/
  *(float *)(v18 + 8) = v16; /*0x949f83*/
  *(_DWORD *)(v18 + 0xC) = 0; /*0x949f86*/
  v19 = *((_DWORD *)this + 0x14); /*0x949f8d*/
  v20 = *(_DWORD *)(v19 + 4); /*0x949f90*/
  v21 = v20 + 1; /*0x949f96*/
  v22 = *(_DWORD *)(v19 + 8) & 0x3FFFFFFF; /*0x949f99*/
  if ( v22 < v20 + 1 ) /*0x949fa0*/
  {
    v23 = 2 * v22; /*0x949fa2*/
    if ( v21 >= v23 ) /*0x949fa6*/
      v23 = v20 + 1; /*0x949fa8*/
    sub_8A6E40((const void **)v19, v23, 0x10); /*0x949fae*/
  }
  *(_DWORD *)(v19 + 4) = v21; /*0x949fb6*/
  v24 = *((float *)this + 0x1A); /*0x949fb9*/
  v25 = -*((float *)this + 0x19); /*0x949fc4*/
  v26 = *(_DWORD *)v19 + 0x10 * v20; /*0x949fc9*/
  *(_DWORD *)v26 = *((_DWORD *)this + 0x18); /*0x949fcb*/
  *(float *)(v26 + 4) = v25; /*0x949fcd*/
  *(float *)(v26 + 8) = v24; /*0x949fd0*/
  *(_DWORD *)(v26 + 0xC) = 0; /*0x949fd3*/
  v27 = *((_DWORD *)this + 0x14); /*0x949fda*/
  v28 = *(_DWORD *)(v27 + 4); /*0x949fdd*/
  v29 = v28 + 1; /*0x949fe3*/
  v30 = *(_DWORD *)(v27 + 8) & 0x3FFFFFFF; /*0x949fe6*/
  if ( v30 < v28 + 1 ) /*0x949fed*/
  {
    v31 = 2 * v30; /*0x949fef*/
    if ( v29 >= v31 ) /*0x949ff3*/
      v31 = v28 + 1; /*0x949ff5*/
    sub_8A6E40((const void **)v27, v31, 0x10); /*0x949ffb*/
  }
  *(_DWORD *)(v27 + 4) = v29; /*0x94a003*/
  v32 = *((float *)this + 0x1A); /*0x94a006*/
  v33 = -*((float *)this + 0x19); /*0x94a00e*/
  v34 = *(_DWORD *)v27 + 0x10 * v28; /*0x94a016*/
  *(float *)v34 = -*((float *)this + 0x18); /*0x94a01a*/
  *(float *)(v34 + 4) = v33; /*0x94a01c*/
  *(float *)(v34 + 8) = v32; /*0x94a01f*/
  *(_DWORD *)(v34 + 0xC) = 0; /*0x94a022*/
  v35 = *((_DWORD *)this + 0x14); /*0x94a029*/
  v36 = *(_DWORD *)(v35 + 4); /*0x94a02c*/
  v37 = v36 + 1; /*0x94a032*/
  v38 = *(_DWORD *)(v35 + 8) & 0x3FFFFFFF; /*0x94a035*/
  if ( v38 < v36 + 1 ) /*0x94a03c*/
  {
    v39 = 2 * v38; /*0x94a03e*/
    if ( v37 >= v39 ) /*0x94a042*/
      v39 = v36 + 1; /*0x94a044*/
    sub_8A6E40((const void **)v35, v39, 0x10); /*0x94a04a*/
  }
  *(_DWORD *)(v35 + 4) = v37; /*0x94a052*/
  v40 = -*((float *)this + 0x1A); /*0x94a05a*/
  v41 = *((float *)this + 0x19); /*0x94a05c*/
  v42 = *(_DWORD *)v35 + 0x10 * v36; /*0x94a065*/
  *(float *)v42 = -*((float *)this + 0x18); /*0x94a069*/
  *(float *)(v42 + 4) = v41; /*0x94a06b*/
  *(float *)(v42 + 8) = v40; /*0x94a06e*/
  *(_DWORD *)(v42 + 0xC) = 0; /*0x94a071*/
  v43 = *((_DWORD *)this + 0x14); /*0x94a078*/
  v44 = *(_DWORD *)(v43 + 4); /*0x94a07b*/
  v45 = v44 + 1; /*0x94a081*/
  v46 = *(_DWORD *)(v43 + 8) & 0x3FFFFFFF; /*0x94a084*/
  if ( v46 < v44 + 1 ) /*0x94a08b*/
  {
    v47 = 2 * v46; /*0x94a08d*/
    if ( v45 >= v47 ) /*0x94a091*/
      v47 = v44 + 1; /*0x94a093*/
    sub_8A6E40((const void **)v43, v47, 0x10); /*0x94a099*/
  }
  *(_DWORD *)(v43 + 4) = v45; /*0x94a0a1*/
  v48 = -*((float *)this + 0x1A); /*0x94a0a9*/
  v49 = *((float *)this + 0x19); /*0x94a0ae*/
  v50 = *(_DWORD *)v43 + 0x10 * v44; /*0x94a0b4*/
  *(_DWORD *)v50 = *((_DWORD *)this + 0x18); /*0x94a0b6*/
  *(float *)(v50 + 4) = v49; /*0x94a0b8*/
  *(float *)(v50 + 8) = v48; /*0x94a0bb*/
  *(_DWORD *)(v50 + 0xC) = 0; /*0x94a0be*/
  v51 = *((_DWORD *)this + 0x14); /*0x94a0c5*/
  v52 = *(_DWORD *)(v51 + 4); /*0x94a0c8*/
  v53 = v52 + 1; /*0x94a0ce*/
  v54 = *(_DWORD *)(v51 + 8) & 0x3FFFFFFF; /*0x94a0d1*/
  if ( v54 < v52 + 1 ) /*0x94a0d8*/
  {
    v55 = 2 * v54; /*0x94a0da*/
    if ( v53 >= v55 ) /*0x94a0de*/
      v55 = v52 + 1; /*0x94a0e0*/
    sub_8A6E40((const void **)v51, v55, 0x10); /*0x94a0e6*/
  }
  *(_DWORD *)(v51 + 4) = v53; /*0x94a0ee*/
  v56 = -*((float *)this + 0x1A); /*0x94a0f6*/
  v57 = -*((float *)this + 0x19); /*0x94a101*/
  v58 = *(_DWORD *)v51 + 0x10 * v52; /*0x94a103*/
  *(_DWORD *)v58 = *((_DWORD *)this + 0x18); /*0x94a105*/
  *(float *)(v58 + 4) = v57; /*0x94a107*/
  *(float *)(v58 + 8) = v56; /*0x94a10a*/
  *(_DWORD *)(v58 + 0xC) = 0; /*0x94a10d*/
  v59 = *((const void ***)this + 0x14); /*0x94a114*/
  v60 = (char *)v59[1]; /*0x94a117*/
  v61 = (int)(v60 + 1); /*0x94a11d*/
  v62 = (unsigned int)v59[2] & 0x3FFFFFFF; /*0x94a120*/
  if ( v62 < (int)(v60 + 1) ) /*0x94a127*/
  {
    v63 = 2 * v62; /*0x94a129*/
    if ( v61 >= v63 ) /*0x94a12d*/
      v63 = (int)(v60 + 1); /*0x94a12f*/
    sub_8A6E40(v59, v63, 0x10); /*0x94a135*/
  }
  v64 = (char *)*v59; /*0x94a13d*/
  v59[1] = (const void *)v61; /*0x94a13f*/
  v65 = -*((float *)this + 0x1A); /*0x94a145*/
  v66 = (float *)&v64[0x10 * (_DWORD)v60]; /*0x94a14d*/
  v67 = -*((float *)this + 0x19); /*0x94a14f*/
  *v66 = -*((float *)this + 0x18); /*0x94a156*/
  v66[1] = v67; /*0x94a158*/
  v66[2] = v65; /*0x94a15b*/
  v66[3] = 0.0; /*0x94a15e*/
  v68 = 0; /*0x94a16b*/
  if ( *(int *)(*((_DWORD *)this + 0x14) + 4) > 0 ) /*0x94a16f*/
  {
    v69 = 0; /*0x94a174*/
    do /*0x94a190*/
    {
      hkTransform_TransformPosition( /*0x94a17f*/
        (__m128 *)(v69 + **((_DWORD **)this + 0x14)),
        this + 1,
        (__m128 *)(v69 + **((_DWORD **)this + 0x14)));
      ++v68; /*0x94a18a*/
      v69 += 0x10; /*0x94a18b*/
    }
    while ( v68 < *(_DWORD *)(*((_DWORD *)this + 0x14) + 4) ); /*0x94a190*/
  }
  v70 = *((_DWORD *)this + 0x14); /*0x94a192*/
  v71 = *(_DWORD *)(v70 + 0x10); /*0x94a195*/
  v72 = *(_DWORD *)(v70 + 0x14); /*0x94a198*/
  v73 = (const void **)(v70 + 0xC); /*0x94a19b*/
  v74 = v71 + 1; /*0x94a19e*/
  v75 = v72 & 0x3FFFFFFF; /*0x94a1a1*/
  if ( v75 < v71 + 1 ) /*0x94a1a8*/
  {
    v76 = 2 * v75; /*0x94a1aa*/
    if ( v74 >= v76 ) /*0x94a1ae*/
      v76 = v71 + 1; /*0x94a1b0*/
    sub_8A6E40(v73, v76, 0xC); /*0x94a1b6*/
  }
  v77 = (char *)*v73; /*0x94a1be*/
  v73[1] = (const void *)v74; /*0x94a1c0*/
  v78 = &v77[0xC * v71]; /*0x94a1c6*/
  *(_DWORD *)v78 = 3; /*0x94a1c9*/
  *((_DWORD *)v78 + 1) = 2; /*0x94a1cf*/
  *((_DWORD *)v78 + 2) = 1; /*0x94a1d6*/
  v79 = *((_DWORD *)this + 0x14); /*0x94a1dd*/
  v80 = *(_DWORD *)(v79 + 0x10); /*0x94a1e0*/
  v81 = *(_DWORD *)(v79 + 0x14); /*0x94a1e3*/
  v82 = (const void **)(v79 + 0xC); /*0x94a1e6*/
  v83 = v80 + 1; /*0x94a1e9*/
  v84 = v81 & 0x3FFFFFFF; /*0x94a1ec*/
  if ( v84 < v80 + 1 ) /*0x94a1f3*/
  {
    v85 = 2 * v84; /*0x94a1f5*/
    if ( v83 >= v85 ) /*0x94a1f9*/
      v85 = v80 + 1; /*0x94a1fb*/
    sub_8A6E40(v82, v85, 0xC); /*0x94a201*/
  }
  v86 = (char *)*v82; /*0x94a209*/
  v82[1] = (const void *)v83; /*0x94a20b*/
  v87 = &v86[0xC * v80]; /*0x94a211*/
  *(_DWORD *)v87 = 3; /*0x94a214*/
  *((_DWORD *)v87 + 1) = 1; /*0x94a21a*/
  *((_DWORD *)v87 + 2) = 0; /*0x94a221*/
  v88 = *((_DWORD *)this + 0x14); /*0x94a228*/
  v89 = *(_DWORD *)(v88 + 0x10); /*0x94a22b*/
  v90 = *(_DWORD *)(v88 + 0x14); /*0x94a22e*/
  v91 = (const void **)(v88 + 0xC); /*0x94a231*/
  v92 = v89 + 1; /*0x94a234*/
  v93 = v90 & 0x3FFFFFFF; /*0x94a237*/
  if ( v93 < v89 + 1 ) /*0x94a23e*/
  {
    v94 = 2 * v93; /*0x94a240*/
    if ( v92 >= v94 ) /*0x94a244*/
      v94 = v89 + 1; /*0x94a246*/
    sub_8A6E40(v91, v94, 0xC); /*0x94a24c*/
  }
  v95 = (char *)*v91; /*0x94a254*/
  v91[1] = (const void *)v92; /*0x94a256*/
  v96 = &v95[0xC * v89]; /*0x94a25c*/
  *(_DWORD *)v96 = 6; /*0x94a25f*/
  *((_DWORD *)v96 + 1) = 7; /*0x94a265*/
  *((_DWORD *)v96 + 2) = 4; /*0x94a26c*/
  v97 = *((_DWORD *)this + 0x14); /*0x94a273*/
  v98 = *(_DWORD *)(v97 + 0x10); /*0x94a276*/
  v99 = *(_DWORD *)(v97 + 0x14); /*0x94a279*/
  v100 = (const void **)(v97 + 0xC); /*0x94a27c*/
  v101 = v98 + 1; /*0x94a27f*/
  v102 = v99 & 0x3FFFFFFF; /*0x94a282*/
  if ( v102 < v98 + 1 ) /*0x94a289*/
  {
    v103 = 2 * v102; /*0x94a28b*/
    if ( v101 >= v103 ) /*0x94a28f*/
      v103 = v98 + 1; /*0x94a291*/
    sub_8A6E40(v100, v103, 0xC); /*0x94a297*/
  }
  v104 = (char *)*v100; /*0x94a29f*/
  v100[1] = (const void *)v101; /*0x94a2a1*/
  v105 = &v104[0xC * v98]; /*0x94a2a7*/
  *(_DWORD *)v105 = 6; /*0x94a2aa*/
  *((_DWORD *)v105 + 1) = 4; /*0x94a2b0*/
  *((_DWORD *)v105 + 2) = 5; /*0x94a2b7*/
  v106 = *((_DWORD *)this + 0x14); /*0x94a2be*/
  v107 = *(_DWORD *)(v106 + 0x10); /*0x94a2c1*/
  v108 = *(_DWORD *)(v106 + 0x14); /*0x94a2c4*/
  v109 = (const void **)(v106 + 0xC); /*0x94a2c7*/
  v110 = v107 + 1; /*0x94a2ca*/
  v111 = v108 & 0x3FFFFFFF; /*0x94a2cd*/
  if ( v111 < v107 + 1 ) /*0x94a2d4*/
  {
    v112 = 2 * v111; /*0x94a2d6*/
    if ( v110 >= v112 ) /*0x94a2da*/
      v112 = v107 + 1; /*0x94a2dc*/
    sub_8A6E40(v109, v112, 0xC); /*0x94a2e2*/
  }
  v113 = (char *)*v109; /*0x94a2ea*/
  v109[1] = (const void *)v110; /*0x94a2ec*/
  v114 = &v113[0xC * v107]; /*0x94a2f2*/
  *(_DWORD *)v114 = 4; /*0x94a2f5*/
  *((_DWORD *)v114 + 1) = 7; /*0x94a2fb*/
  *((_DWORD *)v114 + 2) = 3; /*0x94a302*/
  v115 = *((_DWORD *)this + 0x14); /*0x94a309*/
  v116 = *(_DWORD *)(v115 + 0x10); /*0x94a30c*/
  v117 = *(_DWORD *)(v115 + 0x14); /*0x94a30f*/
  v118 = (const void **)(v115 + 0xC); /*0x94a312*/
  v119 = v116 + 1; /*0x94a315*/
  v120 = v117 & 0x3FFFFFFF; /*0x94a318*/
  if ( v120 < v116 + 1 ) /*0x94a31f*/
  {
    v121 = 2 * v120; /*0x94a321*/
    if ( v119 >= v121 ) /*0x94a325*/
      v121 = v116 + 1; /*0x94a327*/
    sub_8A6E40(v118, v121, 0xC); /*0x94a32d*/
  }
  v122 = (char *)*v118; /*0x94a335*/
  v118[1] = (const void *)v119; /*0x94a337*/
  v123 = &v122[0xC * v116]; /*0x94a33d*/
  *(_DWORD *)v123 = 4; /*0x94a340*/
  *((_DWORD *)v123 + 1) = 3; /*0x94a346*/
  *((_DWORD *)v123 + 2) = 0; /*0x94a34d*/
  v124 = *((_DWORD *)this + 0x14); /*0x94a354*/
  v125 = *(_DWORD *)(v124 + 0x10); /*0x94a357*/
  v126 = *(_DWORD *)(v124 + 0x14); /*0x94a35a*/
  v127 = (const void **)(v124 + 0xC); /*0x94a35d*/
  v128 = v125 + 1; /*0x94a360*/
  v129 = v126 & 0x3FFFFFFF; /*0x94a363*/
  if ( v129 < v125 + 1 ) /*0x94a36a*/
  {
    v130 = 2 * v129; /*0x94a36c*/
    if ( v128 >= v130 ) /*0x94a370*/
      v130 = v125 + 1; /*0x94a372*/
    sub_8A6E40(v127, v130, 0xC); /*0x94a378*/
  }
  v131 = (char *)*v127; /*0x94a380*/
  v127[1] = (const void *)v128; /*0x94a382*/
  v132 = &v131[0xC * v125]; /*0x94a388*/
  *(_DWORD *)v132 = 2; /*0x94a38b*/
  *((_DWORD *)v132 + 1) = 6; /*0x94a391*/
  *((_DWORD *)v132 + 2) = 5; /*0x94a398*/
  v133 = *((_DWORD *)this + 0x14); /*0x94a39f*/
  v134 = *(_DWORD *)(v133 + 0x10); /*0x94a3a2*/
  v135 = *(_DWORD *)(v133 + 0x14); /*0x94a3a5*/
  v136 = (const void **)(v133 + 0xC); /*0x94a3a8*/
  v137 = v134 + 1; /*0x94a3ab*/
  v138 = v135 & 0x3FFFFFFF; /*0x94a3ae*/
  if ( v138 < v134 + 1 ) /*0x94a3b5*/
  {
    v139 = 2 * v138; /*0x94a3b7*/
    if ( v137 >= v139 ) /*0x94a3bb*/
      v139 = v134 + 1; /*0x94a3bd*/
    sub_8A6E40(v136, v139, 0xC); /*0x94a3c3*/
  }
  v140 = (char *)*v136; /*0x94a3cb*/
  v136[1] = (const void *)v137; /*0x94a3cd*/
  v141 = &v140[0xC * v134]; /*0x94a3d3*/
  *(_DWORD *)v141 = 2; /*0x94a3d6*/
  *((_DWORD *)v141 + 1) = 5; /*0x94a3dc*/
  *((_DWORD *)v141 + 2) = 1; /*0x94a3e3*/
  v142 = *((_DWORD *)this + 0x14); /*0x94a3ea*/
  v143 = *(_DWORD *)(v142 + 0x10); /*0x94a3ed*/
  v144 = *(_DWORD *)(v142 + 0x14); /*0x94a3f0*/
  v145 = (const void **)(v142 + 0xC); /*0x94a3f3*/
  v146 = v143 + 1; /*0x94a3f6*/
  v147 = v144 & 0x3FFFFFFF; /*0x94a3f9*/
  if ( v147 < v143 + 1 ) /*0x94a400*/
  {
    v148 = 2 * v147; /*0x94a402*/
    if ( v146 >= v148 ) /*0x94a406*/
      v148 = v143 + 1; /*0x94a408*/
    sub_8A6E40(v145, v148, 0xC); /*0x94a40e*/
  }
  v149 = (char *)*v145; /*0x94a416*/
  v145[1] = (const void *)v146; /*0x94a418*/
  v150 = &v149[0xC * v143]; /*0x94a41e*/
  *(_DWORD *)v150 = 7; /*0x94a421*/
  *((_DWORD *)v150 + 1) = 6; /*0x94a427*/
  *((_DWORD *)v150 + 2) = 2; /*0x94a42e*/
  v151 = *((_DWORD *)this + 0x14); /*0x94a435*/
  v152 = *(_DWORD *)(v151 + 0x10); /*0x94a438*/
  v153 = *(_DWORD *)(v151 + 0x14); /*0x94a43b*/
  v154 = (const void **)(v151 + 0xC); /*0x94a43e*/
  v155 = v152 + 1; /*0x94a441*/
  v156 = v153 & 0x3FFFFFFF; /*0x94a444*/
  if ( v156 < v152 + 1 ) /*0x94a44b*/
  {
    v157 = 2 * v156; /*0x94a44d*/
    if ( v155 >= v157 ) /*0x94a451*/
      v157 = v152 + 1; /*0x94a453*/
    sub_8A6E40(v154, v157, 0xC); /*0x94a459*/
  }
  v158 = (char *)*v154; /*0x94a461*/
  v154[1] = (const void *)v155; /*0x94a463*/
  v159 = &v158[0xC * v152]; /*0x94a469*/
  *(_DWORD *)v159 = 7; /*0x94a46c*/
  *((_DWORD *)v159 + 1) = 2; /*0x94a472*/
  *((_DWORD *)v159 + 2) = 3; /*0x94a479*/
  v160 = *((_DWORD *)this + 0x14); /*0x94a480*/
  v161 = *(_DWORD *)(v160 + 0x10); /*0x94a483*/
  v162 = *(_DWORD *)(v160 + 0x14); /*0x94a486*/
  v163 = (const void **)(v160 + 0xC); /*0x94a489*/
  v164 = v161 + 1; /*0x94a48c*/
  v165 = v162 & 0x3FFFFFFF; /*0x94a48f*/
  if ( v165 < v161 + 1 ) /*0x94a496*/
  {
    v166 = 2 * v165; /*0x94a498*/
    if ( v164 >= v166 ) /*0x94a49c*/
      v166 = v161 + 1; /*0x94a49e*/
    sub_8A6E40(v163, v166, 0xC); /*0x94a4a4*/
  }
  v167 = (char *)*v163; /*0x94a4ac*/
  v163[1] = (const void *)v164; /*0x94a4ae*/
  v168 = &v167[0xC * v161]; /*0x94a4b4*/
  *(_DWORD *)v168 = 1; /*0x94a4b7*/
  *((_DWORD *)v168 + 1) = 5; /*0x94a4bd*/
  *((_DWORD *)v168 + 2) = 4; /*0x94a4c4*/
  v169 = *((_DWORD *)this + 0x14); /*0x94a4cb*/
  v170 = *(_DWORD *)(v169 + 0x10); /*0x94a4ce*/
  v171 = *(_DWORD *)(v169 + 0x14); /*0x94a4d1*/
  v172 = (const void **)(v169 + 0xC); /*0x94a4d4*/
  v173 = v170 + 1; /*0x94a4d7*/
  v174 = v171 & 0x3FFFFFFF; /*0x94a4da*/
  if ( v174 < v170 + 1 ) /*0x94a4e2*/
  {
    v175 = 2 * v174; /*0x94a4e4*/
    if ( v173 >= v175 ) /*0x94a4e8*/
      v175 = v170 + 1; /*0x94a4ea*/
    sub_8A6E40(v172, v175, 0xC); /*0x94a4f0*/
  }
  v176 = (char *)*v172; /*0x94a4f8*/
  v172[1] = (const void *)v173; /*0x94a4fa*/
  result = &v176[0xC * v170]; /*0x94a501*/
  *(_DWORD *)result = 1; /*0x94a505*/
  *((_DWORD *)result + 1) = 4; /*0x94a50b*/
  *((_DWORD *)result + 2) = 0; /*0x94a512*/
  return result; /*0x94a500*/
}
