void __thiscall sub_864A60(_DWORD *this)
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
  volatile LONG *v91; // ebx
  NiD3DVertexShader *v92; // ebp
  volatile LONG *v93; // ebx
  NiD3DPixelShader *v94; // ebp
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
  unsigned int **v107; // ebp
  NiD3DTextureStage *v108; // eax
  _DWORD *v109; // ebp
  unsigned int **v110; // ebp
  NiD3DTextureStage *v111; // eax
  unsigned int **v112; // ebp
  NiD3DTextureStage *v113; // eax
  unsigned int *v114; // eax
  NiD3DTextureStage *v115; // eax
  unsigned int *v116; // edi
  unsigned int *v117; // eax
  NiD3DTextureStage *v118; // eax
  unsigned int *v119; // edi
  unsigned int *v120; // eax
  NiD3DTextureStage *v121; // eax
  unsigned int *v122; // edi
  unsigned int *v123; // eax
  NiD3DTextureStage *v124; // eax
  unsigned int *v125; // edi
  unsigned int *v126; // eax
  NiD3DTextureStage *v127; // eax
  unsigned int *v128; // eax
  NiD3DTextureStage *v129; // eax
  unsigned int *v130; // edi
  unsigned int *v131; // eax
  NiD3DTextureStage *v132; // eax
  unsigned int *v133; // edi
  unsigned int *v134; // eax
  NiD3DTextureStage *v135; // eax
  unsigned int *v136; // edi
  unsigned int *v137; // eax
  NiD3DTextureStage *v138; // eax
  unsigned int *v139; // edi
  unsigned int *v140; // eax
  NiD3DTextureStage *v141; // eax
  unsigned int *v142; // edi
  unsigned int *v143; // eax
  NiD3DTextureStage *v144; // eax
  unsigned int *v145; // edi
  unsigned int *v146; // eax
  NiD3DTextureStage *v147; // eax
  unsigned int *v148; // eax
  NiD3DTextureStage *v149; // eax
  unsigned int *v150; // edi
  unsigned int *v151; // eax
  NiD3DTextureStage *v152; // eax
  unsigned int *v153; // edi
  unsigned int *v154; // eax
  NiD3DTextureStage *v155; // eax
  unsigned int *v156; // edi
  unsigned int *v157; // eax
  NiD3DTextureStage *v158; // eax
  unsigned int *v159; // edi
  unsigned int *v160; // eax
  NiD3DTextureStage *v161; // eax
  unsigned int *v162; // edi
  unsigned int *v163; // eax
  NiD3DTextureStage *v164; // eax
  unsigned int *v165; // edi
  unsigned int *v166; // eax
  NiD3DTextureStage *v167; // eax
  _DWORD *v168; // ebp
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
  unsigned int *v186; // edi
  unsigned int *v187; // eax
  NiD3DTextureStage *v188; // eax
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
  unsigned int *v206; // edi
  unsigned int *v207; // eax
  NiD3DTextureStage *v208; // eax
  _DWORD *v209; // ebp
  unsigned int *v210; // eax
  NiD3DTextureStage *v211; // eax
  unsigned int *v212; // edi
  unsigned int *v213; // eax
  NiD3DTextureStage *v214; // eax
  unsigned int *v215; // edi
  unsigned int *v216; // eax
  NiD3DTextureStage *v217; // eax
  unsigned int *v218; // edi
  unsigned int *v219; // eax
  NiD3DTextureStage *v220; // eax
  unsigned int *v221; // edi
  unsigned int *v222; // eax
  NiD3DTextureStage *v223; // eax
  unsigned int *v224; // edi
  unsigned int *v225; // eax
  NiD3DTextureStage *v226; // eax
  unsigned int *v227; // edi
  unsigned int *v228; // eax
  NiD3DTextureStage *v229; // eax
  unsigned int *v230; // eax
  NiD3DTextureStage *v231; // eax
  unsigned int *v232; // edi
  unsigned int *v233; // eax
  NiD3DTextureStage *v234; // eax
  unsigned int *v235; // edi
  unsigned int *v236; // eax
  NiD3DTextureStage *v237; // eax
  unsigned int *v238; // edi
  unsigned int *v239; // eax
  NiD3DTextureStage *v240; // eax
  unsigned int *v241; // edi
  unsigned int *v242; // eax
  NiD3DTextureStage *v243; // eax
  unsigned int *v244; // edi
  unsigned int *v245; // eax
  NiD3DTextureStage *v246; // eax
  unsigned int *v247; // edi
  unsigned int *v248; // eax
  NiD3DTextureStage *v249; // eax
  _DWORD *v250; // ebp
  unsigned int *v251; // eax
  NiD3DTextureStage *v252; // eax
  unsigned int *v253; // edi
  unsigned int *v254; // eax
  NiD3DTextureStage *v255; // eax
  unsigned int *v256; // edi
  unsigned int *v257; // eax
  NiD3DTextureStage *v258; // eax
  unsigned int *v259; // edi
  unsigned int *v260; // eax
  NiD3DTextureStage *v261; // eax
  unsigned int *v262; // edi
  unsigned int *v263; // eax
  NiD3DTextureStage *v264; // eax
  unsigned int *v265; // edi
  unsigned int *v266; // eax
  NiD3DTextureStage *v267; // eax
  unsigned int *v268; // edi
  unsigned int *v269; // eax
  NiD3DTextureStage *v270; // eax
  unsigned int *v271; // eax
  NiD3DTextureStage *v272; // eax
  unsigned int *v273; // edi
  unsigned int *v274; // eax
  NiD3DTextureStage *v275; // eax
  unsigned int *v276; // edi
  unsigned int *v277; // eax
  NiD3DTextureStage *v278; // eax
  unsigned int *v279; // edi
  unsigned int *v280; // eax
  NiD3DTextureStage *v281; // eax
  unsigned int *v282; // edi
  unsigned int *v283; // eax
  NiD3DTextureStage *v284; // eax
  unsigned int *v285; // edi
  unsigned int *v286; // eax
  NiD3DTextureStage *v287; // eax
  unsigned int *v288; // edi
  unsigned int *v289; // eax
  NiD3DTextureStage *v290; // eax
  _DWORD *v291; // ebp
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
  unsigned int *v306; // edi
  unsigned int *v307; // eax
  NiD3DTextureStage *v308; // eax
  unsigned int *v309; // edi
  unsigned int *v310; // eax
  NiD3DTextureStage *v311; // eax
  unsigned int *a3; // [esp+28h] [ebp-1Ch] BYREF
  _DWORD *v313; // [esp+2Ch] [ebp-18h]
  int v314; // [esp+30h] [ebp-14h]
  NiD3DTextureStage *v315; // [esp+34h] [ebp-10h] BYREF
  unsigned int v316; // [esp+40h] [ebp-4h]

  v313 = this;
  v1 = 0;
  v2 = 0;
  v314 = 0;
  v316 = 0;
  a3 = 0;
  v3 = dword_B47620[0];
  v4 = dword_B47620[0] == 0;
  LOBYTE(v316) = 1;
  if ( !v4 )
  {
    v1 = (NiD3DPass *)v3;
    v314 = v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 0x60);
  }
  if ( v1->StageCount < 7 )
  {
    v5 = (unsigned int *)*sub_772630(&v315);
    if ( v5 )
    {
      v2 = (NiD3DTextureStage *)v5;
      ++v5[0x17];
      a3 = v5;
    }
    v6 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v6[7].Unk08 )
        sub_772560(v6);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v7 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v7;
    LOBYTE(v316) = 3;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v7;
      a3 = *v7;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v8 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v8[7].Unk08 )
        sub_772560(v8);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v9 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v9;
    LOBYTE(v316) = 4;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v9;
      a3 = *v9;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v10 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v10[7].Unk08 )
        sub_772560(v10);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v11 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v11;
    LOBYTE(v316) = 5;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v11;
      a3 = *v11;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v12 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v12[7].Unk08 )
        sub_772560(v12);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v13 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v13;
    LOBYTE(v316) = 6;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v13;
      a3 = *v13;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v14 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v14[7].Unk08 )
        sub_772560(v14);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v15 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v15;
    LOBYTE(v316) = 7;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v15;
      a3 = *v15;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v16 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v16[7].Unk08 )
        sub_772560(v16);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v17 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v17;
    LOBYTE(v316) = 8;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v17;
      a3 = *v17;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v18 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v18[7].Unk08 )
        sub_772560(v18);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v19 = (volatile LONG *)v313[0x37];
  VertexShader = v1->VertexShader;
  if ( VertexShader != (NiD3DVertexShader *)v19 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v19;
    if ( v19 )
      InterlockedIncrement(v19 + 1);
  }
  v21 = (volatile LONG *)v313[0x57];
  PixelShader = v1->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v21 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v21;
    if ( v21 )
      InterlockedIncrement(v21 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47624;
  dword_B43C50 = 0x39082;
  dword_B442E0 = 0x11C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47624;
    v314 = dword_B47624;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v23 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v23;
    LOBYTE(v316) = 9;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v23;
      a3 = *v23;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v24 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v24[7].Unk08 )
        sub_772560(v24);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v25 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v25;
    LOBYTE(v316) = 0xA;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v25;
      a3 = *v25;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v26 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v26[7].Unk08 )
        sub_772560(v26);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v27 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v27;
    LOBYTE(v316) = 0xB;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v27;
      a3 = *v27;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v28 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v28[7].Unk08 )
        sub_772560(v28);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v29 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v29;
    LOBYTE(v316) = 0xC;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v29;
      a3 = *v29;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v30 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v30[7].Unk08 )
        sub_772560(v30);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v31 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v31;
    LOBYTE(v316) = 0xD;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v31;
      a3 = *v31;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v32 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v32[7].Unk08 )
        sub_772560(v32);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v33 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v33;
    LOBYTE(v316) = 0xE;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v33;
      a3 = *v33;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v34 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v34[7].Unk08 )
        sub_772560(v34);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v35 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v35;
    LOBYTE(v316) = 0xF;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v35;
      a3 = *v35;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v36 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v36[7].Unk08 )
        sub_772560(v36);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v37 = (volatile LONG *)v313[0x37];
  v38 = v1->VertexShader;
  if ( v38 != (NiD3DVertexShader *)v37 )
  {
    if ( v38 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v38 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v38)(v38, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v37;
    if ( v37 )
      InterlockedIncrement(v37 + 1);
  }
  v39 = (volatile LONG *)v313[0x58];
  v40 = v1->PixelShader;
  if ( v40 != (NiD3DPixelShader *)v39 )
  {
    if ( v40 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v40 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v40)(v40, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v39;
    if ( v39 )
      InterlockedIncrement(v39 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47628;
  dword_B43C54 = 0x39082;
  dword_B442E4 = 0x19C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47628;
    v314 = dword_B47628;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v41 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v41;
    LOBYTE(v316) = 0x10;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v41;
      a3 = *v41;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v42 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v42[7].Unk08 )
        sub_772560(v42);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v43 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v43;
    LOBYTE(v316) = 0x11;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v43;
      a3 = *v43;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v44 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v44[7].Unk08 )
        sub_772560(v44);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v45 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v45;
    LOBYTE(v316) = 0x12;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v45;
      a3 = *v45;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v46 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v46[7].Unk08 )
        sub_772560(v46);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v47 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v47;
    LOBYTE(v316) = 0x13;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v47;
      a3 = *v47;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v48 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v48[7].Unk08 )
        sub_772560(v48);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v49 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v49;
    LOBYTE(v316) = 0x14;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v49;
      a3 = *v49;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v50 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v50[7].Unk08 )
        sub_772560(v50);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v51 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v51;
    LOBYTE(v316) = 0x15;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v51;
      a3 = *v51;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v52 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v52[7].Unk08 )
        sub_772560(v52);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v53 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v53;
    LOBYTE(v316) = 0x16;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v53;
      a3 = *v53;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v54 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v54[7].Unk08 )
        sub_772560(v54);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v55 = (volatile LONG *)v313[0x38];
  v56 = v1->VertexShader;
  if ( v56 != (NiD3DVertexShader *)v55 )
  {
    if ( v56 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v56)(v56, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v55;
    if ( v55 )
      InterlockedIncrement(v55 + 1);
  }
  v57 = (volatile LONG *)v313[0x57];
  v58 = v1->PixelShader;
  if ( v58 != (NiD3DPixelShader *)v57 )
  {
    if ( v58 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v58 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v58)(v58, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v57;
    if ( v57 )
      InterlockedIncrement(v57 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B4762C;
  dword_B43C60 = 0x79088;
  dword_B442F0 = 0x11C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4762C;
    v314 = dword_B4762C;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v59 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v59;
    LOBYTE(v316) = 0x17;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v59;
      a3 = *v59;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v60 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v60[7].Unk08 )
        sub_772560(v60);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v61 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v61;
    LOBYTE(v316) = 0x18;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v61;
      a3 = *v61;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v62 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v62[7].Unk08 )
        sub_772560(v62);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v63 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v63;
    LOBYTE(v316) = 0x19;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v63;
      a3 = *v63;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v64 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v64[7].Unk08 )
        sub_772560(v64);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v65 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v65;
    LOBYTE(v316) = 0x1A;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v65;
      a3 = *v65;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v66 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v66[7].Unk08 )
        sub_772560(v66);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v67 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v67;
    LOBYTE(v316) = 0x1B;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v67;
      a3 = *v67;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v68 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v68[7].Unk08 )
        sub_772560(v68);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v69 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v69;
    LOBYTE(v316) = 0x1C;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v69;
      a3 = *v69;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v70 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v70[7].Unk08 )
        sub_772560(v70);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v71 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v71;
    LOBYTE(v316) = 0x1D;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v71;
      a3 = *v71;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v72 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v72[7].Unk08 )
        sub_772560(v72);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v73 = (volatile LONG *)v313[0x38];
  v74 = v1->VertexShader;
  if ( v74 != (NiD3DVertexShader *)v73 )
  {
    if ( v74 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v74 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v74)(v74, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v73;
    if ( v73 )
      InterlockedIncrement(v73 + 1);
  }
  v75 = (volatile LONG *)v313[0x58];
  v76 = v1->PixelShader;
  if ( v76 != (NiD3DPixelShader *)v75 )
  {
    if ( v76 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v76 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v76)(v76, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v75;
    if ( v75 )
      InterlockedIncrement(v75 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47630;
  dword_B43C68 = 0x79088;
  dword_B442F8 = 0x19C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47630;
    v314 = dword_B47630;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v77 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v77;
    LOBYTE(v316) = 0x1E;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v77;
      a3 = *v77;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v78 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v78[7].Unk08 )
        sub_772560(v78);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v79 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v79;
    LOBYTE(v316) = 0x1F;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v79;
      a3 = *v79;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v80 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v80[7].Unk08 )
        sub_772560(v80);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v81 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v81;
    LOBYTE(v316) = 0x20;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v81;
      a3 = *v81;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v82 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v82[7].Unk08 )
        sub_772560(v82);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v83 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v83;
    LOBYTE(v316) = 0x21;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v83;
      a3 = *v83;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v84 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v84[7].Unk08 )
        sub_772560(v84);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v85 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v85;
    LOBYTE(v316) = 0x22;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v85;
      a3 = *v85;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v86 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v86[7].Unk08 )
        sub_772560(v86);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v87 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v87;
    LOBYTE(v316) = 0x23;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v87;
      a3 = *v87;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v88 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v88[7].Unk08 )
        sub_772560(v88);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v89 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v89;
    LOBYTE(v316) = 0x24;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v89;
      a3 = *v89;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v90 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v90[7].Unk08 )
        sub_772560(v90);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v91 = (volatile LONG *)v313[0x39];
  v92 = v1->VertexShader;
  if ( v92 != (NiD3DVertexShader *)v91 )
  {
    if ( v92 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v92 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v92)(v92, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v91;
    if ( v91 )
      InterlockedIncrement(v91 + 1);
  }
  v93 = (volatile LONG *)v313[0x59];
  v94 = v1->PixelShader;
  if ( v94 != (NiD3DPixelShader *)v93 )
  {
    if ( v94 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v94 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v94)(v94, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v93;
    if ( v93 )
      InterlockedIncrement(v93 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47634;
  dword_B43C7C = 0x390F2;
  dword_B4430C = 0x11C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47634;
    v314 = dword_B47634;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v95 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v95;
    LOBYTE(v316) = 0x25;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v95;
      a3 = *v95;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v96 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v96[7].Unk08 )
        sub_772560(v96);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v97 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v97;
    LOBYTE(v316) = 0x26;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v97;
      a3 = *v97;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v98 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v98[7].Unk08 )
        sub_772560(v98);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v99 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v99;
    LOBYTE(v316) = 0x27;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v99;
      a3 = *v99;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v100 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v100[7].Unk08 )
        sub_772560(v100);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v101 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v101;
    LOBYTE(v316) = 0x28;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v101;
      a3 = *v101;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v102 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v102[7].Unk08 )
        sub_772560(v102);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v103 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v103;
    LOBYTE(v316) = 0x29;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v103;
      a3 = *v103;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v104 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v104[7].Unk08 )
        sub_772560(v104);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v105 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v105;
    LOBYTE(v316) = 0x2A;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v105;
      a3 = *v105;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v106 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v106[7].Unk08 )
        sub_772560(v106);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v107 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v107;
    LOBYTE(v316) = 0x2B;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v107;
      a3 = *v107;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v108 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v108[7].Unk08 )
        sub_772560(v108);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v109 = v313;
  sub_7AECB0(v1, (NiD3DVertexShader *)v313[0x39]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v313[0x5A]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47638;
  dword_B43C80 = 0x390F2;
  dword_B44310 = 0x19C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47638;
    v314 = dword_B47638;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v110 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v110;
    LOBYTE(v316) = 0x2C;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v110;
      a3 = *v110;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v111 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v111[7].Unk08 )
        sub_772560(v111);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v112 = (unsigned int **)sub_772630(&v315);
    v4 = v2 == (NiD3DTextureStage *)*v112;
    LOBYTE(v316) = 0x2D;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v112;
      a3 = *v112;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v113 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v113[7].Unk08 )
        sub_772560(v113);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v114 = sub_772630(&v315);
    LOBYTE(v316) = 0x2E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v114);
    v115 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v115[7].Unk08 )
        sub_772560(v115);
    }
    v116 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v116);
    v117 = sub_772630(&v315);
    LOBYTE(v316) = 0x2F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v117);
    v118 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v118[7].Unk08 )
        sub_772560(v118);
    }
    v119 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v119);
    v120 = sub_772630(&v315);
    LOBYTE(v316) = 0x30;
    sub_75FAE0((NiD3DTextureStage **)&a3, v120);
    v121 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v121[7].Unk08 )
        sub_772560(v121);
    }
    v122 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v122, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v122);
    v123 = sub_772630(&v315);
    LOBYTE(v316) = 0x31;
    sub_75FAE0((NiD3DTextureStage **)&a3, v123);
    v124 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v124[7].Unk08 )
        sub_772560(v124);
    }
    v125 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v125);
    v126 = sub_772630(&v315);
    LOBYTE(v316) = 0x32;
    sub_75FAE0((NiD3DTextureStage **)&a3, v126);
    v127 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v127[7].Unk08 )
        sub_772560(v127);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
    v109 = v313;
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v109[0x3A]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v109[0x59]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B4763C;
  dword_B43C8C = 0x790F8;
  dword_B4431C = 0x11C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4763C;
    v314 = dword_B4763C;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v128 = sub_772630(&v315);
    LOBYTE(v316) = 0x33;
    sub_75FAE0((NiD3DTextureStage **)&a3, v128);
    v129 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v129[7].Unk08 )
        sub_772560(v129);
    }
    v130 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v130);
    v131 = sub_772630(&v315);
    LOBYTE(v316) = 0x34;
    sub_75FAE0((NiD3DTextureStage **)&a3, v131);
    v132 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v132[7].Unk08 )
        sub_772560(v132);
    }
    v133 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v133);
    v134 = sub_772630(&v315);
    LOBYTE(v316) = 0x35;
    sub_75FAE0((NiD3DTextureStage **)&a3, v134);
    v135 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v135[7].Unk08 )
        sub_772560(v135);
    }
    v136 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v136);
    v137 = sub_772630(&v315);
    LOBYTE(v316) = 0x36;
    sub_75FAE0((NiD3DTextureStage **)&a3, v137);
    v138 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v138[7].Unk08 )
        sub_772560(v138);
    }
    v139 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v139);
    v140 = sub_772630(&v315);
    LOBYTE(v316) = 0x37;
    sub_75FAE0((NiD3DTextureStage **)&a3, v140);
    v141 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v141[7].Unk08 )
        sub_772560(v141);
    }
    v142 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v142, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v142);
    v143 = sub_772630(&v315);
    LOBYTE(v316) = 0x38;
    sub_75FAE0((NiD3DTextureStage **)&a3, v143);
    v144 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v144[7].Unk08 )
        sub_772560(v144);
    }
    v145 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v145);
    v146 = sub_772630(&v315);
    LOBYTE(v316) = 0x39;
    sub_75FAE0((NiD3DTextureStage **)&a3, v146);
    v147 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v147[7].Unk08 )
        sub_772560(v147);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v313[0x3A]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v313[0x5A]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47640;
  dword_B43C8C = 0x790F8;
  dword_B4431C = 0x19C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47640;
    v314 = dword_B47640;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v148 = sub_772630(&v315);
    LOBYTE(v316) = 0x3A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v148);
    v149 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v149[7].Unk08 )
        sub_772560(v149);
    }
    v150 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v150);
    v151 = sub_772630(&v315);
    LOBYTE(v316) = 0x3B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v151);
    v152 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v152[7].Unk08 )
        sub_772560(v152);
    }
    v153 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v153);
    v154 = sub_772630(&v315);
    LOBYTE(v316) = 0x3C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v154);
    v155 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v155[7].Unk08 )
        sub_772560(v155);
    }
    v156 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v156);
    v157 = sub_772630(&v315);
    LOBYTE(v316) = 0x3D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v157);
    v158 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v158[7].Unk08 )
        sub_772560(v158);
    }
    v159 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v159);
    v160 = sub_772630(&v315);
    LOBYTE(v316) = 0x3E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v160);
    v161 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v161[7].Unk08 )
        sub_772560(v161);
    }
    v162 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v162, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v162);
    v163 = sub_772630(&v315);
    LOBYTE(v316) = 0x3F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v163);
    v164 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v164[7].Unk08 )
        sub_772560(v164);
    }
    v165 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v165);
    v166 = sub_772630(&v315);
    LOBYTE(v316) = 0x40;
    sub_75FAE0((NiD3DTextureStage **)&a3, v166);
    v167 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v167[7].Unk08 )
        sub_772560(v167);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v168 = v313;
  sub_7AECB0(v1, (NiD3DVertexShader *)v313[0x3B]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v168[0x5B]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47644;
  dword_B43CA8 = 0x3B082;
  dword_B44338 = 0x13C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47644;
    v314 = dword_B47644;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v169 = sub_772630(&v315);
    LOBYTE(v316) = 0x41;
    sub_75FAE0((NiD3DTextureStage **)&a3, v169);
    v170 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v170[7].Unk08 )
        sub_772560(v170);
    }
    v171 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v171);
    v172 = sub_772630(&v315);
    LOBYTE(v316) = 0x42;
    sub_75FAE0((NiD3DTextureStage **)&a3, v172);
    v173 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v173[7].Unk08 )
        sub_772560(v173);
    }
    v174 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v174);
    v175 = sub_772630(&v315);
    LOBYTE(v316) = 0x43;
    sub_75FAE0((NiD3DTextureStage **)&a3, v175);
    v176 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v176[7].Unk08 )
        sub_772560(v176);
    }
    v177 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v177);
    v178 = sub_772630(&v315);
    LOBYTE(v316) = 0x44;
    sub_75FAE0((NiD3DTextureStage **)&a3, v178);
    v179 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v179[7].Unk08 )
        sub_772560(v179);
    }
    v180 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v180);
    v181 = sub_772630(&v315);
    LOBYTE(v316) = 0x45;
    sub_75FAE0((NiD3DTextureStage **)&a3, v181);
    v182 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v182[7].Unk08 )
        sub_772560(v182);
    }
    v183 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v183, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v183);
    v184 = sub_772630(&v315);
    LOBYTE(v316) = 0x46;
    sub_75FAE0((NiD3DTextureStage **)&a3, v184);
    v185 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v185[7].Unk08 )
        sub_772560(v185);
    }
    v186 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v186);
    v187 = sub_772630(&v315);
    LOBYTE(v316) = 0x47;
    sub_75FAE0((NiD3DTextureStage **)&a3, v187);
    v188 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v188[7].Unk08 )
        sub_772560(v188);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v313[0x3B]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v313[0x5C]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47648;
  dword_B43CAC = 0x3B082;
  dword_B4433C = 0x1BC;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47648;
    v314 = dword_B47648;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v189 = sub_772630(&v315);
    LOBYTE(v316) = 0x48;
    sub_75FAE0((NiD3DTextureStage **)&a3, v189);
    v190 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v190[7].Unk08 )
        sub_772560(v190);
    }
    v191 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v191);
    v192 = sub_772630(&v315);
    LOBYTE(v316) = 0x49;
    sub_75FAE0((NiD3DTextureStage **)&a3, v192);
    v193 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v193[7].Unk08 )
        sub_772560(v193);
    }
    v194 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v194);
    v195 = sub_772630(&v315);
    LOBYTE(v316) = 0x4A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v195);
    v196 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v196[7].Unk08 )
        sub_772560(v196);
    }
    v197 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v197);
    v198 = sub_772630(&v315);
    LOBYTE(v316) = 0x4B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v198);
    v199 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v199[7].Unk08 )
        sub_772560(v199);
    }
    v200 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v200);
    v201 = sub_772630(&v315);
    LOBYTE(v316) = 0x4C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v201);
    v202 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v202[7].Unk08 )
        sub_772560(v202);
    }
    v203 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v203, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v203);
    v204 = sub_772630(&v315);
    LOBYTE(v316) = 0x4D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v204);
    v205 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v205[7].Unk08 )
        sub_772560(v205);
    }
    v206 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v206);
    v207 = sub_772630(&v315);
    LOBYTE(v316) = 0x4E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v207);
    v208 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v208[7].Unk08 )
        sub_772560(v208);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v209 = v313;
  sub_7AECB0(v1, (NiD3DVertexShader *)v313[0x3C]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v209[0x5B]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B4764C;
  dword_B43CB8 = 0x7B088;
  dword_B44348 = 0x13C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4764C;
    v314 = dword_B4764C;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v210 = sub_772630(&v315);
    LOBYTE(v316) = 0x4F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v210);
    v211 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v211[7].Unk08 )
        sub_772560(v211);
    }
    v212 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v212);
    v213 = sub_772630(&v315);
    LOBYTE(v316) = 0x50;
    sub_75FAE0((NiD3DTextureStage **)&a3, v213);
    v214 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v214[7].Unk08 )
        sub_772560(v214);
    }
    v215 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v215);
    v216 = sub_772630(&v315);
    LOBYTE(v316) = 0x51;
    sub_75FAE0((NiD3DTextureStage **)&a3, v216);
    v217 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v217[7].Unk08 )
        sub_772560(v217);
    }
    v218 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v218);
    v219 = sub_772630(&v315);
    LOBYTE(v316) = 0x52;
    sub_75FAE0((NiD3DTextureStage **)&a3, v219);
    v220 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v220[7].Unk08 )
        sub_772560(v220);
    }
    v221 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v221);
    v222 = sub_772630(&v315);
    LOBYTE(v316) = 0x53;
    sub_75FAE0((NiD3DTextureStage **)&a3, v222);
    v223 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v223[7].Unk08 )
        sub_772560(v223);
    }
    v224 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v224, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v224);
    v225 = sub_772630(&v315);
    LOBYTE(v316) = 0x54;
    sub_75FAE0((NiD3DTextureStage **)&a3, v225);
    v226 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v226[7].Unk08 )
        sub_772560(v226);
    }
    v227 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v227);
    v228 = sub_772630(&v315);
    LOBYTE(v316) = 0x55;
    sub_75FAE0((NiD3DTextureStage **)&a3, v228);
    v229 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v229[7].Unk08 )
        sub_772560(v229);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v313[0x3C]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v313[0x5C]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47650;
  dword_B43CC0 = 0x7B088;
  dword_B44350 = 0x1BC;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47650;
    v314 = dword_B47650;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v230 = sub_772630(&v315);
    LOBYTE(v316) = 0x56;
    sub_75FAE0((NiD3DTextureStage **)&a3, v230);
    v231 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v231[7].Unk08 )
        sub_772560(v231);
    }
    v232 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v232);
    v233 = sub_772630(&v315);
    LOBYTE(v316) = 0x57;
    sub_75FAE0((NiD3DTextureStage **)&a3, v233);
    v234 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v234[7].Unk08 )
        sub_772560(v234);
    }
    v235 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v235);
    v236 = sub_772630(&v315);
    LOBYTE(v316) = 0x58;
    sub_75FAE0((NiD3DTextureStage **)&a3, v236);
    v237 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v237[7].Unk08 )
        sub_772560(v237);
    }
    v238 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v238);
    v239 = sub_772630(&v315);
    LOBYTE(v316) = 0x59;
    sub_75FAE0((NiD3DTextureStage **)&a3, v239);
    v240 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v240[7].Unk08 )
        sub_772560(v240);
    }
    v241 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v241);
    v242 = sub_772630(&v315);
    LOBYTE(v316) = 0x5A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v242);
    v243 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v243[7].Unk08 )
        sub_772560(v243);
    }
    v244 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v244, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v244);
    v245 = sub_772630(&v315);
    LOBYTE(v316) = 0x5B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v245);
    v246 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v246[7].Unk08 )
        sub_772560(v246);
    }
    v247 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v247);
    v248 = sub_772630(&v315);
    LOBYTE(v316) = 0x5C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v248);
    v249 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v249[7].Unk08 )
        sub_772560(v249);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v250 = v313;
  sub_7AECB0(v1, (NiD3DVertexShader *)v313[0x3D]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v250[0x5D]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47654;
  dword_B43CD4 = 0x3B0F2;
  dword_B44364 = 0x13C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47654;
    v314 = dword_B47654;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v251 = sub_772630(&v315);
    LOBYTE(v316) = 0x5D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v251);
    v252 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v252[7].Unk08 )
        sub_772560(v252);
    }
    v253 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v253);
    v254 = sub_772630(&v315);
    LOBYTE(v316) = 0x5E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v254);
    v255 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v255[7].Unk08 )
        sub_772560(v255);
    }
    v256 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v256);
    v257 = sub_772630(&v315);
    LOBYTE(v316) = 0x5F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v257);
    v258 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v258[7].Unk08 )
        sub_772560(v258);
    }
    v259 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v259);
    v260 = sub_772630(&v315);
    LOBYTE(v316) = 0x60;
    sub_75FAE0((NiD3DTextureStage **)&a3, v260);
    v261 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v261[7].Unk08 )
        sub_772560(v261);
    }
    v262 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v262);
    v263 = sub_772630(&v315);
    LOBYTE(v316) = 0x61;
    sub_75FAE0((NiD3DTextureStage **)&a3, v263);
    v264 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v264[7].Unk08 )
        sub_772560(v264);
    }
    v265 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v265, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v265);
    v266 = sub_772630(&v315);
    LOBYTE(v316) = 0x62;
    sub_75FAE0((NiD3DTextureStage **)&a3, v266);
    v267 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v267[7].Unk08 )
        sub_772560(v267);
    }
    v268 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v268);
    v269 = sub_772630(&v315);
    LOBYTE(v316) = 0x63;
    sub_75FAE0((NiD3DTextureStage **)&a3, v269);
    v270 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v270[7].Unk08 )
        sub_772560(v270);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v313[0x3D]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v313[0x5E]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B47658;
  dword_B43CD8 = 0x3B0F2;
  dword_B44368 = 0x1BC;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47658;
    v314 = dword_B47658;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v271 = sub_772630(&v315);
    LOBYTE(v316) = 0x64;
    sub_75FAE0((NiD3DTextureStage **)&a3, v271);
    v272 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v272[7].Unk08 )
        sub_772560(v272);
    }
    v273 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v273);
    v274 = sub_772630(&v315);
    LOBYTE(v316) = 0x65;
    sub_75FAE0((NiD3DTextureStage **)&a3, v274);
    v275 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v275[7].Unk08 )
        sub_772560(v275);
    }
    v276 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v276);
    v277 = sub_772630(&v315);
    LOBYTE(v316) = 0x66;
    sub_75FAE0((NiD3DTextureStage **)&a3, v277);
    v278 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v278[7].Unk08 )
        sub_772560(v278);
    }
    v279 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v279);
    v280 = sub_772630(&v315);
    LOBYTE(v316) = 0x67;
    sub_75FAE0((NiD3DTextureStage **)&a3, v280);
    v281 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v281[7].Unk08 )
        sub_772560(v281);
    }
    v282 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v282);
    v283 = sub_772630(&v315);
    LOBYTE(v316) = 0x68;
    sub_75FAE0((NiD3DTextureStage **)&a3, v283);
    v284 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v284[7].Unk08 )
        sub_772560(v284);
    }
    v285 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v285, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v285);
    v286 = sub_772630(&v315);
    LOBYTE(v316) = 0x69;
    sub_75FAE0((NiD3DTextureStage **)&a3, v286);
    v287 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v287[7].Unk08 )
        sub_772560(v287);
    }
    v288 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v288);
    v289 = sub_772630(&v315);
    LOBYTE(v316) = 0x6A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v289);
    v290 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v290[7].Unk08 )
        sub_772560(v290);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v291 = v313;
  sub_7AECB0(v1, (NiD3DVertexShader *)v313[0x3E]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v291[0x5D]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B4765C;
  dword_B43CE4 = 0x7B0F8;
  dword_B44374 = 0x13C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4765C;
    v314 = dword_B4765C;
    if ( v314 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v292 = sub_772630(&v315);
    LOBYTE(v316) = 0x6B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v292);
    v293 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v293[7].Unk08 )
        sub_772560(v293);
    }
    v294 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v294);
    v295 = sub_772630(&v315);
    LOBYTE(v316) = 0x6C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v295);
    v296 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v296[7].Unk08 )
        sub_772560(v296);
    }
    v297 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v297);
    v298 = sub_772630(&v315);
    LOBYTE(v316) = 0x6D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v298);
    v299 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v299[7].Unk08 )
        sub_772560(v299);
    }
    v300 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v300);
    v301 = sub_772630(&v315);
    LOBYTE(v316) = 0x6E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v301);
    v302 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v302[7].Unk08 )
        sub_772560(v302);
    }
    v303 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v303);
    v304 = sub_772630(&v315);
    LOBYTE(v316) = 0x6F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v304);
    v305 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v305[7].Unk08 )
        sub_772560(v305);
    }
    v306 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v306, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v306);
    v307 = sub_772630(&v315);
    LOBYTE(v316) = 0x70;
    sub_75FAE0((NiD3DTextureStage **)&a3, v307);
    v308 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v308[7].Unk08 )
        sub_772560(v308);
    }
    v309 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v309);
    v310 = sub_772630(&v315);
    LOBYTE(v316) = 0x71;
    sub_75FAE0((NiD3DTextureStage **)&a3, v310);
    v311 = v315;
    LOBYTE(v316) = 1;
    if ( v315 )
    {
      --v315[7].Unk08;
      if ( !v311[7].Unk08 )
        sub_772560(v311);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v313[0x3E]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v313[0x5E]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  dword_B43CEC = 0x7B0F8;
  dword_B4437C = 0x1BC;
  LOBYTE(v316) = 0;
  if ( v2 )
  {
    v4 = v2[7].Unk08-- == 1;
    if ( v4 )
      sub_772560(v2);
  }
  v4 = v1->RefCount-- == 1;
  v316 = 0xFFFFFFFF;
  if ( v4 )
    sub_7604D0(v1);
}
