void __thiscall sub_883260(volatile LONG **this)
{
  NiD3DPass *v1; // esi
  NiD3DTextureStage *v2; // edi
  int v3; // eax
  bool v4; // zf
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage *v6; // eax
  volatile LONG *v7; // ebx
  NiD3DVertexShader *VertexShader; // ebp
  volatile LONG *v9; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  NiD3DTextureStage **v14; // ebp
  NiD3DTextureStage *v15; // eax
  NiD3DTextureStage **v16; // ebp
  NiD3DTextureStage *v17; // eax
  volatile LONG *v18; // ebx
  NiD3DVertexShader *v19; // ebp
  volatile LONG *v20; // ebx
  NiD3DPixelShader *v21; // ebp
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  NiD3DTextureStage **v25; // ebp
  NiD3DTextureStage *v26; // eax
  NiD3DTextureStage **v27; // ebp
  NiD3DTextureStage *v28; // eax
  volatile LONG *v29; // ebx
  NiD3DVertexShader *v30; // ebp
  volatile LONG *v31; // ebx
  NiD3DPixelShader *v32; // ebp
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  NiD3DTextureStage **v36; // ebp
  NiD3DTextureStage *v37; // eax
  NiD3DTextureStage **v38; // ebp
  NiD3DTextureStage *v39; // eax
  NiD3DTextureStage **v40; // ebp
  NiD3DTextureStage *v41; // eax
  NiD3DTextureStage **v42; // ebp
  NiD3DTextureStage *v43; // eax
  volatile LONG *v44; // ebx
  NiD3DVertexShader *v45; // ebp
  volatile LONG *v46; // ebx
  NiD3DPixelShader *v47; // ebp
  int v48; // ecx
  int v49; // edx
  int v50; // eax
  NiD3DTextureStage **v51; // ebx
  NiD3DTextureStage *v52; // eax
  volatile LONG *v53; // ebx
  NiD3DVertexShader *v54; // ebp
  volatile LONG *v55; // ebx
  NiD3DPixelShader *v56; // ebp
  int v57; // ecx
  int v58; // edx
  int v59; // eax
  NiD3DTextureStage **v60; // ebp
  NiD3DTextureStage *v61; // eax
  NiD3DTextureStage **v62; // ebp
  NiD3DTextureStage *v63; // eax
  NiD3DTextureStage **v64; // ebp
  NiD3DTextureStage *v65; // eax
  NiD3DTextureStage **v66; // ebp
  NiD3DTextureStage *v67; // eax
  volatile LONG *v68; // ebx
  NiD3DVertexShader *v69; // ebp
  volatile LONG *v70; // ebx
  NiD3DPixelShader *v71; // ebp
  int v72; // ecx
  int v73; // edx
  int v74; // eax
  NiD3DTextureStage **v75; // ebx
  NiD3DTextureStage *v76; // eax
  volatile LONG *v77; // ebx
  NiD3DVertexShader *v78; // ebp
  volatile LONG *v79; // ebx
  NiD3DPixelShader *v80; // ebp
  int v81; // ecx
  int v82; // edx
  int v83; // eax
  NiD3DTextureStage **v84; // ebp
  NiD3DTextureStage *v85; // eax
  NiD3DTextureStage **v86; // ebp
  NiD3DTextureStage *v87; // eax
  NiD3DTextureStage **v88; // ebp
  NiD3DTextureStage *v89; // eax
  NiD3DTextureStage **v90; // ebp
  NiD3DTextureStage *v91; // eax
  volatile LONG *v92; // ebx
  NiD3DVertexShader *v93; // ebp
  volatile LONG *v94; // ebx
  NiD3DPixelShader *v95; // ebp
  int v96; // ecx
  int v97; // edx
  int v98; // eax
  NiD3DTextureStage **v99; // ebx
  NiD3DTextureStage *v100; // eax
  volatile LONG *v101; // ebx
  NiD3DVertexShader *v102; // ebp
  volatile LONG *v103; // ebx
  NiD3DPixelShader *v104; // ebp
  int v105; // ecx
  int v106; // edx
  int v107; // eax
  NiD3DTextureStage **v108; // ebx
  NiD3DTextureStage *v109; // eax
  volatile LONG *v110; // ebx
  NiD3DVertexShader *v111; // ebp
  volatile LONG *v112; // ebx
  NiD3DPixelShader *v113; // ebp
  int v114; // ecx
  int v115; // edx
  int v116; // eax
  NiD3DTextureStage *v118; // [esp+54h] [ebp-10h] BYREF
  unsigned int v119; // [esp+60h] [ebp-4h]

  v1 = 0; /*0x88328b*/
  v2 = 0; /*0x883291*/
  v119 = 0; /*0x883293*/
  v3 = unk_B47790[0]; /*0x88329b*/
  v4 = unk_B47790[0] == 0; /*0x8832a0*/
  LOBYTE(v119) = 1; /*0x8832a7*/
  if ( !v4 ) /*0x8832ab*/
  {
    v1 = (NiD3DPass *)v3; /*0x8832ad*/
    if ( v3 ) /*0x8832b5*/
      ++*(_DWORD *)(v3 + 0x60); /*0x8832b7*/
  }
  if ( !v1->StageCount ) /*0x8832ba*/
  {
    v5 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v118); /*0x8832ce*/
    if ( v5 ) /*0x8832d2*/
    {
      v2 = v5; /*0x8832d4*/
      ++v5[7].Unk08; /*0x8832d6*/
    }
    v6 = v118; /*0x8832dd*/
    LOBYTE(v119) = 1; /*0x8832e3*/
    if ( v118 ) /*0x8832e8*/
    {
      --v118[7].Unk08; /*0x8832ea*/
      if ( !v6[7].Unk08 ) /*0x8832f3*/
        sub_772560(v6); /*0x8832f8*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x883303*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x883312*/
  }
  v7 = *(this + 0x27); /*0x88331b*/
  VertexShader = v1->VertexShader; /*0x883321*/
  if ( VertexShader != (NiD3DVertexShader *)v7 ) /*0x883326*/
  {
    if ( VertexShader ) /*0x88332a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x883330*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x883347*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v7; /*0x88334b*/
    if ( v7 ) /*0x88334e*/
      InterlockedIncrement(v7 + 1); /*0x883354*/
  }
  v9 = *(this + 0x43); /*0x88335e*/
  PixelShader = v1->PixelShader; /*0x883364*/
  if ( PixelShader != (NiD3DPixelShader *)v9 ) /*0x883369*/
  {
    if ( PixelShader ) /*0x88336d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x883373*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x88338a*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v9; /*0x88338e*/
    if ( v9 ) /*0x883391*/
      InterlockedIncrement(v9 + 1); /*0x883397*/
  }
  if ( !v1->RenderStateGroup ) /*0x88339d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8833a8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x8833b4*/
  if ( !v1->RenderStateGroup ) /*0x8833b9*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8833c4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x8833d0*/
  if ( !v1->RenderStateGroup ) /*0x8833d5*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8833e0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x8833ec*/
  if ( !v1->RenderStateGroup ) /*0x8833f1*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8833fc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x883408*/
  if ( !v1->RenderStateGroup ) /*0x88340d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883418*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x883424*/
  if ( !v1->RenderStateGroup ) /*0x883429*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883434*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x883440*/
  v11 = unk_B441F0; /*0x88344a*/
  v12 = unk_B434D0; /*0x883450*/
  unk_B43B80 = unk_B43B60; /*0x883456*/
  v13 = unk_B44880; /*0x88345b*/
  v4 = v1 == (NiD3DPass *)unk_B47794; /*0x883463*/
  unk_B44210 = v11; /*0x883469*/
  unk_B434F0 = v12; /*0x88346f*/
  unk_B448A0 = v13; /*0x883475*/
  if ( !v4 ) /*0x88347a*/
  {
    v4 = v1->RefCount-- == 1; /*0x88347c*/
    if ( v4 ) /*0x88347f*/
      NiD3DPass_ReleaseToPool(v1); /*0x883483*/
    v1 = (NiD3DPass *)unk_B47794; /*0x883488*/
    if ( unk_B47794 ) /*0x883490*/
      ++v1->RefCount; /*0x883496*/
  }
  if ( v1->StageCount < 2 ) /*0x8834a0*/
  {
    v14 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x8834b3*/
    v4 = v2 == *v14; /*0x8834b5*/
    LOBYTE(v119) = 3; /*0x8834b8*/
    if ( !v4 ) /*0x8834bd*/
    {
      if ( v2 ) /*0x8834c1*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8834c3*/
        if ( v4 ) /*0x8834c6*/
          sub_772560(v2); /*0x8834ca*/
      }
      v2 = *v14; /*0x8834cf*/
      if ( *v14 ) /*0x8834d4*/
        ++v2[7].Unk08; /*0x8834da*/
    }
    v15 = v118; /*0x8834de*/
    LOBYTE(v119) = 1; /*0x8834e4*/
    if ( v118 ) /*0x8834e9*/
    {
      --v118[7].Unk08; /*0x8834eb*/
      if ( !v15[7].Unk08 ) /*0x8834f3*/
        sub_772560(v15); /*0x8834f8*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x883504*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x883513*/
    v16 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x883525*/
    v4 = v2 == *v16; /*0x883527*/
    LOBYTE(v119) = 4; /*0x88352a*/
    if ( !v4 ) /*0x88352f*/
    {
      if ( v2 ) /*0x883533*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x883535*/
        if ( v4 ) /*0x883538*/
          sub_772560(v2); /*0x88353c*/
      }
      v2 = *v16; /*0x883541*/
      if ( *v16 ) /*0x883546*/
        ++v2[7].Unk08; /*0x88354c*/
    }
    v17 = v118; /*0x883550*/
    LOBYTE(v119) = 1; /*0x883556*/
    if ( v118 ) /*0x88355b*/
    {
      --v118[7].Unk08; /*0x88355d*/
      if ( !v17[7].Unk08 ) /*0x883565*/
        sub_772560(v17); /*0x88356a*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x883576*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x883585*/
  }
  v18 = *(this + 0x28); /*0x88358e*/
  v19 = v1->VertexShader; /*0x883594*/
  if ( v19 != (NiD3DVertexShader *)v18 ) /*0x883599*/
  {
    if ( v19 ) /*0x88359d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v19 + 1) ) /*0x8835a3*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v19)(v19, 1); /*0x8835ba*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v18; /*0x8835be*/
    if ( v18 ) /*0x8835c1*/
      InterlockedIncrement(v18 + 1); /*0x8835c7*/
  }
  v20 = *(this + 0x44); /*0x8835d1*/
  v21 = v1->PixelShader; /*0x8835d7*/
  if ( v21 != (NiD3DPixelShader *)v20 ) /*0x8835dc*/
  {
    if ( v21 ) /*0x8835e0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v21 + 1) ) /*0x8835e6*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v21)(v21, 1); /*0x8835fd*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v20; /*0x883601*/
    if ( v20 ) /*0x883604*/
      InterlockedIncrement(v20 + 1); /*0x88360a*/
  }
  if ( !v1->RenderStateGroup ) /*0x883610*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88361b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x883627*/
  if ( !v1->RenderStateGroup ) /*0x88362c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883637*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x883643*/
  if ( !v1->RenderStateGroup ) /*0x883648*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883653*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x88365f*/
  if ( !v1->RenderStateGroup ) /*0x883664*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88366f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x88367b*/
  if ( !v1->RenderStateGroup ) /*0x883680*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88368b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x883697*/
  if ( !v1->RenderStateGroup ) /*0x88369c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8836a7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x8836b3*/
  v22 = unk_B44214; /*0x8836bd*/
  v23 = unk_B434F4; /*0x8836c3*/
  unk_B43BDC = unk_B43B84; /*0x8836c9*/
  v24 = unk_B448A4; /*0x8836ce*/
  v4 = v1 == (NiD3DPass *)unk_B47798; /*0x8836d6*/
  unk_B4426C = v22; /*0x8836dc*/
  unk_B4354C = v23; /*0x8836e2*/
  unk_B448FC = v24; /*0x8836e8*/
  if ( !v4 ) /*0x8836ed*/
  {
    v4 = v1->RefCount-- == 1; /*0x8836ef*/
    if ( v4 ) /*0x8836f2*/
      NiD3DPass_ReleaseToPool(v1); /*0x8836f6*/
    v1 = (NiD3DPass *)unk_B47798; /*0x8836fb*/
    if ( unk_B47798 ) /*0x883703*/
      ++v1->RefCount; /*0x883709*/
  }
  if ( v1->StageCount < 2 ) /*0x883713*/
  {
    v25 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x883726*/
    v4 = v2 == *v25; /*0x883728*/
    LOBYTE(v119) = 5; /*0x88372b*/
    if ( !v4 ) /*0x883730*/
    {
      if ( v2 ) /*0x883734*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x883736*/
        if ( v4 ) /*0x883739*/
          sub_772560(v2); /*0x88373d*/
      }
      v2 = *v25; /*0x883742*/
      if ( *v25 ) /*0x883747*/
        ++v2[7].Unk08; /*0x88374d*/
    }
    v26 = v118; /*0x883751*/
    LOBYTE(v119) = 1; /*0x883757*/
    if ( v118 ) /*0x88375c*/
    {
      --v118[7].Unk08; /*0x88375e*/
      if ( !v26[7].Unk08 ) /*0x883766*/
        sub_772560(v26); /*0x88376b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x883777*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x883786*/
    v27 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x883798*/
    v4 = v2 == *v27; /*0x88379a*/
    LOBYTE(v119) = 6; /*0x88379d*/
    if ( !v4 ) /*0x8837a2*/
    {
      if ( v2 ) /*0x8837a6*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8837a8*/
        if ( v4 ) /*0x8837ab*/
          sub_772560(v2); /*0x8837af*/
      }
      v2 = *v27; /*0x8837b4*/
      if ( *v27 ) /*0x8837b9*/
        ++v2[7].Unk08; /*0x8837bf*/
    }
    v28 = v118; /*0x8837c3*/
    LOBYTE(v119) = 1; /*0x8837c9*/
    if ( v118 ) /*0x8837ce*/
    {
      --v118[7].Unk08; /*0x8837d0*/
      if ( !v28[7].Unk08 ) /*0x8837d8*/
        sub_772560(v28); /*0x8837dd*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x8837e9*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x8837f8*/
  }
  v29 = *(this + 0x29); /*0x883801*/
  v30 = v1->VertexShader; /*0x883807*/
  if ( v30 != (NiD3DVertexShader *)v29 ) /*0x88380c*/
  {
    if ( v30 ) /*0x883810*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v30 + 1) ) /*0x883816*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v30)(v30, 1); /*0x88382d*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v29; /*0x883831*/
    if ( v29 ) /*0x883834*/
      InterlockedIncrement(v29 + 1); /*0x88383a*/
  }
  v31 = *(this + 0x45); /*0x883844*/
  v32 = v1->PixelShader; /*0x88384a*/
  if ( v32 != (NiD3DPixelShader *)v31 ) /*0x88384f*/
  {
    if ( v32 ) /*0x883853*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) ) /*0x883859*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v32)(v32, 1); /*0x883870*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v31; /*0x883874*/
    if ( v31 ) /*0x883877*/
      InterlockedIncrement(v31 + 1); /*0x88387d*/
  }
  if ( !v1->RenderStateGroup ) /*0x883883*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88388e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x88389a*/
  if ( !v1->RenderStateGroup ) /*0x88389f*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8838aa*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x8838b6*/
  if ( !v1->RenderStateGroup ) /*0x8838bb*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8838c6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x8838d2*/
  if ( !v1->RenderStateGroup ) /*0x8838d7*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8838e2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x8838ee*/
  if ( !v1->RenderStateGroup ) /*0x8838f3*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8838fe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x88390a*/
  if ( !v1->RenderStateGroup ) /*0x88390f*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88391a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x883926*/
  v33 = unk_B44280; /*0x883930*/
  v34 = unk_B43560; /*0x883936*/
  unk_B43BE0 = unk_B43BF0; /*0x88393c*/
  v35 = unk_B44910; /*0x883941*/
  v4 = v1 == (NiD3DPass *)unk_B4779C; /*0x883949*/
  unk_B44270 = v33; /*0x88394f*/
  unk_B43550 = v34; /*0x883955*/
  unk_B44900 = v35; /*0x88395b*/
  if ( !v4 ) /*0x883960*/
  {
    v4 = v1->RefCount-- == 1; /*0x883962*/
    if ( v4 ) /*0x883965*/
      NiD3DPass_ReleaseToPool(v1); /*0x883969*/
    v1 = (NiD3DPass *)unk_B4779C; /*0x88396e*/
    if ( unk_B4779C ) /*0x883976*/
      ++v1->RefCount; /*0x88397c*/
  }
  if ( v1->StageCount < 4 ) /*0x883986*/
  {
    v36 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x883999*/
    v4 = v2 == *v36; /*0x88399b*/
    LOBYTE(v119) = 7; /*0x88399e*/
    if ( !v4 ) /*0x8839a3*/
    {
      if ( v2 ) /*0x8839a7*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8839a9*/
        if ( v4 ) /*0x8839ac*/
          sub_772560(v2); /*0x8839b0*/
      }
      v2 = *v36; /*0x8839b5*/
      if ( *v36 ) /*0x8839ba*/
        ++v2[7].Unk08; /*0x8839c0*/
    }
    v37 = v118; /*0x8839c4*/
    LOBYTE(v119) = 1; /*0x8839ca*/
    if ( v118 ) /*0x8839cf*/
    {
      --v118[7].Unk08; /*0x8839d1*/
      if ( !v37[7].Unk08 ) /*0x8839d9*/
        sub_772560(v37); /*0x8839de*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x8839ea*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x8839f9*/
    v38 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x883a0b*/
    v4 = v2 == *v38; /*0x883a0d*/
    LOBYTE(v119) = 8; /*0x883a10*/
    if ( !v4 ) /*0x883a15*/
    {
      if ( v2 ) /*0x883a19*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x883a1b*/
        if ( v4 ) /*0x883a1e*/
          sub_772560(v2); /*0x883a22*/
      }
      v2 = *v38; /*0x883a27*/
      if ( *v38 ) /*0x883a2c*/
        ++v2[7].Unk08; /*0x883a32*/
    }
    v39 = v118; /*0x883a36*/
    LOBYTE(v119) = 1; /*0x883a3c*/
    if ( v118 ) /*0x883a41*/
    {
      --v118[7].Unk08; /*0x883a43*/
      if ( !v39[7].Unk08 ) /*0x883a4b*/
        sub_772560(v39); /*0x883a50*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 3, 2); /*0x883a5c*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x883a6d*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x883a79*/
    v40 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x883a8b*/
    v4 = v2 == *v40; /*0x883a8d*/
    LOBYTE(v119) = 9; /*0x883a90*/
    if ( !v4 ) /*0x883a95*/
    {
      if ( v2 ) /*0x883a99*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x883a9b*/
        if ( v4 ) /*0x883a9e*/
          sub_772560(v2); /*0x883aa2*/
      }
      v2 = *v40; /*0x883aa7*/
      if ( *v40 ) /*0x883aac*/
        ++v2[7].Unk08; /*0x883ab2*/
    }
    v41 = v118; /*0x883ab6*/
    LOBYTE(v119) = 1; /*0x883abc*/
    if ( v118 ) /*0x883ac1*/
    {
      --v118[7].Unk08; /*0x883ac3*/
      if ( !v41[7].Unk08 ) /*0x883acb*/
        sub_772560(v41); /*0x883ad0*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 3, 2); /*0x883adc*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)unk_B430D4); /*0x883aed*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x883af9*/
    v42 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x883b0b*/
    v4 = v2 == *v42; /*0x883b0d*/
    LOBYTE(v119) = 0xA; /*0x883b10*/
    if ( !v4 ) /*0x883b15*/
    {
      if ( v2 ) /*0x883b19*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x883b1b*/
        if ( v4 ) /*0x883b1e*/
          sub_772560(v2); /*0x883b22*/
      }
      v2 = *v42; /*0x883b27*/
      if ( *v42 ) /*0x883b2c*/
        ++v2[7].Unk08; /*0x883b32*/
    }
    v43 = v118; /*0x883b36*/
    LOBYTE(v119) = 1; /*0x883b3c*/
    if ( v118 ) /*0x883b41*/
    {
      --v118[7].Unk08; /*0x883b43*/
      if ( !v43[7].Unk08 ) /*0x883b4b*/
        sub_772560(v43); /*0x883b50*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x883b5c*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B430DC[4])); /*0x883b6d*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x883b79*/
  }
  v44 = *(this + 0x2A); /*0x883b82*/
  v45 = v1->VertexShader; /*0x883b88*/
  if ( v45 != (NiD3DVertexShader *)v44 ) /*0x883b8d*/
  {
    if ( v45 ) /*0x883b91*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v45 + 1) ) /*0x883b97*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v45)(v45, 1); /*0x883bae*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v44; /*0x883bb2*/
    if ( v44 ) /*0x883bb5*/
      InterlockedIncrement(v44 + 1); /*0x883bbb*/
  }
  v46 = *(this + 0x46); /*0x883bc5*/
  v47 = v1->PixelShader; /*0x883bcb*/
  if ( v47 != (NiD3DPixelShader *)v46 ) /*0x883bd0*/
  {
    if ( v47 ) /*0x883bd4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v47 + 1) ) /*0x883bda*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v47)(v47, 1); /*0x883bf1*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v46; /*0x883bf5*/
    if ( v46 ) /*0x883bf8*/
      InterlockedIncrement(v46 + 1); /*0x883bfe*/
  }
  if ( !v1->RenderStateGroup ) /*0x883c04*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883c0f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x883c1b*/
  if ( !v1->RenderStateGroup ) /*0x883c20*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883c2b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x883c37*/
  if ( !v1->RenderStateGroup ) /*0x883c3c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883c47*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x883c57*/
  if ( !v1->RenderStateGroup ) /*0x883c5c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883c67*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x883c73*/
  if ( !v1->RenderStateGroup ) /*0x883c78*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883c83*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x883c8e*/
  if ( !v1->RenderStateGroup ) /*0x883c93*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883c9e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x883caa*/
  v4 = v1 == (NiD3DPass *)unk_B477A0; /*0x883caf*/
  v48 = unk_B44274; /*0x883cba*/
  v49 = unk_B43554; /*0x883cc0*/
  unk_B43BEC = unk_B43BE4; /*0x883cc6*/
  v50 = unk_B44904; /*0x883ccb*/
  unk_B4427C = v48; /*0x883cd0*/
  unk_B4355C = v49; /*0x883cd6*/
  unk_B4490C = v50; /*0x883cdc*/
  if ( !v4 ) /*0x883ce1*/
  {
    v4 = v1->RefCount-- == 1; /*0x883ce3*/
    if ( v4 ) /*0x883ce7*/
      NiD3DPass_ReleaseToPool(v1); /*0x883ceb*/
    v1 = (NiD3DPass *)unk_B477A0; /*0x883cf0*/
    if ( unk_B477A0 ) /*0x883cf8*/
      ++v1->RefCount; /*0x883cfe*/
  }
  if ( !v1->StageCount ) /*0x883d01*/
  {
    v51 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x883d13*/
    v4 = v2 == *v51; /*0x883d15*/
    LOBYTE(v119) = 0xB; /*0x883d17*/
    if ( !v4 ) /*0x883d1c*/
    {
      if ( v2 ) /*0x883d20*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x883d22*/
        if ( v4 ) /*0x883d26*/
          sub_772560(v2); /*0x883d2a*/
      }
      v2 = *v51; /*0x883d2f*/
      if ( *v51 ) /*0x883d33*/
        ++v2[7].Unk08; /*0x883d39*/
    }
    v52 = v118; /*0x883d3c*/
    LOBYTE(v119) = 1; /*0x883d42*/
    if ( v118 ) /*0x883d47*/
    {
      --v118[7].Unk08; /*0x883d49*/
      if ( !v52[7].Unk08 ) /*0x883d52*/
        sub_772560(v52); /*0x883d57*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x883d62*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x883d71*/
  }
  v53 = *(this + 0x2B); /*0x883d7a*/
  v54 = v1->VertexShader; /*0x883d80*/
  if ( v54 != (NiD3DVertexShader *)v53 ) /*0x883d85*/
  {
    if ( v54 ) /*0x883d89*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v54 + 1) ) /*0x883d8f*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v54)(v54, 1); /*0x883da6*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v53; /*0x883daa*/
    if ( v53 ) /*0x883dad*/
      InterlockedIncrement(v53 + 1); /*0x883db3*/
  }
  v55 = *(this + 0x47); /*0x883dbd*/
  v56 = v1->PixelShader; /*0x883dc3*/
  if ( v56 != (NiD3DPixelShader *)v55 ) /*0x883dc8*/
  {
    if ( v56 ) /*0x883dcc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) ) /*0x883dd2*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v56)(v56, 1); /*0x883de9*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v55; /*0x883ded*/
    if ( v55 ) /*0x883df0*/
      InterlockedIncrement(v55 + 1); /*0x883df6*/
  }
  if ( !v1->RenderStateGroup ) /*0x883dfc*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883e07*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0); /*0x883e13*/
  if ( !v1->RenderStateGroup ) /*0x883e18*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883e23*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0); /*0x883e2f*/
  if ( !v1->RenderStateGroup ) /*0x883e34*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883e3f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0); /*0x883e4b*/
  if ( !v1->RenderStateGroup ) /*0x883e50*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883e5b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x883e67*/
  if ( !v1->RenderStateGroup ) /*0x883e6c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883e77*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x883e83*/
  if ( !v1->RenderStateGroup ) /*0x883e88*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883e93*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0); /*0x883e9f*/
  if ( !v1->RenderStateGroup ) /*0x883ea4*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883eaf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0); /*0x883ebb*/
  if ( !v1->RenderStateGroup ) /*0x883ec0*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x883ecb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x883ed7*/
  v57 = unk_B44538; /*0x883ee1*/
  v58 = unk_B43818; /*0x883ee7*/
  unk_B43EB8 = unk_B43EA8; /*0x883eed*/
  v59 = unk_B44BC8; /*0x883ef2*/
  v4 = v1 == (NiD3DPass *)unk_B477A4; /*0x883efa*/
  unk_B44548 = v57; /*0x883f00*/
  unk_B43828 = v58; /*0x883f06*/
  unk_B44BD8 = v59; /*0x883f0c*/
  if ( !v4 ) /*0x883f11*/
  {
    v4 = v1->RefCount-- == 1; /*0x883f13*/
    if ( v4 ) /*0x883f16*/
      NiD3DPass_ReleaseToPool(v1); /*0x883f1a*/
    v1 = (NiD3DPass *)unk_B477A4; /*0x883f1f*/
    if ( unk_B477A4 ) /*0x883f27*/
      ++v1->RefCount; /*0x883f2d*/
  }
  if ( v1->StageCount < 4 ) /*0x883f35*/
  {
    v60 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x883f48*/
    v4 = v2 == *v60; /*0x883f4a*/
    LOBYTE(v119) = 0xC; /*0x883f4d*/
    if ( !v4 ) /*0x883f52*/
    {
      if ( v2 ) /*0x883f56*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x883f58*/
        if ( v4 ) /*0x883f5b*/
          sub_772560(v2); /*0x883f5f*/
      }
      v2 = *v60; /*0x883f64*/
      if ( *v60 ) /*0x883f69*/
        ++v2[7].Unk08; /*0x883f6f*/
    }
    v61 = v118; /*0x883f73*/
    LOBYTE(v119) = 1; /*0x883f79*/
    if ( v118 ) /*0x883f7e*/
    {
      --v118[7].Unk08; /*0x883f80*/
      if ( !v61[7].Unk08 ) /*0x883f88*/
        sub_772560(v61); /*0x883f8d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x883f99*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x883fa8*/
    v62 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x883fba*/
    v4 = v2 == *v62; /*0x883fbc*/
    LOBYTE(v119) = 0xD; /*0x883fbf*/
    if ( !v4 ) /*0x883fc4*/
    {
      if ( v2 ) /*0x883fc8*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x883fca*/
        if ( v4 ) /*0x883fcd*/
          sub_772560(v2); /*0x883fd1*/
      }
      v2 = *v62; /*0x883fd6*/
      if ( *v62 ) /*0x883fdb*/
        ++v2[7].Unk08; /*0x883fe1*/
    }
    v63 = v118; /*0x883fe5*/
    LOBYTE(v119) = 1; /*0x883feb*/
    if ( v118 ) /*0x883ff0*/
    {
      --v118[7].Unk08; /*0x883ff2*/
      if ( !v63[7].Unk08 ) /*0x883ffa*/
        sub_772560(v63); /*0x883fff*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 3, 2); /*0x88400b*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x88401c*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x884028*/
    v64 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x88403a*/
    v4 = v2 == *v64; /*0x88403c*/
    LOBYTE(v119) = 0xE; /*0x88403f*/
    if ( !v4 ) /*0x884044*/
    {
      if ( v2 ) /*0x884048*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x88404a*/
        if ( v4 ) /*0x88404d*/
          sub_772560(v2); /*0x884051*/
      }
      v2 = *v64; /*0x884056*/
      if ( *v64 ) /*0x88405b*/
        ++v2[7].Unk08; /*0x884061*/
    }
    v65 = v118; /*0x884065*/
    LOBYTE(v119) = 1; /*0x88406b*/
    if ( v118 ) /*0x884070*/
    {
      --v118[7].Unk08; /*0x884072*/
      if ( !v65[7].Unk08 ) /*0x88407a*/
        sub_772560(v65); /*0x88407f*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 3, 2); /*0x88408b*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)unk_B430D4); /*0x88409c*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x8840a8*/
    v66 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x8840ba*/
    v4 = v2 == *v66; /*0x8840bc*/
    LOBYTE(v119) = 0xF; /*0x8840bf*/
    if ( !v4 ) /*0x8840c4*/
    {
      if ( v2 ) /*0x8840c8*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8840ca*/
        if ( v4 ) /*0x8840cd*/
          sub_772560(v2); /*0x8840d1*/
      }
      v2 = *v66; /*0x8840d6*/
      if ( *v66 ) /*0x8840db*/
        ++v2[7].Unk08; /*0x8840e1*/
    }
    v67 = v118; /*0x8840e5*/
    LOBYTE(v119) = 1; /*0x8840eb*/
    if ( v118 ) /*0x8840f0*/
    {
      --v118[7].Unk08; /*0x8840f2*/
      if ( !v67[7].Unk08 ) /*0x8840fa*/
        sub_772560(v67); /*0x8840ff*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x88410b*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B430DC[4])); /*0x88411c*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x884128*/
  }
  v68 = *(this + 0x2C); /*0x884131*/
  v69 = v1->VertexShader; /*0x884137*/
  if ( v69 != (NiD3DVertexShader *)v68 ) /*0x88413c*/
  {
    if ( v69 ) /*0x884140*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v69 + 1) ) /*0x884146*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v69)(v69, 1); /*0x88415d*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v68; /*0x884161*/
    if ( v68 ) /*0x884164*/
      InterlockedIncrement(v68 + 1); /*0x88416a*/
  }
  v70 = *(this + 0x48); /*0x884174*/
  v71 = v1->PixelShader; /*0x88417a*/
  if ( v71 != (NiD3DPixelShader *)v70 ) /*0x88417f*/
  {
    if ( v71 ) /*0x884183*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v71 + 1) ) /*0x884189*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v71)(v71, 1); /*0x8841a0*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v70; /*0x8841a4*/
    if ( v70 ) /*0x8841a7*/
      InterlockedIncrement(v70 + 1); /*0x8841ad*/
  }
  if ( !v1->RenderStateGroup ) /*0x8841b3*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8841be*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0); /*0x8841ce*/
  if ( !v1->RenderStateGroup ) /*0x8841d3*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8841de*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0); /*0x8841ea*/
  if ( !v1->RenderStateGroup ) /*0x8841ef*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8841fa*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0); /*0x884206*/
  if ( !v1->RenderStateGroup ) /*0x88420b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884216*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x884222*/
  if ( !v1->RenderStateGroup ) /*0x884227*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884232*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x88423d*/
  if ( !v1->RenderStateGroup ) /*0x884242*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88424d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0); /*0x884259*/
  if ( !v1->RenderStateGroup ) /*0x88425e*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884269*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0); /*0x884275*/
  if ( !v1->RenderStateGroup ) /*0x88427a*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884285*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x884291*/
  v4 = v1 == (NiD3DPass *)unk_B477AC; /*0x884296*/
  v72 = unk_B4453C; /*0x8842a1*/
  v73 = unk_B4381C; /*0x8842a7*/
  unk_B43EBC = unk_B43EAC; /*0x8842ad*/
  v74 = unk_B44BCC; /*0x8842b2*/
  unk_B4454C = v72; /*0x8842b7*/
  unk_B4382C = v73; /*0x8842bd*/
  unk_B44BDC = v74; /*0x8842c3*/
  if ( !v4 ) /*0x8842c8*/
  {
    v4 = v1->RefCount-- == 1; /*0x8842ca*/
    if ( v4 ) /*0x8842ce*/
      NiD3DPass_ReleaseToPool(v1); /*0x8842d2*/
    v1 = (NiD3DPass *)unk_B477AC; /*0x8842d7*/
    if ( unk_B477AC ) /*0x8842df*/
      ++v1->RefCount; /*0x8842e5*/
  }
  if ( !v1->StageCount ) /*0x8842e8*/
  {
    v75 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x8842fa*/
    v4 = v2 == *v75; /*0x8842fc*/
    LOBYTE(v119) = 0x10; /*0x8842fe*/
    if ( !v4 ) /*0x884303*/
    {
      if ( v2 ) /*0x884307*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x884309*/
        if ( v4 ) /*0x88430d*/
          sub_772560(v2); /*0x884311*/
      }
      v2 = *v75; /*0x884316*/
      if ( *v75 ) /*0x88431a*/
        ++v2[7].Unk08; /*0x884320*/
    }
    v76 = v118; /*0x884323*/
    LOBYTE(v119) = 1; /*0x884329*/
    if ( v118 ) /*0x88432e*/
    {
      --v118[7].Unk08; /*0x884330*/
      if ( !v76[7].Unk08 ) /*0x884339*/
        sub_772560(v76); /*0x88433e*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x884349*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x884358*/
  }
  v77 = *(this + 0x2E); /*0x884361*/
  v78 = v1->VertexShader; /*0x884367*/
  if ( v78 != (NiD3DVertexShader *)v77 ) /*0x88436c*/
  {
    if ( v78 ) /*0x884370*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v78 + 1) ) /*0x884376*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v78)(v78, 1); /*0x88438d*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v77; /*0x884391*/
    if ( v77 ) /*0x884394*/
      InterlockedIncrement(v77 + 1); /*0x88439a*/
  }
  v79 = *(this + 0x4A); /*0x8843a4*/
  v80 = v1->PixelShader; /*0x8843aa*/
  if ( v80 != (NiD3DPixelShader *)v79 ) /*0x8843af*/
  {
    if ( v80 ) /*0x8843b3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v80 + 1) ) /*0x8843b9*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v80)(v80, 1); /*0x8843d0*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v79; /*0x8843d4*/
    if ( v79 ) /*0x8843d7*/
      InterlockedIncrement(v79 + 1); /*0x8843dd*/
  }
  if ( !v1->RenderStateGroup ) /*0x8843e3*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8843ee*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0); /*0x8843fa*/
  if ( !v1->RenderStateGroup ) /*0x8843ff*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88440a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0); /*0x884416*/
  if ( !v1->RenderStateGroup ) /*0x88441b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884426*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0); /*0x884432*/
  if ( !v1->RenderStateGroup ) /*0x884437*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884442*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x88444e*/
  if ( !v1->RenderStateGroup ) /*0x884453*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88445e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x88446a*/
  if ( !v1->RenderStateGroup ) /*0x88446f*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88447a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0); /*0x884486*/
  if ( !v1->RenderStateGroup ) /*0x88448b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884496*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0); /*0x8844a2*/
  if ( !v1->RenderStateGroup ) /*0x8844a7*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8844b2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x8844be*/
  v81 = unk_B445EC; /*0x8844c8*/
  v82 = unk_B438CC; /*0x8844ce*/
  unk_B43F6C = unk_B43F5C; /*0x8844d4*/
  v83 = unk_B44C7C; /*0x8844d9*/
  v4 = v1 == (NiD3DPass *)unk_B477B0; /*0x8844e1*/
  unk_B445FC = v81; /*0x8844e7*/
  unk_B438DC = v82; /*0x8844ed*/
  unk_B44C8C = v83; /*0x8844f3*/
  if ( !v4 ) /*0x8844f8*/
  {
    v4 = v1->RefCount-- == 1; /*0x8844fa*/
    if ( v4 ) /*0x8844fd*/
      NiD3DPass_ReleaseToPool(v1); /*0x884501*/
    v1 = (NiD3DPass *)unk_B477B0; /*0x884506*/
    if ( unk_B477B0 ) /*0x88450e*/
      ++v1->RefCount; /*0x884514*/
  }
  if ( v1->StageCount < 4 ) /*0x88451c*/
  {
    v84 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x88452f*/
    v4 = v2 == *v84; /*0x884531*/
    LOBYTE(v119) = 0x11; /*0x884534*/
    if ( !v4 ) /*0x884539*/
    {
      if ( v2 ) /*0x88453d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x88453f*/
        if ( v4 ) /*0x884542*/
          sub_772560(v2); /*0x884546*/
      }
      v2 = *v84; /*0x88454b*/
      if ( *v84 ) /*0x884550*/
        ++v2[7].Unk08; /*0x884556*/
    }
    v85 = v118; /*0x88455a*/
    LOBYTE(v119) = 1; /*0x884560*/
    if ( v118 ) /*0x884565*/
    {
      --v118[7].Unk08; /*0x884567*/
      if ( !v85[7].Unk08 ) /*0x88456f*/
        sub_772560(v85); /*0x884574*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x884580*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x88458f*/
    v86 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x8845a1*/
    v4 = v2 == *v86; /*0x8845a3*/
    LOBYTE(v119) = 0x12; /*0x8845a6*/
    if ( !v4 ) /*0x8845ab*/
    {
      if ( v2 ) /*0x8845af*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8845b1*/
        if ( v4 ) /*0x8845b4*/
          sub_772560(v2); /*0x8845b8*/
      }
      v2 = *v86; /*0x8845bd*/
      if ( *v86 ) /*0x8845c2*/
        ++v2[7].Unk08; /*0x8845c8*/
    }
    v87 = v118; /*0x8845cc*/
    LOBYTE(v119) = 1; /*0x8845d2*/
    if ( v118 ) /*0x8845d7*/
    {
      --v118[7].Unk08; /*0x8845d9*/
      if ( !v87[7].Unk08 ) /*0x8845e1*/
        sub_772560(v87); /*0x8845e6*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 3, 2); /*0x8845f2*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x884603*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x88460f*/
    v88 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x884621*/
    v4 = v2 == *v88; /*0x884623*/
    LOBYTE(v119) = 0x13; /*0x884626*/
    if ( !v4 ) /*0x88462b*/
    {
      if ( v2 ) /*0x88462f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x884631*/
        if ( v4 ) /*0x884634*/
          sub_772560(v2); /*0x884638*/
      }
      v2 = *v88; /*0x88463d*/
      if ( *v88 ) /*0x884642*/
        ++v2[7].Unk08; /*0x884648*/
    }
    v89 = v118; /*0x88464c*/
    LOBYTE(v119) = 1; /*0x884652*/
    if ( v118 ) /*0x884657*/
    {
      --v118[7].Unk08; /*0x884659*/
      if ( !v89[7].Unk08 ) /*0x884661*/
        sub_772560(v89); /*0x884666*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 3, 2); /*0x884672*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)unk_B430D4); /*0x884683*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x88468f*/
    v90 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x8846a1*/
    v4 = v2 == *v90; /*0x8846a3*/
    LOBYTE(v119) = 0x14; /*0x8846a6*/
    if ( !v4 ) /*0x8846ab*/
    {
      if ( v2 ) /*0x8846af*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8846b1*/
        if ( v4 ) /*0x8846b4*/
          sub_772560(v2); /*0x8846b8*/
      }
      v2 = *v90; /*0x8846bd*/
      if ( *v90 ) /*0x8846c2*/
        ++v2[7].Unk08; /*0x8846c8*/
    }
    v91 = v118; /*0x8846cc*/
    LOBYTE(v119) = 1; /*0x8846d2*/
    if ( v118 ) /*0x8846d7*/
    {
      --v118[7].Unk08; /*0x8846d9*/
      if ( !v91[7].Unk08 ) /*0x8846e1*/
        sub_772560(v91); /*0x8846e6*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x8846f2*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B430DC[4])); /*0x884703*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x88470f*/
  }
  v92 = *(this + 0x2F); /*0x884718*/
  v93 = v1->VertexShader; /*0x88471e*/
  if ( v93 != (NiD3DVertexShader *)v92 ) /*0x884723*/
  {
    if ( v93 ) /*0x884727*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v93 + 1) ) /*0x88472d*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v93)(v93, 1); /*0x884744*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v92; /*0x884748*/
    if ( v92 ) /*0x88474b*/
      InterlockedIncrement(v92 + 1); /*0x884751*/
  }
  v94 = *(this + 0x4B); /*0x88475b*/
  v95 = v1->PixelShader; /*0x884761*/
  if ( v95 != (NiD3DPixelShader *)v94 ) /*0x884766*/
  {
    if ( v95 ) /*0x88476a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v95 + 1) ) /*0x884770*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v95)(v95, 1); /*0x884787*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v94; /*0x88478b*/
    if ( v94 ) /*0x88478e*/
      InterlockedIncrement(v94 + 1); /*0x884794*/
  }
  if ( !v1->RenderStateGroup ) /*0x88479a*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8847a5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0); /*0x8847b5*/
  if ( !v1->RenderStateGroup ) /*0x8847ba*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8847c5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0); /*0x8847d1*/
  if ( !v1->RenderStateGroup ) /*0x8847d6*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8847e1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0); /*0x8847ed*/
  if ( !v1->RenderStateGroup ) /*0x8847f2*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8847fd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x884809*/
  if ( !v1->RenderStateGroup ) /*0x88480e*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884819*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x884824*/
  if ( !v1->RenderStateGroup ) /*0x884829*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884834*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0); /*0x884840*/
  if ( !v1->RenderStateGroup ) /*0x884845*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884850*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0); /*0x88485c*/
  if ( !v1->RenderStateGroup ) /*0x884861*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88486c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x884878*/
  v4 = v1 == (NiD3DPass *)unk_B477A8; /*0x88487d*/
  v96 = unk_B445F0; /*0x884888*/
  v97 = unk_B438D0; /*0x88488e*/
  unk_B43F70 = unk_B43F60; /*0x884894*/
  v98 = unk_B44C80; /*0x884899*/
  unk_B44600 = v96; /*0x88489e*/
  unk_B438E0 = v97; /*0x8848a4*/
  unk_B44C90 = v98; /*0x8848aa*/
  if ( !v4 ) /*0x8848af*/
  {
    v4 = v1->RefCount-- == 1; /*0x8848b1*/
    if ( v4 ) /*0x8848b5*/
      NiD3DPass_ReleaseToPool(v1); /*0x8848b9*/
    v1 = (NiD3DPass *)unk_B477A8; /*0x8848be*/
    if ( unk_B477A8 ) /*0x8848c6*/
      ++v1->RefCount; /*0x8848cc*/
  }
  if ( !v1->StageCount ) /*0x8848cf*/
  {
    v99 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x8848e1*/
    v4 = v2 == *v99; /*0x8848e3*/
    LOBYTE(v119) = 0x15; /*0x8848e5*/
    if ( !v4 ) /*0x8848ea*/
    {
      if ( v2 ) /*0x8848ee*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8848f0*/
        if ( v4 ) /*0x8848f4*/
          sub_772560(v2); /*0x8848f8*/
      }
      v2 = *v99; /*0x8848fd*/
      if ( *v99 ) /*0x884901*/
        ++v2[7].Unk08; /*0x884907*/
    }
    v100 = v118; /*0x88490a*/
    LOBYTE(v119) = 1; /*0x884910*/
    if ( v118 ) /*0x884915*/
    {
      --v118[7].Unk08; /*0x884917*/
      if ( !v100[7].Unk08 ) /*0x884920*/
        sub_772560(v100); /*0x884925*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x884930*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x88493f*/
  }
  v101 = *(this + 0x2D); /*0x884948*/
  v102 = v1->VertexShader; /*0x88494e*/
  if ( v102 != (NiD3DVertexShader *)v101 ) /*0x884953*/
  {
    if ( v102 ) /*0x884957*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v102 + 1) ) /*0x88495d*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v102)(v102, 1); /*0x884974*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v101; /*0x884978*/
    if ( v101 ) /*0x88497b*/
      InterlockedIncrement(v101 + 1); /*0x884981*/
  }
  v103 = *(this + 0x49); /*0x88498b*/
  v104 = v1->PixelShader; /*0x884991*/
  if ( v104 != (NiD3DPixelShader *)v103 ) /*0x884996*/
  {
    if ( v104 ) /*0x88499a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v104 + 1) ) /*0x8849a0*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v104)(v104, 1); /*0x8849b7*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v103; /*0x8849bb*/
    if ( v103 ) /*0x8849be*/
      InterlockedIncrement(v103 + 1); /*0x8849c4*/
  }
  if ( !v1->RenderStateGroup ) /*0x8849ca*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8849d5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0); /*0x8849e5*/
  if ( !v1->RenderStateGroup ) /*0x8849ea*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8849f5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x13, 9, 0); /*0x884a01*/
  if ( !v1->RenderStateGroup ) /*0x884a06*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884a11*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x14, 1, 0); /*0x884a1c*/
  if ( !v1->RenderStateGroup ) /*0x884a21*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884a2c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x884a38*/
  if ( !v1->RenderStateGroup ) /*0x884a3d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884a48*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x884a53*/
  if ( !v1->RenderStateGroup ) /*0x884a58*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884a63*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0); /*0x884a6f*/
  if ( !v1->RenderStateGroup ) /*0x884a74*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884a7f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0); /*0x884a8b*/
  if ( !v1->RenderStateGroup ) /*0x884a90*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884a9b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x884aa7*/
  v4 = v1 == (NiD3DPass *)unk_B477B4; /*0x884aac*/
  v105 = unk_B445C0; /*0x884ab7*/
  v106 = unk_B438A0; /*0x884abd*/
  unk_B43F4C = unk_B43F30; /*0x884ac3*/
  v107 = unk_B44C50; /*0x884ac8*/
  unk_B445DC = v105; /*0x884acd*/
  unk_B438BC = v106; /*0x884ad3*/
  unk_B44C6C = v107; /*0x884ad9*/
  if ( !v4 ) /*0x884ade*/
  {
    v4 = v1->RefCount-- == 1; /*0x884ae0*/
    if ( v4 ) /*0x884ae4*/
      NiD3DPass_ReleaseToPool(v1); /*0x884ae8*/
    v1 = (NiD3DPass *)unk_B477B4; /*0x884aed*/
    if ( unk_B477B4 ) /*0x884af5*/
      ++v1->RefCount; /*0x884afb*/
  }
  if ( !v1->StageCount ) /*0x884afe*/
  {
    v108 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v118); /*0x884b10*/
    v4 = v2 == *v108; /*0x884b12*/
    LOBYTE(v119) = 0x16; /*0x884b14*/
    if ( !v4 ) /*0x884b19*/
    {
      if ( v2 ) /*0x884b1d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x884b1f*/
        if ( v4 ) /*0x884b23*/
          sub_772560(v2); /*0x884b27*/
      }
      v2 = *v108; /*0x884b2c*/
      if ( *v108 ) /*0x884b30*/
        ++v2[7].Unk08; /*0x884b36*/
    }
    v109 = v118; /*0x884b39*/
    LOBYTE(v119) = 1; /*0x884b3f*/
    if ( v118 ) /*0x884b44*/
    {
      --v118[7].Unk08; /*0x884b46*/
      if ( !v109[7].Unk08 ) /*0x884b4f*/
        sub_772560(v109); /*0x884b54*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x884b5f*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x884b6e*/
  }
  v110 = *(this + 0x30); /*0x884b77*/
  v111 = v1->VertexShader; /*0x884b7d*/
  if ( v111 != (NiD3DVertexShader *)v110 ) /*0x884b82*/
  {
    if ( v111 ) /*0x884b86*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v111 + 1) ) /*0x884b8c*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v111)(v111, 1); /*0x884ba3*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v110; /*0x884ba7*/
    if ( v110 ) /*0x884baa*/
      InterlockedIncrement(v110 + 1); /*0x884bb0*/
  }
  v112 = *(this + 0x4C); /*0x884bba*/
  v113 = v1->PixelShader; /*0x884bc0*/
  if ( v113 != (NiD3DPixelShader *)v112 ) /*0x884bc5*/
  {
    if ( v113 ) /*0x884bc9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v113 + 1) ) /*0x884bcf*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v113)(v113, 1); /*0x884be6*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v112; /*0x884bea*/
    if ( v112 ) /*0x884bed*/
      InterlockedIncrement(v112 + 1); /*0x884bf3*/
  }
  if ( !v1->RenderStateGroup ) /*0x884bf9*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884c04*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0); /*0x884c10*/
  if ( !v1->RenderStateGroup ) /*0x884c15*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884c20*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x13, 5, 0); /*0x884c2c*/
  if ( !v1->RenderStateGroup ) /*0x884c31*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884c3c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x14, 6, 0); /*0x884c48*/
  if ( !v1->RenderStateGroup ) /*0x884c4d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884c58*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x884c64*/
  if ( !v1->RenderStateGroup ) /*0x884c69*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884c74*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x884c80*/
  if ( !v1->RenderStateGroup ) /*0x884c85*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884c90*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0); /*0x884c9c*/
  if ( !v1->RenderStateGroup ) /*0x884ca1*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884cac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0); /*0x884cb8*/
  if ( !v1->RenderStateGroup ) /*0x884cbd*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x884cc8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x884cd4*/
  v114 = unk_B447F0; /*0x884cde*/
  v115 = unk_B43AD0; /*0x884ce4*/
  unk_B44170 = unk_B44160; /*0x884cea*/
  v116 = unk_B44E80; /*0x884cef*/
  unk_B44800 = v114; /*0x884cf9*/
  unk_B43AE0 = v115; /*0x884cff*/
  unk_B44E90 = v116; /*0x884d05*/
  LOBYTE(v119) = 0; /*0x884d0a*/
  if ( v2 ) /*0x884d0f*/
  {
    v4 = v2[7].Unk08-- == 1; /*0x884d11*/
    if ( v4 ) /*0x884d14*/
      sub_772560(v2); /*0x884d18*/
  }
  v4 = v1->RefCount-- == 1; /*0x884d1d*/
  v119 = 0xFFFFFFFF; /*0x884d20*/
  if ( v4 ) /*0x884d24*/
    NiD3DPass_ReleaseToPool(v1); /*0x884d28*/
}
