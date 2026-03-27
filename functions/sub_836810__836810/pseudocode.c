void sub_836810()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  unsigned int *v4; // eax
  NiD3DTextureStage *v5; // eax
  unsigned int **v6; // ebp
  NiD3DTextureStage *v7; // eax
  NiD3DVertexShader *VertexShader; // ebp
  int v9; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v11; // ebx
  unsigned int **v12; // ebp
  NiD3DTextureStage *v13; // eax
  unsigned int **v14; // ebp
  NiD3DTextureStage *v15; // eax
  NiD3DVertexShader *v16; // ebp
  int v17; // ebx
  NiD3DPixelShader *v18; // ebp
  int v19; // ebx
  unsigned int **v20; // ebp
  NiD3DTextureStage *v21; // eax
  unsigned int **v22; // ebp
  NiD3DTextureStage *v23; // eax
  unsigned int **v24; // ebp
  NiD3DTextureStage *v25; // eax
  NiD3DVertexShader *v26; // ebp
  int v27; // ebx
  NiD3DPixelShader *v28; // ebp
  int v29; // ebx
  unsigned int **v30; // ebp
  NiD3DTextureStage *v31; // eax
  unsigned int **v32; // ebp
  NiD3DTextureStage *v33; // eax
  NiD3DVertexShader *v34; // ebp
  int v35; // ebx
  NiD3DPixelShader *v36; // ebp
  int v37; // ebx
  unsigned int **v38; // ebp
  NiD3DTextureStage *v39; // eax
  unsigned int **v40; // ebp
  NiD3DTextureStage *v41; // eax
  NiD3DVertexShader *v42; // ebp
  int v43; // ebx
  NiD3DPixelShader *v44; // ebp
  int v45; // ebx
  unsigned int **v46; // ebp
  NiD3DTextureStage *v47; // eax
  unsigned int **v48; // ebp
  NiD3DTextureStage *v49; // eax
  NiD3DVertexShader *v50; // ebp
  int v51; // ebx
  NiD3DPixelShader *v52; // ebp
  int v53; // ebx
  unsigned int **v54; // ebp
  NiD3DTextureStage *v55; // eax
  unsigned int **v56; // ebp
  NiD3DTextureStage *v57; // eax
  NiD3DVertexShader *v58; // ebp
  int v59; // ebx
  NiD3DPixelShader *v60; // ebp
  int v61; // ebx
  unsigned int **v62; // ebp
  NiD3DTextureStage *v63; // eax
  unsigned int **v64; // ebp
  NiD3DTextureStage *v65; // eax
  unsigned int **v66; // ebp
  NiD3DTextureStage *v67; // eax
  unsigned int **v68; // ebp
  NiD3DTextureStage *v69; // eax
  NiD3DVertexShader *v70; // ebp
  int v71; // ebx
  NiD3DPixelShader *v72; // ebp
  int v73; // ebx
  unsigned int **v74; // ebp
  NiD3DTextureStage *v75; // eax
  unsigned int **v76; // ebp
  NiD3DTextureStage *v77; // eax
  unsigned int **v78; // ebp
  NiD3DTextureStage *v79; // eax
  unsigned int **v80; // ebp
  NiD3DTextureStage *v81; // eax
  NiD3DVertexShader *v82; // ebp
  int v83; // ebx
  NiD3DPixelShader *v84; // ebp
  int v85; // ebx
  unsigned int **v86; // ebp
  NiD3DTextureStage *v87; // eax
  unsigned int **v88; // ebp
  NiD3DTextureStage *v89; // eax
  unsigned int **v90; // ebp
  NiD3DTextureStage *v91; // eax
  NiD3DVertexShader *v92; // ebp
  int v93; // ebx
  NiD3DPixelShader *v94; // ebp
  int v95; // ebx
  unsigned int **v96; // ebp
  NiD3DTextureStage *v97; // eax
  unsigned int **v98; // ebp
  NiD3DTextureStage *v99; // eax
  unsigned int **v100; // ebp
  NiD3DTextureStage *v101; // eax
  unsigned int *v102; // eax
  NiD3DTextureStage *v103; // eax
  unsigned int *v104; // eax
  NiD3DTextureStage *v105; // eax
  unsigned int *v106; // edi
  unsigned int *v107; // eax
  NiD3DTextureStage *v108; // eax
  unsigned int *v109; // edi
  unsigned int *v110; // eax
  NiD3DTextureStage *v111; // eax
  unsigned int *v112; // edi
  unsigned int *v113; // eax
  NiD3DTextureStage *v114; // eax
  unsigned int *v115; // eax
  NiD3DTextureStage *v116; // eax
  unsigned int *v117; // edi
  unsigned int *v118; // eax
  NiD3DTextureStage *v119; // eax
  unsigned int *v120; // edi
  unsigned int *v121; // eax
  NiD3DTextureStage *v122; // eax
  unsigned int *v123; // eax
  NiD3DTextureStage *v124; // eax
  unsigned int *v125; // edi
  unsigned int *v126; // eax
  NiD3DTextureStage *v127; // eax
  unsigned int *v128; // edi
  unsigned int *v129; // eax
  NiD3DTextureStage *v130; // eax
  unsigned int *v131; // edi
  unsigned int *v132; // eax
  NiD3DTextureStage *v133; // eax
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
  unsigned int *v156; // eax
  NiD3DTextureStage *v157; // eax
  unsigned int *v158; // edi
  unsigned int *v159; // eax
  NiD3DTextureStage *v160; // eax
  unsigned int *v161; // edi
  unsigned int *v162; // eax
  NiD3DTextureStage *v163; // eax
  unsigned int *v164; // edi
  unsigned int *v165; // eax
  NiD3DTextureStage *v166; // eax
  unsigned int *a3; // [esp+50h] [ebp-18h] BYREF
  int v168; // [esp+54h] [ebp-14h]
  NiD3DTextureStage *v169; // [esp+58h] [ebp-10h] BYREF
  unsigned int v170; // [esp+64h] [ebp-4h]

  v0 = 0;
  v168 = 0;
  v1 = 0;
  v170 = 0;
  a3 = 0;
  v2 = dword_B456C0;
  v3 = dword_B456C0 == 0;
  LOBYTE(v170) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    v168 = v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( v0->StageCount < 2 )
  {
    v4 = (unsigned int *)*sub_772630(&v169);
    if ( v4 )
    {
      v1 = (NiD3DTextureStage *)v4;
      ++v4[0x17];
      a3 = v4;
    }
    v5 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v6 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v6;
    LOBYTE(v170) = 3;
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
    v7 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v9 = dword_B4545C;
  if ( VertexShader != (NiD3DVertexShader *)dword_B4545C )
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
  v11 = dword_B4524C;
  if ( PixelShader != (NiD3DPixelShader *)dword_B4524C )
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
  v3 = v0 == (NiD3DPass *)dword_B45B58;
  dword_B43C40 = 0x82;
  dword_B442D0 = 0x3C;
  dword_B435B0 = 0x80;
  dword_B44960 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B58;
    v168 = dword_B45B58;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v12 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v12;
    LOBYTE(v170) = 4;
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
    v13 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v13[7].Unk08 )
        sub_772560(v13);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v14 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v14;
    LOBYTE(v170) = 5;
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
    v15 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v15[7].Unk08 )
        sub_772560(v15);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v16 = v0->VertexShader;
  v17 = dword_B45460;
  if ( v16 != (NiD3DVertexShader *)dword_B45460 )
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
  v19 = dword_B45250;
  if ( v18 != (NiD3DPixelShader *)dword_B45250 )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B78;
  dword_B440D8 = 0x82;
  dword_B44768 = 0x3C;
  dword_B43A48 = 0x80;
  dword_B44DF8 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B78;
    v168 = dword_B45B78;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v20 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v20;
    LOBYTE(v170) = 6;
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
    v21 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v21[7].Unk08 )
        sub_772560(v21);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v22 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v22;
    LOBYTE(v170) = 7;
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
    v23 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v23[7].Unk08 )
        sub_772560(v23);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v24 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v24;
    LOBYTE(v170) = 8;
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
    v25 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v25[7].Unk08 )
        sub_772560(v25);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v26 = v0->VertexShader;
  v27 = dword_B45464;
  if ( v26 != (NiD3DVertexShader *)dword_B45464 )
  {
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v26 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v26)(v26, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v27;
    if ( v27 )
      InterlockedIncrement((volatile LONG *)(v27 + 4));
  }
  v28 = v0->PixelShader;
  v29 = dword_B45254;
  if ( v28 != (NiD3DPixelShader *)dword_B45254 )
  {
    if ( v28 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v28 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v28)(v28, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v29;
    if ( v29 )
      InterlockedIncrement((volatile LONG *)(v29 + 4));
  }
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B54;
  dword_B440F8 = 0x18082;
  dword_B44788 = 0xC;
  dword_B43A68 = 0x80;
  dword_B44E18 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B54;
    v168 = dword_B45B54;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v30 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v30;
    LOBYTE(v170) = 9;
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
    v31 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v32 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v32;
    LOBYTE(v170) = 0xA;
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
    v33 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v33[7].Unk08 )
        sub_772560(v33);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v34 = v0->VertexShader;
  v35 = dword_B45468;
  if ( v34 != (NiD3DVertexShader *)dword_B45468 )
  {
    if ( v34 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v34 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v34)(v34, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v35;
    if ( v35 )
      InterlockedIncrement((volatile LONG *)(v35 + 4));
  }
  v36 = v0->PixelShader;
  v37 = dword_B45258;
  if ( v36 != (NiD3DPixelShader *)dword_B45258 )
  {
    if ( v36 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v36)(v36, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v37;
    if ( v37 )
      InterlockedIncrement((volatile LONG *)(v37 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B60;
  dword_B440D4 = 2;
  dword_B44764 = 0x30;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B60;
    v168 = dword_B45B60;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v38 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v38;
    LOBYTE(v170) = 0xB;
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
    v39 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v39[7].Unk08 )
        sub_772560(v39);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v40 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v40;
    LOBYTE(v170) = 0xC;
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
    v41 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v41[7].Unk08 )
        sub_772560(v41);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v42 = v0->VertexShader;
  v43 = dword_B45468;
  if ( v42 != (NiD3DVertexShader *)dword_B45468 )
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
  v45 = dword_B4525C;
  if ( v44 != (NiD3DPixelShader *)dword_B4525C )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B40;
  dword_B440E0 = 2;
  dword_B44770 = 0x30;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B40;
    v168 = dword_B45B40;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v46 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v46;
    LOBYTE(v170) = 0xD;
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
    v47 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v47[7].Unk08 )
        sub_772560(v47);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v48 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v48;
    LOBYTE(v170) = 0xE;
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
    v49 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v49[7].Unk08 )
        sub_772560(v49);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v50 = v0->VertexShader;
  v51 = dword_B4546C;
  if ( v50 != (NiD3DVertexShader *)dword_B4546C )
  {
    if ( v50 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v50 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v50)(v50, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v51;
    if ( v51 )
      InterlockedIncrement((volatile LONG *)(v51 + 4));
  }
  v52 = v0->PixelShader;
  v53 = dword_B45260;
  if ( v52 != (NiD3DPixelShader *)dword_B45260 )
  {
    if ( v52 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v52 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v52)(v52, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v53;
    if ( v53 )
      InterlockedIncrement((volatile LONG *)(v53 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B64;
  dword_B440C0 = 0x802;
  dword_B44750 = 8;
  dword_B44DE0 = 0;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B64;
    v168 = dword_B45B64;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v54 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v54;
    LOBYTE(v170) = 0xF;
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
    v55 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v55[7].Unk08 )
        sub_772560(v55);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v56 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v56;
    LOBYTE(v170) = 0x10;
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
    v57 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v57[7].Unk08 )
        sub_772560(v57);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v58 = v0->VertexShader;
  v59 = dword_B45470;
  if ( v58 != (NiD3DVertexShader *)dword_B45470 )
  {
    if ( v58 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v58 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v58)(v58, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v59;
    if ( v59 )
      InterlockedIncrement((volatile LONG *)(v59 + 4));
  }
  v60 = v0->PixelShader;
  v61 = dword_B45264;
  if ( v60 != (NiD3DPixelShader *)dword_B45264 )
  {
    if ( v60 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v60 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v60)(v60, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v61;
    if ( v61 )
      InterlockedIncrement((volatile LONG *)(v61 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B456C4;
  dword_B440E4 = 0x3802;
  dword_B44774 = 0xBC;
  dword_B44E04 = 0;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B456C4;
    v168 = dword_B456C4;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v62 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v62;
    LOBYTE(v170) = 0x11;
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
    v63 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v63[7].Unk08 )
        sub_772560(v63);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v64 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v64;
    LOBYTE(v170) = 0x12;
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
    v65 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v65[7].Unk08 )
        sub_772560(v65);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v66 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v66;
    LOBYTE(v170) = 0x13;
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
    v67 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v67[7].Unk08 )
        sub_772560(v67);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v68 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v68;
    LOBYTE(v170) = 0x14;
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
    v69 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v69[7].Unk08 )
        sub_772560(v69);
    }
    sub_801110((int)v1, 3, 3, 0);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v70 = v0->VertexShader;
  v71 = dword_B4540C;
  if ( v70 != (NiD3DVertexShader *)dword_B4540C )
  {
    if ( v70 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v70 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v70)(v70, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v71;
    if ( v71 )
      InterlockedIncrement((volatile LONG *)(v71 + 4));
  }
  v72 = v0->PixelShader;
  v73 = dword_B45204;
  if ( v72 != (NiD3DPixelShader *)dword_B45204 )
  {
    if ( v72 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v72 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v72)(v72, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v73;
    if ( v73 )
      InterlockedIncrement((volatile LONG *)(v73 + 4));
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
  v3 = v0 == (NiD3DPass *)dword_B45B5C;
  dword_B43C44 = 0xF2;
  dword_B442D4 = 0x3C;
  dword_B435B4 = 0xE0;
  dword_B44964 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B5C;
    v168 = dword_B45B5C;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v74 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v74;
    LOBYTE(v170) = 0x15;
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
    v75 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v75[7].Unk08 )
        sub_772560(v75);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v76 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v76;
    LOBYTE(v170) = 0x16;
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
    v77 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v77[7].Unk08 )
        sub_772560(v77);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v78 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v78;
    LOBYTE(v170) = 0x17;
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
    v79 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v79[7].Unk08 )
        sub_772560(v79);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v80 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v80;
    LOBYTE(v170) = 0x18;
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
    v81 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v81[7].Unk08 )
        sub_772560(v81);
    }
    sub_801110((int)v1, 3, 3, 0);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v82 = v0->VertexShader;
  v83 = dword_B45410;
  if ( v82 != (NiD3DVertexShader *)dword_B45410 )
  {
    if ( v82 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v82 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v82)(v82, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v83;
    if ( v83 )
      InterlockedIncrement((volatile LONG *)(v83 + 4));
  }
  v84 = v0->PixelShader;
  v85 = dword_B45208;
  if ( v84 != (NiD3DPixelShader *)dword_B45208 )
  {
    if ( v84 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v84 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v84)(v84, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v85;
    if ( v85 )
      InterlockedIncrement((volatile LONG *)(v85 + 4));
  }
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B44;
  dword_B440DC = 0xF2;
  dword_B4476C = 0x3C;
  dword_B43A4C = 0xE0;
  dword_B44DFC = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B44;
    v168 = dword_B45B44;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 3 )
  {
    v86 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v86;
    LOBYTE(v170) = 0x19;
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
    v87 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v87[7].Unk08 )
        sub_772560(v87);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v88 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v88;
    LOBYTE(v170) = 0x1A;
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
    v89 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v89[7].Unk08 )
        sub_772560(v89);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v90 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v90;
    LOBYTE(v170) = 0x1B;
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
    v91 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v91[7].Unk08 )
        sub_772560(v91);
    }
    sub_801110((int)v1, 2, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v92 = v0->VertexShader;
  v93 = dword_B45414;
  if ( v92 != (NiD3DVertexShader *)dword_B45414 )
  {
    if ( v92 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v92 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v92)(v92, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v93;
    if ( v93 )
      InterlockedIncrement((volatile LONG *)(v93 + 4));
  }
  v94 = v0->PixelShader;
  v95 = dword_B4520C;
  if ( v94 != (NiD3DPixelShader *)dword_B4520C )
  {
    if ( v94 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v94 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v94)(v94, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v95;
    if ( v95 )
      InterlockedIncrement((volatile LONG *)(v95 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B48;
  dword_B440C4 = 0x3802;
  dword_B44754 = 0x3C;
  dword_B44DE4 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B48;
    v168 = dword_B45B48;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v96 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v96;
    LOBYTE(v170) = 0x1C;
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
    v97 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v97[7].Unk08 )
        sub_772560(v97);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v98 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v98;
    LOBYTE(v170) = 0x1D;
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
    v99 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v99[7].Unk08 )
        sub_772560(v99);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v100 = (unsigned int **)sub_772630(&v169);
    v3 = v1 == (NiD3DTextureStage *)*v100;
    LOBYTE(v170) = 0x1E;
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
    v101 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v101[7].Unk08 )
        sub_772560(v101);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v102 = sub_772630(&v169);
    LOBYTE(v170) = 0x1F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v102);
    v103 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v103[7].Unk08 )
        sub_772560(v103);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45418);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45210);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B50;
  dword_B440C8 = 0x20082;
  dword_B44758 = 0x108;
  dword_B43A38 = 0x80;
  dword_B44DE8 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B50;
    v168 = dword_B45B50;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v104 = sub_772630(&v169);
    LOBYTE(v170) = 0x20;
    sub_75FAE0((NiD3DTextureStage **)&a3, v104);
    v105 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v105[7].Unk08 )
        sub_772560(v105);
    }
    v106 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v106);
    v107 = sub_772630(&v169);
    LOBYTE(v170) = 0x21;
    sub_75FAE0((NiD3DTextureStage **)&a3, v107);
    v108 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v108[7].Unk08 )
        sub_772560(v108);
    }
    v109 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v109);
    v110 = sub_772630(&v169);
    LOBYTE(v170) = 0x22;
    sub_75FAE0((NiD3DTextureStage **)&a3, v110);
    v111 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v111[7].Unk08 )
        sub_772560(v111);
    }
    v112 = a3;
    sub_801110((int)a3, 2, 3, 0);
    sub_76C910(v112, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, v0->CurrentStage, v112);
    v113 = sub_772630(&v169);
    LOBYTE(v170) = 0x23;
    sub_75FAE0((NiD3DTextureStage **)&a3, v113);
    v114 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v114[7].Unk08 )
        sub_772560(v114);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4541C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45214);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B68;
  dword_B440D0 = 0x20802;
  dword_B44760 = 0x108;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B68;
    v168 = dword_B45B68;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 3 )
  {
    v115 = sub_772630(&v169);
    LOBYTE(v170) = 0x24;
    sub_75FAE0((NiD3DTextureStage **)&a3, v115);
    v116 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v116[7].Unk08 )
        sub_772560(v116);
    }
    v117 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v117);
    v118 = sub_772630(&v169);
    LOBYTE(v170) = 0x25;
    sub_75FAE0((NiD3DTextureStage **)&a3, v118);
    v119 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v119[7].Unk08 )
        sub_772560(v119);
    }
    v120 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v120);
    v121 = sub_772630(&v169);
    LOBYTE(v170) = 0x26;
    sub_75FAE0((NiD3DTextureStage **)&a3, v121);
    v122 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v122[7].Unk08 )
        sub_772560(v122);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 2, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45420);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45218);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B6C;
  dword_B440E8 = 0x3802;
  dword_B44778 = 0xBC;
  dword_B44E08 = 0;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B6C;
    v168 = dword_B45B6C;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v123 = sub_772630(&v169);
    LOBYTE(v170) = 0x27;
    sub_75FAE0((NiD3DTextureStage **)&a3, v123);
    v124 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v124[7].Unk08 )
        sub_772560(v124);
    }
    v125 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v125);
    v126 = sub_772630(&v169);
    LOBYTE(v170) = 0x28;
    sub_75FAE0((NiD3DTextureStage **)&a3, v126);
    v127 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v127[7].Unk08 )
        sub_772560(v127);
    }
    v128 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v128);
    v129 = sub_772630(&v169);
    LOBYTE(v170) = 0x29;
    sub_75FAE0((NiD3DTextureStage **)&a3, v129);
    v130 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v130[7].Unk08 )
        sub_772560(v130);
    }
    v131 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, v131);
    v132 = sub_772630(&v169);
    LOBYTE(v170) = 0x2A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v132);
    v133 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v133[7].Unk08 )
        sub_772560(v133);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45424);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B4521C);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B70;
  dword_B440EC = 0x20082;
  dword_B4477C = 0x138;
  dword_B43A5C = 0x80;
  dword_B44E0C = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B70;
    v168 = dword_B45B70;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v134 = sub_772630(&v169);
    LOBYTE(v170) = 0x2B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v134);
    v135 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v135[7].Unk08 )
        sub_772560(v135);
    }
    v136 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v136);
    v137 = sub_772630(&v169);
    LOBYTE(v170) = 0x2C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v137);
    v138 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v138[7].Unk08 )
        sub_772560(v138);
    }
    v139 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v139);
    v140 = sub_772630(&v169);
    LOBYTE(v170) = 0x2D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v140);
    v141 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v141[7].Unk08 )
        sub_772560(v141);
    }
    v142 = a3;
    sub_801110((int)a3, 2, 3, 0);
    sub_76C910(v142, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, v0->CurrentStage, v142);
    v143 = sub_772630(&v169);
    LOBYTE(v170) = 0x2E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v143);
    v144 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v144[7].Unk08 )
        sub_772560(v144);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45428);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45220);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B4C;
  dword_B440F0 = 0x20802;
  dword_B44780 = 0x138;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B4C;
    v168 = dword_B45B4C;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v145 = sub_772630(&v169);
    LOBYTE(v170) = 0x2F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v145);
    v146 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v146[7].Unk08 )
        sub_772560(v146);
    }
    v147 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v147);
    v148 = sub_772630(&v169);
    LOBYTE(v170) = 0x30;
    sub_75FAE0((NiD3DTextureStage **)&a3, v148);
    v149 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v149[7].Unk08 )
        sub_772560(v149);
    }
    v150 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v150);
    v151 = sub_772630(&v169);
    LOBYTE(v170) = 0x31;
    sub_75FAE0((NiD3DTextureStage **)&a3, v151);
    v152 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v152[7].Unk08 )
        sub_772560(v152);
    }
    v153 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, v153);
    v154 = sub_772630(&v169);
    LOBYTE(v170) = 0x32;
    sub_75FAE0((NiD3DTextureStage **)&a3, v154);
    v155 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v155[7].Unk08 )
        sub_772560(v155);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 3, 0);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4542C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45224);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B74;
  dword_B440CC = 0x200F2;
  dword_B4475C = 0x138;
  dword_B43A3C = 0xE0;
  dword_B44DEC = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B74;
    v168 = dword_B45B74;
    if ( v168 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v156 = sub_772630(&v169);
    LOBYTE(v170) = 0x33;
    sub_75FAE0((NiD3DTextureStage **)&a3, v156);
    v157 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v157[7].Unk08 )
        sub_772560(v157);
    }
    v158 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v158);
    v159 = sub_772630(&v169);
    LOBYTE(v170) = 0x34;
    sub_75FAE0((NiD3DTextureStage **)&a3, v159);
    v160 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v160[7].Unk08 )
        sub_772560(v160);
    }
    v161 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, v161);
    v162 = sub_772630(&v169);
    LOBYTE(v170) = 0x35;
    sub_75FAE0((NiD3DTextureStage **)&a3, v162);
    v163 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v163[7].Unk08 )
        sub_772560(v163);
    }
    v164 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, v164);
    v165 = sub_772630(&v169);
    LOBYTE(v170) = 0x36;
    sub_75FAE0((NiD3DTextureStage **)&a3, v165);
    v166 = v169;
    LOBYTE(v170) = 1;
    if ( v169 )
    {
      --v169[7].Unk08;
      if ( !v166[7].Unk08 )
        sub_772560(v166);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 3, 3, 0);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45430);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45228);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  dword_B440F4 = 0x200F2;
  dword_B44784 = 0x138;
  dword_B43A64 = 0xE0;
  dword_B44E14 = 8;
  LOBYTE(v170) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v0->RefCount-- == 1;
  v170 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
