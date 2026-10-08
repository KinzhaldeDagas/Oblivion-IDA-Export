void sub_815DB0()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // ebx
  int v2; // eax
  bool v3; // zf
  unsigned int *v4; // eax
  NiD3DTextureStage *v5; // eax
  unsigned int **v6; // edi
  NiD3DTextureStage *v7; // eax
  NiD3DVertexShader *VertexShader; // edi
  int v9; // ebp
  NiD3DPixelShader *PixelShader; // edi
  int v11; // ebp
  unsigned int **v12; // edi
  NiD3DTextureStage *v13; // eax
  unsigned int **v14; // edi
  NiD3DTextureStage *v15; // eax
  NiD3DVertexShader *v16; // edi
  int v17; // ebp
  NiD3DPixelShader *v18; // edi
  int v19; // ebp
  unsigned int **v20; // edi
  NiD3DTextureStage *v21; // eax
  unsigned int **v22; // edi
  NiD3DTextureStage *v23; // eax
  NiD3DVertexShader *v24; // edi
  int v25; // ebp
  NiD3DPixelShader *v26; // edi
  int v27; // ebp
  unsigned int **v28; // edi
  NiD3DTextureStage *v29; // eax
  unsigned int **v30; // edi
  NiD3DTextureStage *v31; // eax
  NiD3DVertexShader *v32; // edi
  int v33; // ebp
  NiD3DPixelShader *v34; // edi
  int v35; // ebp
  unsigned int **v36; // edi
  NiD3DTextureStage *v37; // eax
  unsigned int **v38; // edi
  NiD3DTextureStage *v39; // eax
  unsigned int **v40; // edi
  NiD3DTextureStage *v41; // eax
  NiD3DVertexShader *v42; // edi
  int v43; // ebp
  NiD3DPixelShader *v44; // edi
  int v45; // ebp
  unsigned int **v46; // edi
  NiD3DTextureStage *v47; // eax
  unsigned int **v48; // edi
  NiD3DTextureStage *v49; // eax
  unsigned int **v50; // edi
  NiD3DTextureStage *v51; // eax
  NiD3DVertexShader *v52; // edi
  int v53; // ebp
  NiD3DPixelShader *v54; // edi
  int v55; // ebp
  unsigned int **v56; // edi
  NiD3DTextureStage *v57; // eax
  unsigned int **v58; // edi
  NiD3DTextureStage *v59; // eax
  unsigned int **v60; // edi
  NiD3DTextureStage *v61; // eax
  NiD3DVertexShader *v62; // edi
  int v63; // ebp
  NiD3DPixelShader *v64; // edi
  int v65; // ebp
  unsigned int **v66; // edi
  NiD3DTextureStage *v67; // eax
  unsigned int **v68; // edi
  NiD3DTextureStage *v69; // eax
  unsigned int **v70; // edi
  NiD3DTextureStage *v71; // eax
  NiD3DTextureStage **v72; // eax
  NiD3DTextureStage *v73; // eax
  unsigned int *v74; // edi
  NiD3DTextureStage **v75; // eax
  NiD3DTextureStage *v76; // eax
  unsigned int *v77; // edi
  NiD3DTextureStage **v78; // eax
  NiD3DTextureStage *v79; // eax
  unsigned int *v80; // edi
  NiD3DTextureStage **v81; // eax
  NiD3DTextureStage *v82; // eax
  NiD3DTextureStage **v83; // eax
  NiD3DTextureStage *v84; // eax
  unsigned int *v85; // edi
  NiD3DTextureStage **v86; // eax
  NiD3DTextureStage *v87; // eax
  NiD3DTextureStage **v88; // eax
  NiD3DTextureStage *v89; // eax
  unsigned int *v90; // edi
  NiD3DTextureStage **v91; // eax
  NiD3DTextureStage *v92; // eax
  NiD3DTextureStage **v93; // eax
  NiD3DTextureStage *v94; // eax
  unsigned int *v95; // edi
  NiD3DTextureStage **v96; // eax
  NiD3DTextureStage *v97; // eax
  NiD3DTextureStage **v98; // eax
  NiD3DTextureStage *v99; // eax
  unsigned int *v100; // edi
  NiD3DTextureStage **v101; // eax
  NiD3DTextureStage *v102; // eax
  NiD3DTextureStage **v103; // eax
  NiD3DTextureStage *v104; // eax
  unsigned int *v105; // edi
  NiD3DTextureStage **v106; // eax
  NiD3DTextureStage *v107; // eax
  unsigned int *v108; // edi
  NiD3DTextureStage **v109; // eax
  NiD3DTextureStage *v110; // eax
  NiD3DTextureStage **v111; // eax
  NiD3DTextureStage *v112; // eax
  unsigned int *v113; // edi
  NiD3DTextureStage **v114; // eax
  NiD3DTextureStage *v115; // eax
  unsigned int *v116; // edi
  NiD3DTextureStage **v117; // eax
  NiD3DTextureStage *v118; // eax
  NiD3DTextureStage **v119; // eax
  NiD3DTextureStage *v120; // eax
  unsigned int *v121; // edi
  NiD3DTextureStage **v122; // eax
  NiD3DTextureStage *v123; // eax
  unsigned int *v124; // edi
  NiD3DTextureStage **v125; // eax
  NiD3DTextureStage *v126; // eax
  unsigned int *v127; // edi
  NiD3DTextureStage **v128; // eax
  NiD3DTextureStage *v129; // eax
  NiD3DTextureStage **v130; // eax
  NiD3DTextureStage *v131; // eax
  unsigned int *v132; // edi
  NiD3DTextureStage **v133; // eax
  NiD3DTextureStage *v134; // eax
  unsigned int *v135; // edi
  NiD3DTextureStage **v136; // eax
  NiD3DTextureStage *v137; // eax
  unsigned int *v138; // edi
  NiD3DTextureStage **v139; // eax
  NiD3DTextureStage *v140; // eax
  NiD3DPass *v141; // eax
  NiD3DPass *v142; // eax
  NiD3DTextureStage **v143; // eax
  NiD3DTextureStage *v144; // eax
  unsigned int *v145; // edi
  NiD3DTextureStage **v146; // eax
  NiD3DTextureStage *v147; // eax
  NiD3DTextureStage **v148; // eax
  NiD3DTextureStage *v149; // eax
  unsigned int *v150; // edi
  NiD3DTextureStage **v151; // eax
  NiD3DTextureStage *v152; // eax
  NiD3DTextureStage **v153; // eax
  NiD3DTextureStage *v154; // eax
  unsigned int *v155; // edi
  NiD3DTextureStage **v156; // eax
  NiD3DTextureStage *v157; // eax
  NiD3DTextureStage **v158; // eax
  NiD3DTextureStage *v159; // eax
  unsigned int *v160; // edi
  NiD3DTextureStage **v161; // eax
  NiD3DTextureStage *v162; // eax
  NiD3DPass *v163; // esi
  NiD3DTextureStage **v164; // eax
  NiD3DTextureStage *v165; // eax
  unsigned int *v166; // edi
  NiD3DTextureStage **v167; // eax
  NiD3DTextureStage *v168; // eax
  unsigned int *v169; // edi
  NiD3DTextureStage **v170; // eax
  NiD3DTextureStage *v171; // eax
  NiD3DPass *v172; // esi
  NiD3DTextureStage **v173; // eax
  NiD3DTextureStage *v174; // eax
  unsigned int *v175; // edi
  NiD3DTextureStage **v176; // eax
  NiD3DTextureStage *v177; // eax
  unsigned int *v178; // edi
  NiD3DTextureStage **v179; // eax
  NiD3DTextureStage *v180; // eax
  NiD3DPass *v181; // esi
  NiD3DTextureStage **v182; // eax
  NiD3DTextureStage *v183; // eax
  unsigned int *v184; // edi
  NiD3DTextureStage **v185; // eax
  NiD3DTextureStage *v186; // eax
  unsigned int *v187; // edi
  NiD3DTextureStage **v188; // eax
  NiD3DTextureStage *v189; // eax
  NiD3DPass *v190; // esi
  NiD3DTextureStage **v191; // eax
  NiD3DTextureStage *v192; // eax
  unsigned int *v193; // edi
  NiD3DTextureStage **v194; // eax
  NiD3DTextureStage *v195; // eax
  unsigned int *v196; // edi
  NiD3DTextureStage **v197; // eax
  NiD3DTextureStage *v198; // eax
  unsigned int *v199; // edi
  NiD3DTextureStage **v200; // eax
  NiD3DTextureStage *v201; // eax
  NiD3DPass *v202; // esi
  NiD3DTextureStage **v203; // eax
  NiD3DTextureStage *v204; // eax
  unsigned int *v205; // edi
  NiD3DTextureStage **v206; // eax
  NiD3DTextureStage *v207; // eax
  unsigned int *v208; // edi
  NiD3DTextureStage **v209; // eax
  NiD3DTextureStage *v210; // eax
  unsigned int *v211; // edi
  NiD3DTextureStage **v212; // eax
  NiD3DTextureStage *v213; // eax
  NiD3DPass *v214; // esi
  NiD3DTextureStage **v215; // eax
  NiD3DTextureStage *v216; // eax
  unsigned int *v217; // edi
  NiD3DTextureStage **v218; // eax
  NiD3DTextureStage *v219; // eax
  NiD3DPass *v220; // esi
  NiD3DTextureStage **v221; // eax
  NiD3DTextureStage *v222; // eax
  unsigned int *v223; // edi
  NiD3DTextureStage **v224; // eax
  NiD3DTextureStage *v225; // eax
  NiD3DPass *v226; // esi
  NiD3DTextureStage **v227; // eax
  NiD3DTextureStage *v228; // eax
  unsigned int *v229; // edi
  NiD3DTextureStage **v230; // eax
  NiD3DTextureStage *v231; // eax
  NiD3DPass *v232; // esi
  NiD3DTextureStage **v233; // eax
  NiD3DTextureStage *v234; // eax
  unsigned int *v235; // edi
  NiD3DTextureStage **v236; // eax
  NiD3DTextureStage *v237; // eax
  NiD3DPass *v238; // esi
  NiD3DTextureStage **v239; // eax
  NiD3DTextureStage *v240; // eax
  unsigned int *v241; // edi
  NiD3DTextureStage **v242; // eax
  NiD3DTextureStage *v243; // eax
  unsigned int *v244; // edi
  NiD3DTextureStage **v245; // eax
  NiD3DTextureStage *v246; // eax
  NiD3DPass *v247; // esi
  NiD3DTextureStage **v248; // eax
  NiD3DTextureStage *v249; // eax
  unsigned int *v250; // edi
  NiD3DTextureStage **v251; // eax
  NiD3DTextureStage *v252; // eax
  unsigned int *v253; // edi
  NiD3DTextureStage **v254; // eax
  NiD3DTextureStage *v255; // eax
  NiD3DPass *v256; // esi
  NiD3DTextureStage **v257; // eax
  NiD3DTextureStage *v258; // eax
  unsigned int *v259; // edi
  NiD3DTextureStage **v260; // eax
  NiD3DTextureStage *v261; // eax
  unsigned int *v262; // edi
  NiD3DTextureStage **v263; // eax
  NiD3DTextureStage *v264; // eax
  unsigned int *v265; // edi
  NiD3DTextureStage **v266; // eax
  NiD3DTextureStage *v267; // eax
  NiD3DPass *v268; // esi
  NiD3DTextureStage **v269; // eax
  NiD3DTextureStage *v270; // eax
  unsigned int *v271; // edi
  NiD3DTextureStage **v272; // eax
  NiD3DTextureStage *v273; // eax
  unsigned int *v274; // edi
  NiD3DTextureStage **v275; // eax
  NiD3DTextureStage *v276; // eax
  NiD3DPass *v277; // esi
  NiD3DTextureStage **v278; // eax
  NiD3DTextureStage *v279; // eax
  unsigned int *v280; // edi
  NiD3DTextureStage **v281; // eax
  NiD3DTextureStage *v282; // eax
  unsigned int *v283; // edi
  NiD3DTextureStage **v284; // eax
  NiD3DTextureStage *v285; // eax
  NiD3DPass *v286; // eax
  NiD3DPass *v287; // eax
  unsigned int *a3; // [esp+38h] [ebp-18h] BYREF
  NiD3DPassVtbl **v289; // [esp+3Ch] [ebp-14h] BYREF
  NiD3DTextureStage *v290; // [esp+40h] [ebp-10h] BYREF
  unsigned int v291; // [esp+4Ch] [ebp-4h]

  v0 = 0; /*0x815dd7*/
  v289 = 0; /*0x815dd9*/
  v1 = 0; /*0x815ddd*/
  v291 = 0; /*0x815ddf*/
  a3 = 0; /*0x815de3*/
  v2 = unk_B45604; /*0x815de7*/
  v3 = unk_B45604 == 0; /*0x815dec*/
  LOBYTE(v291) = 1; /*0x815df3*/
  if ( !v3 ) /*0x815df8*/
  {
    v0 = (NiD3DPass *)v2; /*0x815dfa*/
    v289 = (NiD3DPassVtbl **)v2; /*0x815dfe*/
    if ( v2 ) /*0x815e02*/
      ++*(_DWORD *)(v2 + 0x60); /*0x815e04*/
  }
  if ( v0->StageCount < 2 ) /*0x815e0d*/
  {
    v4 = (unsigned int *)*NiD3DTextureStagePool_Acquire(&v290); /*0x815e20*/
    if ( v4 ) /*0x815e24*/
    {
      v1 = (NiD3DTextureStage *)v4; /*0x815e26*/
      ++v4[0x17]; /*0x815e28*/
      a3 = v4; /*0x815e2b*/
    }
    v5 = v290; /*0x815e2f*/
    LOBYTE(v291) = 1; /*0x815e35*/
    if ( v290 ) /*0x815e3a*/
    {
      --v290[7].Unk08; /*0x815e3c*/
      if ( !v5[7].Unk08 ) /*0x815e45*/
        sub_772560(v5); /*0x815e4a*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x815e55*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x815e64*/
    v6 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x815e76*/
    v3 = v1 == (NiD3DTextureStage *)*v6; /*0x815e78*/
    LOBYTE(v291) = 3; /*0x815e7a*/
    if ( !v3 ) /*0x815e7f*/
    {
      if ( v1 ) /*0x815e83*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x815e85*/
        if ( v3 ) /*0x815e89*/
          sub_772560(v1); /*0x815e8d*/
      }
      v1 = (NiD3DTextureStage *)*v6; /*0x815e92*/
      a3 = *v6; /*0x815e96*/
      if ( a3 ) /*0x815e9a*/
        ++v1[7].Unk08; /*0x815e9c*/
    }
    v7 = v290; /*0x815e9f*/
    LOBYTE(v291) = 1; /*0x815ea5*/
    if ( v290 ) /*0x815eaa*/
    {
      --v290[7].Unk08; /*0x815eac*/
      if ( !v7[7].Unk08 ) /*0x815eb5*/
        sub_772560(v7); /*0x815eba*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x815ec4*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x815ed3*/
  }
  VertexShader = v0->VertexShader; /*0x815edd*/
  v9 = unk_B452B8; /*0x815ee2*/
  if ( VertexShader != (NiD3DVertexShader *)unk_B452B8 ) /*0x815ee4*/
  {
    if ( VertexShader ) /*0x815ee8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x815eee*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x815f04*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v9; /*0x815f08*/
    if ( v9 ) /*0x815f0b*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x815f11*/
  }
  PixelShader = v0->PixelShader; /*0x815f1c*/
  v11 = unk_B450AC; /*0x815f21*/
  if ( PixelShader != (NiD3DPixelShader *)unk_B450AC ) /*0x815f23*/
  {
    if ( PixelShader ) /*0x815f27*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x815f2d*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x815f43*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v11; /*0x815f47*/
    if ( v11 ) /*0x815f4a*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x815f50*/
  }
  if ( !v0->RenderStateGroup ) /*0x815f56*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815f61*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x815f6d*/
  if ( !v0->RenderStateGroup ) /*0x815f72*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815f7d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x815f89*/
  if ( !v0->RenderStateGroup ) /*0x815f8e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815f99*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x815fa5*/
  if ( !v0->RenderStateGroup ) /*0x815faa*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815fb5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x815fc1*/
  if ( !v0->RenderStateGroup ) /*0x815fc6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815fd1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x815fdd*/
  if ( !v0->RenderStateGroup ) /*0x815fe2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815fed*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x815ff9*/
  v3 = v0 == (NiD3DPass *)unk_B45608; /*0x816001*/
  unk_B43B84 = 0x82; /*0x816007*/
  unk_B44214 = 0xC; /*0x816011*/
  if ( !v3 ) /*0x81601b*/
  {
    v3 = v0->RefCount-- == 1; /*0x81601d*/
    if ( v3 ) /*0x816020*/
      NiD3DPass_ReleaseToPool(v0); /*0x816024*/
    v0 = (NiD3DPass *)unk_B45608; /*0x816029*/
    v289 = (NiD3DPassVtbl **)unk_B45608; /*0x816031*/
    if ( v289 ) /*0x816035*/
      ++v0->RefCount; /*0x816037*/
  }
  if ( v0->StageCount < 2 ) /*0x816041*/
  {
    v12 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816054*/
    v3 = v1 == (NiD3DTextureStage *)*v12; /*0x816056*/
    LOBYTE(v291) = 4; /*0x816058*/
    if ( !v3 ) /*0x81605d*/
    {
      if ( v1 ) /*0x816061*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816063*/
        if ( v3 ) /*0x816066*/
          sub_772560(v1); /*0x81606a*/
      }
      v1 = (NiD3DTextureStage *)*v12; /*0x81606f*/
      a3 = *v12; /*0x816073*/
      if ( a3 ) /*0x816077*/
        ++v1[7].Unk08; /*0x816079*/
    }
    v13 = v290; /*0x81607d*/
    LOBYTE(v291) = 1; /*0x816083*/
    if ( v290 ) /*0x816088*/
    {
      --v290[7].Unk08; /*0x81608a*/
      if ( !v13[7].Unk08 ) /*0x816092*/
        sub_772560(v13); /*0x816097*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8160a3*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8160b2*/
    v14 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x8160c4*/
    v3 = v1 == (NiD3DTextureStage *)*v14; /*0x8160c6*/
    LOBYTE(v291) = 5; /*0x8160c8*/
    if ( !v3 ) /*0x8160cd*/
    {
      if ( v1 ) /*0x8160d1*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8160d3*/
        if ( v3 ) /*0x8160d6*/
          sub_772560(v1); /*0x8160da*/
      }
      v1 = (NiD3DTextureStage *)*v14; /*0x8160df*/
      a3 = *v14; /*0x8160e3*/
      if ( a3 ) /*0x8160e7*/
        ++v1[7].Unk08; /*0x8160e9*/
    }
    v15 = v290; /*0x8160ed*/
    LOBYTE(v291) = 1; /*0x8160f3*/
    if ( v290 ) /*0x8160f8*/
    {
      --v290[7].Unk08; /*0x8160fa*/
      if ( !v15[7].Unk08 ) /*0x816102*/
        sub_772560(v15); /*0x816107*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x816113*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816122*/
  }
  v16 = v0->VertexShader; /*0x81612c*/
  v17 = unk_B452C0; /*0x816131*/
  if ( v16 != (NiD3DVertexShader *)unk_B452C0 ) /*0x816133*/
  {
    if ( v16 ) /*0x816137*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v16 + 1) ) /*0x81613d*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1); /*0x816153*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v17; /*0x816157*/
    if ( v17 ) /*0x81615a*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x816160*/
  }
  v18 = v0->PixelShader; /*0x81616b*/
  v19 = unk_B450BC; /*0x816170*/
  if ( v18 != (NiD3DPixelShader *)unk_B450BC ) /*0x816172*/
  {
    if ( v18 ) /*0x816176*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v18 + 1) ) /*0x81617c*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v18)(v18, 1); /*0x816192*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v19; /*0x816196*/
    if ( v19 ) /*0x816199*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x81619f*/
  }
  if ( !v0->RenderStateGroup ) /*0x8161a5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8161b0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8161bc*/
  if ( !v0->RenderStateGroup ) /*0x8161c1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8161cc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8161d8*/
  if ( !v0->RenderStateGroup ) /*0x8161dd*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8161e8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8161f4*/
  if ( !v0->RenderStateGroup ) /*0x8161f9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816204*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x816210*/
  if ( !v0->RenderStateGroup ) /*0x816215*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816220*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x81622c*/
  if ( !v0->RenderStateGroup ) /*0x816231*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81623c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x816248*/
  v3 = v0 == (NiD3DPass *)unk_B45670; /*0x816250*/
  unk_B43B88 = 0x82; /*0x816256*/
  unk_B44218 = 0xC; /*0x816260*/
  if ( !v3 ) /*0x81626a*/
  {
    v3 = v0->RefCount-- == 1; /*0x81626c*/
    if ( v3 ) /*0x81626f*/
      NiD3DPass_ReleaseToPool(v0); /*0x816273*/
    v0 = (NiD3DPass *)unk_B45670; /*0x816278*/
    v289 = (NiD3DPassVtbl **)unk_B45670; /*0x816280*/
    if ( v289 ) /*0x816284*/
      ++v0->RefCount; /*0x816286*/
  }
  if ( v0->StageCount < 2 ) /*0x816290*/
  {
    v20 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x8162a3*/
    v3 = v1 == (NiD3DTextureStage *)*v20; /*0x8162a5*/
    LOBYTE(v291) = 6; /*0x8162a7*/
    if ( !v3 ) /*0x8162ac*/
    {
      if ( v1 ) /*0x8162b0*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8162b2*/
        if ( v3 ) /*0x8162b5*/
          sub_772560(v1); /*0x8162b9*/
      }
      v1 = (NiD3DTextureStage *)*v20; /*0x8162be*/
      a3 = *v20; /*0x8162c2*/
      if ( a3 ) /*0x8162c6*/
        ++v1[7].Unk08; /*0x8162c8*/
    }
    v21 = v290; /*0x8162cc*/
    LOBYTE(v291) = 1; /*0x8162d2*/
    if ( v290 ) /*0x8162d7*/
    {
      --v290[7].Unk08; /*0x8162d9*/
      if ( !v21[7].Unk08 ) /*0x8162e1*/
        sub_772560(v21); /*0x8162e6*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8162f2*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816301*/
    v22 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816313*/
    v3 = v1 == (NiD3DTextureStage *)*v22; /*0x816315*/
    LOBYTE(v291) = 7; /*0x816317*/
    if ( !v3 ) /*0x81631c*/
    {
      if ( v1 ) /*0x816320*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816322*/
        if ( v3 ) /*0x816325*/
          sub_772560(v1); /*0x816329*/
      }
      v1 = (NiD3DTextureStage *)*v22; /*0x81632e*/
      a3 = *v22; /*0x816332*/
      if ( a3 ) /*0x816336*/
        ++v1[7].Unk08; /*0x816338*/
    }
    v23 = v290; /*0x81633c*/
    LOBYTE(v291) = 1; /*0x816342*/
    if ( v290 ) /*0x816347*/
    {
      --v290[7].Unk08; /*0x816349*/
      if ( !v23[7].Unk08 ) /*0x816351*/
        sub_772560(v23); /*0x816356*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x816362*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816371*/
  }
  v24 = v0->VertexShader; /*0x81637b*/
  v25 = unk_B452BC; /*0x816380*/
  if ( v24 != (NiD3DVertexShader *)unk_B452BC ) /*0x816382*/
  {
    if ( v24 ) /*0x816386*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v24 + 1) ) /*0x81638c*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v24)(v24, 1); /*0x8163a2*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v25; /*0x8163a6*/
    if ( v25 ) /*0x8163a9*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x8163af*/
  }
  v26 = v0->PixelShader; /*0x8163ba*/
  v27 = unk_B450B0; /*0x8163bf*/
  if ( v26 != (NiD3DPixelShader *)unk_B450B0 ) /*0x8163c1*/
  {
    if ( v26 ) /*0x8163c5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v26 + 1) ) /*0x8163cb*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v26)(v26, 1); /*0x8163e1*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v27; /*0x8163e5*/
    if ( v27 ) /*0x8163e8*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x8163ee*/
  }
  if ( !v0->RenderStateGroup ) /*0x8163f4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8163ff*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x81640b*/
  if ( !v0->RenderStateGroup ) /*0x816410*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81641b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x816427*/
  if ( !v0->RenderStateGroup ) /*0x81642c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816437*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x816443*/
  if ( !v0->RenderStateGroup ) /*0x816448*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816453*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x81645f*/
  if ( !v0->RenderStateGroup ) /*0x816464*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81646f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x81647b*/
  if ( !v0->RenderStateGroup ) /*0x816480*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81648b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x816497*/
  v3 = v0 == (NiD3DPass *)unk_B45674; /*0x81649f*/
  unk_B43BF0 = 0x18082; /*0x8164a5*/
  unk_B44280 = 0xC; /*0x8164af*/
  unk_B43560 = 0x18000; /*0x8164b9*/
  if ( !v3 ) /*0x8164c3*/
  {
    v3 = v0->RefCount-- == 1; /*0x8164c5*/
    if ( v3 ) /*0x8164c8*/
      NiD3DPass_ReleaseToPool(v0); /*0x8164cc*/
    v0 = (NiD3DPass *)unk_B45674; /*0x8164d1*/
    v289 = (NiD3DPassVtbl **)unk_B45674; /*0x8164d9*/
    if ( v289 ) /*0x8164dd*/
      ++v0->RefCount; /*0x8164df*/
  }
  if ( v0->StageCount < 2 ) /*0x8164e7*/
  {
    v28 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x8164fa*/
    v3 = v1 == (NiD3DTextureStage *)*v28; /*0x8164fc*/
    LOBYTE(v291) = 8; /*0x8164fe*/
    if ( !v3 ) /*0x816503*/
    {
      if ( v1 ) /*0x816507*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816509*/
        if ( v3 ) /*0x81650c*/
          sub_772560(v1); /*0x816510*/
      }
      v1 = (NiD3DTextureStage *)*v28; /*0x816515*/
      a3 = *v28; /*0x816519*/
      if ( a3 ) /*0x81651d*/
        ++v1[7].Unk08; /*0x81651f*/
    }
    v29 = v290; /*0x816523*/
    LOBYTE(v291) = 1; /*0x816529*/
    if ( v290 ) /*0x81652e*/
    {
      --v290[7].Unk08; /*0x816530*/
      if ( !v29[7].Unk08 ) /*0x816538*/
        sub_772560(v29); /*0x81653d*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x816549*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816558*/
    v30 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x81656a*/
    v3 = v1 == (NiD3DTextureStage *)*v30; /*0x81656c*/
    LOBYTE(v291) = 9; /*0x81656e*/
    if ( !v3 ) /*0x816573*/
    {
      if ( v1 ) /*0x816577*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816579*/
        if ( v3 ) /*0x81657c*/
          sub_772560(v1); /*0x816580*/
      }
      v1 = (NiD3DTextureStage *)*v30; /*0x816585*/
      a3 = *v30; /*0x816589*/
      if ( a3 ) /*0x81658d*/
        ++v1[7].Unk08; /*0x81658f*/
    }
    v31 = v290; /*0x816593*/
    LOBYTE(v291) = 1; /*0x816599*/
    if ( v290 ) /*0x81659e*/
    {
      --v290[7].Unk08; /*0x8165a0*/
      if ( !v31[7].Unk08 ) /*0x8165a8*/
        sub_772560(v31); /*0x8165ad*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8165b9*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8165c8*/
  }
  v32 = v0->VertexShader; /*0x8165d2*/
  v33 = unk_B452C4; /*0x8165d7*/
  if ( v32 != (NiD3DVertexShader *)unk_B452C4 ) /*0x8165d9*/
  {
    if ( v32 ) /*0x8165dd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) ) /*0x8165e3*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v32)(v32, 1); /*0x8165f9*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v33; /*0x8165fd*/
    if ( v33 ) /*0x816600*/
      InterlockedIncrement((volatile LONG *)(v33 + 4)); /*0x816606*/
  }
  v34 = v0->PixelShader; /*0x816611*/
  v35 = unk_B450C0; /*0x816616*/
  if ( v34 != (NiD3DPixelShader *)unk_B450C0 ) /*0x816618*/
  {
    if ( v34 ) /*0x81661c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v34 + 1) ) /*0x816622*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v34)(v34, 1); /*0x816638*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v35; /*0x81663c*/
    if ( v35 ) /*0x81663f*/
      InterlockedIncrement((volatile LONG *)(v35 + 4)); /*0x816645*/
  }
  if ( !v0->RenderStateGroup ) /*0x81664b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816656*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x816662*/
  if ( !v0->RenderStateGroup ) /*0x816667*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816672*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x81667e*/
  if ( !v0->RenderStateGroup ) /*0x816683*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81668e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x81669a*/
  if ( !v0->RenderStateGroup ) /*0x81669f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8166aa*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8166b6*/
  if ( !v0->RenderStateGroup ) /*0x8166bb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8166c6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8166d2*/
  if ( !v0->RenderStateGroup ) /*0x8166d7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8166e2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8166ee*/
  v3 = v0 == (NiD3DPass *)unk_B4560C; /*0x8166f6*/
  unk_B43BF4 = 0x18082; /*0x8166fc*/
  unk_B44284 = 0xC; /*0x816706*/
  unk_B43564 = 0x18000; /*0x816710*/
  if ( !v3 ) /*0x81671a*/
  {
    v3 = v0->RefCount-- == 1; /*0x81671c*/
    if ( v3 ) /*0x81671f*/
      NiD3DPass_ReleaseToPool(v0); /*0x816723*/
    v0 = (NiD3DPass *)unk_B4560C; /*0x816728*/
    v289 = (NiD3DPassVtbl **)unk_B4560C; /*0x816730*/
    if ( v289 ) /*0x816734*/
      ++v0->RefCount; /*0x816736*/
  }
  if ( v0->StageCount < 3 ) /*0x81673e*/
  {
    v36 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816751*/
    v3 = v1 == (NiD3DTextureStage *)*v36; /*0x816753*/
    LOBYTE(v291) = 0xA; /*0x816755*/
    if ( !v3 ) /*0x81675a*/
    {
      if ( v1 ) /*0x81675e*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816760*/
        if ( v3 ) /*0x816763*/
          sub_772560(v1); /*0x816767*/
      }
      v1 = (NiD3DTextureStage *)*v36; /*0x81676c*/
      a3 = *v36; /*0x816770*/
      if ( a3 ) /*0x816774*/
        ++v1[7].Unk08; /*0x816776*/
    }
    v37 = v290; /*0x81677a*/
    LOBYTE(v291) = 1; /*0x816780*/
    if ( v290 ) /*0x816785*/
    {
      --v290[7].Unk08; /*0x816787*/
      if ( !v37[7].Unk08 ) /*0x81678f*/
        sub_772560(v37); /*0x816794*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8167a0*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8167af*/
    v38 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x8167c1*/
    v3 = v1 == (NiD3DTextureStage *)*v38; /*0x8167c3*/
    LOBYTE(v291) = 0xB; /*0x8167c5*/
    if ( !v3 ) /*0x8167ca*/
    {
      if ( v1 ) /*0x8167ce*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8167d0*/
        if ( v3 ) /*0x8167d3*/
          sub_772560(v1); /*0x8167d7*/
      }
      v1 = (NiD3DTextureStage *)*v38; /*0x8167dc*/
      a3 = *v38; /*0x8167e0*/
      if ( a3 ) /*0x8167e4*/
        ++v1[7].Unk08; /*0x8167e6*/
    }
    v39 = v290; /*0x8167ea*/
    LOBYTE(v291) = 1; /*0x8167f0*/
    if ( v290 ) /*0x8167f5*/
    {
      --v290[7].Unk08; /*0x8167f7*/
      if ( !v39[7].Unk08 ) /*0x8167ff*/
        sub_772560(v39); /*0x816804*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x816810*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x81681f*/
    v40 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816831*/
    v3 = v1 == (NiD3DTextureStage *)*v40; /*0x816833*/
    LOBYTE(v291) = 0xC; /*0x816835*/
    if ( !v3 ) /*0x81683a*/
    {
      if ( v1 ) /*0x81683e*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816840*/
        if ( v3 ) /*0x816843*/
          sub_772560(v1); /*0x816847*/
      }
      v1 = (NiD3DTextureStage *)*v40; /*0x81684c*/
      a3 = *v40; /*0x816850*/
      if ( a3 ) /*0x816854*/
        ++v1[7].Unk08; /*0x816856*/
    }
    v41 = v290; /*0x81685a*/
    LOBYTE(v291) = 1; /*0x816860*/
    if ( v290 ) /*0x816865*/
    {
      --v290[7].Unk08; /*0x816867*/
      if ( !v41[7].Unk08 ) /*0x81686f*/
        sub_772560(v41); /*0x816874*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x816880*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x81688f*/
  }
  v42 = v0->VertexShader; /*0x816899*/
  v43 = unk_B452B8; /*0x81689e*/
  if ( v42 != (NiD3DVertexShader *)unk_B452B8 ) /*0x8168a0*/
  {
    if ( v42 ) /*0x8168a4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) ) /*0x8168aa*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v42)(v42, 1); /*0x8168c0*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v43; /*0x8168c4*/
    if ( v43 ) /*0x8168c7*/
      InterlockedIncrement((volatile LONG *)(v43 + 4)); /*0x8168cd*/
  }
  v44 = v0->PixelShader; /*0x8168d8*/
  v45 = unk_B450DC; /*0x8168dd*/
  if ( v44 != (NiD3DPixelShader *)unk_B450DC ) /*0x8168df*/
  {
    if ( v44 ) /*0x8168e3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v44 + 1) ) /*0x8168e9*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v44)(v44, 1); /*0x8168ff*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v45; /*0x816903*/
    if ( v45 ) /*0x816906*/
      InterlockedIncrement((volatile LONG *)(v45 + 4)); /*0x81690c*/
  }
  if ( !v0->RenderStateGroup ) /*0x816912*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81691d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x816929*/
  if ( !v0->RenderStateGroup ) /*0x81692e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816939*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x816945*/
  if ( !v0->RenderStateGroup ) /*0x81694a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816955*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x816961*/
  if ( !v0->RenderStateGroup ) /*0x816966*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816971*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x81697d*/
  if ( !v0->RenderStateGroup ) /*0x816982*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81698d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x816999*/
  if ( !v0->RenderStateGroup ) /*0x81699e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8169a9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8169b5*/
  v3 = v0 == (NiD3DPass *)unk_B45610; /*0x8169bd*/
  unk_B43B8C = 0x82; /*0x8169c3*/
  unk_B4421C = 0x8C; /*0x8169cd*/
  unk_B448AC = 4; /*0x8169d7*/
  if ( !v3 ) /*0x8169e1*/
  {
    v3 = v0->RefCount-- == 1; /*0x8169e3*/
    if ( v3 ) /*0x8169e6*/
      NiD3DPass_ReleaseToPool(v0); /*0x8169ea*/
    v0 = (NiD3DPass *)unk_B45610; /*0x8169ef*/
    v289 = (NiD3DPassVtbl **)unk_B45610; /*0x8169f7*/
    if ( v289 ) /*0x8169fb*/
      ++v0->RefCount; /*0x8169fd*/
  }
  if ( v0->StageCount < 3 ) /*0x816a05*/
  {
    v46 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816a18*/
    v3 = v1 == (NiD3DTextureStage *)*v46; /*0x816a1a*/
    LOBYTE(v291) = 0xD; /*0x816a1c*/
    if ( !v3 ) /*0x816a21*/
    {
      if ( v1 ) /*0x816a25*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816a27*/
        if ( v3 ) /*0x816a2a*/
          sub_772560(v1); /*0x816a2e*/
      }
      v1 = (NiD3DTextureStage *)*v46; /*0x816a33*/
      a3 = *v46; /*0x816a37*/
      if ( a3 ) /*0x816a3b*/
        ++v1[7].Unk08; /*0x816a3d*/
    }
    v47 = v290; /*0x816a41*/
    LOBYTE(v291) = 1; /*0x816a47*/
    if ( v290 ) /*0x816a4c*/
    {
      --v290[7].Unk08; /*0x816a4e*/
      if ( !v47[7].Unk08 ) /*0x816a56*/
        sub_772560(v47); /*0x816a5b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x816a67*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816a76*/
    v48 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816a88*/
    v3 = v1 == (NiD3DTextureStage *)*v48; /*0x816a8a*/
    LOBYTE(v291) = 0xE; /*0x816a8c*/
    if ( !v3 ) /*0x816a91*/
    {
      if ( v1 ) /*0x816a95*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816a97*/
        if ( v3 ) /*0x816a9a*/
          sub_772560(v1); /*0x816a9e*/
      }
      v1 = (NiD3DTextureStage *)*v48; /*0x816aa3*/
      a3 = *v48; /*0x816aa7*/
      if ( a3 ) /*0x816aab*/
        ++v1[7].Unk08; /*0x816aad*/
    }
    v49 = v290; /*0x816ab1*/
    LOBYTE(v291) = 1; /*0x816ab7*/
    if ( v290 ) /*0x816abc*/
    {
      --v290[7].Unk08; /*0x816abe*/
      if ( !v49[7].Unk08 ) /*0x816ac6*/
        sub_772560(v49); /*0x816acb*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x816ad7*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816ae6*/
    v50 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816af8*/
    v3 = v1 == (NiD3DTextureStage *)*v50; /*0x816afa*/
    LOBYTE(v291) = 0xF; /*0x816afc*/
    if ( !v3 ) /*0x816b01*/
    {
      if ( v1 ) /*0x816b05*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816b07*/
        if ( v3 ) /*0x816b0a*/
          sub_772560(v1); /*0x816b0e*/
      }
      v1 = (NiD3DTextureStage *)*v50; /*0x816b13*/
      a3 = *v50; /*0x816b17*/
      if ( a3 ) /*0x816b1b*/
        ++v1[7].Unk08; /*0x816b1d*/
    }
    v51 = v290; /*0x816b21*/
    LOBYTE(v291) = 1; /*0x816b27*/
    if ( v290 ) /*0x816b2c*/
    {
      --v290[7].Unk08; /*0x816b2e*/
      if ( !v51[7].Unk08 ) /*0x816b36*/
        sub_772560(v51); /*0x816b3b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x816b47*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816b56*/
  }
  v52 = v0->VertexShader; /*0x816b60*/
  v53 = unk_B452C0; /*0x816b65*/
  if ( v52 != (NiD3DVertexShader *)unk_B452C0 ) /*0x816b67*/
  {
    if ( v52 ) /*0x816b6b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v52 + 1) ) /*0x816b71*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v52)(v52, 1); /*0x816b87*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v53; /*0x816b8b*/
    if ( v53 ) /*0x816b8e*/
      InterlockedIncrement((volatile LONG *)(v53 + 4)); /*0x816b94*/
  }
  v54 = v0->PixelShader; /*0x816b9f*/
  v55 = unk_B450EC; /*0x816ba4*/
  if ( v54 != (NiD3DPixelShader *)unk_B450EC ) /*0x816ba6*/
  {
    if ( v54 ) /*0x816baa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v54 + 1) ) /*0x816bb0*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v54)(v54, 1); /*0x816bc6*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v55; /*0x816bca*/
    if ( v55 ) /*0x816bcd*/
      InterlockedIncrement((volatile LONG *)(v55 + 4)); /*0x816bd3*/
  }
  if ( !v0->RenderStateGroup ) /*0x816bd9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816be4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x816bf0*/
  if ( !v0->RenderStateGroup ) /*0x816bf5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816c00*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x816c0c*/
  if ( !v0->RenderStateGroup ) /*0x816c11*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816c1c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x816c28*/
  if ( !v0->RenderStateGroup ) /*0x816c2d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816c38*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x816c44*/
  if ( !v0->RenderStateGroup ) /*0x816c49*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816c54*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x816c60*/
  if ( !v0->RenderStateGroup ) /*0x816c65*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816c70*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x816c7c*/
  v3 = v0 == (NiD3DPass *)unk_B45678; /*0x816c84*/
  unk_B43B90 = 0x82; /*0x816c8a*/
  unk_B44220 = 0x8C; /*0x816c94*/
  unk_B448B0 = 4; /*0x816c9e*/
  if ( !v3 ) /*0x816ca8*/
  {
    v3 = v0->RefCount-- == 1; /*0x816caa*/
    if ( v3 ) /*0x816cad*/
      NiD3DPass_ReleaseToPool(v0); /*0x816cb1*/
    v0 = (NiD3DPass *)unk_B45678; /*0x816cb6*/
    v289 = (NiD3DPassVtbl **)unk_B45678; /*0x816cbe*/
    if ( v289 ) /*0x816cc2*/
      ++v0->RefCount; /*0x816cc4*/
  }
  if ( v0->StageCount < 3 ) /*0x816ccc*/
  {
    v56 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816cdf*/
    v3 = v1 == (NiD3DTextureStage *)*v56; /*0x816ce1*/
    LOBYTE(v291) = 0x10; /*0x816ce3*/
    if ( !v3 ) /*0x816ce8*/
    {
      if ( v1 ) /*0x816cec*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816cee*/
        if ( v3 ) /*0x816cf1*/
          sub_772560(v1); /*0x816cf5*/
      }
      v1 = (NiD3DTextureStage *)*v56; /*0x816cfa*/
      a3 = *v56; /*0x816cfe*/
      if ( a3 ) /*0x816d02*/
        ++v1[7].Unk08; /*0x816d04*/
    }
    v57 = v290; /*0x816d08*/
    LOBYTE(v291) = 1; /*0x816d0e*/
    if ( v290 ) /*0x816d13*/
    {
      --v290[7].Unk08; /*0x816d15*/
      if ( !v57[7].Unk08 ) /*0x816d1d*/
        sub_772560(v57); /*0x816d22*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x816d2e*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816d3d*/
    v58 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816d4f*/
    v3 = v1 == (NiD3DTextureStage *)*v58; /*0x816d51*/
    LOBYTE(v291) = 0x11; /*0x816d53*/
    if ( !v3 ) /*0x816d58*/
    {
      if ( v1 ) /*0x816d5c*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816d5e*/
        if ( v3 ) /*0x816d61*/
          sub_772560(v1); /*0x816d65*/
      }
      v1 = (NiD3DTextureStage *)*v58; /*0x816d6a*/
      a3 = *v58; /*0x816d6e*/
      if ( a3 ) /*0x816d72*/
        ++v1[7].Unk08; /*0x816d74*/
    }
    v59 = v290; /*0x816d78*/
    LOBYTE(v291) = 1; /*0x816d7e*/
    if ( v290 ) /*0x816d83*/
    {
      --v290[7].Unk08; /*0x816d85*/
      if ( !v59[7].Unk08 ) /*0x816d8d*/
        sub_772560(v59); /*0x816d92*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x816d9e*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816dad*/
    v60 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816dbf*/
    v3 = v1 == (NiD3DTextureStage *)*v60; /*0x816dc1*/
    LOBYTE(v291) = 0x12; /*0x816dc3*/
    if ( !v3 ) /*0x816dc8*/
    {
      if ( v1 ) /*0x816dcc*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816dce*/
        if ( v3 ) /*0x816dd1*/
          sub_772560(v1); /*0x816dd5*/
      }
      v1 = (NiD3DTextureStage *)*v60; /*0x816dda*/
      a3 = *v60; /*0x816dde*/
      if ( a3 ) /*0x816de2*/
        ++v1[7].Unk08; /*0x816de4*/
    }
    v61 = v290; /*0x816de8*/
    LOBYTE(v291) = 1; /*0x816dee*/
    if ( v290 ) /*0x816df3*/
    {
      --v290[7].Unk08; /*0x816df5*/
      if ( !v61[7].Unk08 ) /*0x816dfd*/
        sub_772560(v61); /*0x816e02*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x816e0e*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816e1d*/
  }
  v62 = v0->VertexShader; /*0x816e27*/
  v63 = unk_B452BC; /*0x816e2c*/
  if ( v62 != (NiD3DVertexShader *)unk_B452BC ) /*0x816e2e*/
  {
    if ( v62 ) /*0x816e32*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v62 + 1) ) /*0x816e38*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v62)(v62, 1); /*0x816e4e*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v63; /*0x816e52*/
    if ( v63 ) /*0x816e55*/
      InterlockedIncrement((volatile LONG *)(v63 + 4)); /*0x816e5b*/
  }
  v64 = v0->PixelShader; /*0x816e66*/
  v65 = unk_B450E0; /*0x816e6b*/
  if ( v64 != (NiD3DPixelShader *)unk_B450E0 ) /*0x816e6d*/
  {
    if ( v64 ) /*0x816e71*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v64 + 1) ) /*0x816e77*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v64)(v64, 1); /*0x816e8d*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v65; /*0x816e91*/
    if ( v65 ) /*0x816e94*/
      InterlockedIncrement((volatile LONG *)(v65 + 4)); /*0x816e9a*/
  }
  if ( !v0->RenderStateGroup ) /*0x816ea0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816eab*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x816eb7*/
  if ( !v0->RenderStateGroup ) /*0x816ebc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816ec6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x816ed0*/
  if ( !v0->RenderStateGroup ) /*0x816ed5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816edf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x816eea*/
  if ( !v0->RenderStateGroup ) /*0x816eef*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816ef9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x816f04*/
  if ( !v0->RenderStateGroup ) /*0x816f09*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816f13*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x816f1e*/
  if ( !v0->RenderStateGroup ) /*0x816f23*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x816f2d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x816f37*/
  v3 = v0 == (NiD3DPass *)unk_B4567C; /*0x816f3c*/
  unk_B43BF8 = 0x18082; /*0x816f42*/
  unk_B44288 = 0xC; /*0x816f4c*/
  unk_B43568 = 0x18000; /*0x816f56*/
  if ( !v3 ) /*0x816f60*/
  {
    v3 = v0->RefCount-- == 1; /*0x816f62*/
    if ( v3 ) /*0x816f66*/
      NiD3DPass_ReleaseToPool(v0); /*0x816f6a*/
    v0 = (NiD3DPass *)unk_B4567C; /*0x816f6f*/
    v289 = (NiD3DPassVtbl **)unk_B4567C; /*0x816f77*/
    if ( v289 ) /*0x816f7b*/
      ++v0->RefCount; /*0x816f7d*/
  }
  if ( v0->StageCount < 3 ) /*0x816f87*/
  {
    v66 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x816f9a*/
    v3 = v1 == (NiD3DTextureStage *)*v66; /*0x816f9c*/
    LOBYTE(v291) = 0x13; /*0x816f9e*/
    if ( !v3 ) /*0x816fa3*/
    {
      if ( v1 ) /*0x816fa7*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x816fa9*/
        if ( v3 ) /*0x816fad*/
          sub_772560(v1); /*0x816fb1*/
      }
      v1 = (NiD3DTextureStage *)*v66; /*0x816fb6*/
      a3 = *v66; /*0x816fba*/
      if ( a3 ) /*0x816fbe*/
        ++v1[7].Unk08; /*0x816fc0*/
    }
    v67 = v290; /*0x816fc4*/
    LOBYTE(v291) = 1; /*0x816fca*/
    if ( v290 ) /*0x816fcf*/
    {
      --v290[7].Unk08; /*0x816fd1*/
      if ( !v67[7].Unk08 ) /*0x816fda*/
        sub_772560(v67); /*0x816fde*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x816fe9*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x816ff8*/
    v68 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x81700a*/
    v3 = v1 == (NiD3DTextureStage *)*v68; /*0x81700c*/
    LOBYTE(v291) = 0x14; /*0x81700e*/
    if ( !v3 ) /*0x817013*/
    {
      if ( v1 ) /*0x817017*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x817019*/
        if ( v3 ) /*0x81701d*/
          sub_772560(v1); /*0x817021*/
      }
      v1 = (NiD3DTextureStage *)*v68; /*0x817026*/
      a3 = *v68; /*0x81702a*/
      if ( a3 ) /*0x81702e*/
        ++v1[7].Unk08; /*0x817030*/
    }
    v69 = v290; /*0x817034*/
    LOBYTE(v291) = 1; /*0x81703a*/
    if ( v290 ) /*0x81703f*/
    {
      --v290[7].Unk08; /*0x817041*/
      if ( !v69[7].Unk08 ) /*0x81704a*/
        sub_772560(v69); /*0x81704e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81705a*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x817069*/
    v70 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v290); /*0x81707b*/
    v3 = v1 == (NiD3DTextureStage *)*v70; /*0x81707d*/
    LOBYTE(v291) = 0x15; /*0x81707f*/
    if ( !v3 ) /*0x817084*/
    {
      if ( v1 ) /*0x817088*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81708a*/
        if ( v3 ) /*0x81708e*/
          sub_772560(v1); /*0x817092*/
      }
      v1 = (NiD3DTextureStage *)*v70; /*0x817097*/
      a3 = *v70; /*0x81709b*/
      if ( a3 ) /*0x81709f*/
        ++v1[7].Unk08; /*0x8170a1*/
    }
    v71 = v290; /*0x8170a5*/
    LOBYTE(v291) = 1; /*0x8170ab*/
    if ( v290 ) /*0x8170b0*/
    {
      --v290[7].Unk08; /*0x8170b2*/
      if ( !v71[7].Unk08 ) /*0x8170bb*/
        sub_772560(v71); /*0x8170bf*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x8170cb*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8170da*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B452C4); /*0x8170e8*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450F0); /*0x8170f6*/
  if ( !v0->RenderStateGroup ) /*0x8170fb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817105*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x81710f*/
  if ( !v0->RenderStateGroup ) /*0x817114*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81711e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x817128*/
  if ( !v0->RenderStateGroup ) /*0x81712d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817137*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x817142*/
  if ( !v0->RenderStateGroup ) /*0x817147*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817151*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x81715c*/
  if ( !v0->RenderStateGroup ) /*0x817161*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81716b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x817176*/
  if ( !v0->RenderStateGroup ) /*0x81717b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817185*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x81718f*/
  v3 = v0 == (NiD3DPass *)unk_B45614; /*0x817194*/
  unk_B43BFC = 0x18082; /*0x81719a*/
  unk_B4428C = 0xC; /*0x8171a4*/
  unk_B4356C = 0x18000; /*0x8171ae*/
  if ( !v3 ) /*0x8171b8*/
  {
    v3 = v0->RefCount-- == 1; /*0x8171ba*/
    if ( v3 ) /*0x8171be*/
      NiD3DPass_ReleaseToPool(v0); /*0x8171c2*/
    v0 = (NiD3DPass *)unk_B45614; /*0x8171c7*/
    v289 = (NiD3DPassVtbl **)unk_B45614; /*0x8171cf*/
    if ( v289 ) /*0x8171d3*/
      ++v0->RefCount; /*0x8171d5*/
  }
  if ( v0->StageCount < 4 ) /*0x8171dd*/
  {
    v72 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8171e8*/
    LOBYTE(v291) = 0x16; /*0x8171f5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v72); /*0x8171fa*/
    v73 = v290; /*0x8171ff*/
    LOBYTE(v291) = 1; /*0x817205*/
    if ( v290 ) /*0x81720a*/
    {
      --v290[7].Unk08; /*0x81720c*/
      if ( !v73[7].Unk08 ) /*0x817215*/
        sub_772560(v73); /*0x817219*/
    }
    v74 = a3; /*0x81721e*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x817228*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v74); /*0x817237*/
    v75 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817241*/
    LOBYTE(v291) = 0x17; /*0x81724e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v75); /*0x817253*/
    v76 = v290; /*0x817258*/
    LOBYTE(v291) = 1; /*0x81725e*/
    if ( v290 ) /*0x817263*/
    {
      --v290[7].Unk08; /*0x817265*/
      if ( !v76[7].Unk08 ) /*0x81726e*/
        sub_772560(v76); /*0x817272*/
    }
    v77 = a3; /*0x817277*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x817282*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v77); /*0x817291*/
    v78 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81729b*/
    LOBYTE(v291) = 0x18; /*0x8172a8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v78); /*0x8172ad*/
    v79 = v290; /*0x8172b2*/
    LOBYTE(v291) = 1; /*0x8172b8*/
    if ( v290 ) /*0x8172bd*/
    {
      --v290[7].Unk08; /*0x8172bf*/
      if ( !v79[7].Unk08 ) /*0x8172c8*/
        sub_772560(v79); /*0x8172cc*/
    }
    v80 = a3; /*0x8172d1*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8172dc*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v80); /*0x8172eb*/
    v81 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8172f5*/
    LOBYTE(v291) = 0x19; /*0x817302*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v81); /*0x817307*/
    v82 = v290; /*0x81730c*/
    LOBYTE(v291) = 1; /*0x817312*/
    if ( v290 ) /*0x817317*/
    {
      --v290[7].Unk08; /*0x817319*/
      if ( !v82[7].Unk08 ) /*0x817322*/
        sub_772560(v82); /*0x817326*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x81732b*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x817336*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x817345*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B452C8); /*0x817353*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450CC); /*0x817360*/
  if ( !v0->RenderStateGroup ) /*0x817365*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81736f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x817379*/
  if ( !v0->RenderStateGroup ) /*0x81737e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817388*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x817392*/
  if ( !v0->RenderStateGroup ) /*0x817397*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8173a1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8173ac*/
  if ( !v0->RenderStateGroup ) /*0x8173b1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8173bb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8173c6*/
  if ( !v0->RenderStateGroup ) /*0x8173cb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8173d5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8173e0*/
  if ( !v0->RenderStateGroup ) /*0x8173e5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8173ef*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8173f9*/
  v3 = v0 == (NiD3DPass *)unk_B45618; /*0x8173fe*/
  unk_B43B94 = 0x82; /*0x817404*/
  unk_B44224 = 0xC; /*0x81740e*/
  if ( !v3 ) /*0x817418*/
  {
    v3 = v0->RefCount-- == 1; /*0x81741a*/
    if ( v3 ) /*0x81741e*/
      NiD3DPass_ReleaseToPool(v0); /*0x817422*/
    v0 = (NiD3DPass *)unk_B45618; /*0x817427*/
    v289 = (NiD3DPassVtbl **)unk_B45618; /*0x81742f*/
    if ( v289 ) /*0x817433*/
      ++v0->RefCount; /*0x817435*/
  }
  if ( v0->StageCount < 2 ) /*0x81743d*/
  {
    v83 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817448*/
    LOBYTE(v291) = 0x1A; /*0x817455*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v83); /*0x81745a*/
    v84 = v290; /*0x81745f*/
    LOBYTE(v291) = 1; /*0x817465*/
    if ( v290 ) /*0x81746a*/
    {
      --v290[7].Unk08; /*0x81746c*/
      if ( !v84[7].Unk08 ) /*0x817475*/
        sub_772560(v84); /*0x817479*/
    }
    v85 = a3; /*0x81747e*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x817488*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v85); /*0x817497*/
    v86 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8174a1*/
    LOBYTE(v291) = 0x1B; /*0x8174ae*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v86); /*0x8174b3*/
    v87 = v290; /*0x8174b8*/
    LOBYTE(v291) = 1; /*0x8174be*/
    if ( v290 ) /*0x8174c3*/
    {
      --v290[7].Unk08; /*0x8174c5*/
      if ( !v87[7].Unk08 ) /*0x8174ce*/
        sub_772560(v87); /*0x8174d2*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8174d7*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8174e2*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8174f1*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B452B8); /*0x8174ff*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450B4); /*0x81750c*/
  if ( !v0->RenderStateGroup ) /*0x817511*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81751b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x817526*/
  if ( !v0->RenderStateGroup ) /*0x81752b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817535*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x817540*/
  if ( !v0->RenderStateGroup ) /*0x817545*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81754f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0); /*0x81755a*/
  if ( !v0->RenderStateGroup ) /*0x81755f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817569*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x817574*/
  if ( !v0->RenderStateGroup ) /*0x817579*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817583*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x81758e*/
  if ( !v0->RenderStateGroup ) /*0x817593*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81759d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8175a8*/
  if ( !v0->RenderStateGroup ) /*0x8175ad*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8175b7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8175c2*/
  if ( !v0->RenderStateGroup ) /*0x8175c7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8175d1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8175db*/
  v3 = v0 == (NiD3DPass *)unk_B4561C; /*0x8175e0*/
  unk_B43B98 = 0x82; /*0x8175e6*/
  unk_B44228 = 0xC; /*0x8175f0*/
  if ( !v3 ) /*0x8175fa*/
  {
    v3 = v0->RefCount-- == 1; /*0x8175fc*/
    if ( v3 ) /*0x817600*/
      NiD3DPass_ReleaseToPool(v0); /*0x817604*/
    v0 = (NiD3DPass *)unk_B4561C; /*0x817609*/
    v289 = (NiD3DPassVtbl **)unk_B4561C; /*0x817611*/
    if ( v289 ) /*0x817615*/
      ++v0->RefCount; /*0x817617*/
  }
  if ( v0->StageCount < 2 ) /*0x81761f*/
  {
    v88 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81762a*/
    LOBYTE(v291) = 0x1C; /*0x817637*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v88); /*0x81763c*/
    v89 = v290; /*0x817641*/
    LOBYTE(v291) = 1; /*0x817647*/
    if ( v290 ) /*0x81764c*/
    {
      --v290[7].Unk08; /*0x81764e*/
      if ( !v89[7].Unk08 ) /*0x817657*/
        sub_772560(v89); /*0x81765b*/
    }
    v90 = a3; /*0x817660*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x81766a*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v90); /*0x817679*/
    v91 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817683*/
    LOBYTE(v291) = 0x1D; /*0x817690*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v91); /*0x817695*/
    v92 = v290; /*0x81769a*/
    LOBYTE(v291) = 1; /*0x8176a0*/
    if ( v290 ) /*0x8176a5*/
    {
      --v290[7].Unk08; /*0x8176a7*/
      if ( !v92[7].Unk08 ) /*0x8176b0*/
        sub_772560(v92); /*0x8176b4*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8176b9*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8176c4*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8176d3*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B452C0); /*0x8176e1*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450C4); /*0x8176ee*/
  if ( !v0->RenderStateGroup ) /*0x8176f3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8176fd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x817708*/
  if ( !v0->RenderStateGroup ) /*0x81770d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817717*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x817722*/
  if ( !v0->RenderStateGroup ) /*0x817727*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817731*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0); /*0x81773c*/
  if ( !v0->RenderStateGroup ) /*0x817741*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81774b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x817756*/
  if ( !v0->RenderStateGroup ) /*0x81775b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817765*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x817770*/
  if ( !v0->RenderStateGroup ) /*0x817775*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81777f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x81778a*/
  if ( !v0->RenderStateGroup ) /*0x81778f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817799*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8177a4*/
  if ( !v0->RenderStateGroup ) /*0x8177a9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8177b3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8177bd*/
  v3 = v0 == (NiD3DPass *)unk_B45680; /*0x8177c2*/
  unk_B43B9C = 0x82; /*0x8177c8*/
  unk_B4422C = 0xC; /*0x8177d2*/
  if ( !v3 ) /*0x8177dc*/
  {
    v3 = v0->RefCount-- == 1; /*0x8177de*/
    if ( v3 ) /*0x8177e2*/
      NiD3DPass_ReleaseToPool(v0); /*0x8177e6*/
    v0 = (NiD3DPass *)unk_B45680; /*0x8177eb*/
    v289 = (NiD3DPassVtbl **)unk_B45680; /*0x8177f3*/
    if ( v289 ) /*0x8177f7*/
      ++v0->RefCount; /*0x8177f9*/
  }
  if ( v0->StageCount < 2 ) /*0x817801*/
  {
    v93 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81780c*/
    LOBYTE(v291) = 0x1E; /*0x817819*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v93); /*0x81781e*/
    v94 = v290; /*0x817823*/
    LOBYTE(v291) = 1; /*0x817829*/
    if ( v290 ) /*0x81782e*/
    {
      --v290[7].Unk08; /*0x817830*/
      if ( !v94[7].Unk08 ) /*0x817839*/
        sub_772560(v94); /*0x81783d*/
    }
    v95 = a3; /*0x817842*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x81784c*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v95); /*0x81785b*/
    v96 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817865*/
    LOBYTE(v291) = 0x1F; /*0x817872*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v96); /*0x817877*/
    v97 = v290; /*0x81787c*/
    LOBYTE(v291) = 1; /*0x817882*/
    if ( v290 ) /*0x817887*/
    {
      --v290[7].Unk08; /*0x817889*/
      if ( !v97[7].Unk08 ) /*0x817892*/
        sub_772560(v97); /*0x817896*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x81789b*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8178a6*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8178b5*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B452BC); /*0x8178c3*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450B8); /*0x8178d0*/
  if ( !v0->RenderStateGroup ) /*0x8178d5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8178df*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8178e9*/
  if ( !v0->RenderStateGroup ) /*0x8178ee*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8178f8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x817903*/
  if ( !v0->RenderStateGroup ) /*0x817908*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817912*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0); /*0x81791d*/
  if ( !v0->RenderStateGroup ) /*0x817922*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81792c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x817937*/
  if ( !v0->RenderStateGroup ) /*0x81793c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817946*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x817951*/
  if ( !v0->RenderStateGroup ) /*0x817956*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817960*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x81796b*/
  if ( !v0->RenderStateGroup ) /*0x817970*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81797a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x817985*/
  if ( !v0->RenderStateGroup ) /*0x81798a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817994*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x81799e*/
  v3 = v0 == (NiD3DPass *)unk_B45684; /*0x8179a3*/
  unk_B43C00 = 0x18082; /*0x8179a9*/
  unk_B44290 = 0xC; /*0x8179b3*/
  unk_B43570 = 0x18000; /*0x8179bd*/
  if ( !v3 ) /*0x8179c7*/
  {
    v3 = v0->RefCount-- == 1; /*0x8179c9*/
    if ( v3 ) /*0x8179cd*/
      NiD3DPass_ReleaseToPool(v0); /*0x8179d1*/
    v0 = (NiD3DPass *)unk_B45684; /*0x8179d6*/
    v289 = (NiD3DPassVtbl **)unk_B45684; /*0x8179de*/
    if ( v289 ) /*0x8179e2*/
      ++v0->RefCount; /*0x8179e4*/
  }
  if ( v0->StageCount < 2 ) /*0x8179ec*/
  {
    v98 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8179f7*/
    LOBYTE(v291) = 0x20; /*0x817a04*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v98); /*0x817a09*/
    v99 = v290; /*0x817a0e*/
    LOBYTE(v291) = 1; /*0x817a14*/
    if ( v290 ) /*0x817a19*/
    {
      --v290[7].Unk08; /*0x817a1b*/
      if ( !v99[7].Unk08 ) /*0x817a24*/
        sub_772560(v99); /*0x817a28*/
    }
    v100 = a3; /*0x817a2d*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x817a37*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v100); /*0x817a46*/
    v101 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817a50*/
    LOBYTE(v291) = 0x21; /*0x817a5d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v101); /*0x817a62*/
    v102 = v290; /*0x817a67*/
    LOBYTE(v291) = 1; /*0x817a6d*/
    if ( v290 ) /*0x817a72*/
    {
      --v290[7].Unk08; /*0x817a74*/
      if ( !v102[7].Unk08 ) /*0x817a7d*/
        sub_772560(v102); /*0x817a81*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x817a86*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x817a91*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x817aa0*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B452C4); /*0x817aae*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450C8); /*0x817abb*/
  if ( !v0->RenderStateGroup ) /*0x817ac0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817aca*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x817ad4*/
  if ( !v0->RenderStateGroup ) /*0x817ad9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817ae3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x817aee*/
  if ( !v0->RenderStateGroup ) /*0x817af3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817afd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0); /*0x817b08*/
  if ( !v0->RenderStateGroup ) /*0x817b0d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817b17*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x817b22*/
  if ( !v0->RenderStateGroup ) /*0x817b27*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817b31*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x817b3c*/
  if ( !v0->RenderStateGroup ) /*0x817b41*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817b4b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x817b56*/
  if ( !v0->RenderStateGroup ) /*0x817b5b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817b65*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x817b70*/
  if ( !v0->RenderStateGroup ) /*0x817b75*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817b7f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x817b89*/
  v3 = v0 == (NiD3DPass *)unk_B45620; /*0x817b8e*/
  unk_B43C04 = 0x18082; /*0x817b94*/
  unk_B44294 = 0xC; /*0x817b9e*/
  unk_B43574 = 0x18000; /*0x817ba8*/
  if ( !v3 ) /*0x817bb2*/
  {
    v3 = v0->RefCount-- == 1; /*0x817bb4*/
    if ( v3 ) /*0x817bb8*/
      NiD3DPass_ReleaseToPool(v0); /*0x817bbc*/
    v0 = (NiD3DPass *)unk_B45620; /*0x817bc1*/
    v289 = (NiD3DPassVtbl **)unk_B45620; /*0x817bc9*/
    if ( v289 ) /*0x817bcd*/
      ++v0->RefCount; /*0x817bcf*/
  }
  if ( v0->StageCount < 3 ) /*0x817bd7*/
  {
    v103 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817be2*/
    LOBYTE(v291) = 0x22; /*0x817bef*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v103); /*0x817bf4*/
    v104 = v290; /*0x817bf9*/
    LOBYTE(v291) = 1; /*0x817bff*/
    if ( v290 ) /*0x817c04*/
    {
      --v290[7].Unk08; /*0x817c06*/
      if ( !v104[7].Unk08 ) /*0x817c0f*/
        sub_772560(v104); /*0x817c13*/
    }
    v105 = a3; /*0x817c18*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x817c22*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v105); /*0x817c31*/
    v106 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817c3b*/
    LOBYTE(v291) = 0x23; /*0x817c48*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v106); /*0x817c4d*/
    v107 = v290; /*0x817c52*/
    LOBYTE(v291) = 1; /*0x817c58*/
    if ( v290 ) /*0x817c5d*/
    {
      --v290[7].Unk08; /*0x817c5f*/
      if ( !v107[7].Unk08 ) /*0x817c68*/
        sub_772560(v107); /*0x817c6c*/
    }
    v108 = a3; /*0x817c71*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x817c7c*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v108); /*0x817c8b*/
    v109 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817c95*/
    LOBYTE(v291) = 0x24; /*0x817ca2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v109); /*0x817ca7*/
    v110 = v290; /*0x817cac*/
    LOBYTE(v291) = 1; /*0x817cb2*/
    if ( v290 ) /*0x817cb7*/
    {
      --v290[7].Unk08; /*0x817cb9*/
      if ( !v110[7].Unk08 ) /*0x817cc2*/
        sub_772560(v110); /*0x817cc6*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x817ccb*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x817cd6*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x817ce5*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B452B8); /*0x817cf3*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450E4); /*0x817d01*/
  if ( !v0->RenderStateGroup ) /*0x817d06*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817d10*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x817d1b*/
  if ( !v0->RenderStateGroup ) /*0x817d20*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817d2a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x817d35*/
  if ( !v0->RenderStateGroup ) /*0x817d3a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817d44*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0); /*0x817d4f*/
  if ( !v0->RenderStateGroup ) /*0x817d54*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817d5e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x817d69*/
  if ( !v0->RenderStateGroup ) /*0x817d6e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817d78*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x817d83*/
  if ( !v0->RenderStateGroup ) /*0x817d88*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817d92*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x817d9d*/
  if ( !v0->RenderStateGroup ) /*0x817da2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817dac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x817db7*/
  if ( !v0->RenderStateGroup ) /*0x817dbc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817dc6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x817dd0*/
  v3 = v0 == (NiD3DPass *)unk_B45624; /*0x817dd5*/
  unk_B43BA0 = 0x82; /*0x817ddb*/
  unk_B44230 = 0x8C; /*0x817de5*/
  unk_B448C0 = 4; /*0x817def*/
  if ( !v3 ) /*0x817df9*/
  {
    v3 = v0->RefCount-- == 1; /*0x817dfb*/
    if ( v3 ) /*0x817dff*/
      NiD3DPass_ReleaseToPool(v0); /*0x817e03*/
    v0 = (NiD3DPass *)unk_B45624; /*0x817e08*/
    v289 = (NiD3DPassVtbl **)unk_B45624; /*0x817e10*/
    if ( v289 ) /*0x817e14*/
      ++v0->RefCount; /*0x817e16*/
  }
  if ( v0->StageCount < 3 ) /*0x817e1e*/
  {
    v111 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817e29*/
    LOBYTE(v291) = 0x25; /*0x817e36*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v111); /*0x817e3b*/
    v112 = v290; /*0x817e40*/
    LOBYTE(v291) = 1; /*0x817e46*/
    if ( v290 ) /*0x817e4b*/
    {
      --v290[7].Unk08; /*0x817e4d*/
      if ( !v112[7].Unk08 ) /*0x817e56*/
        sub_772560(v112); /*0x817e5a*/
    }
    v113 = a3; /*0x817e5f*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x817e69*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v113); /*0x817e78*/
    v114 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817e82*/
    LOBYTE(v291) = 0x26; /*0x817e8f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v114); /*0x817e94*/
    v115 = v290; /*0x817e99*/
    LOBYTE(v291) = 1; /*0x817e9f*/
    if ( v290 ) /*0x817ea4*/
    {
      --v290[7].Unk08; /*0x817ea6*/
      if ( !v115[7].Unk08 ) /*0x817eaf*/
        sub_772560(v115); /*0x817eb3*/
    }
    v116 = a3; /*0x817eb8*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x817ec3*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v116); /*0x817ed2*/
    v117 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x817edc*/
    LOBYTE(v291) = 0x27; /*0x817ee9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v117); /*0x817eee*/
    v118 = v290; /*0x817ef3*/
    LOBYTE(v291) = 1; /*0x817ef9*/
    if ( v290 ) /*0x817efe*/
    {
      --v290[7].Unk08; /*0x817f00*/
      if ( !v118[7].Unk08 ) /*0x817f09*/
        sub_772560(v118); /*0x817f0d*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x817f12*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x817f1d*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x817f2c*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B452C0); /*0x817f39*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450F4); /*0x817f47*/
  if ( !v0->RenderStateGroup ) /*0x817f4c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817f56*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x817f61*/
  if ( !v0->RenderStateGroup ) /*0x817f66*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817f70*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x817f7b*/
  if ( !v0->RenderStateGroup ) /*0x817f80*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817f8a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0); /*0x817f95*/
  if ( !v0->RenderStateGroup ) /*0x817f9a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817fa4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x817faf*/
  if ( !v0->RenderStateGroup ) /*0x817fb4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817fbe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x817fc9*/
  if ( !v0->RenderStateGroup ) /*0x817fce*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817fd8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x817fe7*/
  if ( !v0->RenderStateGroup ) /*0x817fec*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x817ff6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x818001*/
  if ( !v0->RenderStateGroup ) /*0x818006*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818010*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x81801a*/
  v3 = v0 == (NiD3DPass *)unk_B45688; /*0x81801f*/
  unk_B43BA4 = 0x82; /*0x818025*/
  unk_B44234 = 0x8C; /*0x81802f*/
  unk_B448C4 = 4; /*0x818039*/
  if ( !v3 ) /*0x81803f*/
  {
    v3 = v0->RefCount-- == 1; /*0x818041*/
    if ( v3 ) /*0x818045*/
      NiD3DPass_ReleaseToPool(v0); /*0x818049*/
    v0 = (NiD3DPass *)unk_B45688; /*0x81804e*/
    v289 = (NiD3DPassVtbl **)unk_B45688; /*0x818056*/
    if ( v289 ) /*0x81805a*/
      ++v0->RefCount; /*0x81805c*/
  }
  if ( v0->StageCount < 4 ) /*0x818063*/
  {
    v119 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81806e*/
    LOBYTE(v291) = 0x28; /*0x81807b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v119); /*0x818080*/
    v120 = v290; /*0x818085*/
    LOBYTE(v291) = 1; /*0x81808b*/
    if ( v290 ) /*0x818090*/
    {
      --v290[7].Unk08; /*0x818092*/
      if ( !v120[7].Unk08 ) /*0x81809b*/
        sub_772560(v120); /*0x81809f*/
    }
    v121 = a3; /*0x8180a4*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8180ae*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v121); /*0x8180bd*/
    v122 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8180c7*/
    LOBYTE(v291) = 0x29; /*0x8180d4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v122); /*0x8180d9*/
    v123 = v290; /*0x8180de*/
    LOBYTE(v291) = 1; /*0x8180e4*/
    if ( v290 ) /*0x8180e9*/
    {
      --v290[7].Unk08; /*0x8180eb*/
      if ( !v123[7].Unk08 ) /*0x8180f4*/
        sub_772560(v123); /*0x8180f8*/
    }
    v124 = a3; /*0x8180fd*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x818108*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v124); /*0x818117*/
    v125 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818121*/
    LOBYTE(v291) = 0x2A; /*0x81812e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v125); /*0x818133*/
    v126 = v290; /*0x818138*/
    LOBYTE(v291) = 1; /*0x81813e*/
    if ( v290 ) /*0x818143*/
    {
      --v290[7].Unk08; /*0x818145*/
      if ( !v126[7].Unk08 ) /*0x81814e*/
        sub_772560(v126); /*0x818152*/
    }
    v127 = a3; /*0x818157*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x818162*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v127); /*0x818171*/
    v128 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81817b*/
    LOBYTE(v291) = 0x2B; /*0x818188*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v128); /*0x81818d*/
    v129 = v290; /*0x818192*/
    LOBYTE(v291) = 1; /*0x818198*/
    if ( v290 ) /*0x81819d*/
    {
      --v290[7].Unk08; /*0x81819f*/
      if ( !v129[7].Unk08 ) /*0x8181a8*/
        sub_772560(v129); /*0x8181ac*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8181b1*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8181bc*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8181cb*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B452CC); /*0x8181d9*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450D0); /*0x8181e7*/
  if ( !v0->RenderStateGroup ) /*0x8181ec*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8181f6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x818200*/
  if ( !v0->RenderStateGroup ) /*0x818205*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81820f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x818219*/
  if ( !v0->RenderStateGroup ) /*0x81821e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818228*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x818233*/
  if ( !v0->RenderStateGroup ) /*0x818238*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818242*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x81824d*/
  if ( !v0->RenderStateGroup ) /*0x818252*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81825c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x818267*/
  if ( !v0->RenderStateGroup ) /*0x81826c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818276*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x818280*/
  v3 = v0 == (NiD3DPass *)unk_B45628; /*0x818285*/
  unk_B43C08 = 0x18082; /*0x81828b*/
  unk_B44298 = 0xC; /*0x818295*/
  unk_B43578 = 0x18000; /*0x81829f*/
  if ( !v3 ) /*0x8182a9*/
  {
    v3 = v0->RefCount-- == 1; /*0x8182ab*/
    if ( v3 ) /*0x8182af*/
      NiD3DPass_ReleaseToPool(v0); /*0x8182b3*/
    v0 = (NiD3DPass *)unk_B45628; /*0x8182b8*/
    v289 = (NiD3DPassVtbl **)unk_B45628; /*0x8182c0*/
    if ( v289 ) /*0x8182c4*/
      ++v0->RefCount; /*0x8182c6*/
  }
  if ( v0->StageCount < 4 ) /*0x8182ce*/
  {
    v130 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8182d9*/
    LOBYTE(v291) = 0x2C; /*0x8182e6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v130); /*0x8182eb*/
    v131 = v290; /*0x8182f0*/
    LOBYTE(v291) = 1; /*0x8182f6*/
    if ( v290 ) /*0x8182fb*/
    {
      --v290[7].Unk08; /*0x8182fd*/
      if ( !v131[7].Unk08 ) /*0x818306*/
        sub_772560(v131); /*0x81830a*/
    }
    v132 = a3; /*0x81830f*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x818319*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v132); /*0x818328*/
    v133 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818332*/
    LOBYTE(v291) = 0x2D; /*0x81833f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v133); /*0x818344*/
    v134 = v290; /*0x818349*/
    LOBYTE(v291) = 1; /*0x81834f*/
    if ( v290 ) /*0x818354*/
    {
      --v290[7].Unk08; /*0x818356*/
      if ( !v134[7].Unk08 ) /*0x81835f*/
        sub_772560(v134); /*0x818363*/
    }
    v135 = a3; /*0x818368*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x818373*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v135); /*0x818382*/
    v136 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81838c*/
    LOBYTE(v291) = 0x2E; /*0x818399*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v136); /*0x81839e*/
    v137 = v290; /*0x8183a3*/
    LOBYTE(v291) = 1; /*0x8183a9*/
    if ( v290 ) /*0x8183ae*/
    {
      --v290[7].Unk08; /*0x8183b0*/
      if ( !v137[7].Unk08 ) /*0x8183b9*/
        sub_772560(v137); /*0x8183bd*/
    }
    v138 = a3; /*0x8183c2*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8183cd*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v138); /*0x8183dc*/
    v139 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8183e6*/
    LOBYTE(v291) = 0x2F; /*0x8183f3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v139); /*0x8183f8*/
    v140 = v290; /*0x8183fd*/
    LOBYTE(v291) = 1; /*0x818403*/
    if ( v290 ) /*0x818408*/
    {
      --v290[7].Unk08; /*0x81840a*/
      if ( !v140[7].Unk08 ) /*0x818413*/
        sub_772560(v140); /*0x818417*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x81841c*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x818427*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x818436*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B452C8); /*0x818444*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450D4); /*0x818451*/
  if ( !v0->RenderStateGroup ) /*0x818456*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818460*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x81846b*/
  if ( !v0->RenderStateGroup ) /*0x818470*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81847a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x818485*/
  if ( !v0->RenderStateGroup ) /*0x81848a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818494*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0); /*0x81849f*/
  if ( !v0->RenderStateGroup ) /*0x8184a4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8184ae*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8184b8*/
  if ( !v0->RenderStateGroup ) /*0x8184bd*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8184c7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8184d2*/
  if ( !v0->RenderStateGroup ) /*0x8184d7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8184e1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8184ec*/
  if ( !v0->RenderStateGroup ) /*0x8184f1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8184fb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x818506*/
  if ( !v0->RenderStateGroup ) /*0x81850b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818515*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x81851f*/
  v141 = (NiD3DPass *)unk_B4562C; /*0x818524*/
  v3 = unk_B4562C == 0; /*0x81852c*/
  unk_B43BA8 = 0x82; /*0x81852e*/
  unk_B44238 = 0xC; /*0x818538*/
  if ( !v3 ) /*0x818542*/
  {
    v3 = v141->RefCount-- == 1; /*0x818544*/
    if ( v3 ) /*0x818549*/
      NiD3DPass_ReleaseToPool(v141); /*0x81854b*/
    unk_B4562C = 0; /*0x818550*/
  }
  v142 = (NiD3DPass *)unk_B45694; /*0x818556*/
  if ( unk_B45694 ) /*0x818556*/
  {
    v3 = v142->RefCount-- == 1; /*0x81855f*/
    if ( v3 ) /*0x818564*/
      NiD3DPass_ReleaseToPool(v142); /*0x818566*/
    unk_B45694 = 0; /*0x81856b*/
  }
  if ( v0 != (NiD3DPass *)unk_B45630 ) /*0x818577*/
  {
    v3 = v0->RefCount-- == 1; /*0x818579*/
    if ( v3 ) /*0x81857c*/
      NiD3DPass_ReleaseToPool(v0); /*0x818580*/
    v0 = (NiD3DPass *)unk_B45630; /*0x818585*/
    v289 = (NiD3DPassVtbl **)unk_B45630; /*0x81858d*/
    if ( v289 ) /*0x818591*/
      ++v0->RefCount; /*0x818593*/
  }
  if ( v0->StageCount < 2 ) /*0x81859b*/
  {
    v143 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8185a6*/
    LOBYTE(v291) = 0x30; /*0x8185b3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v143); /*0x8185b8*/
    v144 = v290; /*0x8185bd*/
    LOBYTE(v291) = 1; /*0x8185c3*/
    if ( v290 ) /*0x8185c8*/
    {
      --v290[7].Unk08; /*0x8185ca*/
      if ( !v144[7].Unk08 ) /*0x8185d2*/
        sub_772560(v144); /*0x8185d6*/
    }
    v145 = a3; /*0x8185db*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8185e5*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v145); /*0x8185f4*/
    v146 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8185fe*/
    LOBYTE(v291) = 0x31; /*0x81860b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v146); /*0x818610*/
    v147 = v290; /*0x818615*/
    LOBYTE(v291) = 1; /*0x81861b*/
    if ( v290 ) /*0x818620*/
    {
      --v290[7].Unk08; /*0x818622*/
      if ( !v147[7].Unk08 ) /*0x81862b*/
        sub_772560(v147); /*0x81862f*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x818634*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x81863f*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x81864e*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45334); /*0x81865c*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450AC); /*0x818669*/
  if ( !v0->RenderStateGroup ) /*0x81866e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818678*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x818682*/
  if ( !v0->RenderStateGroup ) /*0x818687*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818691*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x81869b*/
  if ( !v0->RenderStateGroup ) /*0x8186a0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8186aa*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8186b5*/
  if ( !v0->RenderStateGroup ) /*0x8186ba*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8186c4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8186cf*/
  if ( !v0->RenderStateGroup ) /*0x8186d4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8186de*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8186e9*/
  if ( !v0->RenderStateGroup ) /*0x8186ee*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8186f8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x818702*/
  v3 = v0 == (NiD3DPass *)unk_B45634; /*0x818707*/
  unk_B43BB0 = 0x40088; /*0x81870d*/
  unk_B44240 = 0xC; /*0x818717*/
  if ( !v3 ) /*0x818721*/
  {
    v3 = v0->RefCount-- == 1; /*0x818723*/
    if ( v3 ) /*0x818727*/
      NiD3DPass_ReleaseToPool(v0); /*0x81872b*/
    v0 = (NiD3DPass *)unk_B45634; /*0x818730*/
    v289 = (NiD3DPassVtbl **)unk_B45634; /*0x818738*/
    if ( v289 ) /*0x81873c*/
      ++v0->RefCount; /*0x81873e*/
  }
  if ( v0->StageCount < 2 ) /*0x818746*/
  {
    v148 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818751*/
    LOBYTE(v291) = 0x32; /*0x81875e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v148); /*0x818763*/
    v149 = v290; /*0x818768*/
    LOBYTE(v291) = 1; /*0x81876e*/
    if ( v290 ) /*0x818773*/
    {
      --v290[7].Unk08; /*0x818775*/
      if ( !v149[7].Unk08 ) /*0x81877e*/
        sub_772560(v149); /*0x818782*/
    }
    v150 = a3; /*0x818787*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x818791*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v150); /*0x8187a0*/
    v151 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8187aa*/
    LOBYTE(v291) = 0x33; /*0x8187b7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v151); /*0x8187bc*/
    v152 = v290; /*0x8187c1*/
    LOBYTE(v291) = 1; /*0x8187c7*/
    if ( v290 ) /*0x8187cc*/
    {
      --v290[7].Unk08; /*0x8187ce*/
      if ( !v152[7].Unk08 ) /*0x8187d7*/
        sub_772560(v152); /*0x8187db*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8187e0*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8187eb*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8187fa*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45338); /*0x818808*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450BC); /*0x818815*/
  if ( !v0->RenderStateGroup ) /*0x81881a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818824*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x81882e*/
  if ( !v0->RenderStateGroup ) /*0x818833*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81883d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x818847*/
  if ( !v0->RenderStateGroup ) /*0x81884c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818856*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x818861*/
  if ( !v0->RenderStateGroup ) /*0x818866*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818870*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x81887b*/
  if ( !v0->RenderStateGroup ) /*0x818880*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81888a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x818895*/
  if ( !v0->RenderStateGroup ) /*0x81889a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8188a4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8188ae*/
  v3 = v0 == (NiD3DPass *)unk_B45698; /*0x8188b3*/
  unk_B43BB4 = 0x40088; /*0x8188b9*/
  unk_B44244 = 0xC; /*0x8188c3*/
  if ( !v3 ) /*0x8188cd*/
  {
    v3 = v0->RefCount-- == 1; /*0x8188cf*/
    if ( v3 ) /*0x8188d3*/
      NiD3DPass_ReleaseToPool(v0); /*0x8188d7*/
    v0 = (NiD3DPass *)unk_B45698; /*0x8188dc*/
    v289 = (NiD3DPassVtbl **)unk_B45698; /*0x8188e4*/
    if ( v289 ) /*0x8188e8*/
      ++v0->RefCount; /*0x8188ea*/
  }
  if ( v0->StageCount < 2 ) /*0x8188f2*/
  {
    v153 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8188fd*/
    LOBYTE(v291) = 0x34; /*0x81890a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v153); /*0x81890f*/
    v154 = v290; /*0x818914*/
    LOBYTE(v291) = 1; /*0x81891a*/
    if ( v290 ) /*0x81891f*/
    {
      --v290[7].Unk08; /*0x818921*/
      if ( !v154[7].Unk08 ) /*0x81892a*/
        sub_772560(v154); /*0x81892e*/
    }
    v155 = a3; /*0x818933*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x81893d*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v155); /*0x81894c*/
    v156 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818956*/
    LOBYTE(v291) = 0x35; /*0x818963*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v156); /*0x818968*/
    v157 = v290; /*0x81896d*/
    LOBYTE(v291) = 1; /*0x818973*/
    if ( v290 ) /*0x818978*/
    {
      --v290[7].Unk08; /*0x81897a*/
      if ( !v157[7].Unk08 ) /*0x818983*/
        sub_772560(v157); /*0x818987*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x81898c*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x818997*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8189a6*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B4533C); /*0x8189b4*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450B0); /*0x8189c1*/
  if ( !v0->RenderStateGroup ) /*0x8189c6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8189d0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8189da*/
  if ( !v0->RenderStateGroup ) /*0x8189df*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8189e9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8189f3*/
  if ( !v0->RenderStateGroup ) /*0x8189f8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818a02*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x818a0d*/
  if ( !v0->RenderStateGroup ) /*0x818a12*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818a1c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x818a27*/
  if ( !v0->RenderStateGroup ) /*0x818a2c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818a36*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x818a41*/
  if ( !v0->RenderStateGroup ) /*0x818a46*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818a50*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x818a5a*/
  v3 = v0 == (NiD3DPass *)unk_B4569C; /*0x818a5f*/
  unk_B43C18 = 0x58088; /*0x818a65*/
  unk_B442A8 = 0xC; /*0x818a6f*/
  unk_B43588 = 0x18000; /*0x818a79*/
  if ( !v3 ) /*0x818a83*/
  {
    v3 = v0->RefCount-- == 1; /*0x818a85*/
    if ( v3 ) /*0x818a89*/
      NiD3DPass_ReleaseToPool(v0); /*0x818a8d*/
    v0 = (NiD3DPass *)unk_B4569C; /*0x818a92*/
    v289 = (NiD3DPassVtbl **)unk_B4569C; /*0x818a9a*/
    if ( v289 ) /*0x818a9e*/
      ++v0->RefCount; /*0x818aa0*/
  }
  if ( v0->StageCount < 2 ) /*0x818aa8*/
  {
    v158 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818ab3*/
    LOBYTE(v291) = 0x36; /*0x818ac0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v158); /*0x818ac5*/
    v159 = v290; /*0x818aca*/
    LOBYTE(v291) = 1; /*0x818ad0*/
    if ( v290 ) /*0x818ad5*/
    {
      --v290[7].Unk08; /*0x818ad7*/
      if ( !v159[7].Unk08 ) /*0x818ae0*/
        sub_772560(v159); /*0x818ae4*/
    }
    v160 = a3; /*0x818ae9*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x818af3*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v160); /*0x818b02*/
    v161 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818b0c*/
    LOBYTE(v291) = 0x37; /*0x818b19*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v161); /*0x818b1e*/
    v162 = v290; /*0x818b23*/
    LOBYTE(v291) = 1; /*0x818b29*/
    if ( v290 ) /*0x818b2e*/
    {
      --v290[7].Unk08; /*0x818b30*/
      if ( !v162[7].Unk08 ) /*0x818b39*/
        sub_772560(v162); /*0x818b3d*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x818b42*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x818b4d*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x818b5c*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45340); /*0x818b6a*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B450C0); /*0x818b77*/
  if ( !v0->RenderStateGroup ) /*0x818b7c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818b86*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x818b90*/
  if ( !v0->RenderStateGroup ) /*0x818b95*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818b9f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x818ba9*/
  if ( !v0->RenderStateGroup ) /*0x818bae*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818bb8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x818bc3*/
  if ( !v0->RenderStateGroup ) /*0x818bc8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818bd2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x818bdd*/
  if ( !v0->RenderStateGroup ) /*0x818be2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818bec*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x818bf7*/
  if ( !v0->RenderStateGroup ) /*0x818bfc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818c06*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x818c10*/
  unk_B43C1C = 0x58088; /*0x818c1e*/
  unk_B442AC = 0xC; /*0x818c28*/
  unk_B4358C = 0x18000; /*0x818c32*/
  sub_76C890((NiD3DPass **)&v289, (NiD3DPass **)&unk_B45638); /*0x818c3c*/
  v163 = (NiD3DPass *)v289; /*0x818c41*/
  if ( (unsigned int)v289[6] < 3 ) /*0x818c49*/
  {
    v164 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818c54*/
    LOBYTE(v291) = 0x38; /*0x818c61*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v164); /*0x818c66*/
    v165 = v290; /*0x818c6b*/
    LOBYTE(v291) = 1; /*0x818c71*/
    if ( v290 ) /*0x818c76*/
    {
      --v290[7].Unk08; /*0x818c78*/
      if ( !v165[7].Unk08 ) /*0x818c81*/
        sub_772560(v165); /*0x818c85*/
    }
    v166 = a3; /*0x818c8a*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x818c94*/
    NiD3DPass_SetTextureStage(v163, v163->CurrentStage, v166); /*0x818ca3*/
    v167 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818cad*/
    LOBYTE(v291) = 0x39; /*0x818cba*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v167); /*0x818cbf*/
    v168 = v290; /*0x818cc4*/
    LOBYTE(v291) = 1; /*0x818cca*/
    if ( v290 ) /*0x818ccf*/
    {
      --v290[7].Unk08; /*0x818cd1*/
      if ( !v168[7].Unk08 ) /*0x818cda*/
        sub_772560(v168); /*0x818cde*/
    }
    v169 = a3; /*0x818ce3*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x818cee*/
    NiD3DPass_SetTextureStage(v163, v163->CurrentStage, v169); /*0x818cfd*/
    v170 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818d07*/
    LOBYTE(v291) = 0x3A; /*0x818d14*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v170); /*0x818d19*/
    v171 = v290; /*0x818d1e*/
    LOBYTE(v291) = 1; /*0x818d24*/
    if ( v290 ) /*0x818d29*/
    {
      --v290[7].Unk08; /*0x818d2b*/
      if ( !v171[7].Unk08 ) /*0x818d34*/
        sub_772560(v171); /*0x818d38*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x818d3d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x818d48*/
    NiD3DPass_SetTextureStage(v163, v163->CurrentStage, &v1->Stage); /*0x818d57*/
  }
  NiD3DPass_SetVertexShader(v163, (NiD3DVertexShader *)unk_B45334); /*0x818d65*/
  NiD3DPass_SetPixelShader(v163, (NiD3DPixelShader *)unk_B450DC); /*0x818d73*/
  if ( !v163->RenderStateGroup ) /*0x818d78*/
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818d82*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v163->RenderStateGroup, 0x1B, 0, 0); /*0x818d8c*/
  if ( !v163->RenderStateGroup ) /*0x818d91*/
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818d9b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v163->RenderStateGroup, 0xF, 0, 0); /*0x818da5*/
  if ( !v163->RenderStateGroup ) /*0x818daa*/
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818db4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v163->RenderStateGroup, 7, 1, 0); /*0x818dbf*/
  if ( !v163->RenderStateGroup ) /*0x818dc4*/
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818dce*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v163->RenderStateGroup, 0x17, 4, 0); /*0x818dd9*/
  if ( !v163->RenderStateGroup ) /*0x818dde*/
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818de8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v163->RenderStateGroup, 0xE, 1, 0); /*0x818df3*/
  if ( !v163->RenderStateGroup ) /*0x818df8*/
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818e02*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v163->RenderStateGroup, 0x34, 0, 0); /*0x818e0c*/
  unk_B43BB8 = 0x40088; /*0x818e1a*/
  unk_B44248 = 0x8C; /*0x818e24*/
  unk_B448D8 = 4; /*0x818e2e*/
  sub_76C890((NiD3DPass **)&v289, &dword_B456A0); /*0x818e38*/
  v172 = (NiD3DPass *)v289; /*0x818e3d*/
  if ( (unsigned int)v289[6] < 3 ) /*0x818e45*/
  {
    v173 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818e50*/
    LOBYTE(v291) = 0x3B; /*0x818e5d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v173); /*0x818e62*/
    v174 = v290; /*0x818e67*/
    LOBYTE(v291) = 1; /*0x818e6d*/
    if ( v290 ) /*0x818e72*/
    {
      --v290[7].Unk08; /*0x818e74*/
      if ( !v174[7].Unk08 ) /*0x818e7d*/
        sub_772560(v174); /*0x818e81*/
    }
    v175 = a3; /*0x818e86*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x818e90*/
    NiD3DPass_SetTextureStage(v172, v172->CurrentStage, v175); /*0x818e9f*/
    v176 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818ea9*/
    LOBYTE(v291) = 0x3C; /*0x818eb6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v176); /*0x818ebb*/
    v177 = v290; /*0x818ec0*/
    LOBYTE(v291) = 1; /*0x818ec6*/
    if ( v290 ) /*0x818ecb*/
    {
      --v290[7].Unk08; /*0x818ecd*/
      if ( !v177[7].Unk08 ) /*0x818ed6*/
        sub_772560(v177); /*0x818eda*/
    }
    v178 = a3; /*0x818edf*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x818eea*/
    NiD3DPass_SetTextureStage(v172, v172->CurrentStage, v178); /*0x818ef9*/
    v179 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x818f03*/
    LOBYTE(v291) = 0x3D; /*0x818f10*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v179); /*0x818f15*/
    v180 = v290; /*0x818f1a*/
    LOBYTE(v291) = 1; /*0x818f20*/
    if ( v290 ) /*0x818f25*/
    {
      --v290[7].Unk08; /*0x818f27*/
      if ( !v180[7].Unk08 ) /*0x818f30*/
        sub_772560(v180); /*0x818f34*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x818f39*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x818f44*/
    NiD3DPass_SetTextureStage(v172, v172->CurrentStage, &v1->Stage); /*0x818f53*/
  }
  NiD3DPass_SetVertexShader(v172, (NiD3DVertexShader *)unk_B4533C); /*0x818f60*/
  NiD3DPass_SetPixelShader(v172, (NiD3DPixelShader *)unk_B450E0); /*0x818f6e*/
  if ( !v172->RenderStateGroup ) /*0x818f73*/
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818f7d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v172->RenderStateGroup, 0x1B, 0, 0); /*0x818f87*/
  if ( !v172->RenderStateGroup ) /*0x818f8c*/
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818f96*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v172->RenderStateGroup, 0xF, 0, 0); /*0x818fa0*/
  if ( !v172->RenderStateGroup ) /*0x818fa5*/
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818faf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v172->RenderStateGroup, 7, 1, 0); /*0x818fba*/
  if ( !v172->RenderStateGroup ) /*0x818fbf*/
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818fc9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v172->RenderStateGroup, 0x17, 4, 0); /*0x818fd4*/
  if ( !v172->RenderStateGroup ) /*0x818fd9*/
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818fe3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v172->RenderStateGroup, 0xE, 1, 0); /*0x818fee*/
  if ( !v172->RenderStateGroup ) /*0x818ff3*/
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x818ffd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v172->RenderStateGroup, 0x34, 0, 0); /*0x819007*/
  unk_B43C20 = 0x58088; /*0x819015*/
  unk_B442B0 = 0x8C; /*0x81901f*/
  unk_B43590 = 0x18000; /*0x819029*/
  unk_B44940 = 4; /*0x819033*/
  sub_76C890((NiD3DPass **)&v289, &dword_B456A4); /*0x81903d*/
  v181 = (NiD3DPass *)v289; /*0x819042*/
  if ( (unsigned int)v289[6] < 3 ) /*0x81904a*/
  {
    v182 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819055*/
    LOBYTE(v291) = 0x3E; /*0x819062*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v182); /*0x819067*/
    v183 = v290; /*0x81906c*/
    LOBYTE(v291) = 1; /*0x819072*/
    if ( v290 ) /*0x819077*/
    {
      --v290[7].Unk08; /*0x819079*/
      if ( !v183[7].Unk08 ) /*0x819082*/
        sub_772560(v183); /*0x819086*/
    }
    v184 = a3; /*0x81908b*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x819095*/
    NiD3DPass_SetTextureStage(v181, v181->CurrentStage, v184); /*0x8190a4*/
    v185 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8190ae*/
    LOBYTE(v291) = 0x3F; /*0x8190bb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v185); /*0x8190c0*/
    v186 = v290; /*0x8190c5*/
    LOBYTE(v291) = 1; /*0x8190cb*/
    if ( v290 ) /*0x8190d0*/
    {
      --v290[7].Unk08; /*0x8190d2*/
      if ( !v186[7].Unk08 ) /*0x8190db*/
        sub_772560(v186); /*0x8190df*/
    }
    v187 = a3; /*0x8190e4*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8190ef*/
    NiD3DPass_SetTextureStage(v181, v181->CurrentStage, v187); /*0x8190fe*/
    v188 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819108*/
    LOBYTE(v291) = 0x40; /*0x819115*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v188); /*0x81911a*/
    v189 = v290; /*0x81911f*/
    LOBYTE(v291) = 1; /*0x819125*/
    if ( v290 ) /*0x81912a*/
    {
      --v290[7].Unk08; /*0x81912c*/
      if ( !v189[7].Unk08 ) /*0x819135*/
        sub_772560(v189); /*0x819139*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x81913e*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x819149*/
    NiD3DPass_SetTextureStage(v181, v181->CurrentStage, &v1->Stage); /*0x819158*/
  }
  NiD3DPass_SetVertexShader(v181, (NiD3DVertexShader *)unk_B45340); /*0x819166*/
  NiD3DPass_SetPixelShader(v181, (NiD3DPixelShader *)unk_B450F0); /*0x819173*/
  if ( !v181->RenderStateGroup ) /*0x819178*/
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819182*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v181->RenderStateGroup, 0x1B, 0, 0); /*0x81918c*/
  if ( !v181->RenderStateGroup ) /*0x819191*/
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81919b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v181->RenderStateGroup, 0xF, 0, 0); /*0x8191a5*/
  if ( !v181->RenderStateGroup ) /*0x8191aa*/
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8191b4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v181->RenderStateGroup, 7, 1, 0); /*0x8191bf*/
  if ( !v181->RenderStateGroup ) /*0x8191c4*/
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8191ce*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v181->RenderStateGroup, 0x17, 4, 0); /*0x8191dd*/
  if ( !v181->RenderStateGroup ) /*0x8191e2*/
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8191ec*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v181->RenderStateGroup, 0xE, 1, 0); /*0x8191f7*/
  if ( !v181->RenderStateGroup ) /*0x8191fc*/
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819206*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v181->RenderStateGroup, 0x34, 0, 0); /*0x819210*/
  unk_B43C20 = 0x58088; /*0x81921e*/
  unk_B442B0 = 0x8C; /*0x819228*/
  unk_B43590 = 0x18000; /*0x819232*/
  unk_B44940 = 4; /*0x81923c*/
  sub_76C890((NiD3DPass **)&v289, &dword_B45640); /*0x819242*/
  v190 = (NiD3DPass *)v289; /*0x819247*/
  if ( (unsigned int)v289[6] < 4 ) /*0x81924e*/
  {
    v191 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819259*/
    LOBYTE(v291) = 0x41; /*0x819266*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v191); /*0x81926b*/
    v192 = v290; /*0x819270*/
    LOBYTE(v291) = 1; /*0x819276*/
    if ( v290 ) /*0x81927b*/
    {
      --v290[7].Unk08; /*0x81927d*/
      if ( !v192[7].Unk08 ) /*0x819286*/
        sub_772560(v192); /*0x81928a*/
    }
    v193 = a3; /*0x81928f*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x819299*/
    NiD3DPass_SetTextureStage(v190, v190->CurrentStage, v193); /*0x8192a8*/
    v194 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8192b2*/
    LOBYTE(v291) = 0x42; /*0x8192bf*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v194); /*0x8192c4*/
    v195 = v290; /*0x8192c9*/
    LOBYTE(v291) = 1; /*0x8192cf*/
    if ( v290 ) /*0x8192d4*/
    {
      --v290[7].Unk08; /*0x8192d6*/
      if ( !v195[7].Unk08 ) /*0x8192df*/
        sub_772560(v195); /*0x8192e3*/
    }
    v196 = a3; /*0x8192e8*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8192f3*/
    NiD3DPass_SetTextureStage(v190, v190->CurrentStage, v196); /*0x819302*/
    v197 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81930c*/
    LOBYTE(v291) = 0x43; /*0x819319*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v197); /*0x81931e*/
    v198 = v290; /*0x819323*/
    LOBYTE(v291) = 1; /*0x819329*/
    if ( v290 ) /*0x81932e*/
    {
      --v290[7].Unk08; /*0x819330*/
      if ( !v198[7].Unk08 ) /*0x819339*/
        sub_772560(v198); /*0x81933d*/
    }
    v199 = a3; /*0x819342*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x81934d*/
    NiD3DPass_SetTextureStage(v190, v190->CurrentStage, v199); /*0x81935c*/
    v200 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819366*/
    LOBYTE(v291) = 0x44; /*0x819373*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v200); /*0x819378*/
    v201 = v290; /*0x81937d*/
    LOBYTE(v291) = 1; /*0x819383*/
    if ( v290 ) /*0x819388*/
    {
      --v290[7].Unk08; /*0x81938a*/
      if ( !v201[7].Unk08 ) /*0x819393*/
        sub_772560(v201); /*0x819397*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x81939c*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8193a7*/
    NiD3DPass_SetTextureStage(v190, v190->CurrentStage, &v1->Stage); /*0x8193b6*/
  }
  NiD3DPass_SetVertexShader(v190, (NiD3DVertexShader *)unk_B45344); /*0x8193c3*/
  NiD3DPass_SetPixelShader(v190, (NiD3DPixelShader *)unk_B450CC); /*0x8193d1*/
  if ( !v190->RenderStateGroup ) /*0x8193d6*/
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8193e0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v190->RenderStateGroup, 0x1B, 0, 0); /*0x8193ea*/
  if ( !v190->RenderStateGroup ) /*0x8193ef*/
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8193f9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v190->RenderStateGroup, 0xF, 0, 0); /*0x819403*/
  if ( !v190->RenderStateGroup ) /*0x819408*/
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819412*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v190->RenderStateGroup, 7, 1, 0); /*0x81941d*/
  if ( !v190->RenderStateGroup ) /*0x819422*/
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81942c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v190->RenderStateGroup, 0x17, 4, 0); /*0x819437*/
  if ( !v190->RenderStateGroup ) /*0x81943c*/
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819446*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v190->RenderStateGroup, 0xE, 1, 0); /*0x819451*/
  if ( !v190->RenderStateGroup ) /*0x819456*/
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819460*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v190->RenderStateGroup, 0x34, 0, 0); /*0x81946a*/
  unk_B43BC0 = 0x40088; /*0x819478*/
  unk_B44250 = 0xC; /*0x819482*/
  sub_76C890((NiD3DPass **)&v289, &dword_B456B0); /*0x81948c*/
  v202 = (NiD3DPass *)v289; /*0x819491*/
  if ( (unsigned int)v289[6] < 4 ) /*0x819499*/
  {
    v203 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8194a4*/
    LOBYTE(v291) = 0x45; /*0x8194b1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v203); /*0x8194b6*/
    v204 = v290; /*0x8194bb*/
    LOBYTE(v291) = 1; /*0x8194c1*/
    if ( v290 ) /*0x8194c6*/
    {
      --v290[7].Unk08; /*0x8194c8*/
      if ( !v204[7].Unk08 ) /*0x8194d1*/
        sub_772560(v204); /*0x8194d5*/
    }
    v205 = a3; /*0x8194da*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8194e4*/
    NiD3DPass_SetTextureStage(v202, v202->CurrentStage, v205); /*0x8194f3*/
    v206 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8194fd*/
    LOBYTE(v291) = 0x46; /*0x81950a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v206); /*0x81950f*/
    v207 = v290; /*0x819514*/
    LOBYTE(v291) = 1; /*0x81951a*/
    if ( v290 ) /*0x81951f*/
    {
      --v290[7].Unk08; /*0x819521*/
      if ( !v207[7].Unk08 ) /*0x81952a*/
        sub_772560(v207); /*0x81952e*/
    }
    v208 = a3; /*0x819533*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x81953e*/
    NiD3DPass_SetTextureStage(v202, v202->CurrentStage, v208); /*0x81954d*/
    v209 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819557*/
    LOBYTE(v291) = 0x47; /*0x819564*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v209); /*0x819569*/
    v210 = v290; /*0x81956e*/
    LOBYTE(v291) = 1; /*0x819574*/
    if ( v290 ) /*0x819579*/
    {
      --v290[7].Unk08; /*0x81957b*/
      if ( !v210[7].Unk08 ) /*0x819584*/
        sub_772560(v210); /*0x819588*/
    }
    v211 = a3; /*0x81958d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x819598*/
    NiD3DPass_SetTextureStage(v202, v202->CurrentStage, v211); /*0x8195a7*/
    v212 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8195b1*/
    LOBYTE(v291) = 0x48; /*0x8195be*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v212); /*0x8195c3*/
    v213 = v290; /*0x8195c8*/
    LOBYTE(v291) = 1; /*0x8195ce*/
    if ( v290 ) /*0x8195d3*/
    {
      --v290[7].Unk08; /*0x8195d5*/
      if ( !v213[7].Unk08 ) /*0x8195de*/
        sub_772560(v213); /*0x8195e2*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8195e7*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8195f2*/
    NiD3DPass_SetTextureStage(v202, v202->CurrentStage, &v1->Stage); /*0x819601*/
  }
  NiD3DPass_SetVertexShader(v202, (NiD3DVertexShader *)unk_B45348); /*0x81960f*/
  NiD3DPass_SetPixelShader(v202, (NiD3DPixelShader *)unk_B450D0); /*0x81961d*/
  if ( !v202->RenderStateGroup ) /*0x819622*/
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81962c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v202->RenderStateGroup, 0x1B, 0, 0); /*0x819636*/
  if ( !v202->RenderStateGroup ) /*0x81963b*/
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819645*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v202->RenderStateGroup, 0xF, 0, 0); /*0x81964f*/
  if ( !v202->RenderStateGroup ) /*0x819654*/
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81965e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v202->RenderStateGroup, 7, 1, 0); /*0x819669*/
  if ( !v202->RenderStateGroup ) /*0x81966e*/
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819678*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v202->RenderStateGroup, 0x17, 4, 0); /*0x819683*/
  if ( !v202->RenderStateGroup ) /*0x819688*/
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819692*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v202->RenderStateGroup, 0xE, 1, 0); /*0x81969d*/
  if ( !v202->RenderStateGroup ) /*0x8196a2*/
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8196ac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v202->RenderStateGroup, 0x34, 0, 0); /*0x8196b6*/
  unk_B43C30 = 0x58088; /*0x8196c4*/
  unk_B442C0 = 0xC; /*0x8196ce*/
  unk_B435A0 = 0x18000; /*0x8196d8*/
  sub_76C890((NiD3DPass **)&v289, &dword_B45644); /*0x8196e2*/
  v214 = (NiD3DPass *)v289; /*0x8196e7*/
  if ( (unsigned int)v289[6] < 2 ) /*0x8196ef*/
  {
    v215 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8196fa*/
    LOBYTE(v291) = 0x49; /*0x819707*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v215); /*0x81970c*/
    v216 = v290; /*0x819711*/
    LOBYTE(v291) = 1; /*0x819717*/
    if ( v290 ) /*0x81971c*/
    {
      --v290[7].Unk08; /*0x81971e*/
      if ( !v216[7].Unk08 ) /*0x819727*/
        sub_772560(v216); /*0x81972b*/
    }
    v217 = a3; /*0x819730*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x81973a*/
    NiD3DPass_SetTextureStage(v214, v214->CurrentStage, v217); /*0x819749*/
    v218 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819753*/
    LOBYTE(v291) = 0x4A; /*0x819760*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v218); /*0x819765*/
    v219 = v290; /*0x81976a*/
    LOBYTE(v291) = 1; /*0x819770*/
    if ( v290 ) /*0x819775*/
    {
      --v290[7].Unk08; /*0x819777*/
      if ( !v219[7].Unk08 ) /*0x819780*/
        sub_772560(v219); /*0x819784*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x819789*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x819794*/
    NiD3DPass_SetTextureStage(v214, v214->CurrentStage, &v1->Stage); /*0x8197a3*/
  }
  NiD3DPass_SetVertexShader(v214, (NiD3DVertexShader *)unk_B45334); /*0x8197b1*/
  NiD3DPass_SetPixelShader(v214, (NiD3DPixelShader *)unk_B450B4); /*0x8197bf*/
  if ( !v214->RenderStateGroup ) /*0x8197c4*/
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8197ce*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v214->RenderStateGroup, 0x1B, 1, 0); /*0x8197d9*/
  if ( !v214->RenderStateGroup ) /*0x8197de*/
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8197e8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v214->RenderStateGroup, 0x13, 5, 0); /*0x8197f3*/
  if ( !v214->RenderStateGroup ) /*0x8197f8*/
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819802*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v214->RenderStateGroup, 0x14, 6, 0); /*0x81980d*/
  if ( !v214->RenderStateGroup ) /*0x819812*/
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81981c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v214->RenderStateGroup, 0xF, 1, 0); /*0x819827*/
  if ( !v214->RenderStateGroup ) /*0x81982c*/
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819836*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v214->RenderStateGroup, 7, 1, 0); /*0x819841*/
  if ( !v214->RenderStateGroup ) /*0x819846*/
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819850*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v214->RenderStateGroup, 0x17, 4, 0); /*0x81985b*/
  if ( !v214->RenderStateGroup ) /*0x819860*/
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81986a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v214->RenderStateGroup, 0xE, 1, 0); /*0x819875*/
  if ( !v214->RenderStateGroup ) /*0x81987a*/
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819884*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v214->RenderStateGroup, 0x34, 0, 0); /*0x81988e*/
  unk_B43BC4 = 0x40088; /*0x81989c*/
  unk_B44254 = 0xC; /*0x8198a6*/
  sub_76C890((NiD3DPass **)&v289, &dword_B45648); /*0x8198b0*/
  v220 = (NiD3DPass *)v289; /*0x8198b5*/
  if ( (unsigned int)v289[6] < 2 ) /*0x8198bd*/
  {
    v221 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x8198c8*/
    LOBYTE(v291) = 0x4B; /*0x8198d5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v221); /*0x8198da*/
    v222 = v290; /*0x8198df*/
    LOBYTE(v291) = 1; /*0x8198e5*/
    if ( v290 ) /*0x8198ea*/
    {
      --v290[7].Unk08; /*0x8198ec*/
      if ( !v222[7].Unk08 ) /*0x8198f5*/
        sub_772560(v222); /*0x8198f9*/
    }
    v223 = a3; /*0x8198fe*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x819908*/
    NiD3DPass_SetTextureStage(v220, v220->CurrentStage, v223); /*0x819917*/
    v224 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819921*/
    LOBYTE(v291) = 0x4C; /*0x81992e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v224); /*0x819933*/
    v225 = v290; /*0x819938*/
    LOBYTE(v291) = 1; /*0x81993e*/
    if ( v290 ) /*0x819943*/
    {
      --v290[7].Unk08; /*0x819945*/
      if ( !v225[7].Unk08 ) /*0x81994e*/
        sub_772560(v225); /*0x819952*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x819957*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x819962*/
    NiD3DPass_SetTextureStage(v220, v220->CurrentStage, &v1->Stage); /*0x819971*/
  }
  NiD3DPass_SetVertexShader(v220, (NiD3DVertexShader *)unk_B45338); /*0x81997f*/
  NiD3DPass_SetPixelShader(v220, (NiD3DPixelShader *)unk_B450C4); /*0x81998d*/
  if ( !v220->RenderStateGroup ) /*0x819992*/
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81999c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v220->RenderStateGroup, 0x1B, 1, 0); /*0x8199a7*/
  if ( !v220->RenderStateGroup ) /*0x8199ac*/
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8199b6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v220->RenderStateGroup, 0x13, 5, 0); /*0x8199c1*/
  if ( !v220->RenderStateGroup ) /*0x8199c6*/
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8199d0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v220->RenderStateGroup, 0x14, 6, 0); /*0x8199db*/
  if ( !v220->RenderStateGroup ) /*0x8199e0*/
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8199ea*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v220->RenderStateGroup, 0xF, 1, 0); /*0x8199f5*/
  if ( !v220->RenderStateGroup ) /*0x8199fa*/
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819a04*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v220->RenderStateGroup, 7, 1, 0); /*0x819a0f*/
  if ( !v220->RenderStateGroup ) /*0x819a14*/
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819a1e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v220->RenderStateGroup, 0x17, 4, 0); /*0x819a29*/
  if ( !v220->RenderStateGroup ) /*0x819a2e*/
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819a38*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v220->RenderStateGroup, 0xE, 1, 0); /*0x819a43*/
  if ( !v220->RenderStateGroup ) /*0x819a48*/
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819a52*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v220->RenderStateGroup, 0x34, 0, 0); /*0x819a5c*/
  unk_B43BC8 = 0x40088; /*0x819a6a*/
  unk_B44258 = 0xC; /*0x819a74*/
  sub_76C890((NiD3DPass **)&v289, &dword_B456A8); /*0x819a7e*/
  v226 = (NiD3DPass *)v289; /*0x819a83*/
  if ( (unsigned int)v289[6] < 2 ) /*0x819a8b*/
  {
    v227 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819a96*/
    LOBYTE(v291) = 0x4D; /*0x819aa3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v227); /*0x819aa8*/
    v228 = v290; /*0x819aad*/
    LOBYTE(v291) = 1; /*0x819ab3*/
    if ( v290 ) /*0x819ab8*/
    {
      --v290[7].Unk08; /*0x819aba*/
      if ( !v228[7].Unk08 ) /*0x819ac3*/
        sub_772560(v228); /*0x819ac7*/
    }
    v229 = a3; /*0x819acc*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x819ad6*/
    NiD3DPass_SetTextureStage(v226, v226->CurrentStage, v229); /*0x819ae5*/
    v230 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819aef*/
    LOBYTE(v291) = 0x4E; /*0x819afc*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v230); /*0x819b01*/
    v231 = v290; /*0x819b06*/
    LOBYTE(v291) = 1; /*0x819b0c*/
    if ( v290 ) /*0x819b11*/
    {
      --v290[7].Unk08; /*0x819b13*/
      if ( !v231[7].Unk08 ) /*0x819b1c*/
        sub_772560(v231); /*0x819b20*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x819b25*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x819b30*/
    NiD3DPass_SetTextureStage(v226, v226->CurrentStage, &v1->Stage); /*0x819b3f*/
  }
  NiD3DPass_SetVertexShader(v226, (NiD3DVertexShader *)unk_B4533C); /*0x819b4d*/
  NiD3DPass_SetPixelShader(v226, (NiD3DPixelShader *)unk_B450B8); /*0x819b5b*/
  if ( !v226->RenderStateGroup ) /*0x819b60*/
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819b6a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v226->RenderStateGroup, 0x1B, 0, 0); /*0x819b74*/
  if ( !v226->RenderStateGroup ) /*0x819b79*/
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819b83*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v226->RenderStateGroup, 0x13, 5, 0); /*0x819b8e*/
  if ( !v226->RenderStateGroup ) /*0x819b93*/
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819b9d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v226->RenderStateGroup, 0x14, 6, 0); /*0x819ba8*/
  if ( !v226->RenderStateGroup ) /*0x819bad*/
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819bb7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v226->RenderStateGroup, 0xF, 1, 0); /*0x819bc2*/
  if ( !v226->RenderStateGroup ) /*0x819bc7*/
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819bd1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v226->RenderStateGroup, 7, 1, 0); /*0x819bdc*/
  if ( !v226->RenderStateGroup ) /*0x819be1*/
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819beb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v226->RenderStateGroup, 0x17, 4, 0); /*0x819bf6*/
  if ( !v226->RenderStateGroup ) /*0x819bfb*/
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819c05*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v226->RenderStateGroup, 0xE, 1, 0); /*0x819c10*/
  if ( !v226->RenderStateGroup ) /*0x819c15*/
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819c1f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v226->RenderStateGroup, 0x34, 0, 0); /*0x819c29*/
  unk_B43C28 = 0x58088; /*0x819c37*/
  unk_B442B8 = 0xC; /*0x819c41*/
  unk_B43598 = 0x18000; /*0x819c4b*/
  sub_76C890((NiD3DPass **)&v289, &dword_B456AC); /*0x819c55*/
  v232 = (NiD3DPass *)v289; /*0x819c5a*/
  if ( (unsigned int)v289[6] < 2 ) /*0x819c62*/
  {
    v233 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819c6d*/
    LOBYTE(v291) = 0x4F; /*0x819c7a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v233); /*0x819c7f*/
    v234 = v290; /*0x819c84*/
    LOBYTE(v291) = 1; /*0x819c8a*/
    if ( v290 ) /*0x819c8f*/
    {
      --v290[7].Unk08; /*0x819c91*/
      if ( !v234[7].Unk08 ) /*0x819c9a*/
        sub_772560(v234); /*0x819c9e*/
    }
    v235 = a3; /*0x819ca3*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x819cad*/
    NiD3DPass_SetTextureStage(v232, v232->CurrentStage, v235); /*0x819cbc*/
    v236 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819cc6*/
    LOBYTE(v291) = 0x50; /*0x819cd3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v236); /*0x819cd8*/
    v237 = v290; /*0x819cdd*/
    LOBYTE(v291) = 1; /*0x819ce3*/
    if ( v290 ) /*0x819ce8*/
    {
      --v290[7].Unk08; /*0x819cea*/
      if ( !v237[7].Unk08 ) /*0x819cf3*/
        sub_772560(v237); /*0x819cf7*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x819cfc*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x819d07*/
    NiD3DPass_SetTextureStage(v232, v232->CurrentStage, &v1->Stage); /*0x819d16*/
  }
  NiD3DPass_SetVertexShader(v232, (NiD3DVertexShader *)unk_B45340); /*0x819d24*/
  NiD3DPass_SetPixelShader(v232, (NiD3DPixelShader *)unk_B450C8); /*0x819d32*/
  if ( !v232->RenderStateGroup ) /*0x819d37*/
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819d41*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v232->RenderStateGroup, 0x1B, 0, 0); /*0x819d4b*/
  if ( !v232->RenderStateGroup ) /*0x819d50*/
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819d5a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v232->RenderStateGroup, 0x13, 5, 0); /*0x819d65*/
  if ( !v232->RenderStateGroup ) /*0x819d6a*/
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819d74*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v232->RenderStateGroup, 0x14, 6, 0); /*0x819d7f*/
  if ( !v232->RenderStateGroup ) /*0x819d84*/
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819d8e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v232->RenderStateGroup, 0xF, 1, 0); /*0x819d99*/
  if ( !v232->RenderStateGroup ) /*0x819d9e*/
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819da8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v232->RenderStateGroup, 7, 1, 0); /*0x819db3*/
  if ( !v232->RenderStateGroup ) /*0x819db8*/
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819dc2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v232->RenderStateGroup, 0x17, 4, 0); /*0x819dcd*/
  if ( !v232->RenderStateGroup ) /*0x819dd2*/
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819ddc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v232->RenderStateGroup, 0xE, 1, 0); /*0x819de7*/
  if ( !v232->RenderStateGroup ) /*0x819dec*/
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819df6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v232->RenderStateGroup, 0x34, 0, 0); /*0x819e00*/
  unk_B43C2C = 0x58088; /*0x819e0e*/
  unk_B442BC = 0xC; /*0x819e18*/
  unk_B4359C = 0x18000; /*0x819e22*/
  sub_76C890((NiD3DPass **)&v289, &dword_B4564C); /*0x819e2c*/
  v238 = (NiD3DPass *)v289; /*0x819e31*/
  if ( (unsigned int)v289[6] < 3 ) /*0x819e39*/
  {
    v239 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819e44*/
    LOBYTE(v291) = 0x51; /*0x819e51*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v239); /*0x819e56*/
    v240 = v290; /*0x819e5b*/
    LOBYTE(v291) = 1; /*0x819e61*/
    if ( v290 ) /*0x819e66*/
    {
      --v290[7].Unk08; /*0x819e68*/
      if ( !v240[7].Unk08 ) /*0x819e71*/
        sub_772560(v240); /*0x819e75*/
    }
    v241 = a3; /*0x819e7a*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x819e84*/
    NiD3DPass_SetTextureStage(v238, v238->CurrentStage, v241); /*0x819e93*/
    v242 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819e9d*/
    LOBYTE(v291) = 0x52; /*0x819eaa*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v242); /*0x819eaf*/
    v243 = v290; /*0x819eb4*/
    LOBYTE(v291) = 1; /*0x819eba*/
    if ( v290 ) /*0x819ebf*/
    {
      --v290[7].Unk08; /*0x819ec1*/
      if ( !v243[7].Unk08 ) /*0x819eca*/
        sub_772560(v243); /*0x819ece*/
    }
    v244 = a3; /*0x819ed3*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x819ede*/
    NiD3DPass_SetTextureStage(v238, v238->CurrentStage, v244); /*0x819eed*/
    v245 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x819ef7*/
    LOBYTE(v291) = 0x53; /*0x819f04*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v245); /*0x819f09*/
    v246 = v290; /*0x819f0e*/
    LOBYTE(v291) = 1; /*0x819f14*/
    if ( v290 ) /*0x819f19*/
    {
      --v290[7].Unk08; /*0x819f1b*/
      if ( !v246[7].Unk08 ) /*0x819f24*/
        sub_772560(v246); /*0x819f28*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x819f2d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x819f38*/
    NiD3DPass_SetTextureStage(v238, v238->CurrentStage, &v1->Stage); /*0x819f47*/
  }
  NiD3DPass_SetVertexShader(v238, (NiD3DVertexShader *)unk_B45334); /*0x819f54*/
  NiD3DPass_SetPixelShader(v238, (NiD3DPixelShader *)unk_B450E4); /*0x819f62*/
  if ( !v238->RenderStateGroup ) /*0x819f67*/
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819f71*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v238->RenderStateGroup, 0x1B, 1, 0); /*0x819f7c*/
  if ( !v238->RenderStateGroup ) /*0x819f81*/
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819f8b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v238->RenderStateGroup, 0x13, 5, 0); /*0x819f96*/
  if ( !v238->RenderStateGroup ) /*0x819f9b*/
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819fa5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v238->RenderStateGroup, 0x14, 6, 0); /*0x819fb0*/
  if ( !v238->RenderStateGroup ) /*0x819fb5*/
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819fbf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v238->RenderStateGroup, 0xF, 1, 0); /*0x819fca*/
  if ( !v238->RenderStateGroup ) /*0x819fcf*/
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819fd9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v238->RenderStateGroup, 7, 1, 0); /*0x819fe4*/
  if ( !v238->RenderStateGroup ) /*0x819fe9*/
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x819ff3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v238->RenderStateGroup, 0x17, 4, 0); /*0x819ffe*/
  if ( !v238->RenderStateGroup ) /*0x81a003*/
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a00d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v238->RenderStateGroup, 0xE, 1, 0); /*0x81a018*/
  if ( !v238->RenderStateGroup ) /*0x81a01d*/
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a027*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v238->RenderStateGroup, 0x34, 0, 0); /*0x81a031*/
  unk_B43BCC = 0x40088; /*0x81a03f*/
  unk_B4425C = 0x8C; /*0x81a049*/
  unk_B448EC = 4; /*0x81a053*/
  sub_76C890((NiD3DPass **)&v289, &dword_B45650); /*0x81a05d*/
  v247 = (NiD3DPass *)v289; /*0x81a062*/
  if ( (unsigned int)v289[6] < 3 ) /*0x81a06a*/
  {
    v248 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a075*/
    LOBYTE(v291) = 0x54; /*0x81a082*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v248); /*0x81a087*/
    v249 = v290; /*0x81a08c*/
    LOBYTE(v291) = 1; /*0x81a092*/
    if ( v290 ) /*0x81a097*/
    {
      --v290[7].Unk08; /*0x81a099*/
      if ( !v249[7].Unk08 ) /*0x81a0a2*/
        sub_772560(v249); /*0x81a0a6*/
    }
    v250 = a3; /*0x81a0ab*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x81a0b5*/
    NiD3DPass_SetTextureStage(v247, v247->CurrentStage, v250); /*0x81a0c4*/
    v251 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a0ce*/
    LOBYTE(v291) = 0x55; /*0x81a0db*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v251); /*0x81a0e0*/
    v252 = v290; /*0x81a0e5*/
    LOBYTE(v291) = 1; /*0x81a0eb*/
    if ( v290 ) /*0x81a0f0*/
    {
      --v290[7].Unk08; /*0x81a0f2*/
      if ( !v252[7].Unk08 ) /*0x81a0fb*/
        sub_772560(v252); /*0x81a0ff*/
    }
    v253 = a3; /*0x81a104*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x81a10f*/
    NiD3DPass_SetTextureStage(v247, v247->CurrentStage, v253); /*0x81a11e*/
    v254 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a128*/
    LOBYTE(v291) = 0x56; /*0x81a135*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v254); /*0x81a13a*/
    v255 = v290; /*0x81a13f*/
    LOBYTE(v291) = 1; /*0x81a145*/
    if ( v290 ) /*0x81a14a*/
    {
      --v290[7].Unk08; /*0x81a14c*/
      if ( !v255[7].Unk08 ) /*0x81a155*/
        sub_772560(v255); /*0x81a159*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x81a15e*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x81a169*/
    NiD3DPass_SetTextureStage(v247, v247->CurrentStage, &v1->Stage); /*0x81a178*/
  }
  NiD3DPass_SetVertexShader(v247, (NiD3DVertexShader *)unk_B45338); /*0x81a186*/
  NiD3DPass_SetPixelShader(v247, (NiD3DPixelShader *)unk_B450F4); /*0x81a193*/
  if ( !v247->RenderStateGroup ) /*0x81a198*/
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a1a2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v247->RenderStateGroup, 0x1B, 1, 0); /*0x81a1ad*/
  if ( !v247->RenderStateGroup ) /*0x81a1b2*/
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a1bc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v247->RenderStateGroup, 0x13, 5, 0); /*0x81a1c7*/
  if ( !v247->RenderStateGroup ) /*0x81a1cc*/
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a1d6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v247->RenderStateGroup, 0x14, 6, 0); /*0x81a1e1*/
  if ( !v247->RenderStateGroup ) /*0x81a1e6*/
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a1f0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v247->RenderStateGroup, 0xF, 1, 0); /*0x81a1fb*/
  if ( !v247->RenderStateGroup ) /*0x81a200*/
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a20a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v247->RenderStateGroup, 7, 1, 0); /*0x81a215*/
  if ( !v247->RenderStateGroup ) /*0x81a21a*/
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a224*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v247->RenderStateGroup, 0x17, 4, 0); /*0x81a22f*/
  if ( !v247->RenderStateGroup ) /*0x81a234*/
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a23e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v247->RenderStateGroup, 0xE, 1, 0); /*0x81a249*/
  if ( !v247->RenderStateGroup ) /*0x81a24e*/
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a258*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v247->RenderStateGroup, 0x34, 0, 0); /*0x81a262*/
  unk_B43BD0 = 0x40088; /*0x81a270*/
  unk_B44260 = 0x8C; /*0x81a27a*/
  unk_B448F0 = 4; /*0x81a284*/
  sub_76C890((NiD3DPass **)&v289, (NiD3DPass **)&unk_B45654); /*0x81a28e*/
  v256 = (NiD3DPass *)v289; /*0x81a293*/
  if ( (unsigned int)v289[6] < 3 ) /*0x81a29b*/
  {
    v257 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a2a6*/
    LOBYTE(v291) = 0x57; /*0x81a2b3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v257); /*0x81a2b8*/
    v258 = v290; /*0x81a2bd*/
    LOBYTE(v291) = 1; /*0x81a2c3*/
    if ( v290 ) /*0x81a2c8*/
    {
      --v290[7].Unk08; /*0x81a2ca*/
      if ( !v258[7].Unk08 ) /*0x81a2d3*/
        sub_772560(v258); /*0x81a2d7*/
    }
    v259 = a3; /*0x81a2dc*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x81a2e6*/
    NiD3DPass_SetTextureStage(v256, v256->CurrentStage, v259); /*0x81a2f5*/
    v260 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a2ff*/
    LOBYTE(v291) = 0x58; /*0x81a30c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v260); /*0x81a311*/
    v261 = v290; /*0x81a316*/
    LOBYTE(v291) = 1; /*0x81a31c*/
    if ( v290 ) /*0x81a321*/
    {
      --v290[7].Unk08; /*0x81a323*/
      if ( !v261[7].Unk08 ) /*0x81a32c*/
        sub_772560(v261); /*0x81a330*/
    }
    v262 = a3; /*0x81a335*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x81a340*/
    NiD3DPass_SetTextureStage(v256, v256->CurrentStage, v262); /*0x81a34f*/
    v263 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a359*/
    LOBYTE(v291) = 0x59; /*0x81a366*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v263); /*0x81a36b*/
    v264 = v290; /*0x81a370*/
    LOBYTE(v291) = 1; /*0x81a376*/
    if ( v290 ) /*0x81a37b*/
    {
      --v290[7].Unk08; /*0x81a37d*/
      if ( !v264[7].Unk08 ) /*0x81a386*/
        sub_772560(v264); /*0x81a38a*/
    }
    v265 = a3; /*0x81a38f*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x81a39a*/
    NiD3DPass_SetTextureStage(v256, v256->CurrentStage, v265); /*0x81a3a9*/
    v266 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a3b3*/
    LOBYTE(v291) = 0x5A; /*0x81a3c0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v266); /*0x81a3c5*/
    v267 = v290; /*0x81a3ca*/
    LOBYTE(v291) = 1; /*0x81a3d0*/
    if ( v290 ) /*0x81a3d5*/
    {
      --v290[7].Unk08; /*0x81a3d7*/
      if ( !v267[7].Unk08 ) /*0x81a3e0*/
        sub_772560(v267); /*0x81a3e4*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x81a3e9*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x81a3f4*/
    NiD3DPass_SetTextureStage(v256, v256->CurrentStage, &v1->Stage); /*0x81a403*/
  }
  NiD3DPass_SetVertexShader(v256, (NiD3DVertexShader *)unk_B45344); /*0x81a410*/
  NiD3DPass_SetPixelShader(v256, (NiD3DPixelShader *)unk_B450D4); /*0x81a41e*/
  if ( !v256->RenderStateGroup ) /*0x81a423*/
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a42d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v256->RenderStateGroup, 0x1B, 1, 0); /*0x81a438*/
  if ( !v256->RenderStateGroup ) /*0x81a43d*/
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a447*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v256->RenderStateGroup, 0x13, 5, 0); /*0x81a452*/
  if ( !v256->RenderStateGroup ) /*0x81a457*/
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a461*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v256->RenderStateGroup, 0x14, 6, 0); /*0x81a46c*/
  if ( !v256->RenderStateGroup ) /*0x81a471*/
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a47b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v256->RenderStateGroup, 0xF, 1, 0); /*0x81a486*/
  if ( !v256->RenderStateGroup ) /*0x81a48b*/
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a495*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v256->RenderStateGroup, 7, 1, 0); /*0x81a4a0*/
  if ( !v256->RenderStateGroup ) /*0x81a4a5*/
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a4af*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v256->RenderStateGroup, 0x17, 4, 0); /*0x81a4ba*/
  if ( !v256->RenderStateGroup ) /*0x81a4bf*/
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a4c9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v256->RenderStateGroup, 0xE, 1, 0); /*0x81a4d4*/
  if ( !v256->RenderStateGroup ) /*0x81a4d9*/
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a4e3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v256->RenderStateGroup, 0x34, 0, 0); /*0x81a4ed*/
  unk_B43BD4 = 0x40088; /*0x81a4fb*/
  unk_B44264 = 0xC; /*0x81a505*/
  unk_B448F4 = 4; /*0x81a50f*/
  sub_76C890((NiD3DPass **)&v289, &dword_B456B4); /*0x81a519*/
  v268 = (NiD3DPass *)v289; /*0x81a51e*/
  if ( (unsigned int)v289[6] < 3 ) /*0x81a526*/
  {
    v269 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a531*/
    LOBYTE(v291) = 0x5B; /*0x81a53e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v269); /*0x81a543*/
    v270 = v290; /*0x81a548*/
    LOBYTE(v291) = 1; /*0x81a54e*/
    if ( v290 ) /*0x81a553*/
    {
      --v290[7].Unk08; /*0x81a555*/
      if ( !v270[7].Unk08 ) /*0x81a55e*/
        sub_772560(v270); /*0x81a562*/
    }
    v271 = a3; /*0x81a567*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x81a571*/
    NiD3DPass_SetTextureStage(v268, v268->CurrentStage, v271); /*0x81a580*/
    v272 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a58a*/
    LOBYTE(v291) = 0x5C; /*0x81a597*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v272); /*0x81a59c*/
    v273 = v290; /*0x81a5a1*/
    LOBYTE(v291) = 1; /*0x81a5a7*/
    if ( v290 ) /*0x81a5ac*/
    {
      --v290[7].Unk08; /*0x81a5ae*/
      if ( !v273[7].Unk08 ) /*0x81a5b7*/
        sub_772560(v273); /*0x81a5bb*/
    }
    v274 = a3; /*0x81a5c0*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x81a5cb*/
    NiD3DPass_SetTextureStage(v268, v268->CurrentStage, v274); /*0x81a5da*/
    v275 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a5e4*/
    LOBYTE(v291) = 0x5D; /*0x81a5f1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v275); /*0x81a5f6*/
    v276 = v290; /*0x81a5fb*/
    LOBYTE(v291) = 1; /*0x81a601*/
    if ( v290 ) /*0x81a606*/
    {
      --v290[7].Unk08; /*0x81a608*/
      if ( !v276[7].Unk08 ) /*0x81a611*/
        sub_772560(v276); /*0x81a615*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x81a61a*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x81a625*/
    NiD3DPass_SetTextureStage(v268, v268->CurrentStage, &v1->Stage); /*0x81a634*/
  }
  NiD3DPass_SetVertexShader(v268, (NiD3DVertexShader *)unk_B4533C); /*0x81a642*/
  NiD3DPass_SetPixelShader(v268, (NiD3DPixelShader *)unk_B450E8); /*0x81a64f*/
  if ( !v268->RenderStateGroup ) /*0x81a654*/
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a65e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v268->RenderStateGroup, 0x1B, 1, 0); /*0x81a669*/
  if ( !v268->RenderStateGroup ) /*0x81a66e*/
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a678*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v268->RenderStateGroup, 0x13, 5, 0); /*0x81a683*/
  if ( !v268->RenderStateGroup ) /*0x81a688*/
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a692*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v268->RenderStateGroup, 0x14, 6, 0); /*0x81a69d*/
  if ( !v268->RenderStateGroup ) /*0x81a6a2*/
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a6ac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v268->RenderStateGroup, 0xF, 1, 0); /*0x81a6b7*/
  if ( !v268->RenderStateGroup ) /*0x81a6bc*/
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a6c6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v268->RenderStateGroup, 7, 1, 0); /*0x81a6d1*/
  if ( !v268->RenderStateGroup ) /*0x81a6d6*/
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a6e0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v268->RenderStateGroup, 0x17, 4, 0); /*0x81a6eb*/
  if ( !v268->RenderStateGroup ) /*0x81a6f0*/
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a6fa*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v268->RenderStateGroup, 0xE, 1, 0); /*0x81a705*/
  if ( !v268->RenderStateGroup ) /*0x81a70a*/
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a714*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v268->RenderStateGroup, 0x34, 0, 0); /*0x81a71e*/
  unk_B43C34 = 0x58088; /*0x81a72c*/
  unk_B442C4 = 0x8C; /*0x81a736*/
  unk_B435A4 = 0x18000; /*0x81a740*/
  unk_B44954 = 4; /*0x81a74a*/
  sub_76C890((NiD3DPass **)&v289, (NiD3DPass **)&unk_B456B8); /*0x81a754*/
  v277 = (NiD3DPass *)v289; /*0x81a759*/
  if ( (unsigned int)v289[6] < 3 ) /*0x81a761*/
  {
    v278 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a76c*/
    LOBYTE(v291) = 0x5E; /*0x81a779*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v278); /*0x81a77e*/
    v279 = v290; /*0x81a783*/
    LOBYTE(v291) = 1; /*0x81a789*/
    if ( v290 ) /*0x81a78e*/
    {
      --v290[7].Unk08; /*0x81a790*/
      if ( !v279[7].Unk08 ) /*0x81a799*/
        sub_772560(v279); /*0x81a79d*/
    }
    v280 = a3; /*0x81a7a2*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x81a7ac*/
    NiD3DPass_SetTextureStage(v277, v277->CurrentStage, v280); /*0x81a7bb*/
    v281 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a7c5*/
    LOBYTE(v291) = 0x5F; /*0x81a7d2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v281); /*0x81a7d7*/
    v282 = v290; /*0x81a7dc*/
    LOBYTE(v291) = 1; /*0x81a7e2*/
    if ( v290 ) /*0x81a7e7*/
    {
      --v290[7].Unk08; /*0x81a7e9*/
      if ( !v282[7].Unk08 ) /*0x81a7f2*/
        sub_772560(v282); /*0x81a7f6*/
    }
    v283 = a3; /*0x81a7fb*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x81a806*/
    NiD3DPass_SetTextureStage(v277, v277->CurrentStage, v283); /*0x81a815*/
    v284 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v290); /*0x81a81f*/
    LOBYTE(v291) = 0x60; /*0x81a82c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v284); /*0x81a831*/
    v285 = v290; /*0x81a836*/
    LOBYTE(v291) = 1; /*0x81a83c*/
    if ( v290 ) /*0x81a841*/
    {
      --v290[7].Unk08; /*0x81a843*/
      if ( !v285[7].Unk08 ) /*0x81a84c*/
        sub_772560(v285); /*0x81a850*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x81a855*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x81a860*/
    NiD3DPass_SetTextureStage(v277, v277->CurrentStage, &v1->Stage); /*0x81a86f*/
  }
  NiD3DPass_SetVertexShader(v277, (NiD3DVertexShader *)unk_B45340); /*0x81a87d*/
  NiD3DPass_SetPixelShader(v277, (NiD3DPixelShader *)unk_B450F8); /*0x81a88b*/
  if ( !v277->RenderStateGroup ) /*0x81a890*/
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a89a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v277->RenderStateGroup, 0x1B, 1, 0); /*0x81a8a5*/
  if ( !v277->RenderStateGroup ) /*0x81a8aa*/
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a8b4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v277->RenderStateGroup, 0x13, 5, 0); /*0x81a8bf*/
  if ( !v277->RenderStateGroup ) /*0x81a8c4*/
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a8ce*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v277->RenderStateGroup, 0x14, 6, 0); /*0x81a8d9*/
  if ( !v277->RenderStateGroup ) /*0x81a8de*/
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a8e8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v277->RenderStateGroup, 0xF, 1, 0); /*0x81a8f3*/
  if ( !v277->RenderStateGroup ) /*0x81a8f8*/
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a902*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v277->RenderStateGroup, 7, 1, 0); /*0x81a90d*/
  if ( !v277->RenderStateGroup ) /*0x81a912*/
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a91c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v277->RenderStateGroup, 0x17, 4, 0); /*0x81a927*/
  if ( !v277->RenderStateGroup ) /*0x81a92c*/
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a936*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v277->RenderStateGroup, 0xE, 1, 0); /*0x81a941*/
  if ( !v277->RenderStateGroup ) /*0x81a946*/
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81a950*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v277->RenderStateGroup, 0x34, 0, 0); /*0x81a95a*/
  v286 = (NiD3DPass *)unk_B45658; /*0x81a95f*/
  v3 = unk_B45658 == 0; /*0x81a967*/
  unk_B43C38 = 0x58088; /*0x81a969*/
  unk_B442C8 = 0x8C; /*0x81a973*/
  unk_B435A8 = 0x18000; /*0x81a97d*/
  unk_B44958 = 4; /*0x81a987*/
  if ( !v3 ) /*0x81a991*/
  {
    v3 = v286->RefCount-- == 1; /*0x81a993*/
    if ( v3 ) /*0x81a998*/
      NiD3DPass_ReleaseToPool(v286); /*0x81a99a*/
    unk_B45658 = 0; /*0x81a99f*/
  }
  v287 = (NiD3DPass *)unk_B456BC; /*0x81a9a5*/
  if ( unk_B456BC ) /*0x81a9a5*/
  {
    v3 = v287->RefCount-- == 1; /*0x81a9ae*/
    if ( v3 ) /*0x81a9b3*/
      NiD3DPass_ReleaseToPool(v287); /*0x81a9b5*/
    unk_B456BC = 0; /*0x81a9ba*/
  }
  LOBYTE(v291) = 0; /*0x81a9c2*/
  if ( v1 ) /*0x81a9c7*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x81a9c9*/
    if ( v3 ) /*0x81a9cc*/
      sub_772560(v1); /*0x81a9d0*/
  }
  v3 = v277->RefCount-- == 1; /*0x81a9d5*/
  v291 = 0xFFFFFFFF; /*0x81a9d8*/
  if ( v3 ) /*0x81a9dc*/
    NiD3DPass_ReleaseToPool(v277); /*0x81a9e0*/
}
