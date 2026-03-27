void sub_832740()
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
  NiD3DVertexShader *VertexShader; // ebp
  int v17; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v19; // ebx
  unsigned int **v20; // ebp
  NiD3DTextureStage *v21; // eax
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
  NiD3DVertexShader *v32; // ebp
  int v33; // ebx
  NiD3DPixelShader *v34; // ebp
  int v35; // ebx
  unsigned int **v36; // ebp
  NiD3DTextureStage *v37; // eax
  unsigned int **v38; // ebp
  NiD3DTextureStage *v39; // eax
  unsigned int **v40; // ebp
  NiD3DTextureStage *v41; // eax
  unsigned int **v42; // ebp
  NiD3DTextureStage *v43; // eax
  unsigned int **v44; // ebp
  NiD3DTextureStage *v45; // eax
  unsigned int **v46; // ebp
  NiD3DTextureStage *v47; // eax
  NiD3DVertexShader *v48; // ebp
  int v49; // ebx
  NiD3DPixelShader *v50; // ebp
  int v51; // ebx
  unsigned int **v52; // ebp
  NiD3DTextureStage *v53; // eax
  unsigned int **v54; // ebp
  NiD3DTextureStage *v55; // eax
  unsigned int **v56; // ebp
  NiD3DTextureStage *v57; // eax
  unsigned int **v58; // ebp
  NiD3DTextureStage *v59; // eax
  unsigned int **v60; // ebp
  NiD3DTextureStage *v61; // eax
  unsigned int **v62; // ebp
  NiD3DTextureStage *v63; // eax
  NiD3DVertexShader *v64; // ebp
  int v65; // ebx
  NiD3DPixelShader *v66; // ebp
  int v67; // ebx
  unsigned int **v68; // ebp
  NiD3DTextureStage *v69; // eax
  unsigned int **v70; // ebp
  NiD3DTextureStage *v71; // eax
  unsigned int **v72; // ebp
  NiD3DTextureStage *v73; // eax
  unsigned int **v74; // ebp
  NiD3DTextureStage *v75; // eax
  unsigned int **v76; // ebp
  NiD3DTextureStage *v77; // eax
  unsigned int **v78; // ebp
  NiD3DTextureStage *v79; // eax
  NiD3DVertexShader *v80; // ebp
  int v81; // ebx
  NiD3DPixelShader *v82; // ebp
  int v83; // ebx
  unsigned int **v84; // ebp
  NiD3DTextureStage *v85; // eax
  unsigned int **v86; // ebp
  NiD3DTextureStage *v87; // eax
  unsigned int **v88; // ebp
  NiD3DTextureStage *v89; // eax
  unsigned int **v90; // ebp
  NiD3DTextureStage *v91; // eax
  unsigned int **v92; // ebp
  NiD3DTextureStage *v93; // eax
  unsigned int **v94; // ebp
  NiD3DTextureStage *v95; // eax
  NiD3DVertexShader *v96; // ebp
  int v97; // ebx
  NiD3DPixelShader *v98; // ebp
  int v99; // ebx
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
  NiD3DVertexShader *v112; // ebp
  int v113; // ebx
  NiD3DPixelShader *v114; // ebp
  int v115; // ebx
  unsigned int **v116; // ebp
  NiD3DTextureStage *v117; // eax
  unsigned int **v118; // ebp
  NiD3DTextureStage *v119; // eax
  unsigned int **v120; // ebp
  NiD3DTextureStage *v121; // eax
  unsigned int **v122; // ebp
  NiD3DTextureStage *v123; // eax
  unsigned int **v124; // ebp
  NiD3DTextureStage *v125; // eax
  unsigned int **v126; // ebp
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
  unsigned int *v145; // eax
  NiD3DTextureStage *v146; // eax
  unsigned int *v147; // edi
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
  unsigned int *v162; // eax
  NiD3DTextureStage *v163; // eax
  unsigned int *v164; // edi
  unsigned int *v165; // eax
  NiD3DTextureStage *v166; // eax
  unsigned int *v167; // edi
  unsigned int *v168; // eax
  NiD3DTextureStage *v169; // eax
  unsigned int *v170; // edi
  unsigned int *v171; // eax
  NiD3DTextureStage *v172; // eax
  unsigned int *v173; // edi
  unsigned int *v174; // eax
  NiD3DTextureStage *v175; // eax
  unsigned int *v176; // edi
  unsigned int *v177; // eax
  NiD3DTextureStage *v178; // eax
  unsigned int *v179; // eax
  NiD3DTextureStage *v180; // eax
  unsigned int *v181; // edi
  unsigned int *v182; // eax
  NiD3DTextureStage *v183; // eax
  unsigned int *v184; // edi
  unsigned int *v185; // eax
  NiD3DTextureStage *v186; // eax
  unsigned int *v187; // edi
  unsigned int *v188; // eax
  NiD3DTextureStage *v189; // eax
  unsigned int *v190; // edi
  unsigned int *v191; // eax
  NiD3DTextureStage *v192; // eax
  unsigned int *v193; // edi
  unsigned int *v194; // eax
  NiD3DTextureStage *v195; // eax
  unsigned int *a3; // [esp+38h] [ebp-18h] BYREF
  int v197; // [esp+3Ch] [ebp-14h]
  NiD3DTextureStage *v198; // [esp+40h] [ebp-10h] BYREF
  unsigned int v199; // [esp+4Ch] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v197 = 0;
  v199 = 0;
  a3 = 0;
  v2 = dword_B459F4;
  v3 = dword_B459F4 == 0;
  LOBYTE(v199) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    v197 = v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( v0->StageCount < 6 )
  {
    v4 = (unsigned int *)*sub_772630(&v198);
    if ( v4 )
    {
      v1 = (NiD3DTextureStage *)v4;
      ++v4[0x17];
      a3 = v4;
    }
    v5 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v6 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v6;
    LOBYTE(v199) = 3;
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
    v7 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v8 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v8;
    LOBYTE(v199) = 4;
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
    v9 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v9[7].Unk08 )
        sub_772560(v9);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v10 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v10;
    LOBYTE(v199) = 5;
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
    v11 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v11[7].Unk08 )
        sub_772560(v11);
    }
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v1, 3, 3, 0);
    sub_760010(v0, 3u, &v1->Stage);
    v12 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v12;
    LOBYTE(v199) = 6;
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
    v13 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v13[7].Unk08 )
        sub_772560(v13);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v14 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v14;
    LOBYTE(v199) = 7;
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
    v15 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v15[7].Unk08 )
        sub_772560(v15);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_760010(v0, 5u, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v17 = dword_B453E0;
  if ( VertexShader != (NiD3DVertexShader *)dword_B453E0 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)(v17 + 4));
  }
  PixelShader = v0->PixelShader;
  v19 = dword_B451D8;
  if ( PixelShader != (NiD3DPixelShader *)dword_B451D8 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B459F8;
  dword_B43F74 = 0x20082;
  dword_B44604 = 0x108;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B459F8;
    v197 = dword_B459F8;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v20 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v20;
    LOBYTE(v199) = 8;
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
    v21 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v21[7].Unk08 )
        sub_772560(v21);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v22 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v22;
    LOBYTE(v199) = 9;
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
    v23 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v23[7].Unk08 )
        sub_772560(v23);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v24 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v24;
    LOBYTE(v199) = 0xA;
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
    v25 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v25[7].Unk08 )
        sub_772560(v25);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v26 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v26;
    LOBYTE(v199) = 0xB;
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
    v27 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v27[7].Unk08 )
        sub_772560(v27);
    }
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v1, 3, 3, 0);
    sub_760010(v0, 3u, &v1->Stage);
    v28 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v28;
    LOBYTE(v199) = 0xC;
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
    v29 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v29[7].Unk08 )
        sub_772560(v29);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v30 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v30;
    LOBYTE(v199) = 0xD;
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
    v31 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_760010(v0, 5u, &v1->Stage);
  }
  v32 = v0->VertexShader;
  v33 = dword_B453E0;
  if ( v32 != (NiD3DVertexShader *)dword_B453E0 )
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
  v35 = dword_B451DC;
  if ( v34 != (NiD3DPixelShader *)dword_B451DC )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45A00;
  dword_B43F78 = 0x20082;
  dword_B44608 = 0x108;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45A00;
    v197 = dword_B45A00;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v36 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v36;
    LOBYTE(v199) = 0xE;
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
    v37 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v37[7].Unk08 )
        sub_772560(v37);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v38 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v38;
    LOBYTE(v199) = 0xF;
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
    v39 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v39[7].Unk08 )
        sub_772560(v39);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v40 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v40;
    LOBYTE(v199) = 0x10;
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
    v41 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v41[7].Unk08 )
        sub_772560(v41);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v42 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v42;
    LOBYTE(v199) = 0x11;
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
    v43 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v43[7].Unk08 )
        sub_772560(v43);
    }
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v1, 3, 3, 0);
    sub_760010(v0, 3u, &v1->Stage);
    v44 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v44;
    LOBYTE(v199) = 0x12;
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
    v45 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v45[7].Unk08 )
        sub_772560(v45);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v46 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v46;
    LOBYTE(v199) = 0x13;
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
    v47 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v47[7].Unk08 )
        sub_772560(v47);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_760010(v0, 5u, &v1->Stage);
  }
  v48 = v0->VertexShader;
  v49 = dword_B453E4;
  if ( v48 != (NiD3DVertexShader *)dword_B453E4 )
  {
    if ( v48 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v48 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v48)(v48, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v49;
    if ( v49 )
      InterlockedIncrement((volatile LONG *)(v49 + 4));
  }
  v50 = v0->PixelShader;
  v51 = dword_B451D8;
  if ( v50 != (NiD3DPixelShader *)dword_B451D8 )
  {
    if ( v50 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v50 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v50)(v50, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v51;
    if ( v51 )
      InterlockedIncrement((volatile LONG *)(v51 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45A04;
  dword_B43F80 = 0x60088;
  dword_B44610 = 0x108;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45A04;
    v197 = dword_B45A04;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v52 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v52;
    LOBYTE(v199) = 0x14;
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
    v53 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v53[7].Unk08 )
        sub_772560(v53);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v54 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v54;
    LOBYTE(v199) = 0x15;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v54;
      a3 = *v54;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v55 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v55[7].Unk08 )
        sub_772560(v55);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v56 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v56;
    LOBYTE(v199) = 0x16;
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
    v57 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v57[7].Unk08 )
        sub_772560(v57);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v58 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v58;
    LOBYTE(v199) = 0x17;
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
    v59 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v59[7].Unk08 )
        sub_772560(v59);
    }
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v1, 3, 3, 0);
    sub_760010(v0, 3u, &v1->Stage);
    v60 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v60;
    LOBYTE(v199) = 0x18;
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
    v61 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v61[7].Unk08 )
        sub_772560(v61);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v62 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v62;
    LOBYTE(v199) = 0x19;
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
    v63 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v63[7].Unk08 )
        sub_772560(v63);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_760010(v0, 5u, &v1->Stage);
  }
  v64 = v0->VertexShader;
  v65 = dword_B453E4;
  if ( v64 != (NiD3DVertexShader *)dword_B453E4 )
  {
    if ( v64 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v64 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v64)(v64, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v65;
    if ( v65 )
      InterlockedIncrement((volatile LONG *)(v65 + 4));
  }
  v66 = v0->PixelShader;
  v67 = dword_B451DC;
  if ( v66 != (NiD3DPixelShader *)dword_B451DC )
  {
    if ( v66 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v66 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v66)(v66, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v67;
    if ( v67 )
      InterlockedIncrement((volatile LONG *)(v67 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45A10;
  dword_B43F84 = 0x60088;
  dword_B44614 = 0x108;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45A10;
    v197 = dword_B45A10;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v68 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v68;
    LOBYTE(v199) = 0x1A;
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
    v69 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v69[7].Unk08 )
        sub_772560(v69);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v70 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v70;
    LOBYTE(v199) = 0x1B;
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
    v71 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v71[7].Unk08 )
        sub_772560(v71);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v72 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v72;
    LOBYTE(v199) = 0x1C;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v72;
      a3 = *v72;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v73 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v73[7].Unk08 )
        sub_772560(v73);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v74 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v74;
    LOBYTE(v199) = 0x1D;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v74;
      a3 = *v74;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v75 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v75[7].Unk08 )
        sub_772560(v75);
    }
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v1, 3, 3, 0);
    sub_760010(v0, 3u, &v1->Stage);
    v76 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v76;
    LOBYTE(v199) = 0x1E;
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
    v77 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v77[7].Unk08 )
        sub_772560(v77);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v78 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v78;
    LOBYTE(v199) = 0x1F;
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
    v79 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v79[7].Unk08 )
        sub_772560(v79);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_760010(v0, 5u, &v1->Stage);
  }
  v80 = v0->VertexShader;
  v81 = dword_B453E8;
  if ( v80 != (NiD3DVertexShader *)dword_B453E8 )
  {
    if ( v80 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v80 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v80)(v80, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v81;
    if ( v81 )
      InterlockedIncrement((volatile LONG *)(v81 + 4));
  }
  v82 = v0->PixelShader;
  v83 = dword_B451E0;
  if ( v82 != (NiD3DPixelShader *)dword_B451E0 )
  {
    if ( v82 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v82 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v82)(v82, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v83;
    if ( v83 )
      InterlockedIncrement((volatile LONG *)(v83 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45A14;
  dword_B43F90 = 0x200F2;
  dword_B44620 = 0x108;
  dword_B43900 = 0x60;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45A14;
    v197 = dword_B45A14;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v84 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v84;
    LOBYTE(v199) = 0x20;
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
    v85 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v85[7].Unk08 )
        sub_772560(v85);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v86 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v86;
    LOBYTE(v199) = 0x21;
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
    v87 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v87[7].Unk08 )
        sub_772560(v87);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v88 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v88;
    LOBYTE(v199) = 0x22;
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
    v89 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v89[7].Unk08 )
        sub_772560(v89);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v90 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v90;
    LOBYTE(v199) = 0x23;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v90;
      a3 = *v90;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v91 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v91[7].Unk08 )
        sub_772560(v91);
    }
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v1, 3, 3, 0);
    sub_760010(v0, 3u, &v1->Stage);
    v92 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v92;
    LOBYTE(v199) = 0x24;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v92;
      a3 = *v92;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v93 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v93[7].Unk08 )
        sub_772560(v93);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v94 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v94;
    LOBYTE(v199) = 0x25;
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
    v95 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v95[7].Unk08 )
        sub_772560(v95);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_760010(v0, 5u, &v1->Stage);
  }
  v96 = v0->VertexShader;
  v97 = dword_B453E8;
  if ( v96 != (NiD3DVertexShader *)dword_B453E8 )
  {
    if ( v96 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v96 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v96)(v96, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v97;
    if ( v97 )
      InterlockedIncrement((volatile LONG *)(v97 + 4));
  }
  v98 = v0->PixelShader;
  v99 = dword_B451E4;
  if ( v98 != (NiD3DPixelShader *)dword_B451E4 )
  {
    if ( v98 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v98 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v98)(v98, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v99;
    if ( v99 )
      InterlockedIncrement((volatile LONG *)(v99 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45A1C;
  dword_B43F94 = 0x200F2;
  dword_B44624 = 0x108;
  dword_B43900 = 0x60;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45A1C;
    v197 = dword_B45A1C;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v100 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v100;
    LOBYTE(v199) = 0x26;
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
    v101 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v101[7].Unk08 )
        sub_772560(v101);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v102 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v102;
    LOBYTE(v199) = 0x27;
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
    v103 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v103[7].Unk08 )
        sub_772560(v103);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v104 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v104;
    LOBYTE(v199) = 0x28;
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
    v105 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v105[7].Unk08 )
        sub_772560(v105);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v106 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v106;
    LOBYTE(v199) = 0x29;
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
    v107 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v107[7].Unk08 )
        sub_772560(v107);
    }
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v1, 3, 3, 0);
    sub_760010(v0, 3u, &v1->Stage);
    v108 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v108;
    LOBYTE(v199) = 0x2A;
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
    v109 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v109[7].Unk08 )
        sub_772560(v109);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v110 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v110;
    LOBYTE(v199) = 0x2B;
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
    v111 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v111[7].Unk08 )
        sub_772560(v111);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_760010(v0, 5u, &v1->Stage);
  }
  v112 = v0->VertexShader;
  v113 = dword_B453EC;
  if ( v112 != (NiD3DVertexShader *)dword_B453EC )
  {
    if ( v112 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v112 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v112)(v112, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v113;
    if ( v113 )
      InterlockedIncrement((volatile LONG *)(v113 + 4));
  }
  v114 = v0->PixelShader;
  v115 = dword_B451E0;
  if ( v114 != (NiD3DPixelShader *)dword_B451E0 )
  {
    if ( v114 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v114 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v114)(v114, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v115;
    if ( v115 )
      InterlockedIncrement((volatile LONG *)(v115 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45A20;
  dword_B43F9C = 0x600F8;
  dword_B4462C = 0x108;
  dword_B4390C = 0x60;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45A20;
    v197 = dword_B45A20;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v116 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v116;
    LOBYTE(v199) = 0x2C;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v116;
      a3 = *v116;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v117 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v117[7].Unk08 )
        sub_772560(v117);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v118 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v118;
    LOBYTE(v199) = 0x2D;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v118;
      a3 = *v118;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v119 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v119[7].Unk08 )
        sub_772560(v119);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v120 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v120;
    LOBYTE(v199) = 0x2E;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v120;
      a3 = *v120;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v121 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v121[7].Unk08 )
        sub_772560(v121);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v122 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v122;
    LOBYTE(v199) = 0x2F;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v122;
      a3 = *v122;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v123 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v123[7].Unk08 )
        sub_772560(v123);
    }
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v1, 3, 3, 0);
    sub_760010(v0, 3u, &v1->Stage);
    v124 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v124;
    LOBYTE(v199) = 0x30;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v124;
      a3 = *v124;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v125 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v125[7].Unk08 )
        sub_772560(v125);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v126 = (unsigned int **)sub_772630(&v198);
    v3 = v1 == (NiD3DTextureStage *)*v126;
    LOBYTE(v199) = 0x31;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v126;
      a3 = *v126;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v127 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v127[7].Unk08 )
        sub_772560(v127);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_760010(v0, 5u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453EC);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451E4);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45A2C;
  dword_B43FA0 = 0x600F8;
  dword_B44630 = 0x108;
  dword_B4390C = 0x60;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45A2C;
    v197 = dword_B45A2C;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v128 = sub_772630(&v198);
    LOBYTE(v199) = 0x32;
    sub_75FAE0((NiD3DTextureStage **)&a3, v128);
    v129 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v129[7].Unk08 )
        sub_772560(v129);
    }
    v130 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v130);
    v131 = sub_772630(&v198);
    LOBYTE(v199) = 0x33;
    sub_75FAE0((NiD3DTextureStage **)&a3, v131);
    v132 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v132[7].Unk08 )
        sub_772560(v132);
    }
    v133 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v133);
    v134 = sub_772630(&v198);
    LOBYTE(v199) = 0x34;
    sub_75FAE0((NiD3DTextureStage **)&a3, v134);
    v135 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v135[7].Unk08 )
        sub_772560(v135);
    }
    v136 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v136);
    v137 = sub_772630(&v198);
    LOBYTE(v199) = 0x35;
    sub_75FAE0((NiD3DTextureStage **)&a3, v137);
    v138 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v138[7].Unk08 )
        sub_772560(v138);
    }
    v139 = a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v139, 3, 3, 0);
    sub_760010(v0, 3u, v139);
    v140 = sub_772630(&v198);
    LOBYTE(v199) = 0x36;
    sub_75FAE0((NiD3DTextureStage **)&a3, v140);
    v141 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v141[7].Unk08 )
        sub_772560(v141);
    }
    v142 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v142);
    v143 = sub_772630(&v198);
    LOBYTE(v199) = 0x37;
    sub_75FAE0((NiD3DTextureStage **)&a3, v143);
    v144 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v144[7].Unk08 )
        sub_772560(v144);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453F0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451E8);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45A30;
  dword_B43FAC = 0x20802;
  dword_B4463C = 0x108;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45A30;
    v197 = dword_B45A30;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v145 = sub_772630(&v198);
    LOBYTE(v199) = 0x38;
    sub_75FAE0((NiD3DTextureStage **)&a3, v145);
    v146 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v146[7].Unk08 )
        sub_772560(v146);
    }
    v147 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v147);
    v148 = sub_772630(&v198);
    LOBYTE(v199) = 0x39;
    sub_75FAE0((NiD3DTextureStage **)&a3, v148);
    v149 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v149[7].Unk08 )
        sub_772560(v149);
    }
    v150 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v150);
    v151 = sub_772630(&v198);
    LOBYTE(v199) = 0x3A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v151);
    v152 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v152[7].Unk08 )
        sub_772560(v152);
    }
    v153 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v153);
    v154 = sub_772630(&v198);
    LOBYTE(v199) = 0x3B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v154);
    v155 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v155[7].Unk08 )
        sub_772560(v155);
    }
    v156 = a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v156, 3, 3, 0);
    sub_760010(v0, 3u, v156);
    v157 = sub_772630(&v198);
    LOBYTE(v199) = 0x3C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v157);
    v158 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v158[7].Unk08 )
        sub_772560(v158);
    }
    v159 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v159);
    v160 = sub_772630(&v198);
    LOBYTE(v199) = 0x3D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v160);
    v161 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v161[7].Unk08 )
        sub_772560(v161);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453F0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451EC);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45A38;
  dword_B43FB0 = 0x20802;
  dword_B44640 = 0x108;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45A38;
    v197 = dword_B45A38;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v162 = sub_772630(&v198);
    LOBYTE(v199) = 0x3E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v162);
    v163 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v163[7].Unk08 )
        sub_772560(v163);
    }
    v164 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v164);
    v165 = sub_772630(&v198);
    LOBYTE(v199) = 0x3F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v165);
    v166 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v166[7].Unk08 )
        sub_772560(v166);
    }
    v167 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v167);
    v168 = sub_772630(&v198);
    LOBYTE(v199) = 0x40;
    sub_75FAE0((NiD3DTextureStage **)&a3, v168);
    v169 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v169[7].Unk08 )
        sub_772560(v169);
    }
    v170 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v170);
    v171 = sub_772630(&v198);
    LOBYTE(v199) = 0x41;
    sub_75FAE0((NiD3DTextureStage **)&a3, v171);
    v172 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v172[7].Unk08 )
        sub_772560(v172);
    }
    v173 = a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v173, 3, 3, 0);
    sub_760010(v0, 3u, v173);
    v174 = sub_772630(&v198);
    LOBYTE(v199) = 0x42;
    sub_75FAE0((NiD3DTextureStage **)&a3, v174);
    v175 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v175[7].Unk08 )
        sub_772560(v175);
    }
    v176 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v176);
    v177 = sub_772630(&v198);
    LOBYTE(v199) = 0x43;
    sub_75FAE0((NiD3DTextureStage **)&a3, v177);
    v178 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v178[7].Unk08 )
        sub_772560(v178);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453F4);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451E8);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45A3C;
  dword_B43FB8 = 0x60808;
  dword_B44648 = 0x108;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45A3C;
    v197 = dword_B45A3C;
    if ( v197 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 6 )
  {
    v179 = sub_772630(&v198);
    LOBYTE(v199) = 0x44;
    sub_75FAE0((NiD3DTextureStage **)&a3, v179);
    v180 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v180[7].Unk08 )
        sub_772560(v180);
    }
    v181 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v181);
    v182 = sub_772630(&v198);
    LOBYTE(v199) = 0x45;
    sub_75FAE0((NiD3DTextureStage **)&a3, v182);
    v183 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v183[7].Unk08 )
        sub_772560(v183);
    }
    v184 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v184);
    v185 = sub_772630(&v198);
    LOBYTE(v199) = 0x46;
    sub_75FAE0((NiD3DTextureStage **)&a3, v185);
    v186 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v186[7].Unk08 )
        sub_772560(v186);
    }
    v187 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v187);
    v188 = sub_772630(&v198);
    LOBYTE(v199) = 0x47;
    sub_75FAE0((NiD3DTextureStage **)&a3, v188);
    v189 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v189[7].Unk08 )
        sub_772560(v189);
    }
    v190 = a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v190, 3, 3, 0);
    sub_760010(v0, 3u, v190);
    v191 = sub_772630(&v198);
    LOBYTE(v199) = 0x48;
    sub_75FAE0((NiD3DTextureStage **)&a3, v191);
    v192 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v192[7].Unk08 )
        sub_772560(v192);
    }
    v193 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v193);
    v194 = sub_772630(&v198);
    LOBYTE(v199) = 0x49;
    sub_75FAE0((NiD3DTextureStage **)&a3, v194);
    v195 = v198;
    LOBYTE(v199) = 1;
    if ( v198 )
    {
      --v198[7].Unk08;
      if ( !v195[7].Unk08 )
        sub_772560(v195);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v0, 5u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453F4);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B451EC);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  dword_B43FBC = 0x60808;
  dword_B4464C = 0x108;
  LOBYTE(v199) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v0->RefCount-- == 1;
  v199 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
