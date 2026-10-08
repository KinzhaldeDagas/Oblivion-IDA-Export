// MoonSugarEffect decode: SkinShader detailed pass population. Binds SkinShader vertex variants from this+0x9C and pixel variants from this+0xEC into the 0x14 pooled passes with TES4 texture-stage/render-state setup.
void __thiscall SkinShader_InitializePassPool(int *this)
{
  NiD3DPass *v1; // esi
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
  volatile LONG *v19; // ebx
  NiD3DVertexShader *VertexShader; // ebp
  volatile LONG *v21; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  unsigned int **v23; // ebp
  NiD3DTextureStage *v24; // eax
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
  volatile LONG *v37; // ebx
  NiD3DVertexShader *v38; // ebp
  volatile LONG *v39; // ebx
  NiD3DPixelShader *v40; // ebp
  unsigned int **v41; // ebp
  NiD3DTextureStage *v42; // eax
  unsigned int **v43; // ebp
  NiD3DTextureStage *v44; // eax
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
  volatile LONG *v55; // ebx
  NiD3DVertexShader *v56; // ebp
  volatile LONG *v57; // ebx
  NiD3DPixelShader *v58; // ebp
  unsigned int **v59; // ebp
  NiD3DTextureStage *v60; // eax
  unsigned int **v61; // ebp
  NiD3DTextureStage *v62; // eax
  unsigned int **v63; // ebp
  NiD3DTextureStage *v64; // eax
  unsigned int **v65; // ebp
  NiD3DTextureStage *v66; // eax
  unsigned int **v67; // ebp
  NiD3DTextureStage *v68; // eax
  unsigned int **v69; // ebp
  NiD3DTextureStage *v70; // eax
  unsigned int **v71; // ebp
  NiD3DTextureStage *v72; // eax
  volatile LONG *v73; // ebx
  NiD3DVertexShader *v74; // ebp
  volatile LONG *v75; // ebx
  NiD3DPixelShader *v76; // ebp
  unsigned int **v77; // ebp
  NiD3DTextureStage *v78; // eax
  unsigned int **v79; // ebp
  NiD3DTextureStage *v80; // eax
  unsigned int **v81; // ebp
  NiD3DTextureStage *v82; // eax
  unsigned int **v83; // ebp
  NiD3DTextureStage *v84; // eax
  unsigned int **v85; // ebp
  NiD3DTextureStage *v86; // eax
  unsigned int **v87; // ebp
  NiD3DTextureStage *v88; // eax
  unsigned int **v89; // ebp
  NiD3DTextureStage *v90; // eax
  NiD3DVertexShader **v91; // ebp
  NiD3DTextureStage **v92; // eax
  NiD3DTextureStage *v93; // eax
  unsigned int *v94; // edi
  NiD3DTextureStage **v95; // eax
  NiD3DTextureStage *v96; // eax
  unsigned int *v97; // edi
  NiD3DTextureStage **v98; // eax
  NiD3DTextureStage *v99; // eax
  unsigned int *v100; // edi
  NiD3DTextureStage **v101; // eax
  NiD3DTextureStage *v102; // eax
  unsigned int *v103; // edi
  NiD3DTextureStage **v104; // eax
  NiD3DTextureStage *v105; // eax
  NiD3DTextureStage *v106; // edi
  NiD3DTextureStage **v107; // eax
  NiD3DTextureStage *v108; // eax
  unsigned int *v109; // edi
  NiD3DTextureStage **v110; // eax
  NiD3DTextureStage *v111; // eax
  NiD3DTextureStage **v112; // eax
  NiD3DTextureStage *v113; // eax
  unsigned int *v114; // edi
  NiD3DTextureStage **v115; // eax
  NiD3DTextureStage *v116; // eax
  unsigned int *v117; // edi
  NiD3DTextureStage **v118; // eax
  NiD3DTextureStage *v119; // eax
  unsigned int *v120; // edi
  NiD3DTextureStage **v121; // eax
  NiD3DTextureStage *v122; // eax
  unsigned int *v123; // edi
  NiD3DTextureStage **v124; // eax
  NiD3DTextureStage *v125; // eax
  NiD3DTextureStage *v126; // edi
  NiD3DTextureStage **v127; // eax
  NiD3DTextureStage *v128; // eax
  unsigned int *v129; // edi
  NiD3DTextureStage **v130; // eax
  NiD3DTextureStage *v131; // eax
  NiD3DTextureStage **v132; // eax
  NiD3DTextureStage *v133; // eax
  unsigned int *v134; // edi
  NiD3DTextureStage **v135; // eax
  NiD3DTextureStage *v136; // eax
  unsigned int *v137; // edi
  NiD3DTextureStage **v138; // eax
  NiD3DTextureStage *v139; // eax
  unsigned int *v140; // edi
  NiD3DTextureStage **v141; // eax
  NiD3DTextureStage *v142; // eax
  unsigned int *v143; // edi
  NiD3DTextureStage **v144; // eax
  NiD3DTextureStage *v145; // eax
  NiD3DTextureStage *v146; // edi
  NiD3DTextureStage **v147; // eax
  NiD3DTextureStage *v148; // eax
  unsigned int *v149; // edi
  NiD3DTextureStage **v150; // eax
  NiD3DTextureStage *v151; // eax
  NiD3DTextureStage **v152; // eax
  NiD3DTextureStage *v153; // eax
  unsigned int *v154; // edi
  NiD3DTextureStage **v155; // eax
  NiD3DTextureStage *v156; // eax
  unsigned int *v157; // edi
  NiD3DTextureStage **v158; // eax
  NiD3DTextureStage *v159; // eax
  unsigned int *v160; // edi
  NiD3DTextureStage **v161; // eax
  NiD3DTextureStage *v162; // eax
  unsigned int *v163; // edi
  NiD3DTextureStage **v164; // eax
  NiD3DTextureStage *v165; // eax
  unsigned int *v166; // edi
  NiD3DTextureStage **v167; // eax
  NiD3DTextureStage *v168; // eax
  NiD3DTextureStage *v169; // edi
  NiD3DTextureStage **v170; // eax
  NiD3DTextureStage *v171; // eax
  unsigned int *v172; // edi
  NiD3DTextureStage **v173; // eax
  NiD3DTextureStage *v174; // eax
  int *v175; // ebp
  NiD3DTextureStage **v176; // eax
  NiD3DTextureStage *v177; // eax
  unsigned int *v178; // edi
  NiD3DTextureStage **v179; // eax
  NiD3DTextureStage *v180; // eax
  unsigned int *v181; // edi
  NiD3DTextureStage **v182; // eax
  NiD3DTextureStage *v183; // eax
  unsigned int *v184; // edi
  NiD3DTextureStage **v185; // eax
  NiD3DTextureStage *v186; // eax
  unsigned int *v187; // edi
  NiD3DTextureStage **v188; // eax
  NiD3DTextureStage *v189; // eax
  unsigned int *v190; // edi
  NiD3DTextureStage **v191; // eax
  NiD3DTextureStage *v192; // eax
  NiD3DTextureStage *v193; // edi
  NiD3DTextureStage **v194; // eax
  NiD3DTextureStage *v195; // eax
  unsigned int *v196; // edi
  NiD3DTextureStage **v197; // eax
  NiD3DTextureStage *v198; // eax
  NiD3DTextureStage **v199; // eax
  NiD3DTextureStage *v200; // eax
  unsigned int *v201; // edi
  NiD3DTextureStage **v202; // eax
  NiD3DTextureStage *v203; // eax
  unsigned int *v204; // edi
  NiD3DTextureStage **v205; // eax
  NiD3DTextureStage *v206; // eax
  unsigned int *v207; // edi
  NiD3DTextureStage **v208; // eax
  NiD3DTextureStage *v209; // eax
  unsigned int *v210; // edi
  NiD3DTextureStage **v211; // eax
  NiD3DTextureStage *v212; // eax
  unsigned int *v213; // edi
  NiD3DTextureStage **v214; // eax
  NiD3DTextureStage *v215; // eax
  NiD3DTextureStage *v216; // edi
  NiD3DTextureStage **v217; // eax
  NiD3DTextureStage *v218; // eax
  unsigned int *v219; // edi
  NiD3DTextureStage **v220; // eax
  NiD3DTextureStage *v221; // eax
  NiD3DTextureStage **v222; // eax
  NiD3DTextureStage *v223; // eax
  unsigned int *v224; // edi
  NiD3DTextureStage **v225; // eax
  NiD3DTextureStage *v226; // eax
  unsigned int *v227; // edi
  NiD3DTextureStage **v228; // eax
  NiD3DTextureStage *v229; // eax
  unsigned int *v230; // edi
  NiD3DTextureStage **v231; // eax
  NiD3DTextureStage *v232; // eax
  unsigned int *v233; // edi
  NiD3DTextureStage **v234; // eax
  NiD3DTextureStage *v235; // eax
  unsigned int *v236; // edi
  NiD3DTextureStage **v237; // eax
  NiD3DTextureStage *v238; // eax
  NiD3DTextureStage *v239; // edi
  NiD3DTextureStage **v240; // eax
  NiD3DTextureStage *v241; // eax
  unsigned int *v242; // edi
  NiD3DTextureStage **v243; // eax
  NiD3DTextureStage *v244; // eax
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
  unsigned int *v256; // edi
  NiD3DTextureStage **v257; // eax
  NiD3DTextureStage *v258; // eax
  unsigned int *v259; // edi
  NiD3DTextureStage **v260; // eax
  NiD3DTextureStage *v261; // eax
  NiD3DTextureStage *v262; // edi
  NiD3DTextureStage **v263; // eax
  NiD3DTextureStage *v264; // eax
  unsigned int *v265; // edi
  NiD3DTextureStage **v266; // eax
  NiD3DTextureStage *v267; // eax
  int *v268; // ebp
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
  unsigned int *v280; // edi
  NiD3DTextureStage **v281; // eax
  NiD3DTextureStage *v282; // eax
  unsigned int *v283; // edi
  NiD3DTextureStage **v284; // eax
  NiD3DTextureStage *v285; // eax
  NiD3DTextureStage *v286; // edi
  NiD3DTextureStage **v287; // eax
  NiD3DTextureStage *v288; // eax
  unsigned int *v289; // edi
  NiD3DTextureStage **v290; // eax
  NiD3DTextureStage *v291; // eax
  NiD3DPass *v292; // esi
  NiD3DTextureStage **v293; // eax
  NiD3DTextureStage *v294; // eax
  unsigned int *v295; // edi
  NiD3DTextureStage **v296; // eax
  NiD3DTextureStage *v297; // eax
  unsigned int *v298; // edi
  NiD3DTextureStage **v299; // eax
  NiD3DTextureStage *v300; // eax
  unsigned int *v301; // edi
  NiD3DTextureStage **v302; // eax
  NiD3DTextureStage *v303; // eax
  unsigned int *v304; // edi
  NiD3DTextureStage **v305; // eax
  NiD3DTextureStage *v306; // eax
  unsigned int *v307; // edi
  NiD3DTextureStage **v308; // eax
  NiD3DTextureStage *v309; // eax
  NiD3DTextureStage *v310; // edi
  NiD3DTextureStage **v311; // eax
  NiD3DTextureStage *v312; // eax
  unsigned int *v313; // edi
  NiD3DTextureStage **v314; // eax
  NiD3DTextureStage *v315; // eax
  NiD3DPass *v316; // esi
  NiD3DTextureStage **v317; // eax
  NiD3DTextureStage *v318; // eax
  unsigned int *v319; // edi
  NiD3DTextureStage **v320; // eax
  NiD3DTextureStage *v321; // eax
  unsigned int *v322; // edi
  NiD3DTextureStage **v323; // eax
  NiD3DTextureStage *v324; // eax
  unsigned int *v325; // edi
  NiD3DTextureStage **v326; // eax
  NiD3DTextureStage *v327; // eax
  unsigned int *v328; // edi
  NiD3DTextureStage **v329; // eax
  NiD3DTextureStage *v330; // eax
  unsigned int *v331; // edi
  NiD3DTextureStage **v332; // eax
  NiD3DTextureStage *v333; // eax
  NiD3DTextureStage *v334; // edi
  NiD3DTextureStage **v335; // eax
  NiD3DTextureStage *v336; // eax
  unsigned int *v337; // edi
  NiD3DTextureStage **v338; // eax
  NiD3DTextureStage *v339; // eax
  NiD3DVertexShader **v340; // ebx
  NiD3DPass *v341; // esi
  NiD3DTextureStage **v342; // eax
  NiD3DTextureStage *v343; // eax
  unsigned int *v344; // edi
  NiD3DTextureStage **v345; // eax
  NiD3DTextureStage *v346; // eax
  unsigned int *v347; // edi
  NiD3DTextureStage **v348; // eax
  NiD3DTextureStage *v349; // eax
  unsigned int *v350; // edi
  NiD3DTextureStage **v351; // eax
  NiD3DTextureStage *v352; // eax
  NiD3DPass *v353; // esi
  NiD3DTextureStage **v354; // eax
  NiD3DTextureStage *v355; // eax
  unsigned int *v356; // edi
  NiD3DTextureStage **v357; // eax
  NiD3DTextureStage *v358; // eax
  unsigned int *v359; // edi
  NiD3DTextureStage **v360; // eax
  NiD3DTextureStage *v361; // eax
  unsigned int *v362; // edi
  NiD3DTextureStage **v363; // eax
  NiD3DTextureStage *v364; // eax
  NiD3DPass *v365; // esi
  NiD3DTextureStage **v366; // eax
  NiD3DTextureStage *v367; // eax
  unsigned int *v368; // edi
  NiD3DTextureStage **v369; // eax
  NiD3DTextureStage *v370; // eax
  unsigned int *v371; // edi
  NiD3DTextureStage **v372; // eax
  NiD3DTextureStage *v373; // eax
  unsigned int *v374; // edi
  NiD3DTextureStage **v375; // eax
  NiD3DTextureStage *v376; // eax
  NiD3DPass *v377; // esi
  NiD3DTextureStage **v378; // eax
  NiD3DTextureStage *v379; // eax
  unsigned int *v380; // edi
  NiD3DTextureStage **v381; // eax
  NiD3DTextureStage *v382; // eax
  unsigned int *v383; // edi
  NiD3DTextureStage **v384; // eax
  NiD3DTextureStage *v385; // eax
  unsigned int *v386; // edi
  NiD3DTextureStage **v387; // eax
  NiD3DTextureStage *v388; // eax
  unsigned int *a3; // [esp+20h] [ebp-1Ch] BYREF
  NiD3DPassVtbl **v390; // [esp+24h] [ebp-18h] BYREF
  int *v391; // [esp+28h] [ebp-14h]
  NiD3DTextureStage *v392; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v393; // [esp+38h] [ebp-4h]

  v391 = this; /*0x87ad37*/
  v1 = 0; /*0x87ad3b*/
  v2 = 0; /*0x87ad3d*/
  v390 = 0; /*0x87ad3f*/
  v393 = 0; /*0x87ad43*/
  a3 = 0; /*0x87ad47*/
  v3 = unk_B47718[0]; /*0x87ad4b*/
  v4 = unk_B47718[0] == 0; /*0x87ad50*/
  LOBYTE(v393) = 1; /*0x87ad57*/
  if ( !v4 ) /*0x87ad5b*/
  {
    v1 = (NiD3DPass *)v3; /*0x87ad5d*/
    v390 = (NiD3DPassVtbl **)v3; /*0x87ad61*/
    if ( v3 ) /*0x87ad65*/
      ++*(_DWORD *)(v3 + 0x60); /*0x87ad67*/
  }
  if ( v1->StageCount < 7 ) /*0x87ad73*/
  {
    v5 = (unsigned int *)*NiD3DTextureStagePool_Acquire(&v392); /*0x87ad86*/
    if ( v5 ) /*0x87ad8a*/
    {
      v2 = (NiD3DTextureStage *)v5; /*0x87ad8c*/
      ++v5[0x17]; /*0x87ad8e*/
      a3 = v5; /*0x87ad91*/
    }
    v6 = v392; /*0x87ad95*/
    LOBYTE(v393) = 1; /*0x87ad9b*/
    if ( v392 ) /*0x87ada0*/
    {
      --v392[7].Unk08; /*0x87ada2*/
      if ( !v6[7].Unk08 ) /*0x87adaa*/
        sub_772560(v6); /*0x87adaf*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x87adbb*/
    NiD3DPass_SetTextureStage(v1, 0, &v2->Stage); /*0x87adc8*/
    v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87adda*/
    v4 = v2 == (NiD3DTextureStage *)*v7; /*0x87addc*/
    LOBYTE(v393) = 3; /*0x87adde*/
    if ( !v4 ) /*0x87ade3*/
    {
      if ( v2 ) /*0x87ade7*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87ade9*/
        if ( v4 ) /*0x87adec*/
          sub_772560(v2); /*0x87adf0*/
      }
      v2 = (NiD3DTextureStage *)*v7; /*0x87adf5*/
      a3 = *v7; /*0x87adf9*/
      if ( a3 ) /*0x87adfd*/
        ++v2[7].Unk08; /*0x87adff*/
    }
    v8 = v392; /*0x87ae03*/
    LOBYTE(v393) = 1; /*0x87ae09*/
    if ( v392 ) /*0x87ae0e*/
    {
      --v392[7].Unk08; /*0x87ae10*/
      if ( !v8[7].Unk08 ) /*0x87ae18*/
        sub_772560(v8); /*0x87ae1d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x87ae29*/
    NiD3DPass_SetTextureStage(v1, 1u, &v2->Stage); /*0x87ae36*/
    v9 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ae48*/
    v4 = v2 == (NiD3DTextureStage *)*v9; /*0x87ae4a*/
    LOBYTE(v393) = 4; /*0x87ae4c*/
    if ( !v4 ) /*0x87ae51*/
    {
      if ( v2 ) /*0x87ae55*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87ae57*/
        if ( v4 ) /*0x87ae5a*/
          sub_772560(v2); /*0x87ae5e*/
      }
      v2 = (NiD3DTextureStage *)*v9; /*0x87ae63*/
      a3 = *v9; /*0x87ae67*/
      if ( a3 ) /*0x87ae6b*/
        ++v2[7].Unk08; /*0x87ae6d*/
    }
    v10 = v392; /*0x87ae71*/
    LOBYTE(v393) = 1; /*0x87ae77*/
    if ( v392 ) /*0x87ae7c*/
    {
      --v392[7].Unk08; /*0x87ae7e*/
      if ( !v10[7].Unk08 ) /*0x87ae86*/
        sub_772560(v10); /*0x87ae8b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x87ae97*/
    NiD3DPass_SetTextureStage(v1, 2u, &v2->Stage); /*0x87aea4*/
    v11 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87aeb6*/
    v4 = v2 == (NiD3DTextureStage *)*v11; /*0x87aeb8*/
    LOBYTE(v393) = 5; /*0x87aeba*/
    if ( !v4 ) /*0x87aebf*/
    {
      if ( v2 ) /*0x87aec3*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87aec5*/
        if ( v4 ) /*0x87aec8*/
          sub_772560(v2); /*0x87aecc*/
      }
      v2 = (NiD3DTextureStage *)*v11; /*0x87aed1*/
      a3 = *v11; /*0x87aed5*/
      if ( a3 ) /*0x87aed9*/
        ++v2[7].Unk08; /*0x87aedb*/
    }
    v12 = v392; /*0x87aedf*/
    LOBYTE(v393) = 1; /*0x87aee5*/
    if ( v392 ) /*0x87aeea*/
    {
      --v392[7].Unk08; /*0x87aeec*/
      if ( !v12[7].Unk08 ) /*0x87aef4*/
        sub_772560(v12); /*0x87aef9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x87af05*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x87af12*/
    v13 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87af24*/
    v4 = v2 == (NiD3DTextureStage *)*v13; /*0x87af26*/
    LOBYTE(v393) = 6; /*0x87af28*/
    if ( !v4 ) /*0x87af2d*/
    {
      if ( v2 ) /*0x87af31*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87af33*/
        if ( v4 ) /*0x87af36*/
          sub_772560(v2); /*0x87af3a*/
      }
      v2 = (NiD3DTextureStage *)*v13; /*0x87af3f*/
      a3 = *v13; /*0x87af43*/
      if ( a3 ) /*0x87af47*/
        ++v2[7].Unk08; /*0x87af49*/
    }
    v14 = v392; /*0x87af4d*/
    LOBYTE(v393) = 1; /*0x87af53*/
    if ( v392 ) /*0x87af58*/
    {
      --v392[7].Unk08; /*0x87af5a*/
      if ( !v14[7].Unk08 ) /*0x87af62*/
        sub_772560(v14); /*0x87af67*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x87af73*/
    NiD3DTextureStage_SetTexture(v2, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87af84*/
    NiD3DPass_SetTextureStage(v1, 4u, &v2->Stage); /*0x87af8e*/
    v15 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87afa0*/
    v4 = v2 == (NiD3DTextureStage *)*v15; /*0x87afa2*/
    LOBYTE(v393) = 7; /*0x87afa4*/
    if ( !v4 ) /*0x87afa9*/
    {
      if ( v2 ) /*0x87afad*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87afaf*/
        if ( v4 ) /*0x87afb2*/
          sub_772560(v2); /*0x87afb6*/
      }
      v2 = (NiD3DTextureStage *)*v15; /*0x87afbb*/
      a3 = *v15; /*0x87afbf*/
      if ( a3 ) /*0x87afc3*/
        ++v2[7].Unk08; /*0x87afc5*/
    }
    v16 = v392; /*0x87afc9*/
    LOBYTE(v393) = 1; /*0x87afcf*/
    if ( v392 ) /*0x87afd4*/
    {
      --v392[7].Unk08; /*0x87afd6*/
      if ( !v16[7].Unk08 ) /*0x87afde*/
        sub_772560(v16); /*0x87afe3*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x87afef*/
    NiD3DPass_SetTextureStage(v1, 5u, &v2->Stage); /*0x87affc*/
    v17 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b00e*/
    v4 = v2 == (NiD3DTextureStage *)*v17; /*0x87b010*/
    LOBYTE(v393) = 8; /*0x87b012*/
    if ( !v4 ) /*0x87b017*/
    {
      if ( v2 ) /*0x87b01b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b01d*/
        if ( v4 ) /*0x87b020*/
          sub_772560(v2); /*0x87b024*/
      }
      v2 = (NiD3DTextureStage *)*v17; /*0x87b029*/
      a3 = *v17; /*0x87b02d*/
      if ( a3 ) /*0x87b031*/
        ++v2[7].Unk08; /*0x87b033*/
    }
    v18 = v392; /*0x87b037*/
    LOBYTE(v393) = 1; /*0x87b03d*/
    if ( v392 ) /*0x87b042*/
    {
      --v392[7].Unk08; /*0x87b044*/
      if ( !v18[7].Unk08 ) /*0x87b04c*/
        sub_772560(v18); /*0x87b051*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x87b05d*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x87b06a*/
  }
  v19 = (volatile LONG *)v391[0x2F];            // MoonSugar build51: Skin pass 0 binds vertex shader from this+0xBC (SKIN2008.vso, vs_2_0); exact gate requires current pass B47718[0] and this pointer value. /*0x87b073*/
  VertexShader = v1->VertexShader; /*0x87b079*/
  if ( VertexShader != (NiD3DVertexShader *)v19 ) /*0x87b07e*/
  {
    if ( VertexShader ) /*0x87b082*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x87b088*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x87b09f*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v19; /*0x87b0a3*/
    if ( v19 ) /*0x87b0a6*/
      InterlockedIncrement(v19 + 1); /*0x87b0ac*/
  }
  v21 = (volatile LONG *)v391[0x3F];            // MoonSugar build51: Skin pass 0 binds pixel shader from this+0xFC (SKIN2004.pso, ps_2_x); exact gate requires current pass B47718[0] and this pointer value. /*0x87b0b6*/
  PixelShader = v1->PixelShader; /*0x87b0bc*/
  if ( PixelShader != (NiD3DPixelShader *)v21 ) /*0x87b0c1*/
  {
    if ( PixelShader ) /*0x87b0c5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x87b0cb*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x87b0e2*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v21; /*0x87b0e6*/
    if ( v21 ) /*0x87b0e9*/
      InterlockedIncrement(v21 + 1); /*0x87b0ef*/
  }
  if ( !v1->RenderStateGroup ) /*0x87b0f5*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b100*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87b10f*/
  if ( !v1->RenderStateGroup ) /*0x87b114*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b11f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87b12b*/
  if ( !v1->RenderStateGroup ) /*0x87b130*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b13b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87b147*/
  if ( !v1->RenderStateGroup ) /*0x87b14c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b157*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87b163*/
  if ( !v1->RenderStateGroup ) /*0x87b168*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b173*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87b17f*/
  if ( !v1->RenderStateGroup ) /*0x87b184*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b18f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87b19b*/
  if ( !v1->RenderStateGroup ) /*0x87b1a0*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b1ab*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87b1b7*/
  v4 = v1 == (NiD3DPass *)unk_B4771C; /*0x87b1bf*/
  unk_B43C58 = 0x21082; /*0x87b1c5*/
  unk_B442E8 = 0x1C; /*0x87b1cf*/
  if ( !v4 ) /*0x87b1d9*/
  {
    v4 = v1->RefCount-- == 1; /*0x87b1db*/
    if ( v4 ) /*0x87b1de*/
      NiD3DPass_ReleaseToPool(v1); /*0x87b1e2*/
    v1 = (NiD3DPass *)unk_B4771C; /*0x87b1e7*/
    v390 = (NiD3DPassVtbl **)unk_B4771C; /*0x87b1ef*/
    if ( v390 ) /*0x87b1f3*/
      ++v1->RefCount; /*0x87b1f5*/
  }
  if ( v1->StageCount < 7 ) /*0x87b1fd*/
  {
    v23 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b210*/
    v4 = v2 == (NiD3DTextureStage *)*v23; /*0x87b212*/
    LOBYTE(v393) = 9; /*0x87b215*/
    if ( !v4 ) /*0x87b21a*/
    {
      if ( v2 ) /*0x87b21e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b220*/
        if ( v4 ) /*0x87b223*/
          sub_772560(v2); /*0x87b227*/
      }
      v2 = (NiD3DTextureStage *)*v23; /*0x87b22c*/
      a3 = *v23; /*0x87b231*/
      if ( a3 ) /*0x87b235*/
        ++v2[7].Unk08; /*0x87b237*/
    }
    v24 = v392; /*0x87b23b*/
    LOBYTE(v393) = 1; /*0x87b241*/
    if ( v392 ) /*0x87b246*/
    {
      --v392[7].Unk08; /*0x87b248*/
      if ( !v24[7].Unk08 ) /*0x87b250*/
        sub_772560(v24); /*0x87b255*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x87b261*/
    NiD3DPass_SetTextureStage(v1, 0, &v2->Stage); /*0x87b26e*/
    v25 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b280*/
    v4 = v2 == (NiD3DTextureStage *)*v25; /*0x87b282*/
    LOBYTE(v393) = 0xA; /*0x87b285*/
    if ( !v4 ) /*0x87b28a*/
    {
      if ( v2 ) /*0x87b28e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b290*/
        if ( v4 ) /*0x87b293*/
          sub_772560(v2); /*0x87b297*/
      }
      v2 = (NiD3DTextureStage *)*v25; /*0x87b29c*/
      a3 = *v25; /*0x87b2a1*/
      if ( a3 ) /*0x87b2a5*/
        ++v2[7].Unk08; /*0x87b2a7*/
    }
    v26 = v392; /*0x87b2ab*/
    LOBYTE(v393) = 1; /*0x87b2b1*/
    if ( v392 ) /*0x87b2b6*/
    {
      --v392[7].Unk08; /*0x87b2b8*/
      if ( !v26[7].Unk08 ) /*0x87b2c0*/
        sub_772560(v26); /*0x87b2c5*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x87b2d1*/
    NiD3DPass_SetTextureStage(v1, 1u, &v2->Stage); /*0x87b2de*/
    v27 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b2f0*/
    v4 = v2 == (NiD3DTextureStage *)*v27; /*0x87b2f2*/
    LOBYTE(v393) = 0xB; /*0x87b2f5*/
    if ( !v4 ) /*0x87b2fa*/
    {
      if ( v2 ) /*0x87b2fe*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b300*/
        if ( v4 ) /*0x87b303*/
          sub_772560(v2); /*0x87b307*/
      }
      v2 = (NiD3DTextureStage *)*v27; /*0x87b30c*/
      a3 = *v27; /*0x87b311*/
      if ( a3 ) /*0x87b315*/
        ++v2[7].Unk08; /*0x87b317*/
    }
    v28 = v392; /*0x87b31b*/
    LOBYTE(v393) = 1; /*0x87b321*/
    if ( v392 ) /*0x87b326*/
    {
      --v392[7].Unk08; /*0x87b328*/
      if ( !v28[7].Unk08 ) /*0x87b330*/
        sub_772560(v28); /*0x87b335*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x87b341*/
    NiD3DPass_SetTextureStage(v1, 2u, &v2->Stage); /*0x87b34e*/
    v29 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b360*/
    v4 = v2 == (NiD3DTextureStage *)*v29; /*0x87b362*/
    LOBYTE(v393) = 0xC; /*0x87b365*/
    if ( !v4 ) /*0x87b36a*/
    {
      if ( v2 ) /*0x87b36e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b370*/
        if ( v4 ) /*0x87b373*/
          sub_772560(v2); /*0x87b377*/
      }
      v2 = (NiD3DTextureStage *)*v29; /*0x87b37c*/
      a3 = *v29; /*0x87b381*/
      if ( a3 ) /*0x87b385*/
        ++v2[7].Unk08; /*0x87b387*/
    }
    v30 = v392; /*0x87b38b*/
    LOBYTE(v393) = 1; /*0x87b391*/
    if ( v392 ) /*0x87b396*/
    {
      --v392[7].Unk08; /*0x87b398*/
      if ( !v30[7].Unk08 ) /*0x87b3a0*/
        sub_772560(v30); /*0x87b3a5*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x87b3b1*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x87b3be*/
    v31 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b3d0*/
    v4 = v2 == (NiD3DTextureStage *)*v31; /*0x87b3d2*/
    LOBYTE(v393) = 0xD; /*0x87b3d5*/
    if ( !v4 ) /*0x87b3da*/
    {
      if ( v2 ) /*0x87b3de*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b3e0*/
        if ( v4 ) /*0x87b3e3*/
          sub_772560(v2); /*0x87b3e7*/
      }
      v2 = (NiD3DTextureStage *)*v31; /*0x87b3ec*/
      a3 = *v31; /*0x87b3f1*/
      if ( a3 ) /*0x87b3f5*/
        ++v2[7].Unk08; /*0x87b3f7*/
    }
    v32 = v392; /*0x87b3fb*/
    LOBYTE(v393) = 1; /*0x87b401*/
    if ( v392 ) /*0x87b406*/
    {
      --v392[7].Unk08; /*0x87b408*/
      if ( !v32[7].Unk08 ) /*0x87b410*/
        sub_772560(v32); /*0x87b415*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x87b421*/
    NiD3DTextureStage_SetTexture(v2, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87b432*/
    NiD3DPass_SetTextureStage(v1, 4u, &v2->Stage); /*0x87b43c*/
    v33 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b44e*/
    v4 = v2 == (NiD3DTextureStage *)*v33; /*0x87b450*/
    LOBYTE(v393) = 0xE; /*0x87b453*/
    if ( !v4 ) /*0x87b458*/
    {
      if ( v2 ) /*0x87b45c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b45e*/
        if ( v4 ) /*0x87b461*/
          sub_772560(v2); /*0x87b465*/
      }
      v2 = (NiD3DTextureStage *)*v33; /*0x87b46a*/
      a3 = *v33; /*0x87b46f*/
      if ( a3 ) /*0x87b473*/
        ++v2[7].Unk08; /*0x87b475*/
    }
    v34 = v392; /*0x87b479*/
    LOBYTE(v393) = 1; /*0x87b47f*/
    if ( v392 ) /*0x87b484*/
    {
      --v392[7].Unk08; /*0x87b486*/
      if ( !v34[7].Unk08 ) /*0x87b48e*/
        sub_772560(v34); /*0x87b493*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x87b49f*/
    NiD3DPass_SetTextureStage(v1, 5u, &v2->Stage); /*0x87b4ac*/
    v35 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b4be*/
    v4 = v2 == (NiD3DTextureStage *)*v35; /*0x87b4c0*/
    LOBYTE(v393) = 0xF; /*0x87b4c3*/
    if ( !v4 ) /*0x87b4c8*/
    {
      if ( v2 ) /*0x87b4cc*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b4ce*/
        if ( v4 ) /*0x87b4d1*/
          sub_772560(v2); /*0x87b4d5*/
      }
      v2 = (NiD3DTextureStage *)*v35; /*0x87b4da*/
      a3 = *v35; /*0x87b4df*/
      if ( a3 ) /*0x87b4e3*/
        ++v2[7].Unk08; /*0x87b4e5*/
    }
    v36 = v392; /*0x87b4e9*/
    LOBYTE(v393) = 1; /*0x87b4ef*/
    if ( v392 ) /*0x87b4f4*/
    {
      --v392[7].Unk08; /*0x87b4f6*/
      if ( !v36[7].Unk08 ) /*0x87b4fe*/
        sub_772560(v36); /*0x87b503*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x87b50f*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x87b51c*/
  }
  v37 = (volatile LONG *)v391[0x30]; /*0x87b525*/
  v38 = v1->VertexShader; /*0x87b52b*/
  if ( v38 != (NiD3DVertexShader *)v37 ) /*0x87b530*/
  {
    if ( v38 ) /*0x87b534*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v38 + 1) ) /*0x87b53a*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v38)(v38, 1); /*0x87b551*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v37; /*0x87b555*/
    if ( v37 ) /*0x87b558*/
      InterlockedIncrement(v37 + 1); /*0x87b55e*/
  }
  v39 = (volatile LONG *)v391[0x3F]; /*0x87b568*/
  v40 = v1->PixelShader; /*0x87b56e*/
  if ( v40 != (NiD3DPixelShader *)v39 ) /*0x87b573*/
  {
    if ( v40 ) /*0x87b577*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v40 + 1) ) /*0x87b57d*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v40)(v40, 1); /*0x87b594*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v39; /*0x87b598*/
    if ( v39 ) /*0x87b59b*/
      InterlockedIncrement(v39 + 1); /*0x87b5a1*/
  }
  if ( !v1->RenderStateGroup ) /*0x87b5a7*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b5b2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87b5c1*/
  if ( !v1->RenderStateGroup ) /*0x87b5c6*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b5d1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87b5dd*/
  if ( !v1->RenderStateGroup ) /*0x87b5e2*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b5ed*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87b5f9*/
  if ( !v1->RenderStateGroup ) /*0x87b5fe*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b609*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87b615*/
  if ( !v1->RenderStateGroup ) /*0x87b61a*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b625*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87b631*/
  if ( !v1->RenderStateGroup ) /*0x87b636*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b641*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87b64d*/
  if ( !v1->RenderStateGroup ) /*0x87b652*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87b65d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87b669*/
  v4 = v1 == (NiD3DPass *)unk_B47720; /*0x87b671*/
  unk_B43C6C = 0x61088; /*0x87b677*/
  unk_B442FC = 0x1C; /*0x87b681*/
  if ( !v4 ) /*0x87b68b*/
  {
    v4 = v1->RefCount-- == 1; /*0x87b68d*/
    if ( v4 ) /*0x87b690*/
      NiD3DPass_ReleaseToPool(v1); /*0x87b694*/
    v1 = (NiD3DPass *)unk_B47720; /*0x87b699*/
    v390 = (NiD3DPassVtbl **)unk_B47720; /*0x87b6a1*/
    if ( v390 ) /*0x87b6a5*/
      ++v1->RefCount; /*0x87b6a7*/
  }
  if ( v1->StageCount < 7 ) /*0x87b6b1*/
  {
    v41 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b6c4*/
    v4 = v2 == (NiD3DTextureStage *)*v41; /*0x87b6c6*/
    LOBYTE(v393) = 0x10; /*0x87b6c9*/
    if ( !v4 ) /*0x87b6ce*/
    {
      if ( v2 ) /*0x87b6d2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b6d4*/
        if ( v4 ) /*0x87b6d7*/
          sub_772560(v2); /*0x87b6db*/
      }
      v2 = (NiD3DTextureStage *)*v41; /*0x87b6e0*/
      a3 = *v41; /*0x87b6e5*/
      if ( a3 ) /*0x87b6e9*/
        ++v2[7].Unk08; /*0x87b6eb*/
    }
    v42 = v392; /*0x87b6ef*/
    LOBYTE(v393) = 1; /*0x87b6f5*/
    if ( v392 ) /*0x87b6fa*/
    {
      --v392[7].Unk08; /*0x87b6fc*/
      if ( !v42[7].Unk08 ) /*0x87b704*/
        sub_772560(v42); /*0x87b709*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x87b715*/
    NiD3DPass_SetTextureStage(v1, 0, &v2->Stage); /*0x87b722*/
    v43 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b734*/
    v4 = v2 == (NiD3DTextureStage *)*v43; /*0x87b736*/
    LOBYTE(v393) = 0x11; /*0x87b739*/
    if ( !v4 ) /*0x87b73e*/
    {
      if ( v2 ) /*0x87b742*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b744*/
        if ( v4 ) /*0x87b747*/
          sub_772560(v2); /*0x87b74b*/
      }
      v2 = (NiD3DTextureStage *)*v43; /*0x87b750*/
      a3 = *v43; /*0x87b755*/
      if ( a3 ) /*0x87b759*/
        ++v2[7].Unk08; /*0x87b75b*/
    }
    v44 = v392; /*0x87b75f*/
    LOBYTE(v393) = 1; /*0x87b765*/
    if ( v392 ) /*0x87b76a*/
    {
      --v392[7].Unk08; /*0x87b76c*/
      if ( !v44[7].Unk08 ) /*0x87b774*/
        sub_772560(v44); /*0x87b779*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x87b785*/
    NiD3DPass_SetTextureStage(v1, 1u, &v2->Stage); /*0x87b792*/
    v45 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b7a4*/
    v4 = v2 == (NiD3DTextureStage *)*v45; /*0x87b7a6*/
    LOBYTE(v393) = 0x12; /*0x87b7a9*/
    if ( !v4 ) /*0x87b7ae*/
    {
      if ( v2 ) /*0x87b7b2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b7b4*/
        if ( v4 ) /*0x87b7b7*/
          sub_772560(v2); /*0x87b7bb*/
      }
      v2 = (NiD3DTextureStage *)*v45; /*0x87b7c0*/
      a3 = *v45; /*0x87b7c5*/
      if ( a3 ) /*0x87b7c9*/
        ++v2[7].Unk08; /*0x87b7cb*/
    }
    v46 = v392; /*0x87b7cf*/
    LOBYTE(v393) = 1; /*0x87b7d5*/
    if ( v392 ) /*0x87b7da*/
    {
      --v392[7].Unk08; /*0x87b7dc*/
      if ( !v46[7].Unk08 ) /*0x87b7e4*/
        sub_772560(v46); /*0x87b7e9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x87b7f5*/
    NiD3DPass_SetTextureStage(v1, 2u, &v2->Stage); /*0x87b802*/
    v47 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b814*/
    v4 = v2 == (NiD3DTextureStage *)*v47; /*0x87b816*/
    LOBYTE(v393) = 0x13; /*0x87b819*/
    if ( !v4 ) /*0x87b81e*/
    {
      if ( v2 ) /*0x87b822*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b824*/
        if ( v4 ) /*0x87b827*/
          sub_772560(v2); /*0x87b82b*/
      }
      v2 = (NiD3DTextureStage *)*v47; /*0x87b830*/
      a3 = *v47; /*0x87b835*/
      if ( a3 ) /*0x87b839*/
        ++v2[7].Unk08; /*0x87b83b*/
    }
    v48 = v392; /*0x87b83f*/
    LOBYTE(v393) = 1; /*0x87b845*/
    if ( v392 ) /*0x87b84a*/
    {
      --v392[7].Unk08; /*0x87b84c*/
      if ( !v48[7].Unk08 ) /*0x87b854*/
        sub_772560(v48); /*0x87b859*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x87b865*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x87b872*/
    v49 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b884*/
    v4 = v2 == (NiD3DTextureStage *)*v49; /*0x87b886*/
    LOBYTE(v393) = 0x14; /*0x87b889*/
    if ( !v4 ) /*0x87b88e*/
    {
      if ( v2 ) /*0x87b892*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b894*/
        if ( v4 ) /*0x87b897*/
          sub_772560(v2); /*0x87b89b*/
      }
      v2 = (NiD3DTextureStage *)*v49; /*0x87b8a0*/
      a3 = *v49; /*0x87b8a5*/
      if ( a3 ) /*0x87b8a9*/
        ++v2[7].Unk08; /*0x87b8ab*/
    }
    v50 = v392; /*0x87b8af*/
    LOBYTE(v393) = 1; /*0x87b8b5*/
    if ( v392 ) /*0x87b8ba*/
    {
      --v392[7].Unk08; /*0x87b8bc*/
      if ( !v50[7].Unk08 ) /*0x87b8c4*/
        sub_772560(v50); /*0x87b8c9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x87b8d5*/
    NiD3DTextureStage_SetTexture(v2, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87b8e6*/
    NiD3DPass_SetTextureStage(v1, 4u, &v2->Stage); /*0x87b8f0*/
    v51 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b902*/
    v4 = v2 == (NiD3DTextureStage *)*v51; /*0x87b904*/
    LOBYTE(v393) = 0x15; /*0x87b907*/
    if ( !v4 ) /*0x87b90c*/
    {
      if ( v2 ) /*0x87b910*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b912*/
        if ( v4 ) /*0x87b915*/
          sub_772560(v2); /*0x87b919*/
      }
      v2 = (NiD3DTextureStage *)*v51; /*0x87b91e*/
      a3 = *v51; /*0x87b923*/
      if ( a3 ) /*0x87b927*/
        ++v2[7].Unk08; /*0x87b929*/
    }
    v52 = v392; /*0x87b92d*/
    LOBYTE(v393) = 1; /*0x87b933*/
    if ( v392 ) /*0x87b938*/
    {
      --v392[7].Unk08; /*0x87b93a*/
      if ( !v52[7].Unk08 ) /*0x87b942*/
        sub_772560(v52); /*0x87b947*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x87b953*/
    NiD3DPass_SetTextureStage(v1, 5u, &v2->Stage); /*0x87b960*/
    v53 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87b972*/
    v4 = v2 == (NiD3DTextureStage *)*v53; /*0x87b974*/
    LOBYTE(v393) = 0x16; /*0x87b977*/
    if ( !v4 ) /*0x87b97c*/
    {
      if ( v2 ) /*0x87b980*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87b982*/
        if ( v4 ) /*0x87b985*/
          sub_772560(v2); /*0x87b989*/
      }
      v2 = (NiD3DTextureStage *)*v53; /*0x87b98e*/
      a3 = *v53; /*0x87b993*/
      if ( a3 ) /*0x87b997*/
        ++v2[7].Unk08; /*0x87b999*/
    }
    v54 = v392; /*0x87b99d*/
    LOBYTE(v393) = 1; /*0x87b9a3*/
    if ( v392 ) /*0x87b9a8*/
    {
      --v392[7].Unk08; /*0x87b9aa*/
      if ( !v54[7].Unk08 ) /*0x87b9b2*/
        sub_772560(v54); /*0x87b9b7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x87b9c3*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x87b9d0*/
  }
  v55 = (volatile LONG *)v391[0x31]; /*0x87b9d9*/
  v56 = v1->VertexShader; /*0x87b9df*/
  if ( v56 != (NiD3DVertexShader *)v55 ) /*0x87b9e4*/
  {
    if ( v56 ) /*0x87b9e8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) ) /*0x87b9ee*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v56)(v56, 1); /*0x87ba05*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v55; /*0x87ba09*/
    if ( v55 ) /*0x87ba0c*/
      InterlockedIncrement(v55 + 1); /*0x87ba12*/
  }
  v57 = (volatile LONG *)v391[0x40]; /*0x87ba1c*/
  v58 = v1->PixelShader; /*0x87ba22*/
  if ( v58 != (NiD3DPixelShader *)v57 ) /*0x87ba27*/
  {
    if ( v58 ) /*0x87ba2b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v58 + 1) ) /*0x87ba31*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v58)(v58, 1); /*0x87ba48*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v57; /*0x87ba4c*/
    if ( v57 ) /*0x87ba4f*/
      InterlockedIncrement(v57 + 1); /*0x87ba55*/
  }
  if ( !v1->RenderStateGroup ) /*0x87ba5b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ba66*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87ba75*/
  if ( !v1->RenderStateGroup ) /*0x87ba7a*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ba85*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87ba91*/
  if ( !v1->RenderStateGroup ) /*0x87ba96*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87baa1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87baad*/
  if ( !v1->RenderStateGroup ) /*0x87bab2*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87babd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87bac9*/
  if ( !v1->RenderStateGroup ) /*0x87bace*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87bad9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87bae5*/
  if ( !v1->RenderStateGroup ) /*0x87baea*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87baf5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87bb01*/
  if ( !v1->RenderStateGroup ) /*0x87bb06*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87bb11*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87bb1d*/
  v4 = v1 == (NiD3DPass *)unk_B47724; /*0x87bb25*/
  unk_B43C84 = 0x210F2; /*0x87bb2b*/
  unk_B44314 = 0x1C; /*0x87bb35*/
  if ( !v4 ) /*0x87bb3f*/
  {
    v4 = v1->RefCount-- == 1; /*0x87bb41*/
    if ( v4 ) /*0x87bb44*/
      NiD3DPass_ReleaseToPool(v1); /*0x87bb48*/
    v1 = (NiD3DPass *)unk_B47724; /*0x87bb4d*/
    v390 = (NiD3DPassVtbl **)unk_B47724; /*0x87bb55*/
    if ( v390 ) /*0x87bb59*/
      ++v1->RefCount; /*0x87bb5b*/
  }
  if ( v1->StageCount < 7 ) /*0x87bb63*/
  {
    v59 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87bb76*/
    v4 = v2 == (NiD3DTextureStage *)*v59; /*0x87bb78*/
    LOBYTE(v393) = 0x17; /*0x87bb7b*/
    if ( !v4 ) /*0x87bb80*/
    {
      if ( v2 ) /*0x87bb84*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87bb86*/
        if ( v4 ) /*0x87bb89*/
          sub_772560(v2); /*0x87bb8d*/
      }
      v2 = (NiD3DTextureStage *)*v59; /*0x87bb92*/
      a3 = *v59; /*0x87bb97*/
      if ( a3 ) /*0x87bb9b*/
        ++v2[7].Unk08; /*0x87bb9d*/
    }
    v60 = v392; /*0x87bba1*/
    LOBYTE(v393) = 1; /*0x87bba7*/
    if ( v392 ) /*0x87bbac*/
    {
      --v392[7].Unk08; /*0x87bbae*/
      if ( !v60[7].Unk08 ) /*0x87bbb6*/
        sub_772560(v60); /*0x87bbbb*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x87bbc7*/
    NiD3DPass_SetTextureStage(v1, 0, &v2->Stage); /*0x87bbd4*/
    v61 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87bbe6*/
    v4 = v2 == (NiD3DTextureStage *)*v61; /*0x87bbe8*/
    LOBYTE(v393) = 0x18; /*0x87bbeb*/
    if ( !v4 ) /*0x87bbf0*/
    {
      if ( v2 ) /*0x87bbf4*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87bbf6*/
        if ( v4 ) /*0x87bbf9*/
          sub_772560(v2); /*0x87bbfd*/
      }
      v2 = (NiD3DTextureStage *)*v61; /*0x87bc02*/
      a3 = *v61; /*0x87bc07*/
      if ( a3 ) /*0x87bc0b*/
        ++v2[7].Unk08; /*0x87bc0d*/
    }
    v62 = v392; /*0x87bc11*/
    LOBYTE(v393) = 1; /*0x87bc17*/
    if ( v392 ) /*0x87bc1c*/
    {
      --v392[7].Unk08; /*0x87bc1e*/
      if ( !v62[7].Unk08 ) /*0x87bc26*/
        sub_772560(v62); /*0x87bc2b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x87bc37*/
    NiD3DPass_SetTextureStage(v1, 1u, &v2->Stage); /*0x87bc44*/
    v63 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87bc56*/
    v4 = v2 == (NiD3DTextureStage *)*v63; /*0x87bc58*/
    LOBYTE(v393) = 0x19; /*0x87bc5b*/
    if ( !v4 ) /*0x87bc60*/
    {
      if ( v2 ) /*0x87bc64*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87bc66*/
        if ( v4 ) /*0x87bc69*/
          sub_772560(v2); /*0x87bc6d*/
      }
      v2 = (NiD3DTextureStage *)*v63; /*0x87bc72*/
      a3 = *v63; /*0x87bc77*/
      if ( a3 ) /*0x87bc7b*/
        ++v2[7].Unk08; /*0x87bc7d*/
    }
    v64 = v392; /*0x87bc81*/
    LOBYTE(v393) = 1; /*0x87bc87*/
    if ( v392 ) /*0x87bc8c*/
    {
      --v392[7].Unk08; /*0x87bc8e*/
      if ( !v64[7].Unk08 ) /*0x87bc96*/
        sub_772560(v64); /*0x87bc9b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x87bca7*/
    NiD3DPass_SetTextureStage(v1, 2u, &v2->Stage); /*0x87bcb4*/
    v65 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87bcc6*/
    v4 = v2 == (NiD3DTextureStage *)*v65; /*0x87bcc8*/
    LOBYTE(v393) = 0x1A; /*0x87bccb*/
    if ( !v4 ) /*0x87bcd0*/
    {
      if ( v2 ) /*0x87bcd4*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87bcd6*/
        if ( v4 ) /*0x87bcd9*/
          sub_772560(v2); /*0x87bcdd*/
      }
      v2 = (NiD3DTextureStage *)*v65; /*0x87bce2*/
      a3 = *v65; /*0x87bce7*/
      if ( a3 ) /*0x87bceb*/
        ++v2[7].Unk08; /*0x87bced*/
    }
    v66 = v392; /*0x87bcf1*/
    LOBYTE(v393) = 1; /*0x87bcf7*/
    if ( v392 ) /*0x87bcfc*/
    {
      --v392[7].Unk08; /*0x87bcfe*/
      if ( !v66[7].Unk08 ) /*0x87bd06*/
        sub_772560(v66); /*0x87bd0b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x87bd17*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x87bd24*/
    v67 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87bd36*/
    v4 = v2 == (NiD3DTextureStage *)*v67; /*0x87bd38*/
    LOBYTE(v393) = 0x1B; /*0x87bd3b*/
    if ( !v4 ) /*0x87bd40*/
    {
      if ( v2 ) /*0x87bd44*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87bd46*/
        if ( v4 ) /*0x87bd49*/
          sub_772560(v2); /*0x87bd4d*/
      }
      v2 = (NiD3DTextureStage *)*v67; /*0x87bd52*/
      a3 = *v67; /*0x87bd57*/
      if ( a3 ) /*0x87bd5b*/
        ++v2[7].Unk08; /*0x87bd5d*/
    }
    v68 = v392; /*0x87bd61*/
    LOBYTE(v393) = 1; /*0x87bd67*/
    if ( v392 ) /*0x87bd6c*/
    {
      --v392[7].Unk08; /*0x87bd6e*/
      if ( !v68[7].Unk08 ) /*0x87bd76*/
        sub_772560(v68); /*0x87bd7b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x87bd87*/
    NiD3DTextureStage_SetTexture(v2, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87bd98*/
    NiD3DPass_SetTextureStage(v1, 4u, &v2->Stage); /*0x87bda2*/
    v69 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87bdb4*/
    v4 = v2 == (NiD3DTextureStage *)*v69; /*0x87bdb6*/
    LOBYTE(v393) = 0x1C; /*0x87bdb9*/
    if ( !v4 ) /*0x87bdbe*/
    {
      if ( v2 ) /*0x87bdc2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87bdc4*/
        if ( v4 ) /*0x87bdc7*/
          sub_772560(v2); /*0x87bdcb*/
      }
      v2 = (NiD3DTextureStage *)*v69; /*0x87bdd0*/
      a3 = *v69; /*0x87bdd5*/
      if ( a3 ) /*0x87bdd9*/
        ++v2[7].Unk08; /*0x87bddb*/
    }
    v70 = v392; /*0x87bddf*/
    LOBYTE(v393) = 1; /*0x87bde5*/
    if ( v392 ) /*0x87bdea*/
    {
      --v392[7].Unk08; /*0x87bdec*/
      if ( !v70[7].Unk08 ) /*0x87bdf4*/
        sub_772560(v70); /*0x87bdf9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x87be05*/
    NiD3DPass_SetTextureStage(v1, 5u, &v2->Stage); /*0x87be12*/
    v71 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87be24*/
    v4 = v2 == (NiD3DTextureStage *)*v71; /*0x87be26*/
    LOBYTE(v393) = 0x1D; /*0x87be29*/
    if ( !v4 ) /*0x87be2e*/
    {
      if ( v2 ) /*0x87be32*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87be34*/
        if ( v4 ) /*0x87be37*/
          sub_772560(v2); /*0x87be3b*/
      }
      v2 = (NiD3DTextureStage *)*v71; /*0x87be40*/
      a3 = *v71; /*0x87be45*/
      if ( a3 ) /*0x87be49*/
        ++v2[7].Unk08; /*0x87be4b*/
    }
    v72 = v392; /*0x87be4f*/
    LOBYTE(v393) = 1; /*0x87be55*/
    if ( v392 ) /*0x87be5a*/
    {
      --v392[7].Unk08; /*0x87be5c*/
      if ( !v72[7].Unk08 ) /*0x87be64*/
        sub_772560(v72); /*0x87be69*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x87be75*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x87be82*/
  }
  v73 = (volatile LONG *)v391[0x32]; /*0x87be8b*/
  v74 = v1->VertexShader; /*0x87be91*/
  if ( v74 != (NiD3DVertexShader *)v73 ) /*0x87be96*/
  {
    if ( v74 ) /*0x87be9a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v74 + 1) ) /*0x87bea0*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v74)(v74, 1); /*0x87beb7*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v73; /*0x87bebb*/
    if ( v73 ) /*0x87bebe*/
      InterlockedIncrement(v73 + 1); /*0x87bec4*/
  }
  v75 = (volatile LONG *)v391[0x40]; /*0x87bece*/
  v76 = v1->PixelShader; /*0x87bed4*/
  if ( v76 != (NiD3DPixelShader *)v75 ) /*0x87bed9*/
  {
    if ( v76 ) /*0x87bedd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v76 + 1) ) /*0x87bee3*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v76)(v76, 1); /*0x87befa*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v75; /*0x87befe*/
    if ( v75 ) /*0x87bf01*/
      InterlockedIncrement(v75 + 1); /*0x87bf07*/
  }
  if ( !v1->RenderStateGroup ) /*0x87bf0d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87bf18*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87bf27*/
  if ( !v1->RenderStateGroup ) /*0x87bf2c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87bf37*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87bf43*/
  if ( !v1->RenderStateGroup ) /*0x87bf48*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87bf53*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87bf5f*/
  if ( !v1->RenderStateGroup ) /*0x87bf64*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87bf6f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87bf7b*/
  if ( !v1->RenderStateGroup ) /*0x87bf80*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87bf8b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87bf97*/
  if ( !v1->RenderStateGroup ) /*0x87bf9c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87bfa7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87bfb3*/
  if ( !v1->RenderStateGroup ) /*0x87bfb8*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87bfc3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87bfcf*/
  v4 = v1 == (NiD3DPass *)unk_B47728; /*0x87bfd7*/
  unk_B43C98 = 0x610F8; /*0x87bfdd*/
  unk_B44328 = 0x1C; /*0x87bfe7*/
  if ( !v4 ) /*0x87bff1*/
  {
    v4 = v1->RefCount-- == 1; /*0x87bff3*/
    if ( v4 ) /*0x87bff6*/
      NiD3DPass_ReleaseToPool(v1); /*0x87bffa*/
    v1 = (NiD3DPass *)unk_B47728; /*0x87bfff*/
    v390 = (NiD3DPassVtbl **)unk_B47728; /*0x87c007*/
    if ( v390 ) /*0x87c00b*/
      ++v1->RefCount; /*0x87c00d*/
  }
  if ( v1->StageCount < 7 ) /*0x87c015*/
  {
    v77 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c028*/
    v4 = v2 == (NiD3DTextureStage *)*v77; /*0x87c02a*/
    LOBYTE(v393) = 0x1E; /*0x87c02d*/
    if ( !v4 ) /*0x87c032*/
    {
      if ( v2 ) /*0x87c036*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87c038*/
        if ( v4 ) /*0x87c03b*/
          sub_772560(v2); /*0x87c03f*/
      }
      v2 = (NiD3DTextureStage *)*v77; /*0x87c044*/
      a3 = *v77; /*0x87c049*/
      if ( a3 ) /*0x87c04d*/
        ++v2[7].Unk08; /*0x87c04f*/
    }
    v78 = v392; /*0x87c053*/
    LOBYTE(v393) = 1; /*0x87c059*/
    if ( v392 ) /*0x87c05e*/
    {
      --v392[7].Unk08; /*0x87c060*/
      if ( !v78[7].Unk08 ) /*0x87c068*/
        sub_772560(v78); /*0x87c06d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x87c079*/
    NiD3DPass_SetTextureStage(v1, 0, &v2->Stage); /*0x87c086*/
    v79 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c098*/
    v4 = v2 == (NiD3DTextureStage *)*v79; /*0x87c09a*/
    LOBYTE(v393) = 0x1F; /*0x87c09d*/
    if ( !v4 ) /*0x87c0a2*/
    {
      if ( v2 ) /*0x87c0a6*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87c0a8*/
        if ( v4 ) /*0x87c0ab*/
          sub_772560(v2); /*0x87c0af*/
      }
      v2 = (NiD3DTextureStage *)*v79; /*0x87c0b4*/
      a3 = *v79; /*0x87c0b9*/
      if ( a3 ) /*0x87c0bd*/
        ++v2[7].Unk08; /*0x87c0bf*/
    }
    v80 = v392; /*0x87c0c3*/
    LOBYTE(v393) = 1; /*0x87c0c9*/
    if ( v392 ) /*0x87c0ce*/
    {
      --v392[7].Unk08; /*0x87c0d0*/
      if ( !v80[7].Unk08 ) /*0x87c0d8*/
        sub_772560(v80); /*0x87c0dd*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x87c0e9*/
    NiD3DPass_SetTextureStage(v1, 1u, &v2->Stage); /*0x87c0f6*/
    v81 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c108*/
    v4 = v2 == (NiD3DTextureStage *)*v81; /*0x87c10a*/
    LOBYTE(v393) = 0x20; /*0x87c10d*/
    if ( !v4 ) /*0x87c112*/
    {
      if ( v2 ) /*0x87c116*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87c118*/
        if ( v4 ) /*0x87c11b*/
          sub_772560(v2); /*0x87c11f*/
      }
      v2 = (NiD3DTextureStage *)*v81; /*0x87c124*/
      a3 = *v81; /*0x87c129*/
      if ( a3 ) /*0x87c12d*/
        ++v2[7].Unk08; /*0x87c12f*/
    }
    v82 = v392; /*0x87c133*/
    LOBYTE(v393) = 1; /*0x87c139*/
    if ( v392 ) /*0x87c13e*/
    {
      --v392[7].Unk08; /*0x87c140*/
      if ( !v82[7].Unk08 ) /*0x87c148*/
        sub_772560(v82); /*0x87c14d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x87c159*/
    NiD3DPass_SetTextureStage(v1, 2u, &v2->Stage); /*0x87c166*/
    v83 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c178*/
    v4 = v2 == (NiD3DTextureStage *)*v83; /*0x87c17a*/
    LOBYTE(v393) = 0x21; /*0x87c17d*/
    if ( !v4 ) /*0x87c182*/
    {
      if ( v2 ) /*0x87c186*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87c188*/
        if ( v4 ) /*0x87c18b*/
          sub_772560(v2); /*0x87c18f*/
      }
      v2 = (NiD3DTextureStage *)*v83; /*0x87c194*/
      a3 = *v83; /*0x87c199*/
      if ( a3 ) /*0x87c19d*/
        ++v2[7].Unk08; /*0x87c19f*/
    }
    v84 = v392; /*0x87c1a3*/
    LOBYTE(v393) = 1; /*0x87c1a9*/
    if ( v392 ) /*0x87c1ae*/
    {
      --v392[7].Unk08; /*0x87c1b0*/
      if ( !v84[7].Unk08 ) /*0x87c1b8*/
        sub_772560(v84); /*0x87c1bd*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x87c1c9*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x87c1d6*/
    v85 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c1e8*/
    v4 = v2 == (NiD3DTextureStage *)*v85; /*0x87c1ea*/
    LOBYTE(v393) = 0x22; /*0x87c1ed*/
    if ( !v4 ) /*0x87c1f2*/
    {
      if ( v2 ) /*0x87c1f6*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87c1f8*/
        if ( v4 ) /*0x87c1fb*/
          sub_772560(v2); /*0x87c1ff*/
      }
      v2 = (NiD3DTextureStage *)*v85; /*0x87c204*/
      a3 = *v85; /*0x87c209*/
      if ( a3 ) /*0x87c20d*/
        ++v2[7].Unk08; /*0x87c20f*/
    }
    v86 = v392; /*0x87c213*/
    LOBYTE(v393) = 1; /*0x87c219*/
    if ( v392 ) /*0x87c21e*/
    {
      --v392[7].Unk08; /*0x87c220*/
      if ( !v86[7].Unk08 ) /*0x87c228*/
        sub_772560(v86); /*0x87c22d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x87c239*/
    NiD3DTextureStage_SetTexture(v2, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87c24a*/
    NiD3DPass_SetTextureStage(v1, 4u, &v2->Stage); /*0x87c254*/
    v87 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c266*/
    v4 = v2 == (NiD3DTextureStage *)*v87; /*0x87c268*/
    LOBYTE(v393) = 0x23; /*0x87c26b*/
    if ( !v4 ) /*0x87c270*/
    {
      if ( v2 ) /*0x87c274*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87c276*/
        if ( v4 ) /*0x87c279*/
          sub_772560(v2); /*0x87c27d*/
      }
      v2 = (NiD3DTextureStage *)*v87; /*0x87c282*/
      a3 = *v87; /*0x87c287*/
      if ( a3 ) /*0x87c28b*/
        ++v2[7].Unk08; /*0x87c28d*/
    }
    v88 = v392; /*0x87c291*/
    LOBYTE(v393) = 1; /*0x87c297*/
    if ( v392 ) /*0x87c29c*/
    {
      --v392[7].Unk08; /*0x87c29e*/
      if ( !v88[7].Unk08 ) /*0x87c2a6*/
        sub_772560(v88); /*0x87c2ab*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x87c2b7*/
    NiD3DPass_SetTextureStage(v1, 5u, &v2->Stage); /*0x87c2c4*/
    v89 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c2d6*/
    v4 = v2 == (NiD3DTextureStage *)*v89; /*0x87c2d8*/
    LOBYTE(v393) = 0x24; /*0x87c2db*/
    if ( !v4 ) /*0x87c2e0*/
    {
      if ( v2 ) /*0x87c2e4*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87c2e6*/
        if ( v4 ) /*0x87c2e9*/
          sub_772560(v2); /*0x87c2ed*/
      }
      v2 = (NiD3DTextureStage *)*v89; /*0x87c2f2*/
      a3 = *v89; /*0x87c2f7*/
      if ( a3 ) /*0x87c2fb*/
        ++v2[7].Unk08; /*0x87c2fd*/
    }
    v90 = v392; /*0x87c301*/
    LOBYTE(v393) = 1; /*0x87c307*/
    if ( v392 ) /*0x87c30c*/
    {
      --v392[7].Unk08; /*0x87c30e*/
      if ( !v90[7].Unk08 ) /*0x87c316*/
        sub_772560(v90); /*0x87c31b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x87c327*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x87c334*/
  }
  v91 = (NiD3DVertexShader **)v391; /*0x87c339*/
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v391[0x33]); /*0x87c346*/
  NiD3DPass_SetPixelShader(v1, (NiD3DPixelShader *)v391[0x41]); /*0x87c354*/
  if ( !v1->RenderStateGroup ) /*0x87c359*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c364*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87c373*/
  if ( !v1->RenderStateGroup ) /*0x87c378*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c383*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87c38f*/
  if ( !v1->RenderStateGroup ) /*0x87c394*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c39f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87c3ab*/
  if ( !v1->RenderStateGroup ) /*0x87c3b0*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c3bb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87c3c7*/
  if ( !v1->RenderStateGroup ) /*0x87c3cc*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c3d7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87c3e3*/
  if ( !v1->RenderStateGroup ) /*0x87c3e8*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c3f3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87c3ff*/
  if ( !v1->RenderStateGroup ) /*0x87c404*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c40f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87c41b*/
  v4 = v1 == (NiD3DPass *)unk_B4772C; /*0x87c420*/
  unk_B43CB0 = 0x23082; /*0x87c42b*/
  unk_B44340 = 0x3C; /*0x87c435*/
  if ( !v4 ) /*0x87c43b*/
  {
    v4 = v1->RefCount-- == 1; /*0x87c43d*/
    if ( v4 ) /*0x87c441*/
      NiD3DPass_ReleaseToPool(v1); /*0x87c445*/
    v1 = (NiD3DPass *)unk_B4772C; /*0x87c44a*/
    v390 = (NiD3DPassVtbl **)unk_B4772C; /*0x87c452*/
    if ( v390 ) /*0x87c456*/
      ++v1->RefCount; /*0x87c458*/
  }
  if ( v1->StageCount < 7 ) /*0x87c460*/
  {
    v92 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c46b*/
    LOBYTE(v393) = 0x25; /*0x87c478*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v92); /*0x87c47d*/
    v93 = v392; /*0x87c482*/
    LOBYTE(v393) = 1; /*0x87c488*/
    if ( v392 ) /*0x87c48d*/
    {
      --v392[7].Unk08; /*0x87c48f*/
      if ( !v93[7].Unk08 ) /*0x87c498*/
        sub_772560(v93); /*0x87c49d*/
    }
    v94 = a3; /*0x87c4a2*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87c4ad*/
    NiD3DPass_SetTextureStage(v1, 0, v94); /*0x87c4ba*/
    v95 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c4c4*/
    LOBYTE(v393) = 0x26; /*0x87c4d1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v95); /*0x87c4d6*/
    v96 = v392; /*0x87c4db*/
    LOBYTE(v393) = 1; /*0x87c4e1*/
    if ( v392 ) /*0x87c4e6*/
    {
      --v392[7].Unk08; /*0x87c4e8*/
      if ( !v96[7].Unk08 ) /*0x87c4f1*/
        sub_772560(v96); /*0x87c4f6*/
    }
    v97 = a3; /*0x87c4fb*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87c506*/
    NiD3DPass_SetTextureStage(v1, 1u, v97); /*0x87c513*/
    v98 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c51d*/
    LOBYTE(v393) = 0x27; /*0x87c52a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v98); /*0x87c52f*/
    v99 = v392; /*0x87c534*/
    LOBYTE(v393) = 1; /*0x87c53a*/
    if ( v392 ) /*0x87c53f*/
    {
      --v392[7].Unk08; /*0x87c541*/
      if ( !v99[7].Unk08 ) /*0x87c54a*/
        sub_772560(v99); /*0x87c54f*/
    }
    v100 = a3; /*0x87c554*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87c55f*/
    NiD3DPass_SetTextureStage(v1, 2u, v100); /*0x87c56c*/
    v101 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c576*/
    LOBYTE(v393) = 0x28; /*0x87c583*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v101); /*0x87c588*/
    v102 = v392; /*0x87c58d*/
    LOBYTE(v393) = 1; /*0x87c593*/
    if ( v392 ) /*0x87c598*/
    {
      --v392[7].Unk08; /*0x87c59a*/
      if ( !v102[7].Unk08 ) /*0x87c5a3*/
        sub_772560(v102); /*0x87c5a8*/
    }
    v103 = a3; /*0x87c5ad*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87c5b8*/
    NiD3DPass_SetTextureStage(v1, 3u, v103); /*0x87c5c5*/
    v104 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c5cf*/
    LOBYTE(v393) = 0x29; /*0x87c5dc*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v104); /*0x87c5e1*/
    v105 = v392; /*0x87c5e6*/
    LOBYTE(v393) = 1; /*0x87c5ec*/
    if ( v392 ) /*0x87c5f1*/
    {
      --v392[7].Unk08; /*0x87c5f3*/
      if ( !v105[7].Unk08 ) /*0x87c5fc*/
        sub_772560(v105); /*0x87c601*/
    }
    v106 = (NiD3DTextureStage *)a3; /*0x87c606*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x87c611*/
    NiD3DTextureStage_SetTexture(v106, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87c622*/
    NiD3DPass_SetTextureStage(v1, 4u, &v106->Stage); /*0x87c62c*/
    v107 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c636*/
    LOBYTE(v393) = 0x2A; /*0x87c643*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v107); /*0x87c648*/
    v108 = v392; /*0x87c64d*/
    LOBYTE(v393) = 1; /*0x87c653*/
    if ( v392 ) /*0x87c658*/
    {
      --v392[7].Unk08; /*0x87c65a*/
      if ( !v108[7].Unk08 ) /*0x87c663*/
        sub_772560(v108); /*0x87c668*/
    }
    v109 = a3; /*0x87c66d*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x87c678*/
    NiD3DPass_SetTextureStage(v1, 5u, v109); /*0x87c685*/
    v110 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c68f*/
    LOBYTE(v393) = 0x2B; /*0x87c69c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v110); /*0x87c6a1*/
    v111 = v392; /*0x87c6a6*/
    LOBYTE(v393) = 1; /*0x87c6ac*/
    if ( v392 ) /*0x87c6b1*/
    {
      --v392[7].Unk08; /*0x87c6b3*/
      if ( !v111[7].Unk08 ) /*0x87c6bc*/
        sub_772560(v111); /*0x87c6c1*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87c6c6*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x87c6d1*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x87c6de*/
  }
  NiD3DPass_SetVertexShader(v1, v91[0x34]); /*0x87c6ec*/
  NiD3DPass_SetPixelShader(v1, v91[0x41]); /*0x87c6fa*/
  if ( !v1->RenderStateGroup ) /*0x87c6ff*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c70a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87c719*/
  if ( !v1->RenderStateGroup ) /*0x87c71e*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c729*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87c735*/
  if ( !v1->RenderStateGroup ) /*0x87c73a*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c745*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87c751*/
  if ( !v1->RenderStateGroup ) /*0x87c756*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c761*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87c76d*/
  if ( !v1->RenderStateGroup ) /*0x87c772*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c77d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87c789*/
  if ( !v1->RenderStateGroup ) /*0x87c78e*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c799*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87c7a5*/
  if ( !v1->RenderStateGroup ) /*0x87c7aa*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87c7b5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87c7c1*/
  v4 = v1 == (NiD3DPass *)unk_B47730; /*0x87c7c6*/
  unk_B43CC4 = 0x63088; /*0x87c7cc*/
  unk_B44354 = 0x3C; /*0x87c7d6*/
  if ( !v4 ) /*0x87c7dc*/
  {
    v4 = v1->RefCount-- == 1; /*0x87c7de*/
    if ( v4 ) /*0x87c7e2*/
      NiD3DPass_ReleaseToPool(v1); /*0x87c7e6*/
    v1 = (NiD3DPass *)unk_B47730; /*0x87c7eb*/
    v390 = (NiD3DPassVtbl **)unk_B47730; /*0x87c7f3*/
    if ( v390 ) /*0x87c7f7*/
      ++v1->RefCount; /*0x87c7f9*/
  }
  if ( v1->StageCount < 7 ) /*0x87c801*/
  {
    v112 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c80c*/
    LOBYTE(v393) = 0x2C; /*0x87c819*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v112); /*0x87c81e*/
    v113 = v392; /*0x87c823*/
    LOBYTE(v393) = 1; /*0x87c829*/
    if ( v392 ) /*0x87c82e*/
    {
      --v392[7].Unk08; /*0x87c830*/
      if ( !v113[7].Unk08 ) /*0x87c839*/
        sub_772560(v113); /*0x87c83e*/
    }
    v114 = a3; /*0x87c843*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87c84e*/
    NiD3DPass_SetTextureStage(v1, 0, v114); /*0x87c85b*/
    v115 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c865*/
    LOBYTE(v393) = 0x2D; /*0x87c872*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v115); /*0x87c877*/
    v116 = v392; /*0x87c87c*/
    LOBYTE(v393) = 1; /*0x87c882*/
    if ( v392 ) /*0x87c887*/
    {
      --v392[7].Unk08; /*0x87c889*/
      if ( !v116[7].Unk08 ) /*0x87c892*/
        sub_772560(v116); /*0x87c897*/
    }
    v117 = a3; /*0x87c89c*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87c8a7*/
    NiD3DPass_SetTextureStage(v1, 1u, v117); /*0x87c8b4*/
    v118 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c8be*/
    LOBYTE(v393) = 0x2E; /*0x87c8cb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v118); /*0x87c8d0*/
    v119 = v392; /*0x87c8d5*/
    LOBYTE(v393) = 1; /*0x87c8db*/
    if ( v392 ) /*0x87c8e0*/
    {
      --v392[7].Unk08; /*0x87c8e2*/
      if ( !v119[7].Unk08 ) /*0x87c8eb*/
        sub_772560(v119); /*0x87c8f0*/
    }
    v120 = a3; /*0x87c8f5*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87c900*/
    NiD3DPass_SetTextureStage(v1, 2u, v120); /*0x87c90d*/
    v121 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c917*/
    LOBYTE(v393) = 0x2F; /*0x87c924*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v121); /*0x87c929*/
    v122 = v392; /*0x87c92e*/
    LOBYTE(v393) = 1; /*0x87c934*/
    if ( v392 ) /*0x87c939*/
    {
      --v392[7].Unk08; /*0x87c93b*/
      if ( !v122[7].Unk08 ) /*0x87c944*/
        sub_772560(v122); /*0x87c949*/
    }
    v123 = a3; /*0x87c94e*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87c959*/
    NiD3DPass_SetTextureStage(v1, 3u, v123); /*0x87c966*/
    v124 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c970*/
    LOBYTE(v393) = 0x30; /*0x87c97d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v124); /*0x87c982*/
    v125 = v392; /*0x87c987*/
    LOBYTE(v393) = 1; /*0x87c98d*/
    if ( v392 ) /*0x87c992*/
    {
      --v392[7].Unk08; /*0x87c994*/
      if ( !v125[7].Unk08 ) /*0x87c99d*/
        sub_772560(v125); /*0x87c9a2*/
    }
    v126 = (NiD3DTextureStage *)a3; /*0x87c9a7*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x87c9b2*/
    NiD3DTextureStage_SetTexture(v126, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87c9c2*/
    NiD3DPass_SetTextureStage(v1, 4u, &v126->Stage); /*0x87c9cc*/
    v127 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87c9d6*/
    LOBYTE(v393) = 0x31; /*0x87c9e3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v127); /*0x87c9e8*/
    v128 = v392; /*0x87c9ed*/
    LOBYTE(v393) = 1; /*0x87c9f3*/
    if ( v392 ) /*0x87c9f8*/
    {
      --v392[7].Unk08; /*0x87c9fa*/
      if ( !v128[7].Unk08 ) /*0x87ca03*/
        sub_772560(v128); /*0x87ca08*/
    }
    v129 = a3; /*0x87ca0d*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x87ca18*/
    NiD3DPass_SetTextureStage(v1, 5u, v129); /*0x87ca25*/
    v130 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ca2f*/
    LOBYTE(v393) = 0x32; /*0x87ca3c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v130); /*0x87ca41*/
    v131 = v392; /*0x87ca46*/
    LOBYTE(v393) = 1; /*0x87ca4c*/
    if ( v392 ) /*0x87ca51*/
    {
      --v392[7].Unk08; /*0x87ca53*/
      if ( !v131[7].Unk08 ) /*0x87ca5c*/
        sub_772560(v131); /*0x87ca61*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87ca66*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x87ca71*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x87ca7e*/
  }
  NiD3DPass_SetVertexShader(v1, v91[0x35]); /*0x87ca8c*/
  NiD3DPass_SetPixelShader(v1, v91[0x42]); /*0x87ca9a*/
  if ( !v1->RenderStateGroup ) /*0x87ca9f*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87caaa*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87cab9*/
  if ( !v1->RenderStateGroup ) /*0x87cabe*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87cac9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87cad5*/
  if ( !v1->RenderStateGroup ) /*0x87cada*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87cae5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87caf1*/
  if ( !v1->RenderStateGroup ) /*0x87caf6*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87cb01*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87cb0d*/
  if ( !v1->RenderStateGroup ) /*0x87cb12*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87cb1d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87cb29*/
  if ( !v1->RenderStateGroup ) /*0x87cb2e*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87cb39*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87cb45*/
  if ( !v1->RenderStateGroup ) /*0x87cb4a*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87cb55*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87cb61*/
  v4 = v1 == (NiD3DPass *)unk_B47734; /*0x87cb66*/
  unk_B43CDC = 0x230F2; /*0x87cb6c*/
  unk_B4436C = 0x3C; /*0x87cb76*/
  if ( !v4 ) /*0x87cb7c*/
  {
    v4 = v1->RefCount-- == 1; /*0x87cb7e*/
    if ( v4 ) /*0x87cb82*/
      NiD3DPass_ReleaseToPool(v1); /*0x87cb86*/
    v1 = (NiD3DPass *)unk_B47734; /*0x87cb8b*/
    v390 = (NiD3DPassVtbl **)unk_B47734; /*0x87cb93*/
    if ( v390 ) /*0x87cb97*/
      ++v1->RefCount; /*0x87cb99*/
  }
  if ( v1->StageCount < 7 ) /*0x87cba1*/
  {
    v132 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87cbac*/
    LOBYTE(v393) = 0x33; /*0x87cbb9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v132); /*0x87cbbe*/
    v133 = v392; /*0x87cbc3*/
    LOBYTE(v393) = 1; /*0x87cbc9*/
    if ( v392 ) /*0x87cbce*/
    {
      --v392[7].Unk08; /*0x87cbd0*/
      if ( !v133[7].Unk08 ) /*0x87cbd9*/
        sub_772560(v133); /*0x87cbde*/
    }
    v134 = a3; /*0x87cbe3*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87cbee*/
    NiD3DPass_SetTextureStage(v1, 0, v134); /*0x87cbfb*/
    v135 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87cc05*/
    LOBYTE(v393) = 0x34; /*0x87cc12*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v135); /*0x87cc17*/
    v136 = v392; /*0x87cc1c*/
    LOBYTE(v393) = 1; /*0x87cc22*/
    if ( v392 ) /*0x87cc27*/
    {
      --v392[7].Unk08; /*0x87cc29*/
      if ( !v136[7].Unk08 ) /*0x87cc32*/
        sub_772560(v136); /*0x87cc37*/
    }
    v137 = a3; /*0x87cc3c*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87cc47*/
    NiD3DPass_SetTextureStage(v1, 1u, v137); /*0x87cc54*/
    v138 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87cc5e*/
    LOBYTE(v393) = 0x35; /*0x87cc6b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v138); /*0x87cc70*/
    v139 = v392; /*0x87cc75*/
    LOBYTE(v393) = 1; /*0x87cc7b*/
    if ( v392 ) /*0x87cc80*/
    {
      --v392[7].Unk08; /*0x87cc82*/
      if ( !v139[7].Unk08 ) /*0x87cc8b*/
        sub_772560(v139); /*0x87cc90*/
    }
    v140 = a3; /*0x87cc95*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87cca0*/
    NiD3DPass_SetTextureStage(v1, 2u, v140); /*0x87ccad*/
    v141 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ccb7*/
    LOBYTE(v393) = 0x36; /*0x87ccc4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v141); /*0x87ccc9*/
    v142 = v392; /*0x87ccce*/
    LOBYTE(v393) = 1; /*0x87ccd4*/
    if ( v392 ) /*0x87ccd9*/
    {
      --v392[7].Unk08; /*0x87ccdb*/
      if ( !v142[7].Unk08 ) /*0x87cce4*/
        sub_772560(v142); /*0x87cce9*/
    }
    v143 = a3; /*0x87ccee*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87ccf9*/
    NiD3DPass_SetTextureStage(v1, 3u, v143); /*0x87cd06*/
    v144 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87cd10*/
    LOBYTE(v393) = 0x37; /*0x87cd1d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v144); /*0x87cd22*/
    v145 = v392; /*0x87cd27*/
    LOBYTE(v393) = 1; /*0x87cd2d*/
    if ( v392 ) /*0x87cd32*/
    {
      --v392[7].Unk08; /*0x87cd34*/
      if ( !v145[7].Unk08 ) /*0x87cd3d*/
        sub_772560(v145); /*0x87cd42*/
    }
    v146 = (NiD3DTextureStage *)a3; /*0x87cd47*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x87cd52*/
    NiD3DTextureStage_SetTexture(v146, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87cd63*/
    NiD3DPass_SetTextureStage(v1, 4u, &v146->Stage); /*0x87cd6d*/
    v147 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87cd77*/
    LOBYTE(v393) = 0x38; /*0x87cd84*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v147); /*0x87cd89*/
    v148 = v392; /*0x87cd8e*/
    LOBYTE(v393) = 1; /*0x87cd94*/
    if ( v392 ) /*0x87cd99*/
    {
      --v392[7].Unk08; /*0x87cd9b*/
      if ( !v148[7].Unk08 ) /*0x87cda4*/
        sub_772560(v148); /*0x87cda9*/
    }
    v149 = a3; /*0x87cdae*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x87cdb9*/
    NiD3DPass_SetTextureStage(v1, 5u, v149); /*0x87cdc6*/
    v150 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87cdd0*/
    LOBYTE(v393) = 0x39; /*0x87cddd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v150); /*0x87cde2*/
    v151 = v392; /*0x87cde7*/
    LOBYTE(v393) = 1; /*0x87cded*/
    if ( v392 ) /*0x87cdf2*/
    {
      --v392[7].Unk08; /*0x87cdf4*/
      if ( !v151[7].Unk08 ) /*0x87cdfd*/
        sub_772560(v151); /*0x87ce02*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87ce07*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x87ce12*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x87ce1f*/
  }
  NiD3DPass_SetVertexShader(v1, v91[0x36]); /*0x87ce2d*/
  NiD3DPass_SetPixelShader(v1, v91[0x42]); /*0x87ce3b*/
  if ( !v1->RenderStateGroup ) /*0x87ce40*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ce4b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87ce5a*/
  if ( !v1->RenderStateGroup ) /*0x87ce5f*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ce6a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87ce76*/
  if ( !v1->RenderStateGroup ) /*0x87ce7b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ce86*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87ce92*/
  if ( !v1->RenderStateGroup ) /*0x87ce97*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87cea2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87ceae*/
  if ( !v1->RenderStateGroup ) /*0x87ceb3*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87cebe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87ceca*/
  if ( !v1->RenderStateGroup ) /*0x87cecf*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ceda*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87cee6*/
  if ( !v1->RenderStateGroup ) /*0x87ceeb*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87cef6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87cf02*/
  v4 = v1 == (NiD3DPass *)unk_B47738; /*0x87cf07*/
  unk_B43CF0 = 0x630F8; /*0x87cf0d*/
  unk_B44380 = 0x3C; /*0x87cf17*/
  if ( !v4 ) /*0x87cf1d*/
  {
    v4 = v1->RefCount-- == 1; /*0x87cf1f*/
    if ( v4 ) /*0x87cf23*/
      NiD3DPass_ReleaseToPool(v1); /*0x87cf27*/
    v1 = (NiD3DPass *)unk_B47738; /*0x87cf2c*/
    v390 = (NiD3DPassVtbl **)unk_B47738; /*0x87cf34*/
    if ( v390 ) /*0x87cf38*/
      ++v1->RefCount; /*0x87cf3a*/
  }
  if ( v1->StageCount < 8 ) /*0x87cf46*/
  {
    v152 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87cf51*/
    LOBYTE(v393) = 0x3A; /*0x87cf5e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v152); /*0x87cf63*/
    v153 = v392; /*0x87cf68*/
    LOBYTE(v393) = 1; /*0x87cf6e*/
    if ( v392 ) /*0x87cf73*/
    {
      --v392[7].Unk08; /*0x87cf75*/
      if ( !v153[7].Unk08 ) /*0x87cf7e*/
        sub_772560(v153); /*0x87cf83*/
    }
    v154 = a3; /*0x87cf88*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87cf93*/
    NiD3DPass_SetTextureStage(v1, 0, v154); /*0x87cfa0*/
    v155 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87cfaa*/
    LOBYTE(v393) = 0x3B; /*0x87cfb7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v155); /*0x87cfbc*/
    v156 = v392; /*0x87cfc1*/
    LOBYTE(v393) = 1; /*0x87cfc7*/
    if ( v392 ) /*0x87cfcc*/
    {
      --v392[7].Unk08; /*0x87cfce*/
      if ( !v156[7].Unk08 ) /*0x87cfd7*/
        sub_772560(v156); /*0x87cfdc*/
    }
    v157 = a3; /*0x87cfe1*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87cfec*/
    NiD3DPass_SetTextureStage(v1, 1u, v157); /*0x87cff9*/
    v158 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d003*/
    LOBYTE(v393) = 0x3C; /*0x87d010*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v158); /*0x87d015*/
    v159 = v392; /*0x87d01a*/
    LOBYTE(v393) = 1; /*0x87d020*/
    if ( v392 ) /*0x87d025*/
    {
      --v392[7].Unk08; /*0x87d027*/
      if ( !v159[7].Unk08 ) /*0x87d030*/
        sub_772560(v159); /*0x87d035*/
    }
    v160 = a3; /*0x87d03a*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87d045*/
    NiD3DPass_SetTextureStage(v1, 2u, v160); /*0x87d052*/
    v161 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d05c*/
    LOBYTE(v393) = 0x3D; /*0x87d069*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v161); /*0x87d06e*/
    v162 = v392; /*0x87d073*/
    LOBYTE(v393) = 1; /*0x87d079*/
    if ( v392 ) /*0x87d07e*/
    {
      --v392[7].Unk08; /*0x87d080*/
      if ( !v162[7].Unk08 ) /*0x87d089*/
        sub_772560(v162); /*0x87d08e*/
    }
    v163 = a3; /*0x87d093*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87d09e*/
    NiD3DPass_SetTextureStage(v1, 3u, v163); /*0x87d0ab*/
    v164 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d0b5*/
    LOBYTE(v393) = 0x3E; /*0x87d0c2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v164); /*0x87d0c7*/
    v165 = v392; /*0x87d0cc*/
    LOBYTE(v393) = 1; /*0x87d0d2*/
    if ( v392 ) /*0x87d0d7*/
    {
      --v392[7].Unk08; /*0x87d0d9*/
      if ( !v165[7].Unk08 ) /*0x87d0e2*/
        sub_772560(v165); /*0x87d0e7*/
    }
    v166 = a3; /*0x87d0ec*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x87d0f7*/
    NiD3DPass_SetTextureStage(v1, 4u, v166); /*0x87d104*/
    v167 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d10e*/
    LOBYTE(v393) = 0x3F; /*0x87d11b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v167); /*0x87d120*/
    v168 = v392; /*0x87d125*/
    LOBYTE(v393) = 1; /*0x87d12b*/
    if ( v392 ) /*0x87d130*/
    {
      --v392[7].Unk08; /*0x87d132*/
      if ( !v168[7].Unk08 ) /*0x87d13b*/
        sub_772560(v168); /*0x87d140*/
    }
    v169 = (NiD3DTextureStage *)a3; /*0x87d145*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x87d150*/
    NiD3DTextureStage_SetTexture(v169, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87d161*/
    NiD3DPass_SetTextureStage(v1, 5u, &v169->Stage); /*0x87d16b*/
    v170 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d175*/
    LOBYTE(v393) = 0x40; /*0x87d182*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v170); /*0x87d187*/
    v171 = v392; /*0x87d18c*/
    LOBYTE(v393) = 1; /*0x87d192*/
    if ( v392 ) /*0x87d197*/
    {
      --v392[7].Unk08; /*0x87d199*/
      if ( !v171[7].Unk08 ) /*0x87d1a2*/
        sub_772560(v171); /*0x87d1a7*/
    }
    v172 = a3; /*0x87d1ac*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x87d1b7*/
    NiD3DPass_SetTextureStage(v1, 6u, v172); /*0x87d1c4*/
    v173 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d1ce*/
    LOBYTE(v393) = 0x41; /*0x87d1db*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v173); /*0x87d1e0*/
    v174 = v392; /*0x87d1e5*/
    LOBYTE(v393) = 1; /*0x87d1eb*/
    if ( v392 ) /*0x87d1f0*/
    {
      --v392[7].Unk08; /*0x87d1f2*/
      if ( !v174[7].Unk08 ) /*0x87d1fb*/
        sub_772560(v174); /*0x87d200*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87d205*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x87d210*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x87d21d*/
  }
  v175 = v391; /*0x87d222*/
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v391[0x27]); /*0x87d22f*/
  NiD3DPass_SetPixelShader(v1, (NiD3DPixelShader *)v175[0x3B]); /*0x87d23d*/
  if ( !v1->RenderStateGroup ) /*0x87d242*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d24d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87d25c*/
  if ( !v1->RenderStateGroup ) /*0x87d261*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d26c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87d278*/
  if ( !v1->RenderStateGroup ) /*0x87d27d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d288*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87d294*/
  if ( !v1->RenderStateGroup ) /*0x87d299*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d2a4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87d2b0*/
  if ( !v1->RenderStateGroup ) /*0x87d2b5*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d2c0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87d2cc*/
  if ( !v1->RenderStateGroup ) /*0x87d2d1*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d2dc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87d2e8*/
  if ( !v1->RenderStateGroup ) /*0x87d2ed*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d2f8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87d304*/
  v4 = v1 == (NiD3DPass *)unk_B4773C; /*0x87d309*/
  unk_B43D04 = 0x38082; /*0x87d314*/
  unk_B44394 = 0x10C; /*0x87d31e*/
  if ( !v4 ) /*0x87d324*/
  {
    v4 = v1->RefCount-- == 1; /*0x87d326*/
    if ( v4 ) /*0x87d32a*/
      NiD3DPass_ReleaseToPool(v1); /*0x87d32e*/
    v1 = (NiD3DPass *)unk_B4773C; /*0x87d333*/
    v390 = (NiD3DPassVtbl **)unk_B4773C; /*0x87d33b*/
    if ( v390 ) /*0x87d33f*/
      ++v1->RefCount; /*0x87d341*/
  }
  if ( v1->StageCount < 8 ) /*0x87d348*/
  {
    v176 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d353*/
    LOBYTE(v393) = 0x42; /*0x87d360*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v176); /*0x87d365*/
    v177 = v392; /*0x87d36a*/
    LOBYTE(v393) = 1; /*0x87d370*/
    if ( v392 ) /*0x87d375*/
    {
      --v392[7].Unk08; /*0x87d377*/
      if ( !v177[7].Unk08 ) /*0x87d380*/
        sub_772560(v177); /*0x87d385*/
    }
    v178 = a3; /*0x87d38a*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87d395*/
    NiD3DPass_SetTextureStage(v1, 0, v178); /*0x87d3a2*/
    v179 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d3ac*/
    LOBYTE(v393) = 0x43; /*0x87d3b9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v179); /*0x87d3be*/
    v180 = v392; /*0x87d3c3*/
    LOBYTE(v393) = 1; /*0x87d3c9*/
    if ( v392 ) /*0x87d3ce*/
    {
      --v392[7].Unk08; /*0x87d3d0*/
      if ( !v180[7].Unk08 ) /*0x87d3d9*/
        sub_772560(v180); /*0x87d3de*/
    }
    v181 = a3; /*0x87d3e3*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87d3ee*/
    NiD3DPass_SetTextureStage(v1, 1u, v181); /*0x87d3fb*/
    v182 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d405*/
    LOBYTE(v393) = 0x44; /*0x87d412*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v182); /*0x87d417*/
    v183 = v392; /*0x87d41c*/
    LOBYTE(v393) = 1; /*0x87d422*/
    if ( v392 ) /*0x87d427*/
    {
      --v392[7].Unk08; /*0x87d429*/
      if ( !v183[7].Unk08 ) /*0x87d432*/
        sub_772560(v183); /*0x87d437*/
    }
    v184 = a3; /*0x87d43c*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87d447*/
    NiD3DPass_SetTextureStage(v1, 2u, v184); /*0x87d454*/
    v185 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d45e*/
    LOBYTE(v393) = 0x45; /*0x87d46b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v185); /*0x87d470*/
    v186 = v392; /*0x87d475*/
    LOBYTE(v393) = 1; /*0x87d47b*/
    if ( v392 ) /*0x87d480*/
    {
      --v392[7].Unk08; /*0x87d482*/
      if ( !v186[7].Unk08 ) /*0x87d48b*/
        sub_772560(v186); /*0x87d490*/
    }
    v187 = a3; /*0x87d495*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87d4a0*/
    NiD3DPass_SetTextureStage(v1, 3u, v187); /*0x87d4ad*/
    v188 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d4b7*/
    LOBYTE(v393) = 0x46; /*0x87d4c4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v188); /*0x87d4c9*/
    v189 = v392; /*0x87d4ce*/
    LOBYTE(v393) = 1; /*0x87d4d4*/
    if ( v392 ) /*0x87d4d9*/
    {
      --v392[7].Unk08; /*0x87d4db*/
      if ( !v189[7].Unk08 ) /*0x87d4e4*/
        sub_772560(v189); /*0x87d4e9*/
    }
    v190 = a3; /*0x87d4ee*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x87d4f9*/
    NiD3DPass_SetTextureStage(v1, 4u, v190); /*0x87d506*/
    v191 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d510*/
    LOBYTE(v393) = 0x47; /*0x87d51d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v191); /*0x87d522*/
    v192 = v392; /*0x87d527*/
    LOBYTE(v393) = 1; /*0x87d52d*/
    if ( v392 ) /*0x87d532*/
    {
      --v392[7].Unk08; /*0x87d534*/
      if ( !v192[7].Unk08 ) /*0x87d53d*/
        sub_772560(v192); /*0x87d542*/
    }
    v193 = (NiD3DTextureStage *)a3; /*0x87d547*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x87d552*/
    NiD3DTextureStage_SetTexture(v193, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87d563*/
    NiD3DPass_SetTextureStage(v1, 5u, &v193->Stage); /*0x87d56d*/
    v194 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d577*/
    LOBYTE(v393) = 0x48; /*0x87d584*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v194); /*0x87d589*/
    v195 = v392; /*0x87d58e*/
    LOBYTE(v393) = 1; /*0x87d594*/
    if ( v392 ) /*0x87d599*/
    {
      --v392[7].Unk08; /*0x87d59b*/
      if ( !v195[7].Unk08 ) /*0x87d5a4*/
        sub_772560(v195); /*0x87d5a9*/
    }
    v196 = a3; /*0x87d5ae*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x87d5b9*/
    NiD3DPass_SetTextureStage(v1, 6u, v196); /*0x87d5c6*/
    v197 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d5d0*/
    LOBYTE(v393) = 0x49; /*0x87d5dd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v197); /*0x87d5e2*/
    v198 = v392; /*0x87d5e7*/
    LOBYTE(v393) = 1; /*0x87d5ed*/
    if ( v392 ) /*0x87d5f2*/
    {
      --v392[7].Unk08; /*0x87d5f4*/
      if ( !v198[7].Unk08 ) /*0x87d5fd*/
        sub_772560(v198); /*0x87d602*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87d607*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x87d612*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x87d61f*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v391[0x28]); /*0x87d631*/
  NiD3DPass_SetPixelShader(v1, (NiD3DPixelShader *)v391[0x3B]); /*0x87d643*/
  if ( !v1->RenderStateGroup ) /*0x87d648*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d653*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87d662*/
  if ( !v1->RenderStateGroup ) /*0x87d667*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d672*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87d67e*/
  if ( !v1->RenderStateGroup ) /*0x87d683*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d68e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87d69a*/
  if ( !v1->RenderStateGroup ) /*0x87d69f*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d6aa*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87d6b6*/
  if ( !v1->RenderStateGroup ) /*0x87d6bb*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d6c6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87d6d2*/
  if ( !v1->RenderStateGroup ) /*0x87d6d7*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d6e2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87d6ee*/
  if ( !v1->RenderStateGroup ) /*0x87d6f3*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87d6fe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87d70a*/
  v4 = v1 == (NiD3DPass *)unk_B47740; /*0x87d70f*/
  unk_B43D1C = 0x78088; /*0x87d715*/
  unk_B443AC = 0x10C; /*0x87d71f*/
  if ( !v4 ) /*0x87d725*/
  {
    v4 = v1->RefCount-- == 1; /*0x87d727*/
    if ( v4 ) /*0x87d72b*/
      NiD3DPass_ReleaseToPool(v1); /*0x87d72f*/
    v1 = (NiD3DPass *)unk_B47740; /*0x87d734*/
    v390 = (NiD3DPassVtbl **)unk_B47740; /*0x87d73c*/
    if ( v390 ) /*0x87d740*/
      ++v1->RefCount; /*0x87d742*/
  }
  if ( v1->StageCount < 8 ) /*0x87d749*/
  {
    v199 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d754*/
    LOBYTE(v393) = 0x4A; /*0x87d761*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v199); /*0x87d766*/
    v200 = v392; /*0x87d76b*/
    LOBYTE(v393) = 1; /*0x87d771*/
    if ( v392 ) /*0x87d776*/
    {
      --v392[7].Unk08; /*0x87d778*/
      if ( !v200[7].Unk08 ) /*0x87d781*/
        sub_772560(v200); /*0x87d786*/
    }
    v201 = a3; /*0x87d78b*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87d796*/
    NiD3DPass_SetTextureStage(v1, 0, v201); /*0x87d7a3*/
    v202 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d7ad*/
    LOBYTE(v393) = 0x4B; /*0x87d7ba*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v202); /*0x87d7bf*/
    v203 = v392; /*0x87d7c4*/
    LOBYTE(v393) = 1; /*0x87d7ca*/
    if ( v392 ) /*0x87d7cf*/
    {
      --v392[7].Unk08; /*0x87d7d1*/
      if ( !v203[7].Unk08 ) /*0x87d7da*/
        sub_772560(v203); /*0x87d7df*/
    }
    v204 = a3; /*0x87d7e4*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87d7ef*/
    NiD3DPass_SetTextureStage(v1, 1u, v204); /*0x87d7fc*/
    v205 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d806*/
    LOBYTE(v393) = 0x4C; /*0x87d813*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v205); /*0x87d818*/
    v206 = v392; /*0x87d81d*/
    LOBYTE(v393) = 1; /*0x87d823*/
    if ( v392 ) /*0x87d828*/
    {
      --v392[7].Unk08; /*0x87d82a*/
      if ( !v206[7].Unk08 ) /*0x87d833*/
        sub_772560(v206); /*0x87d838*/
    }
    v207 = a3; /*0x87d83d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87d848*/
    NiD3DPass_SetTextureStage(v1, 2u, v207); /*0x87d855*/
    v208 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d85f*/
    LOBYTE(v393) = 0x4D; /*0x87d86c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v208); /*0x87d871*/
    v209 = v392; /*0x87d876*/
    LOBYTE(v393) = 1; /*0x87d87c*/
    if ( v392 ) /*0x87d881*/
    {
      --v392[7].Unk08; /*0x87d883*/
      if ( !v209[7].Unk08 ) /*0x87d88c*/
        sub_772560(v209); /*0x87d891*/
    }
    v210 = a3; /*0x87d896*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87d8a1*/
    NiD3DPass_SetTextureStage(v1, 3u, v210); /*0x87d8ae*/
    v211 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d8b8*/
    LOBYTE(v393) = 0x4E; /*0x87d8c5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v211); /*0x87d8ca*/
    v212 = v392; /*0x87d8cf*/
    LOBYTE(v393) = 1; /*0x87d8d5*/
    if ( v392 ) /*0x87d8da*/
    {
      --v392[7].Unk08; /*0x87d8dc*/
      if ( !v212[7].Unk08 ) /*0x87d8e5*/
        sub_772560(v212); /*0x87d8ea*/
    }
    v213 = a3; /*0x87d8ef*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x87d8fa*/
    NiD3DPass_SetTextureStage(v1, 4u, v213); /*0x87d907*/
    v214 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d911*/
    LOBYTE(v393) = 0x4F; /*0x87d91e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v214); /*0x87d923*/
    v215 = v392; /*0x87d928*/
    LOBYTE(v393) = 1; /*0x87d92e*/
    if ( v392 ) /*0x87d933*/
    {
      --v392[7].Unk08; /*0x87d935*/
      if ( !v215[7].Unk08 ) /*0x87d93e*/
        sub_772560(v215); /*0x87d943*/
    }
    v216 = (NiD3DTextureStage *)a3; /*0x87d948*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x87d953*/
    NiD3DTextureStage_SetTexture(v216, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87d964*/
    NiD3DPass_SetTextureStage(v1, 5u, &v216->Stage); /*0x87d96e*/
    v217 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d978*/
    LOBYTE(v393) = 0x50; /*0x87d985*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v217); /*0x87d98a*/
    v218 = v392; /*0x87d98f*/
    LOBYTE(v393) = 1; /*0x87d995*/
    if ( v392 ) /*0x87d99a*/
    {
      --v392[7].Unk08; /*0x87d99c*/
      if ( !v218[7].Unk08 ) /*0x87d9a5*/
        sub_772560(v218); /*0x87d9aa*/
    }
    v219 = a3; /*0x87d9af*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x87d9ba*/
    NiD3DPass_SetTextureStage(v1, 6u, v219); /*0x87d9c7*/
    v220 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87d9d1*/
    LOBYTE(v393) = 0x51; /*0x87d9de*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v220); /*0x87d9e3*/
    v221 = v392; /*0x87d9e8*/
    LOBYTE(v393) = 1; /*0x87d9ee*/
    if ( v392 ) /*0x87d9f3*/
    {
      --v392[7].Unk08; /*0x87d9f5*/
      if ( !v221[7].Unk08 ) /*0x87d9fe*/
        sub_772560(v221); /*0x87da03*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87da08*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x87da13*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x87da20*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v391[0x29]); /*0x87da32*/
  NiD3DPass_SetPixelShader(v1, (NiD3DPixelShader *)v391[0x3C]); /*0x87da44*/
  if ( !v1->RenderStateGroup ) /*0x87da49*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87da54*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87da63*/
  if ( !v1->RenderStateGroup ) /*0x87da68*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87da73*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87da7f*/
  if ( !v1->RenderStateGroup ) /*0x87da84*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87da8f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87da9b*/
  if ( !v1->RenderStateGroup ) /*0x87daa0*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87daab*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87dab7*/
  if ( !v1->RenderStateGroup ) /*0x87dabc*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87dac7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87dad3*/
  if ( !v1->RenderStateGroup ) /*0x87dad8*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87dae3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87daef*/
  if ( !v1->RenderStateGroup ) /*0x87daf4*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87daff*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87db0b*/
  v4 = v1 == (NiD3DPass *)unk_B47744; /*0x87db10*/
  unk_B43D3C = 0x380F2; /*0x87db16*/
  unk_B443CC = 0x10C; /*0x87db20*/
  if ( !v4 ) /*0x87db26*/
  {
    v4 = v1->RefCount-- == 1; /*0x87db28*/
    if ( v4 ) /*0x87db2c*/
      NiD3DPass_ReleaseToPool(v1); /*0x87db30*/
    v1 = (NiD3DPass *)unk_B47744; /*0x87db35*/
    v390 = (NiD3DPassVtbl **)unk_B47744; /*0x87db3d*/
    if ( v390 ) /*0x87db41*/
      ++v1->RefCount; /*0x87db43*/
  }
  if ( v1->StageCount < 8 ) /*0x87db4a*/
  {
    v222 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87db55*/
    LOBYTE(v393) = 0x52; /*0x87db62*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v222); /*0x87db67*/
    v223 = v392; /*0x87db6c*/
    LOBYTE(v393) = 1; /*0x87db72*/
    if ( v392 ) /*0x87db77*/
    {
      --v392[7].Unk08; /*0x87db79*/
      if ( !v223[7].Unk08 ) /*0x87db82*/
        sub_772560(v223); /*0x87db87*/
    }
    v224 = a3; /*0x87db8c*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87db97*/
    NiD3DPass_SetTextureStage(v1, 0, v224); /*0x87dba4*/
    v225 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87dbae*/
    LOBYTE(v393) = 0x53; /*0x87dbbb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v225); /*0x87dbc0*/
    v226 = v392; /*0x87dbc5*/
    LOBYTE(v393) = 1; /*0x87dbcb*/
    if ( v392 ) /*0x87dbd0*/
    {
      --v392[7].Unk08; /*0x87dbd2*/
      if ( !v226[7].Unk08 ) /*0x87dbdb*/
        sub_772560(v226); /*0x87dbe0*/
    }
    v227 = a3; /*0x87dbe5*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87dbf0*/
    NiD3DPass_SetTextureStage(v1, 1u, v227); /*0x87dbfd*/
    v228 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87dc07*/
    LOBYTE(v393) = 0x54; /*0x87dc14*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v228); /*0x87dc19*/
    v229 = v392; /*0x87dc1e*/
    LOBYTE(v393) = 1; /*0x87dc24*/
    if ( v392 ) /*0x87dc29*/
    {
      --v392[7].Unk08; /*0x87dc2b*/
      if ( !v229[7].Unk08 ) /*0x87dc34*/
        sub_772560(v229); /*0x87dc39*/
    }
    v230 = a3; /*0x87dc3e*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87dc49*/
    NiD3DPass_SetTextureStage(v1, 2u, v230); /*0x87dc56*/
    v231 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87dc60*/
    LOBYTE(v393) = 0x55; /*0x87dc6d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v231); /*0x87dc72*/
    v232 = v392; /*0x87dc77*/
    LOBYTE(v393) = 1; /*0x87dc7d*/
    if ( v392 ) /*0x87dc82*/
    {
      --v392[7].Unk08; /*0x87dc84*/
      if ( !v232[7].Unk08 ) /*0x87dc8d*/
        sub_772560(v232); /*0x87dc92*/
    }
    v233 = a3; /*0x87dc97*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87dca2*/
    NiD3DPass_SetTextureStage(v1, 3u, v233); /*0x87dcaf*/
    v234 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87dcb9*/
    LOBYTE(v393) = 0x56; /*0x87dcc6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v234); /*0x87dccb*/
    v235 = v392; /*0x87dcd0*/
    LOBYTE(v393) = 1; /*0x87dcd6*/
    if ( v392 ) /*0x87dcdb*/
    {
      --v392[7].Unk08; /*0x87dcdd*/
      if ( !v235[7].Unk08 ) /*0x87dce6*/
        sub_772560(v235); /*0x87dceb*/
    }
    v236 = a3; /*0x87dcf0*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x87dcfb*/
    NiD3DPass_SetTextureStage(v1, 4u, v236); /*0x87dd08*/
    v237 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87dd12*/
    LOBYTE(v393) = 0x57; /*0x87dd1f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v237); /*0x87dd24*/
    v238 = v392; /*0x87dd29*/
    LOBYTE(v393) = 1; /*0x87dd2f*/
    if ( v392 ) /*0x87dd34*/
    {
      --v392[7].Unk08; /*0x87dd36*/
      if ( !v238[7].Unk08 ) /*0x87dd3f*/
        sub_772560(v238); /*0x87dd44*/
    }
    v239 = (NiD3DTextureStage *)a3; /*0x87dd49*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x87dd54*/
    NiD3DTextureStage_SetTexture(v239, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87dd64*/
    NiD3DPass_SetTextureStage(v1, 5u, &v239->Stage); /*0x87dd6e*/
    v240 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87dd78*/
    LOBYTE(v393) = 0x58; /*0x87dd85*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v240); /*0x87dd8a*/
    v241 = v392; /*0x87dd8f*/
    LOBYTE(v393) = 1; /*0x87dd95*/
    if ( v392 ) /*0x87dd9a*/
    {
      --v392[7].Unk08; /*0x87dd9c*/
      if ( !v241[7].Unk08 ) /*0x87dda5*/
        sub_772560(v241); /*0x87ddaa*/
    }
    v242 = a3; /*0x87ddaf*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x87ddba*/
    NiD3DPass_SetTextureStage(v1, 6u, v242); /*0x87ddc7*/
    v243 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ddd1*/
    LOBYTE(v393) = 0x59; /*0x87ddde*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v243); /*0x87dde3*/
    v244 = v392; /*0x87dde8*/
    LOBYTE(v393) = 1; /*0x87ddee*/
    if ( v392 ) /*0x87ddf3*/
    {
      --v392[7].Unk08; /*0x87ddf5*/
      if ( !v244[7].Unk08 ) /*0x87ddfe*/
        sub_772560(v244); /*0x87de03*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87de08*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x87de13*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x87de20*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v391[0x2A]); /*0x87de32*/
  NiD3DPass_SetPixelShader(v1, (NiD3DPixelShader *)v391[0x3C]); /*0x87de44*/
  if ( !v1->RenderStateGroup ) /*0x87de49*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87de54*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87de63*/
  if ( !v1->RenderStateGroup ) /*0x87de68*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87de73*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87de7f*/
  if ( !v1->RenderStateGroup ) /*0x87de84*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87de8f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87de9b*/
  if ( !v1->RenderStateGroup ) /*0x87dea0*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87deab*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87deb7*/
  if ( !v1->RenderStateGroup ) /*0x87debc*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87dec7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87ded3*/
  if ( !v1->RenderStateGroup ) /*0x87ded8*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87dee3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87deef*/
  if ( !v1->RenderStateGroup ) /*0x87def4*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87deff*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87df0b*/
  v4 = v1 == (NiD3DPass *)unk_B47748; /*0x87df10*/
  unk_B43D54 = 0x780F8; /*0x87df16*/
  unk_B443E4 = 0x10C; /*0x87df20*/
  if ( !v4 ) /*0x87df26*/
  {
    v4 = v1->RefCount-- == 1; /*0x87df28*/
    if ( v4 ) /*0x87df2c*/
      NiD3DPass_ReleaseToPool(v1); /*0x87df30*/
    v1 = (NiD3DPass *)unk_B47748; /*0x87df35*/
    v390 = (NiD3DPassVtbl **)unk_B47748; /*0x87df3d*/
    if ( v390 ) /*0x87df41*/
      ++v1->RefCount; /*0x87df43*/
  }
  if ( v1->StageCount < 8 ) /*0x87df4a*/
  {
    v245 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87df55*/
    LOBYTE(v393) = 0x5A; /*0x87df62*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v245); /*0x87df67*/
    v246 = v392; /*0x87df6c*/
    LOBYTE(v393) = 1; /*0x87df72*/
    if ( v392 ) /*0x87df77*/
    {
      --v392[7].Unk08; /*0x87df79*/
      if ( !v246[7].Unk08 ) /*0x87df82*/
        sub_772560(v246); /*0x87df87*/
    }
    v247 = a3; /*0x87df8c*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87df97*/
    NiD3DPass_SetTextureStage(v1, 0, v247); /*0x87dfa4*/
    v248 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87dfae*/
    LOBYTE(v393) = 0x5B; /*0x87dfbb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v248); /*0x87dfc0*/
    v249 = v392; /*0x87dfc5*/
    LOBYTE(v393) = 1; /*0x87dfcb*/
    if ( v392 ) /*0x87dfd0*/
    {
      --v392[7].Unk08; /*0x87dfd2*/
      if ( !v249[7].Unk08 ) /*0x87dfdb*/
        sub_772560(v249); /*0x87dfe0*/
    }
    v250 = a3; /*0x87dfe5*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87dff0*/
    NiD3DPass_SetTextureStage(v1, 1u, v250); /*0x87dffd*/
    v251 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e007*/
    LOBYTE(v393) = 0x5C; /*0x87e014*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v251); /*0x87e019*/
    v252 = v392; /*0x87e01e*/
    LOBYTE(v393) = 1; /*0x87e024*/
    if ( v392 ) /*0x87e029*/
    {
      --v392[7].Unk08; /*0x87e02b*/
      if ( !v252[7].Unk08 ) /*0x87e034*/
        sub_772560(v252); /*0x87e039*/
    }
    v253 = a3; /*0x87e03e*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87e049*/
    NiD3DPass_SetTextureStage(v1, 2u, v253); /*0x87e056*/
    v254 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e060*/
    LOBYTE(v393) = 0x5D; /*0x87e06d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v254); /*0x87e072*/
    v255 = v392; /*0x87e077*/
    LOBYTE(v393) = 1; /*0x87e07d*/
    if ( v392 ) /*0x87e082*/
    {
      --v392[7].Unk08; /*0x87e084*/
      if ( !v255[7].Unk08 ) /*0x87e08d*/
        sub_772560(v255); /*0x87e092*/
    }
    v256 = a3; /*0x87e097*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87e0a2*/
    NiD3DPass_SetTextureStage(v1, 3u, v256); /*0x87e0af*/
    v257 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e0b9*/
    LOBYTE(v393) = 0x5E; /*0x87e0c6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v257); /*0x87e0cb*/
    v258 = v392; /*0x87e0d0*/
    LOBYTE(v393) = 1; /*0x87e0d6*/
    if ( v392 ) /*0x87e0db*/
    {
      --v392[7].Unk08; /*0x87e0dd*/
      if ( !v258[7].Unk08 ) /*0x87e0e6*/
        sub_772560(v258); /*0x87e0eb*/
    }
    v259 = a3; /*0x87e0f0*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x87e0fb*/
    NiD3DPass_SetTextureStage(v1, 4u, v259); /*0x87e108*/
    v260 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e112*/
    LOBYTE(v393) = 0x5F; /*0x87e11f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v260); /*0x87e124*/
    v261 = v392; /*0x87e129*/
    LOBYTE(v393) = 1; /*0x87e12f*/
    if ( v392 ) /*0x87e134*/
    {
      --v392[7].Unk08; /*0x87e136*/
      if ( !v261[7].Unk08 ) /*0x87e13f*/
        sub_772560(v261); /*0x87e144*/
    }
    v262 = (NiD3DTextureStage *)a3; /*0x87e149*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x87e154*/
    NiD3DTextureStage_SetTexture(v262, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87e165*/
    NiD3DPass_SetTextureStage(v1, 5u, &v262->Stage); /*0x87e16f*/
    v263 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e179*/
    LOBYTE(v393) = 0x60; /*0x87e186*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v263); /*0x87e18b*/
    v264 = v392; /*0x87e190*/
    LOBYTE(v393) = 1; /*0x87e196*/
    if ( v392 ) /*0x87e19b*/
    {
      --v392[7].Unk08; /*0x87e19d*/
      if ( !v264[7].Unk08 ) /*0x87e1a6*/
        sub_772560(v264); /*0x87e1ab*/
    }
    v265 = a3; /*0x87e1b0*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x87e1bb*/
    NiD3DPass_SetTextureStage(v1, 6u, v265); /*0x87e1c8*/
    v266 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e1d2*/
    LOBYTE(v393) = 0x61; /*0x87e1df*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v266); /*0x87e1e4*/
    v267 = v392; /*0x87e1e9*/
    LOBYTE(v393) = 1; /*0x87e1ef*/
    if ( v392 ) /*0x87e1f4*/
    {
      --v392[7].Unk08; /*0x87e1f6*/
      if ( !v267[7].Unk08 ) /*0x87e1ff*/
        sub_772560(v267); /*0x87e204*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87e209*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x87e214*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x87e221*/
  }
  v268 = v391; /*0x87e226*/
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v391[0x2B]); /*0x87e233*/
  NiD3DPass_SetPixelShader(v1, (NiD3DPixelShader *)v268[0x3D]); /*0x87e241*/
  if ( !v1->RenderStateGroup ) /*0x87e246*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e251*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87e260*/
  if ( !v1->RenderStateGroup ) /*0x87e265*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e270*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87e27c*/
  if ( !v1->RenderStateGroup ) /*0x87e281*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e28c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87e298*/
  if ( !v1->RenderStateGroup ) /*0x87e29d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e2a8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87e2b4*/
  if ( !v1->RenderStateGroup ) /*0x87e2b9*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e2c4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87e2d0*/
  if ( !v1->RenderStateGroup ) /*0x87e2d5*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e2e0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87e2ec*/
  if ( !v1->RenderStateGroup ) /*0x87e2f1*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e2fc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87e308*/
  v4 = v1 == (NiD3DPass *)unk_B4774C; /*0x87e30d*/
  unk_B43D70 = 0x39082; /*0x87e318*/
  unk_B44400 = 0x11C; /*0x87e322*/
  if ( !v4 ) /*0x87e328*/
  {
    v4 = v1->RefCount-- == 1; /*0x87e32a*/
    if ( v4 ) /*0x87e32e*/
      NiD3DPass_ReleaseToPool(v1); /*0x87e332*/
    v1 = (NiD3DPass *)unk_B4774C; /*0x87e337*/
    v390 = (NiD3DPassVtbl **)unk_B4774C; /*0x87e33f*/
    if ( v390 ) /*0x87e343*/
      ++v1->RefCount; /*0x87e345*/
  }
  if ( v1->StageCount < 8 ) /*0x87e34c*/
  {
    v269 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e357*/
    LOBYTE(v393) = 0x62; /*0x87e364*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v269); /*0x87e369*/
    v270 = v392; /*0x87e36e*/
    LOBYTE(v393) = 1; /*0x87e374*/
    if ( v392 ) /*0x87e379*/
    {
      --v392[7].Unk08; /*0x87e37b*/
      if ( !v270[7].Unk08 ) /*0x87e384*/
        sub_772560(v270); /*0x87e389*/
    }
    v271 = a3; /*0x87e38e*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87e399*/
    NiD3DPass_SetTextureStage(v1, 0, v271); /*0x87e3a6*/
    v272 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e3b0*/
    LOBYTE(v393) = 0x63; /*0x87e3bd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v272); /*0x87e3c2*/
    v273 = v392; /*0x87e3c7*/
    LOBYTE(v393) = 1; /*0x87e3cd*/
    if ( v392 ) /*0x87e3d2*/
    {
      --v392[7].Unk08; /*0x87e3d4*/
      if ( !v273[7].Unk08 ) /*0x87e3dd*/
        sub_772560(v273); /*0x87e3e2*/
    }
    v274 = a3; /*0x87e3e7*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87e3f2*/
    NiD3DPass_SetTextureStage(v1, 1u, v274); /*0x87e3ff*/
    v275 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e409*/
    LOBYTE(v393) = 0x64; /*0x87e416*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v275); /*0x87e41b*/
    v276 = v392; /*0x87e420*/
    LOBYTE(v393) = 1; /*0x87e426*/
    if ( v392 ) /*0x87e42b*/
    {
      --v392[7].Unk08; /*0x87e42d*/
      if ( !v276[7].Unk08 ) /*0x87e436*/
        sub_772560(v276); /*0x87e43b*/
    }
    v277 = a3; /*0x87e440*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87e44b*/
    NiD3DPass_SetTextureStage(v1, 2u, v277); /*0x87e458*/
    v278 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e462*/
    LOBYTE(v393) = 0x65; /*0x87e46f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v278); /*0x87e474*/
    v279 = v392; /*0x87e479*/
    LOBYTE(v393) = 1; /*0x87e47f*/
    if ( v392 ) /*0x87e484*/
    {
      --v392[7].Unk08; /*0x87e486*/
      if ( !v279[7].Unk08 ) /*0x87e48f*/
        sub_772560(v279); /*0x87e494*/
    }
    v280 = a3; /*0x87e499*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87e4a4*/
    NiD3DPass_SetTextureStage(v1, 3u, v280); /*0x87e4b1*/
    v281 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e4bb*/
    LOBYTE(v393) = 0x66; /*0x87e4c8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v281); /*0x87e4cd*/
    v282 = v392; /*0x87e4d2*/
    LOBYTE(v393) = 1; /*0x87e4d8*/
    if ( v392 ) /*0x87e4dd*/
    {
      --v392[7].Unk08; /*0x87e4df*/
      if ( !v282[7].Unk08 ) /*0x87e4e8*/
        sub_772560(v282); /*0x87e4ed*/
    }
    v283 = a3; /*0x87e4f2*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x87e4fd*/
    NiD3DPass_SetTextureStage(v1, 4u, v283); /*0x87e50a*/
    v284 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e514*/
    LOBYTE(v393) = 0x67; /*0x87e521*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v284); /*0x87e526*/
    v285 = v392; /*0x87e52b*/
    LOBYTE(v393) = 1; /*0x87e531*/
    if ( v392 ) /*0x87e536*/
    {
      --v392[7].Unk08; /*0x87e538*/
      if ( !v285[7].Unk08 ) /*0x87e541*/
        sub_772560(v285); /*0x87e546*/
    }
    v286 = (NiD3DTextureStage *)a3; /*0x87e54b*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x87e556*/
    NiD3DTextureStage_SetTexture(v286, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87e567*/
    NiD3DPass_SetTextureStage(v1, 5u, &v286->Stage); /*0x87e571*/
    v287 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e57b*/
    LOBYTE(v393) = 0x68; /*0x87e588*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v287); /*0x87e58d*/
    v288 = v392; /*0x87e592*/
    LOBYTE(v393) = 1; /*0x87e598*/
    if ( v392 ) /*0x87e59d*/
    {
      --v392[7].Unk08; /*0x87e59f*/
      if ( !v288[7].Unk08 ) /*0x87e5a8*/
        sub_772560(v288); /*0x87e5ad*/
    }
    v289 = a3; /*0x87e5b2*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x87e5bd*/
    NiD3DPass_SetTextureStage(v1, 6u, v289); /*0x87e5ca*/
    v290 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e5d4*/
    LOBYTE(v393) = 0x69; /*0x87e5e1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v290); /*0x87e5e6*/
    v291 = v392; /*0x87e5eb*/
    LOBYTE(v393) = 1; /*0x87e5f1*/
    if ( v392 ) /*0x87e5f6*/
    {
      --v392[7].Unk08; /*0x87e5f8*/
      if ( !v291[7].Unk08 ) /*0x87e601*/
        sub_772560(v291); /*0x87e606*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87e60b*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x87e616*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x87e623*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v391[0x2C]); /*0x87e635*/
  NiD3DPass_SetPixelShader(v1, (NiD3DPixelShader *)v391[0x3D]); /*0x87e647*/
  if ( !v1->RenderStateGroup ) /*0x87e64c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e657*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x87e666*/
  if ( !v1->RenderStateGroup ) /*0x87e66b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e676*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x87e682*/
  if ( !v1->RenderStateGroup ) /*0x87e687*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e692*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x87e69e*/
  if ( !v1->RenderStateGroup ) /*0x87e6a3*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e6ae*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x87e6ba*/
  if ( !v1->RenderStateGroup ) /*0x87e6bf*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e6ca*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x87e6d6*/
  if ( !v1->RenderStateGroup ) /*0x87e6db*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e6e6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x87e6f2*/
  if ( !v1->RenderStateGroup ) /*0x87e6f7*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87e702*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x87e70e*/
  unk_B43D88 = 0x79088; /*0x87e71c*/
  unk_B44418 = 0x11C; /*0x87e726*/
  sub_76C890((NiD3DPass **)&v390, &dword_B47750); /*0x87e72c*/
  v292 = (NiD3DPass *)v390; /*0x87e731*/
  if ( (unsigned int)v390[6] < 8 ) /*0x87e738*/
  {
    v293 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e743*/
    LOBYTE(v393) = 0x6A; /*0x87e750*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v293); /*0x87e755*/
    v294 = v392; /*0x87e75a*/
    LOBYTE(v393) = 1; /*0x87e760*/
    if ( v392 ) /*0x87e765*/
    {
      --v392[7].Unk08; /*0x87e767*/
      if ( !v294[7].Unk08 ) /*0x87e770*/
        sub_772560(v294); /*0x87e775*/
    }
    v295 = a3; /*0x87e77a*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87e785*/
    NiD3DPass_SetTextureStage(v292, 0, v295); /*0x87e792*/
    v296 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e79c*/
    LOBYTE(v393) = 0x6B; /*0x87e7a9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v296); /*0x87e7ae*/
    v297 = v392; /*0x87e7b3*/
    LOBYTE(v393) = 1; /*0x87e7b9*/
    if ( v392 ) /*0x87e7be*/
    {
      --v392[7].Unk08; /*0x87e7c0*/
      if ( !v297[7].Unk08 ) /*0x87e7c9*/
        sub_772560(v297); /*0x87e7ce*/
    }
    v298 = a3; /*0x87e7d3*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87e7de*/
    NiD3DPass_SetTextureStage(v292, 1u, v298); /*0x87e7eb*/
    v299 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e7f5*/
    LOBYTE(v393) = 0x6C; /*0x87e802*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v299); /*0x87e807*/
    v300 = v392; /*0x87e80c*/
    LOBYTE(v393) = 1; /*0x87e812*/
    if ( v392 ) /*0x87e817*/
    {
      --v392[7].Unk08; /*0x87e819*/
      if ( !v300[7].Unk08 ) /*0x87e822*/
        sub_772560(v300); /*0x87e827*/
    }
    v301 = a3; /*0x87e82c*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87e837*/
    NiD3DPass_SetTextureStage(v292, 2u, v301); /*0x87e844*/
    v302 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e84e*/
    LOBYTE(v393) = 0x6D; /*0x87e85b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v302); /*0x87e860*/
    v303 = v392; /*0x87e865*/
    LOBYTE(v393) = 1; /*0x87e86b*/
    if ( v392 ) /*0x87e870*/
    {
      --v392[7].Unk08; /*0x87e872*/
      if ( !v303[7].Unk08 ) /*0x87e87b*/
        sub_772560(v303); /*0x87e880*/
    }
    v304 = a3; /*0x87e885*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87e890*/
    NiD3DPass_SetTextureStage(v292, 3u, v304); /*0x87e89d*/
    v305 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e8a7*/
    LOBYTE(v393) = 0x6E; /*0x87e8b4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v305); /*0x87e8b9*/
    v306 = v392; /*0x87e8be*/
    LOBYTE(v393) = 1; /*0x87e8c4*/
    if ( v392 ) /*0x87e8c9*/
    {
      --v392[7].Unk08; /*0x87e8cb*/
      if ( !v306[7].Unk08 ) /*0x87e8d4*/
        sub_772560(v306); /*0x87e8d9*/
    }
    v307 = a3; /*0x87e8de*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x87e8e9*/
    NiD3DPass_SetTextureStage(v292, 4u, v307); /*0x87e8f6*/
    v308 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e900*/
    LOBYTE(v393) = 0x6F; /*0x87e90d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v308); /*0x87e912*/
    v309 = v392; /*0x87e917*/
    LOBYTE(v393) = 1; /*0x87e91d*/
    if ( v392 ) /*0x87e922*/
    {
      --v392[7].Unk08; /*0x87e924*/
      if ( !v309[7].Unk08 ) /*0x87e92d*/
        sub_772560(v309); /*0x87e932*/
    }
    v310 = (NiD3DTextureStage *)a3; /*0x87e937*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x87e942*/
    NiD3DTextureStage_SetTexture(v310, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87e953*/
    NiD3DPass_SetTextureStage(v292, 5u, &v310->Stage); /*0x87e95d*/
    v311 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e967*/
    LOBYTE(v393) = 0x70; /*0x87e974*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v311); /*0x87e979*/
    v312 = v392; /*0x87e97e*/
    LOBYTE(v393) = 1; /*0x87e984*/
    if ( v392 ) /*0x87e989*/
    {
      --v392[7].Unk08; /*0x87e98b*/
      if ( !v312[7].Unk08 ) /*0x87e994*/
        sub_772560(v312); /*0x87e999*/
    }
    v313 = a3; /*0x87e99e*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x87e9a9*/
    NiD3DPass_SetTextureStage(v292, 6u, v313); /*0x87e9b6*/
    v314 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87e9c0*/
    LOBYTE(v393) = 0x71; /*0x87e9cd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v314); /*0x87e9d2*/
    v315 = v392; /*0x87e9d7*/
    LOBYTE(v393) = 1; /*0x87e9dd*/
    if ( v392 ) /*0x87e9e2*/
    {
      --v392[7].Unk08; /*0x87e9e4*/
      if ( !v315[7].Unk08 ) /*0x87e9ed*/
        sub_772560(v315); /*0x87e9f2*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87e9f7*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x87ea02*/
    NiD3DPass_SetTextureStage(v292, 7u, &v2->Stage); /*0x87ea0f*/
  }
  NiD3DPass_SetVertexShader(v292, (NiD3DVertexShader *)v391[0x2D]); /*0x87ea21*/
  NiD3DPass_SetPixelShader(v292, (NiD3DPixelShader *)v391[0x3E]); /*0x87ea33*/
  if ( !v292->RenderStateGroup ) /*0x87ea38*/
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ea43*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v292->RenderStateGroup, 0xA8, 0xF, 0); /*0x87ea52*/
  if ( !v292->RenderStateGroup ) /*0x87ea57*/
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ea62*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v292->RenderStateGroup, 0x1B, 0, 0); /*0x87ea6e*/
  if ( !v292->RenderStateGroup ) /*0x87ea73*/
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ea7e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v292->RenderStateGroup, 0xF, 0, 0); /*0x87ea8a*/
  if ( !v292->RenderStateGroup ) /*0x87ea8f*/
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ea9a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v292->RenderStateGroup, 7, 1, 0); /*0x87eaa6*/
  if ( !v292->RenderStateGroup ) /*0x87eaab*/
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87eab6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v292->RenderStateGroup, 0x17, 4, 0); /*0x87eac2*/
  if ( !v292->RenderStateGroup ) /*0x87eac7*/
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ead2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v292->RenderStateGroup, 0xE, 1, 0); /*0x87eade*/
  if ( !v292->RenderStateGroup ) /*0x87eae3*/
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87eaee*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v292->RenderStateGroup, 0x34, 0, 0); /*0x87eafa*/
  unk_B43DA4 = 0x390F2; /*0x87eb08*/
  unk_B44434 = 0x11C; /*0x87eb12*/
  sub_76C890((NiD3DPass **)&v390, &dword_B47754); /*0x87eb18*/
  v316 = (NiD3DPass *)v390; /*0x87eb1d*/
  if ( (unsigned int)v390[6] < 8 ) /*0x87eb24*/
  {
    v317 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87eb2f*/
    LOBYTE(v393) = 0x72; /*0x87eb3c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v317); /*0x87eb41*/
    v318 = v392; /*0x87eb46*/
    LOBYTE(v393) = 1; /*0x87eb4c*/
    if ( v392 ) /*0x87eb51*/
    {
      --v392[7].Unk08; /*0x87eb53*/
      if ( !v318[7].Unk08 ) /*0x87eb5c*/
        sub_772560(v318); /*0x87eb61*/
    }
    v319 = a3; /*0x87eb66*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87eb71*/
    NiD3DPass_SetTextureStage(v316, 0, v319); /*0x87eb7e*/
    v320 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87eb88*/
    LOBYTE(v393) = 0x73; /*0x87eb95*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v320); /*0x87eb9a*/
    v321 = v392; /*0x87eb9f*/
    LOBYTE(v393) = 1; /*0x87eba5*/
    if ( v392 ) /*0x87ebaa*/
    {
      --v392[7].Unk08; /*0x87ebac*/
      if ( !v321[7].Unk08 ) /*0x87ebb5*/
        sub_772560(v321); /*0x87ebba*/
    }
    v322 = a3; /*0x87ebbf*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87ebca*/
    NiD3DPass_SetTextureStage(v316, 1u, v322); /*0x87ebd7*/
    v323 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ebe1*/
    LOBYTE(v393) = 0x74; /*0x87ebee*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v323); /*0x87ebf3*/
    v324 = v392; /*0x87ebf8*/
    LOBYTE(v393) = 1; /*0x87ebfe*/
    if ( v392 ) /*0x87ec03*/
    {
      --v392[7].Unk08; /*0x87ec05*/
      if ( !v324[7].Unk08 ) /*0x87ec0e*/
        sub_772560(v324); /*0x87ec13*/
    }
    v325 = a3; /*0x87ec18*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87ec23*/
    NiD3DPass_SetTextureStage(v316, 2u, v325); /*0x87ec30*/
    v326 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ec3a*/
    LOBYTE(v393) = 0x75; /*0x87ec47*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v326); /*0x87ec4c*/
    v327 = v392; /*0x87ec51*/
    LOBYTE(v393) = 1; /*0x87ec57*/
    if ( v392 ) /*0x87ec5c*/
    {
      --v392[7].Unk08; /*0x87ec5e*/
      if ( !v327[7].Unk08 ) /*0x87ec67*/
        sub_772560(v327); /*0x87ec6c*/
    }
    v328 = a3; /*0x87ec71*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x87ec7c*/
    NiD3DPass_SetTextureStage(v316, 3u, v328); /*0x87ec89*/
    v329 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ec93*/
    LOBYTE(v393) = 0x76; /*0x87eca0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v329); /*0x87eca5*/
    v330 = v392; /*0x87ecaa*/
    LOBYTE(v393) = 1; /*0x87ecb0*/
    if ( v392 ) /*0x87ecb5*/
    {
      --v392[7].Unk08; /*0x87ecb7*/
      if ( !v330[7].Unk08 ) /*0x87ecc0*/
        sub_772560(v330); /*0x87ecc5*/
    }
    v331 = a3; /*0x87ecca*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x87ecd5*/
    NiD3DPass_SetTextureStage(v316, 4u, v331); /*0x87ece2*/
    v332 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ecec*/
    LOBYTE(v393) = 0x77; /*0x87ecf9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v332); /*0x87ecfe*/
    v333 = v392; /*0x87ed03*/
    LOBYTE(v393) = 1; /*0x87ed09*/
    if ( v392 ) /*0x87ed0e*/
    {
      --v392[7].Unk08; /*0x87ed10*/
      if ( !v333[7].Unk08 ) /*0x87ed19*/
        sub_772560(v333); /*0x87ed1e*/
    }
    v334 = (NiD3DTextureStage *)a3; /*0x87ed23*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x87ed2e*/
    NiD3DTextureStage_SetTexture(v334, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87ed3e*/
    NiD3DPass_SetTextureStage(v316, 5u, &v334->Stage); /*0x87ed48*/
    v335 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ed52*/
    LOBYTE(v393) = 0x78; /*0x87ed5f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v335); /*0x87ed64*/
    v336 = v392; /*0x87ed69*/
    LOBYTE(v393) = 1; /*0x87ed6f*/
    if ( v392 ) /*0x87ed74*/
    {
      --v392[7].Unk08; /*0x87ed76*/
      if ( !v336[7].Unk08 ) /*0x87ed7f*/
        sub_772560(v336); /*0x87ed84*/
    }
    v337 = a3; /*0x87ed89*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x87ed94*/
    NiD3DPass_SetTextureStage(v316, 6u, v337); /*0x87eda1*/
    v338 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87edab*/
    LOBYTE(v393) = 0x79; /*0x87edb8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v338); /*0x87edbd*/
    v339 = v392; /*0x87edc2*/
    LOBYTE(v393) = 1; /*0x87edc8*/
    if ( v392 ) /*0x87edcd*/
    {
      --v392[7].Unk08; /*0x87edcf*/
      if ( !v339[7].Unk08 ) /*0x87edd8*/
        sub_772560(v339); /*0x87eddd*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87ede2*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x87eded*/
    NiD3DPass_SetTextureStage(v316, 7u, &v2->Stage); /*0x87edfa*/
  }
  v340 = (NiD3DVertexShader **)v391; /*0x87edff*/
  NiD3DPass_SetVertexShader(v316, (NiD3DVertexShader *)v391[0x2E]); /*0x87ee0c*/
  NiD3DPass_SetPixelShader(v316, v340[0x3E]); /*0x87ee1a*/
  if ( !v316->RenderStateGroup ) /*0x87ee1f*/
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ee2a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v316->RenderStateGroup, 0xA8, 0xF, 0); /*0x87ee39*/
  if ( !v316->RenderStateGroup ) /*0x87ee3e*/
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ee49*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v316->RenderStateGroup, 0x1B, 0, 0); /*0x87ee55*/
  if ( !v316->RenderStateGroup ) /*0x87ee5a*/
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ee65*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v316->RenderStateGroup, 0xF, 0, 0); /*0x87ee71*/
  if ( !v316->RenderStateGroup ) /*0x87ee76*/
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ee81*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v316->RenderStateGroup, 7, 1, 0); /*0x87ee8d*/
  if ( !v316->RenderStateGroup ) /*0x87ee92*/
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87ee9d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v316->RenderStateGroup, 0x17, 4, 0); /*0x87eea9*/
  if ( !v316->RenderStateGroup ) /*0x87eeae*/
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87eeb9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v316->RenderStateGroup, 0xE, 1, 0); /*0x87eec5*/
  if ( !v316->RenderStateGroup ) /*0x87eeca*/
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87eed5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v316->RenderStateGroup, 0x34, 0, 0); /*0x87eee1*/
  unk_B43DBC = 0x790F8; /*0x87eeef*/
  unk_B4444C = 0x11C; /*0x87eef9*/
  sub_76C890((NiD3DPass **)&v390, &dword_B47758); /*0x87eeff*/
  v341 = (NiD3DPass *)v390; /*0x87ef04*/
  if ( (unsigned int)v390[6] < 4 ) /*0x87ef0c*/
  {
    v342 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ef17*/
    LOBYTE(v393) = 0x7A; /*0x87ef24*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v342); /*0x87ef29*/
    v343 = v392; /*0x87ef2e*/
    LOBYTE(v393) = 1; /*0x87ef34*/
    if ( v392 ) /*0x87ef39*/
    {
      --v392[7].Unk08; /*0x87ef3b*/
      if ( !v343[7].Unk08 ) /*0x87ef44*/
        sub_772560(v343); /*0x87ef49*/
    }
    v344 = a3; /*0x87ef4e*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87ef59*/
    NiD3DPass_SetTextureStage(v341, 0, v344); /*0x87ef66*/
    v345 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87ef70*/
    LOBYTE(v393) = 0x7B; /*0x87ef7d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v345); /*0x87ef82*/
    v346 = v392; /*0x87ef87*/
    LOBYTE(v393) = 1; /*0x87ef8d*/
    if ( v392 ) /*0x87ef92*/
    {
      --v392[7].Unk08; /*0x87ef94*/
      if ( !v346[7].Unk08 ) /*0x87ef9d*/
        sub_772560(v346); /*0x87efa2*/
    }
    v347 = a3; /*0x87efa7*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87efb2*/
    NiD3DPass_SetTextureStage(v341, 1u, v347); /*0x87efbf*/
    v348 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87efc9*/
    LOBYTE(v393) = 0x7C; /*0x87efd6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v348); /*0x87efdb*/
    v349 = v392; /*0x87efe0*/
    LOBYTE(v393) = 1; /*0x87efe6*/
    if ( v392 ) /*0x87efeb*/
    {
      --v392[7].Unk08; /*0x87efed*/
      if ( !v349[7].Unk08 ) /*0x87eff6*/
        sub_772560(v349); /*0x87effb*/
    }
    v350 = a3; /*0x87f000*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87f00b*/
    NiD3DPass_SetTextureStage(v341, 2u, v350); /*0x87f018*/
    v351 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f022*/
    LOBYTE(v393) = 0x7D; /*0x87f02f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v351); /*0x87f034*/
    v352 = v392; /*0x87f039*/
    LOBYTE(v393) = 1; /*0x87f03f*/
    if ( v392 ) /*0x87f044*/
    {
      --v392[7].Unk08; /*0x87f046*/
      if ( !v352[7].Unk08 ) /*0x87f04f*/
        sub_772560(v352); /*0x87f054*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87f05f*/
    NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a3, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87f066*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 0); /*0x87f072*/
    NiD3DPass_SetTextureStage(v341, 3u, &v2->Stage); /*0x87f07f*/
  }
  NiD3DPass_SetVertexShader(v341, v340[0x37]); /*0x87f08d*/
  NiD3DPass_SetPixelShader(v341, v340[0x43]); /*0x87f09b*/
  if ( !v341->RenderStateGroup ) /*0x87f0a0*/
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f0ab*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v341->RenderStateGroup, 0xA8, 0xF, 0); /*0x87f0ba*/
  if ( !v341->RenderStateGroup ) /*0x87f0bf*/
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f0ca*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v341->RenderStateGroup, 0x1B, 1, 0); /*0x87f0d6*/
  if ( !v341->RenderStateGroup ) /*0x87f0db*/
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f0e6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v341->RenderStateGroup, 0x13, 2, 0); /*0x87f0f2*/
  if ( !v341->RenderStateGroup ) /*0x87f0f7*/
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f102*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v341->RenderStateGroup, 0x14, 2, 0); /*0x87f10e*/
  if ( !v341->RenderStateGroup ) /*0x87f113*/
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f11e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v341->RenderStateGroup, 0xF, 0, 0); /*0x87f12a*/
  if ( !v341->RenderStateGroup ) /*0x87f12f*/
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f13a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v341->RenderStateGroup, 7, 1, 0); /*0x87f146*/
  if ( !v341->RenderStateGroup ) /*0x87f14b*/
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f156*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v341->RenderStateGroup, 0x17, 3, 0); /*0x87f162*/
  if ( !v341->RenderStateGroup ) /*0x87f167*/
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f172*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v341->RenderStateGroup, 0xE, 0, 0); /*0x87f17e*/
  if ( !v341->RenderStateGroup ) /*0x87f183*/
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f18e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v341->RenderStateGroup, 0x34, 0, 0); /*0x87f19a*/
  unk_B43EC4 = 0x39802; /*0x87f1ad*/
  unk_B44554 = 0x1C; /*0x87f1b7*/
  sub_76C890((NiD3DPass **)&v390, &dword_B4775C); /*0x87f1bd*/
  v353 = (NiD3DPass *)v390; /*0x87f1c2*/
  if ( (unsigned int)v390[6] < 4 ) /*0x87f1ca*/
  {
    v354 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f1d5*/
    LOBYTE(v393) = 0x7E; /*0x87f1e2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v354); /*0x87f1e7*/
    v355 = v392; /*0x87f1ec*/
    LOBYTE(v393) = 1; /*0x87f1f2*/
    if ( v392 ) /*0x87f1f7*/
    {
      --v392[7].Unk08; /*0x87f1f9*/
      if ( !v355[7].Unk08 ) /*0x87f202*/
        sub_772560(v355); /*0x87f207*/
    }
    v356 = a3; /*0x87f20c*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87f217*/
    NiD3DPass_SetTextureStage(v353, 0, v356); /*0x87f224*/
    v357 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f22e*/
    LOBYTE(v393) = 0x7F; /*0x87f23b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v357); /*0x87f240*/
    v358 = v392; /*0x87f245*/
    LOBYTE(v393) = 1; /*0x87f24b*/
    if ( v392 ) /*0x87f250*/
    {
      --v392[7].Unk08; /*0x87f252*/
      if ( !v358[7].Unk08 ) /*0x87f25b*/
        sub_772560(v358); /*0x87f260*/
    }
    v359 = a3; /*0x87f265*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87f270*/
    NiD3DPass_SetTextureStage(v353, 1u, v359); /*0x87f27d*/
    v360 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f287*/
    LOBYTE(v393) = 0x80; /*0x87f294*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v360); /*0x87f299*/
    v361 = v392; /*0x87f29e*/
    LOBYTE(v393) = 1; /*0x87f2a4*/
    if ( v392 ) /*0x87f2a9*/
    {
      --v392[7].Unk08; /*0x87f2ab*/
      if ( !v361[7].Unk08 ) /*0x87f2b4*/
        sub_772560(v361); /*0x87f2b9*/
    }
    v362 = a3; /*0x87f2be*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87f2c9*/
    NiD3DPass_SetTextureStage(v353, 2u, v362); /*0x87f2d6*/
    v363 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f2e0*/
    LOBYTE(v393) = 0x81; /*0x87f2ed*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v363); /*0x87f2f2*/
    v364 = v392; /*0x87f2f7*/
    LOBYTE(v393) = 1; /*0x87f2fd*/
    if ( v392 ) /*0x87f302*/
    {
      --v392[7].Unk08; /*0x87f304*/
      if ( !v364[7].Unk08 ) /*0x87f30d*/
        sub_772560(v364); /*0x87f312*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87f31c*/
    NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a3, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87f323*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 0); /*0x87f32f*/
    NiD3DPass_SetTextureStage(v353, 3u, &v2->Stage); /*0x87f33c*/
  }
  NiD3DPass_SetVertexShader(v353, v340[0x38]); /*0x87f34a*/
  NiD3DPass_SetPixelShader(v353, v340[0x43]); /*0x87f358*/
  if ( !v353->RenderStateGroup ) /*0x87f35d*/
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f368*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v353->RenderStateGroup, 0xA8, 0xF, 0); /*0x87f377*/
  if ( !v353->RenderStateGroup ) /*0x87f37c*/
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f387*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v353->RenderStateGroup, 0x1B, 1, 0); /*0x87f393*/
  if ( !v353->RenderStateGroup ) /*0x87f398*/
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f3a3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v353->RenderStateGroup, 0x13, 2, 0); /*0x87f3af*/
  if ( !v353->RenderStateGroup ) /*0x87f3b4*/
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f3bf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v353->RenderStateGroup, 0x14, 2, 0); /*0x87f3cb*/
  if ( !v353->RenderStateGroup ) /*0x87f3d0*/
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f3db*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v353->RenderStateGroup, 0xF, 0, 0); /*0x87f3e7*/
  if ( !v353->RenderStateGroup ) /*0x87f3ec*/
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f3f7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v353->RenderStateGroup, 7, 1, 0); /*0x87f403*/
  if ( !v353->RenderStateGroup ) /*0x87f408*/
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f413*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v353->RenderStateGroup, 0x17, 3, 0); /*0x87f41f*/
  if ( !v353->RenderStateGroup ) /*0x87f424*/
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f42f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v353->RenderStateGroup, 0xE, 0, 0); /*0x87f43b*/
  if ( !v353->RenderStateGroup ) /*0x87f440*/
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f44b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v353->RenderStateGroup, 0x34, 0, 0); /*0x87f457*/
  unk_B43ED0 = 0x79808; /*0x87f465*/
  unk_B44560 = 0x1C; /*0x87f46f*/
  sub_76C890((NiD3DPass **)&v390, &dword_B47760); /*0x87f475*/
  v365 = (NiD3DPass *)v390; /*0x87f47a*/
  if ( (unsigned int)v390[6] < 4 ) /*0x87f482*/
  {
    v366 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f48d*/
    LOBYTE(v393) = 0x82; /*0x87f49a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v366); /*0x87f49f*/
    v367 = v392; /*0x87f4a4*/
    LOBYTE(v393) = 1; /*0x87f4aa*/
    if ( v392 ) /*0x87f4af*/
    {
      --v392[7].Unk08; /*0x87f4b1*/
      if ( !v367[7].Unk08 ) /*0x87f4ba*/
        sub_772560(v367); /*0x87f4bf*/
    }
    v368 = a3; /*0x87f4c4*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87f4cf*/
    NiD3DPass_SetTextureStage(v365, 0, v368); /*0x87f4dc*/
    v369 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f4e6*/
    LOBYTE(v393) = 0x83; /*0x87f4f3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v369); /*0x87f4f8*/
    v370 = v392; /*0x87f4fd*/
    LOBYTE(v393) = 1; /*0x87f503*/
    if ( v392 ) /*0x87f508*/
    {
      --v392[7].Unk08; /*0x87f50a*/
      if ( !v370[7].Unk08 ) /*0x87f513*/
        sub_772560(v370); /*0x87f518*/
    }
    v371 = a3; /*0x87f51d*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87f528*/
    NiD3DPass_SetTextureStage(v365, 1u, v371); /*0x87f535*/
    v372 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f53f*/
    LOBYTE(v393) = 0x84; /*0x87f54c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v372); /*0x87f551*/
    v373 = v392; /*0x87f556*/
    LOBYTE(v393) = 1; /*0x87f55c*/
    if ( v392 ) /*0x87f561*/
    {
      --v392[7].Unk08; /*0x87f563*/
      if ( !v373[7].Unk08 ) /*0x87f56c*/
        sub_772560(v373); /*0x87f571*/
    }
    v374 = a3; /*0x87f576*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87f581*/
    NiD3DPass_SetTextureStage(v365, 2u, v374); /*0x87f58e*/
    v375 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f598*/
    LOBYTE(v393) = 0x85; /*0x87f5a5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v375); /*0x87f5aa*/
    v376 = v392; /*0x87f5af*/
    LOBYTE(v393) = 1; /*0x87f5b5*/
    if ( v392 ) /*0x87f5ba*/
    {
      --v392[7].Unk08; /*0x87f5bc*/
      if ( !v376[7].Unk08 ) /*0x87f5c5*/
        sub_772560(v376); /*0x87f5ca*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87f5d5*/
    NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a3, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87f5dc*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 0); /*0x87f5e8*/
    NiD3DPass_SetTextureStage(v365, 3u, &v2->Stage); /*0x87f5f5*/
  }
  NiD3DPass_SetVertexShader(v365, v340[0x39]); /*0x87f603*/
  NiD3DPass_SetPixelShader(v365, v340[0x44]); /*0x87f611*/
  if ( !v365->RenderStateGroup ) /*0x87f616*/
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f621*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v365->RenderStateGroup, 0xA8, 0xF, 0); /*0x87f630*/
  if ( !v365->RenderStateGroup ) /*0x87f635*/
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f640*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v365->RenderStateGroup, 0x1B, 1, 0); /*0x87f64c*/
  if ( !v365->RenderStateGroup ) /*0x87f651*/
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f65c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v365->RenderStateGroup, 0x13, 2, 0); /*0x87f668*/
  if ( !v365->RenderStateGroup ) /*0x87f66d*/
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f678*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v365->RenderStateGroup, 0x14, 2, 0); /*0x87f684*/
  if ( !v365->RenderStateGroup ) /*0x87f689*/
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f694*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v365->RenderStateGroup, 0xF, 0, 0); /*0x87f6a0*/
  if ( !v365->RenderStateGroup ) /*0x87f6a5*/
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f6b0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v365->RenderStateGroup, 7, 1, 0); /*0x87f6bc*/
  if ( !v365->RenderStateGroup ) /*0x87f6c1*/
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f6cc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v365->RenderStateGroup, 0x17, 3, 0); /*0x87f6d8*/
  if ( !v365->RenderStateGroup ) /*0x87f6dd*/
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f6e8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v365->RenderStateGroup, 0xE, 0, 0); /*0x87f6f4*/
  if ( !v365->RenderStateGroup ) /*0x87f6f9*/
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f704*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v365->RenderStateGroup, 0x34, 0, 0); /*0x87f710*/
  unk_B43EFC = 0x3B802; /*0x87f723*/
  unk_B4458C = 0x3C; /*0x87f72d*/
  sub_76C890((NiD3DPass **)&v390, &dword_B47764); /*0x87f733*/
  v377 = (NiD3DPass *)v390; /*0x87f738*/
  if ( (unsigned int)v390[6] < 4 ) /*0x87f740*/
  {
    v378 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f74b*/
    LOBYTE(v393) = 0x86; /*0x87f758*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v378); /*0x87f75d*/
    v379 = v392; /*0x87f762*/
    LOBYTE(v393) = 1; /*0x87f768*/
    if ( v392 ) /*0x87f76d*/
    {
      --v392[7].Unk08; /*0x87f76f*/
      if ( !v379[7].Unk08 ) /*0x87f778*/
        sub_772560(v379); /*0x87f77d*/
    }
    v380 = a3; /*0x87f782*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x87f78d*/
    NiD3DPass_SetTextureStage(v377, 0, v380); /*0x87f79a*/
    v381 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f7a4*/
    LOBYTE(v393) = 0x87; /*0x87f7b1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v381); /*0x87f7b6*/
    v382 = v392; /*0x87f7bb*/
    LOBYTE(v393) = 1; /*0x87f7c1*/
    if ( v392 ) /*0x87f7c6*/
    {
      --v392[7].Unk08; /*0x87f7c8*/
      if ( !v382[7].Unk08 ) /*0x87f7d1*/
        sub_772560(v382); /*0x87f7d6*/
    }
    v383 = a3; /*0x87f7db*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87f7e6*/
    NiD3DPass_SetTextureStage(v377, 1u, v383); /*0x87f7f3*/
    v384 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f7fd*/
    LOBYTE(v393) = 0x88; /*0x87f80a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v384); /*0x87f80f*/
    v385 = v392; /*0x87f814*/
    LOBYTE(v393) = 1; /*0x87f81a*/
    if ( v392 ) /*0x87f81f*/
    {
      --v392[7].Unk08; /*0x87f821*/
      if ( !v385[7].Unk08 ) /*0x87f82a*/
        sub_772560(v385); /*0x87f82f*/
    }
    v386 = a3; /*0x87f834*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87f83f*/
    NiD3DPass_SetTextureStage(v377, 2u, v386); /*0x87f84c*/
    v387 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v392); /*0x87f856*/
    LOBYTE(v393) = 0x89; /*0x87f863*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v387); /*0x87f868*/
    v388 = v392; /*0x87f86d*/
    LOBYTE(v393) = 1; /*0x87f873*/
    if ( v392 ) /*0x87f878*/
    {
      --v392[7].Unk08; /*0x87f87a*/
      if ( !v388[7].Unk08 ) /*0x87f883*/
        sub_772560(v388); /*0x87f888*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x87f893*/
    NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a3, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x87f89a*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 0); /*0x87f8a6*/
    NiD3DPass_SetTextureStage(v377, 3u, &v2->Stage); /*0x87f8b3*/
  }
  NiD3DPass_SetVertexShader(v377, v340[0x3A]); /*0x87f8c1*/
  NiD3DPass_SetPixelShader(v377, v340[0x44]); /*0x87f8cf*/
  if ( !v377->RenderStateGroup ) /*0x87f8d4*/
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f8df*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v377->RenderStateGroup, 0xA8, 0xF, 0); /*0x87f8ee*/
  if ( !v377->RenderStateGroup ) /*0x87f8f3*/
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f8fe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v377->RenderStateGroup, 0x1B, 1, 0); /*0x87f90a*/
  if ( !v377->RenderStateGroup ) /*0x87f90f*/
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f91a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v377->RenderStateGroup, 0x13, 2, 0); /*0x87f926*/
  if ( !v377->RenderStateGroup ) /*0x87f92b*/
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f936*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v377->RenderStateGroup, 0x14, 2, 0); /*0x87f942*/
  if ( !v377->RenderStateGroup ) /*0x87f947*/
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f952*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v377->RenderStateGroup, 0xF, 0, 0); /*0x87f95e*/
  if ( !v377->RenderStateGroup ) /*0x87f963*/
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f96e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v377->RenderStateGroup, 7, 1, 0); /*0x87f97a*/
  if ( !v377->RenderStateGroup ) /*0x87f97f*/
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f98a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v377->RenderStateGroup, 0x17, 3, 0); /*0x87f996*/
  if ( !v377->RenderStateGroup ) /*0x87f99b*/
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f9a6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v377->RenderStateGroup, 0xE, 0, 0); /*0x87f9b2*/
  if ( !v377->RenderStateGroup ) /*0x87f9b7*/
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x87f9c2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v377->RenderStateGroup, 0x34, 0, 0); /*0x87f9ce*/
  unk_B43F08 = 0x7B808; /*0x87f9d8*/
  unk_B44598 = 0x3C; /*0x87f9e2*/
  LOBYTE(v393) = 0; /*0x87f9e8*/
  if ( v2 ) /*0x87f9ed*/
  {
    v4 = v2[7].Unk08-- == 1; /*0x87f9ef*/
    if ( v4 ) /*0x87f9f2*/
      sub_772560(v2); /*0x87f9f6*/
  }
  v4 = v377->RefCount-- == 1; /*0x87f9fb*/
  v393 = 0xFFFFFFFF; /*0x87f9fe*/
  if ( v4 ) /*0x87fa02*/
    NiD3DPass_ReleaseToPool(v377); /*0x87fa06*/
}
