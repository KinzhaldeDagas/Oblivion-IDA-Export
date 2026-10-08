// MoonSugarEffect decode: ParallaxShader pass population slot +0xC8. Populates next 16 pooled passes dword_B47660..B4769C.
void __thiscall sub_868910(int *this)
{
  int v1; // esi
  NiD3DTextureStage *v2; // edi
  int v3; // eax
  bool v4; // zf
  unsigned int *v5; // eax
  NiD3DTextureStage *v6; // eax
  unsigned int **v7; // ebx
  NiD3DTextureStage *v8; // eax
  unsigned int **v9; // ebx
  NiD3DTextureStage *v10; // eax
  unsigned int **v11; // ebx
  NiD3DTextureStage *v12; // eax
  unsigned int **v13; // ebx
  NiD3DTextureStage *v14; // eax
  unsigned int **v15; // ebx
  NiD3DTextureStage *v16; // eax
  unsigned int **v17; // ebx
  NiD3DTextureStage *v18; // eax
  unsigned int **v19; // ebx
  NiD3DTextureStage *v20; // eax
  int v21; // ebx
  int v22; // ebp
  int v23; // ebx
  int v24; // ebp
  unsigned int **v25; // ebp
  NiD3DTextureStage *v26; // eax
  unsigned int **v27; // ebp
  NiD3DTextureStage *v28; // eax
  unsigned int **v29; // ebp
  NiD3DTextureStage *v30; // eax
  unsigned int **v31; // ebp
  NiD3DTextureStage *v32; // eax
  unsigned int **v33; // ebp
  NiD3DTextureStage *v34; // eax
  unsigned int **v35; // ebp
  NiD3DTextureStage *v36; // eax
  unsigned int **v37; // ebp
  NiD3DTextureStage *v38; // eax
  unsigned int **v39; // ebp
  NiD3DTextureStage *v40; // eax
  int v41; // ebx
  int v42; // ebp
  int v43; // ebx
  int v44; // ebp
  unsigned int **v45; // ebp
  NiD3DTextureStage *v46; // eax
  unsigned int **v47; // ebp
  NiD3DTextureStage *v48; // eax
  unsigned int **v49; // ebp
  NiD3DTextureStage *v50; // eax
  unsigned int **v51; // ebp
  NiD3DTextureStage *v52; // eax
  unsigned int **v53; // ebp
  NiD3DTextureStage *v54; // eax
  unsigned int **v55; // ebp
  NiD3DTextureStage *v56; // eax
  unsigned int **v57; // ebp
  NiD3DTextureStage *v58; // eax
  unsigned int **v59; // ebp
  NiD3DTextureStage *v60; // eax
  int v61; // ebx
  int v62; // ebp
  int v63; // ebx
  int v64; // ebp
  unsigned int **v65; // ebp
  NiD3DTextureStage *v66; // eax
  unsigned int **v67; // ebp
  NiD3DTextureStage *v68; // eax
  unsigned int **v69; // ebp
  NiD3DTextureStage *v70; // eax
  unsigned int **v71; // ebp
  NiD3DTextureStage *v72; // eax
  unsigned int **v73; // ebp
  NiD3DTextureStage *v74; // eax
  unsigned int **v75; // ebp
  NiD3DTextureStage *v76; // eax
  unsigned int **v77; // ebp
  NiD3DTextureStage *v78; // eax
  unsigned int **v79; // ebp
  NiD3DTextureStage *v80; // eax
  int v81; // ebx
  int v82; // ebp
  int v83; // ebx
  int v84; // ebp
  unsigned int **v85; // ebp
  NiD3DTextureStage *v86; // eax
  unsigned int **v87; // ebp
  NiD3DTextureStage *v88; // eax
  unsigned int **v89; // ebp
  NiD3DTextureStage *v90; // eax
  unsigned int **v91; // ebp
  NiD3DTextureStage *v92; // eax
  unsigned int **v93; // ebp
  NiD3DTextureStage *v94; // eax
  unsigned int **v95; // ebp
  NiD3DTextureStage *v96; // eax
  unsigned int **v97; // ebp
  NiD3DTextureStage *v98; // eax
  unsigned int **v99; // ebp
  NiD3DTextureStage *v100; // eax
  unsigned int **v101; // ebp
  NiD3DTextureStage *v102; // eax
  unsigned int **v103; // ebp
  NiD3DTextureStage *v104; // eax
  unsigned int **v105; // ebp
  NiD3DTextureStage *v106; // eax
  NiD3DTextureStage **v107; // eax
  NiD3DTextureStage *v108; // eax
  unsigned int *v109; // edi
  NiD3DTextureStage **v110; // eax
  NiD3DTextureStage *v111; // eax
  unsigned int *v112; // edi
  NiD3DTextureStage **v113; // eax
  NiD3DTextureStage *v114; // eax
  NiD3DTextureStage *v115; // edi
  NiD3DTextureStage **v116; // eax
  NiD3DTextureStage *v117; // eax
  unsigned int *v118; // edi
  NiD3DTextureStage **v119; // eax
  NiD3DTextureStage *v120; // eax
  NiD3DVertexShader **v121; // ebp
  NiD3DTextureStage **v122; // eax
  NiD3DTextureStage *v123; // eax
  unsigned int *v124; // edi
  NiD3DTextureStage **v125; // eax
  NiD3DTextureStage *v126; // eax
  unsigned int *v127; // edi
  NiD3DTextureStage **v128; // eax
  NiD3DTextureStage *v129; // eax
  unsigned int *v130; // edi
  NiD3DTextureStage **v131; // eax
  NiD3DTextureStage *v132; // eax
  unsigned int *v133; // edi
  NiD3DTextureStage **v134; // eax
  NiD3DTextureStage *v135; // eax
  unsigned int *v136; // edi
  NiD3DTextureStage **v137; // eax
  NiD3DTextureStage *v138; // eax
  NiD3DTextureStage *v139; // edi
  NiD3DTextureStage **v140; // eax
  NiD3DTextureStage *v141; // eax
  unsigned int *v142; // edi
  NiD3DTextureStage **v143; // eax
  NiD3DTextureStage *v144; // eax
  NiD3DTextureStage **v145; // eax
  NiD3DTextureStage *v146; // eax
  unsigned int *v147; // edi
  NiD3DTextureStage **v148; // eax
  NiD3DTextureStage *v149; // eax
  unsigned int *v150; // edi
  NiD3DTextureStage **v151; // eax
  NiD3DTextureStage *v152; // eax
  unsigned int *v153; // edi
  NiD3DTextureStage **v154; // eax
  NiD3DTextureStage *v155; // eax
  unsigned int *v156; // edi
  NiD3DTextureStage **v157; // eax
  NiD3DTextureStage *v158; // eax
  unsigned int *v159; // edi
  NiD3DTextureStage **v160; // eax
  NiD3DTextureStage *v161; // eax
  NiD3DTextureStage *v162; // edi
  NiD3DTextureStage **v163; // eax
  NiD3DTextureStage *v164; // eax
  unsigned int *v165; // edi
  NiD3DTextureStage **v166; // eax
  NiD3DTextureStage *v167; // eax
  NiD3DTextureStage **v168; // eax
  NiD3DTextureStage *v169; // eax
  unsigned int *v170; // edi
  NiD3DTextureStage **v171; // eax
  NiD3DTextureStage *v172; // eax
  unsigned int *v173; // edi
  NiD3DTextureStage **v174; // eax
  NiD3DTextureStage *v175; // eax
  unsigned int *v176; // edi
  NiD3DTextureStage **v177; // eax
  NiD3DTextureStage *v178; // eax
  unsigned int *v179; // edi
  NiD3DTextureStage **v180; // eax
  NiD3DTextureStage *v181; // eax
  unsigned int *v182; // edi
  NiD3DTextureStage **v183; // eax
  NiD3DTextureStage *v184; // eax
  NiD3DTextureStage *v185; // edi
  NiD3DTextureStage **v186; // eax
  NiD3DTextureStage *v187; // eax
  unsigned int *v188; // edi
  NiD3DTextureStage **v189; // eax
  NiD3DTextureStage *v190; // eax
  int *v191; // ebp
  NiD3DTextureStage **v192; // eax
  NiD3DTextureStage *v193; // eax
  unsigned int *v194; // edi
  NiD3DTextureStage **v195; // eax
  NiD3DTextureStage *v196; // eax
  unsigned int *v197; // edi
  NiD3DTextureStage **v198; // eax
  NiD3DTextureStage *v199; // eax
  unsigned int *v200; // edi
  NiD3DTextureStage **v201; // eax
  NiD3DTextureStage *v202; // eax
  unsigned int *v203; // edi
  NiD3DTextureStage **v204; // eax
  NiD3DTextureStage *v205; // eax
  unsigned int *v206; // edi
  NiD3DTextureStage **v207; // eax
  NiD3DTextureStage *v208; // eax
  NiD3DTextureStage *v209; // edi
  NiD3DTextureStage **v210; // eax
  NiD3DTextureStage *v211; // eax
  unsigned int *v212; // edi
  NiD3DTextureStage **v213; // eax
  NiD3DTextureStage *v214; // eax
  NiD3DTextureStage **v215; // eax
  NiD3DTextureStage *v216; // eax
  unsigned int *v217; // edi
  NiD3DTextureStage **v218; // eax
  NiD3DTextureStage *v219; // eax
  unsigned int *v220; // edi
  NiD3DTextureStage **v221; // eax
  NiD3DTextureStage *v222; // eax
  unsigned int *v223; // edi
  NiD3DTextureStage **v224; // eax
  NiD3DTextureStage *v225; // eax
  unsigned int *v226; // edi
  NiD3DTextureStage **v227; // eax
  NiD3DTextureStage *v228; // eax
  unsigned int *v229; // edi
  NiD3DTextureStage **v230; // eax
  NiD3DTextureStage *v231; // eax
  NiD3DTextureStage *v232; // edi
  NiD3DTextureStage **v233; // eax
  NiD3DTextureStage *v234; // eax
  unsigned int *v235; // edi
  NiD3DTextureStage **v236; // eax
  NiD3DTextureStage *v237; // eax
  int *v238; // ebp
  NiD3DTextureStage **v239; // eax
  NiD3DTextureStage *v240; // eax
  unsigned int *v241; // edi
  NiD3DTextureStage **v242; // eax
  NiD3DTextureStage *v243; // eax
  unsigned int *v244; // edi
  NiD3DTextureStage **v245; // eax
  NiD3DTextureStage *v246; // eax
  unsigned int *v247; // edi
  NiD3DTextureStage **v248; // eax
  NiD3DTextureStage *v249; // eax
  unsigned int *v250; // edi
  NiD3DTextureStage **v251; // eax
  NiD3DTextureStage *v252; // eax
  unsigned int *v253; // edi
  NiD3DTextureStage **v254; // eax
  NiD3DTextureStage *v255; // eax
  NiD3DTextureStage *v256; // edi
  NiD3DTextureStage **v257; // eax
  NiD3DTextureStage *v258; // eax
  unsigned int *v259; // edi
  NiD3DTextureStage **v260; // eax
  NiD3DTextureStage *v261; // eax
  NiD3DTextureStage **v262; // eax
  NiD3DTextureStage *v263; // eax
  unsigned int *v264; // edi
  NiD3DTextureStage **v265; // eax
  NiD3DTextureStage *v266; // eax
  unsigned int *v267; // edi
  NiD3DTextureStage **v268; // eax
  NiD3DTextureStage *v269; // eax
  unsigned int *v270; // edi
  NiD3DTextureStage **v271; // eax
  NiD3DTextureStage *v272; // eax
  unsigned int *v273; // edi
  NiD3DTextureStage **v274; // eax
  NiD3DTextureStage *v275; // eax
  unsigned int *v276; // edi
  NiD3DTextureStage **v277; // eax
  NiD3DTextureStage *v278; // eax
  NiD3DTextureStage *v279; // edi
  NiD3DTextureStage **v280; // eax
  NiD3DTextureStage *v281; // eax
  unsigned int *v282; // edi
  NiD3DTextureStage **v283; // eax
  NiD3DTextureStage *v284; // eax
  int *v285; // ebp
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
  unsigned int *v300; // edi
  NiD3DTextureStage **v301; // eax
  NiD3DTextureStage *v302; // eax
  NiD3DTextureStage *v303; // edi
  NiD3DTextureStage **v304; // eax
  NiD3DTextureStage *v305; // eax
  unsigned int *v306; // edi
  NiD3DTextureStage **v307; // eax
  NiD3DTextureStage *v308; // eax
  NiD3DPassVtbl **v309; // esi
  NiD3DTextureStage **v310; // eax
  NiD3DTextureStage *v311; // eax
  unsigned int *v312; // edi
  NiD3DTextureStage **v313; // eax
  NiD3DTextureStage *v314; // eax
  unsigned int *v315; // edi
  NiD3DTextureStage **v316; // eax
  NiD3DTextureStage *v317; // eax
  unsigned int *v318; // edi
  NiD3DTextureStage **v319; // eax
  NiD3DTextureStage *v320; // eax
  unsigned int *v321; // edi
  NiD3DTextureStage **v322; // eax
  NiD3DTextureStage *v323; // eax
  unsigned int *v324; // edi
  NiD3DTextureStage **v325; // eax
  NiD3DTextureStage *v326; // eax
  NiD3DTextureStage *v327; // edi
  NiD3DTextureStage **v328; // eax
  NiD3DTextureStage *v329; // eax
  unsigned int *v330; // edi
  NiD3DTextureStage **v331; // eax
  NiD3DTextureStage *v332; // eax
  int *v333; // ebp
  NiD3DPassVtbl **v334; // esi
  NiD3DTextureStage **v335; // eax
  NiD3DTextureStage *v336; // eax
  unsigned int *v337; // edi
  NiD3DTextureStage **v338; // eax
  NiD3DTextureStage *v339; // eax
  unsigned int *v340; // edi
  NiD3DTextureStage **v341; // eax
  NiD3DTextureStage *v342; // eax
  unsigned int *v343; // edi
  NiD3DTextureStage **v344; // eax
  NiD3DTextureStage *v345; // eax
  unsigned int *v346; // edi
  NiD3DTextureStage **v347; // eax
  NiD3DTextureStage *v348; // eax
  unsigned int *v349; // edi
  NiD3DTextureStage **v350; // eax
  NiD3DTextureStage *v351; // eax
  NiD3DTextureStage *v352; // edi
  NiD3DTextureStage **v353; // eax
  NiD3DTextureStage *v354; // eax
  unsigned int *v355; // edi
  NiD3DTextureStage **v356; // eax
  NiD3DTextureStage *v357; // eax
  unsigned int *a3; // [esp+20h] [ebp-1Ch] BYREF
  int *v359; // [esp+24h] [ebp-18h]
  NiD3DPassVtbl **v360; // [esp+28h] [ebp-14h] BYREF
  NiD3DTextureStage *v361; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v362; // [esp+38h] [ebp-4h]

  v359 = this; /*0x868937*/
  v1 = 0; /*0x86893b*/
  v2 = 0; /*0x86893d*/
  v360 = 0; /*0x86893f*/
  v362 = 0; /*0x868943*/
  a3 = 0; /*0x868947*/
  v3 = unk_B47660; /*0x86894b*/
  v4 = unk_B47660 == 0; /*0x868950*/
  LOBYTE(v362) = 1; /*0x868957*/
  if ( !v4 ) /*0x86895b*/
  {
    v1 = v3; /*0x86895d*/
    v360 = (NiD3DPassVtbl **)v3; /*0x868961*/
    if ( v3 ) /*0x868965*/
      ++*(_DWORD *)(v3 + 0x60); /*0x868967*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x868973*/
  {
    v5 = (unsigned int *)*NiD3DTextureStagePool_Acquire(&v361); /*0x868986*/
    if ( v5 ) /*0x86898a*/
    {
      v2 = (NiD3DTextureStage *)v5; /*0x86898c*/
      ++v5[0x17]; /*0x86898e*/
      a3 = v5; /*0x868991*/
    }
    v6 = v361; /*0x868995*/
    LOBYTE(v362) = 1; /*0x86899b*/
    if ( v361 ) /*0x8689a0*/
    {
      --v361[7].Unk08; /*0x8689a2*/
      if ( !v6[7].Unk08 ) /*0x8689aa*/
        sub_772560(v6); /*0x8689af*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x8689bb*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x8689c8*/
    v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x8689da*/
    v4 = v2 == (NiD3DTextureStage *)*v7; /*0x8689dc*/
    LOBYTE(v362) = 3; /*0x8689de*/
    if ( !v4 ) /*0x8689e3*/
    {
      if ( v2 ) /*0x8689e7*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8689e9*/
        if ( v4 ) /*0x8689ec*/
          sub_772560(v2); /*0x8689f0*/
      }
      v2 = (NiD3DTextureStage *)*v7; /*0x8689f5*/
      a3 = *v7; /*0x8689f9*/
      if ( a3 ) /*0x8689fd*/
        ++v2[7].Unk08; /*0x8689ff*/
    }
    v8 = v361; /*0x868a03*/
    LOBYTE(v362) = 1; /*0x868a09*/
    if ( v361 ) /*0x868a0e*/
    {
      --v361[7].Unk08; /*0x868a10*/
      if ( !v8[7].Unk08 ) /*0x868a18*/
        sub_772560(v8); /*0x868a1d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x868a29*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x868a36*/
    v9 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x868a48*/
    v4 = v2 == (NiD3DTextureStage *)*v9; /*0x868a4a*/
    LOBYTE(v362) = 4; /*0x868a4c*/
    if ( !v4 ) /*0x868a51*/
    {
      if ( v2 ) /*0x868a55*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x868a57*/
        if ( v4 ) /*0x868a5a*/
          sub_772560(v2); /*0x868a5e*/
      }
      v2 = (NiD3DTextureStage *)*v9; /*0x868a63*/
      a3 = *v9; /*0x868a67*/
      if ( a3 ) /*0x868a6b*/
        ++v2[7].Unk08; /*0x868a6d*/
    }
    v10 = v361; /*0x868a71*/
    LOBYTE(v362) = 1; /*0x868a77*/
    if ( v361 ) /*0x868a7c*/
    {
      --v361[7].Unk08; /*0x868a7e*/
      if ( !v10[7].Unk08 ) /*0x868a86*/
        sub_772560(v10); /*0x868a8b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x868a97*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x868aa4*/
    v11 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x868ab6*/
    v4 = v2 == (NiD3DTextureStage *)*v11; /*0x868ab8*/
    LOBYTE(v362) = 5; /*0x868aba*/
    if ( !v4 ) /*0x868abf*/
    {
      if ( v2 ) /*0x868ac3*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x868ac5*/
        if ( v4 ) /*0x868ac8*/
          sub_772560(v2); /*0x868acc*/
      }
      v2 = (NiD3DTextureStage *)*v11; /*0x868ad1*/
      a3 = *v11; /*0x868ad5*/
      if ( a3 ) /*0x868ad9*/
        ++v2[7].Unk08; /*0x868adb*/
    }
    v12 = v361; /*0x868adf*/
    LOBYTE(v362) = 1; /*0x868ae5*/
    if ( v361 ) /*0x868aea*/
    {
      --v361[7].Unk08; /*0x868aec*/
      if ( !v12[7].Unk08 ) /*0x868af4*/
        sub_772560(v12); /*0x868af9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x868b05*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x868b12*/
    v13 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x868b24*/
    v4 = v2 == (NiD3DTextureStage *)*v13; /*0x868b26*/
    LOBYTE(v362) = 6; /*0x868b28*/
    if ( !v4 ) /*0x868b2d*/
    {
      if ( v2 ) /*0x868b31*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x868b33*/
        if ( v4 ) /*0x868b36*/
          sub_772560(v2); /*0x868b3a*/
      }
      v2 = (NiD3DTextureStage *)*v13; /*0x868b3f*/
      a3 = *v13; /*0x868b43*/
      if ( a3 ) /*0x868b47*/
        ++v2[7].Unk08; /*0x868b49*/
    }
    v14 = v361; /*0x868b4d*/
    LOBYTE(v362) = 1; /*0x868b53*/
    if ( v361 ) /*0x868b58*/
    {
      --v361[7].Unk08; /*0x868b5a*/
      if ( !v14[7].Unk08 ) /*0x868b62*/
        sub_772560(v14); /*0x868b67*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x868b73*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x868b80*/
    v15 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x868b92*/
    v4 = v2 == (NiD3DTextureStage *)*v15; /*0x868b94*/
    LOBYTE(v362) = 7; /*0x868b96*/
    if ( !v4 ) /*0x868b9b*/
    {
      if ( v2 ) /*0x868b9f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x868ba1*/
        if ( v4 ) /*0x868ba4*/
          sub_772560(v2); /*0x868ba8*/
      }
      v2 = (NiD3DTextureStage *)*v15; /*0x868bad*/
      a3 = *v15; /*0x868bb1*/
      if ( a3 ) /*0x868bb5*/
        ++v2[7].Unk08; /*0x868bb7*/
    }
    v16 = v361; /*0x868bbb*/
    LOBYTE(v362) = 1; /*0x868bc1*/
    if ( v361 ) /*0x868bc6*/
    {
      --v361[7].Unk08; /*0x868bc8*/
      if ( !v16[7].Unk08 ) /*0x868bd0*/
        sub_772560(v16); /*0x868bd5*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x868be1*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x868bf1*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x868bfb*/
    v17 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x868c0d*/
    v4 = v2 == (NiD3DTextureStage *)*v17; /*0x868c0f*/
    LOBYTE(v362) = 8; /*0x868c11*/
    if ( !v4 ) /*0x868c16*/
    {
      if ( v2 ) /*0x868c1a*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x868c1c*/
        if ( v4 ) /*0x868c1f*/
          sub_772560(v2); /*0x868c23*/
      }
      v2 = (NiD3DTextureStage *)*v17; /*0x868c28*/
      a3 = *v17; /*0x868c2c*/
      if ( a3 ) /*0x868c30*/
        ++v2[7].Unk08; /*0x868c32*/
    }
    v18 = v361; /*0x868c36*/
    LOBYTE(v362) = 1; /*0x868c3c*/
    if ( v361 ) /*0x868c41*/
    {
      --v361[7].Unk08; /*0x868c43*/
      if ( !v18[7].Unk08 ) /*0x868c4b*/
        sub_772560(v18); /*0x868c50*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x868c5c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x868c69*/
    v19 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x868c7b*/
    v4 = v2 == (NiD3DTextureStage *)*v19; /*0x868c7d*/
    LOBYTE(v362) = 9; /*0x868c7f*/
    if ( !v4 ) /*0x868c84*/
    {
      if ( v2 ) /*0x868c88*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x868c8a*/
        if ( v4 ) /*0x868c8d*/
          sub_772560(v2); /*0x868c91*/
      }
      v2 = (NiD3DTextureStage *)*v19; /*0x868c96*/
      a3 = *v19; /*0x868c9a*/
      if ( a3 ) /*0x868c9e*/
        ++v2[7].Unk08; /*0x868ca0*/
    }
    v20 = v361; /*0x868ca4*/
    LOBYTE(v362) = 1; /*0x868caa*/
    if ( v361 ) /*0x868caf*/
    {
      --v361[7].Unk08; /*0x868cb1*/
      if ( !v20[7].Unk08 ) /*0x868cb9*/
        sub_772560(v20); /*0x868cbe*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x868cca*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x868cd7*/
  }
  v21 = v359[0x27]; /*0x868ce0*/
  v22 = *(_DWORD *)(v1 + 0x58); /*0x868ce6*/
  if ( v22 != v21 ) /*0x868ceb*/
  {
    if ( v22 ) /*0x868cef*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x868cf5*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x868d0c*/
    }
    *(_DWORD *)(v1 + 0x58) = v21; /*0x868d10*/
    if ( v21 ) /*0x868d13*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x868d19*/
  }
  v23 = v359[0x4B]; /*0x868d23*/
  v24 = *(_DWORD *)(v1 + 0x44); /*0x868d29*/
  if ( v24 != v23 ) /*0x868d2e*/
  {
    if ( v24 ) /*0x868d32*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x868d38*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x868d4f*/
    }
    *(_DWORD *)(v1 + 0x44) = v23; /*0x868d53*/
    if ( v23 ) /*0x868d56*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x868d5c*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868d62*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868d6d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x868d79*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868d7e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868d89*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x868d95*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868d9a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868da5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x868db1*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868db6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868dc1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x868dcd*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868dd2*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868ddd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x868de9*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868dee*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868df9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x868e05*/
  v4 = v1 == unk_B47664; /*0x868e0d*/
  unk_B43D08 = 0x38082; /*0x868e13*/
  unk_B44398 = 0x10C; /*0x868e1d*/
  if ( !v4 ) /*0x868e27*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x868e29*/
    if ( v4 ) /*0x868e2c*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x868e30*/
    v1 = unk_B47664; /*0x868e35*/
    v360 = (NiD3DPassVtbl **)unk_B47664; /*0x868e3d*/
    if ( v360 ) /*0x868e41*/
      ++*(_DWORD *)(v1 + 0x60); /*0x868e43*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x868e4b*/
  {
    v25 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x868e5e*/
    v4 = v2 == (NiD3DTextureStage *)*v25; /*0x868e60*/
    LOBYTE(v362) = 0xA; /*0x868e63*/
    if ( !v4 ) /*0x868e68*/
    {
      if ( v2 ) /*0x868e6c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x868e6e*/
        if ( v4 ) /*0x868e71*/
          sub_772560(v2); /*0x868e75*/
      }
      v2 = (NiD3DTextureStage *)*v25; /*0x868e7a*/
      a3 = *v25; /*0x868e7f*/
      if ( a3 ) /*0x868e83*/
        ++v2[7].Unk08; /*0x868e85*/
    }
    v26 = v361; /*0x868e89*/
    LOBYTE(v362) = 1; /*0x868e8f*/
    if ( v361 ) /*0x868e94*/
    {
      --v361[7].Unk08; /*0x868e96*/
      if ( !v26[7].Unk08 ) /*0x868e9e*/
        sub_772560(v26); /*0x868ea3*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x868eaf*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x868ebc*/
    v27 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x868ece*/
    v4 = v2 == (NiD3DTextureStage *)*v27; /*0x868ed0*/
    LOBYTE(v362) = 0xB; /*0x868ed3*/
    if ( !v4 ) /*0x868ed8*/
    {
      if ( v2 ) /*0x868edc*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x868ede*/
        if ( v4 ) /*0x868ee1*/
          sub_772560(v2); /*0x868ee5*/
      }
      v2 = (NiD3DTextureStage *)*v27; /*0x868eea*/
      a3 = *v27; /*0x868eef*/
      if ( a3 ) /*0x868ef3*/
        ++v2[7].Unk08; /*0x868ef5*/
    }
    v28 = v361; /*0x868ef9*/
    LOBYTE(v362) = 1; /*0x868eff*/
    if ( v361 ) /*0x868f04*/
    {
      --v361[7].Unk08; /*0x868f06*/
      if ( !v28[7].Unk08 ) /*0x868f0e*/
        sub_772560(v28); /*0x868f13*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x868f1f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x868f2c*/
    v29 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x868f3e*/
    v4 = v2 == (NiD3DTextureStage *)*v29; /*0x868f40*/
    LOBYTE(v362) = 0xC; /*0x868f43*/
    if ( !v4 ) /*0x868f48*/
    {
      if ( v2 ) /*0x868f4c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x868f4e*/
        if ( v4 ) /*0x868f51*/
          sub_772560(v2); /*0x868f55*/
      }
      v2 = (NiD3DTextureStage *)*v29; /*0x868f5a*/
      a3 = *v29; /*0x868f5f*/
      if ( a3 ) /*0x868f63*/
        ++v2[7].Unk08; /*0x868f65*/
    }
    v30 = v361; /*0x868f69*/
    LOBYTE(v362) = 1; /*0x868f6f*/
    if ( v361 ) /*0x868f74*/
    {
      --v361[7].Unk08; /*0x868f76*/
      if ( !v30[7].Unk08 ) /*0x868f7e*/
        sub_772560(v30); /*0x868f83*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x868f8f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x868f9c*/
    v31 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x868fae*/
    v4 = v2 == (NiD3DTextureStage *)*v31; /*0x868fb0*/
    LOBYTE(v362) = 0xD; /*0x868fb3*/
    if ( !v4 ) /*0x868fb8*/
    {
      if ( v2 ) /*0x868fbc*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x868fbe*/
        if ( v4 ) /*0x868fc1*/
          sub_772560(v2); /*0x868fc5*/
      }
      v2 = (NiD3DTextureStage *)*v31; /*0x868fca*/
      a3 = *v31; /*0x868fcf*/
      if ( a3 ) /*0x868fd3*/
        ++v2[7].Unk08; /*0x868fd5*/
    }
    v32 = v361; /*0x868fd9*/
    LOBYTE(v362) = 1; /*0x868fdf*/
    if ( v361 ) /*0x868fe4*/
    {
      --v361[7].Unk08; /*0x868fe6*/
      if ( !v32[7].Unk08 ) /*0x868fee*/
        sub_772560(v32); /*0x868ff3*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x868fff*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x86900c*/
    v33 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86901e*/
    v4 = v2 == (NiD3DTextureStage *)*v33; /*0x869020*/
    LOBYTE(v362) = 0xE; /*0x869023*/
    if ( !v4 ) /*0x869028*/
    {
      if ( v2 ) /*0x86902c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86902e*/
        if ( v4 ) /*0x869031*/
          sub_772560(v2); /*0x869035*/
      }
      v2 = (NiD3DTextureStage *)*v33; /*0x86903a*/
      a3 = *v33; /*0x86903f*/
      if ( a3 ) /*0x869043*/
        ++v2[7].Unk08; /*0x869045*/
    }
    v34 = v361; /*0x869049*/
    LOBYTE(v362) = 1; /*0x86904f*/
    if ( v361 ) /*0x869054*/
    {
      --v361[7].Unk08; /*0x869056*/
      if ( !v34[7].Unk08 ) /*0x86905e*/
        sub_772560(v34); /*0x869063*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x86906f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x86907c*/
    v35 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86908e*/
    v4 = v2 == (NiD3DTextureStage *)*v35; /*0x869090*/
    LOBYTE(v362) = 0xF; /*0x869093*/
    if ( !v4 ) /*0x869098*/
    {
      if ( v2 ) /*0x86909c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86909e*/
        if ( v4 ) /*0x8690a1*/
          sub_772560(v2); /*0x8690a5*/
      }
      v2 = (NiD3DTextureStage *)*v35; /*0x8690aa*/
      a3 = *v35; /*0x8690af*/
      if ( a3 ) /*0x8690b3*/
        ++v2[7].Unk08; /*0x8690b5*/
    }
    v36 = v361; /*0x8690b9*/
    LOBYTE(v362) = 1; /*0x8690bf*/
    if ( v361 ) /*0x8690c4*/
    {
      --v361[7].Unk08; /*0x8690c6*/
      if ( !v36[7].Unk08 ) /*0x8690ce*/
        sub_772560(v36); /*0x8690d3*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x8690df*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8690ef*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x8690f9*/
    v37 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86910b*/
    v4 = v2 == (NiD3DTextureStage *)*v37; /*0x86910d*/
    LOBYTE(v362) = 0x10; /*0x869110*/
    if ( !v4 ) /*0x869115*/
    {
      if ( v2 ) /*0x869119*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86911b*/
        if ( v4 ) /*0x86911e*/
          sub_772560(v2); /*0x869122*/
      }
      v2 = (NiD3DTextureStage *)*v37; /*0x869127*/
      a3 = *v37; /*0x86912c*/
      if ( a3 ) /*0x869130*/
        ++v2[7].Unk08; /*0x869132*/
    }
    v38 = v361; /*0x869136*/
    LOBYTE(v362) = 1; /*0x86913c*/
    if ( v361 ) /*0x869141*/
    {
      --v361[7].Unk08; /*0x869143*/
      if ( !v38[7].Unk08 ) /*0x86914b*/
        sub_772560(v38); /*0x869150*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x86915c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x869169*/
    v39 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86917b*/
    v4 = v2 == (NiD3DTextureStage *)*v39; /*0x86917d*/
    LOBYTE(v362) = 0x11; /*0x869180*/
    if ( !v4 ) /*0x869185*/
    {
      if ( v2 ) /*0x869189*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86918b*/
        if ( v4 ) /*0x86918e*/
          sub_772560(v2); /*0x869192*/
      }
      v2 = (NiD3DTextureStage *)*v39; /*0x869197*/
      a3 = *v39; /*0x86919c*/
      if ( a3 ) /*0x8691a0*/
        ++v2[7].Unk08; /*0x8691a2*/
    }
    v40 = v361; /*0x8691a6*/
    LOBYTE(v362) = 1; /*0x8691ac*/
    if ( v361 ) /*0x8691b1*/
    {
      --v361[7].Unk08; /*0x8691b3*/
      if ( !v40[7].Unk08 ) /*0x8691bb*/
        sub_772560(v40); /*0x8691c0*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x8691cc*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x8691d9*/
  }
  v41 = v359[0x27]; /*0x8691e2*/
  v42 = *(_DWORD *)(v1 + 0x58); /*0x8691e8*/
  if ( v42 != v41 ) /*0x8691ed*/
  {
    if ( v42 ) /*0x8691f1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v42 + 4)) ) /*0x8691f7*/
        (**(void (__thiscall ***)(int, int))v42)(v42, 1); /*0x86920e*/
    }
    *(_DWORD *)(v1 + 0x58) = v41; /*0x869212*/
    if ( v41 ) /*0x869215*/
      InterlockedIncrement((volatile LONG *)(v41 + 4)); /*0x86921b*/
  }
  v43 = v359[0x4C]; /*0x869225*/
  v44 = *(_DWORD *)(v1 + 0x44); /*0x86922b*/
  if ( v44 != v43 ) /*0x869230*/
  {
    if ( v44 ) /*0x869234*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v44 + 4)) ) /*0x86923a*/
        (**(void (__thiscall ***)(int, int))v44)(v44, 1); /*0x869251*/
    }
    *(_DWORD *)(v1 + 0x44) = v43; /*0x869255*/
    if ( v43 ) /*0x869258*/
      InterlockedIncrement((volatile LONG *)(v43 + 4)); /*0x86925e*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x869264*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86926f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86927b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x869280*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86928b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x869297*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86929c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8692a7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8692b3*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8692b8*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8692c3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x8692cf*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8692d4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8692df*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x8692eb*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8692f0*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8692fb*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x869307*/
  v4 = v1 == unk_B47668; /*0x86930f*/
  unk_B43D0C = 0x38082; /*0x869315*/
  unk_B4439C = 0x18C; /*0x86931f*/
  if ( !v4 ) /*0x869329*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86932b*/
    if ( v4 ) /*0x86932e*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x869332*/
    v1 = unk_B47668; /*0x869337*/
    v360 = (NiD3DPassVtbl **)unk_B47668; /*0x86933f*/
    if ( v360 ) /*0x869343*/
      ++*(_DWORD *)(v1 + 0x60); /*0x869345*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86934d*/
  {
    v45 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869360*/
    v4 = v2 == (NiD3DTextureStage *)*v45; /*0x869362*/
    LOBYTE(v362) = 0x12; /*0x869365*/
    if ( !v4 ) /*0x86936a*/
    {
      if ( v2 ) /*0x86936e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869370*/
        if ( v4 ) /*0x869373*/
          sub_772560(v2); /*0x869377*/
      }
      v2 = (NiD3DTextureStage *)*v45; /*0x86937c*/
      a3 = *v45; /*0x869381*/
      if ( a3 ) /*0x869385*/
        ++v2[7].Unk08; /*0x869387*/
    }
    v46 = v361; /*0x86938b*/
    LOBYTE(v362) = 1; /*0x869391*/
    if ( v361 ) /*0x869396*/
    {
      --v361[7].Unk08; /*0x869398*/
      if ( !v46[7].Unk08 ) /*0x8693a0*/
        sub_772560(v46); /*0x8693a5*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x8693b1*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x8693be*/
    v47 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x8693d0*/
    v4 = v2 == (NiD3DTextureStage *)*v47; /*0x8693d2*/
    LOBYTE(v362) = 0x13; /*0x8693d5*/
    if ( !v4 ) /*0x8693da*/
    {
      if ( v2 ) /*0x8693de*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8693e0*/
        if ( v4 ) /*0x8693e3*/
          sub_772560(v2); /*0x8693e7*/
      }
      v2 = (NiD3DTextureStage *)*v47; /*0x8693ec*/
      a3 = *v47; /*0x8693f1*/
      if ( a3 ) /*0x8693f5*/
        ++v2[7].Unk08; /*0x8693f7*/
    }
    v48 = v361; /*0x8693fb*/
    LOBYTE(v362) = 1; /*0x869401*/
    if ( v361 ) /*0x869406*/
    {
      --v361[7].Unk08; /*0x869408*/
      if ( !v48[7].Unk08 ) /*0x869410*/
        sub_772560(v48); /*0x869415*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x869421*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x86942e*/
    v49 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869440*/
    v4 = v2 == (NiD3DTextureStage *)*v49; /*0x869442*/
    LOBYTE(v362) = 0x14; /*0x869445*/
    if ( !v4 ) /*0x86944a*/
    {
      if ( v2 ) /*0x86944e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869450*/
        if ( v4 ) /*0x869453*/
          sub_772560(v2); /*0x869457*/
      }
      v2 = (NiD3DTextureStage *)*v49; /*0x86945c*/
      a3 = *v49; /*0x869461*/
      if ( a3 ) /*0x869465*/
        ++v2[7].Unk08; /*0x869467*/
    }
    v50 = v361; /*0x86946b*/
    LOBYTE(v362) = 1; /*0x869471*/
    if ( v361 ) /*0x869476*/
    {
      --v361[7].Unk08; /*0x869478*/
      if ( !v50[7].Unk08 ) /*0x869480*/
        sub_772560(v50); /*0x869485*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x869491*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x86949e*/
    v51 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x8694b0*/
    v4 = v2 == (NiD3DTextureStage *)*v51; /*0x8694b2*/
    LOBYTE(v362) = 0x15; /*0x8694b5*/
    if ( !v4 ) /*0x8694ba*/
    {
      if ( v2 ) /*0x8694be*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8694c0*/
        if ( v4 ) /*0x8694c3*/
          sub_772560(v2); /*0x8694c7*/
      }
      v2 = (NiD3DTextureStage *)*v51; /*0x8694cc*/
      a3 = *v51; /*0x8694d1*/
      if ( a3 ) /*0x8694d5*/
        ++v2[7].Unk08; /*0x8694d7*/
    }
    v52 = v361; /*0x8694db*/
    LOBYTE(v362) = 1; /*0x8694e1*/
    if ( v361 ) /*0x8694e6*/
    {
      --v361[7].Unk08; /*0x8694e8*/
      if ( !v52[7].Unk08 ) /*0x8694f0*/
        sub_772560(v52); /*0x8694f5*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x869501*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x86950e*/
    v53 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869520*/
    v4 = v2 == (NiD3DTextureStage *)*v53; /*0x869522*/
    LOBYTE(v362) = 0x16; /*0x869525*/
    if ( !v4 ) /*0x86952a*/
    {
      if ( v2 ) /*0x86952e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869530*/
        if ( v4 ) /*0x869533*/
          sub_772560(v2); /*0x869537*/
      }
      v2 = (NiD3DTextureStage *)*v53; /*0x86953c*/
      a3 = *v53; /*0x869541*/
      if ( a3 ) /*0x869545*/
        ++v2[7].Unk08; /*0x869547*/
    }
    v54 = v361; /*0x86954b*/
    LOBYTE(v362) = 1; /*0x869551*/
    if ( v361 ) /*0x869556*/
    {
      --v361[7].Unk08; /*0x869558*/
      if ( !v54[7].Unk08 ) /*0x869560*/
        sub_772560(v54); /*0x869565*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x869571*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x86957e*/
    v55 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869590*/
    v4 = v2 == (NiD3DTextureStage *)*v55; /*0x869592*/
    LOBYTE(v362) = 0x17; /*0x869595*/
    if ( !v4 ) /*0x86959a*/
    {
      if ( v2 ) /*0x86959e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8695a0*/
        if ( v4 ) /*0x8695a3*/
          sub_772560(v2); /*0x8695a7*/
      }
      v2 = (NiD3DTextureStage *)*v55; /*0x8695ac*/
      a3 = *v55; /*0x8695b1*/
      if ( a3 ) /*0x8695b5*/
        ++v2[7].Unk08; /*0x8695b7*/
    }
    v56 = v361; /*0x8695bb*/
    LOBYTE(v362) = 1; /*0x8695c1*/
    if ( v361 ) /*0x8695c6*/
    {
      --v361[7].Unk08; /*0x8695c8*/
      if ( !v56[7].Unk08 ) /*0x8695d0*/
        sub_772560(v56); /*0x8695d5*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x8695e1*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8695f1*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x8695fb*/
    v57 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86960d*/
    v4 = v2 == (NiD3DTextureStage *)*v57; /*0x86960f*/
    LOBYTE(v362) = 0x18; /*0x869612*/
    if ( !v4 ) /*0x869617*/
    {
      if ( v2 ) /*0x86961b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86961d*/
        if ( v4 ) /*0x869620*/
          sub_772560(v2); /*0x869624*/
      }
      v2 = (NiD3DTextureStage *)*v57; /*0x869629*/
      a3 = *v57; /*0x86962e*/
      if ( a3 ) /*0x869632*/
        ++v2[7].Unk08; /*0x869634*/
    }
    v58 = v361; /*0x869638*/
    LOBYTE(v362) = 1; /*0x86963e*/
    if ( v361 ) /*0x869643*/
    {
      --v361[7].Unk08; /*0x869645*/
      if ( !v58[7].Unk08 ) /*0x86964d*/
        sub_772560(v58); /*0x869652*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x86965e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x86966b*/
    v59 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86967d*/
    v4 = v2 == (NiD3DTextureStage *)*v59; /*0x86967f*/
    LOBYTE(v362) = 0x19; /*0x869682*/
    if ( !v4 ) /*0x869687*/
    {
      if ( v2 ) /*0x86968b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86968d*/
        if ( v4 ) /*0x869690*/
          sub_772560(v2); /*0x869694*/
      }
      v2 = (NiD3DTextureStage *)*v59; /*0x869699*/
      a3 = *v59; /*0x86969e*/
      if ( a3 ) /*0x8696a2*/
        ++v2[7].Unk08; /*0x8696a4*/
    }
    v60 = v361; /*0x8696a8*/
    LOBYTE(v362) = 1; /*0x8696ae*/
    if ( v361 ) /*0x8696b3*/
    {
      --v361[7].Unk08; /*0x8696b5*/
      if ( !v60[7].Unk08 ) /*0x8696bd*/
        sub_772560(v60); /*0x8696c2*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x8696ce*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x8696db*/
  }
  v61 = v359[0x28]; /*0x8696e4*/
  v62 = *(_DWORD *)(v1 + 0x58); /*0x8696ea*/
  if ( v62 != v61 ) /*0x8696ef*/
  {
    if ( v62 ) /*0x8696f3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) ) /*0x8696f9*/
        (**(void (__thiscall ***)(int, int))v62)(v62, 1); /*0x869710*/
    }
    *(_DWORD *)(v1 + 0x58) = v61; /*0x869714*/
    if ( v61 ) /*0x869717*/
      InterlockedIncrement((volatile LONG *)(v61 + 4)); /*0x86971d*/
  }
  v63 = v359[0x4B]; /*0x869727*/
  v64 = *(_DWORD *)(v1 + 0x44); /*0x86972d*/
  if ( v64 != v63 ) /*0x869732*/
  {
    if ( v64 ) /*0x869736*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v64 + 4)) ) /*0x86973c*/
        (**(void (__thiscall ***)(int, int))v64)(v64, 1); /*0x869753*/
    }
    *(_DWORD *)(v1 + 0x44) = v63; /*0x869757*/
    if ( v63 ) /*0x86975a*/
      InterlockedIncrement((volatile LONG *)(v63 + 4)); /*0x869760*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x869766*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x869771*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86977d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x869782*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86978d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x869799*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86979e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8697a9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8697b5*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8697ba*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8697c5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x8697d1*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8697d6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8697e1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x8697ed*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8697f2*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8697fd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x869809*/
  v4 = v1 == unk_B4766C; /*0x869811*/
  unk_B43D20 = 0x78088; /*0x869817*/
  unk_B443B0 = 0x10C; /*0x869821*/
  if ( !v4 ) /*0x86982b*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86982d*/
    if ( v4 ) /*0x869830*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x869834*/
    v1 = unk_B4766C; /*0x869839*/
    v360 = (NiD3DPassVtbl **)unk_B4766C; /*0x869841*/
    if ( v360 ) /*0x869845*/
      ++*(_DWORD *)(v1 + 0x60); /*0x869847*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86984f*/
  {
    v65 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869862*/
    v4 = v2 == (NiD3DTextureStage *)*v65; /*0x869864*/
    LOBYTE(v362) = 0x1A; /*0x869867*/
    if ( !v4 ) /*0x86986c*/
    {
      if ( v2 ) /*0x869870*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869872*/
        if ( v4 ) /*0x869875*/
          sub_772560(v2); /*0x869879*/
      }
      v2 = (NiD3DTextureStage *)*v65; /*0x86987e*/
      a3 = *v65; /*0x869883*/
      if ( a3 ) /*0x869887*/
        ++v2[7].Unk08; /*0x869889*/
    }
    v66 = v361; /*0x86988d*/
    LOBYTE(v362) = 1; /*0x869893*/
    if ( v361 ) /*0x869898*/
    {
      --v361[7].Unk08; /*0x86989a*/
      if ( !v66[7].Unk08 ) /*0x8698a2*/
        sub_772560(v66); /*0x8698a7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x8698b3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x8698c0*/
    v67 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x8698d2*/
    v4 = v2 == (NiD3DTextureStage *)*v67; /*0x8698d4*/
    LOBYTE(v362) = 0x1B; /*0x8698d7*/
    if ( !v4 ) /*0x8698dc*/
    {
      if ( v2 ) /*0x8698e0*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8698e2*/
        if ( v4 ) /*0x8698e5*/
          sub_772560(v2); /*0x8698e9*/
      }
      v2 = (NiD3DTextureStage *)*v67; /*0x8698ee*/
      a3 = *v67; /*0x8698f3*/
      if ( a3 ) /*0x8698f7*/
        ++v2[7].Unk08; /*0x8698f9*/
    }
    v68 = v361; /*0x8698fd*/
    LOBYTE(v362) = 1; /*0x869903*/
    if ( v361 ) /*0x869908*/
    {
      --v361[7].Unk08; /*0x86990a*/
      if ( !v68[7].Unk08 ) /*0x869912*/
        sub_772560(v68); /*0x869917*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x869923*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x869930*/
    v69 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869942*/
    v4 = v2 == (NiD3DTextureStage *)*v69; /*0x869944*/
    LOBYTE(v362) = 0x1C; /*0x869947*/
    if ( !v4 ) /*0x86994c*/
    {
      if ( v2 ) /*0x869950*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869952*/
        if ( v4 ) /*0x869955*/
          sub_772560(v2); /*0x869959*/
      }
      v2 = (NiD3DTextureStage *)*v69; /*0x86995e*/
      a3 = *v69; /*0x869963*/
      if ( a3 ) /*0x869967*/
        ++v2[7].Unk08; /*0x869969*/
    }
    v70 = v361; /*0x86996d*/
    LOBYTE(v362) = 1; /*0x869973*/
    if ( v361 ) /*0x869978*/
    {
      --v361[7].Unk08; /*0x86997a*/
      if ( !v70[7].Unk08 ) /*0x869982*/
        sub_772560(v70); /*0x869987*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x869993*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x8699a0*/
    v71 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x8699b2*/
    v4 = v2 == (NiD3DTextureStage *)*v71; /*0x8699b4*/
    LOBYTE(v362) = 0x1D; /*0x8699b7*/
    if ( !v4 ) /*0x8699bc*/
    {
      if ( v2 ) /*0x8699c0*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8699c2*/
        if ( v4 ) /*0x8699c5*/
          sub_772560(v2); /*0x8699c9*/
      }
      v2 = (NiD3DTextureStage *)*v71; /*0x8699ce*/
      a3 = *v71; /*0x8699d3*/
      if ( a3 ) /*0x8699d7*/
        ++v2[7].Unk08; /*0x8699d9*/
    }
    v72 = v361; /*0x8699dd*/
    LOBYTE(v362) = 1; /*0x8699e3*/
    if ( v361 ) /*0x8699e8*/
    {
      --v361[7].Unk08; /*0x8699ea*/
      if ( !v72[7].Unk08 ) /*0x8699f2*/
        sub_772560(v72); /*0x8699f7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x869a03*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x869a10*/
    v73 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869a22*/
    v4 = v2 == (NiD3DTextureStage *)*v73; /*0x869a24*/
    LOBYTE(v362) = 0x1E; /*0x869a27*/
    if ( !v4 ) /*0x869a2c*/
    {
      if ( v2 ) /*0x869a30*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869a32*/
        if ( v4 ) /*0x869a35*/
          sub_772560(v2); /*0x869a39*/
      }
      v2 = (NiD3DTextureStage *)*v73; /*0x869a3e*/
      a3 = *v73; /*0x869a43*/
      if ( a3 ) /*0x869a47*/
        ++v2[7].Unk08; /*0x869a49*/
    }
    v74 = v361; /*0x869a4d*/
    LOBYTE(v362) = 1; /*0x869a53*/
    if ( v361 ) /*0x869a58*/
    {
      --v361[7].Unk08; /*0x869a5a*/
      if ( !v74[7].Unk08 ) /*0x869a62*/
        sub_772560(v74); /*0x869a67*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x869a73*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x869a80*/
    v75 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869a92*/
    v4 = v2 == (NiD3DTextureStage *)*v75; /*0x869a94*/
    LOBYTE(v362) = 0x1F; /*0x869a97*/
    if ( !v4 ) /*0x869a9c*/
    {
      if ( v2 ) /*0x869aa0*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869aa2*/
        if ( v4 ) /*0x869aa5*/
          sub_772560(v2); /*0x869aa9*/
      }
      v2 = (NiD3DTextureStage *)*v75; /*0x869aae*/
      a3 = *v75; /*0x869ab3*/
      if ( a3 ) /*0x869ab7*/
        ++v2[7].Unk08; /*0x869ab9*/
    }
    v76 = v361; /*0x869abd*/
    LOBYTE(v362) = 1; /*0x869ac3*/
    if ( v361 ) /*0x869ac8*/
    {
      --v361[7].Unk08; /*0x869aca*/
      if ( !v76[7].Unk08 ) /*0x869ad2*/
        sub_772560(v76); /*0x869ad7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x869ae3*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x869af3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x869afd*/
    v77 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869b0f*/
    v4 = v2 == (NiD3DTextureStage *)*v77; /*0x869b11*/
    LOBYTE(v362) = 0x20; /*0x869b14*/
    if ( !v4 ) /*0x869b19*/
    {
      if ( v2 ) /*0x869b1d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869b1f*/
        if ( v4 ) /*0x869b22*/
          sub_772560(v2); /*0x869b26*/
      }
      v2 = (NiD3DTextureStage *)*v77; /*0x869b2b*/
      a3 = *v77; /*0x869b30*/
      if ( a3 ) /*0x869b34*/
        ++v2[7].Unk08; /*0x869b36*/
    }
    v78 = v361; /*0x869b3a*/
    LOBYTE(v362) = 1; /*0x869b40*/
    if ( v361 ) /*0x869b45*/
    {
      --v361[7].Unk08; /*0x869b47*/
      if ( !v78[7].Unk08 ) /*0x869b4f*/
        sub_772560(v78); /*0x869b54*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x869b60*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x869b6d*/
    v79 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869b7f*/
    v4 = v2 == (NiD3DTextureStage *)*v79; /*0x869b81*/
    LOBYTE(v362) = 0x21; /*0x869b84*/
    if ( !v4 ) /*0x869b89*/
    {
      if ( v2 ) /*0x869b8d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869b8f*/
        if ( v4 ) /*0x869b92*/
          sub_772560(v2); /*0x869b96*/
      }
      v2 = (NiD3DTextureStage *)*v79; /*0x869b9b*/
      a3 = *v79; /*0x869ba0*/
      if ( a3 ) /*0x869ba4*/
        ++v2[7].Unk08; /*0x869ba6*/
    }
    v80 = v361; /*0x869baa*/
    LOBYTE(v362) = 1; /*0x869bb0*/
    if ( v361 ) /*0x869bb5*/
    {
      --v361[7].Unk08; /*0x869bb7*/
      if ( !v80[7].Unk08 ) /*0x869bbf*/
        sub_772560(v80); /*0x869bc4*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x869bd0*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x869bdd*/
  }
  v81 = v359[0x28]; /*0x869be6*/
  v82 = *(_DWORD *)(v1 + 0x58); /*0x869bec*/
  if ( v82 != v81 ) /*0x869bf1*/
  {
    if ( v82 ) /*0x869bf5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v82 + 4)) ) /*0x869bfb*/
        (**(void (__thiscall ***)(int, int))v82)(v82, 1); /*0x869c12*/
    }
    *(_DWORD *)(v1 + 0x58) = v81; /*0x869c16*/
    if ( v81 ) /*0x869c19*/
      InterlockedIncrement((volatile LONG *)(v81 + 4)); /*0x869c1f*/
  }
  v83 = v359[0x4C]; /*0x869c29*/
  v84 = *(_DWORD *)(v1 + 0x44); /*0x869c2f*/
  if ( v84 != v83 ) /*0x869c34*/
  {
    if ( v84 ) /*0x869c38*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v84 + 4)) ) /*0x869c3e*/
        (**(void (__thiscall ***)(int, int))v84)(v84, 1); /*0x869c55*/
    }
    *(_DWORD *)(v1 + 0x44) = v83; /*0x869c59*/
    if ( v83 ) /*0x869c5c*/
      InterlockedIncrement((volatile LONG *)(v83 + 4)); /*0x869c62*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x869c68*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x869c73*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x869c7f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x869c84*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x869c8f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x869c9b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x869ca0*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x869cab*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x869cb7*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x869cbc*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x869cc7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x869cd3*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x869cd8*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x869ce3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x869cef*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x869cf4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x869cff*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x869d0b*/
  v4 = v1 == unk_B47670; /*0x869d13*/
  unk_B43D24 = 0x78088; /*0x869d19*/
  unk_B443B4 = 0x18C; /*0x869d23*/
  if ( !v4 ) /*0x869d2d*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x869d2f*/
    if ( v4 ) /*0x869d32*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x869d36*/
    v1 = unk_B47670; /*0x869d3b*/
    v360 = (NiD3DPassVtbl **)unk_B47670; /*0x869d43*/
    if ( v360 ) /*0x869d47*/
      ++*(_DWORD *)(v1 + 0x60); /*0x869d49*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x869d51*/
  {
    v85 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869d64*/
    v4 = v2 == (NiD3DTextureStage *)*v85; /*0x869d66*/
    LOBYTE(v362) = 0x22; /*0x869d69*/
    if ( !v4 ) /*0x869d6e*/
    {
      if ( v2 ) /*0x869d72*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869d74*/
        if ( v4 ) /*0x869d77*/
          sub_772560(v2); /*0x869d7b*/
      }
      v2 = (NiD3DTextureStage *)*v85; /*0x869d80*/
      a3 = *v85; /*0x869d85*/
      if ( a3 ) /*0x869d89*/
        ++v2[7].Unk08; /*0x869d8b*/
    }
    v86 = v361; /*0x869d8f*/
    LOBYTE(v362) = 1; /*0x869d95*/
    if ( v361 ) /*0x869d9a*/
    {
      --v361[7].Unk08; /*0x869d9c*/
      if ( !v86[7].Unk08 ) /*0x869da4*/
        sub_772560(v86); /*0x869da9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x869db5*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x869dc2*/
    v87 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869dd4*/
    v4 = v2 == (NiD3DTextureStage *)*v87; /*0x869dd6*/
    LOBYTE(v362) = 0x23; /*0x869dd9*/
    if ( !v4 ) /*0x869dde*/
    {
      if ( v2 ) /*0x869de2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869de4*/
        if ( v4 ) /*0x869de7*/
          sub_772560(v2); /*0x869deb*/
      }
      v2 = (NiD3DTextureStage *)*v87; /*0x869df0*/
      a3 = *v87; /*0x869df5*/
      if ( a3 ) /*0x869df9*/
        ++v2[7].Unk08; /*0x869dfb*/
    }
    v88 = v361; /*0x869dff*/
    LOBYTE(v362) = 1; /*0x869e05*/
    if ( v361 ) /*0x869e0a*/
    {
      --v361[7].Unk08; /*0x869e0c*/
      if ( !v88[7].Unk08 ) /*0x869e14*/
        sub_772560(v88); /*0x869e19*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x869e25*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x869e32*/
    v89 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869e44*/
    v4 = v2 == (NiD3DTextureStage *)*v89; /*0x869e46*/
    LOBYTE(v362) = 0x24; /*0x869e49*/
    if ( !v4 ) /*0x869e4e*/
    {
      if ( v2 ) /*0x869e52*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869e54*/
        if ( v4 ) /*0x869e57*/
          sub_772560(v2); /*0x869e5b*/
      }
      v2 = (NiD3DTextureStage *)*v89; /*0x869e60*/
      a3 = *v89; /*0x869e65*/
      if ( a3 ) /*0x869e69*/
        ++v2[7].Unk08; /*0x869e6b*/
    }
    v90 = v361; /*0x869e6f*/
    LOBYTE(v362) = 1; /*0x869e75*/
    if ( v361 ) /*0x869e7a*/
    {
      --v361[7].Unk08; /*0x869e7c*/
      if ( !v90[7].Unk08 ) /*0x869e84*/
        sub_772560(v90); /*0x869e89*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x869e95*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x869ea2*/
    v91 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869eb4*/
    v4 = v2 == (NiD3DTextureStage *)*v91; /*0x869eb6*/
    LOBYTE(v362) = 0x25; /*0x869eb9*/
    if ( !v4 ) /*0x869ebe*/
    {
      if ( v2 ) /*0x869ec2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869ec4*/
        if ( v4 ) /*0x869ec7*/
          sub_772560(v2); /*0x869ecb*/
      }
      v2 = (NiD3DTextureStage *)*v91; /*0x869ed0*/
      a3 = *v91; /*0x869ed5*/
      if ( a3 ) /*0x869ed9*/
        ++v2[7].Unk08; /*0x869edb*/
    }
    v92 = v361; /*0x869edf*/
    LOBYTE(v362) = 1; /*0x869ee5*/
    if ( v361 ) /*0x869eea*/
    {
      --v361[7].Unk08; /*0x869eec*/
      if ( !v92[7].Unk08 ) /*0x869ef4*/
        sub_772560(v92); /*0x869ef9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x869f05*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x869f12*/
    v93 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869f24*/
    v4 = v2 == (NiD3DTextureStage *)*v93; /*0x869f26*/
    LOBYTE(v362) = 0x26; /*0x869f29*/
    if ( !v4 ) /*0x869f2e*/
    {
      if ( v2 ) /*0x869f32*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869f34*/
        if ( v4 ) /*0x869f37*/
          sub_772560(v2); /*0x869f3b*/
      }
      v2 = (NiD3DTextureStage *)*v93; /*0x869f40*/
      a3 = *v93; /*0x869f45*/
      if ( a3 ) /*0x869f49*/
        ++v2[7].Unk08; /*0x869f4b*/
    }
    v94 = v361; /*0x869f4f*/
    LOBYTE(v362) = 1; /*0x869f55*/
    if ( v361 ) /*0x869f5a*/
    {
      --v361[7].Unk08; /*0x869f5c*/
      if ( !v94[7].Unk08 ) /*0x869f64*/
        sub_772560(v94); /*0x869f69*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x869f75*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x869f82*/
    v95 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x869f94*/
    v4 = v2 == (NiD3DTextureStage *)*v95; /*0x869f96*/
    LOBYTE(v362) = 0x27; /*0x869f99*/
    if ( !v4 ) /*0x869f9e*/
    {
      if ( v2 ) /*0x869fa2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x869fa4*/
        if ( v4 ) /*0x869fa7*/
          sub_772560(v2); /*0x869fab*/
      }
      v2 = (NiD3DTextureStage *)*v95; /*0x869fb0*/
      a3 = *v95; /*0x869fb5*/
      if ( a3 ) /*0x869fb9*/
        ++v2[7].Unk08; /*0x869fbb*/
    }
    v96 = v361; /*0x869fbf*/
    LOBYTE(v362) = 1; /*0x869fc5*/
    if ( v361 ) /*0x869fca*/
    {
      --v361[7].Unk08; /*0x869fcc*/
      if ( !v96[7].Unk08 ) /*0x869fd4*/
        sub_772560(v96); /*0x869fd9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x869fe5*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x869ff5*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x869fff*/
    v97 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a011*/
    v4 = v2 == (NiD3DTextureStage *)*v97; /*0x86a013*/
    LOBYTE(v362) = 0x28; /*0x86a016*/
    if ( !v4 ) /*0x86a01b*/
    {
      if ( v2 ) /*0x86a01f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86a021*/
        if ( v4 ) /*0x86a024*/
          sub_772560(v2); /*0x86a028*/
      }
      v2 = (NiD3DTextureStage *)*v97; /*0x86a02d*/
      a3 = *v97; /*0x86a032*/
      if ( a3 ) /*0x86a036*/
        ++v2[7].Unk08; /*0x86a038*/
    }
    v98 = v361; /*0x86a03c*/
    LOBYTE(v362) = 1; /*0x86a042*/
    if ( v361 ) /*0x86a047*/
    {
      --v361[7].Unk08; /*0x86a049*/
      if ( !v98[7].Unk08 ) /*0x86a051*/
        sub_772560(v98); /*0x86a056*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x86a062*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x86a06f*/
    v99 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a081*/
    v4 = v2 == (NiD3DTextureStage *)*v99; /*0x86a083*/
    LOBYTE(v362) = 0x29; /*0x86a086*/
    if ( !v4 ) /*0x86a08b*/
    {
      if ( v2 ) /*0x86a08f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86a091*/
        if ( v4 ) /*0x86a094*/
          sub_772560(v2); /*0x86a098*/
      }
      v2 = (NiD3DTextureStage *)*v99; /*0x86a09d*/
      a3 = *v99; /*0x86a0a2*/
      if ( a3 ) /*0x86a0a6*/
        ++v2[7].Unk08; /*0x86a0a8*/
    }
    v100 = v361; /*0x86a0ac*/
    LOBYTE(v362) = 1; /*0x86a0b2*/
    if ( v361 ) /*0x86a0b7*/
    {
      --v361[7].Unk08; /*0x86a0b9*/
      if ( !v100[7].Unk08 ) /*0x86a0c1*/
        sub_772560(v100); /*0x86a0c6*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x86a0d2*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86a0df*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v359[0x29]); /*0x86a0f1*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v359[0x4D]); /*0x86a0ff*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a104*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a10f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86a11b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a120*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a12b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86a137*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a13c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a147*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86a153*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a158*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a163*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86a16f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a174*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a17f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86a18b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a190*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a19b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86a1a7*/
  v4 = v1 == unk_B47674; /*0x86a1ac*/
  unk_B43D40 = 0x380F2; /*0x86a1b7*/
  unk_B443D0 = 0x10C; /*0x86a1bd*/
  if ( !v4 ) /*0x86a1c7*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86a1c9*/
    if ( v4 ) /*0x86a1cd*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86a1d1*/
    v1 = unk_B47674; /*0x86a1d6*/
    v360 = (NiD3DPassVtbl **)unk_B47674; /*0x86a1de*/
    if ( v360 ) /*0x86a1e2*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86a1e4*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86a1ec*/
  {
    v101 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a1ff*/
    v4 = v2 == (NiD3DTextureStage *)*v101; /*0x86a201*/
    LOBYTE(v362) = 0x2A; /*0x86a204*/
    if ( !v4 ) /*0x86a209*/
    {
      if ( v2 ) /*0x86a20d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86a20f*/
        if ( v4 ) /*0x86a213*/
          sub_772560(v2); /*0x86a217*/
      }
      v2 = (NiD3DTextureStage *)*v101; /*0x86a21c*/
      a3 = *v101; /*0x86a221*/
      if ( a3 ) /*0x86a225*/
        ++v2[7].Unk08; /*0x86a227*/
    }
    v102 = v361; /*0x86a22b*/
    LOBYTE(v362) = 1; /*0x86a231*/
    if ( v361 ) /*0x86a236*/
    {
      --v361[7].Unk08; /*0x86a238*/
      if ( !v102[7].Unk08 ) /*0x86a241*/
        sub_772560(v102); /*0x86a246*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x86a252*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x86a25f*/
    v103 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a271*/
    v4 = v2 == (NiD3DTextureStage *)*v103; /*0x86a273*/
    LOBYTE(v362) = 0x2B; /*0x86a276*/
    if ( !v4 ) /*0x86a27b*/
    {
      if ( v2 ) /*0x86a27f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86a281*/
        if ( v4 ) /*0x86a285*/
          sub_772560(v2); /*0x86a289*/
      }
      v2 = (NiD3DTextureStage *)*v103; /*0x86a28e*/
      a3 = *v103; /*0x86a293*/
      if ( a3 ) /*0x86a297*/
        ++v2[7].Unk08; /*0x86a299*/
    }
    v104 = v361; /*0x86a29d*/
    LOBYTE(v362) = 1; /*0x86a2a3*/
    if ( v361 ) /*0x86a2a8*/
    {
      --v361[7].Unk08; /*0x86a2aa*/
      if ( !v104[7].Unk08 ) /*0x86a2b3*/
        sub_772560(v104); /*0x86a2b8*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x86a2c4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x86a2d1*/
    v105 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a2e3*/
    v4 = v2 == (NiD3DTextureStage *)*v105; /*0x86a2e5*/
    LOBYTE(v362) = 0x2C; /*0x86a2e8*/
    if ( !v4 ) /*0x86a2ed*/
    {
      if ( v2 ) /*0x86a2f1*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86a2f3*/
        if ( v4 ) /*0x86a2f7*/
          sub_772560(v2); /*0x86a2fb*/
      }
      v2 = (NiD3DTextureStage *)*v105; /*0x86a300*/
      a3 = *v105; /*0x86a305*/
      if ( a3 ) /*0x86a309*/
        ++v2[7].Unk08; /*0x86a30b*/
    }
    v106 = v361; /*0x86a30f*/
    LOBYTE(v362) = 1; /*0x86a315*/
    if ( v361 ) /*0x86a31a*/
    {
      --v361[7].Unk08; /*0x86a31c*/
      if ( !v106[7].Unk08 ) /*0x86a325*/
        sub_772560(v106); /*0x86a32a*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x86a336*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x86a343*/
    v107 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a34d*/
    LOBYTE(v362) = 0x2D; /*0x86a35a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v107); /*0x86a35f*/
    v108 = v361; /*0x86a364*/
    LOBYTE(v362) = 1; /*0x86a36a*/
    if ( v361 ) /*0x86a36f*/
    {
      --v361[7].Unk08; /*0x86a371*/
      if ( !v108[7].Unk08 ) /*0x86a37a*/
        sub_772560(v108); /*0x86a37f*/
    }
    v109 = a3; /*0x86a384*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86a38f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v109); /*0x86a39c*/
    v110 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a3a6*/
    LOBYTE(v362) = 0x2E; /*0x86a3b3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v110); /*0x86a3b8*/
    v111 = v361; /*0x86a3bd*/
    LOBYTE(v362) = 1; /*0x86a3c3*/
    if ( v361 ) /*0x86a3c8*/
    {
      --v361[7].Unk08; /*0x86a3ca*/
      if ( !v111[7].Unk08 ) /*0x86a3d3*/
        sub_772560(v111); /*0x86a3d8*/
    }
    v112 = a3; /*0x86a3dd*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86a3e8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v112); /*0x86a3f5*/
    v113 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a3ff*/
    LOBYTE(v362) = 0x2F; /*0x86a40c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v113); /*0x86a411*/
    v114 = v361; /*0x86a416*/
    LOBYTE(v362) = 1; /*0x86a41c*/
    if ( v361 ) /*0x86a421*/
    {
      --v361[7].Unk08; /*0x86a423*/
      if ( !v114[7].Unk08 ) /*0x86a42c*/
        sub_772560(v114); /*0x86a431*/
    }
    v115 = (NiD3DTextureStage *)a3; /*0x86a436*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86a441*/
    NiD3DTextureStage_SetTexture(v115, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86a451*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v115->Stage); /*0x86a45b*/
    v116 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a465*/
    LOBYTE(v362) = 0x30; /*0x86a472*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v116); /*0x86a477*/
    v117 = v361; /*0x86a47c*/
    LOBYTE(v362) = 1; /*0x86a482*/
    if ( v361 ) /*0x86a487*/
    {
      --v361[7].Unk08; /*0x86a489*/
      if ( !v117[7].Unk08 ) /*0x86a492*/
        sub_772560(v117); /*0x86a497*/
    }
    v118 = a3; /*0x86a49c*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86a4a7*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v118); /*0x86a4b4*/
    v119 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a4be*/
    LOBYTE(v362) = 0x31; /*0x86a4cb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v119); /*0x86a4d0*/
    v120 = v361; /*0x86a4d5*/
    LOBYTE(v362) = 1; /*0x86a4db*/
    if ( v361 ) /*0x86a4e0*/
    {
      --v361[7].Unk08; /*0x86a4e2*/
      if ( !v120[7].Unk08 ) /*0x86a4eb*/
        sub_772560(v120); /*0x86a4f0*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86a4f5*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86a500*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86a50d*/
  }
  v121 = (NiD3DVertexShader **)v359; /*0x86a512*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v359[0x29]); /*0x86a51f*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, v121[0x4E]); /*0x86a52d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a532*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a53d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86a549*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a54e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a559*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86a565*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a56a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a575*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86a581*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a586*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a591*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86a59d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a5a2*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a5ad*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86a5b9*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a5be*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a5c9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86a5d5*/
  v4 = v1 == unk_B47678; /*0x86a5da*/
  unk_B43D44 = 0x380F2; /*0x86a5e0*/
  unk_B443D4 = 0x18C; /*0x86a5e6*/
  if ( !v4 ) /*0x86a5f0*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86a5f2*/
    if ( v4 ) /*0x86a5f6*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86a5fa*/
    v1 = unk_B47678; /*0x86a5ff*/
    v360 = (NiD3DPassVtbl **)unk_B47678; /*0x86a607*/
    if ( v360 ) /*0x86a60b*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86a60d*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86a615*/
  {
    v122 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a620*/
    LOBYTE(v362) = 0x32; /*0x86a62d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v122); /*0x86a632*/
    v123 = v361; /*0x86a637*/
    LOBYTE(v362) = 1; /*0x86a63d*/
    if ( v361 ) /*0x86a642*/
    {
      --v361[7].Unk08; /*0x86a644*/
      if ( !v123[7].Unk08 ) /*0x86a64d*/
        sub_772560(v123); /*0x86a652*/
    }
    v124 = a3; /*0x86a657*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86a662*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v124); /*0x86a66f*/
    v125 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a679*/
    LOBYTE(v362) = 0x33; /*0x86a686*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v125); /*0x86a68b*/
    v126 = v361; /*0x86a690*/
    LOBYTE(v362) = 1; /*0x86a696*/
    if ( v361 ) /*0x86a69b*/
    {
      --v361[7].Unk08; /*0x86a69d*/
      if ( !v126[7].Unk08 ) /*0x86a6a6*/
        sub_772560(v126); /*0x86a6ab*/
    }
    v127 = a3; /*0x86a6b0*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86a6bb*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v127); /*0x86a6c8*/
    v128 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a6d2*/
    LOBYTE(v362) = 0x34; /*0x86a6df*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v128); /*0x86a6e4*/
    v129 = v361; /*0x86a6e9*/
    LOBYTE(v362) = 1; /*0x86a6ef*/
    if ( v361 ) /*0x86a6f4*/
    {
      --v361[7].Unk08; /*0x86a6f6*/
      if ( !v129[7].Unk08 ) /*0x86a6ff*/
        sub_772560(v129); /*0x86a704*/
    }
    v130 = a3; /*0x86a709*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86a714*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v130); /*0x86a721*/
    v131 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a72b*/
    LOBYTE(v362) = 0x35; /*0x86a738*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v131); /*0x86a73d*/
    v132 = v361; /*0x86a742*/
    LOBYTE(v362) = 1; /*0x86a748*/
    if ( v361 ) /*0x86a74d*/
    {
      --v361[7].Unk08; /*0x86a74f*/
      if ( !v132[7].Unk08 ) /*0x86a758*/
        sub_772560(v132); /*0x86a75d*/
    }
    v133 = a3; /*0x86a762*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86a76d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v133); /*0x86a77a*/
    v134 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a784*/
    LOBYTE(v362) = 0x36; /*0x86a791*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v134); /*0x86a796*/
    v135 = v361; /*0x86a79b*/
    LOBYTE(v362) = 1; /*0x86a7a1*/
    if ( v361 ) /*0x86a7a6*/
    {
      --v361[7].Unk08; /*0x86a7a8*/
      if ( !v135[7].Unk08 ) /*0x86a7b1*/
        sub_772560(v135); /*0x86a7b6*/
    }
    v136 = a3; /*0x86a7bb*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86a7c6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v136); /*0x86a7d3*/
    v137 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a7dd*/
    LOBYTE(v362) = 0x37; /*0x86a7ea*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v137); /*0x86a7ef*/
    v138 = v361; /*0x86a7f4*/
    LOBYTE(v362) = 1; /*0x86a7fa*/
    if ( v361 ) /*0x86a7ff*/
    {
      --v361[7].Unk08; /*0x86a801*/
      if ( !v138[7].Unk08 ) /*0x86a80a*/
        sub_772560(v138); /*0x86a80f*/
    }
    v139 = (NiD3DTextureStage *)a3; /*0x86a814*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86a81f*/
    NiD3DTextureStage_SetTexture(v139, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86a82f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v139->Stage); /*0x86a839*/
    v140 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a843*/
    LOBYTE(v362) = 0x38; /*0x86a850*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v140); /*0x86a855*/
    v141 = v361; /*0x86a85a*/
    LOBYTE(v362) = 1; /*0x86a860*/
    if ( v361 ) /*0x86a865*/
    {
      --v361[7].Unk08; /*0x86a867*/
      if ( !v141[7].Unk08 ) /*0x86a870*/
        sub_772560(v141); /*0x86a875*/
    }
    v142 = a3; /*0x86a87a*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86a885*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v142); /*0x86a892*/
    v143 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86a89c*/
    LOBYTE(v362) = 0x39; /*0x86a8a9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v143); /*0x86a8ae*/
    v144 = v361; /*0x86a8b3*/
    LOBYTE(v362) = 1; /*0x86a8b9*/
    if ( v361 ) /*0x86a8be*/
    {
      --v361[7].Unk08; /*0x86a8c0*/
      if ( !v144[7].Unk08 ) /*0x86a8c9*/
        sub_772560(v144); /*0x86a8ce*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86a8d3*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86a8de*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86a8eb*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, v121[0x2A]); /*0x86a8f9*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, v121[0x4D]); /*0x86a907*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a90c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a917*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86a923*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a928*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a933*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86a93f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a944*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a94f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86a95b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a960*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a96b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86a977*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a97c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a987*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86a993*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86a998*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86a9a3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86a9af*/
  v4 = v1 == unk_B4767C; /*0x86a9b4*/
  unk_B43D44 = 0x780F8; /*0x86a9bf*/
  unk_B443D4 = 0x10C; /*0x86a9c5*/
  if ( !v4 ) /*0x86a9cf*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86a9d1*/
    if ( v4 ) /*0x86a9d5*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86a9d9*/
    v1 = unk_B4767C; /*0x86a9de*/
    v360 = (NiD3DPassVtbl **)unk_B4767C; /*0x86a9e6*/
    if ( v360 ) /*0x86a9ef*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86a9f1*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86a9ff*/
  {
    v145 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86aa0a*/
    LOBYTE(v362) = 0x3A; /*0x86aa17*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v145); /*0x86aa1c*/
    v146 = v361; /*0x86aa21*/
    LOBYTE(v362) = 1; /*0x86aa27*/
    if ( v361 ) /*0x86aa2c*/
    {
      --v361[7].Unk08; /*0x86aa2e*/
      if ( !v146[7].Unk08 ) /*0x86aa37*/
        sub_772560(v146); /*0x86aa3c*/
    }
    v147 = a3; /*0x86aa41*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86aa4b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v147); /*0x86aa58*/
    v148 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86aa62*/
    LOBYTE(v362) = 0x3B; /*0x86aa6f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v148); /*0x86aa74*/
    v149 = v361; /*0x86aa79*/
    LOBYTE(v362) = 1; /*0x86aa7f*/
    if ( v361 ) /*0x86aa84*/
    {
      --v361[7].Unk08; /*0x86aa86*/
      if ( !v149[7].Unk08 ) /*0x86aa8f*/
        sub_772560(v149); /*0x86aa94*/
    }
    v150 = a3; /*0x86aa99*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86aaa2*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v150); /*0x86aaae*/
    v151 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86aab8*/
    LOBYTE(v362) = 0x3C; /*0x86aac5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v151); /*0x86aaca*/
    v152 = v361; /*0x86aacf*/
    LOBYTE(v362) = 1; /*0x86aad5*/
    if ( v361 ) /*0x86aada*/
    {
      --v361[7].Unk08; /*0x86aadc*/
      if ( !v152[7].Unk08 ) /*0x86aae5*/
        sub_772560(v152); /*0x86aaea*/
    }
    v153 = a3; /*0x86aaef*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86aaf9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v153); /*0x86ab06*/
    v154 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ab10*/
    LOBYTE(v362) = 0x3D; /*0x86ab1d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v154); /*0x86ab22*/
    v155 = v361; /*0x86ab27*/
    LOBYTE(v362) = 1; /*0x86ab2d*/
    if ( v361 ) /*0x86ab32*/
    {
      --v361[7].Unk08; /*0x86ab34*/
      if ( !v155[7].Unk08 ) /*0x86ab3d*/
        sub_772560(v155); /*0x86ab42*/
    }
    v156 = a3; /*0x86ab47*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86ab51*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v156); /*0x86ab5e*/
    v157 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ab68*/
    LOBYTE(v362) = 0x3E; /*0x86ab75*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v157); /*0x86ab7a*/
    v158 = v361; /*0x86ab7f*/
    LOBYTE(v362) = 1; /*0x86ab85*/
    if ( v361 ) /*0x86ab8a*/
    {
      --v361[7].Unk08; /*0x86ab8c*/
      if ( !v158[7].Unk08 ) /*0x86ab95*/
        sub_772560(v158); /*0x86ab9a*/
    }
    v159 = a3; /*0x86ab9f*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86aba9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v159); /*0x86abb6*/
    v160 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86abc0*/
    LOBYTE(v362) = 0x3F; /*0x86abcd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v160); /*0x86abd2*/
    v161 = v361; /*0x86abd7*/
    LOBYTE(v362) = 1; /*0x86abdd*/
    if ( v361 ) /*0x86abe2*/
    {
      --v361[7].Unk08; /*0x86abe4*/
      if ( !v161[7].Unk08 ) /*0x86abed*/
        sub_772560(v161); /*0x86abf2*/
    }
    v162 = (NiD3DTextureStage *)a3; /*0x86abf7*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86ac02*/
    NiD3DTextureStage_SetTexture(v162, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86ac12*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v162->Stage); /*0x86ac1c*/
    v163 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ac26*/
    LOBYTE(v362) = 0x40; /*0x86ac33*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v163); /*0x86ac38*/
    v164 = v361; /*0x86ac3d*/
    LOBYTE(v362) = 1; /*0x86ac43*/
    if ( v361 ) /*0x86ac48*/
    {
      --v361[7].Unk08; /*0x86ac4a*/
      if ( !v164[7].Unk08 ) /*0x86ac53*/
        sub_772560(v164); /*0x86ac58*/
    }
    v165 = a3; /*0x86ac5d*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86ac67*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v165); /*0x86ac74*/
    v166 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ac7e*/
    LOBYTE(v362) = 0x41; /*0x86ac8b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v166); /*0x86ac90*/
    v167 = v361; /*0x86ac95*/
    LOBYTE(v362) = 1; /*0x86ac9b*/
    if ( v361 ) /*0x86aca0*/
    {
      --v361[7].Unk08; /*0x86aca2*/
      if ( !v167[7].Unk08 ) /*0x86acab*/
        sub_772560(v167); /*0x86acb0*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86acb5*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86acc0*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86accd*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v359[0x2A]); /*0x86acdf*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v359[0x4E]); /*0x86acf1*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86acf6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ad01*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86ad0d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86ad12*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ad1d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86ad29*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86ad2e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ad39*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86ad44*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86ad49*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ad54*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86ad60*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86ad65*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ad70*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86ad7b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86ad80*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ad8b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86ad97*/
  v4 = v1 == unk_B47680; /*0x86ad9c*/
  unk_B43D5C = 0x780F8; /*0x86ada2*/
  unk_B443EC = 0x18C; /*0x86ada8*/
  if ( !v4 ) /*0x86adb2*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86adb4*/
    if ( v4 ) /*0x86adb8*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86adbc*/
    v1 = unk_B47680; /*0x86adc1*/
    v360 = (NiD3DPassVtbl **)unk_B47680; /*0x86adc9*/
    if ( v360 ) /*0x86adcd*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86adcf*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86add6*/
  {
    v168 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ade1*/
    LOBYTE(v362) = 0x42; /*0x86adee*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v168); /*0x86adf3*/
    v169 = v361; /*0x86adf8*/
    LOBYTE(v362) = 1; /*0x86adfe*/
    if ( v361 ) /*0x86ae03*/
    {
      --v361[7].Unk08; /*0x86ae05*/
      if ( !v169[7].Unk08 ) /*0x86ae0e*/
        sub_772560(v169); /*0x86ae13*/
    }
    v170 = a3; /*0x86ae18*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86ae22*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v170); /*0x86ae2f*/
    v171 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ae39*/
    LOBYTE(v362) = 0x43; /*0x86ae46*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v171); /*0x86ae4b*/
    v172 = v361; /*0x86ae50*/
    LOBYTE(v362) = 1; /*0x86ae56*/
    if ( v361 ) /*0x86ae5b*/
    {
      --v361[7].Unk08; /*0x86ae5d*/
      if ( !v172[7].Unk08 ) /*0x86ae66*/
        sub_772560(v172); /*0x86ae6b*/
    }
    v173 = a3; /*0x86ae70*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86ae79*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v173); /*0x86ae85*/
    v174 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ae8f*/
    LOBYTE(v362) = 0x44; /*0x86ae9c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v174); /*0x86aea1*/
    v175 = v361; /*0x86aea6*/
    LOBYTE(v362) = 1; /*0x86aeac*/
    if ( v361 ) /*0x86aeb1*/
    {
      --v361[7].Unk08; /*0x86aeb3*/
      if ( !v175[7].Unk08 ) /*0x86aebc*/
        sub_772560(v175); /*0x86aec1*/
    }
    v176 = a3; /*0x86aec6*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86aed0*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v176); /*0x86aedd*/
    v177 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86aee7*/
    LOBYTE(v362) = 0x45; /*0x86aef4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v177); /*0x86aef9*/
    v178 = v361; /*0x86aefe*/
    LOBYTE(v362) = 1; /*0x86af04*/
    if ( v361 ) /*0x86af09*/
    {
      --v361[7].Unk08; /*0x86af0b*/
      if ( !v178[7].Unk08 ) /*0x86af14*/
        sub_772560(v178); /*0x86af19*/
    }
    v179 = a3; /*0x86af1e*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86af28*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v179); /*0x86af35*/
    v180 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86af3f*/
    LOBYTE(v362) = 0x46; /*0x86af4c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v180); /*0x86af51*/
    v181 = v361; /*0x86af56*/
    LOBYTE(v362) = 1; /*0x86af5c*/
    if ( v361 ) /*0x86af61*/
    {
      --v361[7].Unk08; /*0x86af63*/
      if ( !v181[7].Unk08 ) /*0x86af6c*/
        sub_772560(v181); /*0x86af71*/
    }
    v182 = a3; /*0x86af76*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86af80*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v182); /*0x86af8d*/
    v183 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86af97*/
    LOBYTE(v362) = 0x47; /*0x86afa4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v183); /*0x86afa9*/
    v184 = v361; /*0x86afae*/
    LOBYTE(v362) = 1; /*0x86afb4*/
    if ( v361 ) /*0x86afb9*/
    {
      --v361[7].Unk08; /*0x86afbb*/
      if ( !v184[7].Unk08 ) /*0x86afc4*/
        sub_772560(v184); /*0x86afc9*/
    }
    v185 = (NiD3DTextureStage *)a3; /*0x86afce*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86afd9*/
    NiD3DTextureStage_SetTexture(v185, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86afea*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v185->Stage); /*0x86aff4*/
    v186 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86affe*/
    LOBYTE(v362) = 0x48; /*0x86b00b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v186); /*0x86b010*/
    v187 = v361; /*0x86b015*/
    LOBYTE(v362) = 1; /*0x86b01b*/
    if ( v361 ) /*0x86b020*/
    {
      --v361[7].Unk08; /*0x86b022*/
      if ( !v187[7].Unk08 ) /*0x86b02b*/
        sub_772560(v187); /*0x86b030*/
    }
    v188 = a3; /*0x86b035*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86b03f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v188); /*0x86b04c*/
    v189 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b056*/
    LOBYTE(v362) = 0x49; /*0x86b063*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v189); /*0x86b068*/
    v190 = v361; /*0x86b06d*/
    LOBYTE(v362) = 1; /*0x86b073*/
    if ( v361 ) /*0x86b078*/
    {
      --v361[7].Unk08; /*0x86b07a*/
      if ( !v190[7].Unk08 ) /*0x86b083*/
        sub_772560(v190); /*0x86b088*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86b08d*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86b098*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86b0a5*/
  }
  v191 = v359; /*0x86b0aa*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v359[0x2B]); /*0x86b0b7*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v191[0x4F]); /*0x86b0c5*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b0ca*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b0d5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86b0e1*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b0e6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b0f1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86b0fd*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b102*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b10d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86b118*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b11d*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b128*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86b134*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b139*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b144*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86b14f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b154*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b15f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86b16b*/
  v4 = v1 == unk_B47684; /*0x86b170*/
  unk_B43D74 = 0x39082; /*0x86b17b*/
  unk_B44404 = 0x11C; /*0x86b181*/
  if ( !v4 ) /*0x86b18b*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86b18d*/
    if ( v4 ) /*0x86b191*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86b195*/
    v1 = unk_B47684; /*0x86b19a*/
    v360 = (NiD3DPassVtbl **)unk_B47684; /*0x86b1a2*/
    if ( v360 ) /*0x86b1a6*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86b1a8*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86b1af*/
  {
    v192 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b1ba*/
    LOBYTE(v362) = 0x4A; /*0x86b1c7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v192); /*0x86b1cc*/
    v193 = v361; /*0x86b1d1*/
    LOBYTE(v362) = 1; /*0x86b1d7*/
    if ( v361 ) /*0x86b1dc*/
    {
      --v361[7].Unk08; /*0x86b1de*/
      if ( !v193[7].Unk08 ) /*0x86b1e7*/
        sub_772560(v193); /*0x86b1ec*/
    }
    v194 = a3; /*0x86b1f1*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86b1fb*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v194); /*0x86b208*/
    v195 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b212*/
    LOBYTE(v362) = 0x4B; /*0x86b21f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v195); /*0x86b224*/
    v196 = v361; /*0x86b229*/
    LOBYTE(v362) = 1; /*0x86b22f*/
    if ( v361 ) /*0x86b234*/
    {
      --v361[7].Unk08; /*0x86b236*/
      if ( !v196[7].Unk08 ) /*0x86b23f*/
        sub_772560(v196); /*0x86b244*/
    }
    v197 = a3; /*0x86b249*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86b252*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v197); /*0x86b25e*/
    v198 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b268*/
    LOBYTE(v362) = 0x4C; /*0x86b275*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v198); /*0x86b27a*/
    v199 = v361; /*0x86b27f*/
    LOBYTE(v362) = 1; /*0x86b285*/
    if ( v361 ) /*0x86b28a*/
    {
      --v361[7].Unk08; /*0x86b28c*/
      if ( !v199[7].Unk08 ) /*0x86b295*/
        sub_772560(v199); /*0x86b29a*/
    }
    v200 = a3; /*0x86b29f*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86b2a9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v200); /*0x86b2b6*/
    v201 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b2c0*/
    LOBYTE(v362) = 0x4D; /*0x86b2cd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v201); /*0x86b2d2*/
    v202 = v361; /*0x86b2d7*/
    LOBYTE(v362) = 1; /*0x86b2dd*/
    if ( v361 ) /*0x86b2e2*/
    {
      --v361[7].Unk08; /*0x86b2e4*/
      if ( !v202[7].Unk08 ) /*0x86b2ed*/
        sub_772560(v202); /*0x86b2f2*/
    }
    v203 = a3; /*0x86b2f7*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86b301*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v203); /*0x86b30e*/
    v204 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b318*/
    LOBYTE(v362) = 0x4E; /*0x86b325*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v204); /*0x86b32a*/
    v205 = v361; /*0x86b32f*/
    LOBYTE(v362) = 1; /*0x86b335*/
    if ( v361 ) /*0x86b33a*/
    {
      --v361[7].Unk08; /*0x86b33c*/
      if ( !v205[7].Unk08 ) /*0x86b345*/
        sub_772560(v205); /*0x86b34a*/
    }
    v206 = a3; /*0x86b34f*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86b359*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v206); /*0x86b366*/
    v207 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b370*/
    LOBYTE(v362) = 0x4F; /*0x86b37d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v207); /*0x86b382*/
    v208 = v361; /*0x86b387*/
    LOBYTE(v362) = 1; /*0x86b38d*/
    if ( v361 ) /*0x86b392*/
    {
      --v361[7].Unk08; /*0x86b394*/
      if ( !v208[7].Unk08 ) /*0x86b39d*/
        sub_772560(v208); /*0x86b3a2*/
    }
    v209 = (NiD3DTextureStage *)a3; /*0x86b3a7*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86b3b2*/
    NiD3DTextureStage_SetTexture(v209, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86b3c3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v209->Stage); /*0x86b3cd*/
    v210 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b3d7*/
    LOBYTE(v362) = 0x50; /*0x86b3e4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v210); /*0x86b3e9*/
    v211 = v361; /*0x86b3ee*/
    LOBYTE(v362) = 1; /*0x86b3f4*/
    if ( v361 ) /*0x86b3f9*/
    {
      --v361[7].Unk08; /*0x86b3fb*/
      if ( !v211[7].Unk08 ) /*0x86b404*/
        sub_772560(v211); /*0x86b409*/
    }
    v212 = a3; /*0x86b40e*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86b418*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v212); /*0x86b425*/
    v213 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b42f*/
    LOBYTE(v362) = 0x51; /*0x86b43c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v213); /*0x86b441*/
    v214 = v361; /*0x86b446*/
    LOBYTE(v362) = 1; /*0x86b44c*/
    if ( v361 ) /*0x86b451*/
    {
      --v361[7].Unk08; /*0x86b453*/
      if ( !v214[7].Unk08 ) /*0x86b45c*/
        sub_772560(v214); /*0x86b461*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86b466*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86b471*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86b47e*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v359[0x2B]); /*0x86b490*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v359[0x50]); /*0x86b4a2*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b4a7*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b4b2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86b4be*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b4c3*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b4ce*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86b4da*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b4df*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b4ea*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86b4f5*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b4fa*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b505*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86b511*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b516*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b521*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86b52c*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b531*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b53c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86b548*/
  v4 = v1 == unk_B47688; /*0x86b54d*/
  unk_B43D78 = 0x39082; /*0x86b553*/
  unk_B44408 = 0x19C; /*0x86b559*/
  if ( !v4 ) /*0x86b563*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86b565*/
    if ( v4 ) /*0x86b569*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86b56d*/
    v1 = unk_B47688; /*0x86b572*/
    v360 = (NiD3DPassVtbl **)unk_B47688; /*0x86b57a*/
    if ( v360 ) /*0x86b57e*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86b580*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86b587*/
  {
    v215 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b592*/
    LOBYTE(v362) = 0x52; /*0x86b59f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v215); /*0x86b5a4*/
    v216 = v361; /*0x86b5a9*/
    LOBYTE(v362) = 1; /*0x86b5af*/
    if ( v361 ) /*0x86b5b4*/
    {
      --v361[7].Unk08; /*0x86b5b6*/
      if ( !v216[7].Unk08 ) /*0x86b5bf*/
        sub_772560(v216); /*0x86b5c4*/
    }
    v217 = a3; /*0x86b5c9*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86b5d3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v217); /*0x86b5e0*/
    v218 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b5ea*/
    LOBYTE(v362) = 0x53; /*0x86b5f7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v218); /*0x86b5fc*/
    v219 = v361; /*0x86b601*/
    LOBYTE(v362) = 1; /*0x86b607*/
    if ( v361 ) /*0x86b60c*/
    {
      --v361[7].Unk08; /*0x86b60e*/
      if ( !v219[7].Unk08 ) /*0x86b617*/
        sub_772560(v219); /*0x86b61c*/
    }
    v220 = a3; /*0x86b621*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86b62a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v220); /*0x86b636*/
    v221 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b640*/
    LOBYTE(v362) = 0x54; /*0x86b64d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v221); /*0x86b652*/
    v222 = v361; /*0x86b657*/
    LOBYTE(v362) = 1; /*0x86b65d*/
    if ( v361 ) /*0x86b662*/
    {
      --v361[7].Unk08; /*0x86b664*/
      if ( !v222[7].Unk08 ) /*0x86b66d*/
        sub_772560(v222); /*0x86b672*/
    }
    v223 = a3; /*0x86b677*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86b681*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v223); /*0x86b68e*/
    v224 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b698*/
    LOBYTE(v362) = 0x55; /*0x86b6a5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v224); /*0x86b6aa*/
    v225 = v361; /*0x86b6af*/
    LOBYTE(v362) = 1; /*0x86b6b5*/
    if ( v361 ) /*0x86b6ba*/
    {
      --v361[7].Unk08; /*0x86b6bc*/
      if ( !v225[7].Unk08 ) /*0x86b6c5*/
        sub_772560(v225); /*0x86b6ca*/
    }
    v226 = a3; /*0x86b6cf*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86b6d9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v226); /*0x86b6e6*/
    v227 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b6f0*/
    LOBYTE(v362) = 0x56; /*0x86b6fd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v227); /*0x86b702*/
    v228 = v361; /*0x86b707*/
    LOBYTE(v362) = 1; /*0x86b70d*/
    if ( v361 ) /*0x86b712*/
    {
      --v361[7].Unk08; /*0x86b714*/
      if ( !v228[7].Unk08 ) /*0x86b71d*/
        sub_772560(v228); /*0x86b722*/
    }
    v229 = a3; /*0x86b727*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86b731*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v229); /*0x86b73e*/
    v230 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b748*/
    LOBYTE(v362) = 0x57; /*0x86b755*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v230); /*0x86b75a*/
    v231 = v361; /*0x86b75f*/
    LOBYTE(v362) = 1; /*0x86b765*/
    if ( v361 ) /*0x86b76a*/
    {
      --v361[7].Unk08; /*0x86b76c*/
      if ( !v231[7].Unk08 ) /*0x86b775*/
        sub_772560(v231); /*0x86b77a*/
    }
    v232 = (NiD3DTextureStage *)a3; /*0x86b77f*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86b78a*/
    NiD3DTextureStage_SetTexture(v232, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86b79b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v232->Stage); /*0x86b7a5*/
    v233 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b7af*/
    LOBYTE(v362) = 0x58; /*0x86b7bc*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v233); /*0x86b7c1*/
    v234 = v361; /*0x86b7c6*/
    LOBYTE(v362) = 1; /*0x86b7cc*/
    if ( v361 ) /*0x86b7d1*/
    {
      --v361[7].Unk08; /*0x86b7d3*/
      if ( !v234[7].Unk08 ) /*0x86b7dc*/
        sub_772560(v234); /*0x86b7e1*/
    }
    v235 = a3; /*0x86b7e6*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86b7f0*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v235); /*0x86b7fd*/
    v236 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b807*/
    LOBYTE(v362) = 0x59; /*0x86b814*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v236); /*0x86b819*/
    v237 = v361; /*0x86b81e*/
    LOBYTE(v362) = 1; /*0x86b824*/
    if ( v361 ) /*0x86b829*/
    {
      --v361[7].Unk08; /*0x86b82b*/
      if ( !v237[7].Unk08 ) /*0x86b834*/
        sub_772560(v237); /*0x86b839*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86b83e*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86b849*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86b856*/
  }
  v238 = v359; /*0x86b85b*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v359[0x2C]); /*0x86b868*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v238[0x4F]); /*0x86b876*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b87b*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b886*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86b892*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b897*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b8a2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86b8ae*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b8b3*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b8be*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86b8c9*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b8ce*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b8d9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86b8e5*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b8ea*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b8f5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86b900*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86b905*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86b910*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86b91c*/
  v4 = v1 == unk_B4768C; /*0x86b921*/
  unk_B43D8C = 0x79088; /*0x86b92c*/
  unk_B4441C = 0x11C; /*0x86b932*/
  if ( !v4 ) /*0x86b93c*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86b93e*/
    if ( v4 ) /*0x86b942*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86b946*/
    v1 = unk_B4768C; /*0x86b94b*/
    v360 = (NiD3DPassVtbl **)unk_B4768C; /*0x86b953*/
    if ( v360 ) /*0x86b957*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86b959*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86b960*/
  {
    v239 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b96b*/
    LOBYTE(v362) = 0x5A; /*0x86b978*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v239); /*0x86b97d*/
    v240 = v361; /*0x86b982*/
    LOBYTE(v362) = 1; /*0x86b988*/
    if ( v361 ) /*0x86b98d*/
    {
      --v361[7].Unk08; /*0x86b98f*/
      if ( !v240[7].Unk08 ) /*0x86b998*/
        sub_772560(v240); /*0x86b99d*/
    }
    v241 = a3; /*0x86b9a2*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86b9ac*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v241); /*0x86b9b9*/
    v242 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86b9c3*/
    LOBYTE(v362) = 0x5B; /*0x86b9d0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v242); /*0x86b9d5*/
    v243 = v361; /*0x86b9da*/
    LOBYTE(v362) = 1; /*0x86b9e0*/
    if ( v361 ) /*0x86b9e5*/
    {
      --v361[7].Unk08; /*0x86b9e7*/
      if ( !v243[7].Unk08 ) /*0x86b9f0*/
        sub_772560(v243); /*0x86b9f5*/
    }
    v244 = a3; /*0x86b9fa*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86ba03*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v244); /*0x86ba0f*/
    v245 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ba19*/
    LOBYTE(v362) = 0x5C; /*0x86ba26*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v245); /*0x86ba2b*/
    v246 = v361; /*0x86ba30*/
    LOBYTE(v362) = 1; /*0x86ba36*/
    if ( v361 ) /*0x86ba3b*/
    {
      --v361[7].Unk08; /*0x86ba3d*/
      if ( !v246[7].Unk08 ) /*0x86ba46*/
        sub_772560(v246); /*0x86ba4b*/
    }
    v247 = a3; /*0x86ba50*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86ba5a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v247); /*0x86ba67*/
    v248 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ba71*/
    LOBYTE(v362) = 0x5D; /*0x86ba7e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v248); /*0x86ba83*/
    v249 = v361; /*0x86ba88*/
    LOBYTE(v362) = 1; /*0x86ba8e*/
    if ( v361 ) /*0x86ba93*/
    {
      --v361[7].Unk08; /*0x86ba95*/
      if ( !v249[7].Unk08 ) /*0x86ba9e*/
        sub_772560(v249); /*0x86baa3*/
    }
    v250 = a3; /*0x86baa8*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86bab2*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v250); /*0x86babf*/
    v251 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bac9*/
    LOBYTE(v362) = 0x5E; /*0x86bad6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v251); /*0x86badb*/
    v252 = v361; /*0x86bae0*/
    LOBYTE(v362) = 1; /*0x86bae6*/
    if ( v361 ) /*0x86baeb*/
    {
      --v361[7].Unk08; /*0x86baed*/
      if ( !v252[7].Unk08 ) /*0x86baf6*/
        sub_772560(v252); /*0x86bafb*/
    }
    v253 = a3; /*0x86bb00*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86bb0a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v253); /*0x86bb17*/
    v254 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bb21*/
    LOBYTE(v362) = 0x5F; /*0x86bb2e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v254); /*0x86bb33*/
    v255 = v361; /*0x86bb38*/
    LOBYTE(v362) = 1; /*0x86bb3e*/
    if ( v361 ) /*0x86bb43*/
    {
      --v361[7].Unk08; /*0x86bb45*/
      if ( !v255[7].Unk08 ) /*0x86bb4e*/
        sub_772560(v255); /*0x86bb53*/
    }
    v256 = (NiD3DTextureStage *)a3; /*0x86bb58*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86bb63*/
    NiD3DTextureStage_SetTexture(v256, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86bb74*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v256->Stage); /*0x86bb7e*/
    v257 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bb88*/
    LOBYTE(v362) = 0x60; /*0x86bb95*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v257); /*0x86bb9a*/
    v258 = v361; /*0x86bb9f*/
    LOBYTE(v362) = 1; /*0x86bba5*/
    if ( v361 ) /*0x86bbaa*/
    {
      --v361[7].Unk08; /*0x86bbac*/
      if ( !v258[7].Unk08 ) /*0x86bbb5*/
        sub_772560(v258); /*0x86bbba*/
    }
    v259 = a3; /*0x86bbbf*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86bbc9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v259); /*0x86bbd6*/
    v260 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bbe0*/
    LOBYTE(v362) = 0x61; /*0x86bbed*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v260); /*0x86bbf2*/
    v261 = v361; /*0x86bbf7*/
    LOBYTE(v362) = 1; /*0x86bbfd*/
    if ( v361 ) /*0x86bc02*/
    {
      --v361[7].Unk08; /*0x86bc04*/
      if ( !v261[7].Unk08 ) /*0x86bc0d*/
        sub_772560(v261); /*0x86bc12*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86bc17*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86bc22*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86bc2f*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v359[0x2C]); /*0x86bc41*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v359[0x50]); /*0x86bc53*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86bc58*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86bc63*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86bc6f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86bc74*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86bc7f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86bc8b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86bc90*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86bc9b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86bca6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86bcab*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86bcb6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86bcc2*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86bcc7*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86bcd2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86bcdd*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86bce2*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86bced*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86bcf9*/
  v4 = v1 == unk_B47690; /*0x86bcfe*/
  unk_B43D90 = 0x79088; /*0x86bd04*/
  unk_B44420 = 0x19C; /*0x86bd0a*/
  if ( !v4 ) /*0x86bd14*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86bd16*/
    if ( v4 ) /*0x86bd1a*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86bd1e*/
    v1 = unk_B47690; /*0x86bd23*/
    v360 = (NiD3DPassVtbl **)unk_B47690; /*0x86bd2b*/
    if ( v360 ) /*0x86bd2f*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86bd31*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86bd38*/
  {
    v262 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bd43*/
    LOBYTE(v362) = 0x62; /*0x86bd50*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v262); /*0x86bd55*/
    v263 = v361; /*0x86bd5a*/
    LOBYTE(v362) = 1; /*0x86bd60*/
    if ( v361 ) /*0x86bd65*/
    {
      --v361[7].Unk08; /*0x86bd67*/
      if ( !v263[7].Unk08 ) /*0x86bd70*/
        sub_772560(v263); /*0x86bd75*/
    }
    v264 = a3; /*0x86bd7a*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86bd84*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v264); /*0x86bd91*/
    v265 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bd9b*/
    LOBYTE(v362) = 0x63; /*0x86bda8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v265); /*0x86bdad*/
    v266 = v361; /*0x86bdb2*/
    LOBYTE(v362) = 1; /*0x86bdb8*/
    if ( v361 ) /*0x86bdbd*/
    {
      --v361[7].Unk08; /*0x86bdbf*/
      if ( !v266[7].Unk08 ) /*0x86bdc8*/
        sub_772560(v266); /*0x86bdcd*/
    }
    v267 = a3; /*0x86bdd2*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86bddb*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v267); /*0x86bde7*/
    v268 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bdf1*/
    LOBYTE(v362) = 0x64; /*0x86bdfe*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v268); /*0x86be03*/
    v269 = v361; /*0x86be08*/
    LOBYTE(v362) = 1; /*0x86be0e*/
    if ( v361 ) /*0x86be13*/
    {
      --v361[7].Unk08; /*0x86be15*/
      if ( !v269[7].Unk08 ) /*0x86be1e*/
        sub_772560(v269); /*0x86be23*/
    }
    v270 = a3; /*0x86be28*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86be32*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v270); /*0x86be3f*/
    v271 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86be49*/
    LOBYTE(v362) = 0x65; /*0x86be56*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v271); /*0x86be5b*/
    v272 = v361; /*0x86be60*/
    LOBYTE(v362) = 1; /*0x86be66*/
    if ( v361 ) /*0x86be6b*/
    {
      --v361[7].Unk08; /*0x86be6d*/
      if ( !v272[7].Unk08 ) /*0x86be76*/
        sub_772560(v272); /*0x86be7b*/
    }
    v273 = a3; /*0x86be80*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86be8a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v273); /*0x86be97*/
    v274 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bea1*/
    LOBYTE(v362) = 0x66; /*0x86beae*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v274); /*0x86beb3*/
    v275 = v361; /*0x86beb8*/
    LOBYTE(v362) = 1; /*0x86bebe*/
    if ( v361 ) /*0x86bec3*/
    {
      --v361[7].Unk08; /*0x86bec5*/
      if ( !v275[7].Unk08 ) /*0x86bece*/
        sub_772560(v275); /*0x86bed3*/
    }
    v276 = a3; /*0x86bed8*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86bee2*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v276); /*0x86beef*/
    v277 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bef9*/
    LOBYTE(v362) = 0x67; /*0x86bf06*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v277); /*0x86bf0b*/
    v278 = v361; /*0x86bf10*/
    LOBYTE(v362) = 1; /*0x86bf16*/
    if ( v361 ) /*0x86bf1b*/
    {
      --v361[7].Unk08; /*0x86bf1d*/
      if ( !v278[7].Unk08 ) /*0x86bf26*/
        sub_772560(v278); /*0x86bf2b*/
    }
    v279 = (NiD3DTextureStage *)a3; /*0x86bf30*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86bf3b*/
    NiD3DTextureStage_SetTexture(v279, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86bf4b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v279->Stage); /*0x86bf55*/
    v280 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bf5f*/
    LOBYTE(v362) = 0x68; /*0x86bf6c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v280); /*0x86bf71*/
    v281 = v361; /*0x86bf76*/
    LOBYTE(v362) = 1; /*0x86bf7c*/
    if ( v361 ) /*0x86bf81*/
    {
      --v361[7].Unk08; /*0x86bf83*/
      if ( !v281[7].Unk08 ) /*0x86bf8c*/
        sub_772560(v281); /*0x86bf91*/
    }
    v282 = a3; /*0x86bf96*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86bfa0*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v282); /*0x86bfad*/
    v283 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86bfb7*/
    LOBYTE(v362) = 0x69; /*0x86bfc4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v283); /*0x86bfc9*/
    v284 = v361; /*0x86bfce*/
    LOBYTE(v362) = 1; /*0x86bfd4*/
    if ( v361 ) /*0x86bfd9*/
    {
      --v361[7].Unk08; /*0x86bfdb*/
      if ( !v284[7].Unk08 ) /*0x86bfe4*/
        sub_772560(v284); /*0x86bfe9*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86bfee*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86bff9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86c006*/
  }
  v285 = v359; /*0x86c00b*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v359[0x2D]); /*0x86c018*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v285[0x51]); /*0x86c026*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c02b*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c036*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86c042*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c047*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c052*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86c05e*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c063*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c06e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86c079*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c07e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c089*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86c095*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c09a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c0a5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86c0b0*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c0b5*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c0c0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86c0cc*/
  v4 = v1 == unk_B47694; /*0x86c0d1*/
  unk_B43DA8 = 0x390F2; /*0x86c0dc*/
  unk_B44438 = 0x11C; /*0x86c0e2*/
  if ( !v4 ) /*0x86c0ec*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86c0ee*/
    if ( v4 ) /*0x86c0f2*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86c0f6*/
    v1 = unk_B47694; /*0x86c0fb*/
    v360 = (NiD3DPassVtbl **)unk_B47694; /*0x86c103*/
    if ( v360 ) /*0x86c107*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86c109*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86c110*/
  {
    v286 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c11b*/
    LOBYTE(v362) = 0x6A; /*0x86c128*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v286); /*0x86c12d*/
    v287 = v361; /*0x86c132*/
    LOBYTE(v362) = 1; /*0x86c138*/
    if ( v361 ) /*0x86c13d*/
    {
      --v361[7].Unk08; /*0x86c13f*/
      if ( !v287[7].Unk08 ) /*0x86c148*/
        sub_772560(v287); /*0x86c14d*/
    }
    v288 = a3; /*0x86c152*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86c15c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v288); /*0x86c169*/
    v289 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c173*/
    LOBYTE(v362) = 0x6B; /*0x86c180*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v289); /*0x86c185*/
    v290 = v361; /*0x86c18a*/
    LOBYTE(v362) = 1; /*0x86c190*/
    if ( v361 ) /*0x86c195*/
    {
      --v361[7].Unk08; /*0x86c197*/
      if ( !v290[7].Unk08 ) /*0x86c1a0*/
        sub_772560(v290); /*0x86c1a5*/
    }
    v291 = a3; /*0x86c1aa*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86c1b3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v291); /*0x86c1bf*/
    v292 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c1c9*/
    LOBYTE(v362) = 0x6C; /*0x86c1d6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v292); /*0x86c1db*/
    v293 = v361; /*0x86c1e0*/
    LOBYTE(v362) = 1; /*0x86c1e6*/
    if ( v361 ) /*0x86c1eb*/
    {
      --v361[7].Unk08; /*0x86c1ed*/
      if ( !v293[7].Unk08 ) /*0x86c1f6*/
        sub_772560(v293); /*0x86c1fb*/
    }
    v294 = a3; /*0x86c200*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86c20a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v294); /*0x86c217*/
    v295 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c221*/
    LOBYTE(v362) = 0x6D; /*0x86c22e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v295); /*0x86c233*/
    v296 = v361; /*0x86c238*/
    LOBYTE(v362) = 1; /*0x86c23e*/
    if ( v361 ) /*0x86c243*/
    {
      --v361[7].Unk08; /*0x86c245*/
      if ( !v296[7].Unk08 ) /*0x86c24e*/
        sub_772560(v296); /*0x86c253*/
    }
    v297 = a3; /*0x86c258*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86c262*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v297); /*0x86c26f*/
    v298 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c279*/
    LOBYTE(v362) = 0x6E; /*0x86c286*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v298); /*0x86c28b*/
    v299 = v361; /*0x86c290*/
    LOBYTE(v362) = 1; /*0x86c296*/
    if ( v361 ) /*0x86c29b*/
    {
      --v361[7].Unk08; /*0x86c29d*/
      if ( !v299[7].Unk08 ) /*0x86c2a6*/
        sub_772560(v299); /*0x86c2ab*/
    }
    v300 = a3; /*0x86c2b0*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86c2ba*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v300); /*0x86c2c7*/
    v301 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c2d1*/
    LOBYTE(v362) = 0x6F; /*0x86c2de*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v301); /*0x86c2e3*/
    v302 = v361; /*0x86c2e8*/
    LOBYTE(v362) = 1; /*0x86c2ee*/
    if ( v361 ) /*0x86c2f3*/
    {
      --v361[7].Unk08; /*0x86c2f5*/
      if ( !v302[7].Unk08 ) /*0x86c2fe*/
        sub_772560(v302); /*0x86c303*/
    }
    v303 = (NiD3DTextureStage *)a3; /*0x86c308*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86c313*/
    NiD3DTextureStage_SetTexture(v303, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86c323*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v303->Stage); /*0x86c32d*/
    v304 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c337*/
    LOBYTE(v362) = 0x70; /*0x86c344*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v304); /*0x86c349*/
    v305 = v361; /*0x86c34e*/
    LOBYTE(v362) = 1; /*0x86c354*/
    if ( v361 ) /*0x86c359*/
    {
      --v361[7].Unk08; /*0x86c35b*/
      if ( !v305[7].Unk08 ) /*0x86c364*/
        sub_772560(v305); /*0x86c369*/
    }
    v306 = a3; /*0x86c36e*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86c378*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v306); /*0x86c385*/
    v307 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c38f*/
    LOBYTE(v362) = 0x71; /*0x86c39c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v307); /*0x86c3a1*/
    v308 = v361; /*0x86c3a6*/
    LOBYTE(v362) = 1; /*0x86c3ac*/
    if ( v361 ) /*0x86c3b1*/
    {
      --v361[7].Unk08; /*0x86c3b3*/
      if ( !v308[7].Unk08 ) /*0x86c3bc*/
        sub_772560(v308); /*0x86c3c1*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86c3c6*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86c3d1*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86c3de*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v359[0x2D]); /*0x86c3f0*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v359[0x52]); /*0x86c402*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c407*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c412*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86c41e*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c423*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c42e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86c43a*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c43f*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c44a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86c455*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c45a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c465*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86c471*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c476*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c481*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86c48c*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86c491*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86c49c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86c4a8*/
  unk_B43DAC = 0x390F2; /*0x86c4b6*/
  unk_B4443C = 0x19C; /*0x86c4bc*/
  sub_76C890((NiD3DPass **)&v360, &dword_B47698); /*0x86c4c6*/
  v309 = v360; /*0x86c4cb*/
  if ( (unsigned int)v360[6] < 8 ) /*0x86c4d3*/
  {
    v310 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c4de*/
    LOBYTE(v362) = 0x72; /*0x86c4eb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v310); /*0x86c4f0*/
    v311 = v361; /*0x86c4f5*/
    LOBYTE(v362) = 1; /*0x86c4fb*/
    if ( v361 ) /*0x86c500*/
    {
      --v361[7].Unk08; /*0x86c502*/
      if ( !v311[7].Unk08 ) /*0x86c50b*/
        sub_772560(v311); /*0x86c510*/
    }
    v312 = a3; /*0x86c515*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86c51f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v309, 0, v312); /*0x86c52c*/
    v313 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c536*/
    LOBYTE(v362) = 0x73; /*0x86c543*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v313); /*0x86c548*/
    v314 = v361; /*0x86c54d*/
    LOBYTE(v362) = 1; /*0x86c553*/
    if ( v361 ) /*0x86c558*/
    {
      --v361[7].Unk08; /*0x86c55a*/
      if ( !v314[7].Unk08 ) /*0x86c563*/
        sub_772560(v314); /*0x86c568*/
    }
    v315 = a3; /*0x86c56d*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86c576*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v309, 1u, v315); /*0x86c582*/
    v316 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c58c*/
    LOBYTE(v362) = 0x74; /*0x86c599*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v316); /*0x86c59e*/
    v317 = v361; /*0x86c5a3*/
    LOBYTE(v362) = 1; /*0x86c5a9*/
    if ( v361 ) /*0x86c5ae*/
    {
      --v361[7].Unk08; /*0x86c5b0*/
      if ( !v317[7].Unk08 ) /*0x86c5b9*/
        sub_772560(v317); /*0x86c5be*/
    }
    v318 = a3; /*0x86c5c3*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86c5cd*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v309, 2u, v318); /*0x86c5da*/
    v319 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c5e4*/
    LOBYTE(v362) = 0x75; /*0x86c5f1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v319); /*0x86c5f6*/
    v320 = v361; /*0x86c5fb*/
    LOBYTE(v362) = 1; /*0x86c601*/
    if ( v361 ) /*0x86c606*/
    {
      --v361[7].Unk08; /*0x86c608*/
      if ( !v320[7].Unk08 ) /*0x86c611*/
        sub_772560(v320); /*0x86c616*/
    }
    v321 = a3; /*0x86c61b*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86c625*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v309, 3u, v321); /*0x86c632*/
    v322 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c63c*/
    LOBYTE(v362) = 0x76; /*0x86c649*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v322); /*0x86c64e*/
    v323 = v361; /*0x86c653*/
    LOBYTE(v362) = 1; /*0x86c659*/
    if ( v361 ) /*0x86c65e*/
    {
      --v361[7].Unk08; /*0x86c660*/
      if ( !v323[7].Unk08 ) /*0x86c669*/
        sub_772560(v323); /*0x86c66e*/
    }
    v324 = a3; /*0x86c673*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86c67d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v309, 4u, v324); /*0x86c68a*/
    v325 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c694*/
    LOBYTE(v362) = 0x77; /*0x86c6a1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v325); /*0x86c6a6*/
    v326 = v361; /*0x86c6ab*/
    LOBYTE(v362) = 1; /*0x86c6b1*/
    if ( v361 ) /*0x86c6b6*/
    {
      --v361[7].Unk08; /*0x86c6b8*/
      if ( !v326[7].Unk08 ) /*0x86c6c1*/
        sub_772560(v326); /*0x86c6c6*/
    }
    v327 = (NiD3DTextureStage *)a3; /*0x86c6cb*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86c6d6*/
    NiD3DTextureStage_SetTexture(v327, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86c6e7*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v309, 5u, &v327->Stage); /*0x86c6f1*/
    v328 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c6fb*/
    LOBYTE(v362) = 0x78; /*0x86c708*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v328); /*0x86c70d*/
    v329 = v361; /*0x86c712*/
    LOBYTE(v362) = 1; /*0x86c718*/
    if ( v361 ) /*0x86c71d*/
    {
      --v361[7].Unk08; /*0x86c71f*/
      if ( !v329[7].Unk08 ) /*0x86c728*/
        sub_772560(v329); /*0x86c72d*/
    }
    v330 = a3; /*0x86c732*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86c73c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v309, 6u, v330); /*0x86c749*/
    v331 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c753*/
    LOBYTE(v362) = 0x79; /*0x86c760*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v331); /*0x86c765*/
    v332 = v361; /*0x86c76a*/
    LOBYTE(v362) = 1; /*0x86c770*/
    if ( v361 ) /*0x86c775*/
    {
      --v361[7].Unk08; /*0x86c777*/
      if ( !v332[7].Unk08 ) /*0x86c780*/
        sub_772560(v332); /*0x86c785*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86c78a*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86c795*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v309, 7u, &v2->Stage); /*0x86c7a2*/
  }
  v333 = v359; /*0x86c7a7*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v309, (NiD3DVertexShader *)v359[0x2E]); /*0x86c7b4*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v309, (NiD3DPixelShader *)v333[0x51]); /*0x86c7c2*/
  if ( !v309[0xC] ) /*0x86c7c7*/
    v309[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86c7d2*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v309[0xC], 0x1Bu, 0, 0); /*0x86c7de*/
  if ( !v309[0xC] ) /*0x86c7e3*/
    v309[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86c7ee*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v309[0xC], 0xFu, 0, 0); /*0x86c7fa*/
  if ( !v309[0xC] ) /*0x86c7ff*/
    v309[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86c80a*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v309[0xC], 7u, 1u, 0); /*0x86c815*/
  if ( !v309[0xC] ) /*0x86c81a*/
    v309[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86c825*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v309[0xC], 0x17u, 4u, 0); /*0x86c831*/
  if ( !v309[0xC] ) /*0x86c836*/
    v309[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86c841*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v309[0xC], 0xEu, 1u, 0); /*0x86c84c*/
  if ( !v309[0xC] ) /*0x86c851*/
    v309[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86c85c*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v309[0xC], 0x34u, 0, 0); /*0x86c868*/
  unk_B43DC0 = 0x790F8; /*0x86c87b*/
  unk_B44450 = 0x11C; /*0x86c881*/
  sub_76C890((NiD3DPass **)&v360, (NiD3DPass **)&unk_B4769C); /*0x86c88b*/
  v334 = v360; /*0x86c890*/
  if ( (unsigned int)v360[6] < 8 ) /*0x86c898*/
  {
    v335 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c8a3*/
    LOBYTE(v362) = 0x7A; /*0x86c8b0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v335); /*0x86c8b5*/
    v336 = v361; /*0x86c8ba*/
    LOBYTE(v362) = 1; /*0x86c8c0*/
    if ( v361 ) /*0x86c8c5*/
    {
      --v361[7].Unk08; /*0x86c8c7*/
      if ( !v336[7].Unk08 ) /*0x86c8d0*/
        sub_772560(v336); /*0x86c8d5*/
    }
    v337 = a3; /*0x86c8da*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86c8e4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v334, 0, v337); /*0x86c8f1*/
    v338 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c8fb*/
    LOBYTE(v362) = 0x7B; /*0x86c908*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v338); /*0x86c90d*/
    v339 = v361; /*0x86c912*/
    LOBYTE(v362) = 1; /*0x86c918*/
    if ( v361 ) /*0x86c91d*/
    {
      --v361[7].Unk08; /*0x86c91f*/
      if ( !v339[7].Unk08 ) /*0x86c928*/
        sub_772560(v339); /*0x86c92d*/
    }
    v340 = a3; /*0x86c932*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86c93b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v334, 1u, v340); /*0x86c947*/
    v341 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c951*/
    LOBYTE(v362) = 0x7C; /*0x86c95e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v341); /*0x86c963*/
    v342 = v361; /*0x86c968*/
    LOBYTE(v362) = 1; /*0x86c96e*/
    if ( v361 ) /*0x86c973*/
    {
      --v361[7].Unk08; /*0x86c975*/
      if ( !v342[7].Unk08 ) /*0x86c97e*/
        sub_772560(v342); /*0x86c983*/
    }
    v343 = a3; /*0x86c988*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86c992*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v334, 2u, v343); /*0x86c99f*/
    v344 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86c9a9*/
    LOBYTE(v362) = 0x7D; /*0x86c9b6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v344); /*0x86c9bb*/
    v345 = v361; /*0x86c9c0*/
    LOBYTE(v362) = 1; /*0x86c9c6*/
    if ( v361 ) /*0x86c9cb*/
    {
      --v361[7].Unk08; /*0x86c9cd*/
      if ( !v345[7].Unk08 ) /*0x86c9d6*/
        sub_772560(v345); /*0x86c9db*/
    }
    v346 = a3; /*0x86c9e0*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86c9ea*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v334, 3u, v346); /*0x86c9f7*/
    v347 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ca01*/
    LOBYTE(v362) = 0x7E; /*0x86ca0e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v347); /*0x86ca13*/
    v348 = v361; /*0x86ca18*/
    LOBYTE(v362) = 1; /*0x86ca1e*/
    if ( v361 ) /*0x86ca23*/
    {
      --v361[7].Unk08; /*0x86ca25*/
      if ( !v348[7].Unk08 ) /*0x86ca2e*/
        sub_772560(v348); /*0x86ca33*/
    }
    v349 = a3; /*0x86ca38*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86ca42*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v334, 4u, v349); /*0x86ca4f*/
    v350 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86ca59*/
    LOBYTE(v362) = 0x7F; /*0x86ca66*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v350); /*0x86ca6b*/
    v351 = v361; /*0x86ca70*/
    LOBYTE(v362) = 1; /*0x86ca76*/
    if ( v361 ) /*0x86ca7b*/
    {
      --v361[7].Unk08; /*0x86ca7d*/
      if ( !v351[7].Unk08 ) /*0x86ca86*/
        sub_772560(v351); /*0x86ca8b*/
    }
    v352 = (NiD3DTextureStage *)a3; /*0x86ca90*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86ca9b*/
    NiD3DTextureStage_SetTexture(v352, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86caac*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v334, 5u, &v352->Stage); /*0x86cab6*/
    v353 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86cac0*/
    LOBYTE(v362) = 0x80; /*0x86cacd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v353); /*0x86cad2*/
    v354 = v361; /*0x86cad7*/
    LOBYTE(v362) = 1; /*0x86cadd*/
    if ( v361 ) /*0x86cae2*/
    {
      --v361[7].Unk08; /*0x86cae4*/
      if ( !v354[7].Unk08 ) /*0x86caed*/
        sub_772560(v354); /*0x86caf2*/
    }
    v355 = a3; /*0x86caf7*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86cb01*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v334, 6u, v355); /*0x86cb0e*/
    v356 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v361); /*0x86cb18*/
    LOBYTE(v362) = 0x81; /*0x86cb25*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v356); /*0x86cb2a*/
    v357 = v361; /*0x86cb2f*/
    LOBYTE(v362) = 1; /*0x86cb35*/
    if ( v361 ) /*0x86cb3a*/
    {
      --v361[7].Unk08; /*0x86cb3c*/
      if ( !v357[7].Unk08 ) /*0x86cb45*/
        sub_772560(v357); /*0x86cb4a*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86cb4f*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86cb5a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v334, 7u, &v2->Stage); /*0x86cb67*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v334, (NiD3DVertexShader *)v359[0x2E]); /*0x86cb79*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v334, (NiD3DPixelShader *)v359[0x52]); /*0x86cb8b*/
  if ( !v334[0xC] ) /*0x86cb90*/
    v334[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86cb9b*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v334[0xC], 0x1Bu, 0, 0); /*0x86cba7*/
  if ( !v334[0xC] ) /*0x86cbac*/
    v334[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86cbb7*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v334[0xC], 0xFu, 0, 0); /*0x86cbc3*/
  if ( !v334[0xC] ) /*0x86cbc8*/
    v334[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86cbd3*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v334[0xC], 7u, 1u, 0); /*0x86cbde*/
  if ( !v334[0xC] ) /*0x86cbe3*/
    v334[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86cbee*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v334[0xC], 0x17u, 4u, 0); /*0x86cbfa*/
  if ( !v334[0xC] ) /*0x86cbff*/
    v334[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86cc0a*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v334[0xC], 0xEu, 1u, 0); /*0x86cc15*/
  if ( !v334[0xC] ) /*0x86cc1a*/
    v334[0xC] = (NiD3DPassVtbl *)NiD3DRenderStateGroupPool_Acquire(); /*0x86cc25*/
  NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v334[0xC], 0x34u, 0, 0); /*0x86cc31*/
  unk_B43DC4 = 0x790F8; /*0x86cc3b*/
  unk_B44454 = 0x19C; /*0x86cc41*/
  LOBYTE(v362) = 0; /*0x86cc4b*/
  if ( v2 ) /*0x86cc50*/
  {
    v4 = v2[7].Unk08-- == 1; /*0x86cc52*/
    if ( v4 ) /*0x86cc55*/
      sub_772560(v2); /*0x86cc59*/
  }
  v4 = v334[0x18] == (NiD3DPassVtbl *)1; /*0x86cc5e*/
  v334[0x18] = (NiD3DPassVtbl *)((char *)v334[0x18] + 0xFFFFFFFF); /*0x86cc5e*/
  v362 = 0xFFFFFFFF; /*0x86cc61*/
  if ( v4 ) /*0x86cc65*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v334); /*0x86cc69*/
}
