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

  v2 = (const void **)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x949691*/
  v3 = 0; /*0x949694*/
  if ( v2 ) /*0x949698*/
  {
    *v2 = 0; /*0x94969a*/
    v2[1] = 0; /*0x94969c*/
    v2[2] = (const void *)0x80000000; /*0x9496a4*/
    v2[3] = 0; /*0x9496a7*/
    v2[4] = 0; /*0x9496aa*/
    v2[5] = (const void *)0x80000000; /*0x9496ad*/
    v3 = v2; /*0x9496b0*/
  }
  *((_DWORD *)this + 0x14) = v3; /*0x9496b2*/
  v4 = v3[1]; /*0x9496b5*/
  v5 = (int)v4 + 1; /*0x9496bc*/
  v6 = (unsigned int)v3[2] & 0x3FFFFFFF; /*0x9496bf*/
  if ( v6 < (int)v4 + 1 ) /*0x9496c6*/
  {
    v7 = 2 * v6; /*0x9496c8*/
    if ( v5 >= v7 ) /*0x9496cc*/
      v7 = (int)v4 + 1; /*0x9496ce*/
    sub_8A6E40(v3, v7, 0x10); /*0x9496d4*/
  }
  v3[1] = (const void *)v5; /*0x9496dc*/
  v8 = *(this + 0x1A); /*0x9496df*/
  v9 = *(this + 0x19); /*0x9496e4*/
  v10 = (int)*v3 + 0x10 * (_DWORD)v4; /*0x9496ed*/
  *(float *)v10 = *(this + 0x18); /*0x9496ef*/
  *(float *)(v10 + 4) = v9; /*0x9496f1*/
  *(float *)(v10 + 8) = v8; /*0x9496f4*/
  *(_DWORD *)(v10 + 0xC) = 0; /*0x9496f7*/
  v11 = *((_DWORD *)this + 0x14); /*0x9496fe*/
  v12 = *(_DWORD *)(v11 + 4); /*0x949701*/
  v13 = v12 + 1; /*0x949707*/
  v14 = *(_DWORD *)(v11 + 8) & 0x3FFFFFFF; /*0x94970a*/
  if ( v14 < v12 + 1 ) /*0x949711*/
  {
    v15 = 2 * v14; /*0x949713*/
    if ( v13 >= v15 ) /*0x949717*/
      v15 = v12 + 1; /*0x949719*/
    sub_8A6E40((const void **)v11, v15, 0x10); /*0x94971f*/
  }
  *(_DWORD *)(v11 + 4) = v13; /*0x949727*/
  v16 = *(this + 0x1E); /*0x94972a*/
  v17 = *(this + 0x19); /*0x94972f*/
  v18 = *(_DWORD *)v11 + 0x10 * v12; /*0x949738*/
  *(float *)v18 = *(this + 0x18); /*0x94973a*/
  *(float *)(v18 + 4) = v17; /*0x94973c*/
  *(float *)(v18 + 8) = v16; /*0x94973f*/
  *(_DWORD *)(v18 + 0xC) = 0; /*0x949742*/
  v19 = *((_DWORD *)this + 0x14); /*0x949749*/
  v20 = *(_DWORD *)(v19 + 4); /*0x94974c*/
  v21 = v20 + 1; /*0x949752*/
  v22 = *(_DWORD *)(v19 + 8) & 0x3FFFFFFF; /*0x949755*/
  if ( v22 < v20 + 1 ) /*0x94975c*/
  {
    v23 = 2 * v22; /*0x94975e*/
    if ( v21 >= v23 ) /*0x949762*/
      v23 = v20 + 1; /*0x949764*/
    sub_8A6E40((const void **)v19, v23, 0x10); /*0x94976a*/
  }
  *(_DWORD *)(v19 + 4) = v21; /*0x949772*/
  v24 = *(this + 0x1E); /*0x949775*/
  v25 = *(this + 0x19); /*0x94977a*/
  v26 = *(_DWORD *)v19 + 0x10 * v20; /*0x949783*/
  *(float *)v26 = *(this + 0x1C); /*0x949785*/
  *(float *)(v26 + 4) = v25; /*0x949787*/
  *(float *)(v26 + 8) = v24; /*0x94978a*/
  *(_DWORD *)(v26 + 0xC) = 0; /*0x94978d*/
  v27 = *((_DWORD *)this + 0x14); /*0x949794*/
  v28 = *(_DWORD *)(v27 + 4); /*0x949797*/
  v29 = v28 + 1; /*0x94979d*/
  v30 = *(_DWORD *)(v27 + 8) & 0x3FFFFFFF; /*0x9497a0*/
  if ( v30 < v28 + 1 ) /*0x9497a7*/
  {
    v31 = 2 * v30; /*0x9497a9*/
    if ( v29 >= v31 ) /*0x9497ad*/
      v31 = v28 + 1; /*0x9497af*/
    sub_8A6E40((const void **)v27, v31, 0x10); /*0x9497b5*/
  }
  *(_DWORD *)(v27 + 4) = v29; /*0x9497bd*/
  v32 = *(this + 0x1A); /*0x9497c0*/
  v33 = *(this + 0x19); /*0x9497c5*/
  v34 = *(_DWORD *)v27 + 0x10 * v28; /*0x9497ce*/
  *(float *)v34 = *(this + 0x1C); /*0x9497d0*/
  *(float *)(v34 + 4) = v33; /*0x9497d2*/
  *(float *)(v34 + 8) = v32; /*0x9497d5*/
  *(_DWORD *)(v34 + 0xC) = 0; /*0x9497d8*/
  v35 = *((_DWORD *)this + 0x14); /*0x9497df*/
  v36 = *(_DWORD *)(v35 + 4); /*0x9497e2*/
  v37 = v36 + 1; /*0x9497e8*/
  v38 = *(_DWORD *)(v35 + 8) & 0x3FFFFFFF; /*0x9497eb*/
  if ( v38 < v36 + 1 ) /*0x9497f2*/
  {
    v39 = 2 * v38; /*0x9497f4*/
    if ( v37 >= v39 ) /*0x9497f8*/
      v39 = v36 + 1; /*0x9497fa*/
    sub_8A6E40((const void **)v35, v39, 0x10); /*0x949800*/
  }
  *(_DWORD *)(v35 + 4) = v37; /*0x949808*/
  v40 = *(this + 0x1A); /*0x94980b*/
  v41 = *(this + 0x1D); /*0x949810*/
  v42 = *(_DWORD *)v35 + 0x10 * v36; /*0x949819*/
  *(float *)v42 = *(this + 0x18); /*0x94981b*/
  *(float *)(v42 + 4) = v41; /*0x94981d*/
  *(float *)(v42 + 8) = v40; /*0x949820*/
  *(_DWORD *)(v42 + 0xC) = 0; /*0x949823*/
  v43 = *((_DWORD *)this + 0x14); /*0x94982a*/
  v44 = *(_DWORD *)(v43 + 4); /*0x94982d*/
  v45 = v44 + 1; /*0x949833*/
  v46 = *(_DWORD *)(v43 + 8) & 0x3FFFFFFF; /*0x949836*/
  if ( v46 < v44 + 1 ) /*0x94983d*/
  {
    v47 = 2 * v46; /*0x94983f*/
    if ( v45 >= v47 ) /*0x949843*/
      v47 = v44 + 1; /*0x949845*/
    sub_8A6E40((const void **)v43, v47, 0x10); /*0x94984b*/
  }
  *(_DWORD *)(v43 + 4) = v45; /*0x949853*/
  v48 = *(this + 0x1E); /*0x949856*/
  v49 = *(this + 0x1D); /*0x94985b*/
  v50 = *(_DWORD *)v43 + 0x10 * v44; /*0x949864*/
  *(float *)v50 = *(this + 0x18); /*0x949866*/
  *(float *)(v50 + 4) = v49; /*0x949868*/
  *(float *)(v50 + 8) = v48; /*0x94986b*/
  *(_DWORD *)(v50 + 0xC) = 0; /*0x94986e*/
  v51 = *((_DWORD *)this + 0x14); /*0x949875*/
  v52 = *(_DWORD *)(v51 + 4); /*0x949878*/
  v53 = v52 + 1; /*0x94987e*/
  v54 = *(_DWORD *)(v51 + 8) & 0x3FFFFFFF; /*0x949881*/
  if ( v54 < v52 + 1 ) /*0x949888*/
  {
    v55 = 2 * v54; /*0x94988a*/
    if ( v53 >= v55 ) /*0x94988e*/
      v55 = v52 + 1; /*0x949890*/
    sub_8A6E40((const void **)v51, v55, 0x10); /*0x949896*/
  }
  *(_DWORD *)(v51 + 4) = v53; /*0x94989e*/
  v56 = *(this + 0x1E); /*0x9498a1*/
  v57 = *(this + 0x1D); /*0x9498a6*/
  v58 = *(_DWORD *)v51 + 0x10 * v52; /*0x9498af*/
  *(float *)v58 = *(this + 0x1C); /*0x9498b1*/
  *(float *)(v58 + 4) = v57; /*0x9498b3*/
  *(float *)(v58 + 8) = v56; /*0x9498b6*/
  *(_DWORD *)(v58 + 0xC) = 0; /*0x9498b9*/
  v59 = *((_DWORD *)this + 0x14); /*0x9498c0*/
  v60 = *(_DWORD *)(v59 + 4); /*0x9498c3*/
  v61 = v60 + 1; /*0x9498c9*/
  v62 = *(_DWORD *)(v59 + 8) & 0x3FFFFFFF; /*0x9498cc*/
  if ( v62 < v60 + 1 ) /*0x9498d3*/
  {
    v63 = 2 * v62; /*0x9498d5*/
    if ( v61 >= v63 ) /*0x9498d9*/
      v63 = v60 + 1; /*0x9498db*/
    sub_8A6E40((const void **)v59, v63, 0x10); /*0x9498e1*/
  }
  *(_DWORD *)(v59 + 4) = v61; /*0x9498e9*/
  v64 = *(this + 0x1A); /*0x9498ec*/
  v65 = *(this + 0x1D); /*0x9498f1*/
  v66 = *(_DWORD *)v59 + 0x10 * v60; /*0x9498fa*/
  *(float *)v66 = *(this + 0x1C); /*0x9498fc*/
  *(float *)(v66 + 4) = v65; /*0x9498fe*/
  *(float *)(v66 + 8) = v64; /*0x949901*/
  *(_DWORD *)(v66 + 0xC) = 0; /*0x949904*/
  v67 = *((_DWORD *)this + 0x14); /*0x94990b*/
  v68 = *(_DWORD *)(v67 + 0x10); /*0x94990e*/
  v69 = *(_DWORD *)(v67 + 0x14); /*0x949911*/
  v70 = (const void **)(v67 + 0xC); /*0x949914*/
  v71 = v68 + 1; /*0x949917*/
  v72 = v69 & 0x3FFFFFFF; /*0x94991a*/
  if ( v72 < v68 + 1 ) /*0x949921*/
  {
    v73 = 2 * v72; /*0x949923*/
    if ( v71 >= v73 ) /*0x949927*/
      v73 = v68 + 1; /*0x949929*/
    sub_8A6E40(v70, v73, 0xC); /*0x94992f*/
  }
  v74 = (char *)*v70; /*0x949937*/
  v70[1] = (const void *)v71; /*0x949939*/
  v75 = &v74[0xC * v68]; /*0x94993f*/
  *(_DWORD *)v75 = 0; /*0x949942*/
  *((_DWORD *)v75 + 1) = 3; /*0x949948*/
  *((_DWORD *)v75 + 2) = 1; /*0x94994f*/
  v76 = *((_DWORD *)this + 0x14); /*0x949956*/
  v77 = *(_DWORD *)(v76 + 0x10); /*0x949959*/
  v78 = *(_DWORD *)(v76 + 0x14); /*0x94995c*/
  v79 = (const void **)(v76 + 0xC); /*0x94995f*/
  v80 = v77 + 1; /*0x949962*/
  v81 = v78 & 0x3FFFFFFF; /*0x949965*/
  if ( v81 < v77 + 1 ) /*0x94996c*/
  {
    v82 = 2 * v81; /*0x94996e*/
    if ( v80 >= v82 ) /*0x949972*/
      v82 = v77 + 1; /*0x949974*/
    sub_8A6E40(v79, v82, 0xC); /*0x94997a*/
  }
  v83 = (char *)*v79; /*0x949982*/
  v79[1] = (const void *)v80; /*0x949984*/
  v84 = &v83[0xC * v77]; /*0x94998a*/
  *(_DWORD *)v84 = 1; /*0x94998d*/
  *((_DWORD *)v84 + 1) = 3; /*0x949993*/
  *((_DWORD *)v84 + 2) = 2; /*0x94999a*/
  v85 = *((_DWORD *)this + 0x14); /*0x9499a1*/
  v86 = *(_DWORD *)(v85 + 0x10); /*0x9499a4*/
  v87 = *(_DWORD *)(v85 + 0x14); /*0x9499a7*/
  v88 = (const void **)(v85 + 0xC); /*0x9499aa*/
  v89 = v86 + 1; /*0x9499ad*/
  v90 = v87 & 0x3FFFFFFF; /*0x9499b0*/
  if ( v90 < v86 + 1 ) /*0x9499b7*/
  {
    v91 = 2 * v90; /*0x9499b9*/
    if ( v89 >= v91 ) /*0x9499bd*/
      v91 = v86 + 1; /*0x9499bf*/
    sub_8A6E40(v88, v91, 0xC); /*0x9499c5*/
  }
  v92 = (char *)*v88; /*0x9499cd*/
  v88[1] = (const void *)v89; /*0x9499cf*/
  v93 = &v92[0xC * v86]; /*0x9499d5*/
  *(_DWORD *)v93 = 2; /*0x9499d8*/
  *((_DWORD *)v93 + 1) = 6; /*0x9499de*/
  *((_DWORD *)v93 + 2) = 5; /*0x9499e5*/
  v94 = *((_DWORD *)this + 0x14); /*0x9499ec*/
  v95 = *(_DWORD *)(v94 + 0x10); /*0x9499ef*/
  v96 = *(_DWORD *)(v94 + 0x14); /*0x9499f2*/
  v97 = (const void **)(v94 + 0xC); /*0x9499f5*/
  v98 = v95 + 1; /*0x9499f8*/
  v99 = v96 & 0x3FFFFFFF; /*0x9499fb*/
  if ( v99 < v95 + 1 ) /*0x949a02*/
  {
    v100 = 2 * v99; /*0x949a04*/
    if ( v98 >= v100 ) /*0x949a08*/
      v100 = v95 + 1; /*0x949a0a*/
    sub_8A6E40(v97, v100, 0xC); /*0x949a10*/
  }
  v101 = (char *)*v97; /*0x949a18*/
  v97[1] = (const void *)v98; /*0x949a1a*/
  v102 = &v101[0xC * v95]; /*0x949a20*/
  *(_DWORD *)v102 = 5; /*0x949a23*/
  *((_DWORD *)v102 + 1) = 1; /*0x949a29*/
  *((_DWORD *)v102 + 2) = 2; /*0x949a30*/
  v103 = *((_DWORD *)this + 0x14); /*0x949a37*/
  v104 = *(_DWORD *)(v103 + 0x10); /*0x949a3a*/
  v105 = *(_DWORD *)(v103 + 0x14); /*0x949a3d*/
  v106 = (const void **)(v103 + 0xC); /*0x949a40*/
  v107 = v104 + 1; /*0x949a43*/
  v108 = v105 & 0x3FFFFFFF; /*0x949a46*/
  if ( v108 < v104 + 1 ) /*0x949a4d*/
  {
    v109 = 2 * v108; /*0x949a4f*/
    if ( v107 >= v109 ) /*0x949a53*/
      v109 = v104 + 1; /*0x949a55*/
    sub_8A6E40(v106, v109, 0xC); /*0x949a5b*/
  }
  v110 = (char *)*v106; /*0x949a63*/
  v106[1] = (const void *)v107; /*0x949a65*/
  v111 = &v110[0xC * v104]; /*0x949a6b*/
  *(_DWORD *)v111 = 5; /*0x949a6e*/
  *((_DWORD *)v111 + 1) = 6; /*0x949a74*/
  *((_DWORD *)v111 + 2) = 4; /*0x949a7b*/
  v112 = *((_DWORD *)this + 0x14); /*0x949a82*/
  v113 = *(_DWORD *)(v112 + 0x10); /*0x949a85*/
  v114 = *(_DWORD *)(v112 + 0x14); /*0x949a88*/
  v115 = (const void **)(v112 + 0xC); /*0x949a8b*/
  v116 = v113 + 1; /*0x949a8e*/
  v117 = v114 & 0x3FFFFFFF; /*0x949a91*/
  if ( v117 < v113 + 1 ) /*0x949a98*/
  {
    v118 = 2 * v117; /*0x949a9a*/
    if ( v116 >= v118 ) /*0x949a9e*/
      v118 = v113 + 1; /*0x949aa0*/
    sub_8A6E40(v115, v118, 0xC); /*0x949aa6*/
  }
  v119 = (char *)*v115; /*0x949aae*/
  v115[1] = (const void *)v116; /*0x949ab0*/
  v120 = &v119[0xC * v113]; /*0x949ab6*/
  *(_DWORD *)v120 = 4; /*0x949ab9*/
  *((_DWORD *)v120 + 1) = 6; /*0x949abf*/
  *((_DWORD *)v120 + 2) = 7; /*0x949ac6*/
  v121 = *((_DWORD *)this + 0x14); /*0x949acd*/
  v122 = *(_DWORD *)(v121 + 0x10); /*0x949ad0*/
  v123 = *(_DWORD *)(v121 + 0x14); /*0x949ad3*/
  v124 = (const void **)(v121 + 0xC); /*0x949ad6*/
  v125 = v122 + 1; /*0x949ad9*/
  v126 = v123 & 0x3FFFFFFF; /*0x949adc*/
  if ( v126 < v122 + 1 ) /*0x949ae3*/
  {
    v127 = 2 * v126; /*0x949ae5*/
    if ( v125 >= v127 ) /*0x949ae9*/
      v127 = v122 + 1; /*0x949aeb*/
    sub_8A6E40(v124, v127, 0xC); /*0x949af1*/
  }
  v128 = (char *)*v124; /*0x949af9*/
  v124[1] = (const void *)v125; /*0x949afb*/
  v129 = &v128[0xC * v122]; /*0x949b01*/
  *(_DWORD *)v129 = 7; /*0x949b04*/
  *((_DWORD *)v129 + 1) = 3; /*0x949b0a*/
  *((_DWORD *)v129 + 2) = 0; /*0x949b11*/
  v130 = *((_DWORD *)this + 0x14); /*0x949b18*/
  v131 = *(_DWORD *)(v130 + 0x10); /*0x949b1b*/
  v132 = *(_DWORD *)(v130 + 0x14); /*0x949b1e*/
  v133 = (const void **)(v130 + 0xC); /*0x949b21*/
  v134 = v131 + 1; /*0x949b24*/
  v135 = v132 & 0x3FFFFFFF; /*0x949b27*/
  if ( v135 < v131 + 1 ) /*0x949b2e*/
  {
    v136 = 2 * v135; /*0x949b30*/
    if ( v134 >= v136 ) /*0x949b34*/
      v136 = v131 + 1; /*0x949b36*/
    sub_8A6E40(v133, v136, 0xC); /*0x949b3c*/
  }
  v137 = (char *)*v133; /*0x949b44*/
  v133[1] = (const void *)v134; /*0x949b46*/
  v138 = &v137[0xC * v131]; /*0x949b4c*/
  *(_DWORD *)v138 = 0; /*0x949b4f*/
  *((_DWORD *)v138 + 1) = 4; /*0x949b55*/
  *((_DWORD *)v138 + 2) = 7; /*0x949b5c*/
  v139 = *((_DWORD *)this + 0x14); /*0x949b63*/
  v140 = *(_DWORD *)(v139 + 0x10); /*0x949b66*/
  v141 = *(_DWORD *)(v139 + 0x14); /*0x949b69*/
  v142 = (const void **)(v139 + 0xC); /*0x949b6c*/
  v143 = v140 + 1; /*0x949b6f*/
  v144 = v141 & 0x3FFFFFFF; /*0x949b72*/
  if ( v144 < v140 + 1 ) /*0x949b79*/
  {
    v145 = 2 * v144; /*0x949b7b*/
    if ( v143 >= v145 ) /*0x949b7f*/
      v145 = v140 + 1; /*0x949b81*/
    sub_8A6E40(v142, v145, 0xC); /*0x949b87*/
  }
  v146 = (char *)*v142; /*0x949b8f*/
  v142[1] = (const void *)v143; /*0x949b91*/
  v147 = &v146[0xC * v140]; /*0x949b97*/
  *(_DWORD *)v147 = 0; /*0x949b9a*/
  *((_DWORD *)v147 + 1) = 1; /*0x949ba0*/
  *((_DWORD *)v147 + 2) = 4; /*0x949ba7*/
  v148 = *((_DWORD *)this + 0x14); /*0x949bae*/
  v149 = *(_DWORD *)(v148 + 0x10); /*0x949bb1*/
  v150 = *(_DWORD *)(v148 + 0x14); /*0x949bb4*/
  v151 = (const void **)(v148 + 0xC); /*0x949bb7*/
  v152 = v149 + 1; /*0x949bba*/
  v153 = v150 & 0x3FFFFFFF; /*0x949bbd*/
  if ( v153 < v149 + 1 ) /*0x949bc4*/
  {
    v154 = 2 * v153; /*0x949bc6*/
    if ( v152 >= v154 ) /*0x949bca*/
      v154 = v149 + 1; /*0x949bcc*/
    sub_8A6E40(v151, v154, 0xC); /*0x949bd2*/
  }
  v155 = (char *)*v151; /*0x949bda*/
  v151[1] = (const void *)v152; /*0x949bdc*/
  v156 = &v155[0xC * v149]; /*0x949be2*/
  *(_DWORD *)v156 = 4; /*0x949be5*/
  *((_DWORD *)v156 + 1) = 1; /*0x949beb*/
  *((_DWORD *)v156 + 2) = 5; /*0x949bf2*/
  v157 = *((_DWORD *)this + 0x14); /*0x949bf9*/
  v158 = *(_DWORD *)(v157 + 0x10); /*0x949bfc*/
  v159 = *(_DWORD *)(v157 + 0x14); /*0x949bff*/
  v160 = (const void **)(v157 + 0xC); /*0x949c02*/
  v161 = v158 + 1; /*0x949c05*/
  v162 = v159 & 0x3FFFFFFF; /*0x949c08*/
  if ( v162 < v158 + 1 ) /*0x949c0f*/
  {
    v163 = 2 * v162; /*0x949c11*/
    if ( v161 >= v163 ) /*0x949c15*/
      v163 = v158 + 1; /*0x949c17*/
    sub_8A6E40(v160, v163, 0xC); /*0x949c1d*/
  }
  v164 = (char *)*v160; /*0x949c25*/
  v160[1] = (const void *)v161; /*0x949c27*/
  v165 = &v164[0xC * v158]; /*0x949c2d*/
  *(_DWORD *)v165 = 2; /*0x949c30*/
  *((_DWORD *)v165 + 1) = 3; /*0x949c36*/
  *((_DWORD *)v165 + 2) = 6; /*0x949c3d*/
  v166 = *((_DWORD *)this + 0x14); /*0x949c44*/
  v167 = *(_DWORD *)(v166 + 0x10); /*0x949c47*/
  v168 = *(_DWORD *)(v166 + 0x14); /*0x949c4a*/
  v169 = (const void **)(v166 + 0xC); /*0x949c4d*/
  v170 = v167 + 1; /*0x949c50*/
  v171 = v168 & 0x3FFFFFFF; /*0x949c53*/
  if ( v171 < v167 + 1 ) /*0x949c5b*/
  {
    v172 = 2 * v171; /*0x949c5d*/
    if ( v170 >= v172 ) /*0x949c61*/
      v172 = v167 + 1; /*0x949c63*/
    sub_8A6E40(v169, v172, 0xC); /*0x949c69*/
  }
  v173 = (char *)*v169; /*0x949c71*/
  v169[1] = (const void *)v170; /*0x949c73*/
  result = &v173[0xC * v167]; /*0x949c7a*/
  *(_DWORD *)result = 6; /*0x949c7e*/
  *((_DWORD *)result + 1) = 3; /*0x949c84*/
  *((_DWORD *)result + 2) = 7; /*0x949c8b*/
  return result; /*0x949c79*/
}
