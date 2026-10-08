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
  NiD3DTextureStage **v102; // eax
  NiD3DTextureStage *v103; // eax
  NiD3DTextureStage **v104; // eax
  NiD3DTextureStage *v105; // eax
  unsigned int *v106; // edi
  NiD3DTextureStage **v107; // eax
  NiD3DTextureStage *v108; // eax
  unsigned int *v109; // edi
  NiD3DTextureStage **v110; // eax
  NiD3DTextureStage *v111; // eax
  NiD3DTextureStage *v112; // edi
  NiD3DTextureStage **v113; // eax
  NiD3DTextureStage *v114; // eax
  NiD3DTextureStage **v115; // eax
  NiD3DTextureStage *v116; // eax
  unsigned int *v117; // edi
  NiD3DTextureStage **v118; // eax
  NiD3DTextureStage *v119; // eax
  unsigned int *v120; // edi
  NiD3DTextureStage **v121; // eax
  NiD3DTextureStage *v122; // eax
  NiD3DTextureStage **v123; // eax
  NiD3DTextureStage *v124; // eax
  unsigned int *v125; // edi
  NiD3DTextureStage **v126; // eax
  NiD3DTextureStage *v127; // eax
  unsigned int *v128; // edi
  NiD3DTextureStage **v129; // eax
  NiD3DTextureStage *v130; // eax
  unsigned int *v131; // edi
  NiD3DTextureStage **v132; // eax
  NiD3DTextureStage *v133; // eax
  NiD3DTextureStage **v134; // eax
  NiD3DTextureStage *v135; // eax
  unsigned int *v136; // edi
  NiD3DTextureStage **v137; // eax
  NiD3DTextureStage *v138; // eax
  unsigned int *v139; // edi
  NiD3DTextureStage **v140; // eax
  NiD3DTextureStage *v141; // eax
  NiD3DTextureStage *v142; // edi
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
  NiD3DTextureStage **v156; // eax
  NiD3DTextureStage *v157; // eax
  unsigned int *v158; // edi
  NiD3DTextureStage **v159; // eax
  NiD3DTextureStage *v160; // eax
  unsigned int *v161; // edi
  NiD3DTextureStage **v162; // eax
  NiD3DTextureStage *v163; // eax
  unsigned int *v164; // edi
  NiD3DTextureStage **v165; // eax
  NiD3DTextureStage *v166; // eax
  unsigned int *a3; // [esp+50h] [ebp-18h] BYREF
  int v168; // [esp+54h] [ebp-14h]
  NiD3DTextureStage *v169; // [esp+58h] [ebp-10h] BYREF
  unsigned int v170; // [esp+64h] [ebp-4h]

  v0 = 0; /*0x836837*/
  v168 = 0; /*0x836839*/
  v1 = 0; /*0x83683d*/
  v170 = 0; /*0x83683f*/
  a3 = 0; /*0x836843*/
  v2 = unk_B456C0; /*0x836847*/
  v3 = unk_B456C0 == 0; /*0x83684c*/
  LOBYTE(v170) = 1; /*0x836853*/
  if ( !v3 ) /*0x836857*/
  {
    v0 = (NiD3DPass *)v2; /*0x836859*/
    v168 = v2; /*0x83685d*/
    if ( v2 ) /*0x836861*/
      ++*(_DWORD *)(v2 + 0x60); /*0x836863*/
  }
  if ( v0->StageCount < 2 ) /*0x83686c*/
  {
    v4 = (unsigned int *)*NiD3DTextureStagePool_Acquire(&v169); /*0x83687f*/
    if ( v4 ) /*0x836883*/
    {
      v1 = (NiD3DTextureStage *)v4; /*0x836885*/
      ++v4[0x17]; /*0x836887*/
      a3 = v4; /*0x83688a*/
    }
    v5 = v169; /*0x83688e*/
    LOBYTE(v170) = 1; /*0x836894*/
    if ( v169 ) /*0x836899*/
    {
      --v169[7].Unk08; /*0x83689b*/
      if ( !v5[7].Unk08 ) /*0x8368a4*/
        sub_772560(v5); /*0x8368a9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8368b4*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8368c3*/
    v6 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x8368d5*/
    v3 = v1 == (NiD3DTextureStage *)*v6; /*0x8368d7*/
    LOBYTE(v170) = 3; /*0x8368da*/
    if ( !v3 ) /*0x8368df*/
    {
      if ( v1 ) /*0x8368e3*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8368e5*/
        if ( v3 ) /*0x8368e9*/
          sub_772560(v1); /*0x8368ed*/
      }
      v1 = (NiD3DTextureStage *)*v6; /*0x8368f2*/
      a3 = *v6; /*0x8368f7*/
      if ( a3 ) /*0x8368fb*/
        ++v1[7].Unk08; /*0x8368fd*/
    }
    v7 = v169; /*0x836900*/
    LOBYTE(v170) = 1; /*0x836906*/
    if ( v169 ) /*0x83690b*/
    {
      --v169[7].Unk08; /*0x83690d*/
      if ( !v7[7].Unk08 ) /*0x836916*/
        sub_772560(v7); /*0x83691b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x836925*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x836934*/
  }
  VertexShader = v0->VertexShader; /*0x83693e*/
  v9 = unk_B4545C; /*0x836943*/
  if ( VertexShader != (NiD3DVertexShader *)unk_B4545C ) /*0x836945*/
  {
    if ( VertexShader ) /*0x836949*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x83694f*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x836966*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v9; /*0x83696a*/
    if ( v9 ) /*0x83696d*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x836973*/
  }
  PixelShader = v0->PixelShader; /*0x83697e*/
  v11 = unk_B4524C; /*0x836983*/
  if ( PixelShader != (NiD3DPixelShader *)unk_B4524C ) /*0x836985*/
  {
    if ( PixelShader ) /*0x836989*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x83698f*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x8369a6*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v11; /*0x8369aa*/
    if ( v11 ) /*0x8369ad*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x8369b3*/
  }
  if ( !v0->RenderStateGroup ) /*0x8369b9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8369c4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8369d0*/
  if ( !v0->RenderStateGroup ) /*0x8369d5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8369e0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8369ec*/
  if ( !v0->RenderStateGroup ) /*0x8369f1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8369fc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x836a08*/
  if ( !v0->RenderStateGroup ) /*0x836a0d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836a18*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x836a24*/
  if ( !v0->RenderStateGroup ) /*0x836a29*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836a34*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x836a40*/
  if ( !v0->RenderStateGroup ) /*0x836a45*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836a50*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x836a5c*/
  v3 = v0 == (NiD3DPass *)unk_B45B58; /*0x836a64*/
  unk_B43C40 = 0x82; /*0x836a6a*/
  unk_B442D0 = 0x3C; /*0x836a74*/
  unk_B435B0 = 0x80; /*0x836a7e*/
  unk_B44960 = 0xC; /*0x836a88*/
  if ( !v3 ) /*0x836a92*/
  {
    v3 = v0->RefCount-- == 1; /*0x836a94*/
    if ( v3 ) /*0x836a97*/
      NiD3DPass_ReleaseToPool(v0); /*0x836a9b*/
    v0 = (NiD3DPass *)unk_B45B58; /*0x836aa0*/
    v168 = unk_B45B58; /*0x836aa8*/
    if ( v168 ) /*0x836aac*/
      ++v0->RefCount; /*0x836aae*/
  }
  if ( v0->StageCount < 2 ) /*0x836ab8*/
  {
    v12 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x836acb*/
    v3 = v1 == (NiD3DTextureStage *)*v12; /*0x836acd*/
    LOBYTE(v170) = 4; /*0x836ad0*/
    if ( !v3 ) /*0x836ad5*/
    {
      if ( v1 ) /*0x836ad9*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x836adb*/
        if ( v3 ) /*0x836ade*/
          sub_772560(v1); /*0x836ae2*/
      }
      v1 = (NiD3DTextureStage *)*v12; /*0x836ae7*/
      a3 = *v12; /*0x836aec*/
      if ( a3 ) /*0x836af0*/
        ++v1[7].Unk08; /*0x836af2*/
    }
    v13 = v169; /*0x836af6*/
    LOBYTE(v170) = 1; /*0x836afc*/
    if ( v169 ) /*0x836b01*/
    {
      --v169[7].Unk08; /*0x836b03*/
      if ( !v13[7].Unk08 ) /*0x836b0b*/
        sub_772560(v13); /*0x836b10*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x836b1c*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x836b2b*/
    v14 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x836b3d*/
    v3 = v1 == (NiD3DTextureStage *)*v14; /*0x836b3f*/
    LOBYTE(v170) = 5; /*0x836b42*/
    if ( !v3 ) /*0x836b47*/
    {
      if ( v1 ) /*0x836b4b*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x836b4d*/
        if ( v3 ) /*0x836b50*/
          sub_772560(v1); /*0x836b54*/
      }
      v1 = (NiD3DTextureStage *)*v14; /*0x836b59*/
      a3 = *v14; /*0x836b5e*/
      if ( a3 ) /*0x836b62*/
        ++v1[7].Unk08; /*0x836b64*/
    }
    v15 = v169; /*0x836b68*/
    LOBYTE(v170) = 1; /*0x836b6e*/
    if ( v169 ) /*0x836b73*/
    {
      --v169[7].Unk08; /*0x836b75*/
      if ( !v15[7].Unk08 ) /*0x836b7d*/
        sub_772560(v15); /*0x836b82*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x836b8e*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x836b9d*/
  }
  v16 = v0->VertexShader; /*0x836ba7*/
  v17 = unk_B45460; /*0x836bac*/
  if ( v16 != (NiD3DVertexShader *)unk_B45460 ) /*0x836bae*/
  {
    if ( v16 ) /*0x836bb2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v16 + 1) ) /*0x836bb8*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1); /*0x836bcf*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v17; /*0x836bd3*/
    if ( v17 ) /*0x836bd6*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x836bdc*/
  }
  v18 = v0->PixelShader; /*0x836be7*/
  v19 = unk_B45250; /*0x836bec*/
  if ( v18 != (NiD3DPixelShader *)unk_B45250 ) /*0x836bee*/
  {
    if ( v18 ) /*0x836bf2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v18 + 1) ) /*0x836bf8*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v18)(v18, 1); /*0x836c0f*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v19; /*0x836c13*/
    if ( v19 ) /*0x836c16*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x836c1c*/
  }
  if ( !v0->RenderStateGroup ) /*0x836c22*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836c2d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x836c39*/
  if ( !v0->RenderStateGroup ) /*0x836c3e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836c49*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x836c55*/
  if ( !v0->RenderStateGroup ) /*0x836c5a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836c65*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0); /*0x836c71*/
  if ( !v0->RenderStateGroup ) /*0x836c76*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836c81*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x836c8d*/
  if ( !v0->RenderStateGroup ) /*0x836c92*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836c9d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x836ca9*/
  if ( !v0->RenderStateGroup ) /*0x836cae*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836cb9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x836cc5*/
  if ( !v0->RenderStateGroup ) /*0x836cca*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836cd5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x836ce1*/
  if ( !v0->RenderStateGroup ) /*0x836ce6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836cf1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x836cfd*/
  if ( !v0->RenderStateGroup ) /*0x836d02*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836d0d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x836d19*/
  if ( !v0->RenderStateGroup ) /*0x836d1e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836d29*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x836d35*/
  v3 = v0 == (NiD3DPass *)unk_B45B78; /*0x836d3d*/
  unk_B440D8 = 0x82; /*0x836d43*/
  unk_B44768 = 0x3C; /*0x836d4d*/
  unk_B43A48 = 0x80; /*0x836d57*/
  unk_B44DF8 = 0xC; /*0x836d61*/
  if ( !v3 ) /*0x836d6b*/
  {
    v3 = v0->RefCount-- == 1; /*0x836d6d*/
    if ( v3 ) /*0x836d70*/
      NiD3DPass_ReleaseToPool(v0); /*0x836d74*/
    v0 = (NiD3DPass *)unk_B45B78; /*0x836d79*/
    v168 = unk_B45B78; /*0x836d81*/
    if ( v168 ) /*0x836d85*/
      ++v0->RefCount; /*0x836d87*/
  }
  if ( v0->StageCount < 2 ) /*0x836d91*/
  {
    v20 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x836da4*/
    v3 = v1 == (NiD3DTextureStage *)*v20; /*0x836da6*/
    LOBYTE(v170) = 6; /*0x836da9*/
    if ( !v3 ) /*0x836dae*/
    {
      if ( v1 ) /*0x836db2*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x836db4*/
        if ( v3 ) /*0x836db7*/
          sub_772560(v1); /*0x836dbb*/
      }
      v1 = (NiD3DTextureStage *)*v20; /*0x836dc0*/
      a3 = *v20; /*0x836dc5*/
      if ( a3 ) /*0x836dc9*/
        ++v1[7].Unk08; /*0x836dcb*/
    }
    v21 = v169; /*0x836dcf*/
    LOBYTE(v170) = 1; /*0x836dd5*/
    if ( v169 ) /*0x836dda*/
    {
      --v169[7].Unk08; /*0x836ddc*/
      if ( !v21[7].Unk08 ) /*0x836de4*/
        sub_772560(v21); /*0x836de9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x836df5*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x836e04*/
    v22 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x836e16*/
    v3 = v1 == (NiD3DTextureStage *)*v22; /*0x836e18*/
    LOBYTE(v170) = 7; /*0x836e1b*/
    if ( !v3 ) /*0x836e20*/
    {
      if ( v1 ) /*0x836e24*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x836e26*/
        if ( v3 ) /*0x836e29*/
          sub_772560(v1); /*0x836e2d*/
      }
      v1 = (NiD3DTextureStage *)*v22; /*0x836e32*/
      a3 = *v22; /*0x836e37*/
      if ( a3 ) /*0x836e3b*/
        ++v1[7].Unk08; /*0x836e3d*/
    }
    v23 = v169; /*0x836e41*/
    LOBYTE(v170) = 1; /*0x836e47*/
    if ( v169 ) /*0x836e4c*/
    {
      --v169[7].Unk08; /*0x836e4e*/
      if ( !v23[7].Unk08 ) /*0x836e56*/
        sub_772560(v23); /*0x836e5b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x836e67*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x836e76*/
    v24 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x836e88*/
    v3 = v1 == (NiD3DTextureStage *)*v24; /*0x836e8a*/
    LOBYTE(v170) = 8; /*0x836e8d*/
    if ( !v3 ) /*0x836e92*/
    {
      if ( v1 ) /*0x836e96*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x836e98*/
        if ( v3 ) /*0x836e9b*/
          sub_772560(v1); /*0x836e9f*/
      }
      v1 = (NiD3DTextureStage *)*v24; /*0x836ea4*/
      a3 = *v24; /*0x836ea9*/
      if ( a3 ) /*0x836ead*/
        ++v1[7].Unk08; /*0x836eaf*/
    }
    v25 = v169; /*0x836eb3*/
    LOBYTE(v170) = 1; /*0x836eb9*/
    if ( v169 ) /*0x836ebe*/
    {
      --v169[7].Unk08; /*0x836ec0*/
      if ( !v25[7].Unk08 ) /*0x836ec8*/
        sub_772560(v25); /*0x836ecd*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x836ed9*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x836ee8*/
  }
  v26 = v0->VertexShader; /*0x836ef2*/
  v27 = unk_B45464; /*0x836ef7*/
  if ( v26 != (NiD3DVertexShader *)unk_B45464 ) /*0x836ef9*/
  {
    if ( v26 ) /*0x836efd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v26 + 1) ) /*0x836f03*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v26)(v26, 1); /*0x836f1a*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v27; /*0x836f1e*/
    if ( v27 ) /*0x836f21*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x836f27*/
  }
  v28 = v0->PixelShader; /*0x836f32*/
  v29 = unk_B45254; /*0x836f37*/
  if ( v28 != (NiD3DPixelShader *)unk_B45254 ) /*0x836f39*/
  {
    if ( v28 ) /*0x836f3d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v28 + 1) ) /*0x836f43*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v28)(v28, 1); /*0x836f5a*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v29; /*0x836f5e*/
    if ( v29 ) /*0x836f61*/
      InterlockedIncrement((volatile LONG *)(v29 + 4)); /*0x836f67*/
  }
  if ( !v0->RenderStateGroup ) /*0x836f6d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836f78*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x836f84*/
  if ( !v0->RenderStateGroup ) /*0x836f89*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836f94*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x836fa0*/
  if ( !v0->RenderStateGroup ) /*0x836fa5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836fb0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0); /*0x836fbc*/
  if ( !v0->RenderStateGroup ) /*0x836fc1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836fcc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x836fd8*/
  if ( !v0->RenderStateGroup ) /*0x836fdd*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836fe8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x836ff4*/
  if ( !v0->RenderStateGroup ) /*0x836ff9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837004*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x837010*/
  if ( !v0->RenderStateGroup ) /*0x837015*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837020*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x83702c*/
  if ( !v0->RenderStateGroup ) /*0x837031*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83703c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x837048*/
  if ( !v0->RenderStateGroup ) /*0x83704d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837058*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x837064*/
  if ( !v0->RenderStateGroup ) /*0x837069*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837074*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x837080*/
  v3 = v0 == (NiD3DPass *)unk_B45B54; /*0x83708d*/
  unk_B440F8 = 0x18082; /*0x837093*/
  unk_B44788 = 0xC; /*0x83709d*/
  unk_B43A68 = 0x80; /*0x8370a2*/
  unk_B44E18 = 0xC; /*0x8370ac*/
  if ( !v3 ) /*0x8370b1*/
  {
    v3 = v0->RefCount-- == 1; /*0x8370b3*/
    if ( v3 ) /*0x8370b6*/
      NiD3DPass_ReleaseToPool(v0); /*0x8370ba*/
    v0 = (NiD3DPass *)unk_B45B54; /*0x8370bf*/
    v168 = unk_B45B54; /*0x8370c7*/
    if ( v168 ) /*0x8370cb*/
      ++v0->RefCount; /*0x8370cd*/
  }
  if ( v0->StageCount < 2 ) /*0x8370d5*/
  {
    v30 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x8370e8*/
    v3 = v1 == (NiD3DTextureStage *)*v30; /*0x8370ea*/
    LOBYTE(v170) = 9; /*0x8370ed*/
    if ( !v3 ) /*0x8370f2*/
    {
      if ( v1 ) /*0x8370f6*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8370f8*/
        if ( v3 ) /*0x8370fb*/
          sub_772560(v1); /*0x8370ff*/
      }
      v1 = (NiD3DTextureStage *)*v30; /*0x837104*/
      a3 = *v30; /*0x837109*/
      if ( a3 ) /*0x83710d*/
        ++v1[7].Unk08; /*0x83710f*/
    }
    v31 = v169; /*0x837113*/
    LOBYTE(v170) = 1; /*0x837119*/
    if ( v169 ) /*0x83711e*/
    {
      --v169[7].Unk08; /*0x837120*/
      if ( !v31[7].Unk08 ) /*0x837128*/
        sub_772560(v31); /*0x83712d*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x837139*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x837148*/
    v32 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x83715a*/
    v3 = v1 == (NiD3DTextureStage *)*v32; /*0x83715c*/
    LOBYTE(v170) = 0xA; /*0x83715f*/
    if ( !v3 ) /*0x837164*/
    {
      if ( v1 ) /*0x837168*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x83716a*/
        if ( v3 ) /*0x83716d*/
          sub_772560(v1); /*0x837171*/
      }
      v1 = (NiD3DTextureStage *)*v32; /*0x837176*/
      a3 = *v32; /*0x83717b*/
      if ( a3 ) /*0x83717f*/
        ++v1[7].Unk08; /*0x837181*/
    }
    v33 = v169; /*0x837185*/
    LOBYTE(v170) = 1; /*0x83718b*/
    if ( v169 ) /*0x837190*/
    {
      --v169[7].Unk08; /*0x837192*/
      if ( !v33[7].Unk08 ) /*0x83719a*/
        sub_772560(v33); /*0x83719f*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8371ab*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8371ba*/
  }
  v34 = v0->VertexShader; /*0x8371c4*/
  v35 = unk_B45468; /*0x8371c9*/
  if ( v34 != (NiD3DVertexShader *)unk_B45468 ) /*0x8371cb*/
  {
    if ( v34 ) /*0x8371cf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v34 + 1) ) /*0x8371d5*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v34)(v34, 1); /*0x8371ec*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v35; /*0x8371f0*/
    if ( v35 ) /*0x8371f3*/
      InterlockedIncrement((volatile LONG *)(v35 + 4)); /*0x8371f9*/
  }
  v36 = v0->PixelShader; /*0x837204*/
  v37 = unk_B45258; /*0x837209*/
  if ( v36 != (NiD3DPixelShader *)unk_B45258 ) /*0x83720b*/
  {
    if ( v36 ) /*0x83720f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) ) /*0x837215*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v36)(v36, 1); /*0x83722c*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v37; /*0x837230*/
    if ( v37 ) /*0x837233*/
      InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x837239*/
  }
  if ( !v0->RenderStateGroup ) /*0x83723f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83724a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x837256*/
  if ( !v0->RenderStateGroup ) /*0x83725b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837266*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x837272*/
  if ( !v0->RenderStateGroup ) /*0x837277*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837282*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x837292*/
  if ( !v0->RenderStateGroup ) /*0x837297*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8372a2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x8372ae*/
  if ( !v0->RenderStateGroup ) /*0x8372b3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8372be*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x8372ca*/
  if ( !v0->RenderStateGroup ) /*0x8372cf*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8372da*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x8372e6*/
  if ( !v0->RenderStateGroup ) /*0x8372eb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8372f6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x837302*/
  if ( !v0->RenderStateGroup ) /*0x837307*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837312*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x83731e*/
  if ( !v0->RenderStateGroup ) /*0x837323*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83732e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x83733a*/
  if ( !v0->RenderStateGroup ) /*0x83733f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83734a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x837356*/
  v3 = v0 == (NiD3DPass *)unk_B45B60; /*0x83735e*/
  unk_B440D4 = 2; /*0x837364*/
  unk_B44764 = 0x30; /*0x83736a*/
  if ( !v3 ) /*0x837374*/
  {
    v3 = v0->RefCount-- == 1; /*0x837376*/
    if ( v3 ) /*0x837379*/
      NiD3DPass_ReleaseToPool(v0); /*0x83737d*/
    v0 = (NiD3DPass *)unk_B45B60; /*0x837382*/
    v168 = unk_B45B60; /*0x83738a*/
    if ( v168 ) /*0x83738e*/
      ++v0->RefCount; /*0x837390*/
  }
  if ( v0->StageCount < 2 ) /*0x837397*/
  {
    v38 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x8373aa*/
    v3 = v1 == (NiD3DTextureStage *)*v38; /*0x8373ac*/
    LOBYTE(v170) = 0xB; /*0x8373af*/
    if ( !v3 ) /*0x8373b4*/
    {
      if ( v1 ) /*0x8373b8*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8373ba*/
        if ( v3 ) /*0x8373bd*/
          sub_772560(v1); /*0x8373c1*/
      }
      v1 = (NiD3DTextureStage *)*v38; /*0x8373c6*/
      a3 = *v38; /*0x8373cb*/
      if ( a3 ) /*0x8373cf*/
        ++v1[7].Unk08; /*0x8373d1*/
    }
    v39 = v169; /*0x8373d5*/
    LOBYTE(v170) = 1; /*0x8373db*/
    if ( v169 ) /*0x8373e0*/
    {
      --v169[7].Unk08; /*0x8373e2*/
      if ( !v39[7].Unk08 ) /*0x8373ea*/
        sub_772560(v39); /*0x8373ef*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8373fb*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x83740a*/
    v40 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x83741c*/
    v3 = v1 == (NiD3DTextureStage *)*v40; /*0x83741e*/
    LOBYTE(v170) = 0xC; /*0x837421*/
    if ( !v3 ) /*0x837426*/
    {
      if ( v1 ) /*0x83742a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x83742c*/
        if ( v3 ) /*0x83742f*/
          sub_772560(v1); /*0x837433*/
      }
      v1 = (NiD3DTextureStage *)*v40; /*0x837438*/
      a3 = *v40; /*0x83743d*/
      if ( a3 ) /*0x837441*/
        ++v1[7].Unk08; /*0x837443*/
    }
    v41 = v169; /*0x837447*/
    LOBYTE(v170) = 1; /*0x83744d*/
    if ( v169 ) /*0x837452*/
    {
      --v169[7].Unk08; /*0x837454*/
      if ( !v41[7].Unk08 ) /*0x83745c*/
        sub_772560(v41); /*0x837461*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x83746d*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x83747c*/
  }
  v42 = v0->VertexShader; /*0x837486*/
  v43 = unk_B45468; /*0x83748b*/
  if ( v42 != (NiD3DVertexShader *)unk_B45468 ) /*0x83748d*/
  {
    if ( v42 ) /*0x837491*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) ) /*0x837497*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v42)(v42, 1); /*0x8374ae*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v43; /*0x8374b2*/
    if ( v43 ) /*0x8374b5*/
      InterlockedIncrement((volatile LONG *)(v43 + 4)); /*0x8374bb*/
  }
  v44 = v0->PixelShader; /*0x8374c6*/
  v45 = unk_B4525C; /*0x8374cb*/
  if ( v44 != (NiD3DPixelShader *)unk_B4525C ) /*0x8374cd*/
  {
    if ( v44 ) /*0x8374d1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v44 + 1) ) /*0x8374d7*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v44)(v44, 1); /*0x8374ee*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v45; /*0x8374f2*/
    if ( v45 ) /*0x8374f5*/
      InterlockedIncrement((volatile LONG *)(v45 + 4)); /*0x8374fb*/
  }
  if ( !v0->RenderStateGroup ) /*0x837501*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83750c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x837518*/
  if ( !v0->RenderStateGroup ) /*0x83751d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837528*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x837534*/
  if ( !v0->RenderStateGroup ) /*0x837539*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837544*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x837554*/
  if ( !v0->RenderStateGroup ) /*0x837559*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837564*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x837570*/
  if ( !v0->RenderStateGroup ) /*0x837575*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837580*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x83758c*/
  if ( !v0->RenderStateGroup ) /*0x837591*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83759c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x8375a8*/
  if ( !v0->RenderStateGroup ) /*0x8375ad*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8375b8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8375c4*/
  if ( !v0->RenderStateGroup ) /*0x8375c9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8375d4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8375e0*/
  if ( !v0->RenderStateGroup ) /*0x8375e5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8375f0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x8375fc*/
  if ( !v0->RenderStateGroup ) /*0x837601*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83760c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x837618*/
  v3 = v0 == (NiD3DPass *)unk_B45B40; /*0x837620*/
  unk_B440E0 = 2; /*0x837626*/
  unk_B44770 = 0x30; /*0x83762c*/
  if ( !v3 ) /*0x837636*/
  {
    v3 = v0->RefCount-- == 1; /*0x837638*/
    if ( v3 ) /*0x83763b*/
      NiD3DPass_ReleaseToPool(v0); /*0x83763f*/
    v0 = (NiD3DPass *)unk_B45B40; /*0x837644*/
    v168 = unk_B45B40; /*0x83764c*/
    if ( v168 ) /*0x837650*/
      ++v0->RefCount; /*0x837652*/
  }
  if ( v0->StageCount < 2 ) /*0x837659*/
  {
    v46 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x83766c*/
    v3 = v1 == (NiD3DTextureStage *)*v46; /*0x83766e*/
    LOBYTE(v170) = 0xD; /*0x837671*/
    if ( !v3 ) /*0x837676*/
    {
      if ( v1 ) /*0x83767a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x83767c*/
        if ( v3 ) /*0x83767f*/
          sub_772560(v1); /*0x837683*/
      }
      v1 = (NiD3DTextureStage *)*v46; /*0x837688*/
      a3 = *v46; /*0x83768d*/
      if ( a3 ) /*0x837691*/
        ++v1[7].Unk08; /*0x837693*/
    }
    v47 = v169; /*0x837697*/
    LOBYTE(v170) = 1; /*0x83769d*/
    if ( v169 ) /*0x8376a2*/
    {
      --v169[7].Unk08; /*0x8376a4*/
      if ( !v47[7].Unk08 ) /*0x8376ac*/
        sub_772560(v47); /*0x8376b1*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8376bd*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8376cc*/
    v48 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x8376de*/
    v3 = v1 == (NiD3DTextureStage *)*v48; /*0x8376e0*/
    LOBYTE(v170) = 0xE; /*0x8376e3*/
    if ( !v3 ) /*0x8376e8*/
    {
      if ( v1 ) /*0x8376ec*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8376ee*/
        if ( v3 ) /*0x8376f1*/
          sub_772560(v1); /*0x8376f5*/
      }
      v1 = (NiD3DTextureStage *)*v48; /*0x8376fa*/
      a3 = *v48; /*0x8376ff*/
      if ( a3 ) /*0x837703*/
        ++v1[7].Unk08; /*0x837705*/
    }
    v49 = v169; /*0x837709*/
    LOBYTE(v170) = 1; /*0x83770f*/
    if ( v169 ) /*0x837714*/
    {
      --v169[7].Unk08; /*0x837716*/
      if ( !v49[7].Unk08 ) /*0x83771e*/
        sub_772560(v49); /*0x837723*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x83772f*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x83773e*/
  }
  v50 = v0->VertexShader; /*0x837748*/
  v51 = unk_B4546C; /*0x83774d*/
  if ( v50 != (NiD3DVertexShader *)unk_B4546C ) /*0x83774f*/
  {
    if ( v50 ) /*0x837753*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v50 + 1) ) /*0x837759*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v50)(v50, 1); /*0x837770*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v51; /*0x837774*/
    if ( v51 ) /*0x837777*/
      InterlockedIncrement((volatile LONG *)(v51 + 4)); /*0x83777d*/
  }
  v52 = v0->PixelShader; /*0x837788*/
  v53 = unk_B45260; /*0x83778d*/
  if ( v52 != (NiD3DPixelShader *)unk_B45260 ) /*0x83778f*/
  {
    if ( v52 ) /*0x837793*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v52 + 1) ) /*0x837799*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v52)(v52, 1); /*0x8377b0*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v53; /*0x8377b4*/
    if ( v53 ) /*0x8377b7*/
      InterlockedIncrement((volatile LONG *)(v53 + 4)); /*0x8377bd*/
  }
  if ( !v0->RenderStateGroup ) /*0x8377c3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8377ce*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x8377da*/
  if ( !v0->RenderStateGroup ) /*0x8377df*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8377ea*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x8377f6*/
  if ( !v0->RenderStateGroup ) /*0x8377fb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837806*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x837812*/
  if ( !v0->RenderStateGroup ) /*0x837817*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837822*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x83782e*/
  if ( !v0->RenderStateGroup ) /*0x837833*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83783e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x83784a*/
  if ( !v0->RenderStateGroup ) /*0x83784f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83785a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x837866*/
  if ( !v0->RenderStateGroup ) /*0x83786b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837876*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x837882*/
  if ( !v0->RenderStateGroup ) /*0x837887*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837892*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x83789e*/
  if ( !v0->RenderStateGroup ) /*0x8378a3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8378ae*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x8378ba*/
  if ( !v0->RenderStateGroup ) /*0x8378bf*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8378ca*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8378d6*/
  v3 = v0 == (NiD3DPass *)unk_B45B64; /*0x8378de*/
  unk_B440C0 = 0x802; /*0x8378e4*/
  unk_B44750 = 8; /*0x8378ee*/
  unk_B44DE0 = 0; /*0x8378f8*/
  if ( !v3 ) /*0x837902*/
  {
    v3 = v0->RefCount-- == 1; /*0x837904*/
    if ( v3 ) /*0x837907*/
      NiD3DPass_ReleaseToPool(v0); /*0x83790b*/
    v0 = (NiD3DPass *)unk_B45B64; /*0x837910*/
    v168 = unk_B45B64; /*0x837918*/
    if ( v168 ) /*0x83791c*/
      ++v0->RefCount; /*0x83791e*/
  }
  if ( v0->StageCount < 2 ) /*0x837926*/
  {
    v54 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x837939*/
    v3 = v1 == (NiD3DTextureStage *)*v54; /*0x83793b*/
    LOBYTE(v170) = 0xF; /*0x83793e*/
    if ( !v3 ) /*0x837943*/
    {
      if ( v1 ) /*0x837947*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x837949*/
        if ( v3 ) /*0x83794c*/
          sub_772560(v1); /*0x837950*/
      }
      v1 = (NiD3DTextureStage *)*v54; /*0x837955*/
      a3 = *v54; /*0x83795a*/
      if ( a3 ) /*0x83795e*/
        ++v1[7].Unk08; /*0x837960*/
    }
    v55 = v169; /*0x837964*/
    LOBYTE(v170) = 1; /*0x83796a*/
    if ( v169 ) /*0x83796f*/
    {
      --v169[7].Unk08; /*0x837971*/
      if ( !v55[7].Unk08 ) /*0x837979*/
        sub_772560(v55); /*0x83797e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x83798a*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x837999*/
    v56 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x8379ab*/
    v3 = v1 == (NiD3DTextureStage *)*v56; /*0x8379ad*/
    LOBYTE(v170) = 0x10; /*0x8379b0*/
    if ( !v3 ) /*0x8379b5*/
    {
      if ( v1 ) /*0x8379b9*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8379bb*/
        if ( v3 ) /*0x8379be*/
          sub_772560(v1); /*0x8379c2*/
      }
      v1 = (NiD3DTextureStage *)*v56; /*0x8379c7*/
      a3 = *v56; /*0x8379cc*/
      if ( a3 ) /*0x8379d0*/
        ++v1[7].Unk08; /*0x8379d2*/
    }
    v57 = v169; /*0x8379d6*/
    LOBYTE(v170) = 1; /*0x8379dc*/
    if ( v169 ) /*0x8379e1*/
    {
      --v169[7].Unk08; /*0x8379e3*/
      if ( !v57[7].Unk08 ) /*0x8379eb*/
        sub_772560(v57); /*0x8379f0*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8379fc*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x837a0b*/
  }
  v58 = v0->VertexShader; /*0x837a15*/
  v59 = unk_B45470; /*0x837a1a*/
  if ( v58 != (NiD3DVertexShader *)unk_B45470 ) /*0x837a1c*/
  {
    if ( v58 ) /*0x837a20*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v58 + 1) ) /*0x837a26*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v58)(v58, 1); /*0x837a3d*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v59; /*0x837a41*/
    if ( v59 ) /*0x837a44*/
      InterlockedIncrement((volatile LONG *)(v59 + 4)); /*0x837a4a*/
  }
  v60 = v0->PixelShader; /*0x837a55*/
  v61 = unk_B45264; /*0x837a5a*/
  if ( v60 != (NiD3DPixelShader *)unk_B45264 ) /*0x837a5c*/
  {
    if ( v60 ) /*0x837a60*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v60 + 1) ) /*0x837a66*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v60)(v60, 1); /*0x837a7d*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v61; /*0x837a81*/
    if ( v61 ) /*0x837a84*/
      InterlockedIncrement((volatile LONG *)(v61 + 4)); /*0x837a8a*/
  }
  if ( !v0->RenderStateGroup ) /*0x837a90*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837a9b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x837aa7*/
  if ( !v0->RenderStateGroup ) /*0x837aac*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837ab7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x837ac3*/
  if ( !v0->RenderStateGroup ) /*0x837ac8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837ad3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x837adf*/
  if ( !v0->RenderStateGroup ) /*0x837ae4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837aef*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x837afb*/
  if ( !v0->RenderStateGroup ) /*0x837b00*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837b0b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x837b17*/
  if ( !v0->RenderStateGroup ) /*0x837b1c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837b27*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x837b33*/
  if ( !v0->RenderStateGroup ) /*0x837b38*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837b43*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x837b4f*/
  if ( !v0->RenderStateGroup ) /*0x837b54*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837b5f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x837b6b*/
  if ( !v0->RenderStateGroup ) /*0x837b70*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837b7b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x837b87*/
  if ( !v0->RenderStateGroup ) /*0x837b8c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837b97*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x837ba3*/
  v3 = v0 == (NiD3DPass *)unk_B456C4; /*0x837bab*/
  unk_B440E4 = 0x3802; /*0x837bb1*/
  unk_B44774 = 0xBC; /*0x837bbb*/
  unk_B44E04 = 0; /*0x837bc5*/
  if ( !v3 ) /*0x837bcf*/
  {
    v3 = v0->RefCount-- == 1; /*0x837bd1*/
    if ( v3 ) /*0x837bd4*/
      NiD3DPass_ReleaseToPool(v0); /*0x837bd8*/
    v0 = (NiD3DPass *)unk_B456C4; /*0x837bdd*/
    v168 = unk_B456C4; /*0x837be5*/
    if ( v168 ) /*0x837be9*/
      ++v0->RefCount; /*0x837beb*/
  }
  if ( v0->StageCount < 4 ) /*0x837bf3*/
  {
    v62 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x837c06*/
    v3 = v1 == (NiD3DTextureStage *)*v62; /*0x837c08*/
    LOBYTE(v170) = 0x11; /*0x837c0b*/
    if ( !v3 ) /*0x837c10*/
    {
      if ( v1 ) /*0x837c14*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x837c16*/
        if ( v3 ) /*0x837c19*/
          sub_772560(v1); /*0x837c1d*/
      }
      v1 = (NiD3DTextureStage *)*v62; /*0x837c22*/
      a3 = *v62; /*0x837c27*/
      if ( a3 ) /*0x837c2b*/
        ++v1[7].Unk08; /*0x837c2d*/
    }
    v63 = v169; /*0x837c31*/
    LOBYTE(v170) = 1; /*0x837c37*/
    if ( v169 ) /*0x837c3c*/
    {
      --v169[7].Unk08; /*0x837c3e*/
      if ( !v63[7].Unk08 ) /*0x837c46*/
        sub_772560(v63); /*0x837c4b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x837c57*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x837c66*/
    v64 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x837c78*/
    v3 = v1 == (NiD3DTextureStage *)*v64; /*0x837c7a*/
    LOBYTE(v170) = 0x12; /*0x837c7d*/
    if ( !v3 ) /*0x837c82*/
    {
      if ( v1 ) /*0x837c86*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x837c88*/
        if ( v3 ) /*0x837c8b*/
          sub_772560(v1); /*0x837c8f*/
      }
      v1 = (NiD3DTextureStage *)*v64; /*0x837c94*/
      a3 = *v64; /*0x837c99*/
      if ( a3 ) /*0x837c9d*/
        ++v1[7].Unk08; /*0x837c9f*/
    }
    v65 = v169; /*0x837ca3*/
    LOBYTE(v170) = 1; /*0x837ca9*/
    if ( v169 ) /*0x837cae*/
    {
      --v169[7].Unk08; /*0x837cb0*/
      if ( !v65[7].Unk08 ) /*0x837cb8*/
        sub_772560(v65); /*0x837cbd*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x837cc9*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x837cd8*/
    v66 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x837cea*/
    v3 = v1 == (NiD3DTextureStage *)*v66; /*0x837cec*/
    LOBYTE(v170) = 0x13; /*0x837cef*/
    if ( !v3 ) /*0x837cf4*/
    {
      if ( v1 ) /*0x837cf8*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x837cfa*/
        if ( v3 ) /*0x837cfd*/
          sub_772560(v1); /*0x837d01*/
      }
      v1 = (NiD3DTextureStage *)*v66; /*0x837d06*/
      a3 = *v66; /*0x837d0b*/
      if ( a3 ) /*0x837d0f*/
        ++v1[7].Unk08; /*0x837d11*/
    }
    v67 = v169; /*0x837d15*/
    LOBYTE(v170) = 1; /*0x837d1b*/
    if ( v169 ) /*0x837d20*/
    {
      --v169[7].Unk08; /*0x837d22*/
      if ( !v67[7].Unk08 ) /*0x837d2a*/
        sub_772560(v67); /*0x837d2f*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x837d3b*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x837d4a*/
    v68 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x837d5c*/
    v3 = v1 == (NiD3DTextureStage *)*v68; /*0x837d5e*/
    LOBYTE(v170) = 0x14; /*0x837d61*/
    if ( !v3 ) /*0x837d66*/
    {
      if ( v1 ) /*0x837d6a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x837d6c*/
        if ( v3 ) /*0x837d6f*/
          sub_772560(v1); /*0x837d73*/
      }
      v1 = (NiD3DTextureStage *)*v68; /*0x837d78*/
      a3 = *v68; /*0x837d7d*/
      if ( a3 ) /*0x837d81*/
        ++v1[7].Unk08; /*0x837d83*/
    }
    v69 = v169; /*0x837d87*/
    LOBYTE(v170) = 1; /*0x837d8d*/
    if ( v169 ) /*0x837d92*/
    {
      --v169[7].Unk08; /*0x837d94*/
      if ( !v69[7].Unk08 ) /*0x837d9c*/
        sub_772560(v69); /*0x837da1*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 3, 0); /*0x837dad*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x837dbc*/
  }
  v70 = v0->VertexShader; /*0x837dc6*/
  v71 = unk_B4540C; /*0x837dcb*/
  if ( v70 != (NiD3DVertexShader *)unk_B4540C ) /*0x837dcd*/
  {
    if ( v70 ) /*0x837dd1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v70 + 1) ) /*0x837dd7*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v70)(v70, 1); /*0x837dee*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v71; /*0x837df2*/
    if ( v71 ) /*0x837df5*/
      InterlockedIncrement((volatile LONG *)(v71 + 4)); /*0x837dfb*/
  }
  v72 = v0->PixelShader; /*0x837e06*/
  v73 = unk_B45204; /*0x837e0b*/
  if ( v72 != (NiD3DPixelShader *)unk_B45204 ) /*0x837e0d*/
  {
    if ( v72 ) /*0x837e11*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v72 + 1) ) /*0x837e17*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v72)(v72, 1); /*0x837e2e*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v73; /*0x837e32*/
    if ( v73 ) /*0x837e35*/
      InterlockedIncrement((volatile LONG *)(v73 + 4)); /*0x837e3b*/
  }
  if ( !v0->RenderStateGroup ) /*0x837e41*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837e4c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x837e58*/
  if ( !v0->RenderStateGroup ) /*0x837e5d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837e68*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x837e74*/
  if ( !v0->RenderStateGroup ) /*0x837e79*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837e84*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x837e90*/
  if ( !v0->RenderStateGroup ) /*0x837e95*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837ea0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x837eac*/
  if ( !v0->RenderStateGroup ) /*0x837eb1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837ebc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x837ec8*/
  if ( !v0->RenderStateGroup ) /*0x837ecd*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x837ed8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x837ee4*/
  v3 = v0 == (NiD3DPass *)unk_B45B5C; /*0x837eec*/
  unk_B43C44 = 0xF2; /*0x837ef2*/
  unk_B442D4 = 0x3C; /*0x837efc*/
  unk_B435B4 = 0xE0; /*0x837f06*/
  unk_B44964 = 0xC; /*0x837f10*/
  if ( !v3 ) /*0x837f1a*/
  {
    v3 = v0->RefCount-- == 1; /*0x837f1c*/
    if ( v3 ) /*0x837f1f*/
      NiD3DPass_ReleaseToPool(v0); /*0x837f23*/
    v0 = (NiD3DPass *)unk_B45B5C; /*0x837f28*/
    v168 = unk_B45B5C; /*0x837f30*/
    if ( v168 ) /*0x837f34*/
      ++v0->RefCount; /*0x837f36*/
  }
  if ( v0->StageCount < 4 ) /*0x837f3e*/
  {
    v74 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x837f51*/
    v3 = v1 == (NiD3DTextureStage *)*v74; /*0x837f53*/
    LOBYTE(v170) = 0x15; /*0x837f56*/
    if ( !v3 ) /*0x837f5b*/
    {
      if ( v1 ) /*0x837f5f*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x837f61*/
        if ( v3 ) /*0x837f64*/
          sub_772560(v1); /*0x837f68*/
      }
      v1 = (NiD3DTextureStage *)*v74; /*0x837f6d*/
      a3 = *v74; /*0x837f72*/
      if ( a3 ) /*0x837f76*/
        ++v1[7].Unk08; /*0x837f78*/
    }
    v75 = v169; /*0x837f7c*/
    LOBYTE(v170) = 1; /*0x837f82*/
    if ( v169 ) /*0x837f87*/
    {
      --v169[7].Unk08; /*0x837f89*/
      if ( !v75[7].Unk08 ) /*0x837f91*/
        sub_772560(v75); /*0x837f96*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x837fa2*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x837fb1*/
    v76 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x837fc3*/
    v3 = v1 == (NiD3DTextureStage *)*v76; /*0x837fc5*/
    LOBYTE(v170) = 0x16; /*0x837fc8*/
    if ( !v3 ) /*0x837fcd*/
    {
      if ( v1 ) /*0x837fd1*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x837fd3*/
        if ( v3 ) /*0x837fd6*/
          sub_772560(v1); /*0x837fda*/
      }
      v1 = (NiD3DTextureStage *)*v76; /*0x837fdf*/
      a3 = *v76; /*0x837fe4*/
      if ( a3 ) /*0x837fe8*/
        ++v1[7].Unk08; /*0x837fea*/
    }
    v77 = v169; /*0x837fee*/
    LOBYTE(v170) = 1; /*0x837ff4*/
    if ( v169 ) /*0x837ff9*/
    {
      --v169[7].Unk08; /*0x837ffb*/
      if ( !v77[7].Unk08 ) /*0x838003*/
        sub_772560(v77); /*0x838008*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x838014*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x838023*/
    v78 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x838035*/
    v3 = v1 == (NiD3DTextureStage *)*v78; /*0x838037*/
    LOBYTE(v170) = 0x17; /*0x83803a*/
    if ( !v3 ) /*0x83803f*/
    {
      if ( v1 ) /*0x838043*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x838045*/
        if ( v3 ) /*0x838048*/
          sub_772560(v1); /*0x83804c*/
      }
      v1 = (NiD3DTextureStage *)*v78; /*0x838051*/
      a3 = *v78; /*0x838056*/
      if ( a3 ) /*0x83805a*/
        ++v1[7].Unk08; /*0x83805c*/
    }
    v79 = v169; /*0x838060*/
    LOBYTE(v170) = 1; /*0x838066*/
    if ( v169 ) /*0x83806b*/
    {
      --v169[7].Unk08; /*0x83806d*/
      if ( !v79[7].Unk08 ) /*0x838075*/
        sub_772560(v79); /*0x83807a*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x838086*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x838095*/
    v80 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x8380a7*/
    v3 = v1 == (NiD3DTextureStage *)*v80; /*0x8380a9*/
    LOBYTE(v170) = 0x18; /*0x8380ac*/
    if ( !v3 ) /*0x8380b1*/
    {
      if ( v1 ) /*0x8380b5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8380b7*/
        if ( v3 ) /*0x8380ba*/
          sub_772560(v1); /*0x8380be*/
      }
      v1 = (NiD3DTextureStage *)*v80; /*0x8380c3*/
      a3 = *v80; /*0x8380c8*/
      if ( a3 ) /*0x8380cc*/
        ++v1[7].Unk08; /*0x8380ce*/
    }
    v81 = v169; /*0x8380d2*/
    LOBYTE(v170) = 1; /*0x8380d8*/
    if ( v169 ) /*0x8380dd*/
    {
      --v169[7].Unk08; /*0x8380df*/
      if ( !v81[7].Unk08 ) /*0x8380e7*/
        sub_772560(v81); /*0x8380ec*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 3, 0); /*0x8380f8*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x838107*/
  }
  v82 = v0->VertexShader; /*0x838111*/
  v83 = unk_B45410; /*0x838116*/
  if ( v82 != (NiD3DVertexShader *)unk_B45410 ) /*0x838118*/
  {
    if ( v82 ) /*0x83811c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v82 + 1) ) /*0x838122*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v82)(v82, 1); /*0x838139*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v83; /*0x83813d*/
    if ( v83 ) /*0x838140*/
      InterlockedIncrement((volatile LONG *)(v83 + 4)); /*0x838146*/
  }
  v84 = v0->PixelShader; /*0x838151*/
  v85 = unk_B45208; /*0x838156*/
  if ( v84 != (NiD3DPixelShader *)unk_B45208 ) /*0x838158*/
  {
    if ( v84 ) /*0x83815c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v84 + 1) ) /*0x838162*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v84)(v84, 1); /*0x838179*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v85; /*0x83817d*/
    if ( v85 ) /*0x838180*/
      InterlockedIncrement((volatile LONG *)(v85 + 4)); /*0x838186*/
  }
  if ( !v0->RenderStateGroup ) /*0x83818c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838197*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x8381a3*/
  if ( !v0->RenderStateGroup ) /*0x8381a8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8381b3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x8381bf*/
  if ( !v0->RenderStateGroup ) /*0x8381c4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8381cf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0); /*0x8381db*/
  if ( !v0->RenderStateGroup ) /*0x8381e0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8381eb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x8381f7*/
  if ( !v0->RenderStateGroup ) /*0x8381fc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838207*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x838213*/
  if ( !v0->RenderStateGroup ) /*0x838218*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838223*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x83822f*/
  if ( !v0->RenderStateGroup ) /*0x838234*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83823f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x83824b*/
  if ( !v0->RenderStateGroup ) /*0x838250*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83825b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x838267*/
  if ( !v0->RenderStateGroup ) /*0x83826c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838277*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x838283*/
  if ( !v0->RenderStateGroup ) /*0x838288*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838293*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x83829f*/
  v3 = v0 == (NiD3DPass *)unk_B45B44; /*0x8382a7*/
  unk_B440DC = 0xF2; /*0x8382ad*/
  unk_B4476C = 0x3C; /*0x8382b7*/
  unk_B43A4C = 0xE0; /*0x8382c1*/
  unk_B44DFC = 0xC; /*0x8382cb*/
  if ( !v3 ) /*0x8382d5*/
  {
    v3 = v0->RefCount-- == 1; /*0x8382d7*/
    if ( v3 ) /*0x8382da*/
      NiD3DPass_ReleaseToPool(v0); /*0x8382de*/
    v0 = (NiD3DPass *)unk_B45B44; /*0x8382e3*/
    v168 = unk_B45B44; /*0x8382eb*/
    if ( v168 ) /*0x8382ef*/
      ++v0->RefCount; /*0x8382f1*/
  }
  if ( v0->StageCount < 3 ) /*0x8382f9*/
  {
    v86 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x83830c*/
    v3 = v1 == (NiD3DTextureStage *)*v86; /*0x83830e*/
    LOBYTE(v170) = 0x19; /*0x838311*/
    if ( !v3 ) /*0x838316*/
    {
      if ( v1 ) /*0x83831a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x83831c*/
        if ( v3 ) /*0x83831f*/
          sub_772560(v1); /*0x838323*/
      }
      v1 = (NiD3DTextureStage *)*v86; /*0x838328*/
      a3 = *v86; /*0x83832d*/
      if ( a3 ) /*0x838331*/
        ++v1[7].Unk08; /*0x838333*/
    }
    v87 = v169; /*0x838337*/
    LOBYTE(v170) = 1; /*0x83833d*/
    if ( v169 ) /*0x838342*/
    {
      --v169[7].Unk08; /*0x838344*/
      if ( !v87[7].Unk08 ) /*0x83834c*/
        sub_772560(v87); /*0x838351*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x83835d*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x83836c*/
    v88 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x83837e*/
    v3 = v1 == (NiD3DTextureStage *)*v88; /*0x838380*/
    LOBYTE(v170) = 0x1A; /*0x838383*/
    if ( !v3 ) /*0x838388*/
    {
      if ( v1 ) /*0x83838c*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x83838e*/
        if ( v3 ) /*0x838391*/
          sub_772560(v1); /*0x838395*/
      }
      v1 = (NiD3DTextureStage *)*v88; /*0x83839a*/
      a3 = *v88; /*0x83839f*/
      if ( a3 ) /*0x8383a3*/
        ++v1[7].Unk08; /*0x8383a5*/
    }
    v89 = v169; /*0x8383a9*/
    LOBYTE(v170) = 1; /*0x8383af*/
    if ( v169 ) /*0x8383b4*/
    {
      --v169[7].Unk08; /*0x8383b6*/
      if ( !v89[7].Unk08 ) /*0x8383be*/
        sub_772560(v89); /*0x8383c3*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8383cf*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8383de*/
    v90 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x8383f0*/
    v3 = v1 == (NiD3DTextureStage *)*v90; /*0x8383f2*/
    LOBYTE(v170) = 0x1B; /*0x8383f5*/
    if ( !v3 ) /*0x8383fa*/
    {
      if ( v1 ) /*0x8383fe*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x838400*/
        if ( v3 ) /*0x838403*/
          sub_772560(v1); /*0x838407*/
      }
      v1 = (NiD3DTextureStage *)*v90; /*0x83840c*/
      a3 = *v90; /*0x838411*/
      if ( a3 ) /*0x838415*/
        ++v1[7].Unk08; /*0x838417*/
    }
    v91 = v169; /*0x83841b*/
    LOBYTE(v170) = 1; /*0x838421*/
    if ( v169 ) /*0x838426*/
    {
      --v169[7].Unk08; /*0x838428*/
      if ( !v91[7].Unk08 ) /*0x838430*/
        sub_772560(v91); /*0x838435*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 3, 0); /*0x838441*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x838451*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x83845d*/
  }
  v92 = v0->VertexShader; /*0x838467*/
  v93 = unk_B45414; /*0x83846c*/
  if ( v92 != (NiD3DVertexShader *)unk_B45414 ) /*0x83846e*/
  {
    if ( v92 ) /*0x838472*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v92 + 1) ) /*0x838478*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v92)(v92, 1); /*0x83848f*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v93; /*0x838493*/
    if ( v93 ) /*0x838496*/
      InterlockedIncrement((volatile LONG *)(v93 + 4)); /*0x83849c*/
  }
  v94 = v0->PixelShader; /*0x8384a7*/
  v95 = unk_B4520C; /*0x8384ac*/
  if ( v94 != (NiD3DPixelShader *)unk_B4520C ) /*0x8384ae*/
  {
    if ( v94 ) /*0x8384b2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v94 + 1) ) /*0x8384b8*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v94)(v94, 1); /*0x8384cf*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v95; /*0x8384d3*/
    if ( v95 ) /*0x8384d6*/
      InterlockedIncrement((volatile LONG *)(v95 + 4)); /*0x8384dc*/
  }
  if ( !v0->RenderStateGroup ) /*0x8384e2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8384ed*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x8384f9*/
  if ( !v0->RenderStateGroup ) /*0x8384fe*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838509*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x838515*/
  if ( !v0->RenderStateGroup ) /*0x83851a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838525*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x838531*/
  if ( !v0->RenderStateGroup ) /*0x838536*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838541*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x83854d*/
  if ( !v0->RenderStateGroup ) /*0x838552*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83855d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x838569*/
  if ( !v0->RenderStateGroup ) /*0x83856e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838579*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x838589*/
  if ( !v0->RenderStateGroup ) /*0x83858e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838599*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x8385a5*/
  if ( !v0->RenderStateGroup ) /*0x8385aa*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8385b5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8385c1*/
  v3 = v0 == (NiD3DPass *)unk_B45B48; /*0x8385c9*/
  unk_B440C4 = 0x3802; /*0x8385cf*/
  unk_B44754 = 0x3C; /*0x8385d9*/
  unk_B44DE4 = 4; /*0x8385e3*/
  if ( !v3 ) /*0x8385e9*/
  {
    v3 = v0->RefCount-- == 1; /*0x8385eb*/
    if ( v3 ) /*0x8385ee*/
      NiD3DPass_ReleaseToPool(v0); /*0x8385f2*/
    v0 = (NiD3DPass *)unk_B45B48; /*0x8385f7*/
    v168 = unk_B45B48; /*0x8385ff*/
    if ( v168 ) /*0x838603*/
      ++v0->RefCount; /*0x838605*/
  }
  if ( v0->StageCount < 4 ) /*0x83860c*/
  {
    v96 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x83861f*/
    v3 = v1 == (NiD3DTextureStage *)*v96; /*0x838621*/
    LOBYTE(v170) = 0x1C; /*0x838624*/
    if ( !v3 ) /*0x838629*/
    {
      if ( v1 ) /*0x83862d*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x83862f*/
        if ( v3 ) /*0x838632*/
          sub_772560(v1); /*0x838636*/
      }
      v1 = (NiD3DTextureStage *)*v96; /*0x83863b*/
      a3 = *v96; /*0x838640*/
      if ( a3 ) /*0x838644*/
        ++v1[7].Unk08; /*0x838646*/
    }
    v97 = v169; /*0x83864a*/
    LOBYTE(v170) = 1; /*0x838650*/
    if ( v169 ) /*0x838655*/
    {
      --v169[7].Unk08; /*0x838657*/
      if ( !v97[7].Unk08 ) /*0x83865f*/
        sub_772560(v97); /*0x838664*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x838670*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x83867f*/
    v98 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x838691*/
    v3 = v1 == (NiD3DTextureStage *)*v98; /*0x838693*/
    LOBYTE(v170) = 0x1D; /*0x838696*/
    if ( !v3 ) /*0x83869b*/
    {
      if ( v1 ) /*0x83869f*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8386a1*/
        if ( v3 ) /*0x8386a4*/
          sub_772560(v1); /*0x8386a8*/
      }
      v1 = (NiD3DTextureStage *)*v98; /*0x8386ad*/
      a3 = *v98; /*0x8386b2*/
      if ( a3 ) /*0x8386b6*/
        ++v1[7].Unk08; /*0x8386b8*/
    }
    v99 = v169; /*0x8386bc*/
    LOBYTE(v170) = 1; /*0x8386c2*/
    if ( v169 ) /*0x8386c7*/
    {
      --v169[7].Unk08; /*0x8386c9*/
      if ( !v99[7].Unk08 ) /*0x8386d1*/
        sub_772560(v99); /*0x8386d6*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8386e2*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8386f1*/
    v100 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v169); /*0x838703*/
    v3 = v1 == (NiD3DTextureStage *)*v100; /*0x838705*/
    LOBYTE(v170) = 0x1E; /*0x838708*/
    if ( !v3 ) /*0x83870d*/
    {
      if ( v1 ) /*0x838711*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x838713*/
        if ( v3 ) /*0x838716*/
          sub_772560(v1); /*0x83871a*/
      }
      v1 = (NiD3DTextureStage *)*v100; /*0x83871f*/
      a3 = *v100; /*0x838724*/
      if ( a3 ) /*0x838728*/
        ++v1[7].Unk08; /*0x83872a*/
    }
    v101 = v169; /*0x83872e*/
    LOBYTE(v170) = 1; /*0x838734*/
    if ( v169 ) /*0x838739*/
    {
      --v169[7].Unk08; /*0x83873b*/
      if ( !v101[7].Unk08 ) /*0x838743*/
        sub_772560(v101); /*0x838748*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x838754*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x838763*/
    v102 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x83876d*/
    LOBYTE(v170) = 0x1F; /*0x83877a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v102); /*0x83877f*/
    v103 = v169; /*0x838784*/
    LOBYTE(v170) = 1; /*0x83878a*/
    if ( v169 ) /*0x83878f*/
    {
      --v169[7].Unk08; /*0x838791*/
      if ( !v103[7].Unk08 ) /*0x838799*/
        sub_772560(v103); /*0x83879e*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8387a3*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8387ae*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8387bd*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45418); /*0x8387ca*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45210); /*0x8387d8*/
  if ( !v0->RenderStateGroup ) /*0x8387dd*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8387e8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x8387f4*/
  if ( !v0->RenderStateGroup ) /*0x8387f9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838804*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x838810*/
  if ( !v0->RenderStateGroup ) /*0x838815*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838820*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x83882c*/
  if ( !v0->RenderStateGroup ) /*0x838831*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83883c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x838848*/
  if ( !v0->RenderStateGroup ) /*0x83884d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838858*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x838864*/
  if ( !v0->RenderStateGroup ) /*0x838869*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838874*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x838880*/
  if ( !v0->RenderStateGroup ) /*0x838885*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838890*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x83889c*/
  if ( !v0->RenderStateGroup ) /*0x8388a1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8388ac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8388b8*/
  v3 = v0 == (NiD3DPass *)unk_B45B50; /*0x8388bd*/
  unk_B440C8 = 0x20082; /*0x8388cd*/
  unk_B44758 = 0x108; /*0x8388d7*/
  unk_B43A38 = 0x80; /*0x8388dd*/
  unk_B44DE8 = 8; /*0x8388e7*/
  if ( !v3 ) /*0x8388ed*/
  {
    v3 = v0->RefCount-- == 1; /*0x8388ef*/
    if ( v3 ) /*0x8388f3*/
      NiD3DPass_ReleaseToPool(v0); /*0x8388f7*/
    v0 = (NiD3DPass *)unk_B45B50; /*0x8388fc*/
    v168 = unk_B45B50; /*0x838904*/
    if ( v168 ) /*0x838908*/
      ++v0->RefCount; /*0x83890a*/
  }
  if ( v0->StageCount < 4 ) /*0x838912*/
  {
    v104 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x83891d*/
    LOBYTE(v170) = 0x20; /*0x83892a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v104); /*0x83892f*/
    v105 = v169; /*0x838934*/
    LOBYTE(v170) = 1; /*0x83893a*/
    if ( v169 ) /*0x83893f*/
    {
      --v169[7].Unk08; /*0x838941*/
      if ( !v105[7].Unk08 ) /*0x83894a*/
        sub_772560(v105); /*0x83894f*/
    }
    v106 = a3; /*0x838954*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x83895f*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v106); /*0x83896e*/
    v107 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x838978*/
    LOBYTE(v170) = 0x21; /*0x838985*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v107); /*0x83898a*/
    v108 = v169; /*0x83898f*/
    LOBYTE(v170) = 1; /*0x838995*/
    if ( v169 ) /*0x83899a*/
    {
      --v169[7].Unk08; /*0x83899c*/
      if ( !v108[7].Unk08 ) /*0x8389a5*/
        sub_772560(v108); /*0x8389aa*/
    }
    v109 = a3; /*0x8389af*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8389ba*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v109); /*0x8389c9*/
    v110 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x8389d3*/
    LOBYTE(v170) = 0x22; /*0x8389e0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v110); /*0x8389e5*/
    v111 = v169; /*0x8389ea*/
    LOBYTE(v170) = 1; /*0x8389f0*/
    if ( v169 ) /*0x8389f5*/
    {
      --v169[7].Unk08; /*0x8389f7*/
      if ( !v111[7].Unk08 ) /*0x838a00*/
        sub_772560(v111); /*0x838a05*/
    }
    v112 = (NiD3DTextureStage *)a3; /*0x838a0a*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 3, 0); /*0x838a15*/
    NiD3DTextureStage_SetTexture(v112, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x838a26*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v112->Stage); /*0x838a32*/
    v113 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x838a3c*/
    LOBYTE(v170) = 0x23; /*0x838a49*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v113); /*0x838a4e*/
    v114 = v169; /*0x838a53*/
    LOBYTE(v170) = 1; /*0x838a59*/
    if ( v169 ) /*0x838a5e*/
    {
      --v169[7].Unk08; /*0x838a60*/
      if ( !v114[7].Unk08 ) /*0x838a69*/
        sub_772560(v114); /*0x838a6e*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x838a73*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x838a7e*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x838a8d*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B4541C); /*0x838a9b*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45214); /*0x838aa8*/
  if ( !v0->RenderStateGroup ) /*0x838aad*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838ab8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x838ac4*/
  if ( !v0->RenderStateGroup ) /*0x838ac9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838ad4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x838ae0*/
  if ( !v0->RenderStateGroup ) /*0x838ae5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838af0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x838afc*/
  if ( !v0->RenderStateGroup ) /*0x838b01*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838b0c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x838b18*/
  if ( !v0->RenderStateGroup ) /*0x838b1d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838b28*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x838b34*/
  if ( !v0->RenderStateGroup ) /*0x838b39*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838b44*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x838b50*/
  if ( !v0->RenderStateGroup ) /*0x838b55*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838b60*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x838b6c*/
  if ( !v0->RenderStateGroup ) /*0x838b71*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838b7c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x838b88*/
  v3 = v0 == (NiD3DPass *)unk_B45B68; /*0x838b8d*/
  unk_B440D0 = 0x20802; /*0x838b93*/
  unk_B44760 = 0x108; /*0x838b9d*/
  if ( !v3 ) /*0x838ba3*/
  {
    v3 = v0->RefCount-- == 1; /*0x838ba5*/
    if ( v3 ) /*0x838ba9*/
      NiD3DPass_ReleaseToPool(v0); /*0x838bad*/
    v0 = (NiD3DPass *)unk_B45B68; /*0x838bb2*/
    v168 = unk_B45B68; /*0x838bba*/
    if ( v168 ) /*0x838bbe*/
      ++v0->RefCount; /*0x838bc0*/
  }
  if ( v0->StageCount < 3 ) /*0x838bc8*/
  {
    v115 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x838bd3*/
    LOBYTE(v170) = 0x24; /*0x838be0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v115); /*0x838be5*/
    v116 = v169; /*0x838bea*/
    LOBYTE(v170) = 1; /*0x838bf0*/
    if ( v169 ) /*0x838bf5*/
    {
      --v169[7].Unk08; /*0x838bf7*/
      if ( !v116[7].Unk08 ) /*0x838c00*/
        sub_772560(v116); /*0x838c05*/
    }
    v117 = a3; /*0x838c0a*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x838c15*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v117); /*0x838c24*/
    v118 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x838c2e*/
    LOBYTE(v170) = 0x25; /*0x838c3b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v118); /*0x838c40*/
    v119 = v169; /*0x838c45*/
    LOBYTE(v170) = 1; /*0x838c4b*/
    if ( v169 ) /*0x838c50*/
    {
      --v169[7].Unk08; /*0x838c52*/
      if ( !v119[7].Unk08 ) /*0x838c5b*/
        sub_772560(v119); /*0x838c60*/
    }
    v120 = a3; /*0x838c65*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x838c70*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v120); /*0x838c7f*/
    v121 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x838c89*/
    LOBYTE(v170) = 0x26; /*0x838c96*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v121); /*0x838c9b*/
    v122 = v169; /*0x838ca0*/
    LOBYTE(v170) = 1; /*0x838ca6*/
    if ( v169 ) /*0x838cab*/
    {
      --v169[7].Unk08; /*0x838cad*/
      if ( !v122[7].Unk08 ) /*0x838cb6*/
        sub_772560(v122); /*0x838cbb*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x838cc0*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 3, 0); /*0x838ccb*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x838cdb*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x838ce7*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45420); /*0x838cf5*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45218); /*0x838d02*/
  if ( !v0->RenderStateGroup ) /*0x838d07*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838d12*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x838d1e*/
  if ( !v0->RenderStateGroup ) /*0x838d23*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838d2e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x838d3a*/
  if ( !v0->RenderStateGroup ) /*0x838d3f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838d4a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x838d56*/
  if ( !v0->RenderStateGroup ) /*0x838d5b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838d66*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x838d72*/
  if ( !v0->RenderStateGroup ) /*0x838d77*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838d82*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x838d8e*/
  if ( !v0->RenderStateGroup ) /*0x838d93*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838d9e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x838daa*/
  if ( !v0->RenderStateGroup ) /*0x838daf*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838dba*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x838dc6*/
  if ( !v0->RenderStateGroup ) /*0x838dcb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838dd6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x838de2*/
  if ( !v0->RenderStateGroup ) /*0x838de7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838df2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x838dfe*/
  if ( !v0->RenderStateGroup ) /*0x838e03*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x838e0e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x838e1a*/
  v3 = v0 == (NiD3DPass *)unk_B45B6C; /*0x838e1f*/
  unk_B440E8 = 0x3802; /*0x838e25*/
  unk_B44778 = 0xBC; /*0x838e2f*/
  unk_B44E08 = 0; /*0x838e39*/
  if ( !v3 ) /*0x838e43*/
  {
    v3 = v0->RefCount-- == 1; /*0x838e45*/
    if ( v3 ) /*0x838e49*/
      NiD3DPass_ReleaseToPool(v0); /*0x838e4d*/
    v0 = (NiD3DPass *)unk_B45B6C; /*0x838e52*/
    v168 = unk_B45B6C; /*0x838e5a*/
    if ( v168 ) /*0x838e5e*/
      ++v0->RefCount; /*0x838e60*/
  }
  if ( v0->StageCount < 4 ) /*0x838e68*/
  {
    v123 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x838e73*/
    LOBYTE(v170) = 0x27; /*0x838e80*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v123); /*0x838e85*/
    v124 = v169; /*0x838e8a*/
    LOBYTE(v170) = 1; /*0x838e90*/
    if ( v169 ) /*0x838e95*/
    {
      --v169[7].Unk08; /*0x838e97*/
      if ( !v124[7].Unk08 ) /*0x838ea0*/
        sub_772560(v124); /*0x838ea5*/
    }
    v125 = a3; /*0x838eaa*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x838eb5*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v125); /*0x838ec4*/
    v126 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x838ece*/
    LOBYTE(v170) = 0x28; /*0x838edb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v126); /*0x838ee0*/
    v127 = v169; /*0x838ee5*/
    LOBYTE(v170) = 1; /*0x838eeb*/
    if ( v169 ) /*0x838ef0*/
    {
      --v169[7].Unk08; /*0x838ef2*/
      if ( !v127[7].Unk08 ) /*0x838efb*/
        sub_772560(v127); /*0x838f00*/
    }
    v128 = a3; /*0x838f05*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x838f10*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v128); /*0x838f1f*/
    v129 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x838f29*/
    LOBYTE(v170) = 0x29; /*0x838f36*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v129); /*0x838f3b*/
    v130 = v169; /*0x838f40*/
    LOBYTE(v170) = 1; /*0x838f46*/
    if ( v169 ) /*0x838f4b*/
    {
      --v169[7].Unk08; /*0x838f4d*/
      if ( !v130[7].Unk08 ) /*0x838f56*/
        sub_772560(v130); /*0x838f5b*/
    }
    v131 = a3; /*0x838f60*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x838f6b*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v131); /*0x838f7a*/
    v132 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x838f84*/
    LOBYTE(v170) = 0x2A; /*0x838f91*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v132); /*0x838f96*/
    v133 = v169; /*0x838f9b*/
    LOBYTE(v170) = 1; /*0x838fa1*/
    if ( v169 ) /*0x838fa6*/
    {
      --v169[7].Unk08; /*0x838fa8*/
      if ( !v133[7].Unk08 ) /*0x838fb1*/
        sub_772560(v133); /*0x838fb6*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x838fbb*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x838fc6*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x838fd5*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45424); /*0x838fe2*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B4521C); /*0x838ff0*/
  if ( !v0->RenderStateGroup ) /*0x838ff5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839000*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x83900c*/
  if ( !v0->RenderStateGroup ) /*0x839011*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83901c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x839028*/
  if ( !v0->RenderStateGroup ) /*0x83902d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839038*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x839044*/
  if ( !v0->RenderStateGroup ) /*0x839049*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839054*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x839060*/
  if ( !v0->RenderStateGroup ) /*0x839065*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839070*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x83907c*/
  if ( !v0->RenderStateGroup ) /*0x839081*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83908c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x839098*/
  if ( !v0->RenderStateGroup ) /*0x83909d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8390a8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8390b4*/
  if ( !v0->RenderStateGroup ) /*0x8390b9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8390c4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8390d0*/
  if ( !v0->RenderStateGroup ) /*0x8390d5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8390e0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x8390ec*/
  if ( !v0->RenderStateGroup ) /*0x8390f1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8390fc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x839108*/
  v3 = v0 == (NiD3DPass *)unk_B45B70; /*0x83910d*/
  unk_B440EC = 0x20082; /*0x839118*/
  unk_B4477C = 0x138; /*0x839122*/
  unk_B43A5C = 0x80; /*0x839128*/
  unk_B44E0C = 8; /*0x839132*/
  if ( !v3 ) /*0x839138*/
  {
    v3 = v0->RefCount-- == 1; /*0x83913a*/
    if ( v3 ) /*0x83913e*/
      NiD3DPass_ReleaseToPool(v0); /*0x839142*/
    v0 = (NiD3DPass *)unk_B45B70; /*0x839147*/
    v168 = unk_B45B70; /*0x83914f*/
    if ( v168 ) /*0x839153*/
      ++v0->RefCount; /*0x839155*/
  }
  if ( v0->StageCount < 4 ) /*0x839161*/
  {
    v134 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x83916c*/
    LOBYTE(v170) = 0x2B; /*0x839179*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v134); /*0x83917e*/
    v135 = v169; /*0x839183*/
    LOBYTE(v170) = 1; /*0x839189*/
    if ( v169 ) /*0x83918e*/
    {
      --v169[7].Unk08; /*0x839190*/
      if ( !v135[7].Unk08 ) /*0x839199*/
        sub_772560(v135); /*0x83919e*/
    }
    v136 = a3; /*0x8391a3*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8391ae*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v136); /*0x8391bd*/
    v137 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x8391c7*/
    LOBYTE(v170) = 0x2C; /*0x8391d4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v137); /*0x8391d9*/
    v138 = v169; /*0x8391de*/
    LOBYTE(v170) = 1; /*0x8391e4*/
    if ( v169 ) /*0x8391e9*/
    {
      --v169[7].Unk08; /*0x8391eb*/
      if ( !v138[7].Unk08 ) /*0x8391f4*/
        sub_772560(v138); /*0x8391f9*/
    }
    v139 = a3; /*0x8391fe*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x839209*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v139); /*0x839218*/
    v140 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x839222*/
    LOBYTE(v170) = 0x2D; /*0x83922f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v140); /*0x839234*/
    v141 = v169; /*0x839239*/
    LOBYTE(v170) = 1; /*0x83923f*/
    if ( v169 ) /*0x839244*/
    {
      --v169[7].Unk08; /*0x839246*/
      if ( !v141[7].Unk08 ) /*0x83924f*/
        sub_772560(v141); /*0x839254*/
    }
    v142 = (NiD3DTextureStage *)a3; /*0x839259*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 3, 0); /*0x839264*/
    NiD3DTextureStage_SetTexture(v142, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x839275*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v142->Stage); /*0x839281*/
    v143 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x83928b*/
    LOBYTE(v170) = 0x2E; /*0x839298*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v143); /*0x83929d*/
    v144 = v169; /*0x8392a2*/
    LOBYTE(v170) = 1; /*0x8392a8*/
    if ( v169 ) /*0x8392ad*/
    {
      --v169[7].Unk08; /*0x8392af*/
      if ( !v144[7].Unk08 ) /*0x8392b8*/
        sub_772560(v144); /*0x8392bd*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8392c2*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8392cd*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8392dc*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45428); /*0x8392ea*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45220); /*0x8392f7*/
  if ( !v0->RenderStateGroup ) /*0x8392fc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839307*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x839313*/
  if ( !v0->RenderStateGroup ) /*0x839318*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839323*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x83932f*/
  if ( !v0->RenderStateGroup ) /*0x839334*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83933f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x83934b*/
  if ( !v0->RenderStateGroup ) /*0x839350*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83935b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x839367*/
  if ( !v0->RenderStateGroup ) /*0x83936c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839377*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x839383*/
  if ( !v0->RenderStateGroup ) /*0x839388*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839393*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x83939f*/
  if ( !v0->RenderStateGroup ) /*0x8393a4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8393af*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8393bb*/
  if ( !v0->RenderStateGroup ) /*0x8393c0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8393cb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8393d6*/
  if ( !v0->RenderStateGroup ) /*0x8393db*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8393e6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x8393f2*/
  if ( !v0->RenderStateGroup ) /*0x8393f7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839402*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x83940e*/
  v3 = v0 == (NiD3DPass *)unk_B45B4C; /*0x839413*/
  unk_B440F0 = 0x20802; /*0x839419*/
  unk_B44780 = 0x138; /*0x839423*/
  if ( !v3 ) /*0x839429*/
  {
    v3 = v0->RefCount-- == 1; /*0x83942b*/
    if ( v3 ) /*0x83942f*/
      NiD3DPass_ReleaseToPool(v0); /*0x839433*/
    v0 = (NiD3DPass *)unk_B45B4C; /*0x839438*/
    v168 = unk_B45B4C; /*0x839440*/
    if ( v168 ) /*0x839444*/
      ++v0->RefCount; /*0x839446*/
  }
  if ( v0->StageCount < 4 ) /*0x83944d*/
  {
    v145 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x839458*/
    LOBYTE(v170) = 0x2F; /*0x839465*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v145); /*0x83946a*/
    v146 = v169; /*0x83946f*/
    LOBYTE(v170) = 1; /*0x839475*/
    if ( v169 ) /*0x83947a*/
    {
      --v169[7].Unk08; /*0x83947c*/
      if ( !v146[7].Unk08 ) /*0x839485*/
        sub_772560(v146); /*0x83948a*/
    }
    v147 = a3; /*0x83948f*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x83949a*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v147); /*0x8394a9*/
    v148 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x8394b3*/
    LOBYTE(v170) = 0x30; /*0x8394c0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v148); /*0x8394c5*/
    v149 = v169; /*0x8394ca*/
    LOBYTE(v170) = 1; /*0x8394d0*/
    if ( v169 ) /*0x8394d5*/
    {
      --v169[7].Unk08; /*0x8394d7*/
      if ( !v149[7].Unk08 ) /*0x8394e0*/
        sub_772560(v149); /*0x8394e5*/
    }
    v150 = a3; /*0x8394ea*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8394f5*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v150); /*0x839504*/
    v151 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x83950e*/
    LOBYTE(v170) = 0x31; /*0x83951b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v151); /*0x839520*/
    v152 = v169; /*0x839525*/
    LOBYTE(v170) = 1; /*0x83952b*/
    if ( v169 ) /*0x839530*/
    {
      --v169[7].Unk08; /*0x839532*/
      if ( !v152[7].Unk08 ) /*0x83953b*/
        sub_772560(v152); /*0x839540*/
    }
    v153 = a3; /*0x839545*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x839550*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v153); /*0x83955f*/
    v154 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x839569*/
    LOBYTE(v170) = 0x32; /*0x839576*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v154); /*0x83957b*/
    v155 = v169; /*0x839580*/
    LOBYTE(v170) = 1; /*0x839586*/
    if ( v169 ) /*0x83958b*/
    {
      --v169[7].Unk08; /*0x83958d*/
      if ( !v155[7].Unk08 ) /*0x839596*/
        sub_772560(v155); /*0x83959b*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8395a0*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 3, 0); /*0x8395ab*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8395ba*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B4542C); /*0x8395c7*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45224); /*0x8395d5*/
  if ( !v0->RenderStateGroup ) /*0x8395da*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8395e5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x8395f1*/
  if ( !v0->RenderStateGroup ) /*0x8395f6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839601*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x83960d*/
  if ( !v0->RenderStateGroup ) /*0x839612*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83961d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x839629*/
  if ( !v0->RenderStateGroup ) /*0x83962e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839639*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x839645*/
  if ( !v0->RenderStateGroup ) /*0x83964a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839655*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x839661*/
  if ( !v0->RenderStateGroup ) /*0x839666*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839671*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x83967d*/
  if ( !v0->RenderStateGroup ) /*0x839682*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83968d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x839699*/
  if ( !v0->RenderStateGroup ) /*0x83969e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8396a9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8396b4*/
  if ( !v0->RenderStateGroup ) /*0x8396b9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8396c4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x8396d0*/
  if ( !v0->RenderStateGroup ) /*0x8396d5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8396e0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8396ec*/
  v3 = v0 == (NiD3DPass *)unk_B45B74; /*0x8396f1*/
  unk_B440CC = 0x200F2; /*0x839701*/
  unk_B4475C = 0x138; /*0x839707*/
  unk_B43A3C = 0xE0; /*0x839711*/
  unk_B44DEC = 8; /*0x839717*/
  if ( !v3 ) /*0x839721*/
  {
    v3 = v0->RefCount-- == 1; /*0x839723*/
    if ( v3 ) /*0x839727*/
      NiD3DPass_ReleaseToPool(v0); /*0x83972b*/
    v0 = (NiD3DPass *)unk_B45B74; /*0x839730*/
    v168 = unk_B45B74; /*0x839738*/
    if ( v168 ) /*0x83973c*/
      ++v0->RefCount; /*0x83973e*/
  }
  if ( v0->StageCount < 4 ) /*0x839746*/
  {
    v156 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x839751*/
    LOBYTE(v170) = 0x33; /*0x83975e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v156); /*0x839763*/
    v157 = v169; /*0x839768*/
    LOBYTE(v170) = 1; /*0x83976e*/
    if ( v169 ) /*0x839773*/
    {
      --v169[7].Unk08; /*0x839775*/
      if ( !v157[7].Unk08 ) /*0x83977e*/
        sub_772560(v157); /*0x839783*/
    }
    v158 = a3; /*0x839788*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x839793*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v158); /*0x8397a2*/
    v159 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x8397ac*/
    LOBYTE(v170) = 0x34; /*0x8397b9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v159); /*0x8397be*/
    v160 = v169; /*0x8397c3*/
    LOBYTE(v170) = 1; /*0x8397c9*/
    if ( v169 ) /*0x8397ce*/
    {
      --v169[7].Unk08; /*0x8397d0*/
      if ( !v160[7].Unk08 ) /*0x8397d9*/
        sub_772560(v160); /*0x8397de*/
    }
    v161 = a3; /*0x8397e3*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8397ee*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v161); /*0x8397fd*/
    v162 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x839807*/
    LOBYTE(v170) = 0x35; /*0x839814*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v162); /*0x839819*/
    v163 = v169; /*0x83981e*/
    LOBYTE(v170) = 1; /*0x839824*/
    if ( v169 ) /*0x839829*/
    {
      --v169[7].Unk08; /*0x83982b*/
      if ( !v163[7].Unk08 ) /*0x839834*/
        sub_772560(v163); /*0x839839*/
    }
    v164 = a3; /*0x83983e*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x839849*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, v164); /*0x839858*/
    v165 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v169); /*0x839862*/
    LOBYTE(v170) = 0x36; /*0x83986f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v165); /*0x839874*/
    v166 = v169; /*0x839879*/
    LOBYTE(v170) = 1; /*0x83987f*/
    if ( v169 ) /*0x839884*/
    {
      --v169[7].Unk08; /*0x839886*/
      if ( !v166[7].Unk08 ) /*0x83988f*/
        sub_772560(v166); /*0x839894*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x839899*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 3, 0); /*0x8398a4*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8398b3*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45430); /*0x8398c1*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45228); /*0x8398cf*/
  if ( !v0->RenderStateGroup ) /*0x8398d4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8398df*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x8398eb*/
  if ( !v0->RenderStateGroup ) /*0x8398f0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8398fb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0); /*0x839907*/
  if ( !v0->RenderStateGroup ) /*0x83990c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839917*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x839923*/
  if ( !v0->RenderStateGroup ) /*0x839928*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839933*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x83993f*/
  if ( !v0->RenderStateGroup ) /*0x839944*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83994f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x19, 5, 0); /*0x83995b*/
  if ( !v0->RenderStateGroup ) /*0x839960*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83996b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x18, 0, 0); /*0x839977*/
  if ( !v0->RenderStateGroup ) /*0x83997c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x839987*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x839993*/
  if ( !v0->RenderStateGroup ) /*0x839998*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8399a3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8399af*/
  if ( !v0->RenderStateGroup ) /*0x8399b4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8399bf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x8399cb*/
  if ( !v0->RenderStateGroup ) /*0x8399d0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8399db*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8399e7*/
  unk_B440F4 = 0x200F2; /*0x8399ec*/
  unk_B44784 = 0x138; /*0x8399f7*/
  unk_B43A64 = 0xE0; /*0x839a01*/
  unk_B44E14 = 8; /*0x839a07*/
  LOBYTE(v170) = 0; /*0x839a11*/
  if ( v1 ) /*0x839a16*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x839a18*/
    if ( v3 ) /*0x839a1b*/
      sub_772560(v1); /*0x839a1f*/
  }
  v3 = v0->RefCount-- == 1; /*0x839a24*/
  v170 = 0xFFFFFFFF; /*0x839a27*/
  if ( v3 ) /*0x839a2b*/
    NiD3DPass_ReleaseToPool(v0); /*0x839a2f*/
}
