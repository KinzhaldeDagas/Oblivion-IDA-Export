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
  unsigned int *v72; // eax
  NiD3DTextureStage *v73; // eax
  unsigned int *v74; // edi
  unsigned int *v75; // eax
  NiD3DTextureStage *v76; // eax
  unsigned int *v77; // edi
  unsigned int *v78; // eax
  NiD3DTextureStage *v79; // eax
  unsigned int *v80; // edi
  unsigned int *v81; // eax
  NiD3DTextureStage *v82; // eax
  unsigned int *v83; // eax
  NiD3DTextureStage *v84; // eax
  unsigned int *v85; // edi
  unsigned int *v86; // eax
  NiD3DTextureStage *v87; // eax
  unsigned int *v88; // eax
  NiD3DTextureStage *v89; // eax
  unsigned int *v90; // edi
  unsigned int *v91; // eax
  NiD3DTextureStage *v92; // eax
  unsigned int *v93; // eax
  NiD3DTextureStage *v94; // eax
  unsigned int *v95; // edi
  unsigned int *v96; // eax
  NiD3DTextureStage *v97; // eax
  unsigned int *v98; // eax
  NiD3DTextureStage *v99; // eax
  unsigned int *v100; // edi
  unsigned int *v101; // eax
  NiD3DTextureStage *v102; // eax
  unsigned int *v103; // eax
  NiD3DTextureStage *v104; // eax
  unsigned int *v105; // edi
  unsigned int *v106; // eax
  NiD3DTextureStage *v107; // eax
  unsigned int *v108; // edi
  unsigned int *v109; // eax
  NiD3DTextureStage *v110; // eax
  unsigned int *v111; // eax
  NiD3DTextureStage *v112; // eax
  unsigned int *v113; // edi
  unsigned int *v114; // eax
  NiD3DTextureStage *v115; // eax
  unsigned int *v116; // edi
  unsigned int *v117; // eax
  NiD3DTextureStage *v118; // eax
  unsigned int *v119; // eax
  NiD3DTextureStage *v120; // eax
  unsigned int *v121; // edi
  unsigned int *v122; // eax
  NiD3DTextureStage *v123; // eax
  unsigned int *v124; // edi
  unsigned int *v125; // eax
  NiD3DTextureStage *v126; // eax
  unsigned int *v127; // edi
  unsigned int *v128; // eax
  NiD3DTextureStage *v129; // eax
  unsigned int *v130; // eax
  NiD3DTextureStage *v131; // eax
  unsigned int *v132; // edi
  unsigned int *v133; // eax
  NiD3DTextureStage *v134; // eax
  unsigned int *v135; // edi
  unsigned int *v136; // eax
  NiD3DTextureStage *v137; // eax
  unsigned int *v138; // edi
  unsigned int *v139; // eax
  NiD3DTextureStage *v140; // eax
  NiD3DPass *v141; // eax
  NiD3DPass *v142; // eax
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
  unsigned int *v153; // eax
  NiD3DTextureStage *v154; // eax
  unsigned int *v155; // edi
  unsigned int *v156; // eax
  NiD3DTextureStage *v157; // eax
  unsigned int *v158; // eax
  NiD3DTextureStage *v159; // eax
  unsigned int *v160; // edi
  unsigned int *v161; // eax
  NiD3DTextureStage *v162; // eax
  NiD3DPass *v163; // esi
  unsigned int *v164; // eax
  NiD3DTextureStage *v165; // eax
  unsigned int *v166; // edi
  unsigned int *v167; // eax
  NiD3DTextureStage *v168; // eax
  unsigned int *v169; // edi
  unsigned int *v170; // eax
  NiD3DTextureStage *v171; // eax
  NiD3DPass *v172; // esi
  unsigned int *v173; // eax
  NiD3DTextureStage *v174; // eax
  unsigned int *v175; // edi
  unsigned int *v176; // eax
  NiD3DTextureStage *v177; // eax
  unsigned int *v178; // edi
  unsigned int *v179; // eax
  NiD3DTextureStage *v180; // eax
  NiD3DPass *v181; // esi
  unsigned int *v182; // eax
  NiD3DTextureStage *v183; // eax
  unsigned int *v184; // edi
  unsigned int *v185; // eax
  NiD3DTextureStage *v186; // eax
  unsigned int *v187; // edi
  unsigned int *v188; // eax
  NiD3DTextureStage *v189; // eax
  NiD3DPass *v190; // esi
  unsigned int *v191; // eax
  NiD3DTextureStage *v192; // eax
  unsigned int *v193; // edi
  unsigned int *v194; // eax
  NiD3DTextureStage *v195; // eax
  unsigned int *v196; // edi
  unsigned int *v197; // eax
  NiD3DTextureStage *v198; // eax
  unsigned int *v199; // edi
  unsigned int *v200; // eax
  NiD3DTextureStage *v201; // eax
  NiD3DPass *v202; // esi
  unsigned int *v203; // eax
  NiD3DTextureStage *v204; // eax
  unsigned int *v205; // edi
  unsigned int *v206; // eax
  NiD3DTextureStage *v207; // eax
  unsigned int *v208; // edi
  unsigned int *v209; // eax
  NiD3DTextureStage *v210; // eax
  unsigned int *v211; // edi
  unsigned int *v212; // eax
  NiD3DTextureStage *v213; // eax
  NiD3DPass *v214; // esi
  unsigned int *v215; // eax
  NiD3DTextureStage *v216; // eax
  unsigned int *v217; // edi
  unsigned int *v218; // eax
  NiD3DTextureStage *v219; // eax
  NiD3DPass *v220; // esi
  unsigned int *v221; // eax
  NiD3DTextureStage *v222; // eax
  unsigned int *v223; // edi
  unsigned int *v224; // eax
  NiD3DTextureStage *v225; // eax
  NiD3DPass *v226; // esi
  unsigned int *v227; // eax
  NiD3DTextureStage *v228; // eax
  unsigned int *v229; // edi
  unsigned int *v230; // eax
  NiD3DTextureStage *v231; // eax
  NiD3DPass *v232; // esi
  unsigned int *v233; // eax
  NiD3DTextureStage *v234; // eax
  unsigned int *v235; // edi
  unsigned int *v236; // eax
  NiD3DTextureStage *v237; // eax
  NiD3DPass *v238; // esi
  unsigned int *v239; // eax
  NiD3DTextureStage *v240; // eax
  unsigned int *v241; // edi
  unsigned int *v242; // eax
  NiD3DTextureStage *v243; // eax
  unsigned int *v244; // edi
  unsigned int *v245; // eax
  NiD3DTextureStage *v246; // eax
  NiD3DPass *v247; // esi
  unsigned int *v248; // eax
  NiD3DTextureStage *v249; // eax
  unsigned int *v250; // edi
  unsigned int *v251; // eax
  NiD3DTextureStage *v252; // eax
  unsigned int *v253; // edi
  unsigned int *v254; // eax
  NiD3DTextureStage *v255; // eax
  NiD3DPass *v256; // esi
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
  NiD3DPass *v268; // esi
  unsigned int *v269; // eax
  NiD3DTextureStage *v270; // eax
  unsigned int *v271; // edi
  unsigned int *v272; // eax
  NiD3DTextureStage *v273; // eax
  unsigned int *v274; // edi
  unsigned int *v275; // eax
  NiD3DTextureStage *v276; // eax
  NiD3DPass *v277; // esi
  unsigned int *v278; // eax
  NiD3DTextureStage *v279; // eax
  unsigned int *v280; // edi
  unsigned int *v281; // eax
  NiD3DTextureStage *v282; // eax
  unsigned int *v283; // edi
  unsigned int *v284; // eax
  NiD3DTextureStage *v285; // eax
  NiD3DPass *v286; // eax
  NiD3DPass *v287; // eax
  unsigned int *a3; // [esp+38h] [ebp-18h] BYREF
  NiD3DPassVtbl **v289; // [esp+3Ch] [ebp-14h] BYREF
  NiD3DTextureStage *v290; // [esp+40h] [ebp-10h] BYREF
  unsigned int v291; // [esp+4Ch] [ebp-4h]

  v0 = 0;
  v289 = 0;
  v1 = 0;
  v291 = 0;
  a3 = 0;
  v2 = dword_B45604;
  v3 = dword_B45604 == 0;
  LOBYTE(v291) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    v289 = (NiD3DPassVtbl **)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( v0->StageCount < 2 )
  {
    v4 = (unsigned int *)*sub_772630(&v290);
    if ( v4 )
    {
      v1 = (NiD3DTextureStage *)v4;
      ++v4[0x17];
      a3 = v4;
    }
    v5 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v6 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v6;
    LOBYTE(v291) = 3;
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
    v7 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v9 = dword_B452B8;
  if ( VertexShader != (NiD3DVertexShader *)dword_B452B8 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  PixelShader = v0->PixelShader;
  v11 = dword_B450AC;
  if ( PixelShader != (NiD3DPixelShader *)dword_B450AC )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
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
  v3 = v0 == (NiD3DPass *)dword_B45608;
  dword_B43B84 = 0x82;
  dword_B44214 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45608;
    v289 = (NiD3DPassVtbl **)dword_B45608;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v12 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v12;
    LOBYTE(v291) = 4;
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
    v13 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v13[7].Unk08 )
        sub_772560(v13);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v14 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v14;
    LOBYTE(v291) = 5;
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
    v15 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v15[7].Unk08 )
        sub_772560(v15);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v16 = v0->VertexShader;
  v17 = dword_B452C0;
  if ( v16 != (NiD3DVertexShader *)dword_B452C0 )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v16 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)(v17 + 4));
  }
  v18 = v0->PixelShader;
  v19 = dword_B450BC;
  if ( v18 != (NiD3DPixelShader *)dword_B450BC )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v18 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v18)(v18, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
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
  v3 = v0 == (NiD3DPass *)dword_B45670;
  dword_B43B88 = 0x82;
  dword_B44218 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45670;
    v289 = (NiD3DPassVtbl **)dword_B45670;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v20 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v20;
    LOBYTE(v291) = 6;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v20;
      a3 = *v20;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v21 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v21[7].Unk08 )
        sub_772560(v21);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v22 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v22;
    LOBYTE(v291) = 7;
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
    v23 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v23[7].Unk08 )
        sub_772560(v23);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v24 = v0->VertexShader;
  v25 = dword_B452BC;
  if ( v24 != (NiD3DVertexShader *)dword_B452BC )
  {
    if ( v24 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v24 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v24)(v24, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v25;
    if ( v25 )
      InterlockedIncrement((volatile LONG *)(v25 + 4));
  }
  v26 = v0->PixelShader;
  v27 = dword_B450B0;
  if ( v26 != (NiD3DPixelShader *)dword_B450B0 )
  {
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v26 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v26)(v26, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v27;
    if ( v27 )
      InterlockedIncrement((volatile LONG *)(v27 + 4));
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
  v3 = v0 == (NiD3DPass *)dword_B45674;
  dword_B43BF0 = 0x18082;
  dword_B44280 = 0xC;
  dword_B43560 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45674;
    v289 = (NiD3DPassVtbl **)dword_B45674;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v28 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v28;
    LOBYTE(v291) = 8;
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
    v29 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v29[7].Unk08 )
        sub_772560(v29);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v30 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v30;
    LOBYTE(v291) = 9;
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
    v31 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v32 = v0->VertexShader;
  v33 = dword_B452C4;
  if ( v32 != (NiD3DVertexShader *)dword_B452C4 )
  {
    if ( v32 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v32)(v32, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v33;
    if ( v33 )
      InterlockedIncrement((volatile LONG *)(v33 + 4));
  }
  v34 = v0->PixelShader;
  v35 = dword_B450C0;
  if ( v34 != (NiD3DPixelShader *)dword_B450C0 )
  {
    if ( v34 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v34 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v34)(v34, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v35;
    if ( v35 )
      InterlockedIncrement((volatile LONG *)(v35 + 4));
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
  v3 = v0 == (NiD3DPass *)dword_B4560C;
  dword_B43BF4 = 0x18082;
  dword_B44284 = 0xC;
  dword_B43564 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4560C;
    v289 = (NiD3DPassVtbl **)dword_B4560C;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 3 )
  {
    v36 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v36;
    LOBYTE(v291) = 0xA;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v36;
      a3 = *v36;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v37 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v37[7].Unk08 )
        sub_772560(v37);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v38 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v38;
    LOBYTE(v291) = 0xB;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v38;
      a3 = *v38;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v39 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v39[7].Unk08 )
        sub_772560(v39);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v40 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v40;
    LOBYTE(v291) = 0xC;
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
    v41 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v41[7].Unk08 )
        sub_772560(v41);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v42 = v0->VertexShader;
  v43 = dword_B452B8;
  if ( v42 != (NiD3DVertexShader *)dword_B452B8 )
  {
    if ( v42 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v42)(v42, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v43;
    if ( v43 )
      InterlockedIncrement((volatile LONG *)(v43 + 4));
  }
  v44 = v0->PixelShader;
  v45 = dword_B450DC;
  if ( v44 != (NiD3DPixelShader *)dword_B450DC )
  {
    if ( v44 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v44 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v44)(v44, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v45;
    if ( v45 )
      InterlockedIncrement((volatile LONG *)(v45 + 4));
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
  v3 = v0 == (NiD3DPass *)dword_B45610;
  dword_B43B8C = 0x82;
  dword_B4421C = 0x8C;
  dword_B448AC = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45610;
    v289 = (NiD3DPassVtbl **)dword_B45610;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 3 )
  {
    v46 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v46;
    LOBYTE(v291) = 0xD;
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
    v47 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v47[7].Unk08 )
        sub_772560(v47);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v48 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v48;
    LOBYTE(v291) = 0xE;
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
    v49 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v49[7].Unk08 )
        sub_772560(v49);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v50 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v50;
    LOBYTE(v291) = 0xF;
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
    v51 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v51[7].Unk08 )
        sub_772560(v51);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v52 = v0->VertexShader;
  v53 = dword_B452C0;
  if ( v52 != (NiD3DVertexShader *)dword_B452C0 )
  {
    if ( v52 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v52 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v52)(v52, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v53;
    if ( v53 )
      InterlockedIncrement((volatile LONG *)(v53 + 4));
  }
  v54 = v0->PixelShader;
  v55 = dword_B450EC;
  if ( v54 != (NiD3DPixelShader *)dword_B450EC )
  {
    if ( v54 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v54 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v54)(v54, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v55;
    if ( v55 )
      InterlockedIncrement((volatile LONG *)(v55 + 4));
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
  v3 = v0 == (NiD3DPass *)dword_B45678;
  dword_B43B90 = 0x82;
  dword_B44220 = 0x8C;
  dword_B448B0 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45678;
    v289 = (NiD3DPassVtbl **)dword_B45678;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 3 )
  {
    v56 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v56;
    LOBYTE(v291) = 0x10;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v56;
      a3 = *v56;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v57 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v57[7].Unk08 )
        sub_772560(v57);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v58 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v58;
    LOBYTE(v291) = 0x11;
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
    v59 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v59[7].Unk08 )
        sub_772560(v59);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v60 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v60;
    LOBYTE(v291) = 0x12;
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
    v61 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v61[7].Unk08 )
        sub_772560(v61);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v62 = v0->VertexShader;
  v63 = dword_B452BC;
  if ( v62 != (NiD3DVertexShader *)dword_B452BC )
  {
    if ( v62 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v62 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v62)(v62, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v63;
    if ( v63 )
      InterlockedIncrement((volatile LONG *)(v63 + 4));
  }
  v64 = v0->PixelShader;
  v65 = dword_B450E0;
  if ( v64 != (NiD3DPixelShader *)dword_B450E0 )
  {
    if ( v64 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v64 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v64)(v64, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v65;
    if ( v65 )
      InterlockedIncrement((volatile LONG *)(v65 + 4));
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
  v3 = v0 == (NiD3DPass *)dword_B4567C;
  dword_B43BF8 = 0x18082;
  dword_B44288 = 0xC;
  dword_B43568 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4567C;
    v289 = (NiD3DPassVtbl **)dword_B4567C;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 3 )
  {
    v66 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v66;
    LOBYTE(v291) = 0x13;
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
    v67 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v67[7].Unk08 )
        sub_772560(v67);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v68 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v68;
    LOBYTE(v291) = 0x14;
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
    v69 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v69[7].Unk08 )
        sub_772560(v69);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v70 = (unsigned int **)sub_772630(&v290);
    v3 = v1 == (NiD3DTextureStage *)*v70;
    LOBYTE(v291) = 0x15;
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
    v71 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v71[7].Unk08 )
        sub_772560(v71);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B452C4);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450F0);
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
  v3 = v0 == (NiD3DPass *)dword_B45614;
  dword_B43BFC = 0x18082;
  dword_B4428C = 0xC;
  dword_B4356C = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45614;
    v289 = (NiD3DPassVtbl **)dword_B45614;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v72 = sub_772630(&v290);
    LOBYTE(v291) = 0x16;
    sub_75FAE0((NiD3DTextureStage **)&a3, v72);
    v73 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v73[7].Unk08 )
        sub_772560(v73);
    }
    v74 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v74);
    v75 = sub_772630(&v290);
    LOBYTE(v291) = 0x17;
    sub_75FAE0((NiD3DTextureStage **)&a3, v75);
    v76 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v76[7].Unk08 )
        sub_772560(v76);
    }
    v77 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v77);
    v78 = sub_772630(&v290);
    LOBYTE(v291) = 0x18;
    sub_75FAE0((NiD3DTextureStage **)&a3, v78);
    v79 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v79[7].Unk08 )
        sub_772560(v79);
    }
    v80 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, v80);
    v81 = sub_772630(&v290);
    LOBYTE(v291) = 0x19;
    sub_75FAE0((NiD3DTextureStage **)&a3, v81);
    v82 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v82[7].Unk08 )
        sub_772560(v82);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B452C8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450CC);
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
  v3 = v0 == (NiD3DPass *)dword_B45618;
  dword_B43B94 = 0x82;
  dword_B44224 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45618;
    v289 = (NiD3DPassVtbl **)dword_B45618;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v83 = sub_772630(&v290);
    LOBYTE(v291) = 0x1A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v83);
    v84 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v84[7].Unk08 )
        sub_772560(v84);
    }
    v85 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v85);
    v86 = sub_772630(&v290);
    LOBYTE(v291) = 0x1B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v86);
    v87 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v87[7].Unk08 )
        sub_772560(v87);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B452B8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450B4);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B4561C;
  dword_B43B98 = 0x82;
  dword_B44228 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4561C;
    v289 = (NiD3DPassVtbl **)dword_B4561C;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v88 = sub_772630(&v290);
    LOBYTE(v291) = 0x1C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v88);
    v89 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v89[7].Unk08 )
        sub_772560(v89);
    }
    v90 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v90);
    v91 = sub_772630(&v290);
    LOBYTE(v291) = 0x1D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v91);
    v92 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v92[7].Unk08 )
        sub_772560(v92);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B452C0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450C4);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45680;
  dword_B43B9C = 0x82;
  dword_B4422C = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45680;
    v289 = (NiD3DPassVtbl **)dword_B45680;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v93 = sub_772630(&v290);
    LOBYTE(v291) = 0x1E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v93);
    v94 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v94[7].Unk08 )
        sub_772560(v94);
    }
    v95 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v95);
    v96 = sub_772630(&v290);
    LOBYTE(v291) = 0x1F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v96);
    v97 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v97[7].Unk08 )
        sub_772560(v97);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B452BC);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450B8);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45684;
  dword_B43C00 = 0x18082;
  dword_B44290 = 0xC;
  dword_B43570 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45684;
    v289 = (NiD3DPassVtbl **)dword_B45684;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v98 = sub_772630(&v290);
    LOBYTE(v291) = 0x20;
    sub_75FAE0((NiD3DTextureStage **)&a3, v98);
    v99 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v99[7].Unk08 )
        sub_772560(v99);
    }
    v100 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v100);
    v101 = sub_772630(&v290);
    LOBYTE(v291) = 0x21;
    sub_75FAE0((NiD3DTextureStage **)&a3, v101);
    v102 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v102[7].Unk08 )
        sub_772560(v102);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B452C4);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450C8);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45620;
  dword_B43C04 = 0x18082;
  dword_B44294 = 0xC;
  dword_B43574 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45620;
    v289 = (NiD3DPassVtbl **)dword_B45620;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 3 )
  {
    v103 = sub_772630(&v290);
    LOBYTE(v291) = 0x22;
    sub_75FAE0((NiD3DTextureStage **)&a3, v103);
    v104 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v104[7].Unk08 )
        sub_772560(v104);
    }
    v105 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v105);
    v106 = sub_772630(&v290);
    LOBYTE(v291) = 0x23;
    sub_75FAE0((NiD3DTextureStage **)&a3, v106);
    v107 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v107[7].Unk08 )
        sub_772560(v107);
    }
    v108 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v108);
    v109 = sub_772630(&v290);
    LOBYTE(v291) = 0x24;
    sub_75FAE0((NiD3DTextureStage **)&a3, v109);
    v110 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v110[7].Unk08 )
        sub_772560(v110);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B452B8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450E4);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45624;
  dword_B43BA0 = 0x82;
  dword_B44230 = 0x8C;
  dword_B448C0 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45624;
    v289 = (NiD3DPassVtbl **)dword_B45624;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 3 )
  {
    v111 = sub_772630(&v290);
    LOBYTE(v291) = 0x25;
    sub_75FAE0((NiD3DTextureStage **)&a3, v111);
    v112 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v112[7].Unk08 )
        sub_772560(v112);
    }
    v113 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v113);
    v114 = sub_772630(&v290);
    LOBYTE(v291) = 0x26;
    sub_75FAE0((NiD3DTextureStage **)&a3, v114);
    v115 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v115[7].Unk08 )
        sub_772560(v115);
    }
    v116 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v116);
    v117 = sub_772630(&v290);
    LOBYTE(v291) = 0x27;
    sub_75FAE0((NiD3DTextureStage **)&a3, v117);
    v118 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v118[7].Unk08 )
        sub_772560(v118);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B452C0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450F4);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45688;
  dword_B43BA4 = 0x82;
  dword_B44234 = 0x8C;
  dword_B448C4 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45688;
    v289 = (NiD3DPassVtbl **)dword_B45688;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v119 = sub_772630(&v290);
    LOBYTE(v291) = 0x28;
    sub_75FAE0((NiD3DTextureStage **)&a3, v119);
    v120 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v120[7].Unk08 )
        sub_772560(v120);
    }
    v121 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v121);
    v122 = sub_772630(&v290);
    LOBYTE(v291) = 0x29;
    sub_75FAE0((NiD3DTextureStage **)&a3, v122);
    v123 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v123[7].Unk08 )
        sub_772560(v123);
    }
    v124 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v124);
    v125 = sub_772630(&v290);
    LOBYTE(v291) = 0x2A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v125);
    v126 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v126[7].Unk08 )
        sub_772560(v126);
    }
    v127 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, v127);
    v128 = sub_772630(&v290);
    LOBYTE(v291) = 0x2B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v128);
    v129 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v129[7].Unk08 )
        sub_772560(v129);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B452CC);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450D0);
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
  v3 = v0 == (NiD3DPass *)dword_B45628;
  dword_B43C08 = 0x18082;
  dword_B44298 = 0xC;
  dword_B43578 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45628;
    v289 = (NiD3DPassVtbl **)dword_B45628;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v130 = sub_772630(&v290);
    LOBYTE(v291) = 0x2C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v130);
    v131 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v131[7].Unk08 )
        sub_772560(v131);
    }
    v132 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v132);
    v133 = sub_772630(&v290);
    LOBYTE(v291) = 0x2D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v133);
    v134 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v134[7].Unk08 )
        sub_772560(v134);
    }
    v135 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v135);
    v136 = sub_772630(&v290);
    LOBYTE(v291) = 0x2E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v136);
    v137 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v137[7].Unk08 )
        sub_772560(v137);
    }
    v138 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, v138);
    v139 = sub_772630(&v290);
    LOBYTE(v291) = 0x2F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v139);
    v140 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v140[7].Unk08 )
        sub_772560(v140);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B452C8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450D4);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
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
  v141 = (NiD3DPass *)dword_B4562C;
  v3 = dword_B4562C == 0;
  dword_B43BA8 = 0x82;
  dword_B44238 = 0xC;
  if ( !v3 )
  {
    v3 = v141->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v141);
    dword_B4562C = 0;
  }
  v142 = (NiD3DPass *)dword_B45694;
  if ( dword_B45694 )
  {
    v3 = v142->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v142);
    dword_B45694 = 0;
  }
  if ( v0 != (NiD3DPass *)dword_B45630 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45630;
    v289 = (NiD3DPassVtbl **)dword_B45630;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v143 = sub_772630(&v290);
    LOBYTE(v291) = 0x30;
    sub_75FAE0((NiD3DTextureStage **)&a3, v143);
    v144 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v144[7].Unk08 )
        sub_772560(v144);
    }
    v145 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v145);
    v146 = sub_772630(&v290);
    LOBYTE(v291) = 0x31;
    sub_75FAE0((NiD3DTextureStage **)&a3, v146);
    v147 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v147[7].Unk08 )
        sub_772560(v147);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45334);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450AC);
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
  v3 = v0 == (NiD3DPass *)dword_B45634;
  dword_B43BB0 = 0x40088;
  dword_B44240 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45634;
    v289 = (NiD3DPassVtbl **)dword_B45634;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v148 = sub_772630(&v290);
    LOBYTE(v291) = 0x32;
    sub_75FAE0((NiD3DTextureStage **)&a3, v148);
    v149 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v149[7].Unk08 )
        sub_772560(v149);
    }
    v150 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v150);
    v151 = sub_772630(&v290);
    LOBYTE(v291) = 0x33;
    sub_75FAE0((NiD3DTextureStage **)&a3, v151);
    v152 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v152[7].Unk08 )
        sub_772560(v152);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45338);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450BC);
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
  v3 = v0 == (NiD3DPass *)dword_B45698;
  dword_B43BB4 = 0x40088;
  dword_B44244 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45698;
    v289 = (NiD3DPassVtbl **)dword_B45698;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v153 = sub_772630(&v290);
    LOBYTE(v291) = 0x34;
    sub_75FAE0((NiD3DTextureStage **)&a3, v153);
    v154 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v154[7].Unk08 )
        sub_772560(v154);
    }
    v155 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v155);
    v156 = sub_772630(&v290);
    LOBYTE(v291) = 0x35;
    sub_75FAE0((NiD3DTextureStage **)&a3, v156);
    v157 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v157[7].Unk08 )
        sub_772560(v157);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4533C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450B0);
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
  v3 = v0 == (NiD3DPass *)dword_B4569C;
  dword_B43C18 = 0x58088;
  dword_B442A8 = 0xC;
  dword_B43588 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4569C;
    v289 = (NiD3DPassVtbl **)dword_B4569C;
    if ( v289 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v158 = sub_772630(&v290);
    LOBYTE(v291) = 0x36;
    sub_75FAE0((NiD3DTextureStage **)&a3, v158);
    v159 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v159[7].Unk08 )
        sub_772560(v159);
    }
    v160 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v160);
    v161 = sub_772630(&v290);
    LOBYTE(v291) = 0x37;
    sub_75FAE0((NiD3DTextureStage **)&a3, v161);
    v162 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v162[7].Unk08 )
        sub_772560(v162);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45340);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B450C0);
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
  dword_B43C1C = 0x58088;
  dword_B442AC = 0xC;
  dword_B4358C = 0x18000;
  sub_76C890((NiD3DPass **)&v289, &dword_B45638);
  v163 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 3 )
  {
    v164 = sub_772630(&v290);
    LOBYTE(v291) = 0x38;
    sub_75FAE0((NiD3DTextureStage **)&a3, v164);
    v165 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v165[7].Unk08 )
        sub_772560(v165);
    }
    v166 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v163, v163->CurrentStage, v166);
    v167 = sub_772630(&v290);
    LOBYTE(v291) = 0x39;
    sub_75FAE0((NiD3DTextureStage **)&a3, v167);
    v168 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v168[7].Unk08 )
        sub_772560(v168);
    }
    v169 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v163, v163->CurrentStage, v169);
    v170 = sub_772630(&v290);
    LOBYTE(v291) = 0x3A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v170);
    v171 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v171[7].Unk08 )
        sub_772560(v171);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v163, v163->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v163, (NiD3DVertexShader *)dword_B45334);
  sub_7AEC60(&v163->__vftable, (NiD3DPixelShader *)dword_B450DC);
  if ( !v163->RenderStateGroup )
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v163->RenderStateGroup, 0x1B, 0, 0);
  if ( !v163->RenderStateGroup )
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v163->RenderStateGroup, 0xF, 0, 0);
  if ( !v163->RenderStateGroup )
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v163->RenderStateGroup, 7, 1, 0);
  if ( !v163->RenderStateGroup )
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v163->RenderStateGroup, 0x17, 4, 0);
  if ( !v163->RenderStateGroup )
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v163->RenderStateGroup, 0xE, 1, 0);
  if ( !v163->RenderStateGroup )
    v163->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v163->RenderStateGroup, 0x34, 0, 0);
  dword_B43BB8 = 0x40088;
  dword_B44248 = 0x8C;
  dword_B448D8 = 4;
  sub_76C890((NiD3DPass **)&v289, &dword_B456A0);
  v172 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 3 )
  {
    v173 = sub_772630(&v290);
    LOBYTE(v291) = 0x3B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v173);
    v174 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v174[7].Unk08 )
        sub_772560(v174);
    }
    v175 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v172, v172->CurrentStage, v175);
    v176 = sub_772630(&v290);
    LOBYTE(v291) = 0x3C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v176);
    v177 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v177[7].Unk08 )
        sub_772560(v177);
    }
    v178 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v172, v172->CurrentStage, v178);
    v179 = sub_772630(&v290);
    LOBYTE(v291) = 0x3D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v179);
    v180 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v180[7].Unk08 )
        sub_772560(v180);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v172, v172->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v172, (NiD3DVertexShader *)dword_B4533C);
  sub_7AEC60(&v172->__vftable, (NiD3DPixelShader *)dword_B450E0);
  if ( !v172->RenderStateGroup )
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v172->RenderStateGroup, 0x1B, 0, 0);
  if ( !v172->RenderStateGroup )
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v172->RenderStateGroup, 0xF, 0, 0);
  if ( !v172->RenderStateGroup )
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v172->RenderStateGroup, 7, 1, 0);
  if ( !v172->RenderStateGroup )
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v172->RenderStateGroup, 0x17, 4, 0);
  if ( !v172->RenderStateGroup )
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v172->RenderStateGroup, 0xE, 1, 0);
  if ( !v172->RenderStateGroup )
    v172->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v172->RenderStateGroup, 0x34, 0, 0);
  dword_B43C20 = 0x58088;
  dword_B442B0 = 0x8C;
  dword_B43590 = 0x18000;
  dword_B44940 = 4;
  sub_76C890((NiD3DPass **)&v289, &dword_B456A4);
  v181 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 3 )
  {
    v182 = sub_772630(&v290);
    LOBYTE(v291) = 0x3E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v182);
    v183 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v183[7].Unk08 )
        sub_772560(v183);
    }
    v184 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v181, v181->CurrentStage, v184);
    v185 = sub_772630(&v290);
    LOBYTE(v291) = 0x3F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v185);
    v186 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v186[7].Unk08 )
        sub_772560(v186);
    }
    v187 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v181, v181->CurrentStage, v187);
    v188 = sub_772630(&v290);
    LOBYTE(v291) = 0x40;
    sub_75FAE0((NiD3DTextureStage **)&a3, v188);
    v189 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v189[7].Unk08 )
        sub_772560(v189);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v181, v181->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v181, (NiD3DVertexShader *)dword_B45340);
  sub_7AEC60(&v181->__vftable, (NiD3DPixelShader *)dword_B450F0);
  if ( !v181->RenderStateGroup )
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v181->RenderStateGroup, 0x1B, 0, 0);
  if ( !v181->RenderStateGroup )
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v181->RenderStateGroup, 0xF, 0, 0);
  if ( !v181->RenderStateGroup )
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v181->RenderStateGroup, 7, 1, 0);
  if ( !v181->RenderStateGroup )
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v181->RenderStateGroup, 0x17, 4, 0);
  if ( !v181->RenderStateGroup )
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v181->RenderStateGroup, 0xE, 1, 0);
  if ( !v181->RenderStateGroup )
    v181->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v181->RenderStateGroup, 0x34, 0, 0);
  dword_B43C20 = 0x58088;
  dword_B442B0 = 0x8C;
  dword_B43590 = 0x18000;
  dword_B44940 = 4;
  sub_76C890((NiD3DPass **)&v289, &dword_B45640);
  v190 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 4 )
  {
    v191 = sub_772630(&v290);
    LOBYTE(v291) = 0x41;
    sub_75FAE0((NiD3DTextureStage **)&a3, v191);
    v192 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v192[7].Unk08 )
        sub_772560(v192);
    }
    v193 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v190, v190->CurrentStage, v193);
    v194 = sub_772630(&v290);
    LOBYTE(v291) = 0x42;
    sub_75FAE0((NiD3DTextureStage **)&a3, v194);
    v195 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v195[7].Unk08 )
        sub_772560(v195);
    }
    v196 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v190, v190->CurrentStage, v196);
    v197 = sub_772630(&v290);
    LOBYTE(v291) = 0x43;
    sub_75FAE0((NiD3DTextureStage **)&a3, v197);
    v198 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v198[7].Unk08 )
        sub_772560(v198);
    }
    v199 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v190, v190->CurrentStage, v199);
    v200 = sub_772630(&v290);
    LOBYTE(v291) = 0x44;
    sub_75FAE0((NiD3DTextureStage **)&a3, v200);
    v201 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v201[7].Unk08 )
        sub_772560(v201);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v190, v190->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v190, (NiD3DVertexShader *)dword_B45344);
  sub_7AEC60(&v190->__vftable, (NiD3DPixelShader *)dword_B450CC);
  if ( !v190->RenderStateGroup )
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v190->RenderStateGroup, 0x1B, 0, 0);
  if ( !v190->RenderStateGroup )
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v190->RenderStateGroup, 0xF, 0, 0);
  if ( !v190->RenderStateGroup )
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v190->RenderStateGroup, 7, 1, 0);
  if ( !v190->RenderStateGroup )
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v190->RenderStateGroup, 0x17, 4, 0);
  if ( !v190->RenderStateGroup )
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v190->RenderStateGroup, 0xE, 1, 0);
  if ( !v190->RenderStateGroup )
    v190->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v190->RenderStateGroup, 0x34, 0, 0);
  dword_B43BC0 = 0x40088;
  dword_B44250 = 0xC;
  sub_76C890((NiD3DPass **)&v289, &dword_B456B0);
  v202 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 4 )
  {
    v203 = sub_772630(&v290);
    LOBYTE(v291) = 0x45;
    sub_75FAE0((NiD3DTextureStage **)&a3, v203);
    v204 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v204[7].Unk08 )
        sub_772560(v204);
    }
    v205 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v202, v202->CurrentStage, v205);
    v206 = sub_772630(&v290);
    LOBYTE(v291) = 0x46;
    sub_75FAE0((NiD3DTextureStage **)&a3, v206);
    v207 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v207[7].Unk08 )
        sub_772560(v207);
    }
    v208 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v202, v202->CurrentStage, v208);
    v209 = sub_772630(&v290);
    LOBYTE(v291) = 0x47;
    sub_75FAE0((NiD3DTextureStage **)&a3, v209);
    v210 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v210[7].Unk08 )
        sub_772560(v210);
    }
    v211 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v202, v202->CurrentStage, v211);
    v212 = sub_772630(&v290);
    LOBYTE(v291) = 0x48;
    sub_75FAE0((NiD3DTextureStage **)&a3, v212);
    v213 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v213[7].Unk08 )
        sub_772560(v213);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v202, v202->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v202, (NiD3DVertexShader *)dword_B45348);
  sub_7AEC60(&v202->__vftable, (NiD3DPixelShader *)dword_B450D0);
  if ( !v202->RenderStateGroup )
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v202->RenderStateGroup, 0x1B, 0, 0);
  if ( !v202->RenderStateGroup )
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v202->RenderStateGroup, 0xF, 0, 0);
  if ( !v202->RenderStateGroup )
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v202->RenderStateGroup, 7, 1, 0);
  if ( !v202->RenderStateGroup )
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v202->RenderStateGroup, 0x17, 4, 0);
  if ( !v202->RenderStateGroup )
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v202->RenderStateGroup, 0xE, 1, 0);
  if ( !v202->RenderStateGroup )
    v202->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v202->RenderStateGroup, 0x34, 0, 0);
  dword_B43C30 = 0x58088;
  dword_B442C0 = 0xC;
  dword_B435A0 = 0x18000;
  sub_76C890((NiD3DPass **)&v289, &dword_B45644);
  v214 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 2 )
  {
    v215 = sub_772630(&v290);
    LOBYTE(v291) = 0x49;
    sub_75FAE0((NiD3DTextureStage **)&a3, v215);
    v216 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v216[7].Unk08 )
        sub_772560(v216);
    }
    v217 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v214, v214->CurrentStage, v217);
    v218 = sub_772630(&v290);
    LOBYTE(v291) = 0x4A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v218);
    v219 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v219[7].Unk08 )
        sub_772560(v219);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v214, v214->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v214, (NiD3DVertexShader *)dword_B45334);
  sub_7AEC60(&v214->__vftable, (NiD3DPixelShader *)dword_B450B4);
  if ( !v214->RenderStateGroup )
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v214->RenderStateGroup, 0x1B, 1, 0);
  if ( !v214->RenderStateGroup )
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v214->RenderStateGroup, 0x13, 5, 0);
  if ( !v214->RenderStateGroup )
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v214->RenderStateGroup, 0x14, 6, 0);
  if ( !v214->RenderStateGroup )
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v214->RenderStateGroup, 0xF, 1, 0);
  if ( !v214->RenderStateGroup )
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v214->RenderStateGroup, 7, 1, 0);
  if ( !v214->RenderStateGroup )
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v214->RenderStateGroup, 0x17, 4, 0);
  if ( !v214->RenderStateGroup )
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v214->RenderStateGroup, 0xE, 1, 0);
  if ( !v214->RenderStateGroup )
    v214->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v214->RenderStateGroup, 0x34, 0, 0);
  dword_B43BC4 = 0x40088;
  dword_B44254 = 0xC;
  sub_76C890((NiD3DPass **)&v289, &dword_B45648);
  v220 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 2 )
  {
    v221 = sub_772630(&v290);
    LOBYTE(v291) = 0x4B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v221);
    v222 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v222[7].Unk08 )
        sub_772560(v222);
    }
    v223 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v220, v220->CurrentStage, v223);
    v224 = sub_772630(&v290);
    LOBYTE(v291) = 0x4C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v224);
    v225 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v225[7].Unk08 )
        sub_772560(v225);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v220, v220->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v220, (NiD3DVertexShader *)dword_B45338);
  sub_7AEC60(&v220->__vftable, (NiD3DPixelShader *)dword_B450C4);
  if ( !v220->RenderStateGroup )
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v220->RenderStateGroup, 0x1B, 1, 0);
  if ( !v220->RenderStateGroup )
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v220->RenderStateGroup, 0x13, 5, 0);
  if ( !v220->RenderStateGroup )
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v220->RenderStateGroup, 0x14, 6, 0);
  if ( !v220->RenderStateGroup )
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v220->RenderStateGroup, 0xF, 1, 0);
  if ( !v220->RenderStateGroup )
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v220->RenderStateGroup, 7, 1, 0);
  if ( !v220->RenderStateGroup )
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v220->RenderStateGroup, 0x17, 4, 0);
  if ( !v220->RenderStateGroup )
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v220->RenderStateGroup, 0xE, 1, 0);
  if ( !v220->RenderStateGroup )
    v220->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v220->RenderStateGroup, 0x34, 0, 0);
  dword_B43BC8 = 0x40088;
  dword_B44258 = 0xC;
  sub_76C890((NiD3DPass **)&v289, &dword_B456A8);
  v226 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 2 )
  {
    v227 = sub_772630(&v290);
    LOBYTE(v291) = 0x4D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v227);
    v228 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v228[7].Unk08 )
        sub_772560(v228);
    }
    v229 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v226, v226->CurrentStage, v229);
    v230 = sub_772630(&v290);
    LOBYTE(v291) = 0x4E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v230);
    v231 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v231[7].Unk08 )
        sub_772560(v231);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v226, v226->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v226, (NiD3DVertexShader *)dword_B4533C);
  sub_7AEC60(&v226->__vftable, (NiD3DPixelShader *)dword_B450B8);
  if ( !v226->RenderStateGroup )
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v226->RenderStateGroup, 0x1B, 0, 0);
  if ( !v226->RenderStateGroup )
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v226->RenderStateGroup, 0x13, 5, 0);
  if ( !v226->RenderStateGroup )
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v226->RenderStateGroup, 0x14, 6, 0);
  if ( !v226->RenderStateGroup )
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v226->RenderStateGroup, 0xF, 1, 0);
  if ( !v226->RenderStateGroup )
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v226->RenderStateGroup, 7, 1, 0);
  if ( !v226->RenderStateGroup )
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v226->RenderStateGroup, 0x17, 4, 0);
  if ( !v226->RenderStateGroup )
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v226->RenderStateGroup, 0xE, 1, 0);
  if ( !v226->RenderStateGroup )
    v226->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v226->RenderStateGroup, 0x34, 0, 0);
  dword_B43C28 = 0x58088;
  dword_B442B8 = 0xC;
  dword_B43598 = 0x18000;
  sub_76C890((NiD3DPass **)&v289, &dword_B456AC);
  v232 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 2 )
  {
    v233 = sub_772630(&v290);
    LOBYTE(v291) = 0x4F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v233);
    v234 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v234[7].Unk08 )
        sub_772560(v234);
    }
    v235 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v232, v232->CurrentStage, v235);
    v236 = sub_772630(&v290);
    LOBYTE(v291) = 0x50;
    sub_75FAE0((NiD3DTextureStage **)&a3, v236);
    v237 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v237[7].Unk08 )
        sub_772560(v237);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v232, v232->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v232, (NiD3DVertexShader *)dword_B45340);
  sub_7AEC60(&v232->__vftable, (NiD3DPixelShader *)dword_B450C8);
  if ( !v232->RenderStateGroup )
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v232->RenderStateGroup, 0x1B, 0, 0);
  if ( !v232->RenderStateGroup )
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v232->RenderStateGroup, 0x13, 5, 0);
  if ( !v232->RenderStateGroup )
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v232->RenderStateGroup, 0x14, 6, 0);
  if ( !v232->RenderStateGroup )
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v232->RenderStateGroup, 0xF, 1, 0);
  if ( !v232->RenderStateGroup )
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v232->RenderStateGroup, 7, 1, 0);
  if ( !v232->RenderStateGroup )
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v232->RenderStateGroup, 0x17, 4, 0);
  if ( !v232->RenderStateGroup )
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v232->RenderStateGroup, 0xE, 1, 0);
  if ( !v232->RenderStateGroup )
    v232->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v232->RenderStateGroup, 0x34, 0, 0);
  dword_B43C2C = 0x58088;
  dword_B442BC = 0xC;
  dword_B4359C = 0x18000;
  sub_76C890((NiD3DPass **)&v289, &dword_B4564C);
  v238 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 3 )
  {
    v239 = sub_772630(&v290);
    LOBYTE(v291) = 0x51;
    sub_75FAE0((NiD3DTextureStage **)&a3, v239);
    v240 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v240[7].Unk08 )
        sub_772560(v240);
    }
    v241 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v238, v238->CurrentStage, v241);
    v242 = sub_772630(&v290);
    LOBYTE(v291) = 0x52;
    sub_75FAE0((NiD3DTextureStage **)&a3, v242);
    v243 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v243[7].Unk08 )
        sub_772560(v243);
    }
    v244 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v238, v238->CurrentStage, v244);
    v245 = sub_772630(&v290);
    LOBYTE(v291) = 0x53;
    sub_75FAE0((NiD3DTextureStage **)&a3, v245);
    v246 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v246[7].Unk08 )
        sub_772560(v246);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v238, v238->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v238, (NiD3DVertexShader *)dword_B45334);
  sub_7AEC60(&v238->__vftable, (NiD3DPixelShader *)dword_B450E4);
  if ( !v238->RenderStateGroup )
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v238->RenderStateGroup, 0x1B, 1, 0);
  if ( !v238->RenderStateGroup )
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v238->RenderStateGroup, 0x13, 5, 0);
  if ( !v238->RenderStateGroup )
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v238->RenderStateGroup, 0x14, 6, 0);
  if ( !v238->RenderStateGroup )
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v238->RenderStateGroup, 0xF, 1, 0);
  if ( !v238->RenderStateGroup )
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v238->RenderStateGroup, 7, 1, 0);
  if ( !v238->RenderStateGroup )
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v238->RenderStateGroup, 0x17, 4, 0);
  if ( !v238->RenderStateGroup )
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v238->RenderStateGroup, 0xE, 1, 0);
  if ( !v238->RenderStateGroup )
    v238->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v238->RenderStateGroup, 0x34, 0, 0);
  dword_B43BCC = 0x40088;
  dword_B4425C = 0x8C;
  dword_B448EC = 4;
  sub_76C890((NiD3DPass **)&v289, &dword_B45650);
  v247 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 3 )
  {
    v248 = sub_772630(&v290);
    LOBYTE(v291) = 0x54;
    sub_75FAE0((NiD3DTextureStage **)&a3, v248);
    v249 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v249[7].Unk08 )
        sub_772560(v249);
    }
    v250 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v247, v247->CurrentStage, v250);
    v251 = sub_772630(&v290);
    LOBYTE(v291) = 0x55;
    sub_75FAE0((NiD3DTextureStage **)&a3, v251);
    v252 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v252[7].Unk08 )
        sub_772560(v252);
    }
    v253 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v247, v247->CurrentStage, v253);
    v254 = sub_772630(&v290);
    LOBYTE(v291) = 0x56;
    sub_75FAE0((NiD3DTextureStage **)&a3, v254);
    v255 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v255[7].Unk08 )
        sub_772560(v255);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v247, v247->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v247, (NiD3DVertexShader *)dword_B45338);
  sub_7AEC60(&v247->__vftable, (NiD3DPixelShader *)dword_B450F4);
  if ( !v247->RenderStateGroup )
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v247->RenderStateGroup, 0x1B, 1, 0);
  if ( !v247->RenderStateGroup )
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v247->RenderStateGroup, 0x13, 5, 0);
  if ( !v247->RenderStateGroup )
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v247->RenderStateGroup, 0x14, 6, 0);
  if ( !v247->RenderStateGroup )
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v247->RenderStateGroup, 0xF, 1, 0);
  if ( !v247->RenderStateGroup )
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v247->RenderStateGroup, 7, 1, 0);
  if ( !v247->RenderStateGroup )
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v247->RenderStateGroup, 0x17, 4, 0);
  if ( !v247->RenderStateGroup )
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v247->RenderStateGroup, 0xE, 1, 0);
  if ( !v247->RenderStateGroup )
    v247->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v247->RenderStateGroup, 0x34, 0, 0);
  dword_B43BD0 = 0x40088;
  dword_B44260 = 0x8C;
  dword_B448F0 = 4;
  sub_76C890((NiD3DPass **)&v289, &dword_B45654);
  v256 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 3 )
  {
    v257 = sub_772630(&v290);
    LOBYTE(v291) = 0x57;
    sub_75FAE0((NiD3DTextureStage **)&a3, v257);
    v258 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v258[7].Unk08 )
        sub_772560(v258);
    }
    v259 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v256, v256->CurrentStage, v259);
    v260 = sub_772630(&v290);
    LOBYTE(v291) = 0x58;
    sub_75FAE0((NiD3DTextureStage **)&a3, v260);
    v261 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v261[7].Unk08 )
        sub_772560(v261);
    }
    v262 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v256, v256->CurrentStage, v262);
    v263 = sub_772630(&v290);
    LOBYTE(v291) = 0x59;
    sub_75FAE0((NiD3DTextureStage **)&a3, v263);
    v264 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v264[7].Unk08 )
        sub_772560(v264);
    }
    v265 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v256, v256->CurrentStage, v265);
    v266 = sub_772630(&v290);
    LOBYTE(v291) = 0x5A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v266);
    v267 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v267[7].Unk08 )
        sub_772560(v267);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v256, v256->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v256, (NiD3DVertexShader *)dword_B45344);
  sub_7AEC60(&v256->__vftable, (NiD3DPixelShader *)dword_B450D4);
  if ( !v256->RenderStateGroup )
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v256->RenderStateGroup, 0x1B, 1, 0);
  if ( !v256->RenderStateGroup )
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v256->RenderStateGroup, 0x13, 5, 0);
  if ( !v256->RenderStateGroup )
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v256->RenderStateGroup, 0x14, 6, 0);
  if ( !v256->RenderStateGroup )
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v256->RenderStateGroup, 0xF, 1, 0);
  if ( !v256->RenderStateGroup )
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v256->RenderStateGroup, 7, 1, 0);
  if ( !v256->RenderStateGroup )
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v256->RenderStateGroup, 0x17, 4, 0);
  if ( !v256->RenderStateGroup )
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v256->RenderStateGroup, 0xE, 1, 0);
  if ( !v256->RenderStateGroup )
    v256->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v256->RenderStateGroup, 0x34, 0, 0);
  dword_B43BD4 = 0x40088;
  dword_B44264 = 0xC;
  dword_B448F4 = 4;
  sub_76C890((NiD3DPass **)&v289, &dword_B456B4);
  v268 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 3 )
  {
    v269 = sub_772630(&v290);
    LOBYTE(v291) = 0x5B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v269);
    v270 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v270[7].Unk08 )
        sub_772560(v270);
    }
    v271 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v268, v268->CurrentStage, v271);
    v272 = sub_772630(&v290);
    LOBYTE(v291) = 0x5C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v272);
    v273 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v273[7].Unk08 )
        sub_772560(v273);
    }
    v274 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v268, v268->CurrentStage, v274);
    v275 = sub_772630(&v290);
    LOBYTE(v291) = 0x5D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v275);
    v276 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v276[7].Unk08 )
        sub_772560(v276);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v268, v268->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v268, (NiD3DVertexShader *)dword_B4533C);
  sub_7AEC60(&v268->__vftable, (NiD3DPixelShader *)dword_B450E8);
  if ( !v268->RenderStateGroup )
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v268->RenderStateGroup, 0x1B, 1, 0);
  if ( !v268->RenderStateGroup )
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v268->RenderStateGroup, 0x13, 5, 0);
  if ( !v268->RenderStateGroup )
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v268->RenderStateGroup, 0x14, 6, 0);
  if ( !v268->RenderStateGroup )
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v268->RenderStateGroup, 0xF, 1, 0);
  if ( !v268->RenderStateGroup )
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v268->RenderStateGroup, 7, 1, 0);
  if ( !v268->RenderStateGroup )
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v268->RenderStateGroup, 0x17, 4, 0);
  if ( !v268->RenderStateGroup )
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v268->RenderStateGroup, 0xE, 1, 0);
  if ( !v268->RenderStateGroup )
    v268->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v268->RenderStateGroup, 0x34, 0, 0);
  dword_B43C34 = 0x58088;
  dword_B442C4 = 0x8C;
  dword_B435A4 = 0x18000;
  dword_B44954 = 4;
  sub_76C890((NiD3DPass **)&v289, &dword_B456B8);
  v277 = (NiD3DPass *)v289;
  if ( (unsigned int)v289[6] < 3 )
  {
    v278 = sub_772630(&v290);
    LOBYTE(v291) = 0x5E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v278);
    v279 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v279[7].Unk08 )
        sub_772560(v279);
    }
    v280 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v277, v277->CurrentStage, v280);
    v281 = sub_772630(&v290);
    LOBYTE(v291) = 0x5F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v281);
    v282 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v282[7].Unk08 )
        sub_772560(v282);
    }
    v283 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v277, v277->CurrentStage, v283);
    v284 = sub_772630(&v290);
    LOBYTE(v291) = 0x60;
    sub_75FAE0((NiD3DTextureStage **)&a3, v284);
    v285 = v290;
    LOBYTE(v291) = 1;
    if ( v290 )
    {
      --v290[7].Unk08;
      if ( !v285[7].Unk08 )
        sub_772560(v285);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v277, v277->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v277, (NiD3DVertexShader *)dword_B45340);
  sub_7AEC60(&v277->__vftable, (NiD3DPixelShader *)dword_B450F8);
  if ( !v277->RenderStateGroup )
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v277->RenderStateGroup, 0x1B, 1, 0);
  if ( !v277->RenderStateGroup )
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v277->RenderStateGroup, 0x13, 5, 0);
  if ( !v277->RenderStateGroup )
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v277->RenderStateGroup, 0x14, 6, 0);
  if ( !v277->RenderStateGroup )
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v277->RenderStateGroup, 0xF, 1, 0);
  if ( !v277->RenderStateGroup )
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v277->RenderStateGroup, 7, 1, 0);
  if ( !v277->RenderStateGroup )
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v277->RenderStateGroup, 0x17, 4, 0);
  if ( !v277->RenderStateGroup )
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v277->RenderStateGroup, 0xE, 1, 0);
  if ( !v277->RenderStateGroup )
    v277->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v277->RenderStateGroup, 0x34, 0, 0);
  v286 = (NiD3DPass *)dword_B45658;
  v3 = dword_B45658 == 0;
  dword_B43C38 = 0x58088;
  dword_B442C8 = 0x8C;
  dword_B435A8 = 0x18000;
  dword_B44958 = 4;
  if ( !v3 )
  {
    v3 = v286->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v286);
    dword_B45658 = 0;
  }
  v287 = (NiD3DPass *)dword_B456BC;
  if ( dword_B456BC )
  {
    v3 = v287->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v287);
    dword_B456BC = 0;
  }
  LOBYTE(v291) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v277->RefCount-- == 1;
  v291 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v277);
}
