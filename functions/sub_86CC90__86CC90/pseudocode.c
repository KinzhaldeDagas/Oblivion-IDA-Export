// MoonSugarEffect decode: ParallaxShader pass population slot +0xCC. Populates 14 pooled passes dword_B476A0..B476DC; these bind higher-index PAR2 variants and normal TES4 stage/render-state patterns.
void __thiscall sub_86CC90(_DWORD *this)
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
  int v101; // ebx
  int v102; // ebp
  int v103; // ebx
  int v104; // ebp
  unsigned int **v105; // ebp
  NiD3DTextureStage *v106; // eax
  unsigned int **v107; // ebp
  NiD3DTextureStage *v108; // eax
  unsigned int **v109; // ebp
  NiD3DTextureStage *v110; // eax
  unsigned int **v111; // ebp
  NiD3DTextureStage *v112; // eax
  unsigned int **v113; // ebp
  NiD3DTextureStage *v114; // eax
  unsigned int **v115; // ebp
  NiD3DTextureStage *v116; // eax
  unsigned int **v117; // ebp
  NiD3DTextureStage *v118; // eax
  unsigned int **v119; // ebp
  NiD3DTextureStage *v120; // eax
  _DWORD *v121; // ebp
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
  _DWORD *v191; // ebp
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
  _DWORD *v238; // ebp
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
  _DWORD *v285; // ebp
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
  unsigned int *a3; // [esp+28h] [ebp-1Ch] BYREF
  _DWORD *v310; // [esp+2Ch] [ebp-18h]
  int v311; // [esp+30h] [ebp-14h]
  NiD3DTextureStage *v312; // [esp+34h] [ebp-10h] BYREF
  unsigned int v313; // [esp+40h] [ebp-4h]

  v310 = this; /*0x86ccb7*/
  v1 = 0; /*0x86ccbb*/
  v2 = 0; /*0x86ccbd*/
  v311 = 0; /*0x86ccbf*/
  v313 = 0; /*0x86ccc3*/
  a3 = 0; /*0x86ccc7*/
  v3 = unk_B476A0; /*0x86cccb*/
  v4 = unk_B476A0 == 0; /*0x86ccd0*/
  LOBYTE(v313) = 1; /*0x86ccd7*/
  if ( !v4 ) /*0x86ccdb*/
  {
    v1 = v3; /*0x86ccdd*/
    v311 = v3; /*0x86cce1*/
    if ( v3 ) /*0x86cce5*/
      ++*(_DWORD *)(v3 + 0x60); /*0x86cce7*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86ccf3*/
  {
    v5 = (unsigned int *)*NiD3DTextureStagePool_Acquire(&v312); /*0x86cd06*/
    if ( v5 ) /*0x86cd0a*/
    {
      v2 = (NiD3DTextureStage *)v5; /*0x86cd0c*/
      ++v5[0x17]; /*0x86cd0e*/
      a3 = v5; /*0x86cd11*/
    }
    v6 = v312; /*0x86cd15*/
    LOBYTE(v313) = 1; /*0x86cd1b*/
    if ( v312 ) /*0x86cd20*/
    {
      --v312[7].Unk08; /*0x86cd22*/
      if ( !v6[7].Unk08 ) /*0x86cd2a*/
        sub_772560(v6); /*0x86cd2f*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x86cd3b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x86cd48*/
    v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86cd5a*/
    v4 = v2 == (NiD3DTextureStage *)*v7; /*0x86cd5c*/
    LOBYTE(v313) = 3; /*0x86cd5e*/
    if ( !v4 ) /*0x86cd63*/
    {
      if ( v2 ) /*0x86cd67*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86cd69*/
        if ( v4 ) /*0x86cd6c*/
          sub_772560(v2); /*0x86cd70*/
      }
      v2 = (NiD3DTextureStage *)*v7; /*0x86cd75*/
      a3 = *v7; /*0x86cd79*/
      if ( a3 ) /*0x86cd7d*/
        ++v2[7].Unk08; /*0x86cd7f*/
    }
    v8 = v312; /*0x86cd83*/
    LOBYTE(v313) = 1; /*0x86cd89*/
    if ( v312 ) /*0x86cd8e*/
    {
      --v312[7].Unk08; /*0x86cd90*/
      if ( !v8[7].Unk08 ) /*0x86cd98*/
        sub_772560(v8); /*0x86cd9d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x86cda9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x86cdb6*/
    v9 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86cdc8*/
    v4 = v2 == (NiD3DTextureStage *)*v9; /*0x86cdca*/
    LOBYTE(v313) = 4; /*0x86cdcc*/
    if ( !v4 ) /*0x86cdd1*/
    {
      if ( v2 ) /*0x86cdd5*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86cdd7*/
        if ( v4 ) /*0x86cdda*/
          sub_772560(v2); /*0x86cdde*/
      }
      v2 = (NiD3DTextureStage *)*v9; /*0x86cde3*/
      a3 = *v9; /*0x86cde7*/
      if ( a3 ) /*0x86cdeb*/
        ++v2[7].Unk08; /*0x86cded*/
    }
    v10 = v312; /*0x86cdf1*/
    LOBYTE(v313) = 1; /*0x86cdf7*/
    if ( v312 ) /*0x86cdfc*/
    {
      --v312[7].Unk08; /*0x86cdfe*/
      if ( !v10[7].Unk08 ) /*0x86ce06*/
        sub_772560(v10); /*0x86ce0b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x86ce17*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x86ce24*/
    v11 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86ce36*/
    v4 = v2 == (NiD3DTextureStage *)*v11; /*0x86ce38*/
    LOBYTE(v313) = 5; /*0x86ce3a*/
    if ( !v4 ) /*0x86ce3f*/
    {
      if ( v2 ) /*0x86ce43*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86ce45*/
        if ( v4 ) /*0x86ce48*/
          sub_772560(v2); /*0x86ce4c*/
      }
      v2 = (NiD3DTextureStage *)*v11; /*0x86ce51*/
      a3 = *v11; /*0x86ce55*/
      if ( a3 ) /*0x86ce59*/
        ++v2[7].Unk08; /*0x86ce5b*/
    }
    v12 = v312; /*0x86ce5f*/
    LOBYTE(v313) = 1; /*0x86ce65*/
    if ( v312 ) /*0x86ce6a*/
    {
      --v312[7].Unk08; /*0x86ce6c*/
      if ( !v12[7].Unk08 ) /*0x86ce74*/
        sub_772560(v12); /*0x86ce79*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x86ce85*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x86ce92*/
    v13 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86cea4*/
    v4 = v2 == (NiD3DTextureStage *)*v13; /*0x86cea6*/
    LOBYTE(v313) = 6; /*0x86cea8*/
    if ( !v4 ) /*0x86cead*/
    {
      if ( v2 ) /*0x86ceb1*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86ceb3*/
        if ( v4 ) /*0x86ceb6*/
          sub_772560(v2); /*0x86ceba*/
      }
      v2 = (NiD3DTextureStage *)*v13; /*0x86cebf*/
      a3 = *v13; /*0x86cec3*/
      if ( a3 ) /*0x86cec7*/
        ++v2[7].Unk08; /*0x86cec9*/
    }
    v14 = v312; /*0x86cecd*/
    LOBYTE(v313) = 1; /*0x86ced3*/
    if ( v312 ) /*0x86ced8*/
    {
      --v312[7].Unk08; /*0x86ceda*/
      if ( !v14[7].Unk08 ) /*0x86cee2*/
        sub_772560(v14); /*0x86cee7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x86cef3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x86cf00*/
    v15 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86cf12*/
    v4 = v2 == (NiD3DTextureStage *)*v15; /*0x86cf14*/
    LOBYTE(v313) = 7; /*0x86cf16*/
    if ( !v4 ) /*0x86cf1b*/
    {
      if ( v2 ) /*0x86cf1f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86cf21*/
        if ( v4 ) /*0x86cf24*/
          sub_772560(v2); /*0x86cf28*/
      }
      v2 = (NiD3DTextureStage *)*v15; /*0x86cf2d*/
      a3 = *v15; /*0x86cf31*/
      if ( a3 ) /*0x86cf35*/
        ++v2[7].Unk08; /*0x86cf37*/
    }
    v16 = v312; /*0x86cf3b*/
    LOBYTE(v313) = 1; /*0x86cf41*/
    if ( v312 ) /*0x86cf46*/
    {
      --v312[7].Unk08; /*0x86cf48*/
      if ( !v16[7].Unk08 ) /*0x86cf50*/
        sub_772560(v16); /*0x86cf55*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x86cf61*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86cf71*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x86cf7b*/
    v17 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86cf8d*/
    v4 = v2 == (NiD3DTextureStage *)*v17; /*0x86cf8f*/
    LOBYTE(v313) = 8; /*0x86cf91*/
    if ( !v4 ) /*0x86cf96*/
    {
      if ( v2 ) /*0x86cf9a*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86cf9c*/
        if ( v4 ) /*0x86cf9f*/
          sub_772560(v2); /*0x86cfa3*/
      }
      v2 = (NiD3DTextureStage *)*v17; /*0x86cfa8*/
      a3 = *v17; /*0x86cfac*/
      if ( a3 ) /*0x86cfb0*/
        ++v2[7].Unk08; /*0x86cfb2*/
    }
    v18 = v312; /*0x86cfb6*/
    LOBYTE(v313) = 1; /*0x86cfbc*/
    if ( v312 ) /*0x86cfc1*/
    {
      --v312[7].Unk08; /*0x86cfc3*/
      if ( !v18[7].Unk08 ) /*0x86cfcb*/
        sub_772560(v18); /*0x86cfd0*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x86cfdc*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x86cfe9*/
    v19 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86cffb*/
    v4 = v2 == (NiD3DTextureStage *)*v19; /*0x86cffd*/
    LOBYTE(v313) = 9; /*0x86cfff*/
    if ( !v4 ) /*0x86d004*/
    {
      if ( v2 ) /*0x86d008*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d00a*/
        if ( v4 ) /*0x86d00d*/
          sub_772560(v2); /*0x86d011*/
      }
      v2 = (NiD3DTextureStage *)*v19; /*0x86d016*/
      a3 = *v19; /*0x86d01a*/
      if ( a3 ) /*0x86d01e*/
        ++v2[7].Unk08; /*0x86d020*/
    }
    v20 = v312; /*0x86d024*/
    LOBYTE(v313) = 1; /*0x86d02a*/
    if ( v312 ) /*0x86d02f*/
    {
      --v312[7].Unk08; /*0x86d031*/
      if ( !v20[7].Unk08 ) /*0x86d039*/
        sub_772560(v20); /*0x86d03e*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x86d04a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86d057*/
  }
  v21 = v310[0x2F]; /*0x86d060*/
  v22 = *(_DWORD *)(v1 + 0x58); /*0x86d066*/
  if ( v22 != v21 ) /*0x86d06b*/
  {
    if ( v22 ) /*0x86d06f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x86d075*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x86d08c*/
    }
    *(_DWORD *)(v1 + 0x58) = v21; /*0x86d090*/
    if ( v21 ) /*0x86d093*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x86d099*/
  }
  v23 = v310[0x53]; /*0x86d0a3*/
  v24 = *(_DWORD *)(v1 + 0x44); /*0x86d0a9*/
  if ( v24 != v23 ) /*0x86d0ae*/
  {
    if ( v24 ) /*0x86d0b2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x86d0b8*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x86d0cf*/
    }
    *(_DWORD *)(v1 + 0x44) = v23; /*0x86d0d3*/
    if ( v23 ) /*0x86d0d6*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x86d0dc*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d0e2*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d0ed*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86d0f9*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d0fe*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d109*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86d115*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d11a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d125*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86d131*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d136*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d141*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86d14d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d152*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d15d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86d169*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d16e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d179*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86d185*/
  v4 = v1 == unk_B476A4; /*0x86d18d*/
  unk_B43DE0 = 0x38082; /*0x86d193*/
  unk_B44470 = 0x10C; /*0x86d19d*/
  if ( !v4 ) /*0x86d1a7*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86d1a9*/
    if ( v4 ) /*0x86d1ac*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86d1b0*/
    v1 = unk_B476A4; /*0x86d1b5*/
    v311 = unk_B476A4; /*0x86d1bd*/
    if ( v311 ) /*0x86d1c1*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86d1c3*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86d1cb*/
  {
    v25 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d1de*/
    v4 = v2 == (NiD3DTextureStage *)*v25; /*0x86d1e0*/
    LOBYTE(v313) = 0xA; /*0x86d1e3*/
    if ( !v4 ) /*0x86d1e8*/
    {
      if ( v2 ) /*0x86d1ec*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d1ee*/
        if ( v4 ) /*0x86d1f1*/
          sub_772560(v2); /*0x86d1f5*/
      }
      v2 = (NiD3DTextureStage *)*v25; /*0x86d1fa*/
      a3 = *v25; /*0x86d1ff*/
      if ( a3 ) /*0x86d203*/
        ++v2[7].Unk08; /*0x86d205*/
    }
    v26 = v312; /*0x86d209*/
    LOBYTE(v313) = 1; /*0x86d20f*/
    if ( v312 ) /*0x86d214*/
    {
      --v312[7].Unk08; /*0x86d216*/
      if ( !v26[7].Unk08 ) /*0x86d21e*/
        sub_772560(v26); /*0x86d223*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x86d22f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x86d23c*/
    v27 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d24e*/
    v4 = v2 == (NiD3DTextureStage *)*v27; /*0x86d250*/
    LOBYTE(v313) = 0xB; /*0x86d253*/
    if ( !v4 ) /*0x86d258*/
    {
      if ( v2 ) /*0x86d25c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d25e*/
        if ( v4 ) /*0x86d261*/
          sub_772560(v2); /*0x86d265*/
      }
      v2 = (NiD3DTextureStage *)*v27; /*0x86d26a*/
      a3 = *v27; /*0x86d26f*/
      if ( a3 ) /*0x86d273*/
        ++v2[7].Unk08; /*0x86d275*/
    }
    v28 = v312; /*0x86d279*/
    LOBYTE(v313) = 1; /*0x86d27f*/
    if ( v312 ) /*0x86d284*/
    {
      --v312[7].Unk08; /*0x86d286*/
      if ( !v28[7].Unk08 ) /*0x86d28e*/
        sub_772560(v28); /*0x86d293*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x86d29f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x86d2ac*/
    v29 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d2be*/
    v4 = v2 == (NiD3DTextureStage *)*v29; /*0x86d2c0*/
    LOBYTE(v313) = 0xC; /*0x86d2c3*/
    if ( !v4 ) /*0x86d2c8*/
    {
      if ( v2 ) /*0x86d2cc*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d2ce*/
        if ( v4 ) /*0x86d2d1*/
          sub_772560(v2); /*0x86d2d5*/
      }
      v2 = (NiD3DTextureStage *)*v29; /*0x86d2da*/
      a3 = *v29; /*0x86d2df*/
      if ( a3 ) /*0x86d2e3*/
        ++v2[7].Unk08; /*0x86d2e5*/
    }
    v30 = v312; /*0x86d2e9*/
    LOBYTE(v313) = 1; /*0x86d2ef*/
    if ( v312 ) /*0x86d2f4*/
    {
      --v312[7].Unk08; /*0x86d2f6*/
      if ( !v30[7].Unk08 ) /*0x86d2fe*/
        sub_772560(v30); /*0x86d303*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x86d30f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x86d31c*/
    v31 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d32e*/
    v4 = v2 == (NiD3DTextureStage *)*v31; /*0x86d330*/
    LOBYTE(v313) = 0xD; /*0x86d333*/
    if ( !v4 ) /*0x86d338*/
    {
      if ( v2 ) /*0x86d33c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d33e*/
        if ( v4 ) /*0x86d341*/
          sub_772560(v2); /*0x86d345*/
      }
      v2 = (NiD3DTextureStage *)*v31; /*0x86d34a*/
      a3 = *v31; /*0x86d34f*/
      if ( a3 ) /*0x86d353*/
        ++v2[7].Unk08; /*0x86d355*/
    }
    v32 = v312; /*0x86d359*/
    LOBYTE(v313) = 1; /*0x86d35f*/
    if ( v312 ) /*0x86d364*/
    {
      --v312[7].Unk08; /*0x86d366*/
      if ( !v32[7].Unk08 ) /*0x86d36e*/
        sub_772560(v32); /*0x86d373*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x86d37f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x86d38c*/
    v33 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d39e*/
    v4 = v2 == (NiD3DTextureStage *)*v33; /*0x86d3a0*/
    LOBYTE(v313) = 0xE; /*0x86d3a3*/
    if ( !v4 ) /*0x86d3a8*/
    {
      if ( v2 ) /*0x86d3ac*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d3ae*/
        if ( v4 ) /*0x86d3b1*/
          sub_772560(v2); /*0x86d3b5*/
      }
      v2 = (NiD3DTextureStage *)*v33; /*0x86d3ba*/
      a3 = *v33; /*0x86d3bf*/
      if ( a3 ) /*0x86d3c3*/
        ++v2[7].Unk08; /*0x86d3c5*/
    }
    v34 = v312; /*0x86d3c9*/
    LOBYTE(v313) = 1; /*0x86d3cf*/
    if ( v312 ) /*0x86d3d4*/
    {
      --v312[7].Unk08; /*0x86d3d6*/
      if ( !v34[7].Unk08 ) /*0x86d3de*/
        sub_772560(v34); /*0x86d3e3*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x86d3ef*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x86d3fc*/
    v35 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d40e*/
    v4 = v2 == (NiD3DTextureStage *)*v35; /*0x86d410*/
    LOBYTE(v313) = 0xF; /*0x86d413*/
    if ( !v4 ) /*0x86d418*/
    {
      if ( v2 ) /*0x86d41c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d41e*/
        if ( v4 ) /*0x86d421*/
          sub_772560(v2); /*0x86d425*/
      }
      v2 = (NiD3DTextureStage *)*v35; /*0x86d42a*/
      a3 = *v35; /*0x86d42f*/
      if ( a3 ) /*0x86d433*/
        ++v2[7].Unk08; /*0x86d435*/
    }
    v36 = v312; /*0x86d439*/
    LOBYTE(v313) = 1; /*0x86d43f*/
    if ( v312 ) /*0x86d444*/
    {
      --v312[7].Unk08; /*0x86d446*/
      if ( !v36[7].Unk08 ) /*0x86d44e*/
        sub_772560(v36); /*0x86d453*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x86d45f*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86d46f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x86d479*/
    v37 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d48b*/
    v4 = v2 == (NiD3DTextureStage *)*v37; /*0x86d48d*/
    LOBYTE(v313) = 0x10; /*0x86d490*/
    if ( !v4 ) /*0x86d495*/
    {
      if ( v2 ) /*0x86d499*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d49b*/
        if ( v4 ) /*0x86d49e*/
          sub_772560(v2); /*0x86d4a2*/
      }
      v2 = (NiD3DTextureStage *)*v37; /*0x86d4a7*/
      a3 = *v37; /*0x86d4ac*/
      if ( a3 ) /*0x86d4b0*/
        ++v2[7].Unk08; /*0x86d4b2*/
    }
    v38 = v312; /*0x86d4b6*/
    LOBYTE(v313) = 1; /*0x86d4bc*/
    if ( v312 ) /*0x86d4c1*/
    {
      --v312[7].Unk08; /*0x86d4c3*/
      if ( !v38[7].Unk08 ) /*0x86d4cb*/
        sub_772560(v38); /*0x86d4d0*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x86d4dc*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x86d4e9*/
    v39 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d4fb*/
    v4 = v2 == (NiD3DTextureStage *)*v39; /*0x86d4fd*/
    LOBYTE(v313) = 0x11; /*0x86d500*/
    if ( !v4 ) /*0x86d505*/
    {
      if ( v2 ) /*0x86d509*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d50b*/
        if ( v4 ) /*0x86d50e*/
          sub_772560(v2); /*0x86d512*/
      }
      v2 = (NiD3DTextureStage *)*v39; /*0x86d517*/
      a3 = *v39; /*0x86d51c*/
      if ( a3 ) /*0x86d520*/
        ++v2[7].Unk08; /*0x86d522*/
    }
    v40 = v312; /*0x86d526*/
    LOBYTE(v313) = 1; /*0x86d52c*/
    if ( v312 ) /*0x86d531*/
    {
      --v312[7].Unk08; /*0x86d533*/
      if ( !v40[7].Unk08 ) /*0x86d53b*/
        sub_772560(v40); /*0x86d540*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x86d54c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86d559*/
  }
  v41 = v310[0x2F]; /*0x86d562*/
  v42 = *(_DWORD *)(v1 + 0x58); /*0x86d568*/
  if ( v42 != v41 ) /*0x86d56d*/
  {
    if ( v42 ) /*0x86d571*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v42 + 4)) ) /*0x86d577*/
        (**(void (__thiscall ***)(int, int))v42)(v42, 1); /*0x86d58e*/
    }
    *(_DWORD *)(v1 + 0x58) = v41; /*0x86d592*/
    if ( v41 ) /*0x86d595*/
      InterlockedIncrement((volatile LONG *)(v41 + 4)); /*0x86d59b*/
  }
  v43 = v310[0x54]; /*0x86d5a5*/
  v44 = *(_DWORD *)(v1 + 0x44); /*0x86d5ab*/
  if ( v44 != v43 ) /*0x86d5b0*/
  {
    if ( v44 ) /*0x86d5b4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v44 + 4)) ) /*0x86d5ba*/
        (**(void (__thiscall ***)(int, int))v44)(v44, 1); /*0x86d5d1*/
    }
    *(_DWORD *)(v1 + 0x44) = v43; /*0x86d5d5*/
    if ( v43 ) /*0x86d5d8*/
      InterlockedIncrement((volatile LONG *)(v43 + 4)); /*0x86d5de*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d5e4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d5ef*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86d5fb*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d600*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d60b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86d617*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d61c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d627*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86d633*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d638*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d643*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86d64f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d654*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d65f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86d66b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86d670*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86d67b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86d687*/
  v4 = v1 == unk_B476A8; /*0x86d68f*/
  unk_B43DE4 = 0x38082; /*0x86d695*/
  unk_B44474 = 0x18C; /*0x86d69f*/
  if ( !v4 ) /*0x86d6a9*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86d6ab*/
    if ( v4 ) /*0x86d6ae*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86d6b2*/
    v1 = unk_B476A8; /*0x86d6b7*/
    v311 = unk_B476A8; /*0x86d6bf*/
    if ( v311 ) /*0x86d6c3*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86d6c5*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86d6cd*/
  {
    v45 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d6e0*/
    v4 = v2 == (NiD3DTextureStage *)*v45; /*0x86d6e2*/
    LOBYTE(v313) = 0x12; /*0x86d6e5*/
    if ( !v4 ) /*0x86d6ea*/
    {
      if ( v2 ) /*0x86d6ee*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d6f0*/
        if ( v4 ) /*0x86d6f3*/
          sub_772560(v2); /*0x86d6f7*/
      }
      v2 = (NiD3DTextureStage *)*v45; /*0x86d6fc*/
      a3 = *v45; /*0x86d701*/
      if ( a3 ) /*0x86d705*/
        ++v2[7].Unk08; /*0x86d707*/
    }
    v46 = v312; /*0x86d70b*/
    LOBYTE(v313) = 1; /*0x86d711*/
    if ( v312 ) /*0x86d716*/
    {
      --v312[7].Unk08; /*0x86d718*/
      if ( !v46[7].Unk08 ) /*0x86d720*/
        sub_772560(v46); /*0x86d725*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x86d731*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x86d73e*/
    v47 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d750*/
    v4 = v2 == (NiD3DTextureStage *)*v47; /*0x86d752*/
    LOBYTE(v313) = 0x13; /*0x86d755*/
    if ( !v4 ) /*0x86d75a*/
    {
      if ( v2 ) /*0x86d75e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d760*/
        if ( v4 ) /*0x86d763*/
          sub_772560(v2); /*0x86d767*/
      }
      v2 = (NiD3DTextureStage *)*v47; /*0x86d76c*/
      a3 = *v47; /*0x86d771*/
      if ( a3 ) /*0x86d775*/
        ++v2[7].Unk08; /*0x86d777*/
    }
    v48 = v312; /*0x86d77b*/
    LOBYTE(v313) = 1; /*0x86d781*/
    if ( v312 ) /*0x86d786*/
    {
      --v312[7].Unk08; /*0x86d788*/
      if ( !v48[7].Unk08 ) /*0x86d790*/
        sub_772560(v48); /*0x86d795*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x86d7a1*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x86d7ae*/
    v49 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d7c0*/
    v4 = v2 == (NiD3DTextureStage *)*v49; /*0x86d7c2*/
    LOBYTE(v313) = 0x14; /*0x86d7c5*/
    if ( !v4 ) /*0x86d7ca*/
    {
      if ( v2 ) /*0x86d7ce*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d7d0*/
        if ( v4 ) /*0x86d7d3*/
          sub_772560(v2); /*0x86d7d7*/
      }
      v2 = (NiD3DTextureStage *)*v49; /*0x86d7dc*/
      a3 = *v49; /*0x86d7e1*/
      if ( a3 ) /*0x86d7e5*/
        ++v2[7].Unk08; /*0x86d7e7*/
    }
    v50 = v312; /*0x86d7eb*/
    LOBYTE(v313) = 1; /*0x86d7f1*/
    if ( v312 ) /*0x86d7f6*/
    {
      --v312[7].Unk08; /*0x86d7f8*/
      if ( !v50[7].Unk08 ) /*0x86d800*/
        sub_772560(v50); /*0x86d805*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x86d811*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x86d81e*/
    v51 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d830*/
    v4 = v2 == (NiD3DTextureStage *)*v51; /*0x86d832*/
    LOBYTE(v313) = 0x15; /*0x86d835*/
    if ( !v4 ) /*0x86d83a*/
    {
      if ( v2 ) /*0x86d83e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d840*/
        if ( v4 ) /*0x86d843*/
          sub_772560(v2); /*0x86d847*/
      }
      v2 = (NiD3DTextureStage *)*v51; /*0x86d84c*/
      a3 = *v51; /*0x86d851*/
      if ( a3 ) /*0x86d855*/
        ++v2[7].Unk08; /*0x86d857*/
    }
    v52 = v312; /*0x86d85b*/
    LOBYTE(v313) = 1; /*0x86d861*/
    if ( v312 ) /*0x86d866*/
    {
      --v312[7].Unk08; /*0x86d868*/
      if ( !v52[7].Unk08 ) /*0x86d870*/
        sub_772560(v52); /*0x86d875*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x86d881*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x86d88e*/
    v53 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d8a0*/
    v4 = v2 == (NiD3DTextureStage *)*v53; /*0x86d8a2*/
    LOBYTE(v313) = 0x16; /*0x86d8a5*/
    if ( !v4 ) /*0x86d8aa*/
    {
      if ( v2 ) /*0x86d8ae*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d8b0*/
        if ( v4 ) /*0x86d8b3*/
          sub_772560(v2); /*0x86d8b7*/
      }
      v2 = (NiD3DTextureStage *)*v53; /*0x86d8bc*/
      a3 = *v53; /*0x86d8c1*/
      if ( a3 ) /*0x86d8c5*/
        ++v2[7].Unk08; /*0x86d8c7*/
    }
    v54 = v312; /*0x86d8cb*/
    LOBYTE(v313) = 1; /*0x86d8d1*/
    if ( v312 ) /*0x86d8d6*/
    {
      --v312[7].Unk08; /*0x86d8d8*/
      if ( !v54[7].Unk08 ) /*0x86d8e0*/
        sub_772560(v54); /*0x86d8e5*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x86d8f1*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x86d8fe*/
    v55 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d910*/
    v4 = v2 == (NiD3DTextureStage *)*v55; /*0x86d912*/
    LOBYTE(v313) = 0x17; /*0x86d915*/
    if ( !v4 ) /*0x86d91a*/
    {
      if ( v2 ) /*0x86d91e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d920*/
        if ( v4 ) /*0x86d923*/
          sub_772560(v2); /*0x86d927*/
      }
      v2 = (NiD3DTextureStage *)*v55; /*0x86d92c*/
      a3 = *v55; /*0x86d931*/
      if ( a3 ) /*0x86d935*/
        ++v2[7].Unk08; /*0x86d937*/
    }
    v56 = v312; /*0x86d93b*/
    LOBYTE(v313) = 1; /*0x86d941*/
    if ( v312 ) /*0x86d946*/
    {
      --v312[7].Unk08; /*0x86d948*/
      if ( !v56[7].Unk08 ) /*0x86d950*/
        sub_772560(v56); /*0x86d955*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x86d961*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86d971*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x86d97b*/
    v57 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d98d*/
    v4 = v2 == (NiD3DTextureStage *)*v57; /*0x86d98f*/
    LOBYTE(v313) = 0x18; /*0x86d992*/
    if ( !v4 ) /*0x86d997*/
    {
      if ( v2 ) /*0x86d99b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86d99d*/
        if ( v4 ) /*0x86d9a0*/
          sub_772560(v2); /*0x86d9a4*/
      }
      v2 = (NiD3DTextureStage *)*v57; /*0x86d9a9*/
      a3 = *v57; /*0x86d9ae*/
      if ( a3 ) /*0x86d9b2*/
        ++v2[7].Unk08; /*0x86d9b4*/
    }
    v58 = v312; /*0x86d9b8*/
    LOBYTE(v313) = 1; /*0x86d9be*/
    if ( v312 ) /*0x86d9c3*/
    {
      --v312[7].Unk08; /*0x86d9c5*/
      if ( !v58[7].Unk08 ) /*0x86d9cd*/
        sub_772560(v58); /*0x86d9d2*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x86d9de*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x86d9eb*/
    v59 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86d9fd*/
    v4 = v2 == (NiD3DTextureStage *)*v59; /*0x86d9ff*/
    LOBYTE(v313) = 0x19; /*0x86da02*/
    if ( !v4 ) /*0x86da07*/
    {
      if ( v2 ) /*0x86da0b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86da0d*/
        if ( v4 ) /*0x86da10*/
          sub_772560(v2); /*0x86da14*/
      }
      v2 = (NiD3DTextureStage *)*v59; /*0x86da19*/
      a3 = *v59; /*0x86da1e*/
      if ( a3 ) /*0x86da22*/
        ++v2[7].Unk08; /*0x86da24*/
    }
    v60 = v312; /*0x86da28*/
    LOBYTE(v313) = 1; /*0x86da2e*/
    if ( v312 ) /*0x86da33*/
    {
      --v312[7].Unk08; /*0x86da35*/
      if ( !v60[7].Unk08 ) /*0x86da3d*/
        sub_772560(v60); /*0x86da42*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x86da4e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86da5b*/
  }
  v61 = v310[0x30]; /*0x86da64*/
  v62 = *(_DWORD *)(v1 + 0x58); /*0x86da6a*/
  if ( v62 != v61 ) /*0x86da6f*/
  {
    if ( v62 ) /*0x86da73*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) ) /*0x86da79*/
        (**(void (__thiscall ***)(int, int))v62)(v62, 1); /*0x86da90*/
    }
    *(_DWORD *)(v1 + 0x58) = v61; /*0x86da94*/
    if ( v61 ) /*0x86da97*/
      InterlockedIncrement((volatile LONG *)(v61 + 4)); /*0x86da9d*/
  }
  v63 = v310[0x53]; /*0x86daa7*/
  v64 = *(_DWORD *)(v1 + 0x44); /*0x86daad*/
  if ( v64 != v63 ) /*0x86dab2*/
  {
    if ( v64 ) /*0x86dab6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v64 + 4)) ) /*0x86dabc*/
        (**(void (__thiscall ***)(int, int))v64)(v64, 1); /*0x86dad3*/
    }
    *(_DWORD *)(v1 + 0x44) = v63; /*0x86dad7*/
    if ( v63 ) /*0x86dada*/
      InterlockedIncrement((volatile LONG *)(v63 + 4)); /*0x86dae0*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86dae6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86daf1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86dafd*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86db02*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86db0d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86db19*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86db1e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86db29*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86db35*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86db3a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86db45*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86db51*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86db56*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86db61*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86db6d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86db72*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86db7d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86db89*/
  v4 = v1 == unk_B476AC; /*0x86db91*/
  unk_B43DF8 = 0x78088; /*0x86db97*/
  unk_B44488 = 0x10C; /*0x86dba1*/
  if ( !v4 ) /*0x86dbab*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86dbad*/
    if ( v4 ) /*0x86dbb0*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86dbb4*/
    v1 = unk_B476AC; /*0x86dbb9*/
    v311 = unk_B476AC; /*0x86dbc1*/
    if ( v311 ) /*0x86dbc5*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86dbc7*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86dbcf*/
  {
    v65 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86dbe2*/
    v4 = v2 == (NiD3DTextureStage *)*v65; /*0x86dbe4*/
    LOBYTE(v313) = 0x1A; /*0x86dbe7*/
    if ( !v4 ) /*0x86dbec*/
    {
      if ( v2 ) /*0x86dbf0*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86dbf2*/
        if ( v4 ) /*0x86dbf5*/
          sub_772560(v2); /*0x86dbf9*/
      }
      v2 = (NiD3DTextureStage *)*v65; /*0x86dbfe*/
      a3 = *v65; /*0x86dc03*/
      if ( a3 ) /*0x86dc07*/
        ++v2[7].Unk08; /*0x86dc09*/
    }
    v66 = v312; /*0x86dc0d*/
    LOBYTE(v313) = 1; /*0x86dc13*/
    if ( v312 ) /*0x86dc18*/
    {
      --v312[7].Unk08; /*0x86dc1a*/
      if ( !v66[7].Unk08 ) /*0x86dc22*/
        sub_772560(v66); /*0x86dc27*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x86dc33*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x86dc40*/
    v67 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86dc52*/
    v4 = v2 == (NiD3DTextureStage *)*v67; /*0x86dc54*/
    LOBYTE(v313) = 0x1B; /*0x86dc57*/
    if ( !v4 ) /*0x86dc5c*/
    {
      if ( v2 ) /*0x86dc60*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86dc62*/
        if ( v4 ) /*0x86dc65*/
          sub_772560(v2); /*0x86dc69*/
      }
      v2 = (NiD3DTextureStage *)*v67; /*0x86dc6e*/
      a3 = *v67; /*0x86dc73*/
      if ( a3 ) /*0x86dc77*/
        ++v2[7].Unk08; /*0x86dc79*/
    }
    v68 = v312; /*0x86dc7d*/
    LOBYTE(v313) = 1; /*0x86dc83*/
    if ( v312 ) /*0x86dc88*/
    {
      --v312[7].Unk08; /*0x86dc8a*/
      if ( !v68[7].Unk08 ) /*0x86dc92*/
        sub_772560(v68); /*0x86dc97*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x86dca3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x86dcb0*/
    v69 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86dcc2*/
    v4 = v2 == (NiD3DTextureStage *)*v69; /*0x86dcc4*/
    LOBYTE(v313) = 0x1C; /*0x86dcc7*/
    if ( !v4 ) /*0x86dccc*/
    {
      if ( v2 ) /*0x86dcd0*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86dcd2*/
        if ( v4 ) /*0x86dcd5*/
          sub_772560(v2); /*0x86dcd9*/
      }
      v2 = (NiD3DTextureStage *)*v69; /*0x86dcde*/
      a3 = *v69; /*0x86dce3*/
      if ( a3 ) /*0x86dce7*/
        ++v2[7].Unk08; /*0x86dce9*/
    }
    v70 = v312; /*0x86dced*/
    LOBYTE(v313) = 1; /*0x86dcf3*/
    if ( v312 ) /*0x86dcf8*/
    {
      --v312[7].Unk08; /*0x86dcfa*/
      if ( !v70[7].Unk08 ) /*0x86dd02*/
        sub_772560(v70); /*0x86dd07*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x86dd13*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x86dd20*/
    v71 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86dd32*/
    v4 = v2 == (NiD3DTextureStage *)*v71; /*0x86dd34*/
    LOBYTE(v313) = 0x1D; /*0x86dd37*/
    if ( !v4 ) /*0x86dd3c*/
    {
      if ( v2 ) /*0x86dd40*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86dd42*/
        if ( v4 ) /*0x86dd45*/
          sub_772560(v2); /*0x86dd49*/
      }
      v2 = (NiD3DTextureStage *)*v71; /*0x86dd4e*/
      a3 = *v71; /*0x86dd53*/
      if ( a3 ) /*0x86dd57*/
        ++v2[7].Unk08; /*0x86dd59*/
    }
    v72 = v312; /*0x86dd5d*/
    LOBYTE(v313) = 1; /*0x86dd63*/
    if ( v312 ) /*0x86dd68*/
    {
      --v312[7].Unk08; /*0x86dd6a*/
      if ( !v72[7].Unk08 ) /*0x86dd72*/
        sub_772560(v72); /*0x86dd77*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x86dd83*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x86dd90*/
    v73 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86dda2*/
    v4 = v2 == (NiD3DTextureStage *)*v73; /*0x86dda4*/
    LOBYTE(v313) = 0x1E; /*0x86dda7*/
    if ( !v4 ) /*0x86ddac*/
    {
      if ( v2 ) /*0x86ddb0*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86ddb2*/
        if ( v4 ) /*0x86ddb5*/
          sub_772560(v2); /*0x86ddb9*/
      }
      v2 = (NiD3DTextureStage *)*v73; /*0x86ddbe*/
      a3 = *v73; /*0x86ddc3*/
      if ( a3 ) /*0x86ddc7*/
        ++v2[7].Unk08; /*0x86ddc9*/
    }
    v74 = v312; /*0x86ddcd*/
    LOBYTE(v313) = 1; /*0x86ddd3*/
    if ( v312 ) /*0x86ddd8*/
    {
      --v312[7].Unk08; /*0x86ddda*/
      if ( !v74[7].Unk08 ) /*0x86dde2*/
        sub_772560(v74); /*0x86dde7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x86ddf3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x86de00*/
    v75 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86de12*/
    v4 = v2 == (NiD3DTextureStage *)*v75; /*0x86de14*/
    LOBYTE(v313) = 0x1F; /*0x86de17*/
    if ( !v4 ) /*0x86de1c*/
    {
      if ( v2 ) /*0x86de20*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86de22*/
        if ( v4 ) /*0x86de25*/
          sub_772560(v2); /*0x86de29*/
      }
      v2 = (NiD3DTextureStage *)*v75; /*0x86de2e*/
      a3 = *v75; /*0x86de33*/
      if ( a3 ) /*0x86de37*/
        ++v2[7].Unk08; /*0x86de39*/
    }
    v76 = v312; /*0x86de3d*/
    LOBYTE(v313) = 1; /*0x86de43*/
    if ( v312 ) /*0x86de48*/
    {
      --v312[7].Unk08; /*0x86de4a*/
      if ( !v76[7].Unk08 ) /*0x86de52*/
        sub_772560(v76); /*0x86de57*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x86de63*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86de73*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x86de7d*/
    v77 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86de8f*/
    v4 = v2 == (NiD3DTextureStage *)*v77; /*0x86de91*/
    LOBYTE(v313) = 0x20; /*0x86de94*/
    if ( !v4 ) /*0x86de99*/
    {
      if ( v2 ) /*0x86de9d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86de9f*/
        if ( v4 ) /*0x86dea2*/
          sub_772560(v2); /*0x86dea6*/
      }
      v2 = (NiD3DTextureStage *)*v77; /*0x86deab*/
      a3 = *v77; /*0x86deb0*/
      if ( a3 ) /*0x86deb4*/
        ++v2[7].Unk08; /*0x86deb6*/
    }
    v78 = v312; /*0x86deba*/
    LOBYTE(v313) = 1; /*0x86dec0*/
    if ( v312 ) /*0x86dec5*/
    {
      --v312[7].Unk08; /*0x86dec7*/
      if ( !v78[7].Unk08 ) /*0x86decf*/
        sub_772560(v78); /*0x86ded4*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x86dee0*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x86deed*/
    v79 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86deff*/
    v4 = v2 == (NiD3DTextureStage *)*v79; /*0x86df01*/
    LOBYTE(v313) = 0x21; /*0x86df04*/
    if ( !v4 ) /*0x86df09*/
    {
      if ( v2 ) /*0x86df0d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86df0f*/
        if ( v4 ) /*0x86df12*/
          sub_772560(v2); /*0x86df16*/
      }
      v2 = (NiD3DTextureStage *)*v79; /*0x86df1b*/
      a3 = *v79; /*0x86df20*/
      if ( a3 ) /*0x86df24*/
        ++v2[7].Unk08; /*0x86df26*/
    }
    v80 = v312; /*0x86df2a*/
    LOBYTE(v313) = 1; /*0x86df30*/
    if ( v312 ) /*0x86df35*/
    {
      --v312[7].Unk08; /*0x86df37*/
      if ( !v80[7].Unk08 ) /*0x86df3f*/
        sub_772560(v80); /*0x86df44*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x86df50*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86df5d*/
  }
  v81 = v310[0x30]; /*0x86df66*/
  v82 = *(_DWORD *)(v1 + 0x58); /*0x86df6c*/
  if ( v82 != v81 ) /*0x86df71*/
  {
    if ( v82 ) /*0x86df75*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v82 + 4)) ) /*0x86df7b*/
        (**(void (__thiscall ***)(int, int))v82)(v82, 1); /*0x86df92*/
    }
    *(_DWORD *)(v1 + 0x58) = v81; /*0x86df96*/
    if ( v81 ) /*0x86df99*/
      InterlockedIncrement((volatile LONG *)(v81 + 4)); /*0x86df9f*/
  }
  v83 = v310[0x54]; /*0x86dfa9*/
  v84 = *(_DWORD *)(v1 + 0x44); /*0x86dfaf*/
  if ( v84 != v83 ) /*0x86dfb4*/
  {
    if ( v84 ) /*0x86dfb8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v84 + 4)) ) /*0x86dfbe*/
        (**(void (__thiscall ***)(int, int))v84)(v84, 1); /*0x86dfd5*/
    }
    *(_DWORD *)(v1 + 0x44) = v83; /*0x86dfd9*/
    if ( v83 ) /*0x86dfdc*/
      InterlockedIncrement((volatile LONG *)(v83 + 4)); /*0x86dfe2*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86dfe8*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86dff3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86dfff*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e004*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e00f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86e01b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e020*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e02b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86e037*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e03c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e047*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86e053*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e058*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e063*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86e06f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e074*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e07f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86e08b*/
  v4 = v1 == unk_B476B0; /*0x86e093*/
  unk_B43DFC = 0x78088; /*0x86e099*/
  unk_B4448C = 0x18C; /*0x86e0a3*/
  if ( !v4 ) /*0x86e0ad*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86e0af*/
    if ( v4 ) /*0x86e0b2*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86e0b6*/
    v1 = unk_B476B0; /*0x86e0bb*/
    v311 = unk_B476B0; /*0x86e0c3*/
    if ( v311 ) /*0x86e0c7*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86e0c9*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86e0d1*/
  {
    v85 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e0e4*/
    v4 = v2 == (NiD3DTextureStage *)*v85; /*0x86e0e6*/
    LOBYTE(v313) = 0x22; /*0x86e0e9*/
    if ( !v4 ) /*0x86e0ee*/
    {
      if ( v2 ) /*0x86e0f2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e0f4*/
        if ( v4 ) /*0x86e0f7*/
          sub_772560(v2); /*0x86e0fb*/
      }
      v2 = (NiD3DTextureStage *)*v85; /*0x86e100*/
      a3 = *v85; /*0x86e105*/
      if ( a3 ) /*0x86e109*/
        ++v2[7].Unk08; /*0x86e10b*/
    }
    v86 = v312; /*0x86e10f*/
    LOBYTE(v313) = 1; /*0x86e115*/
    if ( v312 ) /*0x86e11a*/
    {
      --v312[7].Unk08; /*0x86e11c*/
      if ( !v86[7].Unk08 ) /*0x86e124*/
        sub_772560(v86); /*0x86e129*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x86e135*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x86e142*/
    v87 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e154*/
    v4 = v2 == (NiD3DTextureStage *)*v87; /*0x86e156*/
    LOBYTE(v313) = 0x23; /*0x86e159*/
    if ( !v4 ) /*0x86e15e*/
    {
      if ( v2 ) /*0x86e162*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e164*/
        if ( v4 ) /*0x86e167*/
          sub_772560(v2); /*0x86e16b*/
      }
      v2 = (NiD3DTextureStage *)*v87; /*0x86e170*/
      a3 = *v87; /*0x86e175*/
      if ( a3 ) /*0x86e179*/
        ++v2[7].Unk08; /*0x86e17b*/
    }
    v88 = v312; /*0x86e17f*/
    LOBYTE(v313) = 1; /*0x86e185*/
    if ( v312 ) /*0x86e18a*/
    {
      --v312[7].Unk08; /*0x86e18c*/
      if ( !v88[7].Unk08 ) /*0x86e194*/
        sub_772560(v88); /*0x86e199*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x86e1a5*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x86e1b2*/
    v89 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e1c4*/
    v4 = v2 == (NiD3DTextureStage *)*v89; /*0x86e1c6*/
    LOBYTE(v313) = 0x24; /*0x86e1c9*/
    if ( !v4 ) /*0x86e1ce*/
    {
      if ( v2 ) /*0x86e1d2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e1d4*/
        if ( v4 ) /*0x86e1d7*/
          sub_772560(v2); /*0x86e1db*/
      }
      v2 = (NiD3DTextureStage *)*v89; /*0x86e1e0*/
      a3 = *v89; /*0x86e1e5*/
      if ( a3 ) /*0x86e1e9*/
        ++v2[7].Unk08; /*0x86e1eb*/
    }
    v90 = v312; /*0x86e1ef*/
    LOBYTE(v313) = 1; /*0x86e1f5*/
    if ( v312 ) /*0x86e1fa*/
    {
      --v312[7].Unk08; /*0x86e1fc*/
      if ( !v90[7].Unk08 ) /*0x86e204*/
        sub_772560(v90); /*0x86e209*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x86e215*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x86e222*/
    v91 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e234*/
    v4 = v2 == (NiD3DTextureStage *)*v91; /*0x86e236*/
    LOBYTE(v313) = 0x25; /*0x86e239*/
    if ( !v4 ) /*0x86e23e*/
    {
      if ( v2 ) /*0x86e242*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e244*/
        if ( v4 ) /*0x86e247*/
          sub_772560(v2); /*0x86e24b*/
      }
      v2 = (NiD3DTextureStage *)*v91; /*0x86e250*/
      a3 = *v91; /*0x86e255*/
      if ( a3 ) /*0x86e259*/
        ++v2[7].Unk08; /*0x86e25b*/
    }
    v92 = v312; /*0x86e25f*/
    LOBYTE(v313) = 1; /*0x86e265*/
    if ( v312 ) /*0x86e26a*/
    {
      --v312[7].Unk08; /*0x86e26c*/
      if ( !v92[7].Unk08 ) /*0x86e274*/
        sub_772560(v92); /*0x86e279*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x86e285*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x86e292*/
    v93 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e2a4*/
    v4 = v2 == (NiD3DTextureStage *)*v93; /*0x86e2a6*/
    LOBYTE(v313) = 0x26; /*0x86e2a9*/
    if ( !v4 ) /*0x86e2ae*/
    {
      if ( v2 ) /*0x86e2b2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e2b4*/
        if ( v4 ) /*0x86e2b7*/
          sub_772560(v2); /*0x86e2bb*/
      }
      v2 = (NiD3DTextureStage *)*v93; /*0x86e2c0*/
      a3 = *v93; /*0x86e2c5*/
      if ( a3 ) /*0x86e2c9*/
        ++v2[7].Unk08; /*0x86e2cb*/
    }
    v94 = v312; /*0x86e2cf*/
    LOBYTE(v313) = 1; /*0x86e2d5*/
    if ( v312 ) /*0x86e2da*/
    {
      --v312[7].Unk08; /*0x86e2dc*/
      if ( !v94[7].Unk08 ) /*0x86e2e4*/
        sub_772560(v94); /*0x86e2e9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x86e2f5*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x86e302*/
    v95 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e314*/
    v4 = v2 == (NiD3DTextureStage *)*v95; /*0x86e316*/
    LOBYTE(v313) = 0x27; /*0x86e319*/
    if ( !v4 ) /*0x86e31e*/
    {
      if ( v2 ) /*0x86e322*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e324*/
        if ( v4 ) /*0x86e327*/
          sub_772560(v2); /*0x86e32b*/
      }
      v2 = (NiD3DTextureStage *)*v95; /*0x86e330*/
      a3 = *v95; /*0x86e335*/
      if ( a3 ) /*0x86e339*/
        ++v2[7].Unk08; /*0x86e33b*/
    }
    v96 = v312; /*0x86e33f*/
    LOBYTE(v313) = 1; /*0x86e345*/
    if ( v312 ) /*0x86e34a*/
    {
      --v312[7].Unk08; /*0x86e34c*/
      if ( !v96[7].Unk08 ) /*0x86e354*/
        sub_772560(v96); /*0x86e359*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x86e365*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86e375*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x86e37f*/
    v97 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e391*/
    v4 = v2 == (NiD3DTextureStage *)*v97; /*0x86e393*/
    LOBYTE(v313) = 0x28; /*0x86e396*/
    if ( !v4 ) /*0x86e39b*/
    {
      if ( v2 ) /*0x86e39f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e3a1*/
        if ( v4 ) /*0x86e3a4*/
          sub_772560(v2); /*0x86e3a8*/
      }
      v2 = (NiD3DTextureStage *)*v97; /*0x86e3ad*/
      a3 = *v97; /*0x86e3b2*/
      if ( a3 ) /*0x86e3b6*/
        ++v2[7].Unk08; /*0x86e3b8*/
    }
    v98 = v312; /*0x86e3bc*/
    LOBYTE(v313) = 1; /*0x86e3c2*/
    if ( v312 ) /*0x86e3c7*/
    {
      --v312[7].Unk08; /*0x86e3c9*/
      if ( !v98[7].Unk08 ) /*0x86e3d1*/
        sub_772560(v98); /*0x86e3d6*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x86e3e2*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x86e3ef*/
    v99 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e401*/
    v4 = v2 == (NiD3DTextureStage *)*v99; /*0x86e403*/
    LOBYTE(v313) = 0x29; /*0x86e406*/
    if ( !v4 ) /*0x86e40b*/
    {
      if ( v2 ) /*0x86e40f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e411*/
        if ( v4 ) /*0x86e414*/
          sub_772560(v2); /*0x86e418*/
      }
      v2 = (NiD3DTextureStage *)*v99; /*0x86e41d*/
      a3 = *v99; /*0x86e422*/
      if ( a3 ) /*0x86e426*/
        ++v2[7].Unk08; /*0x86e428*/
    }
    v100 = v312; /*0x86e42c*/
    LOBYTE(v313) = 1; /*0x86e432*/
    if ( v312 ) /*0x86e437*/
    {
      --v312[7].Unk08; /*0x86e439*/
      if ( !v100[7].Unk08 ) /*0x86e441*/
        sub_772560(v100); /*0x86e446*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x86e452*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86e45f*/
  }
  v101 = v310[0x31]; /*0x86e468*/
  v102 = *(_DWORD *)(v1 + 0x58); /*0x86e46e*/
  if ( v102 != v101 ) /*0x86e473*/
  {
    if ( v102 ) /*0x86e477*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v102 + 4)) ) /*0x86e47d*/
        (**(void (__thiscall ***)(int, int))v102)(v102, 1); /*0x86e494*/
    }
    *(_DWORD *)(v1 + 0x58) = v101; /*0x86e498*/
    if ( v101 ) /*0x86e49b*/
      InterlockedIncrement((volatile LONG *)(v101 + 4)); /*0x86e4a1*/
  }
  v103 = v310[0x55]; /*0x86e4ab*/
  v104 = *(_DWORD *)(v1 + 0x44); /*0x86e4b1*/
  if ( v104 != v103 ) /*0x86e4b6*/
  {
    if ( v104 ) /*0x86e4ba*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v104 + 4)) ) /*0x86e4c0*/
        (**(void (__thiscall ***)(int, int))v104)(v104, 1); /*0x86e4d7*/
    }
    *(_DWORD *)(v1 + 0x44) = v103; /*0x86e4db*/
    if ( v103 ) /*0x86e4de*/
      InterlockedIncrement((volatile LONG *)(v103 + 4)); /*0x86e4e4*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e4ea*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e4f5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86e501*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e506*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e511*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86e51d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e522*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e52d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86e539*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e53e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e549*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86e555*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e55a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e565*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86e571*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e576*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e581*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86e58d*/
  v4 = v1 == unk_B476B4; /*0x86e592*/
  unk_B43E14 = 0x380F2; /*0x86e59d*/
  unk_B444A4 = 0x10C; /*0x86e5a3*/
  if ( !v4 ) /*0x86e5ad*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86e5af*/
    if ( v4 ) /*0x86e5b3*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86e5b7*/
    v1 = unk_B476B4; /*0x86e5bc*/
    v311 = unk_B476B4; /*0x86e5c4*/
    if ( v311 ) /*0x86e5c8*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86e5ca*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86e5d2*/
  {
    v105 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e5e5*/
    v4 = v2 == (NiD3DTextureStage *)*v105; /*0x86e5e7*/
    LOBYTE(v313) = 0x2A; /*0x86e5ea*/
    if ( !v4 ) /*0x86e5ef*/
    {
      if ( v2 ) /*0x86e5f3*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e5f5*/
        if ( v4 ) /*0x86e5f9*/
          sub_772560(v2); /*0x86e5fd*/
      }
      v2 = (NiD3DTextureStage *)*v105; /*0x86e602*/
      a3 = *v105; /*0x86e607*/
      if ( a3 ) /*0x86e60b*/
        ++v2[7].Unk08; /*0x86e60d*/
    }
    v106 = v312; /*0x86e611*/
    LOBYTE(v313) = 1; /*0x86e617*/
    if ( v312 ) /*0x86e61c*/
    {
      --v312[7].Unk08; /*0x86e61e*/
      if ( !v106[7].Unk08 ) /*0x86e627*/
        sub_772560(v106); /*0x86e62c*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x86e638*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x86e645*/
    v107 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e657*/
    v4 = v2 == (NiD3DTextureStage *)*v107; /*0x86e659*/
    LOBYTE(v313) = 0x2B; /*0x86e65c*/
    if ( !v4 ) /*0x86e661*/
    {
      if ( v2 ) /*0x86e665*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e667*/
        if ( v4 ) /*0x86e66b*/
          sub_772560(v2); /*0x86e66f*/
      }
      v2 = (NiD3DTextureStage *)*v107; /*0x86e674*/
      a3 = *v107; /*0x86e679*/
      if ( a3 ) /*0x86e67d*/
        ++v2[7].Unk08; /*0x86e67f*/
    }
    v108 = v312; /*0x86e683*/
    LOBYTE(v313) = 1; /*0x86e689*/
    if ( v312 ) /*0x86e68e*/
    {
      --v312[7].Unk08; /*0x86e690*/
      if ( !v108[7].Unk08 ) /*0x86e699*/
        sub_772560(v108); /*0x86e69e*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x86e6aa*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x86e6b7*/
    v109 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e6c9*/
    v4 = v2 == (NiD3DTextureStage *)*v109; /*0x86e6cb*/
    LOBYTE(v313) = 0x2C; /*0x86e6ce*/
    if ( !v4 ) /*0x86e6d3*/
    {
      if ( v2 ) /*0x86e6d7*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e6d9*/
        if ( v4 ) /*0x86e6dd*/
          sub_772560(v2); /*0x86e6e1*/
      }
      v2 = (NiD3DTextureStage *)*v109; /*0x86e6e6*/
      a3 = *v109; /*0x86e6eb*/
      if ( a3 ) /*0x86e6ef*/
        ++v2[7].Unk08; /*0x86e6f1*/
    }
    v110 = v312; /*0x86e6f5*/
    LOBYTE(v313) = 1; /*0x86e6fb*/
    if ( v312 ) /*0x86e700*/
    {
      --v312[7].Unk08; /*0x86e702*/
      if ( !v110[7].Unk08 ) /*0x86e70b*/
        sub_772560(v110); /*0x86e710*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x86e71c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x86e729*/
    v111 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e73b*/
    v4 = v2 == (NiD3DTextureStage *)*v111; /*0x86e73d*/
    LOBYTE(v313) = 0x2D; /*0x86e740*/
    if ( !v4 ) /*0x86e745*/
    {
      if ( v2 ) /*0x86e749*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e74b*/
        if ( v4 ) /*0x86e74f*/
          sub_772560(v2); /*0x86e753*/
      }
      v2 = (NiD3DTextureStage *)*v111; /*0x86e758*/
      a3 = *v111; /*0x86e75d*/
      if ( a3 ) /*0x86e761*/
        ++v2[7].Unk08; /*0x86e763*/
    }
    v112 = v312; /*0x86e767*/
    LOBYTE(v313) = 1; /*0x86e76d*/
    if ( v312 ) /*0x86e772*/
    {
      --v312[7].Unk08; /*0x86e774*/
      if ( !v112[7].Unk08 ) /*0x86e77d*/
        sub_772560(v112); /*0x86e782*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x86e78e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x86e79b*/
    v113 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e7ad*/
    v4 = v2 == (NiD3DTextureStage *)*v113; /*0x86e7af*/
    LOBYTE(v313) = 0x2E; /*0x86e7b2*/
    if ( !v4 ) /*0x86e7b7*/
    {
      if ( v2 ) /*0x86e7bb*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e7bd*/
        if ( v4 ) /*0x86e7c1*/
          sub_772560(v2); /*0x86e7c5*/
      }
      v2 = (NiD3DTextureStage *)*v113; /*0x86e7ca*/
      a3 = *v113; /*0x86e7cf*/
      if ( a3 ) /*0x86e7d3*/
        ++v2[7].Unk08; /*0x86e7d5*/
    }
    v114 = v312; /*0x86e7d9*/
    LOBYTE(v313) = 1; /*0x86e7df*/
    if ( v312 ) /*0x86e7e4*/
    {
      --v312[7].Unk08; /*0x86e7e6*/
      if ( !v114[7].Unk08 ) /*0x86e7ef*/
        sub_772560(v114); /*0x86e7f4*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x86e800*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x86e80d*/
    v115 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e81f*/
    v4 = v2 == (NiD3DTextureStage *)*v115; /*0x86e821*/
    LOBYTE(v313) = 0x2F; /*0x86e824*/
    if ( !v4 ) /*0x86e829*/
    {
      if ( v2 ) /*0x86e82d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e82f*/
        if ( v4 ) /*0x86e833*/
          sub_772560(v2); /*0x86e837*/
      }
      v2 = (NiD3DTextureStage *)*v115; /*0x86e83c*/
      a3 = *v115; /*0x86e841*/
      if ( a3 ) /*0x86e845*/
        ++v2[7].Unk08; /*0x86e847*/
    }
    v116 = v312; /*0x86e84b*/
    LOBYTE(v313) = 1; /*0x86e851*/
    if ( v312 ) /*0x86e856*/
    {
      --v312[7].Unk08; /*0x86e858*/
      if ( !v116[7].Unk08 ) /*0x86e861*/
        sub_772560(v116); /*0x86e866*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 0); /*0x86e872*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86e882*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x86e88c*/
    v117 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e89e*/
    v4 = v2 == (NiD3DTextureStage *)*v117; /*0x86e8a0*/
    LOBYTE(v313) = 0x30; /*0x86e8a3*/
    if ( !v4 ) /*0x86e8a8*/
    {
      if ( v2 ) /*0x86e8ac*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e8ae*/
        if ( v4 ) /*0x86e8b2*/
          sub_772560(v2); /*0x86e8b6*/
      }
      v2 = (NiD3DTextureStage *)*v117; /*0x86e8bb*/
      a3 = *v117; /*0x86e8c0*/
      if ( a3 ) /*0x86e8c4*/
        ++v2[7].Unk08; /*0x86e8c6*/
    }
    v118 = v312; /*0x86e8ca*/
    LOBYTE(v313) = 1; /*0x86e8d0*/
    if ( v312 ) /*0x86e8d5*/
    {
      --v312[7].Unk08; /*0x86e8d7*/
      if ( !v118[7].Unk08 ) /*0x86e8e0*/
        sub_772560(v118); /*0x86e8e5*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x86e8f1*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x86e8fe*/
    v119 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v312); /*0x86e910*/
    v4 = v2 == (NiD3DTextureStage *)*v119; /*0x86e912*/
    LOBYTE(v313) = 0x31; /*0x86e915*/
    if ( !v4 ) /*0x86e91a*/
    {
      if ( v2 ) /*0x86e91e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86e920*/
        if ( v4 ) /*0x86e924*/
          sub_772560(v2); /*0x86e928*/
      }
      v2 = (NiD3DTextureStage *)*v119; /*0x86e92d*/
      a3 = *v119; /*0x86e932*/
      if ( a3 ) /*0x86e936*/
        ++v2[7].Unk08; /*0x86e938*/
    }
    v120 = v312; /*0x86e93c*/
    LOBYTE(v313) = 1; /*0x86e942*/
    if ( v312 ) /*0x86e947*/
    {
      --v312[7].Unk08; /*0x86e949*/
      if ( !v120[7].Unk08 ) /*0x86e952*/
        sub_772560(v120); /*0x86e957*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 0); /*0x86e963*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86e970*/
  }
  v121 = v310; /*0x86e975*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v310[0x31]); /*0x86e982*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v310[0x56]); /*0x86e990*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e995*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e9a0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86e9ac*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e9b1*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e9bc*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86e9c8*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e9cd*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e9d8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86e9e4*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86e9e9*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86e9f4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86ea00*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86ea05*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ea10*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86ea1c*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86ea21*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ea2c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86ea38*/
  v4 = v1 == unk_B476B8; /*0x86ea3d*/
  unk_B43E18 = 0x380F2; /*0x86ea43*/
  unk_B444A8 = 0x18C; /*0x86ea4e*/
  if ( !v4 ) /*0x86ea54*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86ea56*/
    if ( v4 ) /*0x86ea5a*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86ea5e*/
    v1 = unk_B476B8; /*0x86ea63*/
    v311 = unk_B476B8; /*0x86ea6b*/
    if ( v311 ) /*0x86ea6f*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86ea71*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86ea79*/
  {
    v122 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86ea84*/
    LOBYTE(v313) = 0x32; /*0x86ea91*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v122); /*0x86ea96*/
    v123 = v312; /*0x86ea9b*/
    LOBYTE(v313) = 1; /*0x86eaa1*/
    if ( v312 ) /*0x86eaa6*/
    {
      --v312[7].Unk08; /*0x86eaa8*/
      if ( !v123[7].Unk08 ) /*0x86eab1*/
        sub_772560(v123); /*0x86eab6*/
    }
    v124 = a3; /*0x86eabb*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86eac6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v124); /*0x86ead3*/
    v125 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86eadd*/
    LOBYTE(v313) = 0x33; /*0x86eaea*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v125); /*0x86eaef*/
    v126 = v312; /*0x86eaf4*/
    LOBYTE(v313) = 1; /*0x86eafa*/
    if ( v312 ) /*0x86eaff*/
    {
      --v312[7].Unk08; /*0x86eb01*/
      if ( !v126[7].Unk08 ) /*0x86eb0a*/
        sub_772560(v126); /*0x86eb0f*/
    }
    v127 = a3; /*0x86eb14*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86eb1f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v127); /*0x86eb2c*/
    v128 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86eb36*/
    LOBYTE(v313) = 0x34; /*0x86eb43*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v128); /*0x86eb48*/
    v129 = v312; /*0x86eb4d*/
    LOBYTE(v313) = 1; /*0x86eb53*/
    if ( v312 ) /*0x86eb58*/
    {
      --v312[7].Unk08; /*0x86eb5a*/
      if ( !v129[7].Unk08 ) /*0x86eb63*/
        sub_772560(v129); /*0x86eb68*/
    }
    v130 = a3; /*0x86eb6d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86eb78*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v130); /*0x86eb85*/
    v131 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86eb8f*/
    LOBYTE(v313) = 0x35; /*0x86eb9c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v131); /*0x86eba1*/
    v132 = v312; /*0x86eba6*/
    LOBYTE(v313) = 1; /*0x86ebac*/
    if ( v312 ) /*0x86ebb1*/
    {
      --v312[7].Unk08; /*0x86ebb3*/
      if ( !v132[7].Unk08 ) /*0x86ebbc*/
        sub_772560(v132); /*0x86ebc1*/
    }
    v133 = a3; /*0x86ebc6*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86ebd1*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v133); /*0x86ebde*/
    v134 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86ebe8*/
    LOBYTE(v313) = 0x36; /*0x86ebf5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v134); /*0x86ebfa*/
    v135 = v312; /*0x86ebff*/
    LOBYTE(v313) = 1; /*0x86ec05*/
    if ( v312 ) /*0x86ec0a*/
    {
      --v312[7].Unk08; /*0x86ec0c*/
      if ( !v135[7].Unk08 ) /*0x86ec15*/
        sub_772560(v135); /*0x86ec1a*/
    }
    v136 = a3; /*0x86ec1f*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86ec2a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v136); /*0x86ec37*/
    v137 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86ec41*/
    LOBYTE(v313) = 0x37; /*0x86ec4e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v137); /*0x86ec53*/
    v138 = v312; /*0x86ec58*/
    LOBYTE(v313) = 1; /*0x86ec5e*/
    if ( v312 ) /*0x86ec63*/
    {
      --v312[7].Unk08; /*0x86ec65*/
      if ( !v138[7].Unk08 ) /*0x86ec6e*/
        sub_772560(v138); /*0x86ec73*/
    }
    v139 = (NiD3DTextureStage *)a3; /*0x86ec78*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86ec83*/
    NiD3DTextureStage_SetTexture(v139, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86ec93*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v139->Stage); /*0x86ec9d*/
    v140 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86eca7*/
    LOBYTE(v313) = 0x38; /*0x86ecb4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v140); /*0x86ecb9*/
    v141 = v312; /*0x86ecbe*/
    LOBYTE(v313) = 1; /*0x86ecc4*/
    if ( v312 ) /*0x86ecc9*/
    {
      --v312[7].Unk08; /*0x86eccb*/
      if ( !v141[7].Unk08 ) /*0x86ecd4*/
        sub_772560(v141); /*0x86ecd9*/
    }
    v142 = a3; /*0x86ecde*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86ece9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v142); /*0x86ecf6*/
    v143 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86ed00*/
    LOBYTE(v313) = 0x39; /*0x86ed0d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v143); /*0x86ed12*/
    v144 = v312; /*0x86ed17*/
    LOBYTE(v313) = 1; /*0x86ed1d*/
    if ( v312 ) /*0x86ed22*/
    {
      --v312[7].Unk08; /*0x86ed24*/
      if ( !v144[7].Unk08 ) /*0x86ed2d*/
        sub_772560(v144); /*0x86ed32*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86ed37*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86ed42*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86ed4f*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v121[0x32]); /*0x86ed5d*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v121[0x55]); /*0x86ed6b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86ed70*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ed7b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86ed87*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86ed8c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ed97*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86eda3*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86eda8*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86edb3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86edbf*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86edc4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86edcf*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86eddb*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86ede0*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86edeb*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86edf7*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86edfc*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86ee07*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86ee13*/
  v4 = v1 == unk_B476BC; /*0x86ee18*/
  unk_B43E2C = 0x780F8; /*0x86ee23*/
  unk_B444BC = 0x10C; /*0x86ee29*/
  if ( !v4 ) /*0x86ee33*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86ee35*/
    if ( v4 ) /*0x86ee39*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86ee3d*/
    v1 = unk_B476BC; /*0x86ee42*/
    v311 = unk_B476BC; /*0x86ee4a*/
    if ( v311 ) /*0x86ee4e*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86ee50*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86ee58*/
  {
    v145 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86ee63*/
    LOBYTE(v313) = 0x3A; /*0x86ee70*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v145); /*0x86ee75*/
    v146 = v312; /*0x86ee7a*/
    LOBYTE(v313) = 1; /*0x86ee80*/
    if ( v312 ) /*0x86ee85*/
    {
      --v312[7].Unk08; /*0x86ee87*/
      if ( !v146[7].Unk08 ) /*0x86ee90*/
        sub_772560(v146); /*0x86ee95*/
    }
    v147 = a3; /*0x86ee9a*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86eea5*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v147); /*0x86eeb2*/
    v148 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86eebc*/
    LOBYTE(v313) = 0x3B; /*0x86eec9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v148); /*0x86eece*/
    v149 = v312; /*0x86eed3*/
    LOBYTE(v313) = 1; /*0x86eed9*/
    if ( v312 ) /*0x86eede*/
    {
      --v312[7].Unk08; /*0x86eee0*/
      if ( !v149[7].Unk08 ) /*0x86eee9*/
        sub_772560(v149); /*0x86eeee*/
    }
    v150 = a3; /*0x86eef3*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86eefe*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v150); /*0x86ef0b*/
    v151 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86ef15*/
    LOBYTE(v313) = 0x3C; /*0x86ef22*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v151); /*0x86ef27*/
    v152 = v312; /*0x86ef2c*/
    LOBYTE(v313) = 1; /*0x86ef32*/
    if ( v312 ) /*0x86ef37*/
    {
      --v312[7].Unk08; /*0x86ef39*/
      if ( !v152[7].Unk08 ) /*0x86ef42*/
        sub_772560(v152); /*0x86ef47*/
    }
    v153 = a3; /*0x86ef4c*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86ef57*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v153); /*0x86ef64*/
    v154 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86ef6e*/
    LOBYTE(v313) = 0x3D; /*0x86ef7b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v154); /*0x86ef80*/
    v155 = v312; /*0x86ef85*/
    LOBYTE(v313) = 1; /*0x86ef8b*/
    if ( v312 ) /*0x86ef90*/
    {
      --v312[7].Unk08; /*0x86ef92*/
      if ( !v155[7].Unk08 ) /*0x86ef9b*/
        sub_772560(v155); /*0x86efa0*/
    }
    v156 = a3; /*0x86efa5*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86efb0*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v156); /*0x86efbd*/
    v157 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86efc7*/
    LOBYTE(v313) = 0x3E; /*0x86efd4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v157); /*0x86efd9*/
    v158 = v312; /*0x86efde*/
    LOBYTE(v313) = 1; /*0x86efe4*/
    if ( v312 ) /*0x86efe9*/
    {
      --v312[7].Unk08; /*0x86efeb*/
      if ( !v158[7].Unk08 ) /*0x86eff4*/
        sub_772560(v158); /*0x86eff9*/
    }
    v159 = a3; /*0x86effe*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86f009*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v159); /*0x86f016*/
    v160 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f020*/
    LOBYTE(v313) = 0x3F; /*0x86f02d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v160); /*0x86f032*/
    v161 = v312; /*0x86f037*/
    LOBYTE(v313) = 1; /*0x86f03d*/
    if ( v312 ) /*0x86f042*/
    {
      --v312[7].Unk08; /*0x86f044*/
      if ( !v161[7].Unk08 ) /*0x86f04d*/
        sub_772560(v161); /*0x86f052*/
    }
    v162 = (NiD3DTextureStage *)a3; /*0x86f057*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86f062*/
    NiD3DTextureStage_SetTexture(v162, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86f072*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v162->Stage); /*0x86f07c*/
    v163 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f086*/
    LOBYTE(v313) = 0x40; /*0x86f093*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v163); /*0x86f098*/
    v164 = v312; /*0x86f09d*/
    LOBYTE(v313) = 1; /*0x86f0a3*/
    if ( v312 ) /*0x86f0a8*/
    {
      --v312[7].Unk08; /*0x86f0aa*/
      if ( !v164[7].Unk08 ) /*0x86f0b3*/
        sub_772560(v164); /*0x86f0b8*/
    }
    v165 = a3; /*0x86f0bd*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86f0c8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v165); /*0x86f0d5*/
    v166 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f0df*/
    LOBYTE(v313) = 0x41; /*0x86f0ec*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v166); /*0x86f0f1*/
    v167 = v312; /*0x86f0f6*/
    LOBYTE(v313) = 1; /*0x86f0fc*/
    if ( v312 ) /*0x86f101*/
    {
      --v312[7].Unk08; /*0x86f103*/
      if ( !v167[7].Unk08 ) /*0x86f10c*/
        sub_772560(v167); /*0x86f111*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86f116*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86f121*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86f12e*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v310[0x32]); /*0x86f140*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v310[0x56]); /*0x86f152*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f157*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f162*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86f16e*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f173*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f17e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86f18a*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f18f*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f19a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86f1a6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f1ab*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f1b6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86f1c2*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f1c7*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f1d2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86f1de*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f1e3*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f1ee*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86f1fa*/
  v4 = v1 == unk_B476C0; /*0x86f1ff*/
  unk_B43E30 = 0x780F8; /*0x86f205*/
  unk_B444C0 = 0x18C; /*0x86f20b*/
  if ( !v4 ) /*0x86f211*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86f213*/
    if ( v4 ) /*0x86f217*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86f21b*/
    v1 = unk_B476C0; /*0x86f220*/
    v311 = unk_B476C0; /*0x86f228*/
    if ( v311 ) /*0x86f231*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86f233*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86f241*/
  {
    v168 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f24c*/
    LOBYTE(v313) = 0x42; /*0x86f259*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v168); /*0x86f25e*/
    v169 = v312; /*0x86f263*/
    LOBYTE(v313) = 1; /*0x86f269*/
    if ( v312 ) /*0x86f26e*/
    {
      --v312[7].Unk08; /*0x86f270*/
      if ( !v169[7].Unk08 ) /*0x86f279*/
        sub_772560(v169); /*0x86f27e*/
    }
    v170 = a3; /*0x86f283*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86f28d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v170); /*0x86f29a*/
    v171 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f2a4*/
    LOBYTE(v313) = 0x43; /*0x86f2b1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v171); /*0x86f2b6*/
    v172 = v312; /*0x86f2bb*/
    LOBYTE(v313) = 1; /*0x86f2c1*/
    if ( v312 ) /*0x86f2c6*/
    {
      --v312[7].Unk08; /*0x86f2c8*/
      if ( !v172[7].Unk08 ) /*0x86f2d1*/
        sub_772560(v172); /*0x86f2d6*/
    }
    v173 = a3; /*0x86f2db*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86f2e4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v173); /*0x86f2f0*/
    v174 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f2fa*/
    LOBYTE(v313) = 0x44; /*0x86f307*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v174); /*0x86f30c*/
    v175 = v312; /*0x86f311*/
    LOBYTE(v313) = 1; /*0x86f317*/
    if ( v312 ) /*0x86f31c*/
    {
      --v312[7].Unk08; /*0x86f31e*/
      if ( !v175[7].Unk08 ) /*0x86f327*/
        sub_772560(v175); /*0x86f32c*/
    }
    v176 = a3; /*0x86f331*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86f33b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v176); /*0x86f348*/
    v177 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f352*/
    LOBYTE(v313) = 0x45; /*0x86f35f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v177); /*0x86f364*/
    v178 = v312; /*0x86f369*/
    LOBYTE(v313) = 1; /*0x86f36f*/
    if ( v312 ) /*0x86f374*/
    {
      --v312[7].Unk08; /*0x86f376*/
      if ( !v178[7].Unk08 ) /*0x86f37f*/
        sub_772560(v178); /*0x86f384*/
    }
    v179 = a3; /*0x86f389*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86f393*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v179); /*0x86f3a0*/
    v180 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f3aa*/
    LOBYTE(v313) = 0x46; /*0x86f3b7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v180); /*0x86f3bc*/
    v181 = v312; /*0x86f3c1*/
    LOBYTE(v313) = 1; /*0x86f3c7*/
    if ( v312 ) /*0x86f3cc*/
    {
      --v312[7].Unk08; /*0x86f3ce*/
      if ( !v181[7].Unk08 ) /*0x86f3d7*/
        sub_772560(v181); /*0x86f3dc*/
    }
    v182 = a3; /*0x86f3e1*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86f3eb*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v182); /*0x86f3f8*/
    v183 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f402*/
    LOBYTE(v313) = 0x47; /*0x86f40f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v183); /*0x86f414*/
    v184 = v312; /*0x86f419*/
    LOBYTE(v313) = 1; /*0x86f41f*/
    if ( v312 ) /*0x86f424*/
    {
      --v312[7].Unk08; /*0x86f426*/
      if ( !v184[7].Unk08 ) /*0x86f42f*/
        sub_772560(v184); /*0x86f434*/
    }
    v185 = (NiD3DTextureStage *)a3; /*0x86f439*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86f444*/
    NiD3DTextureStage_SetTexture(v185, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86f455*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v185->Stage); /*0x86f45f*/
    v186 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f469*/
    LOBYTE(v313) = 0x48; /*0x86f476*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v186); /*0x86f47b*/
    v187 = v312; /*0x86f480*/
    LOBYTE(v313) = 1; /*0x86f486*/
    if ( v312 ) /*0x86f48b*/
    {
      --v312[7].Unk08; /*0x86f48d*/
      if ( !v187[7].Unk08 ) /*0x86f496*/
        sub_772560(v187); /*0x86f49b*/
    }
    v188 = a3; /*0x86f4a0*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86f4aa*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v188); /*0x86f4b7*/
    v189 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f4c1*/
    LOBYTE(v313) = 0x49; /*0x86f4ce*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v189); /*0x86f4d3*/
    v190 = v312; /*0x86f4d8*/
    LOBYTE(v313) = 1; /*0x86f4de*/
    if ( v312 ) /*0x86f4e3*/
    {
      --v312[7].Unk08; /*0x86f4e5*/
      if ( !v190[7].Unk08 ) /*0x86f4ee*/
        sub_772560(v190); /*0x86f4f3*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86f4f8*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86f503*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86f510*/
  }
  v191 = v310; /*0x86f515*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v310[0x33]); /*0x86f522*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v191[0x65]); /*0x86f530*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f535*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f540*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86f54c*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f551*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f55c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86f568*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f56d*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f578*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86f583*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f588*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f593*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86f59f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f5a4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f5af*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86f5ba*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f5bf*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f5ca*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86f5d6*/
  v4 = v1 == unk_B476C4; /*0x86f5db*/
  unk_B43E48 = 0x39082; /*0x86f5e6*/
  unk_B444D8 = 0x11C; /*0x86f5ec*/
  if ( !v4 ) /*0x86f5f6*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86f5f8*/
    if ( v4 ) /*0x86f5fc*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86f600*/
    v1 = unk_B476C4; /*0x86f605*/
    v311 = unk_B476C4; /*0x86f60d*/
    if ( v311 ) /*0x86f611*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86f613*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86f61a*/
  {
    v192 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f625*/
    LOBYTE(v313) = 0x4A; /*0x86f632*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v192); /*0x86f637*/
    v193 = v312; /*0x86f63c*/
    LOBYTE(v313) = 1; /*0x86f642*/
    if ( v312 ) /*0x86f647*/
    {
      --v312[7].Unk08; /*0x86f649*/
      if ( !v193[7].Unk08 ) /*0x86f652*/
        sub_772560(v193); /*0x86f657*/
    }
    v194 = a3; /*0x86f65c*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86f666*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v194); /*0x86f673*/
    v195 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f67d*/
    LOBYTE(v313) = 0x4B; /*0x86f68a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v195); /*0x86f68f*/
    v196 = v312; /*0x86f694*/
    LOBYTE(v313) = 1; /*0x86f69a*/
    if ( v312 ) /*0x86f69f*/
    {
      --v312[7].Unk08; /*0x86f6a1*/
      if ( !v196[7].Unk08 ) /*0x86f6aa*/
        sub_772560(v196); /*0x86f6af*/
    }
    v197 = a3; /*0x86f6b4*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86f6bd*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v197); /*0x86f6c9*/
    v198 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f6d3*/
    LOBYTE(v313) = 0x4C; /*0x86f6e0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v198); /*0x86f6e5*/
    v199 = v312; /*0x86f6ea*/
    LOBYTE(v313) = 1; /*0x86f6f0*/
    if ( v312 ) /*0x86f6f5*/
    {
      --v312[7].Unk08; /*0x86f6f7*/
      if ( !v199[7].Unk08 ) /*0x86f700*/
        sub_772560(v199); /*0x86f705*/
    }
    v200 = a3; /*0x86f70a*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86f714*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v200); /*0x86f721*/
    v201 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f72b*/
    LOBYTE(v313) = 0x4D; /*0x86f738*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v201); /*0x86f73d*/
    v202 = v312; /*0x86f742*/
    LOBYTE(v313) = 1; /*0x86f748*/
    if ( v312 ) /*0x86f74d*/
    {
      --v312[7].Unk08; /*0x86f74f*/
      if ( !v202[7].Unk08 ) /*0x86f758*/
        sub_772560(v202); /*0x86f75d*/
    }
    v203 = a3; /*0x86f762*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86f76c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v203); /*0x86f779*/
    v204 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f783*/
    LOBYTE(v313) = 0x4E; /*0x86f790*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v204); /*0x86f795*/
    v205 = v312; /*0x86f79a*/
    LOBYTE(v313) = 1; /*0x86f7a0*/
    if ( v312 ) /*0x86f7a5*/
    {
      --v312[7].Unk08; /*0x86f7a7*/
      if ( !v205[7].Unk08 ) /*0x86f7b0*/
        sub_772560(v205); /*0x86f7b5*/
    }
    v206 = a3; /*0x86f7ba*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86f7c4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v206); /*0x86f7d1*/
    v207 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f7db*/
    LOBYTE(v313) = 0x4F; /*0x86f7e8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v207); /*0x86f7ed*/
    v208 = v312; /*0x86f7f2*/
    LOBYTE(v313) = 1; /*0x86f7f8*/
    if ( v312 ) /*0x86f7fd*/
    {
      --v312[7].Unk08; /*0x86f7ff*/
      if ( !v208[7].Unk08 ) /*0x86f808*/
        sub_772560(v208); /*0x86f80d*/
    }
    v209 = (NiD3DTextureStage *)a3; /*0x86f812*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86f81d*/
    NiD3DTextureStage_SetTexture(v209, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86f82e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v209->Stage); /*0x86f838*/
    v210 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f842*/
    LOBYTE(v313) = 0x50; /*0x86f84f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v210); /*0x86f854*/
    v211 = v312; /*0x86f859*/
    LOBYTE(v313) = 1; /*0x86f85f*/
    if ( v312 ) /*0x86f864*/
    {
      --v312[7].Unk08; /*0x86f866*/
      if ( !v211[7].Unk08 ) /*0x86f86f*/
        sub_772560(v211); /*0x86f874*/
    }
    v212 = a3; /*0x86f879*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86f883*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v212); /*0x86f890*/
    v213 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f89a*/
    LOBYTE(v313) = 0x51; /*0x86f8a7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v213); /*0x86f8ac*/
    v214 = v312; /*0x86f8b1*/
    LOBYTE(v313) = 1; /*0x86f8b7*/
    if ( v312 ) /*0x86f8bc*/
    {
      --v312[7].Unk08; /*0x86f8be*/
      if ( !v214[7].Unk08 ) /*0x86f8c7*/
        sub_772560(v214); /*0x86f8cc*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86f8d1*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86f8dc*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86f8e9*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v310[0x33]); /*0x86f8fb*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v310[0x66]); /*0x86f90d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f912*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f91d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86f929*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f92e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f939*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86f945*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f94a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f955*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86f960*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f965*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f970*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86f97c*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f981*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f98c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86f997*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86f99c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86f9a7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86f9b3*/
  v4 = v1 == unk_B476D8; /*0x86f9b8*/
  unk_B43E4C = 0x39082; /*0x86f9be*/
  unk_B444DC = 0x19C; /*0x86f9c4*/
  if ( !v4 ) /*0x86f9ce*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86f9d0*/
    if ( v4 ) /*0x86f9d4*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86f9d8*/
    v1 = unk_B476D8; /*0x86f9dd*/
    v311 = unk_B476D8; /*0x86f9e5*/
    if ( v311 ) /*0x86f9e9*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86f9eb*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86f9f2*/
  {
    v215 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86f9fd*/
    LOBYTE(v313) = 0x52; /*0x86fa0a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v215); /*0x86fa0f*/
    v216 = v312; /*0x86fa14*/
    LOBYTE(v313) = 1; /*0x86fa1a*/
    if ( v312 ) /*0x86fa1f*/
    {
      --v312[7].Unk08; /*0x86fa21*/
      if ( !v216[7].Unk08 ) /*0x86fa2a*/
        sub_772560(v216); /*0x86fa2f*/
    }
    v217 = a3; /*0x86fa34*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86fa3e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v217); /*0x86fa4b*/
    v218 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fa55*/
    LOBYTE(v313) = 0x53; /*0x86fa62*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v218); /*0x86fa67*/
    v219 = v312; /*0x86fa6c*/
    LOBYTE(v313) = 1; /*0x86fa72*/
    if ( v312 ) /*0x86fa77*/
    {
      --v312[7].Unk08; /*0x86fa79*/
      if ( !v219[7].Unk08 ) /*0x86fa82*/
        sub_772560(v219); /*0x86fa87*/
    }
    v220 = a3; /*0x86fa8c*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86fa95*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v220); /*0x86faa1*/
    v221 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86faab*/
    LOBYTE(v313) = 0x54; /*0x86fab8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v221); /*0x86fabd*/
    v222 = v312; /*0x86fac2*/
    LOBYTE(v313) = 1; /*0x86fac8*/
    if ( v312 ) /*0x86facd*/
    {
      --v312[7].Unk08; /*0x86facf*/
      if ( !v222[7].Unk08 ) /*0x86fad8*/
        sub_772560(v222); /*0x86fadd*/
    }
    v223 = a3; /*0x86fae2*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86faec*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v223); /*0x86faf9*/
    v224 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fb03*/
    LOBYTE(v313) = 0x55; /*0x86fb10*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v224); /*0x86fb15*/
    v225 = v312; /*0x86fb1a*/
    LOBYTE(v313) = 1; /*0x86fb20*/
    if ( v312 ) /*0x86fb25*/
    {
      --v312[7].Unk08; /*0x86fb27*/
      if ( !v225[7].Unk08 ) /*0x86fb30*/
        sub_772560(v225); /*0x86fb35*/
    }
    v226 = a3; /*0x86fb3a*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86fb44*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v226); /*0x86fb51*/
    v227 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fb5b*/
    LOBYTE(v313) = 0x56; /*0x86fb68*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v227); /*0x86fb6d*/
    v228 = v312; /*0x86fb72*/
    LOBYTE(v313) = 1; /*0x86fb78*/
    if ( v312 ) /*0x86fb7d*/
    {
      --v312[7].Unk08; /*0x86fb7f*/
      if ( !v228[7].Unk08 ) /*0x86fb88*/
        sub_772560(v228); /*0x86fb8d*/
    }
    v229 = a3; /*0x86fb92*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86fb9c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v229); /*0x86fba9*/
    v230 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fbb3*/
    LOBYTE(v313) = 0x57; /*0x86fbc0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v230); /*0x86fbc5*/
    v231 = v312; /*0x86fbca*/
    LOBYTE(v313) = 1; /*0x86fbd0*/
    if ( v312 ) /*0x86fbd5*/
    {
      --v312[7].Unk08; /*0x86fbd7*/
      if ( !v231[7].Unk08 ) /*0x86fbe0*/
        sub_772560(v231); /*0x86fbe5*/
    }
    v232 = (NiD3DTextureStage *)a3; /*0x86fbea*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86fbf5*/
    NiD3DTextureStage_SetTexture(v232, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86fc06*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v232->Stage); /*0x86fc10*/
    v233 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fc1a*/
    LOBYTE(v313) = 0x58; /*0x86fc27*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v233); /*0x86fc2c*/
    v234 = v312; /*0x86fc31*/
    LOBYTE(v313) = 1; /*0x86fc37*/
    if ( v312 ) /*0x86fc3c*/
    {
      --v312[7].Unk08; /*0x86fc3e*/
      if ( !v234[7].Unk08 ) /*0x86fc47*/
        sub_772560(v234); /*0x86fc4c*/
    }
    v235 = a3; /*0x86fc51*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x86fc5b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v235); /*0x86fc68*/
    v236 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fc72*/
    LOBYTE(v313) = 0x59; /*0x86fc7f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v236); /*0x86fc84*/
    v237 = v312; /*0x86fc89*/
    LOBYTE(v313) = 1; /*0x86fc8f*/
    if ( v312 ) /*0x86fc94*/
    {
      --v312[7].Unk08; /*0x86fc96*/
      if ( !v237[7].Unk08 ) /*0x86fc9f*/
        sub_772560(v237); /*0x86fca4*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86fca9*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x86fcb4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x86fcc1*/
  }
  v238 = v310; /*0x86fcc6*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v310[0x36]); /*0x86fcd3*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v238[0x67]); /*0x86fce1*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86fce6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86fcf1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86fcfd*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86fd02*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86fd0d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86fd19*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86fd1e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86fd29*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86fd34*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86fd39*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86fd44*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x86fd50*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86fd55*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86fd60*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86fd6b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86fd70*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86fd7b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86fd87*/
  v4 = v1 == unk_B476DC; /*0x86fd8c*/
  unk_B43E94 = 0x790F8; /*0x86fd97*/
  unk_B44524 = 0x11C; /*0x86fd9d*/
  if ( !v4 ) /*0x86fda7*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86fda9*/
    if ( v4 ) /*0x86fdad*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86fdb1*/
    v1 = unk_B476DC; /*0x86fdb6*/
    v311 = unk_B476DC; /*0x86fdbe*/
    if ( v311 ) /*0x86fdc2*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86fdc4*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x86fdcb*/
  {
    v239 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fdd6*/
    LOBYTE(v313) = 0x5A; /*0x86fde3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v239); /*0x86fde8*/
    v240 = v312; /*0x86fded*/
    LOBYTE(v313) = 1; /*0x86fdf3*/
    if ( v312 ) /*0x86fdf8*/
    {
      --v312[7].Unk08; /*0x86fdfa*/
      if ( !v240[7].Unk08 ) /*0x86fe03*/
        sub_772560(v240); /*0x86fe08*/
    }
    v241 = a3; /*0x86fe0d*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86fe17*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v241); /*0x86fe24*/
    v242 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fe2e*/
    LOBYTE(v313) = 0x5B; /*0x86fe3b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v242); /*0x86fe40*/
    v243 = v312; /*0x86fe45*/
    LOBYTE(v313) = 1; /*0x86fe4b*/
    if ( v312 ) /*0x86fe50*/
    {
      --v312[7].Unk08; /*0x86fe52*/
      if ( !v243[7].Unk08 ) /*0x86fe5b*/
        sub_772560(v243); /*0x86fe60*/
    }
    v244 = a3; /*0x86fe65*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86fe6e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v244); /*0x86fe7a*/
    v245 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fe84*/
    LOBYTE(v313) = 0x5C; /*0x86fe91*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v245); /*0x86fe96*/
    v246 = v312; /*0x86fe9b*/
    LOBYTE(v313) = 1; /*0x86fea1*/
    if ( v312 ) /*0x86fea6*/
    {
      --v312[7].Unk08; /*0x86fea8*/
      if ( !v246[7].Unk08 ) /*0x86feb1*/
        sub_772560(v246); /*0x86feb6*/
    }
    v247 = a3; /*0x86febb*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x86fec5*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v247); /*0x86fed2*/
    v248 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fedc*/
    LOBYTE(v313) = 0x5D; /*0x86fee9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v248); /*0x86feee*/
    v249 = v312; /*0x86fef3*/
    LOBYTE(v313) = 1; /*0x86fef9*/
    if ( v312 ) /*0x86fefe*/
    {
      --v312[7].Unk08; /*0x86ff00*/
      if ( !v249[7].Unk08 ) /*0x86ff09*/
        sub_772560(v249); /*0x86ff0e*/
    }
    v250 = a3; /*0x86ff13*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86ff1d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v250); /*0x86ff2a*/
    v251 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86ff34*/
    LOBYTE(v313) = 0x5E; /*0x86ff41*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v251); /*0x86ff46*/
    v252 = v312; /*0x86ff4b*/
    LOBYTE(v313) = 1; /*0x86ff51*/
    if ( v312 ) /*0x86ff56*/
    {
      --v312[7].Unk08; /*0x86ff58*/
      if ( !v252[7].Unk08 ) /*0x86ff61*/
        sub_772560(v252); /*0x86ff66*/
    }
    v253 = a3; /*0x86ff6b*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x86ff75*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v253); /*0x86ff82*/
    v254 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86ff8c*/
    LOBYTE(v313) = 0x5F; /*0x86ff99*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v254); /*0x86ff9e*/
    v255 = v312; /*0x86ffa3*/
    LOBYTE(v313) = 1; /*0x86ffa9*/
    if ( v312 ) /*0x86ffae*/
    {
      --v312[7].Unk08; /*0x86ffb0*/
      if ( !v255[7].Unk08 ) /*0x86ffb9*/
        sub_772560(v255); /*0x86ffbe*/
    }
    v256 = (NiD3DTextureStage *)a3; /*0x86ffc3*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x86ffce*/
    NiD3DTextureStage_SetTexture(v256, (NiTexture *)LODWORD(flt_B43110[0])); /*0x86ffdf*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v256->Stage); /*0x86ffe9*/
    v257 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x86fff3*/
    LOBYTE(v313) = 0x60; /*0x870000*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v257); /*0x870005*/
    v258 = v312; /*0x87000a*/
    LOBYTE(v313) = 1; /*0x870010*/
    if ( v312 ) /*0x870015*/
    {
      --v312[7].Unk08; /*0x870017*/
      if ( !v258[7].Unk08 ) /*0x870020*/
        sub_772560(v258); /*0x870025*/
    }
    v259 = a3; /*0x87002a*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x870034*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v259); /*0x870041*/
    v260 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x87004b*/
    LOBYTE(v313) = 0x61; /*0x870058*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v260); /*0x87005d*/
    v261 = v312; /*0x870062*/
    LOBYTE(v313) = 1; /*0x870068*/
    if ( v312 ) /*0x87006d*/
    {
      --v312[7].Unk08; /*0x87006f*/
      if ( !v261[7].Unk08 ) /*0x870078*/
        sub_772560(v261); /*0x87007d*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x870082*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x87008d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x87009a*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v310[0x36]); /*0x8700ac*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v310[0x68]); /*0x8700be*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8700c3*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8700ce*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x8700da*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8700df*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8700ea*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x8700f6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8700fb*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x870106*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x870111*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x870116*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x870121*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x87012d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x870132*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87013d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x870148*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87014d*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x870158*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x870164*/
  v4 = v1 == unk_B476D0; /*0x870169*/
  unk_B43E98 = 0x790F8; /*0x87016f*/
  unk_B44528 = 0x19C; /*0x870175*/
  if ( !v4 ) /*0x87017f*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x870181*/
    if ( v4 ) /*0x870185*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x870189*/
    v1 = unk_B476D0; /*0x87018e*/
    v311 = unk_B476D0; /*0x870196*/
    if ( v311 ) /*0x87019a*/
      ++*(_DWORD *)(v1 + 0x60); /*0x87019c*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x8701a3*/
  {
    v262 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x8701ae*/
    LOBYTE(v313) = 0x62; /*0x8701bb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v262); /*0x8701c0*/
    v263 = v312; /*0x8701c5*/
    LOBYTE(v313) = 1; /*0x8701cb*/
    if ( v312 ) /*0x8701d0*/
    {
      --v312[7].Unk08; /*0x8701d2*/
      if ( !v263[7].Unk08 ) /*0x8701db*/
        sub_772560(v263); /*0x8701e0*/
    }
    v264 = a3; /*0x8701e5*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8701ef*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v264); /*0x8701fc*/
    v265 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x870206*/
    LOBYTE(v313) = 0x63; /*0x870213*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v265); /*0x870218*/
    v266 = v312; /*0x87021d*/
    LOBYTE(v313) = 1; /*0x870223*/
    if ( v312 ) /*0x870228*/
    {
      --v312[7].Unk08; /*0x87022a*/
      if ( !v266[7].Unk08 ) /*0x870233*/
        sub_772560(v266); /*0x870238*/
    }
    v267 = a3; /*0x87023d*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x870246*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v267); /*0x870252*/
    v268 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x87025c*/
    LOBYTE(v313) = 0x64; /*0x870269*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v268); /*0x87026e*/
    v269 = v312; /*0x870273*/
    LOBYTE(v313) = 1; /*0x870279*/
    if ( v312 ) /*0x87027e*/
    {
      --v312[7].Unk08; /*0x870280*/
      if ( !v269[7].Unk08 ) /*0x870289*/
        sub_772560(v269); /*0x87028e*/
    }
    v270 = a3; /*0x870293*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x87029d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v270); /*0x8702aa*/
    v271 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x8702b4*/
    LOBYTE(v313) = 0x65; /*0x8702c1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v271); /*0x8702c6*/
    v272 = v312; /*0x8702cb*/
    LOBYTE(v313) = 1; /*0x8702d1*/
    if ( v312 ) /*0x8702d6*/
    {
      --v312[7].Unk08; /*0x8702d8*/
      if ( !v272[7].Unk08 ) /*0x8702e1*/
        sub_772560(v272); /*0x8702e6*/
    }
    v273 = a3; /*0x8702eb*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8702f5*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v273); /*0x870302*/
    v274 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x87030c*/
    LOBYTE(v313) = 0x66; /*0x870319*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v274); /*0x87031e*/
    v275 = v312; /*0x870323*/
    LOBYTE(v313) = 1; /*0x870329*/
    if ( v312 ) /*0x87032e*/
    {
      --v312[7].Unk08; /*0x870330*/
      if ( !v275[7].Unk08 ) /*0x870339*/
        sub_772560(v275); /*0x87033e*/
    }
    v276 = a3; /*0x870343*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x87034d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v276); /*0x87035a*/
    v277 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x870364*/
    LOBYTE(v313) = 0x67; /*0x870371*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v277); /*0x870376*/
    v278 = v312; /*0x87037b*/
    LOBYTE(v313) = 1; /*0x870381*/
    if ( v312 ) /*0x870386*/
    {
      --v312[7].Unk08; /*0x870388*/
      if ( !v278[7].Unk08 ) /*0x870391*/
        sub_772560(v278); /*0x870396*/
    }
    v279 = (NiD3DTextureStage *)a3; /*0x87039b*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x8703a6*/
    NiD3DTextureStage_SetTexture(v279, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8703b6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v279->Stage); /*0x8703c0*/
    v280 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x8703ca*/
    LOBYTE(v313) = 0x68; /*0x8703d7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v280); /*0x8703dc*/
    v281 = v312; /*0x8703e1*/
    LOBYTE(v313) = 1; /*0x8703e7*/
    if ( v312 ) /*0x8703ec*/
    {
      --v312[7].Unk08; /*0x8703ee*/
      if ( !v281[7].Unk08 ) /*0x8703f7*/
        sub_772560(v281); /*0x8703fc*/
    }
    v282 = a3; /*0x870401*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x87040b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v282); /*0x870418*/
    v283 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x870422*/
    LOBYTE(v313) = 0x69; /*0x87042f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v283); /*0x870434*/
    v284 = v312; /*0x870439*/
    LOBYTE(v313) = 1; /*0x87043f*/
    if ( v312 ) /*0x870444*/
    {
      --v312[7].Unk08; /*0x870446*/
      if ( !v284[7].Unk08 ) /*0x87044f*/
        sub_772560(v284); /*0x870454*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x870459*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x870464*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x870471*/
  }
  v285 = v310; /*0x870476*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v310[0x35]); /*0x870483*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v285[0x67]); /*0x870491*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x870496*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8704a1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x8704ad*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8704b2*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8704bd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x8704c9*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8704ce*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8704d9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8704e4*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8704e9*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8704f4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x870500*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x870505*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x870510*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x87051b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x870520*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87052b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x870537*/
  v4 = v1 == unk_B476D4; /*0x87053c*/
  unk_B43E7C = 0x390F2; /*0x870547*/
  unk_B4450C = 0x11C; /*0x87054d*/
  if ( !v4 ) /*0x870557*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x870559*/
    if ( v4 ) /*0x87055d*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x870561*/
    v1 = unk_B476D4; /*0x870566*/
    v311 = unk_B476D4; /*0x87056e*/
    if ( v311 ) /*0x870572*/
      ++*(_DWORD *)(v1 + 0x60); /*0x870574*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 8u ) /*0x87057b*/
  {
    v286 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x870586*/
    LOBYTE(v313) = 0x6A; /*0x870593*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v286); /*0x870598*/
    v287 = v312; /*0x87059d*/
    LOBYTE(v313) = 1; /*0x8705a3*/
    if ( v312 ) /*0x8705a8*/
    {
      --v312[7].Unk08; /*0x8705aa*/
      if ( !v287[7].Unk08 ) /*0x8705b3*/
        sub_772560(v287); /*0x8705b8*/
    }
    v288 = a3; /*0x8705bd*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8705c7*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v288); /*0x8705d4*/
    v289 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x8705de*/
    LOBYTE(v313) = 0x6B; /*0x8705eb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v289); /*0x8705f0*/
    v290 = v312; /*0x8705f5*/
    LOBYTE(v313) = 1; /*0x8705fb*/
    if ( v312 ) /*0x870600*/
    {
      --v312[7].Unk08; /*0x870602*/
      if ( !v290[7].Unk08 ) /*0x87060b*/
        sub_772560(v290); /*0x870610*/
    }
    v291 = a3; /*0x870615*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x87061e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v291); /*0x87062a*/
    v292 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x870634*/
    LOBYTE(v313) = 0x6C; /*0x870641*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v292); /*0x870646*/
    v293 = v312; /*0x87064b*/
    LOBYTE(v313) = 1; /*0x870651*/
    if ( v312 ) /*0x870656*/
    {
      --v312[7].Unk08; /*0x870658*/
      if ( !v293[7].Unk08 ) /*0x870661*/
        sub_772560(v293); /*0x870666*/
    }
    v294 = a3; /*0x87066b*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x870675*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v294); /*0x870682*/
    v295 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x87068c*/
    LOBYTE(v313) = 0x6D; /*0x870699*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v295); /*0x87069e*/
    v296 = v312; /*0x8706a3*/
    LOBYTE(v313) = 1; /*0x8706a9*/
    if ( v312 ) /*0x8706ae*/
    {
      --v312[7].Unk08; /*0x8706b0*/
      if ( !v296[7].Unk08 ) /*0x8706b9*/
        sub_772560(v296); /*0x8706be*/
    }
    v297 = a3; /*0x8706c3*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8706cd*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v297); /*0x8706da*/
    v298 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x8706e4*/
    LOBYTE(v313) = 0x6E; /*0x8706f1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v298); /*0x8706f6*/
    v299 = v312; /*0x8706fb*/
    LOBYTE(v313) = 1; /*0x870701*/
    if ( v312 ) /*0x870706*/
    {
      --v312[7].Unk08; /*0x870708*/
      if ( !v299[7].Unk08 ) /*0x870711*/
        sub_772560(v299); /*0x870716*/
    }
    v300 = a3; /*0x87071b*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x870725*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, v300); /*0x870732*/
    v301 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x87073c*/
    LOBYTE(v313) = 0x6F; /*0x870749*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v301); /*0x87074e*/
    v302 = v312; /*0x870753*/
    LOBYTE(v313) = 1; /*0x870759*/
    if ( v312 ) /*0x87075e*/
    {
      --v312[7].Unk08; /*0x870760*/
      if ( !v302[7].Unk08 ) /*0x870769*/
        sub_772560(v302); /*0x87076e*/
    }
    v303 = (NiD3DTextureStage *)a3; /*0x870773*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x87077e*/
    NiD3DTextureStage_SetTexture(v303, (NiTexture *)LODWORD(flt_B43110[0])); /*0x87078e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v303->Stage); /*0x870798*/
    v304 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x8707a2*/
    LOBYTE(v313) = 0x70; /*0x8707af*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v304); /*0x8707b4*/
    v305 = v312; /*0x8707b9*/
    LOBYTE(v313) = 1; /*0x8707bf*/
    if ( v312 ) /*0x8707c4*/
    {
      --v312[7].Unk08; /*0x8707c6*/
      if ( !v305[7].Unk08 ) /*0x8707cf*/
        sub_772560(v305); /*0x8707d4*/
    }
    v306 = a3; /*0x8707d9*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x8707e3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, v306); /*0x8707f0*/
    v307 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v312); /*0x8707fa*/
    LOBYTE(v313) = 0x71; /*0x870807*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v307); /*0x87080c*/
    v308 = v312; /*0x870811*/
    LOBYTE(v313) = 1; /*0x870817*/
    if ( v312 ) /*0x87081c*/
    {
      --v312[7].Unk08; /*0x87081e*/
      if ( !v308[7].Unk08 ) /*0x870827*/
        sub_772560(v308); /*0x87082c*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x870831*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x87083c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 7u, &v2->Stage); /*0x870849*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v310[0x35]); /*0x87085b*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v310[0x68]); /*0x87086d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x870872*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87087d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x870889*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87088e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x870899*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x8708a5*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8708aa*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8708b5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8708c0*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8708c5*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8708d0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x8708dc*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8708e1*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8708ec*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x8708f7*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8708fc*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x870907*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x870913*/
  unk_B43E80 = 0x390F2; /*0x87091d*/
  unk_B44510 = 0x19C; /*0x870923*/
  LOBYTE(v313) = 0; /*0x87092d*/
  if ( v2 ) /*0x870932*/
  {
    v4 = v2[7].Unk08-- == 1; /*0x870934*/
    if ( v4 ) /*0x870937*/
      sub_772560(v2); /*0x87093b*/
  }
  v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x870940*/
  v313 = 0xFFFFFFFF; /*0x870943*/
  if ( v4 ) /*0x870947*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x87094b*/
}
