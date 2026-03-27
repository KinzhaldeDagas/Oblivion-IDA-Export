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
  unsigned int *v112; // eax
  NiD3DTextureStage *v113; // eax
  unsigned int *v114; // edi
  unsigned int *v115; // eax
  NiD3DTextureStage *v116; // eax
  unsigned int *v117; // edi
  unsigned int *v118; // eax
  NiD3DTextureStage *v119; // eax
  unsigned int *v120; // edi
  unsigned int *v121; // eax
  NiD3DTextureStage *v122; // eax
  unsigned int *v123; // edi
  unsigned int *v124; // eax
  NiD3DTextureStage *v125; // eax
  unsigned int *v126; // eax
  NiD3DTextureStage *v127; // eax
  unsigned int *v128; // edi
  unsigned int *v129; // eax
  NiD3DTextureStage *v130; // eax
  unsigned int *v131; // edi
  unsigned int *v132; // eax
  NiD3DTextureStage *v133; // eax
  unsigned int *v134; // edi
  unsigned int *v135; // eax
  NiD3DTextureStage *v136; // eax
  unsigned int *v137; // edi
  unsigned int *v138; // eax
  NiD3DTextureStage *v139; // eax
  unsigned int *v140; // edi
  unsigned int *v141; // eax
  NiD3DTextureStage *v142; // eax
  unsigned int *v143; // edi
  unsigned int *v144; // eax
  NiD3DTextureStage *v145; // eax
  unsigned int *v146; // eax
  NiD3DTextureStage *v147; // eax
  unsigned int *v148; // edi
  unsigned int *v149; // eax
  NiD3DTextureStage *v150; // eax
  unsigned int *v151; // edi
  unsigned int *v152; // eax
  NiD3DTextureStage *v153; // eax
  unsigned int *v154; // edi
  unsigned int *v155; // eax
  NiD3DTextureStage *v156; // eax
  unsigned int *v157; // edi
  unsigned int *v158; // eax
  NiD3DTextureStage *v159; // eax
  unsigned int *v160; // edi
  unsigned int *v161; // eax
  NiD3DTextureStage *v162; // eax
  unsigned int *v163; // edi
  unsigned int *v164; // eax
  NiD3DTextureStage *v165; // eax
  unsigned int *v166; // eax
  NiD3DTextureStage *v167; // eax
  unsigned int *v168; // edi
  unsigned int *v169; // eax
  NiD3DTextureStage *v170; // eax
  unsigned int *v171; // edi
  unsigned int *v172; // eax
  NiD3DTextureStage *v173; // eax
  unsigned int *v174; // edi
  unsigned int *v175; // eax
  NiD3DTextureStage *v176; // eax
  unsigned int *v177; // edi
  unsigned int *v178; // eax
  NiD3DTextureStage *v179; // eax
  unsigned int *v180; // edi
  unsigned int *v181; // eax
  NiD3DTextureStage *v182; // eax
  unsigned int *v183; // edi
  unsigned int *v184; // eax
  NiD3DTextureStage *v185; // eax
  unsigned int *v186; // eax
  NiD3DTextureStage *v187; // eax
  unsigned int *v188; // edi
  unsigned int *v189; // eax
  NiD3DTextureStage *v190; // eax
  unsigned int *v191; // edi
  unsigned int *v192; // eax
  NiD3DTextureStage *v193; // eax
  unsigned int *v194; // edi
  unsigned int *v195; // eax
  NiD3DTextureStage *v196; // eax
  unsigned int *v197; // edi
  unsigned int *v198; // eax
  NiD3DTextureStage *v199; // eax
  unsigned int *v200; // edi
  unsigned int *v201; // eax
  NiD3DTextureStage *v202; // eax
  unsigned int *v203; // edi
  unsigned int *v204; // eax
  NiD3DTextureStage *v205; // eax
  unsigned int *v206; // eax
  NiD3DTextureStage *v207; // eax
  unsigned int *v208; // edi
  unsigned int *v209; // eax
  NiD3DTextureStage *v210; // eax
  unsigned int *v211; // edi
  unsigned int *v212; // eax
  NiD3DTextureStage *v213; // eax
  unsigned int *v214; // edi
  unsigned int *v215; // eax
  NiD3DTextureStage *v216; // eax
  unsigned int *v217; // edi
  unsigned int *v218; // eax
  NiD3DTextureStage *v219; // eax
  unsigned int *v220; // edi
  unsigned int *v221; // eax
  NiD3DTextureStage *v222; // eax
  unsigned int *v223; // edi
  unsigned int *v224; // eax
  NiD3DTextureStage *v225; // eax
  unsigned int *v226; // eax
  NiD3DTextureStage *v227; // eax
  unsigned int *v228; // edi
  unsigned int *v229; // eax
  NiD3DTextureStage *v230; // eax
  unsigned int *v231; // edi
  unsigned int *v232; // eax
  NiD3DTextureStage *v233; // eax
  unsigned int *v234; // edi
  unsigned int *v235; // eax
  NiD3DTextureStage *v236; // eax
  unsigned int *v237; // edi
  unsigned int *v238; // eax
  NiD3DTextureStage *v239; // eax
  unsigned int *v240; // edi
  unsigned int *v241; // eax
  NiD3DTextureStage *v242; // eax
  unsigned int *v243; // edi
  unsigned int *v244; // eax
  NiD3DTextureStage *v245; // eax
  unsigned int *v246; // eax
  NiD3DTextureStage *v247; // eax
  unsigned int *v248; // edi
  unsigned int *v249; // eax
  NiD3DTextureStage *v250; // eax
  unsigned int *v251; // edi
  unsigned int *v252; // eax
  NiD3DTextureStage *v253; // eax
  unsigned int *v254; // edi
  unsigned int *v255; // eax
  NiD3DTextureStage *v256; // eax
  unsigned int *v257; // edi
  unsigned int *v258; // eax
  NiD3DTextureStage *v259; // eax
  unsigned int *v260; // edi
  unsigned int *v261; // eax
  NiD3DTextureStage *v262; // eax
  unsigned int *v263; // edi
  unsigned int *v264; // eax
  NiD3DTextureStage *v265; // eax
  unsigned int *v266; // eax
  NiD3DTextureStage *v267; // eax
  unsigned int *v268; // edi
  unsigned int *v269; // eax
  NiD3DTextureStage *v270; // eax
  unsigned int *v271; // edi
  unsigned int *v272; // eax
  NiD3DTextureStage *v273; // eax
  unsigned int *v274; // edi
  unsigned int *v275; // eax
  NiD3DTextureStage *v276; // eax
  unsigned int *v277; // edi
  unsigned int *v278; // eax
  NiD3DTextureStage *v279; // eax
  unsigned int *v280; // edi
  unsigned int *v281; // eax
  NiD3DTextureStage *v282; // eax
  unsigned int *v283; // edi
  unsigned int *v284; // eax
  NiD3DTextureStage *v285; // eax
  unsigned int *v286; // eax
  NiD3DTextureStage *v287; // eax
  unsigned int *v288; // edi
  unsigned int *v289; // eax
  NiD3DTextureStage *v290; // eax
  unsigned int *v291; // edi
  unsigned int *v292; // eax
  NiD3DTextureStage *v293; // eax
  unsigned int *v294; // edi
  unsigned int *v295; // eax
  NiD3DTextureStage *v296; // eax
  unsigned int *v297; // edi
  unsigned int *v298; // eax
  NiD3DTextureStage *v299; // eax
  unsigned int *v300; // edi
  unsigned int *v301; // eax
  NiD3DTextureStage *v302; // eax
  unsigned int *v303; // edi
  unsigned int *v304; // eax
  NiD3DTextureStage *v305; // eax
  unsigned int *a3; // [esp+28h] [ebp-18h] BYREF
  int v307; // [esp+2Ch] [ebp-14h]
  NiD3DTextureStage *v308; // [esp+30h] [ebp-10h] BYREF
  unsigned int v309; // [esp+3Ch] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v307 = 0;
  v309 = 0;
  a3 = 0;
  v2 = dword_B456C8;
  v3 = dword_B456C8 == 0;
  LOBYTE(v309) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    v307 = v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( v0->StageCount < 7 )
  {
    v4 = (unsigned int *)*sub_772630(&v308);
    if ( v4 )
    {
      v1 = (NiD3DTextureStage *)v4;
      ++v4[0x17];
      a3 = v4;
    }
    v5 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v6 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v6;
    LOBYTE(v309) = 3;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v6;
      a3 = *v6;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v7 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v8 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v8;
    LOBYTE(v309) = 4;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v8;
      a3 = *v8;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v9 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v9[7].Unk08 )
        sub_772560(v9);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v10 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v10;
    LOBYTE(v309) = 5;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v10;
      a3 = *v10;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v11 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v11[7].Unk08 )
        sub_772560(v11);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v12 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v12;
    LOBYTE(v309) = 6;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v12;
      a3 = *v12;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v13 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v13[7].Unk08 )
        sub_772560(v13);
    }
    sub_801110((int)v1, 4, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, &v1->Stage);
    v14 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v14;
    LOBYTE(v309) = 7;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v14;
      a3 = *v14;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v15 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v15[7].Unk08 )
        sub_772560(v15);
    }
    sub_801110((int)v1, 5, 1, 2);
    sub_760010(v0, 5u, &v1->Stage);
    v16 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v16;
    LOBYTE(v309) = 8;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v16;
      a3 = *v16;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v17 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v17[7].Unk08 )
        sub_772560(v17);
    }
    sub_801110((int)v1, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v19 = dword_B453B0;
  if ( VertexShader != (NiD3DVertexShader *)dword_B453B0 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  PixelShader = v0->PixelShader;
  v21 = dword_B451B0;
  if ( PixelShader != (NiD3DPixelShader *)dword_B451B0 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)(v21 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B456CC;
  dword_B43C48 = 0x21082;
  dword_B442D8 = 0x1C;
  dword_B44968 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B456CC;
    v307 = dword_B456CC;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v22 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v22;
    LOBYTE(v309) = 9;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v22;
      a3 = *v22;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v23 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v23[7].Unk08 )
        sub_772560(v23);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v24 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v24;
    LOBYTE(v309) = 0xA;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v24;
      a3 = *v24;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v25 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v25[7].Unk08 )
        sub_772560(v25);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v26 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v26;
    LOBYTE(v309) = 0xB;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v26;
      a3 = *v26;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v27 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v27[7].Unk08 )
        sub_772560(v27);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v28 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v28;
    LOBYTE(v309) = 0xC;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v28;
      a3 = *v28;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v29 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v29[7].Unk08 )
        sub_772560(v29);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v30 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v30;
    LOBYTE(v309) = 0xD;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v30;
      a3 = *v30;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v31 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v1, 4, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, &v1->Stage);
    v32 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v32;
    LOBYTE(v309) = 0xE;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v32;
      a3 = *v32;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v33 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v33[7].Unk08 )
        sub_772560(v33);
    }
    sub_801110((int)v1, 5, 1, 2);
    sub_760010(v0, 5u, &v1->Stage);
    v34 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v34;
    LOBYTE(v309) = 0xF;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v34;
      a3 = *v34;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v35 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v35[7].Unk08 )
        sub_772560(v35);
    }
    sub_801110((int)v1, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  v36 = v0->VertexShader;
  v37 = dword_B453B0;
  if ( v36 != (NiD3DVertexShader *)dword_B453B0 )
  {
    if ( v36 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v36)(v36, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v37;
    if ( v37 )
      InterlockedIncrement((volatile LONG *)(v37 + 4));
  }
  v38 = v0->PixelShader;
  v39 = dword_B451B4;
  if ( v38 != (NiD3DPixelShader *)dword_B451B4 )
  {
    if ( v38 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v38 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v38)(v38, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v39;
    if ( v39 )
      InterlockedIncrement((volatile LONG *)(v39 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B456DC;
  dword_B43C4C = 0x21082;
  dword_B442DC = 0x9C;
  dword_B4496C = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B456DC;
    v307 = dword_B456DC;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v40 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v40;
    LOBYTE(v309) = 0x10;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v40;
      a3 = *v40;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v41 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v41[7].Unk08 )
        sub_772560(v41);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v42 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v42;
    LOBYTE(v309) = 0x11;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v42;
      a3 = *v42;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v43 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v43[7].Unk08 )
        sub_772560(v43);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v44 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v44;
    LOBYTE(v309) = 0x12;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v44;
      a3 = *v44;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v45 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v45[7].Unk08 )
        sub_772560(v45);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v46 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v46;
    LOBYTE(v309) = 0x13;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v46;
      a3 = *v46;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v47 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v47[7].Unk08 )
        sub_772560(v47);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v48 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v48;
    LOBYTE(v309) = 0x14;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v48;
      a3 = *v48;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v49 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v49[7].Unk08 )
        sub_772560(v49);
    }
    sub_801110((int)v1, 4, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, &v1->Stage);
    v50 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v50;
    LOBYTE(v309) = 0x15;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v50;
      a3 = *v50;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v51 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v51[7].Unk08 )
        sub_772560(v51);
    }
    sub_801110((int)v1, 5, 1, 2);
    sub_760010(v0, 5u, &v1->Stage);
    v52 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v52;
    LOBYTE(v309) = 0x16;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v52;
      a3 = *v52;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v53 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v53[7].Unk08 )
        sub_772560(v53);
    }
    sub_801110((int)v1, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  v54 = v0->VertexShader;
  v55 = dword_B453B4;
  if ( v54 != (NiD3DVertexShader *)dword_B453B4 )
  {
    if ( v54 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v54 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v54)(v54, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v55;
    if ( v55 )
      InterlockedIncrement((volatile LONG *)(v55 + 4));
  }
  v56 = v0->PixelShader;
  v57 = dword_B451B0;
  if ( v56 != (NiD3DPixelShader *)dword_B451B0 )
  {
    if ( v56 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v56)(v56, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v57;
    if ( v57 )
      InterlockedIncrement((volatile LONG *)(v57 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B456E4;
  dword_B43C5C = 0x61088;
  dword_B442EC = 0x1C;
  dword_B4497C = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B456E4;
    v307 = dword_B456E4;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v58 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v58;
    LOBYTE(v309) = 0x17;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v58;
      a3 = *v58;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v59 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v59[7].Unk08 )
        sub_772560(v59);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v60 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v60;
    LOBYTE(v309) = 0x18;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v60;
      a3 = *v60;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v61 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v61[7].Unk08 )
        sub_772560(v61);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v62 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v62;
    LOBYTE(v309) = 0x19;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v62;
      a3 = *v62;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v63 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v63[7].Unk08 )
        sub_772560(v63);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v64 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v64;
    LOBYTE(v309) = 0x1A;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v64;
      a3 = *v64;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v65 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v65[7].Unk08 )
        sub_772560(v65);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v66 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v66;
    LOBYTE(v309) = 0x1B;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v66;
      a3 = *v66;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v67 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v67[7].Unk08 )
        sub_772560(v67);
    }
    sub_801110((int)v1, 4, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, &v1->Stage);
    v68 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v68;
    LOBYTE(v309) = 0x1C;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v68;
      a3 = *v68;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v69 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v69[7].Unk08 )
        sub_772560(v69);
    }
    sub_801110((int)v1, 5, 1, 2);
    sub_760010(v0, 5u, &v1->Stage);
    v70 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v70;
    LOBYTE(v309) = 0x1D;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v70;
      a3 = *v70;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v71 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v71[7].Unk08 )
        sub_772560(v71);
    }
    sub_801110((int)v1, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  v72 = v0->VertexShader;
  v73 = dword_B453B4;
  if ( v72 != (NiD3DVertexShader *)dword_B453B4 )
  {
    if ( v72 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v72 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v72)(v72, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v73;
    if ( v73 )
      InterlockedIncrement((volatile LONG *)(v73 + 4));
  }
  v74 = v0->PixelShader;
  v75 = dword_B451B4;
  if ( v74 != (NiD3DPixelShader *)dword_B451B4 )
  {
    if ( v74 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v74 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v74)(v74, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v75;
    if ( v75 )
      InterlockedIncrement((volatile LONG *)(v75 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B456F4;
  dword_B43C64 = 0x61088;
  dword_B442F4 = 0x9C;
  dword_B44984 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B456F4;
    v307 = dword_B456F4;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v76 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v76;
    LOBYTE(v309) = 0x1E;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v76;
      a3 = *v76;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v77 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v77[7].Unk08 )
        sub_772560(v77);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v78 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v78;
    LOBYTE(v309) = 0x1F;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v78;
      a3 = *v78;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v79 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v79[7].Unk08 )
        sub_772560(v79);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v80 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v80;
    LOBYTE(v309) = 0x20;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v80;
      a3 = *v80;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v81 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v81[7].Unk08 )
        sub_772560(v81);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v82 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v82;
    LOBYTE(v309) = 0x21;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v82;
      a3 = *v82;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v83 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v83[7].Unk08 )
        sub_772560(v83);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v84 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v84;
    LOBYTE(v309) = 0x22;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v84;
      a3 = *v84;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v85 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v85[7].Unk08 )
        sub_772560(v85);
    }
    sub_801110((int)v1, 4, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, &v1->Stage);
    v86 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v86;
    LOBYTE(v309) = 0x23;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v86;
      a3 = *v86;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v87 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v87[7].Unk08 )
        sub_772560(v87);
    }
    sub_801110((int)v1, 5, 1, 2);
    sub_760010(v0, 5u, &v1->Stage);
    v88 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v88;
    LOBYTE(v309) = 0x24;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v88;
      a3 = *v88;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v89 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v89[7].Unk08 )
        sub_772560(v89);
    }
    sub_801110((int)v1, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  v90 = v0->VertexShader;
  v91 = dword_B453B8;
  if ( v90 != (NiD3DVertexShader *)dword_B453B8 )
  {
    if ( v90 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v90 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v90)(v90, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v91;
    if ( v91 )
      InterlockedIncrement((volatile LONG *)(v91 + 4));
  }
  v92 = v0->PixelShader;
  v93 = dword_B451B8;
  if ( v92 != (NiD3DPixelShader *)dword_B451B8 )
  {
    if ( v92 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v92 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v92)(v92, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v93;
    if ( v93 )
      InterlockedIncrement((volatile LONG *)(v93 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B456F8;
  dword_B43C74 = 0x210F2;
  dword_B44304 = 0x1C;
  dword_B435E4 = 0x60;
  dword_B44994 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B456F8;
    v307 = dword_B456F8;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v94 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v94;
    LOBYTE(v309) = 0x25;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v94;
      a3 = *v94;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v95 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v95[7].Unk08 )
        sub_772560(v95);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v96 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v96;
    LOBYTE(v309) = 0x26;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v96;
      a3 = *v96;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v97 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v97[7].Unk08 )
        sub_772560(v97);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v98 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v98;
    LOBYTE(v309) = 0x27;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v98;
      a3 = *v98;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v99 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v99[7].Unk08 )
        sub_772560(v99);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v100 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v100;
    LOBYTE(v309) = 0x28;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v100;
      a3 = *v100;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v101 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v101[7].Unk08 )
        sub_772560(v101);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v102 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v102;
    LOBYTE(v309) = 0x29;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v102;
      a3 = *v102;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v103 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v103[7].Unk08 )
        sub_772560(v103);
    }
    sub_801110((int)v1, 4, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, &v1->Stage);
    v104 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v104;
    LOBYTE(v309) = 0x2A;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v104;
      a3 = *v104;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v105 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v105[7].Unk08 )
        sub_772560(v105);
    }
    sub_801110((int)v1, 5, 1, 2);
    sub_760010(v0, 5u, &v1->Stage);
    v106 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v106;
    LOBYTE(v309) = 0x2B;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v106;
      a3 = *v106;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v107 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v107[7].Unk08 )
        sub_772560(v107);
    }
    sub_801110((int)v1, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453B8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451BC);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45708;
  dword_B43C78 = 0x210F2;
  dword_B44308 = 0x9C;
  dword_B435E8 = 0x60;
  dword_B44998 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45708;
    v307 = dword_B45708;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v108 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v108;
    LOBYTE(v309) = 0x2C;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v108;
      a3 = *v108;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v109 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v109[7].Unk08 )
        sub_772560(v109);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v110 = (unsigned int **)sub_772630(&v308);
    v3 = v1 == (NiD3DTextureStage *)*v110;
    LOBYTE(v309) = 0x2D;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v110;
      a3 = *v110;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v111 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v111[7].Unk08 )
        sub_772560(v111);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v112 = sub_772630(&v308);
    LOBYTE(v309) = 0x2E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v112);
    v113 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v113[7].Unk08 )
        sub_772560(v113);
    }
    v114 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v114);
    v115 = sub_772630(&v308);
    LOBYTE(v309) = 0x2F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v115);
    v116 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v116[7].Unk08 )
        sub_772560(v116);
    }
    v117 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v117);
    v118 = sub_772630(&v308);
    LOBYTE(v309) = 0x30;
    sub_75FAE0((NiD3DTextureStage **)&a3, v118);
    v119 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v119[7].Unk08 )
        sub_772560(v119);
    }
    v120 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v120, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, v120);
    v121 = sub_772630(&v308);
    LOBYTE(v309) = 0x31;
    sub_75FAE0((NiD3DTextureStage **)&a3, v121);
    v122 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v122[7].Unk08 )
        sub_772560(v122);
    }
    v123 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, v123);
    v124 = sub_772630(&v308);
    LOBYTE(v309) = 0x32;
    sub_75FAE0((NiD3DTextureStage **)&a3, v124);
    v125 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v125[7].Unk08 )
        sub_772560(v125);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453BC);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451B8);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45710;
  dword_B43C88 = 0x610F8;
  dword_B44308 = 0x1C;
  dword_B435E8 = 0x60;
  dword_B44998 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45710;
    v307 = dword_B45710;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v126 = sub_772630(&v308);
    LOBYTE(v309) = 0x33;
    sub_75FAE0((NiD3DTextureStage **)&a3, v126);
    v127 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v127[7].Unk08 )
        sub_772560(v127);
    }
    v128 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v128);
    v129 = sub_772630(&v308);
    LOBYTE(v309) = 0x34;
    sub_75FAE0((NiD3DTextureStage **)&a3, v129);
    v130 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v130[7].Unk08 )
        sub_772560(v130);
    }
    v131 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v131);
    v132 = sub_772630(&v308);
    LOBYTE(v309) = 0x35;
    sub_75FAE0((NiD3DTextureStage **)&a3, v132);
    v133 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v133[7].Unk08 )
        sub_772560(v133);
    }
    v134 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v134);
    v135 = sub_772630(&v308);
    LOBYTE(v309) = 0x36;
    sub_75FAE0((NiD3DTextureStage **)&a3, v135);
    v136 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v136[7].Unk08 )
        sub_772560(v136);
    }
    v137 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v137);
    v138 = sub_772630(&v308);
    LOBYTE(v309) = 0x37;
    sub_75FAE0((NiD3DTextureStage **)&a3, v138);
    v139 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v139[7].Unk08 )
        sub_772560(v139);
    }
    v140 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v140, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, v140);
    v141 = sub_772630(&v308);
    LOBYTE(v309) = 0x38;
    sub_75FAE0((NiD3DTextureStage **)&a3, v141);
    v142 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v142[7].Unk08 )
        sub_772560(v142);
    }
    v143 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, v143);
    v144 = sub_772630(&v308);
    LOBYTE(v309) = 0x39;
    sub_75FAE0((NiD3DTextureStage **)&a3, v144);
    v145 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v145[7].Unk08 )
        sub_772560(v145);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453BC);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451BC);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45720;
  dword_B43C90 = 0x610F8;
  dword_B44320 = 0x9C;
  dword_B43600 = 0x60;
  dword_B449B0 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45720;
    v307 = dword_B45720;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v146 = sub_772630(&v308);
    LOBYTE(v309) = 0x3A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v146);
    v147 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v147[7].Unk08 )
        sub_772560(v147);
    }
    v148 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v148);
    v149 = sub_772630(&v308);
    LOBYTE(v309) = 0x3B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v149);
    v150 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v150[7].Unk08 )
        sub_772560(v150);
    }
    v151 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v151);
    v152 = sub_772630(&v308);
    LOBYTE(v309) = 0x3C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v152);
    v153 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v153[7].Unk08 )
        sub_772560(v153);
    }
    v154 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v154);
    v155 = sub_772630(&v308);
    LOBYTE(v309) = 0x3D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v155);
    v156 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v156[7].Unk08 )
        sub_772560(v156);
    }
    v157 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v157);
    v158 = sub_772630(&v308);
    LOBYTE(v309) = 0x3E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v158);
    v159 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v159[7].Unk08 )
        sub_772560(v159);
    }
    v160 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v160, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, v160);
    v161 = sub_772630(&v308);
    LOBYTE(v309) = 0x3F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v161);
    v162 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v162[7].Unk08 )
        sub_772560(v162);
    }
    v163 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, v163);
    v164 = sub_772630(&v308);
    LOBYTE(v309) = 0x40;
    sub_75FAE0((NiD3DTextureStage **)&a3, v164);
    v165 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v165[7].Unk08 )
        sub_772560(v165);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453C0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451C0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45724;
  dword_B43CA0 = 0x23082;
  dword_B44330 = 0x3C;
  dword_B449C0 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45724;
    v307 = dword_B45724;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v166 = sub_772630(&v308);
    LOBYTE(v309) = 0x41;
    sub_75FAE0((NiD3DTextureStage **)&a3, v166);
    v167 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v167[7].Unk08 )
        sub_772560(v167);
    }
    v168 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v168);
    v169 = sub_772630(&v308);
    LOBYTE(v309) = 0x42;
    sub_75FAE0((NiD3DTextureStage **)&a3, v169);
    v170 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v170[7].Unk08 )
        sub_772560(v170);
    }
    v171 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v171);
    v172 = sub_772630(&v308);
    LOBYTE(v309) = 0x43;
    sub_75FAE0((NiD3DTextureStage **)&a3, v172);
    v173 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v173[7].Unk08 )
        sub_772560(v173);
    }
    v174 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v174);
    v175 = sub_772630(&v308);
    LOBYTE(v309) = 0x44;
    sub_75FAE0((NiD3DTextureStage **)&a3, v175);
    v176 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v176[7].Unk08 )
        sub_772560(v176);
    }
    v177 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v177);
    v178 = sub_772630(&v308);
    LOBYTE(v309) = 0x45;
    sub_75FAE0((NiD3DTextureStage **)&a3, v178);
    v179 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v179[7].Unk08 )
        sub_772560(v179);
    }
    v180 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v180, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, v180);
    v181 = sub_772630(&v308);
    LOBYTE(v309) = 0x46;
    sub_75FAE0((NiD3DTextureStage **)&a3, v181);
    v182 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v182[7].Unk08 )
        sub_772560(v182);
    }
    v183 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, v183);
    v184 = sub_772630(&v308);
    LOBYTE(v309) = 0x47;
    sub_75FAE0((NiD3DTextureStage **)&a3, v184);
    v185 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v185[7].Unk08 )
        sub_772560(v185);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453C0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451C4);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45734;
  dword_B43CA4 = 0x23082;
  dword_B44334 = 0xBC;
  dword_B449C4 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45734;
    v307 = dword_B45734;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v186 = sub_772630(&v308);
    LOBYTE(v309) = 0x48;
    sub_75FAE0((NiD3DTextureStage **)&a3, v186);
    v187 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v187[7].Unk08 )
        sub_772560(v187);
    }
    v188 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v188);
    v189 = sub_772630(&v308);
    LOBYTE(v309) = 0x49;
    sub_75FAE0((NiD3DTextureStage **)&a3, v189);
    v190 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v190[7].Unk08 )
        sub_772560(v190);
    }
    v191 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v191);
    v192 = sub_772630(&v308);
    LOBYTE(v309) = 0x4A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v192);
    v193 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v193[7].Unk08 )
        sub_772560(v193);
    }
    v194 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v194);
    v195 = sub_772630(&v308);
    LOBYTE(v309) = 0x4B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v195);
    v196 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v196[7].Unk08 )
        sub_772560(v196);
    }
    v197 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v197);
    v198 = sub_772630(&v308);
    LOBYTE(v309) = 0x4C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v198);
    v199 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v199[7].Unk08 )
        sub_772560(v199);
    }
    v200 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v200, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, v200);
    v201 = sub_772630(&v308);
    LOBYTE(v309) = 0x4D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v201);
    v202 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v202[7].Unk08 )
        sub_772560(v202);
    }
    v203 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, v203);
    v204 = sub_772630(&v308);
    LOBYTE(v309) = 0x4E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v204);
    v205 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v205[7].Unk08 )
        sub_772560(v205);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453C4);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451C0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B4573C;
  dword_B43CB4 = 0x63088;
  dword_B44344 = 0x3C;
  dword_B449D4 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4573C;
    v307 = dword_B4573C;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v206 = sub_772630(&v308);
    LOBYTE(v309) = 0x4F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v206);
    v207 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v207[7].Unk08 )
        sub_772560(v207);
    }
    v208 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v208);
    v209 = sub_772630(&v308);
    LOBYTE(v309) = 0x50;
    sub_75FAE0((NiD3DTextureStage **)&a3, v209);
    v210 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v210[7].Unk08 )
        sub_772560(v210);
    }
    v211 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v211);
    v212 = sub_772630(&v308);
    LOBYTE(v309) = 0x51;
    sub_75FAE0((NiD3DTextureStage **)&a3, v212);
    v213 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v213[7].Unk08 )
        sub_772560(v213);
    }
    v214 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v214);
    v215 = sub_772630(&v308);
    LOBYTE(v309) = 0x52;
    sub_75FAE0((NiD3DTextureStage **)&a3, v215);
    v216 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v216[7].Unk08 )
        sub_772560(v216);
    }
    v217 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v217);
    v218 = sub_772630(&v308);
    LOBYTE(v309) = 0x53;
    sub_75FAE0((NiD3DTextureStage **)&a3, v218);
    v219 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v219[7].Unk08 )
        sub_772560(v219);
    }
    v220 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v220, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, v220);
    v221 = sub_772630(&v308);
    LOBYTE(v309) = 0x54;
    sub_75FAE0((NiD3DTextureStage **)&a3, v221);
    v222 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v222[7].Unk08 )
        sub_772560(v222);
    }
    v223 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, v223);
    v224 = sub_772630(&v308);
    LOBYTE(v309) = 0x55;
    sub_75FAE0((NiD3DTextureStage **)&a3, v224);
    v225 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v225[7].Unk08 )
        sub_772560(v225);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453C4);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451C4);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B4574C;
  dword_B43CBC = 0x63088;
  dword_B4434C = 0xBC;
  dword_B449DC = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4574C;
    v307 = dword_B4574C;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v226 = sub_772630(&v308);
    LOBYTE(v309) = 0x56;
    sub_75FAE0((NiD3DTextureStage **)&a3, v226);
    v227 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v227[7].Unk08 )
        sub_772560(v227);
    }
    v228 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v228);
    v229 = sub_772630(&v308);
    LOBYTE(v309) = 0x57;
    sub_75FAE0((NiD3DTextureStage **)&a3, v229);
    v230 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v230[7].Unk08 )
        sub_772560(v230);
    }
    v231 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v231);
    v232 = sub_772630(&v308);
    LOBYTE(v309) = 0x58;
    sub_75FAE0((NiD3DTextureStage **)&a3, v232);
    v233 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v233[7].Unk08 )
        sub_772560(v233);
    }
    v234 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v234);
    v235 = sub_772630(&v308);
    LOBYTE(v309) = 0x59;
    sub_75FAE0((NiD3DTextureStage **)&a3, v235);
    v236 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v236[7].Unk08 )
        sub_772560(v236);
    }
    v237 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v237);
    v238 = sub_772630(&v308);
    LOBYTE(v309) = 0x5A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v238);
    v239 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v239[7].Unk08 )
        sub_772560(v239);
    }
    v240 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v240, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, v240);
    v241 = sub_772630(&v308);
    LOBYTE(v309) = 0x5B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v241);
    v242 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v242[7].Unk08 )
        sub_772560(v242);
    }
    v243 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, v243);
    v244 = sub_772630(&v308);
    LOBYTE(v309) = 0x5C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v244);
    v245 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v245[7].Unk08 )
        sub_772560(v245);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453C8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451C8);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45750;
  dword_B43CCC = 0x230F2;
  dword_B4435C = 0x3C;
  dword_B4363C = 0x60;
  dword_B449EC = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45750;
    v307 = dword_B45750;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v246 = sub_772630(&v308);
    LOBYTE(v309) = 0x5D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v246);
    v247 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v247[7].Unk08 )
        sub_772560(v247);
    }
    v248 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v248);
    v249 = sub_772630(&v308);
    LOBYTE(v309) = 0x5E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v249);
    v250 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v250[7].Unk08 )
        sub_772560(v250);
    }
    v251 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v251);
    v252 = sub_772630(&v308);
    LOBYTE(v309) = 0x5F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v252);
    v253 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v253[7].Unk08 )
        sub_772560(v253);
    }
    v254 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v254);
    v255 = sub_772630(&v308);
    LOBYTE(v309) = 0x60;
    sub_75FAE0((NiD3DTextureStage **)&a3, v255);
    v256 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v256[7].Unk08 )
        sub_772560(v256);
    }
    v257 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v257);
    v258 = sub_772630(&v308);
    LOBYTE(v309) = 0x61;
    sub_75FAE0((NiD3DTextureStage **)&a3, v258);
    v259 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v259[7].Unk08 )
        sub_772560(v259);
    }
    v260 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v260, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, v260);
    v261 = sub_772630(&v308);
    LOBYTE(v309) = 0x62;
    sub_75FAE0((NiD3DTextureStage **)&a3, v261);
    v262 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v262[7].Unk08 )
        sub_772560(v262);
    }
    v263 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, v263);
    v264 = sub_772630(&v308);
    LOBYTE(v309) = 0x63;
    sub_75FAE0((NiD3DTextureStage **)&a3, v264);
    v265 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v265[7].Unk08 )
        sub_772560(v265);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453C8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451CC);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45760;
  dword_B43CD0 = 0x230F2;
  dword_B44360 = 0xBC;
  dword_B43640 = 0x60;
  dword_B449F0 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45760;
    v307 = dword_B45760;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v266 = sub_772630(&v308);
    LOBYTE(v309) = 0x64;
    sub_75FAE0((NiD3DTextureStage **)&a3, v266);
    v267 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v267[7].Unk08 )
        sub_772560(v267);
    }
    v268 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v268);
    v269 = sub_772630(&v308);
    LOBYTE(v309) = 0x65;
    sub_75FAE0((NiD3DTextureStage **)&a3, v269);
    v270 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v270[7].Unk08 )
        sub_772560(v270);
    }
    v271 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v271);
    v272 = sub_772630(&v308);
    LOBYTE(v309) = 0x66;
    sub_75FAE0((NiD3DTextureStage **)&a3, v272);
    v273 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v273[7].Unk08 )
        sub_772560(v273);
    }
    v274 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v274);
    v275 = sub_772630(&v308);
    LOBYTE(v309) = 0x67;
    sub_75FAE0((NiD3DTextureStage **)&a3, v275);
    v276 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v276[7].Unk08 )
        sub_772560(v276);
    }
    v277 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v277);
    v278 = sub_772630(&v308);
    LOBYTE(v309) = 0x68;
    sub_75FAE0((NiD3DTextureStage **)&a3, v278);
    v279 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v279[7].Unk08 )
        sub_772560(v279);
    }
    v280 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v280, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, v280);
    v281 = sub_772630(&v308);
    LOBYTE(v309) = 0x69;
    sub_75FAE0((NiD3DTextureStage **)&a3, v281);
    v282 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v282[7].Unk08 )
        sub_772560(v282);
    }
    v283 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, v283);
    v284 = sub_772630(&v308);
    LOBYTE(v309) = 0x6A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v284);
    v285 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v285[7].Unk08 )
        sub_772560(v285);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453CC);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451C8);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45768;
  dword_B43CE0 = 0x630F8;
  dword_B44370 = 0x3C;
  dword_B43650 = 0x60;
  dword_B44A00 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45768;
    v307 = dword_B45768;
    if ( v307 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 7 )
  {
    v286 = sub_772630(&v308);
    LOBYTE(v309) = 0x6B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v286);
    v287 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v287[7].Unk08 )
        sub_772560(v287);
    }
    v288 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v288);
    v289 = sub_772630(&v308);
    LOBYTE(v309) = 0x6C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v289);
    v290 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v290[7].Unk08 )
        sub_772560(v290);
    }
    v291 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v291);
    v292 = sub_772630(&v308);
    LOBYTE(v309) = 0x6D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v292);
    v293 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v293[7].Unk08 )
        sub_772560(v293);
    }
    v294 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v294);
    v295 = sub_772630(&v308);
    LOBYTE(v309) = 0x6E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v295);
    v296 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v296[7].Unk08 )
        sub_772560(v296);
    }
    v297 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v297);
    v298 = sub_772630(&v308);
    LOBYTE(v309) = 0x6F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v298);
    v299 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v299[7].Unk08 )
        sub_772560(v299);
    }
    v300 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v300, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 4u, v300);
    v301 = sub_772630(&v308);
    LOBYTE(v309) = 0x70;
    sub_75FAE0((NiD3DTextureStage **)&a3, v301);
    v302 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v302[7].Unk08 )
        sub_772560(v302);
    }
    v303 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, v303);
    v304 = sub_772630(&v308);
    LOBYTE(v309) = 0x71;
    sub_75FAE0((NiD3DTextureStage **)&a3, v304);
    v305 = v308;
    LOBYTE(v309) = 1;
    if ( v308 )
    {
      --v308[7].Unk08;
      if ( !v305[7].Unk08 )
        sub_772560(v305);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v0, 6u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453CC);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451CC);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  dword_B43658 = 0x60;
  dword_B43CE8 = 0x630F8;
  dword_B44378 = 0xBC;
  dword_B44A08 = 0xC;
  LOBYTE(v309) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v0->RefCount-- == 1;
  v309 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
