void sub_82D990()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  unsigned int *v4; // eax
  NiD3DTextureStage *v5; // eax
  unsigned int **v6; // ebp
  NiD3DTextureStage *v7; // eax
  unsigned int **v8; // ebp
  NiD3DTextureStage *v9; // eax
  unsigned int **v10; // ebp
  NiD3DTextureStage *v11; // eax
  unsigned int **v12; // ebp
  NiD3DTextureStage *v13; // eax
  unsigned int **v14; // ebp
  NiD3DTextureStage *v15; // eax
  unsigned int **v16; // ebp
  NiD3DTextureStage *v17; // eax
  NiD3DVertexShader *VertexShader; // ebp
  int v19; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v21; // ebx
  unsigned int **v22; // ebp
  NiD3DTextureStage *v23; // eax
  unsigned int **v24; // ebp
  NiD3DTextureStage *v25; // eax
  unsigned int **v26; // ebp
  NiD3DTextureStage *v27; // eax
  unsigned int **v28; // ebp
  NiD3DTextureStage *v29; // eax
  unsigned int **v30; // ebp
  NiD3DTextureStage *v31; // eax
  unsigned int **v32; // ebp
  NiD3DTextureStage *v33; // eax
  unsigned int **v34; // ebp
  NiD3DTextureStage *v35; // eax
  NiD3DVertexShader *v36; // ebp
  int v37; // ebx
  NiD3DPixelShader *v38; // ebp
  int v39; // ebx
  unsigned int **v40; // ebp
  NiD3DTextureStage *v41; // eax
  unsigned int **v42; // ebp
  NiD3DTextureStage *v43; // eax
  unsigned int **v44; // ebp
  NiD3DTextureStage *v45; // eax
  unsigned int **v46; // ebp
  NiD3DTextureStage *v47; // eax
  unsigned int **v48; // ebp
  NiD3DTextureStage *v49; // eax
  unsigned int **v50; // ebp
  NiD3DTextureStage *v51; // eax
  unsigned int **v52; // ebp
  NiD3DTextureStage *v53; // eax
  NiD3DVertexShader *v54; // ebp
  int v55; // ebx
  NiD3DPixelShader *v56; // ebp
  int v57; // ebx
  unsigned int **v58; // ebp
  NiD3DTextureStage *v59; // eax
  unsigned int **v60; // ebp
  NiD3DTextureStage *v61; // eax
  unsigned int **v62; // ebp
  NiD3DTextureStage *v63; // eax
  unsigned int **v64; // ebp
  NiD3DTextureStage *v65; // eax
  unsigned int **v66; // ebp
  NiD3DTextureStage *v67; // eax
  unsigned int **v68; // ebp
  NiD3DTextureStage *v69; // eax
  unsigned int **v70; // ebp
  NiD3DTextureStage *v71; // eax
  NiD3DVertexShader *v72; // ebp
  int v73; // ebx
  NiD3DPixelShader *v74; // ebp
  int v75; // ebx
  unsigned int **v76; // ebp
  NiD3DTextureStage *v77; // eax
  unsigned int **v78; // ebp
  NiD3DTextureStage *v79; // eax
  unsigned int **v80; // ebp
  NiD3DTextureStage *v81; // eax
  unsigned int **v82; // ebp
  NiD3DTextureStage *v83; // eax
  unsigned int **v84; // ebp
  NiD3DTextureStage *v85; // eax
  unsigned int **v86; // ebp
  NiD3DTextureStage *v87; // eax
  unsigned int **v88; // ebp
  NiD3DTextureStage *v89; // eax
  NiD3DVertexShader *v90; // ebp
  int v91; // ebx
  NiD3DPixelShader *v92; // ebp
  int v93; // ebx
  unsigned int **v94; // ebp
  NiD3DTextureStage *v95; // eax
  unsigned int **v96; // ebp
  NiD3DTextureStage *v97; // eax
  unsigned int **v98; // ebp
  NiD3DTextureStage *v99; // eax
  unsigned int **v100; // ebp
  NiD3DTextureStage *v101; // eax
  unsigned int **v102; // ebp
  NiD3DTextureStage *v103; // eax
  unsigned int **v104; // ebp
  NiD3DTextureStage *v105; // eax
  unsigned int **v106; // ebp
  NiD3DTextureStage *v107; // eax
  unsigned int **v108; // ebp
  NiD3DTextureStage *v109; // eax
  unsigned int **v110; // ebp
  NiD3DTextureStage *v111; // eax
  NiD3DTextureStage **v112; // eax
  NiD3DTextureStage *v113; // eax
  unsigned int *v114; // edi
  NiD3DTextureStage **v115; // eax
  NiD3DTextureStage *v116; // eax
  unsigned int *v117; // edi
  NiD3DTextureStage **v118; // eax
  NiD3DTextureStage *v119; // eax
  NiD3DTextureStage *v120; // edi
  NiD3DTextureStage **v121; // eax
  NiD3DTextureStage *v122; // eax
  unsigned int *v123; // edi
  NiD3DTextureStage **v124; // eax
  NiD3DTextureStage *v125; // eax
  NiD3DTextureStage **v126; // eax
  NiD3DTextureStage *v127; // eax
  unsigned int *v128; // edi
  NiD3DTextureStage **v129; // eax
  NiD3DTextureStage *v130; // eax
  unsigned int *v131; // edi
  NiD3DTextureStage **v132; // eax
  NiD3DTextureStage *v133; // eax
  unsigned int *v134; // edi
  NiD3DTextureStage **v135; // eax
  NiD3DTextureStage *v136; // eax
  unsigned int *v137; // edi
  NiD3DTextureStage **v138; // eax
  NiD3DTextureStage *v139; // eax
  NiD3DTextureStage *v140; // edi
  NiD3DTextureStage **v141; // eax
  NiD3DTextureStage *v142; // eax
  unsigned int *v143; // edi
  NiD3DTextureStage **v144; // eax
  NiD3DTextureStage *v145; // eax
  NiD3DTextureStage **v146; // eax
  NiD3DTextureStage *v147; // eax
  unsigned int *v148; // edi
  NiD3DTextureStage **v149; // eax
  NiD3DTextureStage *v150; // eax
  unsigned int *v151; // edi
  NiD3DTextureStage **v152; // eax
  NiD3DTextureStage *v153; // eax
  unsigned int *v154; // edi
  NiD3DTextureStage **v155; // eax
  NiD3DTextureStage *v156; // eax
  unsigned int *v157; // edi
  NiD3DTextureStage **v158; // eax
  NiD3DTextureStage *v159; // eax
  NiD3DTextureStage *v160; // edi
  NiD3DTextureStage **v161; // eax
  NiD3DTextureStage *v162; // eax
  unsigned int *v163; // edi
  NiD3DTextureStage **v164; // eax
  NiD3DTextureStage *v165; // eax
  NiD3DTextureStage **v166; // eax
  NiD3DTextureStage *v167; // eax
  unsigned int *v168; // edi
  NiD3DTextureStage **v169; // eax
  NiD3DTextureStage *v170; // eax
  unsigned int *v171; // edi
  NiD3DTextureStage **v172; // eax
  NiD3DTextureStage *v173; // eax
  unsigned int *v174; // edi
  NiD3DTextureStage **v175; // eax
  NiD3DTextureStage *v176; // eax
  unsigned int *v177; // edi
  NiD3DTextureStage **v178; // eax
  NiD3DTextureStage *v179; // eax
  NiD3DTextureStage *v180; // edi
  NiD3DTextureStage **v181; // eax
  NiD3DTextureStage *v182; // eax
  unsigned int *v183; // edi
  NiD3DTextureStage **v184; // eax
  NiD3DTextureStage *v185; // eax
  NiD3DTextureStage **v186; // eax
  NiD3DTextureStage *v187; // eax
  unsigned int *v188; // edi
  NiD3DTextureStage **v189; // eax
  NiD3DTextureStage *v190; // eax
  unsigned int *v191; // edi
  NiD3DTextureStage **v192; // eax
  NiD3DTextureStage *v193; // eax
  unsigned int *v194; // edi
  NiD3DTextureStage **v195; // eax
  NiD3DTextureStage *v196; // eax
  unsigned int *v197; // edi
  NiD3DTextureStage **v198; // eax
  NiD3DTextureStage *v199; // eax
  NiD3DTextureStage *v200; // edi
  NiD3DTextureStage **v201; // eax
  NiD3DTextureStage *v202; // eax
  unsigned int *v203; // edi
  NiD3DTextureStage **v204; // eax
  NiD3DTextureStage *v205; // eax
  NiD3DTextureStage **v206; // eax
  NiD3DTextureStage *v207; // eax
  unsigned int *v208; // edi
  NiD3DTextureStage **v209; // eax
  NiD3DTextureStage *v210; // eax
  unsigned int *v211; // edi
  NiD3DTextureStage **v212; // eax
  NiD3DTextureStage *v213; // eax
  unsigned int *v214; // edi
  NiD3DTextureStage **v215; // eax
  NiD3DTextureStage *v216; // eax
  unsigned int *v217; // edi
  NiD3DTextureStage **v218; // eax
  NiD3DTextureStage *v219; // eax
  NiD3DTextureStage *v220; // edi
  NiD3DTextureStage **v221; // eax
  NiD3DTextureStage *v222; // eax
  unsigned int *v223; // edi
  NiD3DTextureStage **v224; // eax
  NiD3DTextureStage *v225; // eax
  NiD3DTextureStage **v226; // eax
  NiD3DTextureStage *v227; // eax
  unsigned int *v228; // edi
  NiD3DTextureStage **v229; // eax
  NiD3DTextureStage *v230; // eax
  unsigned int *v231; // edi
  NiD3DTextureStage **v232; // eax
  NiD3DTextureStage *v233; // eax
  unsigned int *v234; // edi
  NiD3DTextureStage **v235; // eax
  NiD3DTextureStage *v236; // eax
  unsigned int *v237; // edi
  NiD3DTextureStage **v238; // eax
  NiD3DTextureStage *v239; // eax
  NiD3DTextureStage *v240; // edi
  NiD3DTextureStage **v241; // eax
  NiD3DTextureStage *v242; // eax
  unsigned int *v243; // edi
  NiD3DTextureStage **v244; // eax
  NiD3DTextureStage *v245; // eax
  NiD3DTextureStage **v246; // eax
  NiD3DTextureStage *v247; // eax
  unsigned int *v248; // edi
  NiD3DTextureStage **v249; // eax
  NiD3DTextureStage *v250; // eax
  unsigned int *v251; // edi
  NiD3DTextureStage **v252; // eax
  NiD3DTextureStage *v253; // eax
  unsigned int *v254; // edi
  NiD3DTextureStage **v255; // eax
  NiD3DTextureStage *v256; // eax
  unsigned int *v257; // edi
  NiD3DTextureStage **v258; // eax
  NiD3DTextureStage *v259; // eax
  NiD3DTextureStage *v260; // edi
  NiD3DTextureStage **v261; // eax
  NiD3DTextureStage *v262; // eax
  unsigned int *v263; // edi
  NiD3DTextureStage **v264; // eax
  NiD3DTextureStage *v265; // eax
  NiD3DTextureStage **v266; // eax
  NiD3DTextureStage *v267; // eax
  unsigned int *v268; // edi
  NiD3DTextureStage **v269; // eax
  NiD3DTextureStage *v270; // eax
  unsigned int *v271; // edi
  NiD3DTextureStage **v272; // eax
  NiD3DTextureStage *v273; // eax
  unsigned int *v274; // edi
  NiD3DTextureStage **v275; // eax
  NiD3DTextureStage *v276; // eax
  unsigned int *v277; // edi
  NiD3DTextureStage **v278; // eax
  NiD3DTextureStage *v279; // eax
  NiD3DTextureStage *v280; // edi
  NiD3DTextureStage **v281; // eax
  NiD3DTextureStage *v282; // eax
  unsigned int *v283; // edi
  NiD3DTextureStage **v284; // eax
  NiD3DTextureStage *v285; // eax
  NiD3DTextureStage **v286; // eax
  NiD3DTextureStage *v287; // eax
  unsigned int *v288; // edi
  NiD3DTextureStage **v289; // eax
  NiD3DTextureStage *v290; // eax
  unsigned int *v291; // edi
  NiD3DTextureStage **v292; // eax
  NiD3DTextureStage *v293; // eax
  unsigned int *v294; // edi
  NiD3DTextureStage **v295; // eax
  NiD3DTextureStage *v296; // eax
  unsigned int *v297; // edi
  NiD3DTextureStage **v298; // eax
  NiD3DTextureStage *v299; // eax
  NiD3DTextureStage *v300; // edi
  NiD3DTextureStage **v301; // eax
  NiD3DTextureStage *v302; // eax
  unsigned int *v303; // edi
  NiD3DTextureStage **v304; // eax
  NiD3DTextureStage *v305; // eax
  unsigned int *a3; // [esp+28h] [ebp-18h] BYREF
  int v307; // [esp+2Ch] [ebp-14h]
  NiD3DTextureStage *v308; // [esp+30h] [ebp-10h] BYREF
  unsigned int v309; // [esp+3Ch] [ebp-4h]

  v0 = 0; /*0x82d9b7*/
  v1 = 0; /*0x82d9b9*/
  v307 = 0; /*0x82d9bb*/
  v309 = 0; /*0x82d9bf*/
  a3 = 0; /*0x82d9c3*/
  v2 = unk_B456C8; /*0x82d9c7*/
  v3 = unk_B456C8 == 0; /*0x82d9cc*/
  LOBYTE(v309) = 1; /*0x82d9d3*/
  if ( !v3 ) /*0x82d9d8*/
  {
    v0 = (NiD3DPass *)v2; /*0x82d9da*/
    v307 = v2; /*0x82d9de*/
    if ( v2 ) /*0x82d9e2*/
      ++*(_DWORD *)(v2 + 0x60); /*0x82d9e4*/
  }
  if ( v0->StageCount < 7 ) /*0x82d9f0*/
  {
    v4 = (unsigned int *)*NiD3DTextureStagePool_Acquire(&v308); /*0x82da03*/
    if ( v4 ) /*0x82da07*/
    {
      v1 = (NiD3DTextureStage *)v4; /*0x82da09*/
      ++v4[0x17]; /*0x82da0b*/
      a3 = v4; /*0x82da0e*/
    }
    v5 = v308; /*0x82da12*/
    LOBYTE(v309) = 1; /*0x82da18*/
    if ( v308 ) /*0x82da1d*/
    {
      --v308[7].Unk08; /*0x82da1f*/
      if ( !v5[7].Unk08 ) /*0x82da27*/
        sub_772560(v5); /*0x82da2c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x82da38*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x82da45*/
    v6 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82da57*/
    v3 = v1 == (NiD3DTextureStage *)*v6; /*0x82da59*/
    LOBYTE(v309) = 3; /*0x82da5c*/
    if ( !v3 ) /*0x82da61*/
    {
      if ( v1 ) /*0x82da65*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82da67*/
        if ( v3 ) /*0x82da6a*/
          sub_772560(v1); /*0x82da6e*/
      }
      v1 = (NiD3DTextureStage *)*v6; /*0x82da73*/
      a3 = *v6; /*0x82da78*/
      if ( a3 ) /*0x82da7c*/
        ++v1[7].Unk08; /*0x82da7e*/
    }
    v7 = v308; /*0x82da82*/
    LOBYTE(v309) = 1; /*0x82da88*/
    if ( v308 ) /*0x82da8d*/
    {
      --v308[7].Unk08; /*0x82da8f*/
      if ( !v7[7].Unk08 ) /*0x82da97*/
        sub_772560(v7); /*0x82da9c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x82daa8*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x82dab5*/
    v8 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82dac7*/
    v3 = v1 == (NiD3DTextureStage *)*v8; /*0x82dac9*/
    LOBYTE(v309) = 4; /*0x82dacc*/
    if ( !v3 ) /*0x82dad1*/
    {
      if ( v1 ) /*0x82dad5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82dad7*/
        if ( v3 ) /*0x82dada*/
          sub_772560(v1); /*0x82dade*/
      }
      v1 = (NiD3DTextureStage *)*v8; /*0x82dae3*/
      a3 = *v8; /*0x82dae8*/
      if ( a3 ) /*0x82daec*/
        ++v1[7].Unk08; /*0x82daee*/
    }
    v9 = v308; /*0x82daf2*/
    LOBYTE(v309) = 1; /*0x82daf8*/
    if ( v308 ) /*0x82dafd*/
    {
      --v308[7].Unk08; /*0x82daff*/
      if ( !v9[7].Unk08 ) /*0x82db07*/
        sub_772560(v9); /*0x82db0c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x82db18*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x82db25*/
    v10 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82db37*/
    v3 = v1 == (NiD3DTextureStage *)*v10; /*0x82db39*/
    LOBYTE(v309) = 5; /*0x82db3c*/
    if ( !v3 ) /*0x82db41*/
    {
      if ( v1 ) /*0x82db45*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82db47*/
        if ( v3 ) /*0x82db4a*/
          sub_772560(v1); /*0x82db4e*/
      }
      v1 = (NiD3DTextureStage *)*v10; /*0x82db53*/
      a3 = *v10; /*0x82db58*/
      if ( a3 ) /*0x82db5c*/
        ++v1[7].Unk08; /*0x82db5e*/
    }
    v11 = v308; /*0x82db62*/
    LOBYTE(v309) = 1; /*0x82db68*/
    if ( v308 ) /*0x82db6d*/
    {
      --v308[7].Unk08; /*0x82db6f*/
      if ( !v11[7].Unk08 ) /*0x82db77*/
        sub_772560(v11); /*0x82db7c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x82db88*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x82db95*/
    v12 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82dba7*/
    v3 = v1 == (NiD3DTextureStage *)*v12; /*0x82dba9*/
    LOBYTE(v309) = 6; /*0x82dbac*/
    if ( !v3 ) /*0x82dbb1*/
    {
      if ( v1 ) /*0x82dbb5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82dbb7*/
        if ( v3 ) /*0x82dbba*/
          sub_772560(v1); /*0x82dbbe*/
      }
      v1 = (NiD3DTextureStage *)*v12; /*0x82dbc3*/
      a3 = *v12; /*0x82dbc8*/
      if ( a3 ) /*0x82dbcc*/
        ++v1[7].Unk08; /*0x82dbce*/
    }
    v13 = v308; /*0x82dbd2*/
    LOBYTE(v309) = 1; /*0x82dbd8*/
    if ( v308 ) /*0x82dbdd*/
    {
      --v308[7].Unk08; /*0x82dbdf*/
      if ( !v13[7].Unk08 ) /*0x82dbe7*/
        sub_772560(v13); /*0x82dbec*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 3, 0); /*0x82dbf8*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82dc09*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x82dc13*/
    v14 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82dc25*/
    v3 = v1 == (NiD3DTextureStage *)*v14; /*0x82dc27*/
    LOBYTE(v309) = 7; /*0x82dc2a*/
    if ( !v3 ) /*0x82dc2f*/
    {
      if ( v1 ) /*0x82dc33*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82dc35*/
        if ( v3 ) /*0x82dc38*/
          sub_772560(v1); /*0x82dc3c*/
      }
      v1 = (NiD3DTextureStage *)*v14; /*0x82dc41*/
      a3 = *v14; /*0x82dc46*/
      if ( a3 ) /*0x82dc4a*/
        ++v1[7].Unk08; /*0x82dc4c*/
    }
    v15 = v308; /*0x82dc50*/
    LOBYTE(v309) = 1; /*0x82dc56*/
    if ( v308 ) /*0x82dc5b*/
    {
      --v308[7].Unk08; /*0x82dc5d*/
      if ( !v15[7].Unk08 ) /*0x82dc65*/
        sub_772560(v15); /*0x82dc6a*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 5, 1, 2); /*0x82dc76*/
    NiD3DPass_SetTextureStage(v0, 5u, &v1->Stage); /*0x82dc83*/
    v16 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82dc95*/
    v3 = v1 == (NiD3DTextureStage *)*v16; /*0x82dc97*/
    LOBYTE(v309) = 8; /*0x82dc9a*/
    if ( !v3 ) /*0x82dc9f*/
    {
      if ( v1 ) /*0x82dca3*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82dca5*/
        if ( v3 ) /*0x82dca8*/
          sub_772560(v1); /*0x82dcac*/
      }
      v1 = (NiD3DTextureStage *)*v16; /*0x82dcb1*/
      a3 = *v16; /*0x82dcb6*/
      if ( a3 ) /*0x82dcba*/
        ++v1[7].Unk08; /*0x82dcbc*/
    }
    v17 = v308; /*0x82dcc0*/
    LOBYTE(v309) = 1; /*0x82dcc6*/
    if ( v308 ) /*0x82dccb*/
    {
      --v308[7].Unk08; /*0x82dccd*/
      if ( !v17[7].Unk08 ) /*0x82dcd5*/
        sub_772560(v17); /*0x82dcda*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 6, 3, 0); /*0x82dce6*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x82dcf3*/
  }
  VertexShader = v0->VertexShader; /*0x82dcfd*/
  v19 = unk_B453B0; /*0x82dd02*/
  if ( VertexShader != (NiD3DVertexShader *)unk_B453B0 ) /*0x82dd04*/
  {
    if ( VertexShader ) /*0x82dd08*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x82dd0e*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x82dd25*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v19; /*0x82dd29*/
    if ( v19 ) /*0x82dd2c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x82dd32*/
  }
  PixelShader = v0->PixelShader; /*0x82dd3d*/
  v21 = unk_B451B0; /*0x82dd42*/
  if ( PixelShader != (NiD3DPixelShader *)unk_B451B0 ) /*0x82dd44*/
  {
    if ( PixelShader ) /*0x82dd48*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x82dd4e*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x82dd65*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v21; /*0x82dd69*/
    if ( v21 ) /*0x82dd6c*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x82dd72*/
  }
  if ( !v0->RenderStateGroup ) /*0x82dd78*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82dd83*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82dd8f*/
  if ( !v0->RenderStateGroup ) /*0x82dd94*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82dd9f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82ddab*/
  if ( !v0->RenderStateGroup ) /*0x82ddb0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ddbb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82ddc7*/
  if ( !v0->RenderStateGroup ) /*0x82ddcc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ddd7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82dde3*/
  if ( !v0->RenderStateGroup ) /*0x82dde8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ddf3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82ddff*/
  if ( !v0->RenderStateGroup ) /*0x82de04*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82de0f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82de1b*/
  v3 = v0 == (NiD3DPass *)unk_B456CC; /*0x82de23*/
  unk_B43C48 = 0x21082; /*0x82de29*/
  unk_B442D8 = 0x1C; /*0x82de33*/
  unk_B44968 = 8; /*0x82de3d*/
  if ( !v3 ) /*0x82de47*/
  {
    v3 = v0->RefCount-- == 1; /*0x82de49*/
    if ( v3 ) /*0x82de4c*/
      NiD3DPass_ReleaseToPool(v0); /*0x82de50*/
    v0 = (NiD3DPass *)unk_B456CC; /*0x82de55*/
    v307 = unk_B456CC; /*0x82de5d*/
    if ( v307 ) /*0x82de61*/
      ++v0->RefCount; /*0x82de63*/
  }
  if ( v0->StageCount < 7 ) /*0x82de6d*/
  {
    v22 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82de80*/
    v3 = v1 == (NiD3DTextureStage *)*v22; /*0x82de82*/
    LOBYTE(v309) = 9; /*0x82de85*/
    if ( !v3 ) /*0x82de8a*/
    {
      if ( v1 ) /*0x82de8e*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82de90*/
        if ( v3 ) /*0x82de93*/
          sub_772560(v1); /*0x82de97*/
      }
      v1 = (NiD3DTextureStage *)*v22; /*0x82de9c*/
      a3 = *v22; /*0x82dea1*/
      if ( a3 ) /*0x82dea5*/
        ++v1[7].Unk08; /*0x82dea7*/
    }
    v23 = v308; /*0x82deab*/
    LOBYTE(v309) = 1; /*0x82deb1*/
    if ( v308 ) /*0x82deb6*/
    {
      --v308[7].Unk08; /*0x82deb8*/
      if ( !v23[7].Unk08 ) /*0x82dec0*/
        sub_772560(v23); /*0x82dec5*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x82ded1*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x82dede*/
    v24 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82def0*/
    v3 = v1 == (NiD3DTextureStage *)*v24; /*0x82def2*/
    LOBYTE(v309) = 0xA; /*0x82def5*/
    if ( !v3 ) /*0x82defa*/
    {
      if ( v1 ) /*0x82defe*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82df00*/
        if ( v3 ) /*0x82df03*/
          sub_772560(v1); /*0x82df07*/
      }
      v1 = (NiD3DTextureStage *)*v24; /*0x82df0c*/
      a3 = *v24; /*0x82df11*/
      if ( a3 ) /*0x82df15*/
        ++v1[7].Unk08; /*0x82df17*/
    }
    v25 = v308; /*0x82df1b*/
    LOBYTE(v309) = 1; /*0x82df21*/
    if ( v308 ) /*0x82df26*/
    {
      --v308[7].Unk08; /*0x82df28*/
      if ( !v25[7].Unk08 ) /*0x82df30*/
        sub_772560(v25); /*0x82df35*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x82df41*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x82df4e*/
    v26 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82df60*/
    v3 = v1 == (NiD3DTextureStage *)*v26; /*0x82df62*/
    LOBYTE(v309) = 0xB; /*0x82df65*/
    if ( !v3 ) /*0x82df6a*/
    {
      if ( v1 ) /*0x82df6e*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82df70*/
        if ( v3 ) /*0x82df73*/
          sub_772560(v1); /*0x82df77*/
      }
      v1 = (NiD3DTextureStage *)*v26; /*0x82df7c*/
      a3 = *v26; /*0x82df81*/
      if ( a3 ) /*0x82df85*/
        ++v1[7].Unk08; /*0x82df87*/
    }
    v27 = v308; /*0x82df8b*/
    LOBYTE(v309) = 1; /*0x82df91*/
    if ( v308 ) /*0x82df96*/
    {
      --v308[7].Unk08; /*0x82df98*/
      if ( !v27[7].Unk08 ) /*0x82dfa0*/
        sub_772560(v27); /*0x82dfa5*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x82dfb1*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x82dfbe*/
    v28 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82dfd0*/
    v3 = v1 == (NiD3DTextureStage *)*v28; /*0x82dfd2*/
    LOBYTE(v309) = 0xC; /*0x82dfd5*/
    if ( !v3 ) /*0x82dfda*/
    {
      if ( v1 ) /*0x82dfde*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82dfe0*/
        if ( v3 ) /*0x82dfe3*/
          sub_772560(v1); /*0x82dfe7*/
      }
      v1 = (NiD3DTextureStage *)*v28; /*0x82dfec*/
      a3 = *v28; /*0x82dff1*/
      if ( a3 ) /*0x82dff5*/
        ++v1[7].Unk08; /*0x82dff7*/
    }
    v29 = v308; /*0x82dffb*/
    LOBYTE(v309) = 1; /*0x82e001*/
    if ( v308 ) /*0x82e006*/
    {
      --v308[7].Unk08; /*0x82e008*/
      if ( !v29[7].Unk08 ) /*0x82e010*/
        sub_772560(v29); /*0x82e015*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x82e021*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x82e02e*/
    v30 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e040*/
    v3 = v1 == (NiD3DTextureStage *)*v30; /*0x82e042*/
    LOBYTE(v309) = 0xD; /*0x82e045*/
    if ( !v3 ) /*0x82e04a*/
    {
      if ( v1 ) /*0x82e04e*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e050*/
        if ( v3 ) /*0x82e053*/
          sub_772560(v1); /*0x82e057*/
      }
      v1 = (NiD3DTextureStage *)*v30; /*0x82e05c*/
      a3 = *v30; /*0x82e061*/
      if ( a3 ) /*0x82e065*/
        ++v1[7].Unk08; /*0x82e067*/
    }
    v31 = v308; /*0x82e06b*/
    LOBYTE(v309) = 1; /*0x82e071*/
    if ( v308 ) /*0x82e076*/
    {
      --v308[7].Unk08; /*0x82e078*/
      if ( !v31[7].Unk08 ) /*0x82e080*/
        sub_772560(v31); /*0x82e085*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 3, 0); /*0x82e091*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82e0a1*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x82e0ab*/
    v32 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e0bd*/
    v3 = v1 == (NiD3DTextureStage *)*v32; /*0x82e0bf*/
    LOBYTE(v309) = 0xE; /*0x82e0c2*/
    if ( !v3 ) /*0x82e0c7*/
    {
      if ( v1 ) /*0x82e0cb*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e0cd*/
        if ( v3 ) /*0x82e0d0*/
          sub_772560(v1); /*0x82e0d4*/
      }
      v1 = (NiD3DTextureStage *)*v32; /*0x82e0d9*/
      a3 = *v32; /*0x82e0de*/
      if ( a3 ) /*0x82e0e2*/
        ++v1[7].Unk08; /*0x82e0e4*/
    }
    v33 = v308; /*0x82e0e8*/
    LOBYTE(v309) = 1; /*0x82e0ee*/
    if ( v308 ) /*0x82e0f3*/
    {
      --v308[7].Unk08; /*0x82e0f5*/
      if ( !v33[7].Unk08 ) /*0x82e0fd*/
        sub_772560(v33); /*0x82e102*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 5, 1, 2); /*0x82e10e*/
    NiD3DPass_SetTextureStage(v0, 5u, &v1->Stage); /*0x82e11b*/
    v34 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e12d*/
    v3 = v1 == (NiD3DTextureStage *)*v34; /*0x82e12f*/
    LOBYTE(v309) = 0xF; /*0x82e132*/
    if ( !v3 ) /*0x82e137*/
    {
      if ( v1 ) /*0x82e13b*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e13d*/
        if ( v3 ) /*0x82e140*/
          sub_772560(v1); /*0x82e144*/
      }
      v1 = (NiD3DTextureStage *)*v34; /*0x82e149*/
      a3 = *v34; /*0x82e14e*/
      if ( a3 ) /*0x82e152*/
        ++v1[7].Unk08; /*0x82e154*/
    }
    v35 = v308; /*0x82e158*/
    LOBYTE(v309) = 1; /*0x82e15e*/
    if ( v308 ) /*0x82e163*/
    {
      --v308[7].Unk08; /*0x82e165*/
      if ( !v35[7].Unk08 ) /*0x82e16d*/
        sub_772560(v35); /*0x82e172*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 6, 3, 0); /*0x82e17e*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x82e18b*/
  }
  v36 = v0->VertexShader; /*0x82e195*/
  v37 = unk_B453B0; /*0x82e19a*/
  if ( v36 != (NiD3DVertexShader *)unk_B453B0 ) /*0x82e19c*/
  {
    if ( v36 ) /*0x82e1a0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) ) /*0x82e1a6*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v36)(v36, 1); /*0x82e1bd*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v37; /*0x82e1c1*/
    if ( v37 ) /*0x82e1c4*/
      InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x82e1ca*/
  }
  v38 = v0->PixelShader; /*0x82e1d5*/
  v39 = unk_B451B4; /*0x82e1da*/
  if ( v38 != (NiD3DPixelShader *)unk_B451B4 ) /*0x82e1dc*/
  {
    if ( v38 ) /*0x82e1e0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v38 + 1) ) /*0x82e1e6*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v38)(v38, 1); /*0x82e1fd*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v39; /*0x82e201*/
    if ( v39 ) /*0x82e204*/
      InterlockedIncrement((volatile LONG *)(v39 + 4)); /*0x82e20a*/
  }
  if ( !v0->RenderStateGroup ) /*0x82e210*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e21b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82e227*/
  if ( !v0->RenderStateGroup ) /*0x82e22c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e237*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82e243*/
  if ( !v0->RenderStateGroup ) /*0x82e248*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e253*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82e25f*/
  if ( !v0->RenderStateGroup ) /*0x82e264*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e26f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82e27b*/
  if ( !v0->RenderStateGroup ) /*0x82e280*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e28b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82e297*/
  if ( !v0->RenderStateGroup ) /*0x82e29c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e2a7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82e2b3*/
  v3 = v0 == (NiD3DPass *)unk_B456DC; /*0x82e2bb*/
  unk_B43C4C = 0x21082; /*0x82e2c1*/
  unk_B442DC = 0x9C; /*0x82e2cb*/
  unk_B4496C = 0xC; /*0x82e2d5*/
  if ( !v3 ) /*0x82e2df*/
  {
    v3 = v0->RefCount-- == 1; /*0x82e2e1*/
    if ( v3 ) /*0x82e2e4*/
      NiD3DPass_ReleaseToPool(v0); /*0x82e2e8*/
    v0 = (NiD3DPass *)unk_B456DC; /*0x82e2ed*/
    v307 = unk_B456DC; /*0x82e2f5*/
    if ( v307 ) /*0x82e2f9*/
      ++v0->RefCount; /*0x82e2fb*/
  }
  if ( v0->StageCount < 7 ) /*0x82e303*/
  {
    v40 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e316*/
    v3 = v1 == (NiD3DTextureStage *)*v40; /*0x82e318*/
    LOBYTE(v309) = 0x10; /*0x82e31b*/
    if ( !v3 ) /*0x82e320*/
    {
      if ( v1 ) /*0x82e324*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e326*/
        if ( v3 ) /*0x82e329*/
          sub_772560(v1); /*0x82e32d*/
      }
      v1 = (NiD3DTextureStage *)*v40; /*0x82e332*/
      a3 = *v40; /*0x82e337*/
      if ( a3 ) /*0x82e33b*/
        ++v1[7].Unk08; /*0x82e33d*/
    }
    v41 = v308; /*0x82e341*/
    LOBYTE(v309) = 1; /*0x82e347*/
    if ( v308 ) /*0x82e34c*/
    {
      --v308[7].Unk08; /*0x82e34e*/
      if ( !v41[7].Unk08 ) /*0x82e356*/
        sub_772560(v41); /*0x82e35b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x82e367*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x82e374*/
    v42 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e386*/
    v3 = v1 == (NiD3DTextureStage *)*v42; /*0x82e388*/
    LOBYTE(v309) = 0x11; /*0x82e38b*/
    if ( !v3 ) /*0x82e390*/
    {
      if ( v1 ) /*0x82e394*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e396*/
        if ( v3 ) /*0x82e399*/
          sub_772560(v1); /*0x82e39d*/
      }
      v1 = (NiD3DTextureStage *)*v42; /*0x82e3a2*/
      a3 = *v42; /*0x82e3a7*/
      if ( a3 ) /*0x82e3ab*/
        ++v1[7].Unk08; /*0x82e3ad*/
    }
    v43 = v308; /*0x82e3b1*/
    LOBYTE(v309) = 1; /*0x82e3b7*/
    if ( v308 ) /*0x82e3bc*/
    {
      --v308[7].Unk08; /*0x82e3be*/
      if ( !v43[7].Unk08 ) /*0x82e3c6*/
        sub_772560(v43); /*0x82e3cb*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x82e3d7*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x82e3e4*/
    v44 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e3f6*/
    v3 = v1 == (NiD3DTextureStage *)*v44; /*0x82e3f8*/
    LOBYTE(v309) = 0x12; /*0x82e3fb*/
    if ( !v3 ) /*0x82e400*/
    {
      if ( v1 ) /*0x82e404*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e406*/
        if ( v3 ) /*0x82e409*/
          sub_772560(v1); /*0x82e40d*/
      }
      v1 = (NiD3DTextureStage *)*v44; /*0x82e412*/
      a3 = *v44; /*0x82e417*/
      if ( a3 ) /*0x82e41b*/
        ++v1[7].Unk08; /*0x82e41d*/
    }
    v45 = v308; /*0x82e421*/
    LOBYTE(v309) = 1; /*0x82e427*/
    if ( v308 ) /*0x82e42c*/
    {
      --v308[7].Unk08; /*0x82e42e*/
      if ( !v45[7].Unk08 ) /*0x82e436*/
        sub_772560(v45); /*0x82e43b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x82e447*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x82e454*/
    v46 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e466*/
    v3 = v1 == (NiD3DTextureStage *)*v46; /*0x82e468*/
    LOBYTE(v309) = 0x13; /*0x82e46b*/
    if ( !v3 ) /*0x82e470*/
    {
      if ( v1 ) /*0x82e474*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e476*/
        if ( v3 ) /*0x82e479*/
          sub_772560(v1); /*0x82e47d*/
      }
      v1 = (NiD3DTextureStage *)*v46; /*0x82e482*/
      a3 = *v46; /*0x82e487*/
      if ( a3 ) /*0x82e48b*/
        ++v1[7].Unk08; /*0x82e48d*/
    }
    v47 = v308; /*0x82e491*/
    LOBYTE(v309) = 1; /*0x82e497*/
    if ( v308 ) /*0x82e49c*/
    {
      --v308[7].Unk08; /*0x82e49e*/
      if ( !v47[7].Unk08 ) /*0x82e4a6*/
        sub_772560(v47); /*0x82e4ab*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x82e4b7*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x82e4c4*/
    v48 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e4d6*/
    v3 = v1 == (NiD3DTextureStage *)*v48; /*0x82e4d8*/
    LOBYTE(v309) = 0x14; /*0x82e4db*/
    if ( !v3 ) /*0x82e4e0*/
    {
      if ( v1 ) /*0x82e4e4*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e4e6*/
        if ( v3 ) /*0x82e4e9*/
          sub_772560(v1); /*0x82e4ed*/
      }
      v1 = (NiD3DTextureStage *)*v48; /*0x82e4f2*/
      a3 = *v48; /*0x82e4f7*/
      if ( a3 ) /*0x82e4fb*/
        ++v1[7].Unk08; /*0x82e4fd*/
    }
    v49 = v308; /*0x82e501*/
    LOBYTE(v309) = 1; /*0x82e507*/
    if ( v308 ) /*0x82e50c*/
    {
      --v308[7].Unk08; /*0x82e50e*/
      if ( !v49[7].Unk08 ) /*0x82e516*/
        sub_772560(v49); /*0x82e51b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 3, 0); /*0x82e527*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82e537*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x82e541*/
    v50 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e553*/
    v3 = v1 == (NiD3DTextureStage *)*v50; /*0x82e555*/
    LOBYTE(v309) = 0x15; /*0x82e558*/
    if ( !v3 ) /*0x82e55d*/
    {
      if ( v1 ) /*0x82e561*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e563*/
        if ( v3 ) /*0x82e566*/
          sub_772560(v1); /*0x82e56a*/
      }
      v1 = (NiD3DTextureStage *)*v50; /*0x82e56f*/
      a3 = *v50; /*0x82e574*/
      if ( a3 ) /*0x82e578*/
        ++v1[7].Unk08; /*0x82e57a*/
    }
    v51 = v308; /*0x82e57e*/
    LOBYTE(v309) = 1; /*0x82e584*/
    if ( v308 ) /*0x82e589*/
    {
      --v308[7].Unk08; /*0x82e58b*/
      if ( !v51[7].Unk08 ) /*0x82e593*/
        sub_772560(v51); /*0x82e598*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 5, 1, 2); /*0x82e5a4*/
    NiD3DPass_SetTextureStage(v0, 5u, &v1->Stage); /*0x82e5b1*/
    v52 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e5c3*/
    v3 = v1 == (NiD3DTextureStage *)*v52; /*0x82e5c5*/
    LOBYTE(v309) = 0x16; /*0x82e5c8*/
    if ( !v3 ) /*0x82e5cd*/
    {
      if ( v1 ) /*0x82e5d1*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e5d3*/
        if ( v3 ) /*0x82e5d6*/
          sub_772560(v1); /*0x82e5da*/
      }
      v1 = (NiD3DTextureStage *)*v52; /*0x82e5df*/
      a3 = *v52; /*0x82e5e4*/
      if ( a3 ) /*0x82e5e8*/
        ++v1[7].Unk08; /*0x82e5ea*/
    }
    v53 = v308; /*0x82e5ee*/
    LOBYTE(v309) = 1; /*0x82e5f4*/
    if ( v308 ) /*0x82e5f9*/
    {
      --v308[7].Unk08; /*0x82e5fb*/
      if ( !v53[7].Unk08 ) /*0x82e603*/
        sub_772560(v53); /*0x82e608*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 6, 3, 0); /*0x82e614*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x82e621*/
  }
  v54 = v0->VertexShader; /*0x82e62b*/
  v55 = unk_B453B4; /*0x82e630*/
  if ( v54 != (NiD3DVertexShader *)unk_B453B4 ) /*0x82e632*/
  {
    if ( v54 ) /*0x82e636*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v54 + 1) ) /*0x82e63c*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v54)(v54, 1); /*0x82e653*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v55; /*0x82e657*/
    if ( v55 ) /*0x82e65a*/
      InterlockedIncrement((volatile LONG *)(v55 + 4)); /*0x82e660*/
  }
  v56 = v0->PixelShader; /*0x82e66b*/
  v57 = unk_B451B0; /*0x82e670*/
  if ( v56 != (NiD3DPixelShader *)unk_B451B0 ) /*0x82e672*/
  {
    if ( v56 ) /*0x82e676*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) ) /*0x82e67c*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v56)(v56, 1); /*0x82e693*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v57; /*0x82e697*/
    if ( v57 ) /*0x82e69a*/
      InterlockedIncrement((volatile LONG *)(v57 + 4)); /*0x82e6a0*/
  }
  if ( !v0->RenderStateGroup ) /*0x82e6a6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e6b1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82e6bd*/
  if ( !v0->RenderStateGroup ) /*0x82e6c2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e6cd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82e6d9*/
  if ( !v0->RenderStateGroup ) /*0x82e6de*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e6e9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82e6f5*/
  if ( !v0->RenderStateGroup ) /*0x82e6fa*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e705*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82e711*/
  if ( !v0->RenderStateGroup ) /*0x82e716*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e721*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82e72d*/
  if ( !v0->RenderStateGroup ) /*0x82e732*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82e73d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82e749*/
  v3 = v0 == (NiD3DPass *)unk_B456E4; /*0x82e751*/
  unk_B43C5C = 0x61088; /*0x82e757*/
  unk_B442EC = 0x1C; /*0x82e761*/
  unk_B4497C = 8; /*0x82e76b*/
  if ( !v3 ) /*0x82e775*/
  {
    v3 = v0->RefCount-- == 1; /*0x82e777*/
    if ( v3 ) /*0x82e77a*/
      NiD3DPass_ReleaseToPool(v0); /*0x82e77e*/
    v0 = (NiD3DPass *)unk_B456E4; /*0x82e783*/
    v307 = unk_B456E4; /*0x82e78b*/
    if ( v307 ) /*0x82e78f*/
      ++v0->RefCount; /*0x82e791*/
  }
  if ( v0->StageCount < 7 ) /*0x82e799*/
  {
    v58 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e7ac*/
    v3 = v1 == (NiD3DTextureStage *)*v58; /*0x82e7ae*/
    LOBYTE(v309) = 0x17; /*0x82e7b1*/
    if ( !v3 ) /*0x82e7b6*/
    {
      if ( v1 ) /*0x82e7ba*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e7bc*/
        if ( v3 ) /*0x82e7bf*/
          sub_772560(v1); /*0x82e7c3*/
      }
      v1 = (NiD3DTextureStage *)*v58; /*0x82e7c8*/
      a3 = *v58; /*0x82e7cd*/
      if ( a3 ) /*0x82e7d1*/
        ++v1[7].Unk08; /*0x82e7d3*/
    }
    v59 = v308; /*0x82e7d7*/
    LOBYTE(v309) = 1; /*0x82e7dd*/
    if ( v308 ) /*0x82e7e2*/
    {
      --v308[7].Unk08; /*0x82e7e4*/
      if ( !v59[7].Unk08 ) /*0x82e7ec*/
        sub_772560(v59); /*0x82e7f1*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x82e7fd*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x82e80a*/
    v60 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e81c*/
    v3 = v1 == (NiD3DTextureStage *)*v60; /*0x82e81e*/
    LOBYTE(v309) = 0x18; /*0x82e821*/
    if ( !v3 ) /*0x82e826*/
    {
      if ( v1 ) /*0x82e82a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e82c*/
        if ( v3 ) /*0x82e82f*/
          sub_772560(v1); /*0x82e833*/
      }
      v1 = (NiD3DTextureStage *)*v60; /*0x82e838*/
      a3 = *v60; /*0x82e83d*/
      if ( a3 ) /*0x82e841*/
        ++v1[7].Unk08; /*0x82e843*/
    }
    v61 = v308; /*0x82e847*/
    LOBYTE(v309) = 1; /*0x82e84d*/
    if ( v308 ) /*0x82e852*/
    {
      --v308[7].Unk08; /*0x82e854*/
      if ( !v61[7].Unk08 ) /*0x82e85c*/
        sub_772560(v61); /*0x82e861*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x82e86d*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x82e87a*/
    v62 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e88c*/
    v3 = v1 == (NiD3DTextureStage *)*v62; /*0x82e88e*/
    LOBYTE(v309) = 0x19; /*0x82e891*/
    if ( !v3 ) /*0x82e896*/
    {
      if ( v1 ) /*0x82e89a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e89c*/
        if ( v3 ) /*0x82e89f*/
          sub_772560(v1); /*0x82e8a3*/
      }
      v1 = (NiD3DTextureStage *)*v62; /*0x82e8a8*/
      a3 = *v62; /*0x82e8ad*/
      if ( a3 ) /*0x82e8b1*/
        ++v1[7].Unk08; /*0x82e8b3*/
    }
    v63 = v308; /*0x82e8b7*/
    LOBYTE(v309) = 1; /*0x82e8bd*/
    if ( v308 ) /*0x82e8c2*/
    {
      --v308[7].Unk08; /*0x82e8c4*/
      if ( !v63[7].Unk08 ) /*0x82e8cc*/
        sub_772560(v63); /*0x82e8d1*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x82e8dd*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x82e8ea*/
    v64 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e8fc*/
    v3 = v1 == (NiD3DTextureStage *)*v64; /*0x82e8fe*/
    LOBYTE(v309) = 0x1A; /*0x82e901*/
    if ( !v3 ) /*0x82e906*/
    {
      if ( v1 ) /*0x82e90a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e90c*/
        if ( v3 ) /*0x82e90f*/
          sub_772560(v1); /*0x82e913*/
      }
      v1 = (NiD3DTextureStage *)*v64; /*0x82e918*/
      a3 = *v64; /*0x82e91d*/
      if ( a3 ) /*0x82e921*/
        ++v1[7].Unk08; /*0x82e923*/
    }
    v65 = v308; /*0x82e927*/
    LOBYTE(v309) = 1; /*0x82e92d*/
    if ( v308 ) /*0x82e932*/
    {
      --v308[7].Unk08; /*0x82e934*/
      if ( !v65[7].Unk08 ) /*0x82e93c*/
        sub_772560(v65); /*0x82e941*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x82e94d*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x82e95a*/
    v66 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e96c*/
    v3 = v1 == (NiD3DTextureStage *)*v66; /*0x82e96e*/
    LOBYTE(v309) = 0x1B; /*0x82e971*/
    if ( !v3 ) /*0x82e976*/
    {
      if ( v1 ) /*0x82e97a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e97c*/
        if ( v3 ) /*0x82e97f*/
          sub_772560(v1); /*0x82e983*/
      }
      v1 = (NiD3DTextureStage *)*v66; /*0x82e988*/
      a3 = *v66; /*0x82e98d*/
      if ( a3 ) /*0x82e991*/
        ++v1[7].Unk08; /*0x82e993*/
    }
    v67 = v308; /*0x82e997*/
    LOBYTE(v309) = 1; /*0x82e99d*/
    if ( v308 ) /*0x82e9a2*/
    {
      --v308[7].Unk08; /*0x82e9a4*/
      if ( !v67[7].Unk08 ) /*0x82e9ac*/
        sub_772560(v67); /*0x82e9b1*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 3, 0); /*0x82e9bd*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82e9cd*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x82e9d7*/
    v68 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82e9e9*/
    v3 = v1 == (NiD3DTextureStage *)*v68; /*0x82e9eb*/
    LOBYTE(v309) = 0x1C; /*0x82e9ee*/
    if ( !v3 ) /*0x82e9f3*/
    {
      if ( v1 ) /*0x82e9f7*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82e9f9*/
        if ( v3 ) /*0x82e9fc*/
          sub_772560(v1); /*0x82ea00*/
      }
      v1 = (NiD3DTextureStage *)*v68; /*0x82ea05*/
      a3 = *v68; /*0x82ea0a*/
      if ( a3 ) /*0x82ea0e*/
        ++v1[7].Unk08; /*0x82ea10*/
    }
    v69 = v308; /*0x82ea14*/
    LOBYTE(v309) = 1; /*0x82ea1a*/
    if ( v308 ) /*0x82ea1f*/
    {
      --v308[7].Unk08; /*0x82ea21*/
      if ( !v69[7].Unk08 ) /*0x82ea29*/
        sub_772560(v69); /*0x82ea2e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 5, 1, 2); /*0x82ea3a*/
    NiD3DPass_SetTextureStage(v0, 5u, &v1->Stage); /*0x82ea47*/
    v70 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82ea59*/
    v3 = v1 == (NiD3DTextureStage *)*v70; /*0x82ea5b*/
    LOBYTE(v309) = 0x1D; /*0x82ea5e*/
    if ( !v3 ) /*0x82ea63*/
    {
      if ( v1 ) /*0x82ea67*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82ea69*/
        if ( v3 ) /*0x82ea6c*/
          sub_772560(v1); /*0x82ea70*/
      }
      v1 = (NiD3DTextureStage *)*v70; /*0x82ea75*/
      a3 = *v70; /*0x82ea7a*/
      if ( a3 ) /*0x82ea7e*/
        ++v1[7].Unk08; /*0x82ea80*/
    }
    v71 = v308; /*0x82ea84*/
    LOBYTE(v309) = 1; /*0x82ea8a*/
    if ( v308 ) /*0x82ea8f*/
    {
      --v308[7].Unk08; /*0x82ea91*/
      if ( !v71[7].Unk08 ) /*0x82ea99*/
        sub_772560(v71); /*0x82ea9e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 6, 3, 0); /*0x82eaaa*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x82eab7*/
  }
  v72 = v0->VertexShader; /*0x82eac1*/
  v73 = unk_B453B4; /*0x82eac6*/
  if ( v72 != (NiD3DVertexShader *)unk_B453B4 ) /*0x82eac8*/
  {
    if ( v72 ) /*0x82eacc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v72 + 1) ) /*0x82ead2*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v72)(v72, 1); /*0x82eae9*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v73; /*0x82eaed*/
    if ( v73 ) /*0x82eaf0*/
      InterlockedIncrement((volatile LONG *)(v73 + 4)); /*0x82eaf6*/
  }
  v74 = v0->PixelShader; /*0x82eb01*/
  v75 = unk_B451B4; /*0x82eb06*/
  if ( v74 != (NiD3DPixelShader *)unk_B451B4 ) /*0x82eb08*/
  {
    if ( v74 ) /*0x82eb0c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v74 + 1) ) /*0x82eb12*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v74)(v74, 1); /*0x82eb29*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v75; /*0x82eb2d*/
    if ( v75 ) /*0x82eb30*/
      InterlockedIncrement((volatile LONG *)(v75 + 4)); /*0x82eb36*/
  }
  if ( !v0->RenderStateGroup ) /*0x82eb3c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82eb47*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82eb53*/
  if ( !v0->RenderStateGroup ) /*0x82eb58*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82eb63*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82eb6f*/
  if ( !v0->RenderStateGroup ) /*0x82eb74*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82eb7f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82eb8b*/
  if ( !v0->RenderStateGroup ) /*0x82eb90*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82eb9b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82eba7*/
  if ( !v0->RenderStateGroup ) /*0x82ebac*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ebb7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82ebc3*/
  if ( !v0->RenderStateGroup ) /*0x82ebc8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ebd3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82ebdf*/
  v3 = v0 == (NiD3DPass *)unk_B456F4; /*0x82ebe7*/
  unk_B43C64 = 0x61088; /*0x82ebed*/
  unk_B442F4 = 0x9C; /*0x82ebf7*/
  unk_B44984 = 0xC; /*0x82ec01*/
  if ( !v3 ) /*0x82ec0b*/
  {
    v3 = v0->RefCount-- == 1; /*0x82ec0d*/
    if ( v3 ) /*0x82ec10*/
      NiD3DPass_ReleaseToPool(v0); /*0x82ec14*/
    v0 = (NiD3DPass *)unk_B456F4; /*0x82ec19*/
    v307 = unk_B456F4; /*0x82ec21*/
    if ( v307 ) /*0x82ec25*/
      ++v0->RefCount; /*0x82ec27*/
  }
  if ( v0->StageCount < 7 ) /*0x82ec2f*/
  {
    v76 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82ec42*/
    v3 = v1 == (NiD3DTextureStage *)*v76; /*0x82ec44*/
    LOBYTE(v309) = 0x1E; /*0x82ec47*/
    if ( !v3 ) /*0x82ec4c*/
    {
      if ( v1 ) /*0x82ec50*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82ec52*/
        if ( v3 ) /*0x82ec55*/
          sub_772560(v1); /*0x82ec59*/
      }
      v1 = (NiD3DTextureStage *)*v76; /*0x82ec5e*/
      a3 = *v76; /*0x82ec63*/
      if ( a3 ) /*0x82ec67*/
        ++v1[7].Unk08; /*0x82ec69*/
    }
    v77 = v308; /*0x82ec6d*/
    LOBYTE(v309) = 1; /*0x82ec73*/
    if ( v308 ) /*0x82ec78*/
    {
      --v308[7].Unk08; /*0x82ec7a*/
      if ( !v77[7].Unk08 ) /*0x82ec82*/
        sub_772560(v77); /*0x82ec87*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x82ec93*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x82eca0*/
    v78 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82ecb2*/
    v3 = v1 == (NiD3DTextureStage *)*v78; /*0x82ecb4*/
    LOBYTE(v309) = 0x1F; /*0x82ecb7*/
    if ( !v3 ) /*0x82ecbc*/
    {
      if ( v1 ) /*0x82ecc0*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82ecc2*/
        if ( v3 ) /*0x82ecc5*/
          sub_772560(v1); /*0x82ecc9*/
      }
      v1 = (NiD3DTextureStage *)*v78; /*0x82ecce*/
      a3 = *v78; /*0x82ecd3*/
      if ( a3 ) /*0x82ecd7*/
        ++v1[7].Unk08; /*0x82ecd9*/
    }
    v79 = v308; /*0x82ecdd*/
    LOBYTE(v309) = 1; /*0x82ece3*/
    if ( v308 ) /*0x82ece8*/
    {
      --v308[7].Unk08; /*0x82ecea*/
      if ( !v79[7].Unk08 ) /*0x82ecf2*/
        sub_772560(v79); /*0x82ecf7*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x82ed03*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x82ed10*/
    v80 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82ed22*/
    v3 = v1 == (NiD3DTextureStage *)*v80; /*0x82ed24*/
    LOBYTE(v309) = 0x20; /*0x82ed27*/
    if ( !v3 ) /*0x82ed2c*/
    {
      if ( v1 ) /*0x82ed30*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82ed32*/
        if ( v3 ) /*0x82ed35*/
          sub_772560(v1); /*0x82ed39*/
      }
      v1 = (NiD3DTextureStage *)*v80; /*0x82ed3e*/
      a3 = *v80; /*0x82ed43*/
      if ( a3 ) /*0x82ed47*/
        ++v1[7].Unk08; /*0x82ed49*/
    }
    v81 = v308; /*0x82ed4d*/
    LOBYTE(v309) = 1; /*0x82ed53*/
    if ( v308 ) /*0x82ed58*/
    {
      --v308[7].Unk08; /*0x82ed5a*/
      if ( !v81[7].Unk08 ) /*0x82ed62*/
        sub_772560(v81); /*0x82ed67*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x82ed73*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x82ed80*/
    v82 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82ed92*/
    v3 = v1 == (NiD3DTextureStage *)*v82; /*0x82ed94*/
    LOBYTE(v309) = 0x21; /*0x82ed97*/
    if ( !v3 ) /*0x82ed9c*/
    {
      if ( v1 ) /*0x82eda0*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82eda2*/
        if ( v3 ) /*0x82eda5*/
          sub_772560(v1); /*0x82eda9*/
      }
      v1 = (NiD3DTextureStage *)*v82; /*0x82edae*/
      a3 = *v82; /*0x82edb3*/
      if ( a3 ) /*0x82edb7*/
        ++v1[7].Unk08; /*0x82edb9*/
    }
    v83 = v308; /*0x82edbd*/
    LOBYTE(v309) = 1; /*0x82edc3*/
    if ( v308 ) /*0x82edc8*/
    {
      --v308[7].Unk08; /*0x82edca*/
      if ( !v83[7].Unk08 ) /*0x82edd2*/
        sub_772560(v83); /*0x82edd7*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x82ede3*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x82edf0*/
    v84 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82ee02*/
    v3 = v1 == (NiD3DTextureStage *)*v84; /*0x82ee04*/
    LOBYTE(v309) = 0x22; /*0x82ee07*/
    if ( !v3 ) /*0x82ee0c*/
    {
      if ( v1 ) /*0x82ee10*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82ee12*/
        if ( v3 ) /*0x82ee15*/
          sub_772560(v1); /*0x82ee19*/
      }
      v1 = (NiD3DTextureStage *)*v84; /*0x82ee1e*/
      a3 = *v84; /*0x82ee23*/
      if ( a3 ) /*0x82ee27*/
        ++v1[7].Unk08; /*0x82ee29*/
    }
    v85 = v308; /*0x82ee2d*/
    LOBYTE(v309) = 1; /*0x82ee33*/
    if ( v308 ) /*0x82ee38*/
    {
      --v308[7].Unk08; /*0x82ee3a*/
      if ( !v85[7].Unk08 ) /*0x82ee42*/
        sub_772560(v85); /*0x82ee47*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 3, 0); /*0x82ee53*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82ee63*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x82ee6d*/
    v86 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82ee7f*/
    v3 = v1 == (NiD3DTextureStage *)*v86; /*0x82ee81*/
    LOBYTE(v309) = 0x23; /*0x82ee84*/
    if ( !v3 ) /*0x82ee89*/
    {
      if ( v1 ) /*0x82ee8d*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82ee8f*/
        if ( v3 ) /*0x82ee92*/
          sub_772560(v1); /*0x82ee96*/
      }
      v1 = (NiD3DTextureStage *)*v86; /*0x82ee9b*/
      a3 = *v86; /*0x82eea0*/
      if ( a3 ) /*0x82eea4*/
        ++v1[7].Unk08; /*0x82eea6*/
    }
    v87 = v308; /*0x82eeaa*/
    LOBYTE(v309) = 1; /*0x82eeb0*/
    if ( v308 ) /*0x82eeb5*/
    {
      --v308[7].Unk08; /*0x82eeb7*/
      if ( !v87[7].Unk08 ) /*0x82eebf*/
        sub_772560(v87); /*0x82eec4*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 5, 1, 2); /*0x82eed0*/
    NiD3DPass_SetTextureStage(v0, 5u, &v1->Stage); /*0x82eedd*/
    v88 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82eeef*/
    v3 = v1 == (NiD3DTextureStage *)*v88; /*0x82eef1*/
    LOBYTE(v309) = 0x24; /*0x82eef4*/
    if ( !v3 ) /*0x82eef9*/
    {
      if ( v1 ) /*0x82eefd*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82eeff*/
        if ( v3 ) /*0x82ef02*/
          sub_772560(v1); /*0x82ef06*/
      }
      v1 = (NiD3DTextureStage *)*v88; /*0x82ef0b*/
      a3 = *v88; /*0x82ef10*/
      if ( a3 ) /*0x82ef14*/
        ++v1[7].Unk08; /*0x82ef16*/
    }
    v89 = v308; /*0x82ef1a*/
    LOBYTE(v309) = 1; /*0x82ef20*/
    if ( v308 ) /*0x82ef25*/
    {
      --v308[7].Unk08; /*0x82ef27*/
      if ( !v89[7].Unk08 ) /*0x82ef2f*/
        sub_772560(v89); /*0x82ef34*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 6, 3, 0); /*0x82ef40*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x82ef4d*/
  }
  v90 = v0->VertexShader; /*0x82ef57*/
  v91 = unk_B453B8; /*0x82ef5c*/
  if ( v90 != (NiD3DVertexShader *)unk_B453B8 ) /*0x82ef5e*/
  {
    if ( v90 ) /*0x82ef62*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v90 + 1) ) /*0x82ef68*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v90)(v90, 1); /*0x82ef7f*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v91; /*0x82ef83*/
    if ( v91 ) /*0x82ef86*/
      InterlockedIncrement((volatile LONG *)(v91 + 4)); /*0x82ef8c*/
  }
  v92 = v0->PixelShader; /*0x82ef97*/
  v93 = unk_B451B8; /*0x82ef9c*/
  if ( v92 != (NiD3DPixelShader *)unk_B451B8 ) /*0x82ef9e*/
  {
    if ( v92 ) /*0x82efa2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v92 + 1) ) /*0x82efa8*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v92)(v92, 1); /*0x82efbf*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v93; /*0x82efc3*/
    if ( v93 ) /*0x82efc6*/
      InterlockedIncrement((volatile LONG *)(v93 + 4)); /*0x82efcc*/
  }
  if ( !v0->RenderStateGroup ) /*0x82efd2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82efdd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82efe9*/
  if ( !v0->RenderStateGroup ) /*0x82efee*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82eff9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82f005*/
  if ( !v0->RenderStateGroup ) /*0x82f00a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f015*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82f021*/
  if ( !v0->RenderStateGroup ) /*0x82f026*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f031*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82f03d*/
  if ( !v0->RenderStateGroup ) /*0x82f042*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f04d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82f059*/
  if ( !v0->RenderStateGroup ) /*0x82f05e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f069*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82f075*/
  v3 = v0 == (NiD3DPass *)unk_B456F8; /*0x82f07a*/
  unk_B43C74 = 0x210F2; /*0x82f085*/
  unk_B44304 = 0x1C; /*0x82f08b*/
  unk_B435E4 = 0x60; /*0x82f095*/
  unk_B44994 = 8; /*0x82f09f*/
  if ( !v3 ) /*0x82f0a9*/
  {
    v3 = v0->RefCount-- == 1; /*0x82f0ab*/
    if ( v3 ) /*0x82f0af*/
      NiD3DPass_ReleaseToPool(v0); /*0x82f0b3*/
    v0 = (NiD3DPass *)unk_B456F8; /*0x82f0b8*/
    v307 = unk_B456F8; /*0x82f0c0*/
    if ( v307 ) /*0x82f0c4*/
      ++v0->RefCount; /*0x82f0c6*/
  }
  if ( v0->StageCount < 7 ) /*0x82f0ce*/
  {
    v94 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f0e1*/
    v3 = v1 == (NiD3DTextureStage *)*v94; /*0x82f0e3*/
    LOBYTE(v309) = 0x25; /*0x82f0e6*/
    if ( !v3 ) /*0x82f0eb*/
    {
      if ( v1 ) /*0x82f0ef*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82f0f1*/
        if ( v3 ) /*0x82f0f5*/
          sub_772560(v1); /*0x82f0f9*/
      }
      v1 = (NiD3DTextureStage *)*v94; /*0x82f0fe*/
      a3 = *v94; /*0x82f103*/
      if ( a3 ) /*0x82f107*/
        ++v1[7].Unk08; /*0x82f109*/
    }
    v95 = v308; /*0x82f10d*/
    LOBYTE(v309) = 1; /*0x82f113*/
    if ( v308 ) /*0x82f118*/
    {
      --v308[7].Unk08; /*0x82f11a*/
      if ( !v95[7].Unk08 ) /*0x82f123*/
        sub_772560(v95); /*0x82f128*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x82f134*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x82f141*/
    v96 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f153*/
    v3 = v1 == (NiD3DTextureStage *)*v96; /*0x82f155*/
    LOBYTE(v309) = 0x26; /*0x82f158*/
    if ( !v3 ) /*0x82f15d*/
    {
      if ( v1 ) /*0x82f161*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82f163*/
        if ( v3 ) /*0x82f167*/
          sub_772560(v1); /*0x82f16b*/
      }
      v1 = (NiD3DTextureStage *)*v96; /*0x82f170*/
      a3 = *v96; /*0x82f175*/
      if ( a3 ) /*0x82f179*/
        ++v1[7].Unk08; /*0x82f17b*/
    }
    v97 = v308; /*0x82f17f*/
    LOBYTE(v309) = 1; /*0x82f185*/
    if ( v308 ) /*0x82f18a*/
    {
      --v308[7].Unk08; /*0x82f18c*/
      if ( !v97[7].Unk08 ) /*0x82f195*/
        sub_772560(v97); /*0x82f19a*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x82f1a6*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x82f1b3*/
    v98 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f1c5*/
    v3 = v1 == (NiD3DTextureStage *)*v98; /*0x82f1c7*/
    LOBYTE(v309) = 0x27; /*0x82f1ca*/
    if ( !v3 ) /*0x82f1cf*/
    {
      if ( v1 ) /*0x82f1d3*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82f1d5*/
        if ( v3 ) /*0x82f1d9*/
          sub_772560(v1); /*0x82f1dd*/
      }
      v1 = (NiD3DTextureStage *)*v98; /*0x82f1e2*/
      a3 = *v98; /*0x82f1e7*/
      if ( a3 ) /*0x82f1eb*/
        ++v1[7].Unk08; /*0x82f1ed*/
    }
    v99 = v308; /*0x82f1f1*/
    LOBYTE(v309) = 1; /*0x82f1f7*/
    if ( v308 ) /*0x82f1fc*/
    {
      --v308[7].Unk08; /*0x82f1fe*/
      if ( !v99[7].Unk08 ) /*0x82f207*/
        sub_772560(v99); /*0x82f20c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x82f218*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x82f225*/
    v100 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f237*/
    v3 = v1 == (NiD3DTextureStage *)*v100; /*0x82f239*/
    LOBYTE(v309) = 0x28; /*0x82f23c*/
    if ( !v3 ) /*0x82f241*/
    {
      if ( v1 ) /*0x82f245*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82f247*/
        if ( v3 ) /*0x82f24b*/
          sub_772560(v1); /*0x82f24f*/
      }
      v1 = (NiD3DTextureStage *)*v100; /*0x82f254*/
      a3 = *v100; /*0x82f259*/
      if ( a3 ) /*0x82f25d*/
        ++v1[7].Unk08; /*0x82f25f*/
    }
    v101 = v308; /*0x82f263*/
    LOBYTE(v309) = 1; /*0x82f269*/
    if ( v308 ) /*0x82f26e*/
    {
      --v308[7].Unk08; /*0x82f270*/
      if ( !v101[7].Unk08 ) /*0x82f279*/
        sub_772560(v101); /*0x82f27e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x82f28a*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x82f297*/
    v102 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f2a9*/
    v3 = v1 == (NiD3DTextureStage *)*v102; /*0x82f2ab*/
    LOBYTE(v309) = 0x29; /*0x82f2ae*/
    if ( !v3 ) /*0x82f2b3*/
    {
      if ( v1 ) /*0x82f2b7*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82f2b9*/
        if ( v3 ) /*0x82f2bd*/
          sub_772560(v1); /*0x82f2c1*/
      }
      v1 = (NiD3DTextureStage *)*v102; /*0x82f2c6*/
      a3 = *v102; /*0x82f2cb*/
      if ( a3 ) /*0x82f2cf*/
        ++v1[7].Unk08; /*0x82f2d1*/
    }
    v103 = v308; /*0x82f2d5*/
    LOBYTE(v309) = 1; /*0x82f2db*/
    if ( v308 ) /*0x82f2e0*/
    {
      --v308[7].Unk08; /*0x82f2e2*/
      if ( !v103[7].Unk08 ) /*0x82f2eb*/
        sub_772560(v103); /*0x82f2f0*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 3, 0); /*0x82f2fc*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82f30c*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x82f316*/
    v104 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f328*/
    v3 = v1 == (NiD3DTextureStage *)*v104; /*0x82f32a*/
    LOBYTE(v309) = 0x2A; /*0x82f32d*/
    if ( !v3 ) /*0x82f332*/
    {
      if ( v1 ) /*0x82f336*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82f338*/
        if ( v3 ) /*0x82f33c*/
          sub_772560(v1); /*0x82f340*/
      }
      v1 = (NiD3DTextureStage *)*v104; /*0x82f345*/
      a3 = *v104; /*0x82f34a*/
      if ( a3 ) /*0x82f34e*/
        ++v1[7].Unk08; /*0x82f350*/
    }
    v105 = v308; /*0x82f354*/
    LOBYTE(v309) = 1; /*0x82f35a*/
    if ( v308 ) /*0x82f35f*/
    {
      --v308[7].Unk08; /*0x82f361*/
      if ( !v105[7].Unk08 ) /*0x82f36a*/
        sub_772560(v105); /*0x82f36f*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 5, 1, 2); /*0x82f37b*/
    NiD3DPass_SetTextureStage(v0, 5u, &v1->Stage); /*0x82f388*/
    v106 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f39a*/
    v3 = v1 == (NiD3DTextureStage *)*v106; /*0x82f39c*/
    LOBYTE(v309) = 0x2B; /*0x82f39f*/
    if ( !v3 ) /*0x82f3a4*/
    {
      if ( v1 ) /*0x82f3a8*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82f3aa*/
        if ( v3 ) /*0x82f3ae*/
          sub_772560(v1); /*0x82f3b2*/
      }
      v1 = (NiD3DTextureStage *)*v106; /*0x82f3b7*/
      a3 = *v106; /*0x82f3bc*/
      if ( a3 ) /*0x82f3c0*/
        ++v1[7].Unk08; /*0x82f3c2*/
    }
    v107 = v308; /*0x82f3c6*/
    LOBYTE(v309) = 1; /*0x82f3cc*/
    if ( v308 ) /*0x82f3d1*/
    {
      --v308[7].Unk08; /*0x82f3d3*/
      if ( !v107[7].Unk08 ) /*0x82f3dc*/
        sub_772560(v107); /*0x82f3e1*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 6, 3, 0); /*0x82f3ed*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x82f3fa*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453B8); /*0x82f407*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451BC); /*0x82f415*/
  if ( !v0->RenderStateGroup ) /*0x82f41a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f425*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82f431*/
  if ( !v0->RenderStateGroup ) /*0x82f436*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f441*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82f44d*/
  if ( !v0->RenderStateGroup ) /*0x82f452*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f45d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82f469*/
  if ( !v0->RenderStateGroup ) /*0x82f46e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f479*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82f485*/
  if ( !v0->RenderStateGroup ) /*0x82f48a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f495*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82f4a1*/
  if ( !v0->RenderStateGroup ) /*0x82f4a6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f4b1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82f4bd*/
  v3 = v0 == (NiD3DPass *)unk_B45708; /*0x82f4c2*/
  unk_B43C78 = 0x210F2; /*0x82f4c8*/
  unk_B44308 = 0x9C; /*0x82f4d3*/
  unk_B435E8 = 0x60; /*0x82f4d9*/
  unk_B44998 = 0xC; /*0x82f4e3*/
  if ( !v3 ) /*0x82f4ed*/
  {
    v3 = v0->RefCount-- == 1; /*0x82f4ef*/
    if ( v3 ) /*0x82f4f3*/
      NiD3DPass_ReleaseToPool(v0); /*0x82f4f7*/
    v0 = (NiD3DPass *)unk_B45708; /*0x82f4fc*/
    v307 = unk_B45708; /*0x82f504*/
    if ( v307 ) /*0x82f508*/
      ++v0->RefCount; /*0x82f50a*/
  }
  if ( v0->StageCount < 7 ) /*0x82f512*/
  {
    v108 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f525*/
    v3 = v1 == (NiD3DTextureStage *)*v108; /*0x82f527*/
    LOBYTE(v309) = 0x2C; /*0x82f52a*/
    if ( !v3 ) /*0x82f52f*/
    {
      if ( v1 ) /*0x82f533*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82f535*/
        if ( v3 ) /*0x82f539*/
          sub_772560(v1); /*0x82f53d*/
      }
      v1 = (NiD3DTextureStage *)*v108; /*0x82f542*/
      a3 = *v108; /*0x82f547*/
      if ( a3 ) /*0x82f54b*/
        ++v1[7].Unk08; /*0x82f54d*/
    }
    v109 = v308; /*0x82f551*/
    LOBYTE(v309) = 1; /*0x82f557*/
    if ( v308 ) /*0x82f55c*/
    {
      --v308[7].Unk08; /*0x82f55e*/
      if ( !v109[7].Unk08 ) /*0x82f567*/
        sub_772560(v109); /*0x82f56c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x82f578*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x82f585*/
    v110 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f597*/
    v3 = v1 == (NiD3DTextureStage *)*v110; /*0x82f599*/
    LOBYTE(v309) = 0x2D; /*0x82f59c*/
    if ( !v3 ) /*0x82f5a1*/
    {
      if ( v1 ) /*0x82f5a5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82f5a7*/
        if ( v3 ) /*0x82f5ab*/
          sub_772560(v1); /*0x82f5af*/
      }
      v1 = (NiD3DTextureStage *)*v110; /*0x82f5b4*/
      a3 = *v110; /*0x82f5b9*/
      if ( a3 ) /*0x82f5bd*/
        ++v1[7].Unk08; /*0x82f5bf*/
    }
    v111 = v308; /*0x82f5c3*/
    LOBYTE(v309) = 1; /*0x82f5c9*/
    if ( v308 ) /*0x82f5ce*/
    {
      --v308[7].Unk08; /*0x82f5d0*/
      if ( !v111[7].Unk08 ) /*0x82f5d9*/
        sub_772560(v111); /*0x82f5de*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x82f5ea*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x82f5f7*/
    v112 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f601*/
    LOBYTE(v309) = 0x2E; /*0x82f60e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v112); /*0x82f613*/
    v113 = v308; /*0x82f618*/
    LOBYTE(v309) = 1; /*0x82f61e*/
    if ( v308 ) /*0x82f623*/
    {
      --v308[7].Unk08; /*0x82f625*/
      if ( !v113[7].Unk08 ) /*0x82f62e*/
        sub_772560(v113); /*0x82f633*/
    }
    v114 = a3; /*0x82f638*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82f643*/
    NiD3DPass_SetTextureStage(v0, 2u, v114); /*0x82f650*/
    v115 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f65a*/
    LOBYTE(v309) = 0x2F; /*0x82f667*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v115); /*0x82f66c*/
    v116 = v308; /*0x82f671*/
    LOBYTE(v309) = 1; /*0x82f677*/
    if ( v308 ) /*0x82f67c*/
    {
      --v308[7].Unk08; /*0x82f67e*/
      if ( !v116[7].Unk08 ) /*0x82f687*/
        sub_772560(v116); /*0x82f68c*/
    }
    v117 = a3; /*0x82f691*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82f69c*/
    NiD3DPass_SetTextureStage(v0, 3u, v117); /*0x82f6a9*/
    v118 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f6b3*/
    LOBYTE(v309) = 0x30; /*0x82f6c0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v118); /*0x82f6c5*/
    v119 = v308; /*0x82f6ca*/
    LOBYTE(v309) = 1; /*0x82f6d0*/
    if ( v308 ) /*0x82f6d5*/
    {
      --v308[7].Unk08; /*0x82f6d7*/
      if ( !v119[7].Unk08 ) /*0x82f6e0*/
        sub_772560(v119); /*0x82f6e5*/
    }
    v120 = (NiD3DTextureStage *)a3; /*0x82f6ea*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x82f6f5*/
    NiD3DTextureStage_SetTexture(v120, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82f706*/
    NiD3DPass_SetTextureStage(v0, 4u, &v120->Stage); /*0x82f710*/
    v121 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f71a*/
    LOBYTE(v309) = 0x31; /*0x82f727*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v121); /*0x82f72c*/
    v122 = v308; /*0x82f731*/
    LOBYTE(v309) = 1; /*0x82f737*/
    if ( v308 ) /*0x82f73c*/
    {
      --v308[7].Unk08; /*0x82f73e*/
      if ( !v122[7].Unk08 ) /*0x82f747*/
        sub_772560(v122); /*0x82f74c*/
    }
    v123 = a3; /*0x82f751*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x82f75c*/
    NiD3DPass_SetTextureStage(v0, 5u, v123); /*0x82f769*/
    v124 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f773*/
    LOBYTE(v309) = 0x32; /*0x82f780*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v124); /*0x82f785*/
    v125 = v308; /*0x82f78a*/
    LOBYTE(v309) = 1; /*0x82f790*/
    if ( v308 ) /*0x82f795*/
    {
      --v308[7].Unk08; /*0x82f797*/
      if ( !v125[7].Unk08 ) /*0x82f7a0*/
        sub_772560(v125); /*0x82f7a5*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82f7aa*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x82f7b5*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x82f7c2*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453BC); /*0x82f7d0*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451B8); /*0x82f7de*/
  if ( !v0->RenderStateGroup ) /*0x82f7e3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f7ee*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82f7fa*/
  if ( !v0->RenderStateGroup ) /*0x82f7ff*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f80a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82f816*/
  if ( !v0->RenderStateGroup ) /*0x82f81b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f826*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82f832*/
  if ( !v0->RenderStateGroup ) /*0x82f837*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f842*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82f84e*/
  if ( !v0->RenderStateGroup ) /*0x82f853*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f85e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82f86a*/
  if ( !v0->RenderStateGroup ) /*0x82f86f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82f87a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82f886*/
  v3 = v0 == (NiD3DPass *)unk_B45710; /*0x82f88b*/
  unk_B43C88 = 0x610F8; /*0x82f896*/
  unk_B44308 = 0x1C; /*0x82f89c*/
  unk_B435E8 = 0x60; /*0x82f8a6*/
  unk_B44998 = 8; /*0x82f8b0*/
  if ( !v3 ) /*0x82f8ba*/
  {
    v3 = v0->RefCount-- == 1; /*0x82f8bc*/
    if ( v3 ) /*0x82f8c0*/
      NiD3DPass_ReleaseToPool(v0); /*0x82f8c4*/
    v0 = (NiD3DPass *)unk_B45710; /*0x82f8c9*/
    v307 = unk_B45710; /*0x82f8d1*/
    if ( v307 ) /*0x82f8d5*/
      ++v0->RefCount; /*0x82f8d7*/
  }
  if ( v0->StageCount < 7 ) /*0x82f8df*/
  {
    v126 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f8ea*/
    LOBYTE(v309) = 0x33; /*0x82f8f7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v126); /*0x82f8fc*/
    v127 = v308; /*0x82f901*/
    LOBYTE(v309) = 1; /*0x82f907*/
    if ( v308 ) /*0x82f90c*/
    {
      --v308[7].Unk08; /*0x82f90e*/
      if ( !v127[7].Unk08 ) /*0x82f917*/
        sub_772560(v127); /*0x82f91c*/
    }
    v128 = a3; /*0x82f921*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82f92c*/
    NiD3DPass_SetTextureStage(v0, 0, v128); /*0x82f939*/
    v129 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f943*/
    LOBYTE(v309) = 0x34; /*0x82f950*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v129); /*0x82f955*/
    v130 = v308; /*0x82f95a*/
    LOBYTE(v309) = 1; /*0x82f960*/
    if ( v308 ) /*0x82f965*/
    {
      --v308[7].Unk08; /*0x82f967*/
      if ( !v130[7].Unk08 ) /*0x82f970*/
        sub_772560(v130); /*0x82f975*/
    }
    v131 = a3; /*0x82f97a*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82f985*/
    NiD3DPass_SetTextureStage(v0, 1u, v131); /*0x82f992*/
    v132 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f99c*/
    LOBYTE(v309) = 0x35; /*0x82f9a9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v132); /*0x82f9ae*/
    v133 = v308; /*0x82f9b3*/
    LOBYTE(v309) = 1; /*0x82f9b9*/
    if ( v308 ) /*0x82f9be*/
    {
      --v308[7].Unk08; /*0x82f9c0*/
      if ( !v133[7].Unk08 ) /*0x82f9c9*/
        sub_772560(v133); /*0x82f9ce*/
    }
    v134 = a3; /*0x82f9d3*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82f9de*/
    NiD3DPass_SetTextureStage(v0, 2u, v134); /*0x82f9eb*/
    v135 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82f9f5*/
    LOBYTE(v309) = 0x36; /*0x82fa02*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v135); /*0x82fa07*/
    v136 = v308; /*0x82fa0c*/
    LOBYTE(v309) = 1; /*0x82fa12*/
    if ( v308 ) /*0x82fa17*/
    {
      --v308[7].Unk08; /*0x82fa19*/
      if ( !v136[7].Unk08 ) /*0x82fa22*/
        sub_772560(v136); /*0x82fa27*/
    }
    v137 = a3; /*0x82fa2c*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82fa37*/
    NiD3DPass_SetTextureStage(v0, 3u, v137); /*0x82fa44*/
    v138 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82fa4e*/
    LOBYTE(v309) = 0x37; /*0x82fa5b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v138); /*0x82fa60*/
    v139 = v308; /*0x82fa65*/
    LOBYTE(v309) = 1; /*0x82fa6b*/
    if ( v308 ) /*0x82fa70*/
    {
      --v308[7].Unk08; /*0x82fa72*/
      if ( !v139[7].Unk08 ) /*0x82fa7b*/
        sub_772560(v139); /*0x82fa80*/
    }
    v140 = (NiD3DTextureStage *)a3; /*0x82fa85*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x82fa90*/
    NiD3DTextureStage_SetTexture(v140, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82faa1*/
    NiD3DPass_SetTextureStage(v0, 4u, &v140->Stage); /*0x82faab*/
    v141 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82fab5*/
    LOBYTE(v309) = 0x38; /*0x82fac2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v141); /*0x82fac7*/
    v142 = v308; /*0x82facc*/
    LOBYTE(v309) = 1; /*0x82fad2*/
    if ( v308 ) /*0x82fad7*/
    {
      --v308[7].Unk08; /*0x82fad9*/
      if ( !v142[7].Unk08 ) /*0x82fae2*/
        sub_772560(v142); /*0x82fae7*/
    }
    v143 = a3; /*0x82faec*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x82faf7*/
    NiD3DPass_SetTextureStage(v0, 5u, v143); /*0x82fb04*/
    v144 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82fb0e*/
    LOBYTE(v309) = 0x39; /*0x82fb1b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v144); /*0x82fb20*/
    v145 = v308; /*0x82fb25*/
    LOBYTE(v309) = 1; /*0x82fb2b*/
    if ( v308 ) /*0x82fb30*/
    {
      --v308[7].Unk08; /*0x82fb32*/
      if ( !v145[7].Unk08 ) /*0x82fb3b*/
        sub_772560(v145); /*0x82fb40*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82fb45*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x82fb50*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x82fb5d*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453BC); /*0x82fb6b*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451BC); /*0x82fb78*/
  if ( !v0->RenderStateGroup ) /*0x82fb7d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82fb88*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82fb94*/
  if ( !v0->RenderStateGroup ) /*0x82fb99*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82fba4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82fbb0*/
  if ( !v0->RenderStateGroup ) /*0x82fbb5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82fbc0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82fbcc*/
  if ( !v0->RenderStateGroup ) /*0x82fbd1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82fbdc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82fbe8*/
  if ( !v0->RenderStateGroup ) /*0x82fbed*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82fbf8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82fc04*/
  if ( !v0->RenderStateGroup ) /*0x82fc09*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82fc14*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82fc20*/
  v3 = v0 == (NiD3DPass *)unk_B45720; /*0x82fc25*/
  unk_B43C90 = 0x610F8; /*0x82fc2b*/
  unk_B44320 = 0x9C; /*0x82fc31*/
  unk_B43600 = 0x60; /*0x82fc37*/
  unk_B449B0 = 0xC; /*0x82fc41*/
  if ( !v3 ) /*0x82fc4b*/
  {
    v3 = v0->RefCount-- == 1; /*0x82fc4d*/
    if ( v3 ) /*0x82fc51*/
      NiD3DPass_ReleaseToPool(v0); /*0x82fc55*/
    v0 = (NiD3DPass *)unk_B45720; /*0x82fc5a*/
    v307 = unk_B45720; /*0x82fc62*/
    if ( v307 ) /*0x82fc66*/
      ++v0->RefCount; /*0x82fc68*/
  }
  if ( v0->StageCount < 7 ) /*0x82fc72*/
  {
    v146 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82fc7d*/
    LOBYTE(v309) = 0x3A; /*0x82fc8a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v146); /*0x82fc8f*/
    v147 = v308; /*0x82fc94*/
    LOBYTE(v309) = 1; /*0x82fc9a*/
    if ( v308 ) /*0x82fc9f*/
    {
      --v308[7].Unk08; /*0x82fca1*/
      if ( !v147[7].Unk08 ) /*0x82fcaa*/
        sub_772560(v147); /*0x82fcaf*/
    }
    v148 = a3; /*0x82fcb4*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82fcbf*/
    NiD3DPass_SetTextureStage(v0, 0, v148); /*0x82fccc*/
    v149 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82fcd6*/
    LOBYTE(v309) = 0x3B; /*0x82fce3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v149); /*0x82fce8*/
    v150 = v308; /*0x82fced*/
    LOBYTE(v309) = 1; /*0x82fcf3*/
    if ( v308 ) /*0x82fcf8*/
    {
      --v308[7].Unk08; /*0x82fcfa*/
      if ( !v150[7].Unk08 ) /*0x82fd03*/
        sub_772560(v150); /*0x82fd08*/
    }
    v151 = a3; /*0x82fd0d*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82fd18*/
    NiD3DPass_SetTextureStage(v0, 1u, v151); /*0x82fd25*/
    v152 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82fd2f*/
    LOBYTE(v309) = 0x3C; /*0x82fd3c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v152); /*0x82fd41*/
    v153 = v308; /*0x82fd46*/
    LOBYTE(v309) = 1; /*0x82fd4c*/
    if ( v308 ) /*0x82fd51*/
    {
      --v308[7].Unk08; /*0x82fd53*/
      if ( !v153[7].Unk08 ) /*0x82fd5c*/
        sub_772560(v153); /*0x82fd61*/
    }
    v154 = a3; /*0x82fd66*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82fd71*/
    NiD3DPass_SetTextureStage(v0, 2u, v154); /*0x82fd7e*/
    v155 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82fd88*/
    LOBYTE(v309) = 0x3D; /*0x82fd95*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v155); /*0x82fd9a*/
    v156 = v308; /*0x82fd9f*/
    LOBYTE(v309) = 1; /*0x82fda5*/
    if ( v308 ) /*0x82fdaa*/
    {
      --v308[7].Unk08; /*0x82fdac*/
      if ( !v156[7].Unk08 ) /*0x82fdb5*/
        sub_772560(v156); /*0x82fdba*/
    }
    v157 = a3; /*0x82fdbf*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82fdca*/
    NiD3DPass_SetTextureStage(v0, 3u, v157); /*0x82fdd7*/
    v158 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82fde1*/
    LOBYTE(v309) = 0x3E; /*0x82fdee*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v158); /*0x82fdf3*/
    v159 = v308; /*0x82fdf8*/
    LOBYTE(v309) = 1; /*0x82fdfe*/
    if ( v308 ) /*0x82fe03*/
    {
      --v308[7].Unk08; /*0x82fe05*/
      if ( !v159[7].Unk08 ) /*0x82fe0e*/
        sub_772560(v159); /*0x82fe13*/
    }
    v160 = (NiD3DTextureStage *)a3; /*0x82fe18*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x82fe23*/
    NiD3DTextureStage_SetTexture(v160, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82fe33*/
    NiD3DPass_SetTextureStage(v0, 4u, &v160->Stage); /*0x82fe3d*/
    v161 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82fe47*/
    LOBYTE(v309) = 0x3F; /*0x82fe54*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v161); /*0x82fe59*/
    v162 = v308; /*0x82fe5e*/
    LOBYTE(v309) = 1; /*0x82fe64*/
    if ( v308 ) /*0x82fe69*/
    {
      --v308[7].Unk08; /*0x82fe6b*/
      if ( !v162[7].Unk08 ) /*0x82fe74*/
        sub_772560(v162); /*0x82fe79*/
    }
    v163 = a3; /*0x82fe7e*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x82fe89*/
    NiD3DPass_SetTextureStage(v0, 5u, v163); /*0x82fe96*/
    v164 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x82fea0*/
    LOBYTE(v309) = 0x40; /*0x82fead*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v164); /*0x82feb2*/
    v165 = v308; /*0x82feb7*/
    LOBYTE(v309) = 1; /*0x82febd*/
    if ( v308 ) /*0x82fec2*/
    {
      --v308[7].Unk08; /*0x82fec4*/
      if ( !v165[7].Unk08 ) /*0x82fecd*/
        sub_772560(v165); /*0x82fed2*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82fed7*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x82fee2*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x82feef*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453C0); /*0x82fefc*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451C0); /*0x82ff0a*/
  if ( !v0->RenderStateGroup ) /*0x82ff0f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ff1a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82ff26*/
  if ( !v0->RenderStateGroup ) /*0x82ff2b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ff36*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82ff42*/
  if ( !v0->RenderStateGroup ) /*0x82ff47*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ff52*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82ff5e*/
  if ( !v0->RenderStateGroup ) /*0x82ff63*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ff6e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82ff7a*/
  if ( !v0->RenderStateGroup ) /*0x82ff7f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ff8a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82ff96*/
  if ( !v0->RenderStateGroup ) /*0x82ff9b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ffa6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82ffb2*/
  v3 = v0 == (NiD3DPass *)unk_B45724; /*0x82ffb7*/
  unk_B43CA0 = 0x23082; /*0x82ffc7*/
  unk_B44330 = 0x3C; /*0x82ffcd*/
  unk_B449C0 = 8; /*0x82ffd7*/
  if ( !v3 ) /*0x82ffdd*/
  {
    v3 = v0->RefCount-- == 1; /*0x82ffdf*/
    if ( v3 ) /*0x82ffe3*/
      NiD3DPass_ReleaseToPool(v0); /*0x82ffe7*/
    v0 = (NiD3DPass *)unk_B45724; /*0x82ffec*/
    v307 = unk_B45724; /*0x82fff4*/
    if ( v307 ) /*0x82fff8*/
      ++v0->RefCount; /*0x82fffa*/
  }
  if ( v0->StageCount < 7 ) /*0x830002*/
  {
    v166 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x83000d*/
    LOBYTE(v309) = 0x41; /*0x83001a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v166); /*0x83001f*/
    v167 = v308; /*0x830024*/
    LOBYTE(v309) = 1; /*0x83002a*/
    if ( v308 ) /*0x83002f*/
    {
      --v308[7].Unk08; /*0x830031*/
      if ( !v167[7].Unk08 ) /*0x83003a*/
        sub_772560(v167); /*0x83003f*/
    }
    v168 = a3; /*0x830044*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x83004f*/
    NiD3DPass_SetTextureStage(v0, 0, v168); /*0x83005c*/
    v169 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830066*/
    LOBYTE(v309) = 0x42; /*0x830073*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v169); /*0x830078*/
    v170 = v308; /*0x83007d*/
    LOBYTE(v309) = 1; /*0x830083*/
    if ( v308 ) /*0x830088*/
    {
      --v308[7].Unk08; /*0x83008a*/
      if ( !v170[7].Unk08 ) /*0x830093*/
        sub_772560(v170); /*0x830098*/
    }
    v171 = a3; /*0x83009d*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8300a8*/
    NiD3DPass_SetTextureStage(v0, 1u, v171); /*0x8300b5*/
    v172 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8300bf*/
    LOBYTE(v309) = 0x43; /*0x8300cc*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v172); /*0x8300d1*/
    v173 = v308; /*0x8300d6*/
    LOBYTE(v309) = 1; /*0x8300dc*/
    if ( v308 ) /*0x8300e1*/
    {
      --v308[7].Unk08; /*0x8300e3*/
      if ( !v173[7].Unk08 ) /*0x8300ec*/
        sub_772560(v173); /*0x8300f1*/
    }
    v174 = a3; /*0x8300f6*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x830101*/
    NiD3DPass_SetTextureStage(v0, 2u, v174); /*0x83010e*/
    v175 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830118*/
    LOBYTE(v309) = 0x44; /*0x830125*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v175); /*0x83012a*/
    v176 = v308; /*0x83012f*/
    LOBYTE(v309) = 1; /*0x830135*/
    if ( v308 ) /*0x83013a*/
    {
      --v308[7].Unk08; /*0x83013c*/
      if ( !v176[7].Unk08 ) /*0x830145*/
        sub_772560(v176); /*0x83014a*/
    }
    v177 = a3; /*0x83014f*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x83015a*/
    NiD3DPass_SetTextureStage(v0, 3u, v177); /*0x830167*/
    v178 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830171*/
    LOBYTE(v309) = 0x45; /*0x83017e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v178); /*0x830183*/
    v179 = v308; /*0x830188*/
    LOBYTE(v309) = 1; /*0x83018e*/
    if ( v308 ) /*0x830193*/
    {
      --v308[7].Unk08; /*0x830195*/
      if ( !v179[7].Unk08 ) /*0x83019e*/
        sub_772560(v179); /*0x8301a3*/
    }
    v180 = (NiD3DTextureStage *)a3; /*0x8301a8*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x8301b3*/
    NiD3DTextureStage_SetTexture(v180, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x8301c4*/
    NiD3DPass_SetTextureStage(v0, 4u, &v180->Stage); /*0x8301ce*/
    v181 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8301d8*/
    LOBYTE(v309) = 0x46; /*0x8301e5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v181); /*0x8301ea*/
    v182 = v308; /*0x8301ef*/
    LOBYTE(v309) = 1; /*0x8301f5*/
    if ( v308 ) /*0x8301fa*/
    {
      --v308[7].Unk08; /*0x8301fc*/
      if ( !v182[7].Unk08 ) /*0x830205*/
        sub_772560(v182); /*0x83020a*/
    }
    v183 = a3; /*0x83020f*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x83021a*/
    NiD3DPass_SetTextureStage(v0, 5u, v183); /*0x830227*/
    v184 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830231*/
    LOBYTE(v309) = 0x47; /*0x83023e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v184); /*0x830243*/
    v185 = v308; /*0x830248*/
    LOBYTE(v309) = 1; /*0x83024e*/
    if ( v308 ) /*0x830253*/
    {
      --v308[7].Unk08; /*0x830255*/
      if ( !v185[7].Unk08 ) /*0x83025e*/
        sub_772560(v185); /*0x830263*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x830268*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x830273*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x830280*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453C0); /*0x83028e*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451C4); /*0x83029c*/
  if ( !v0->RenderStateGroup ) /*0x8302a1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8302ac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8302b8*/
  if ( !v0->RenderStateGroup ) /*0x8302bd*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8302c8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8302d4*/
  if ( !v0->RenderStateGroup ) /*0x8302d9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8302e4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8302f0*/
  if ( !v0->RenderStateGroup ) /*0x8302f5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830300*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x83030c*/
  if ( !v0->RenderStateGroup ) /*0x830311*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83031c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x830328*/
  if ( !v0->RenderStateGroup ) /*0x83032d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830338*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x830344*/
  v3 = v0 == (NiD3DPass *)unk_B45734; /*0x830349*/
  unk_B43CA4 = 0x23082; /*0x83034f*/
  unk_B44334 = 0xBC; /*0x830355*/
  unk_B449C4 = 0xC; /*0x83035f*/
  if ( !v3 ) /*0x830369*/
  {
    v3 = v0->RefCount-- == 1; /*0x83036b*/
    if ( v3 ) /*0x83036f*/
      NiD3DPass_ReleaseToPool(v0); /*0x830373*/
    v0 = (NiD3DPass *)unk_B45734; /*0x830378*/
    v307 = unk_B45734; /*0x830380*/
    if ( v307 ) /*0x830384*/
      ++v0->RefCount; /*0x830386*/
  }
  if ( v0->StageCount < 7 ) /*0x83038e*/
  {
    v186 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830399*/
    LOBYTE(v309) = 0x48; /*0x8303a6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v186); /*0x8303ab*/
    v187 = v308; /*0x8303b0*/
    LOBYTE(v309) = 1; /*0x8303b6*/
    if ( v308 ) /*0x8303bb*/
    {
      --v308[7].Unk08; /*0x8303bd*/
      if ( !v187[7].Unk08 ) /*0x8303c6*/
        sub_772560(v187); /*0x8303cb*/
    }
    v188 = a3; /*0x8303d0*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8303db*/
    NiD3DPass_SetTextureStage(v0, 0, v188); /*0x8303e8*/
    v189 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8303f2*/
    LOBYTE(v309) = 0x49; /*0x8303ff*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v189); /*0x830404*/
    v190 = v308; /*0x830409*/
    LOBYTE(v309) = 1; /*0x83040f*/
    if ( v308 ) /*0x830414*/
    {
      --v308[7].Unk08; /*0x830416*/
      if ( !v190[7].Unk08 ) /*0x83041f*/
        sub_772560(v190); /*0x830424*/
    }
    v191 = a3; /*0x830429*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x830434*/
    NiD3DPass_SetTextureStage(v0, 1u, v191); /*0x830441*/
    v192 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x83044b*/
    LOBYTE(v309) = 0x4A; /*0x830458*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v192); /*0x83045d*/
    v193 = v308; /*0x830462*/
    LOBYTE(v309) = 1; /*0x830468*/
    if ( v308 ) /*0x83046d*/
    {
      --v308[7].Unk08; /*0x83046f*/
      if ( !v193[7].Unk08 ) /*0x830478*/
        sub_772560(v193); /*0x83047d*/
    }
    v194 = a3; /*0x830482*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x83048d*/
    NiD3DPass_SetTextureStage(v0, 2u, v194); /*0x83049a*/
    v195 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8304a4*/
    LOBYTE(v309) = 0x4B; /*0x8304b1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v195); /*0x8304b6*/
    v196 = v308; /*0x8304bb*/
    LOBYTE(v309) = 1; /*0x8304c1*/
    if ( v308 ) /*0x8304c6*/
    {
      --v308[7].Unk08; /*0x8304c8*/
      if ( !v196[7].Unk08 ) /*0x8304d1*/
        sub_772560(v196); /*0x8304d6*/
    }
    v197 = a3; /*0x8304db*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8304e6*/
    NiD3DPass_SetTextureStage(v0, 3u, v197); /*0x8304f3*/
    v198 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8304fd*/
    LOBYTE(v309) = 0x4C; /*0x83050a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v198); /*0x83050f*/
    v199 = v308; /*0x830514*/
    LOBYTE(v309) = 1; /*0x83051a*/
    if ( v308 ) /*0x83051f*/
    {
      --v308[7].Unk08; /*0x830521*/
      if ( !v199[7].Unk08 ) /*0x83052a*/
        sub_772560(v199); /*0x83052f*/
    }
    v200 = (NiD3DTextureStage *)a3; /*0x830534*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x83053f*/
    NiD3DTextureStage_SetTexture(v200, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x830550*/
    NiD3DPass_SetTextureStage(v0, 4u, &v200->Stage); /*0x83055a*/
    v201 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830564*/
    LOBYTE(v309) = 0x4D; /*0x830571*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v201); /*0x830576*/
    v202 = v308; /*0x83057b*/
    LOBYTE(v309) = 1; /*0x830581*/
    if ( v308 ) /*0x830586*/
    {
      --v308[7].Unk08; /*0x830588*/
      if ( !v202[7].Unk08 ) /*0x830591*/
        sub_772560(v202); /*0x830596*/
    }
    v203 = a3; /*0x83059b*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x8305a6*/
    NiD3DPass_SetTextureStage(v0, 5u, v203); /*0x8305b3*/
    v204 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8305bd*/
    LOBYTE(v309) = 0x4E; /*0x8305ca*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v204); /*0x8305cf*/
    v205 = v308; /*0x8305d4*/
    LOBYTE(v309) = 1; /*0x8305da*/
    if ( v308 ) /*0x8305df*/
    {
      --v308[7].Unk08; /*0x8305e1*/
      if ( !v205[7].Unk08 ) /*0x8305ea*/
        sub_772560(v205); /*0x8305ef*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8305f4*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x8305ff*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x83060c*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453C4); /*0x83061a*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451C0); /*0x830627*/
  if ( !v0->RenderStateGroup ) /*0x83062c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830637*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x830643*/
  if ( !v0->RenderStateGroup ) /*0x830648*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830653*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x83065f*/
  if ( !v0->RenderStateGroup ) /*0x830664*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83066f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x83067b*/
  if ( !v0->RenderStateGroup ) /*0x830680*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83068b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x830697*/
  if ( !v0->RenderStateGroup ) /*0x83069c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8306a7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8306b3*/
  if ( !v0->RenderStateGroup ) /*0x8306b8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8306c3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8306cf*/
  v3 = v0 == (NiD3DPass *)unk_B4573C; /*0x8306d4*/
  unk_B43CB4 = 0x63088; /*0x8306df*/
  unk_B44344 = 0x3C; /*0x8306e5*/
  unk_B449D4 = 8; /*0x8306ef*/
  if ( !v3 ) /*0x8306f5*/
  {
    v3 = v0->RefCount-- == 1; /*0x8306f7*/
    if ( v3 ) /*0x8306fb*/
      NiD3DPass_ReleaseToPool(v0); /*0x8306ff*/
    v0 = (NiD3DPass *)unk_B4573C; /*0x830704*/
    v307 = unk_B4573C; /*0x83070c*/
    if ( v307 ) /*0x830710*/
      ++v0->RefCount; /*0x830712*/
  }
  if ( v0->StageCount < 7 ) /*0x83071e*/
  {
    v206 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830729*/
    LOBYTE(v309) = 0x4F; /*0x830736*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v206); /*0x83073b*/
    v207 = v308; /*0x830740*/
    LOBYTE(v309) = 1; /*0x830746*/
    if ( v308 ) /*0x83074b*/
    {
      --v308[7].Unk08; /*0x83074d*/
      if ( !v207[7].Unk08 ) /*0x830756*/
        sub_772560(v207); /*0x83075b*/
    }
    v208 = a3; /*0x830760*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x83076b*/
    NiD3DPass_SetTextureStage(v0, 0, v208); /*0x830778*/
    v209 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830782*/
    LOBYTE(v309) = 0x50; /*0x83078f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v209); /*0x830794*/
    v210 = v308; /*0x830799*/
    LOBYTE(v309) = 1; /*0x83079f*/
    if ( v308 ) /*0x8307a4*/
    {
      --v308[7].Unk08; /*0x8307a6*/
      if ( !v210[7].Unk08 ) /*0x8307af*/
        sub_772560(v210); /*0x8307b4*/
    }
    v211 = a3; /*0x8307b9*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8307c4*/
    NiD3DPass_SetTextureStage(v0, 1u, v211); /*0x8307d1*/
    v212 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8307db*/
    LOBYTE(v309) = 0x51; /*0x8307e8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v212); /*0x8307ed*/
    v213 = v308; /*0x8307f2*/
    LOBYTE(v309) = 1; /*0x8307f8*/
    if ( v308 ) /*0x8307fd*/
    {
      --v308[7].Unk08; /*0x8307ff*/
      if ( !v213[7].Unk08 ) /*0x830808*/
        sub_772560(v213); /*0x83080d*/
    }
    v214 = a3; /*0x830812*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x83081d*/
    NiD3DPass_SetTextureStage(v0, 2u, v214); /*0x83082a*/
    v215 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830834*/
    LOBYTE(v309) = 0x52; /*0x830841*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v215); /*0x830846*/
    v216 = v308; /*0x83084b*/
    LOBYTE(v309) = 1; /*0x830851*/
    if ( v308 ) /*0x830856*/
    {
      --v308[7].Unk08; /*0x830858*/
      if ( !v216[7].Unk08 ) /*0x830861*/
        sub_772560(v216); /*0x830866*/
    }
    v217 = a3; /*0x83086b*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x830876*/
    NiD3DPass_SetTextureStage(v0, 3u, v217); /*0x830883*/
    v218 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x83088d*/
    LOBYTE(v309) = 0x53; /*0x83089a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v218); /*0x83089f*/
    v219 = v308; /*0x8308a4*/
    LOBYTE(v309) = 1; /*0x8308aa*/
    if ( v308 ) /*0x8308af*/
    {
      --v308[7].Unk08; /*0x8308b1*/
      if ( !v219[7].Unk08 ) /*0x8308ba*/
        sub_772560(v219); /*0x8308bf*/
    }
    v220 = (NiD3DTextureStage *)a3; /*0x8308c4*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x8308cf*/
    NiD3DTextureStage_SetTexture(v220, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x8308df*/
    NiD3DPass_SetTextureStage(v0, 4u, &v220->Stage); /*0x8308e9*/
    v221 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8308f3*/
    LOBYTE(v309) = 0x54; /*0x830900*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v221); /*0x830905*/
    v222 = v308; /*0x83090a*/
    LOBYTE(v309) = 1; /*0x830910*/
    if ( v308 ) /*0x830915*/
    {
      --v308[7].Unk08; /*0x830917*/
      if ( !v222[7].Unk08 ) /*0x830920*/
        sub_772560(v222); /*0x830925*/
    }
    v223 = a3; /*0x83092a*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x830935*/
    NiD3DPass_SetTextureStage(v0, 5u, v223); /*0x830942*/
    v224 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x83094c*/
    LOBYTE(v309) = 0x55; /*0x830959*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v224); /*0x83095e*/
    v225 = v308; /*0x830963*/
    LOBYTE(v309) = 1; /*0x830969*/
    if ( v308 ) /*0x83096e*/
    {
      --v308[7].Unk08; /*0x830970*/
      if ( !v225[7].Unk08 ) /*0x830979*/
        sub_772560(v225); /*0x83097e*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x830983*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x83098e*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x83099b*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453C4); /*0x8309a8*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451C4); /*0x8309b6*/
  if ( !v0->RenderStateGroup ) /*0x8309bb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8309c6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8309d2*/
  if ( !v0->RenderStateGroup ) /*0x8309d7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8309e2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8309ee*/
  if ( !v0->RenderStateGroup ) /*0x8309f3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8309fe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x830a09*/
  if ( !v0->RenderStateGroup ) /*0x830a0e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830a19*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x830a25*/
  if ( !v0->RenderStateGroup ) /*0x830a2a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830a35*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x830a41*/
  if ( !v0->RenderStateGroup ) /*0x830a46*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830a51*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x830a5d*/
  v3 = v0 == (NiD3DPass *)unk_B4574C; /*0x830a62*/
  unk_B43CBC = 0x63088; /*0x830a68*/
  unk_B4434C = 0xBC; /*0x830a6e*/
  unk_B449DC = 0xC; /*0x830a78*/
  if ( !v3 ) /*0x830a82*/
  {
    v3 = v0->RefCount-- == 1; /*0x830a84*/
    if ( v3 ) /*0x830a88*/
      NiD3DPass_ReleaseToPool(v0); /*0x830a8c*/
    v0 = (NiD3DPass *)unk_B4574C; /*0x830a91*/
    v307 = unk_B4574C; /*0x830a99*/
    if ( v307 ) /*0x830a9d*/
      ++v0->RefCount; /*0x830a9f*/
  }
  if ( v0->StageCount < 7 ) /*0x830aa6*/
  {
    v226 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830ab1*/
    LOBYTE(v309) = 0x56; /*0x830abe*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v226); /*0x830ac3*/
    v227 = v308; /*0x830ac8*/
    LOBYTE(v309) = 1; /*0x830ace*/
    if ( v308 ) /*0x830ad3*/
    {
      --v308[7].Unk08; /*0x830ad5*/
      if ( !v227[7].Unk08 ) /*0x830ade*/
        sub_772560(v227); /*0x830ae3*/
    }
    v228 = a3; /*0x830ae8*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x830af3*/
    NiD3DPass_SetTextureStage(v0, 0, v228); /*0x830b00*/
    v229 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830b0a*/
    LOBYTE(v309) = 0x57; /*0x830b17*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v229); /*0x830b1c*/
    v230 = v308; /*0x830b21*/
    LOBYTE(v309) = 1; /*0x830b27*/
    if ( v308 ) /*0x830b2c*/
    {
      --v308[7].Unk08; /*0x830b2e*/
      if ( !v230[7].Unk08 ) /*0x830b37*/
        sub_772560(v230); /*0x830b3c*/
    }
    v231 = a3; /*0x830b41*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x830b4c*/
    NiD3DPass_SetTextureStage(v0, 1u, v231); /*0x830b59*/
    v232 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830b63*/
    LOBYTE(v309) = 0x58; /*0x830b70*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v232); /*0x830b75*/
    v233 = v308; /*0x830b7a*/
    LOBYTE(v309) = 1; /*0x830b80*/
    if ( v308 ) /*0x830b85*/
    {
      --v308[7].Unk08; /*0x830b87*/
      if ( !v233[7].Unk08 ) /*0x830b90*/
        sub_772560(v233); /*0x830b95*/
    }
    v234 = a3; /*0x830b9a*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x830ba5*/
    NiD3DPass_SetTextureStage(v0, 2u, v234); /*0x830bb2*/
    v235 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830bbc*/
    LOBYTE(v309) = 0x59; /*0x830bc9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v235); /*0x830bce*/
    v236 = v308; /*0x830bd3*/
    LOBYTE(v309) = 1; /*0x830bd9*/
    if ( v308 ) /*0x830bde*/
    {
      --v308[7].Unk08; /*0x830be0*/
      if ( !v236[7].Unk08 ) /*0x830be9*/
        sub_772560(v236); /*0x830bee*/
    }
    v237 = a3; /*0x830bf3*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x830bfe*/
    NiD3DPass_SetTextureStage(v0, 3u, v237); /*0x830c0b*/
    v238 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830c15*/
    LOBYTE(v309) = 0x5A; /*0x830c22*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v238); /*0x830c27*/
    v239 = v308; /*0x830c2c*/
    LOBYTE(v309) = 1; /*0x830c32*/
    if ( v308 ) /*0x830c37*/
    {
      --v308[7].Unk08; /*0x830c39*/
      if ( !v239[7].Unk08 ) /*0x830c42*/
        sub_772560(v239); /*0x830c47*/
    }
    v240 = (NiD3DTextureStage *)a3; /*0x830c4c*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x830c57*/
    NiD3DTextureStage_SetTexture(v240, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x830c68*/
    NiD3DPass_SetTextureStage(v0, 4u, &v240->Stage); /*0x830c72*/
    v241 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830c7c*/
    LOBYTE(v309) = 0x5B; /*0x830c89*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v241); /*0x830c8e*/
    v242 = v308; /*0x830c93*/
    LOBYTE(v309) = 1; /*0x830c99*/
    if ( v308 ) /*0x830c9e*/
    {
      --v308[7].Unk08; /*0x830ca0*/
      if ( !v242[7].Unk08 ) /*0x830ca9*/
        sub_772560(v242); /*0x830cae*/
    }
    v243 = a3; /*0x830cb3*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x830cbe*/
    NiD3DPass_SetTextureStage(v0, 5u, v243); /*0x830ccb*/
    v244 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830cd5*/
    LOBYTE(v309) = 0x5C; /*0x830ce2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v244); /*0x830ce7*/
    v245 = v308; /*0x830cec*/
    LOBYTE(v309) = 1; /*0x830cf2*/
    if ( v308 ) /*0x830cf7*/
    {
      --v308[7].Unk08; /*0x830cf9*/
      if ( !v245[7].Unk08 ) /*0x830d02*/
        sub_772560(v245); /*0x830d07*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x830d0c*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x830d17*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x830d24*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453C8); /*0x830d32*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451C8); /*0x830d40*/
  if ( !v0->RenderStateGroup ) /*0x830d45*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830d50*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x830d5c*/
  if ( !v0->RenderStateGroup ) /*0x830d61*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830d6c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x830d78*/
  if ( !v0->RenderStateGroup ) /*0x830d7d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830d88*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x830d93*/
  if ( !v0->RenderStateGroup ) /*0x830d98*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830da3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x830daf*/
  if ( !v0->RenderStateGroup ) /*0x830db4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830dbf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x830dcb*/
  if ( !v0->RenderStateGroup ) /*0x830dd0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x830ddb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x830de7*/
  v3 = v0 == (NiD3DPass *)unk_B45750; /*0x830dec*/
  unk_B43CCC = 0x230F2; /*0x830dfc*/
  unk_B4435C = 0x3C; /*0x830e02*/
  unk_B4363C = 0x60; /*0x830e0c*/
  unk_B449EC = 8; /*0x830e12*/
  if ( !v3 ) /*0x830e1c*/
  {
    v3 = v0->RefCount-- == 1; /*0x830e1e*/
    if ( v3 ) /*0x830e22*/
      NiD3DPass_ReleaseToPool(v0); /*0x830e26*/
    v0 = (NiD3DPass *)unk_B45750; /*0x830e2b*/
    v307 = unk_B45750; /*0x830e33*/
    if ( v307 ) /*0x830e37*/
      ++v0->RefCount; /*0x830e39*/
  }
  if ( v0->StageCount < 7 ) /*0x830e41*/
  {
    v246 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830e4c*/
    LOBYTE(v309) = 0x5D; /*0x830e59*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v246); /*0x830e5e*/
    v247 = v308; /*0x830e63*/
    LOBYTE(v309) = 1; /*0x830e69*/
    if ( v308 ) /*0x830e6e*/
    {
      --v308[7].Unk08; /*0x830e70*/
      if ( !v247[7].Unk08 ) /*0x830e79*/
        sub_772560(v247); /*0x830e7e*/
    }
    v248 = a3; /*0x830e83*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x830e8e*/
    NiD3DPass_SetTextureStage(v0, 0, v248); /*0x830e9b*/
    v249 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830ea5*/
    LOBYTE(v309) = 0x5E; /*0x830eb2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v249); /*0x830eb7*/
    v250 = v308; /*0x830ebc*/
    LOBYTE(v309) = 1; /*0x830ec2*/
    if ( v308 ) /*0x830ec7*/
    {
      --v308[7].Unk08; /*0x830ec9*/
      if ( !v250[7].Unk08 ) /*0x830ed2*/
        sub_772560(v250); /*0x830ed7*/
    }
    v251 = a3; /*0x830edc*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x830ee7*/
    NiD3DPass_SetTextureStage(v0, 1u, v251); /*0x830ef4*/
    v252 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830efe*/
    LOBYTE(v309) = 0x5F; /*0x830f0b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v252); /*0x830f10*/
    v253 = v308; /*0x830f15*/
    LOBYTE(v309) = 1; /*0x830f1b*/
    if ( v308 ) /*0x830f20*/
    {
      --v308[7].Unk08; /*0x830f22*/
      if ( !v253[7].Unk08 ) /*0x830f2b*/
        sub_772560(v253); /*0x830f30*/
    }
    v254 = a3; /*0x830f35*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x830f40*/
    NiD3DPass_SetTextureStage(v0, 2u, v254); /*0x830f4d*/
    v255 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830f57*/
    LOBYTE(v309) = 0x60; /*0x830f64*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v255); /*0x830f69*/
    v256 = v308; /*0x830f6e*/
    LOBYTE(v309) = 1; /*0x830f74*/
    if ( v308 ) /*0x830f79*/
    {
      --v308[7].Unk08; /*0x830f7b*/
      if ( !v256[7].Unk08 ) /*0x830f84*/
        sub_772560(v256); /*0x830f89*/
    }
    v257 = a3; /*0x830f8e*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x830f99*/
    NiD3DPass_SetTextureStage(v0, 3u, v257); /*0x830fa6*/
    v258 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x830fb0*/
    LOBYTE(v309) = 0x61; /*0x830fbd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v258); /*0x830fc2*/
    v259 = v308; /*0x830fc7*/
    LOBYTE(v309) = 1; /*0x830fcd*/
    if ( v308 ) /*0x830fd2*/
    {
      --v308[7].Unk08; /*0x830fd4*/
      if ( !v259[7].Unk08 ) /*0x830fdd*/
        sub_772560(v259); /*0x830fe2*/
    }
    v260 = (NiD3DTextureStage *)a3; /*0x830fe7*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x830ff2*/
    NiD3DTextureStage_SetTexture(v260, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x831003*/
    NiD3DPass_SetTextureStage(v0, 4u, &v260->Stage); /*0x83100d*/
    v261 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x831017*/
    LOBYTE(v309) = 0x62; /*0x831024*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v261); /*0x831029*/
    v262 = v308; /*0x83102e*/
    LOBYTE(v309) = 1; /*0x831034*/
    if ( v308 ) /*0x831039*/
    {
      --v308[7].Unk08; /*0x83103b*/
      if ( !v262[7].Unk08 ) /*0x831044*/
        sub_772560(v262); /*0x831049*/
    }
    v263 = a3; /*0x83104e*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x831059*/
    NiD3DPass_SetTextureStage(v0, 5u, v263); /*0x831066*/
    v264 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x831070*/
    LOBYTE(v309) = 0x63; /*0x83107d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v264); /*0x831082*/
    v265 = v308; /*0x831087*/
    LOBYTE(v309) = 1; /*0x83108d*/
    if ( v308 ) /*0x831092*/
    {
      --v308[7].Unk08; /*0x831094*/
      if ( !v265[7].Unk08 ) /*0x83109d*/
        sub_772560(v265); /*0x8310a2*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8310a7*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x8310b2*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x8310bf*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453C8); /*0x8310cd*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451CC); /*0x8310da*/
  if ( !v0->RenderStateGroup ) /*0x8310df*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8310ea*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8310f6*/
  if ( !v0->RenderStateGroup ) /*0x8310fb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831106*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x831112*/
  if ( !v0->RenderStateGroup ) /*0x831117*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831122*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x83112e*/
  if ( !v0->RenderStateGroup ) /*0x831133*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83113e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x83114a*/
  if ( !v0->RenderStateGroup ) /*0x83114f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83115a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x831166*/
  if ( !v0->RenderStateGroup ) /*0x83116b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831176*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x831182*/
  v3 = v0 == (NiD3DPass *)unk_B45760; /*0x831187*/
  unk_B43CD0 = 0x230F2; /*0x83118d*/
  unk_B44360 = 0xBC; /*0x831193*/
  unk_B43640 = 0x60; /*0x83119d*/
  unk_B449F0 = 0xC; /*0x8311a3*/
  if ( !v3 ) /*0x8311ad*/
  {
    v3 = v0->RefCount-- == 1; /*0x8311af*/
    if ( v3 ) /*0x8311b3*/
      NiD3DPass_ReleaseToPool(v0); /*0x8311b7*/
    v0 = (NiD3DPass *)unk_B45760; /*0x8311bc*/
    v307 = unk_B45760; /*0x8311c4*/
    if ( v307 ) /*0x8311c8*/
      ++v0->RefCount; /*0x8311ca*/
  }
  if ( v0->StageCount < 7 ) /*0x8311d2*/
  {
    v266 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8311dd*/
    LOBYTE(v309) = 0x64; /*0x8311ea*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v266); /*0x8311ef*/
    v267 = v308; /*0x8311f4*/
    LOBYTE(v309) = 1; /*0x8311fa*/
    if ( v308 ) /*0x8311ff*/
    {
      --v308[7].Unk08; /*0x831201*/
      if ( !v267[7].Unk08 ) /*0x83120a*/
        sub_772560(v267); /*0x83120f*/
    }
    v268 = a3; /*0x831214*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x83121f*/
    NiD3DPass_SetTextureStage(v0, 0, v268); /*0x83122c*/
    v269 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x831236*/
    LOBYTE(v309) = 0x65; /*0x831243*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v269); /*0x831248*/
    v270 = v308; /*0x83124d*/
    LOBYTE(v309) = 1; /*0x831253*/
    if ( v308 ) /*0x831258*/
    {
      --v308[7].Unk08; /*0x83125a*/
      if ( !v270[7].Unk08 ) /*0x831263*/
        sub_772560(v270); /*0x831268*/
    }
    v271 = a3; /*0x83126d*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x831278*/
    NiD3DPass_SetTextureStage(v0, 1u, v271); /*0x831285*/
    v272 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x83128f*/
    LOBYTE(v309) = 0x66; /*0x83129c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v272); /*0x8312a1*/
    v273 = v308; /*0x8312a6*/
    LOBYTE(v309) = 1; /*0x8312ac*/
    if ( v308 ) /*0x8312b1*/
    {
      --v308[7].Unk08; /*0x8312b3*/
      if ( !v273[7].Unk08 ) /*0x8312bc*/
        sub_772560(v273); /*0x8312c1*/
    }
    v274 = a3; /*0x8312c6*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8312d1*/
    NiD3DPass_SetTextureStage(v0, 2u, v274); /*0x8312de*/
    v275 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8312e8*/
    LOBYTE(v309) = 0x67; /*0x8312f5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v275); /*0x8312fa*/
    v276 = v308; /*0x8312ff*/
    LOBYTE(v309) = 1; /*0x831305*/
    if ( v308 ) /*0x83130a*/
    {
      --v308[7].Unk08; /*0x83130c*/
      if ( !v276[7].Unk08 ) /*0x831315*/
        sub_772560(v276); /*0x83131a*/
    }
    v277 = a3; /*0x83131f*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x83132a*/
    NiD3DPass_SetTextureStage(v0, 3u, v277); /*0x831337*/
    v278 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x831341*/
    LOBYTE(v309) = 0x68; /*0x83134e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v278); /*0x831353*/
    v279 = v308; /*0x831358*/
    LOBYTE(v309) = 1; /*0x83135e*/
    if ( v308 ) /*0x831363*/
    {
      --v308[7].Unk08; /*0x831365*/
      if ( !v279[7].Unk08 ) /*0x83136e*/
        sub_772560(v279); /*0x831373*/
    }
    v280 = (NiD3DTextureStage *)a3; /*0x831378*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x831383*/
    NiD3DTextureStage_SetTexture(v280, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x831393*/
    NiD3DPass_SetTextureStage(v0, 4u, &v280->Stage); /*0x83139d*/
    v281 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8313a7*/
    LOBYTE(v309) = 0x69; /*0x8313b4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v281); /*0x8313b9*/
    v282 = v308; /*0x8313be*/
    LOBYTE(v309) = 1; /*0x8313c4*/
    if ( v308 ) /*0x8313c9*/
    {
      --v308[7].Unk08; /*0x8313cb*/
      if ( !v282[7].Unk08 ) /*0x8313d4*/
        sub_772560(v282); /*0x8313d9*/
    }
    v283 = a3; /*0x8313de*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x8313e9*/
    NiD3DPass_SetTextureStage(v0, 5u, v283); /*0x8313f6*/
    v284 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x831400*/
    LOBYTE(v309) = 0x6A; /*0x83140d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v284); /*0x831412*/
    v285 = v308; /*0x831417*/
    LOBYTE(v309) = 1; /*0x83141d*/
    if ( v308 ) /*0x831422*/
    {
      --v308[7].Unk08; /*0x831424*/
      if ( !v285[7].Unk08 ) /*0x83142d*/
        sub_772560(v285); /*0x831432*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x831437*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x831442*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x83144f*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453CC); /*0x83145c*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451C8); /*0x83146a*/
  if ( !v0->RenderStateGroup ) /*0x83146f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83147a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x831486*/
  if ( !v0->RenderStateGroup ) /*0x83148b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831496*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8314a2*/
  if ( !v0->RenderStateGroup ) /*0x8314a7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8314b2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8314be*/
  if ( !v0->RenderStateGroup ) /*0x8314c3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8314ce*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8314da*/
  if ( !v0->RenderStateGroup ) /*0x8314df*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8314ea*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8314f6*/
  if ( !v0->RenderStateGroup ) /*0x8314fb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831506*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x831512*/
  v3 = v0 == (NiD3DPass *)unk_B45768; /*0x831517*/
  unk_B43CE0 = 0x630F8; /*0x831522*/
  unk_B44370 = 0x3C; /*0x831528*/
  unk_B43650 = 0x60; /*0x831532*/
  unk_B44A00 = 8; /*0x831538*/
  if ( !v3 ) /*0x831542*/
  {
    v3 = v0->RefCount-- == 1; /*0x831544*/
    if ( v3 ) /*0x831548*/
      NiD3DPass_ReleaseToPool(v0); /*0x83154c*/
    v0 = (NiD3DPass *)unk_B45768; /*0x831551*/
    v307 = unk_B45768; /*0x831559*/
    if ( v307 ) /*0x83155d*/
      ++v0->RefCount; /*0x83155f*/
  }
  if ( v0->StageCount < 7 ) /*0x831567*/
  {
    v286 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x831572*/
    LOBYTE(v309) = 0x6B; /*0x83157f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v286); /*0x831584*/
    v287 = v308; /*0x831589*/
    LOBYTE(v309) = 1; /*0x83158f*/
    if ( v308 ) /*0x831594*/
    {
      --v308[7].Unk08; /*0x831596*/
      if ( !v287[7].Unk08 ) /*0x83159f*/
        sub_772560(v287); /*0x8315a4*/
    }
    v288 = a3; /*0x8315a9*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8315b4*/
    NiD3DPass_SetTextureStage(v0, 0, v288); /*0x8315c1*/
    v289 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8315cb*/
    LOBYTE(v309) = 0x6C; /*0x8315d8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v289); /*0x8315dd*/
    v290 = v308; /*0x8315e2*/
    LOBYTE(v309) = 1; /*0x8315e8*/
    if ( v308 ) /*0x8315ed*/
    {
      --v308[7].Unk08; /*0x8315ef*/
      if ( !v290[7].Unk08 ) /*0x8315f8*/
        sub_772560(v290); /*0x8315fd*/
    }
    v291 = a3; /*0x831602*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x83160d*/
    NiD3DPass_SetTextureStage(v0, 1u, v291); /*0x83161a*/
    v292 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x831624*/
    LOBYTE(v309) = 0x6D; /*0x831631*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v292); /*0x831636*/
    v293 = v308; /*0x83163b*/
    LOBYTE(v309) = 1; /*0x831641*/
    if ( v308 ) /*0x831646*/
    {
      --v308[7].Unk08; /*0x831648*/
      if ( !v293[7].Unk08 ) /*0x831651*/
        sub_772560(v293); /*0x831656*/
    }
    v294 = a3; /*0x83165b*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x831666*/
    NiD3DPass_SetTextureStage(v0, 2u, v294); /*0x831673*/
    v295 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x83167d*/
    LOBYTE(v309) = 0x6E; /*0x83168a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v295); /*0x83168f*/
    v296 = v308; /*0x831694*/
    LOBYTE(v309) = 1; /*0x83169a*/
    if ( v308 ) /*0x83169f*/
    {
      --v308[7].Unk08; /*0x8316a1*/
      if ( !v296[7].Unk08 ) /*0x8316aa*/
        sub_772560(v296); /*0x8316af*/
    }
    v297 = a3; /*0x8316b4*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8316bf*/
    NiD3DPass_SetTextureStage(v0, 3u, v297); /*0x8316cc*/
    v298 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x8316d6*/
    LOBYTE(v309) = 0x6F; /*0x8316e3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v298); /*0x8316e8*/
    v299 = v308; /*0x8316ed*/
    LOBYTE(v309) = 1; /*0x8316f3*/
    if ( v308 ) /*0x8316f8*/
    {
      --v308[7].Unk08; /*0x8316fa*/
      if ( !v299[7].Unk08 ) /*0x831703*/
        sub_772560(v299); /*0x831708*/
    }
    v300 = (NiD3DTextureStage *)a3; /*0x83170d*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x831718*/
    NiD3DTextureStage_SetTexture(v300, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x831729*/
    NiD3DPass_SetTextureStage(v0, 4u, &v300->Stage); /*0x831733*/
    v301 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x83173d*/
    LOBYTE(v309) = 0x70; /*0x83174a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v301); /*0x83174f*/
    v302 = v308; /*0x831754*/
    LOBYTE(v309) = 1; /*0x83175a*/
    if ( v308 ) /*0x83175f*/
    {
      --v308[7].Unk08; /*0x831761*/
      if ( !v302[7].Unk08 ) /*0x83176a*/
        sub_772560(v302); /*0x83176f*/
    }
    v303 = a3; /*0x831774*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x83177f*/
    NiD3DPass_SetTextureStage(v0, 5u, v303); /*0x83178c*/
    v304 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v308); /*0x831796*/
    LOBYTE(v309) = 0x71; /*0x8317a3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v304); /*0x8317a8*/
    v305 = v308; /*0x8317ad*/
    LOBYTE(v309) = 1; /*0x8317b3*/
    if ( v308 ) /*0x8317b8*/
    {
      --v308[7].Unk08; /*0x8317ba*/
      if ( !v305[7].Unk08 ) /*0x8317c3*/
        sub_772560(v305); /*0x8317c8*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8317cd*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x8317d8*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x8317e5*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453CC); /*0x8317f3*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B451CC); /*0x831801*/
  if ( !v0->RenderStateGroup ) /*0x831806*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831811*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x83181d*/
  if ( !v0->RenderStateGroup ) /*0x831822*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83182d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x831839*/
  if ( !v0->RenderStateGroup ) /*0x83183e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831849*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x831855*/
  if ( !v0->RenderStateGroup ) /*0x83185a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831865*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x831871*/
  if ( !v0->RenderStateGroup ) /*0x831876*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831881*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x83188d*/
  if ( !v0->RenderStateGroup ) /*0x831892*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83189d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8318a9*/
  unk_B43658 = 0x60; /*0x8318ae*/
  unk_B43CE8 = 0x630F8; /*0x8318b9*/
  unk_B44378 = 0xBC; /*0x8318bf*/
  unk_B44A08 = 0xC; /*0x8318c9*/
  LOBYTE(v309) = 0; /*0x8318d3*/
  if ( v1 ) /*0x8318d8*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x8318da*/
    if ( v3 ) /*0x8318dd*/
      sub_772560(v1); /*0x8318e1*/
  }
  v3 = v0->RefCount-- == 1; /*0x8318e6*/
  v309 = 0xFFFFFFFF; /*0x8318e9*/
  if ( v3 ) /*0x8318ed*/
    NiD3DPass_ReleaseToPool(v0); /*0x8318f1*/
}
