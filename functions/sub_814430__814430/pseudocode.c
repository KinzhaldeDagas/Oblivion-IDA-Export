void sub_814430()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // ebx
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DVertexShader *VertexShader; // edi
  int v7; // ebp
  NiD3DPixelShader *PixelShader; // edi
  int v9; // ebp
  NiD3DTextureStage **v10; // edi
  NiD3DTextureStage *v11; // eax
  NiD3DVertexShader *v12; // edi
  int v13; // ebp
  NiD3DPixelShader *v14; // edi
  int v15; // ebp
  NiD3DTextureStage **v16; // edi
  NiD3DTextureStage *v17; // eax
  NiD3DTextureStage **v18; // edi
  NiD3DTextureStage *v19; // eax
  NiD3DVertexShader *v20; // edi
  int v21; // ebp
  NiD3DPixelShader *v22; // edi
  int v23; // ebp
  NiD3DTextureStage **v24; // edi
  NiD3DTextureStage *v25; // eax
  NiD3DVertexShader *v26; // edi
  int v27; // ebp
  NiD3DPixelShader *v28; // edi
  int v29; // ebp
  NiD3DTextureStage **v30; // edi
  NiD3DTextureStage *v31; // eax
  NiD3DTextureStage **v32; // edi
  NiD3DTextureStage *v33; // eax
  NiD3DVertexShader *v34; // edi
  int v35; // ebp
  NiD3DPixelShader *v36; // edi
  int v37; // ebp
  NiD3DTextureStage **v38; // edi
  NiD3DTextureStage *v39; // eax
  NiD3DVertexShader *v40; // edi
  int v41; // ebp
  NiD3DPixelShader *v42; // edi
  int v43; // ebp
  NiD3DTextureStage **v44; // edi
  NiD3DTextureStage *v45; // eax
  NiD3DTextureStage **v46; // edi
  NiD3DTextureStage *v47; // eax
  NiD3DVertexShader *v48; // edi
  int v49; // ebp
  NiD3DPixelShader *v50; // edi
  int v51; // ebp
  NiD3DTextureStage **v52; // edi
  NiD3DTextureStage *v53; // eax
  NiD3DVertexShader *v54; // edi
  int v55; // ebp
  NiD3DPixelShader *v56; // edi
  int v57; // ebp
  NiD3DTextureStage **v58; // edi
  NiD3DTextureStage *v59; // eax
  NiD3DTextureStage **v60; // edi
  NiD3DTextureStage *v61; // eax
  NiD3DVertexShader *v62; // edi
  int v63; // ebp
  NiD3DPixelShader *v64; // edi
  int v65; // ebp
  NiD3DTextureStage **v66; // edi
  NiD3DTextureStage *v67; // eax
  NiD3DVertexShader *v68; // edi
  int v69; // ebp
  NiD3DPixelShader *v70; // edi
  int v71; // ebp
  NiD3DTextureStage **v72; // edi
  NiD3DTextureStage *v73; // eax
  NiD3DVertexShader *v74; // edi
  int v75; // ebp
  NiD3DPixelShader *v76; // edi
  int v77; // ebp
  NiD3DVertexShader *v78; // edi
  int v79; // ebp
  NiD3DPixelShader *v80; // edi
  int v81; // ebp
  NiD3DVertexShader *v82; // edi
  int v83; // ebp
  NiD3DPixelShader *v84; // edi
  int v85; // ebp
  NiD3DTextureStage *v86; // [esp+64h] [ebp-10h] BYREF
  unsigned int v87; // [esp+70h] [ebp-4h]

  v0 = 0; /*0x814457*/
  v1 = 0; /*0x81445d*/
  v87 = 0; /*0x81445f*/
  v2 = unk_B455AC; /*0x814467*/
  v3 = unk_B455AC == 0; /*0x81446c*/
  LOBYTE(v87) = 1; /*0x814473*/
  if ( !v3 ) /*0x814478*/
  {
    v0 = (NiD3DPass *)v2; /*0x81447a*/
    if ( v2 ) /*0x814482*/
      ++*(_DWORD *)(v2 + 0x60); /*0x814484*/
  }
  if ( !v0->StageCount ) /*0x814487*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v86); /*0x81449b*/
    if ( v4 ) /*0x81449f*/
    {
      v1 = v4; /*0x8144a1*/
      ++v4[7].Unk08; /*0x8144a3*/
    }
    v5 = v86; /*0x8144aa*/
    LOBYTE(v87) = 1; /*0x8144b0*/
    if ( v86 ) /*0x8144b5*/
    {
      --v86[7].Unk08; /*0x8144b7*/
      if ( !v5[7].Unk08 ) /*0x8144c0*/
        sub_772560(v5); /*0x8144c5*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8144d0*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8144df*/
  }
  VertexShader = v0->VertexShader; /*0x8144e9*/
  v7 = unk_B45290[0]; /*0x8144ee*/
  if ( VertexShader != (NiD3DVertexShader *)unk_B45290[0] ) /*0x8144f0*/
  {
    if ( VertexShader ) /*0x8144f4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x8144fa*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x814510*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v7; /*0x814514*/
    if ( v7 ) /*0x814517*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x81451d*/
  }
  PixelShader = v0->PixelShader; /*0x814528*/
  v9 = unk_B45088[0]; /*0x81452d*/
  if ( PixelShader != (NiD3DPixelShader *)unk_B45088[0] ) /*0x81452f*/
  {
    if ( PixelShader ) /*0x814533*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x814539*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x81454f*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v9; /*0x814553*/
    if ( v9 ) /*0x814556*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x81455c*/
  }
  if ( !v0->RenderStateGroup ) /*0x814562*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81456d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x814579*/
  if ( !v0->RenderStateGroup ) /*0x81457e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814589*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x814599*/
  if ( !v0->RenderStateGroup ) /*0x81459e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8145a9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 2, 0); /*0x8145b5*/
  if ( !v0->RenderStateGroup ) /*0x8145ba*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8145c5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x8145d1*/
  if ( !v0->RenderStateGroup ) /*0x8145d6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8145e1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x16, 1, 0); /*0x8145ec*/
  if ( !v0->RenderStateGroup ) /*0x8145f1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8145fc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x814608*/
  v3 = v0 == (NiD3DPass *)unk_B455E0; /*0x81460d*/
  unk_B43B2C = 0x4000A; /*0x814613*/
  unk_B441BC = 4; /*0x81461d*/
  if ( !v3 ) /*0x814627*/
  {
    v3 = v0->RefCount-- == 1; /*0x814629*/
    if ( v3 ) /*0x81462d*/
      NiD3DPass_ReleaseToPool(v0); /*0x814631*/
    v0 = (NiD3DPass *)unk_B455E0; /*0x814636*/
    if ( unk_B455E0 ) /*0x81463e*/
      ++v0->RefCount; /*0x814644*/
  }
  if ( !v0->StageCount ) /*0x814647*/
  {
    v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x814659*/
    v3 = v1 == *v10; /*0x81465b*/
    LOBYTE(v87) = 3; /*0x81465d*/
    if ( !v3 ) /*0x814662*/
    {
      if ( v1 ) /*0x814666*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x814668*/
        if ( v3 ) /*0x81466c*/
          sub_772560(v1); /*0x814670*/
      }
      v1 = *v10; /*0x814675*/
      if ( *v10 ) /*0x814679*/
        ++v1[7].Unk08; /*0x81467f*/
    }
    v11 = v86; /*0x814682*/
    LOBYTE(v87) = 1; /*0x814688*/
    if ( v86 ) /*0x81468d*/
    {
      --v86[7].Unk08; /*0x81468f*/
      if ( !v11[7].Unk08 ) /*0x814698*/
        sub_772560(v11); /*0x81469d*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8146a8*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8146b7*/
  }
  v12 = v0->VertexShader; /*0x8146c1*/
  v13 = unk_B45290[0]; /*0x8146c6*/
  if ( v12 != (NiD3DVertexShader *)unk_B45290[0] ) /*0x8146c8*/
  {
    if ( v12 ) /*0x8146cc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v12 + 1) ) /*0x8146d2*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v12)(v12, 1); /*0x8146e8*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v13; /*0x8146ec*/
    if ( v13 ) /*0x8146ef*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x8146f5*/
  }
  v14 = v0->PixelShader; /*0x814700*/
  v15 = unk_B45088[0]; /*0x814705*/
  if ( v14 != (NiD3DPixelShader *)unk_B45088[0] ) /*0x814707*/
  {
    if ( v14 ) /*0x81470b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v14 + 1) ) /*0x814711*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v14)(v14, 1); /*0x814727*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v15; /*0x81472b*/
    if ( v15 ) /*0x81472e*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x814734*/
  }
  if ( !v0->RenderStateGroup ) /*0x81473a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814745*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x814751*/
  if ( !v0->RenderStateGroup ) /*0x814756*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814761*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x81476d*/
  if ( !v0->RenderStateGroup ) /*0x814772*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81477d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x81478d*/
  if ( !v0->RenderStateGroup ) /*0x814792*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81479d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8147a9*/
  if ( !v0->RenderStateGroup ) /*0x8147ae*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8147b9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8147c4*/
  if ( !v0->RenderStateGroup ) /*0x8147c9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8147d4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8147e0*/
  v3 = v0 == (NiD3DPass *)unk_B455E4; /*0x8147e8*/
  unk_B43B60 = 2; /*0x8147ee*/
  unk_B441F0 = 4; /*0x8147f8*/
  if ( !v3 ) /*0x814802*/
  {
    v3 = v0->RefCount-- == 1; /*0x814804*/
    if ( v3 ) /*0x814807*/
      NiD3DPass_ReleaseToPool(v0); /*0x81480b*/
    v0 = (NiD3DPass *)unk_B455E4; /*0x814810*/
    if ( unk_B455E4 ) /*0x814818*/
      ++v0->RefCount; /*0x81481e*/
  }
  if ( !v0->StageCount ) /*0x814821*/
  {
    v16 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x814837*/
    v3 = v1 == *v16; /*0x814839*/
    LOBYTE(v87) = 4; /*0x81483b*/
    if ( !v3 ) /*0x814840*/
    {
      if ( v1 ) /*0x814844*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x814846*/
        if ( v3 ) /*0x814849*/
          sub_772560(v1); /*0x81484d*/
      }
      v1 = *v16; /*0x814852*/
      if ( *v16 ) /*0x814856*/
        ++v1[7].Unk08; /*0x81485c*/
    }
    v17 = v86; /*0x814860*/
    LOBYTE(v87) = 1; /*0x814866*/
    if ( v86 ) /*0x81486b*/
    {
      --v86[7].Unk08; /*0x81486d*/
      if ( !v17[7].Unk08 ) /*0x814875*/
        sub_772560(v17); /*0x81487a*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x814886*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x814895*/
    v18 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x8148a7*/
    v3 = v1 == *v18; /*0x8148a9*/
    LOBYTE(v87) = 5; /*0x8148ab*/
    if ( !v3 ) /*0x8148b0*/
    {
      if ( v1 ) /*0x8148b4*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8148b6*/
        if ( v3 ) /*0x8148b9*/
          sub_772560(v1); /*0x8148bd*/
      }
      v1 = *v18; /*0x8148c2*/
      if ( *v18 ) /*0x8148c6*/
        ++v1[7].Unk08; /*0x8148cc*/
    }
    v19 = v86; /*0x8148d0*/
    LOBYTE(v87) = 1; /*0x8148d6*/
    if ( v86 ) /*0x8148db*/
    {
      --v86[7].Unk08; /*0x8148dd*/
      if ( !v19[7].Unk08 ) /*0x8148e5*/
        sub_772560(v19); /*0x8148ea*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8148f6*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x814905*/
  }
  v20 = v0->VertexShader; /*0x81490f*/
  v21 = unk_B452F0; /*0x814914*/
  if ( v20 != (NiD3DVertexShader *)unk_B452F0 ) /*0x814916*/
  {
    if ( v20 ) /*0x81491a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v20 + 1) ) /*0x814920*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v20)(v20, 1); /*0x814936*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v21; /*0x81493a*/
    if ( v21 ) /*0x81493d*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x814943*/
  }
  v22 = v0->PixelShader; /*0x81494e*/
  v23 = unk_B45118; /*0x814953*/
  if ( v22 != (NiD3DPixelShader *)unk_B45118 ) /*0x814955*/
  {
    if ( v22 ) /*0x814959*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v22 + 1) ) /*0x81495f*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v22)(v22, 1); /*0x814975*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v23; /*0x814979*/
    if ( v23 ) /*0x81497c*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x814982*/
  }
  if ( !v0->RenderStateGroup ) /*0x814988*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814993*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x81499f*/
  if ( !v0->RenderStateGroup ) /*0x8149a4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8149af*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8149bb*/
  if ( !v0->RenderStateGroup ) /*0x8149c0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8149cb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8149db*/
  if ( !v0->RenderStateGroup ) /*0x8149e0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8149eb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8149f7*/
  if ( !v0->RenderStateGroup ) /*0x8149fc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814a07*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x814a12*/
  if ( !v0->RenderStateGroup ) /*0x814a17*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814a22*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x814a2e*/
  v3 = v0 == (NiD3DPass *)unk_B455E8; /*0x814a33*/
  unk_B43B64 = 2; /*0x814a39*/
  unk_B441F4 = 0x84; /*0x814a43*/
  unk_B44884 = 4; /*0x814a4d*/
  if ( !v3 ) /*0x814a57*/
  {
    v3 = v0->RefCount-- == 1; /*0x814a59*/
    if ( v3 ) /*0x814a5d*/
      NiD3DPass_ReleaseToPool(v0); /*0x814a61*/
    v0 = (NiD3DPass *)unk_B455E8; /*0x814a66*/
    if ( unk_B455E8 ) /*0x814a6e*/
      ++v0->RefCount; /*0x814a74*/
  }
  if ( !v0->StageCount ) /*0x814a77*/
  {
    v24 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x814a89*/
    v3 = v1 == *v24; /*0x814a8b*/
    LOBYTE(v87) = 6; /*0x814a8d*/
    if ( !v3 ) /*0x814a92*/
    {
      if ( v1 ) /*0x814a96*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x814a98*/
        if ( v3 ) /*0x814a9c*/
          sub_772560(v1); /*0x814aa0*/
      }
      v1 = *v24; /*0x814aa5*/
      if ( *v24 ) /*0x814aa9*/
        ++v1[7].Unk08; /*0x814aaf*/
    }
    v25 = v86; /*0x814ab2*/
    LOBYTE(v87) = 1; /*0x814ab8*/
    if ( v86 ) /*0x814abd*/
    {
      --v86[7].Unk08; /*0x814abf*/
      if ( !v25[7].Unk08 ) /*0x814ac8*/
        sub_772560(v25); /*0x814acd*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x814ad8*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x814ae7*/
  }
  v26 = v0->VertexShader; /*0x814af1*/
  v27 = unk_B45290[0]; /*0x814af6*/
  if ( v26 != (NiD3DVertexShader *)unk_B45290[0] ) /*0x814af8*/
  {
    if ( v26 ) /*0x814afc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v26 + 1) ) /*0x814b02*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v26)(v26, 1); /*0x814b18*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v27; /*0x814b1c*/
    if ( v27 ) /*0x814b1f*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x814b25*/
  }
  v28 = v0->PixelShader; /*0x814b30*/
  v29 = unk_B45088[0]; /*0x814b35*/
  if ( v28 != (NiD3DPixelShader *)unk_B45088[0] ) /*0x814b37*/
  {
    if ( v28 ) /*0x814b3b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v28 + 1) ) /*0x814b41*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v28)(v28, 1); /*0x814b57*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v29; /*0x814b5b*/
    if ( v29 ) /*0x814b5e*/
      InterlockedIncrement((volatile LONG *)(v29 + 4)); /*0x814b64*/
  }
  if ( !v0->RenderStateGroup ) /*0x814b6a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814b75*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x814b81*/
  if ( !v0->RenderStateGroup ) /*0x814b86*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814b91*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x814b9d*/
  if ( !v0->RenderStateGroup ) /*0x814ba2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814bad*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x814bb9*/
  if ( !v0->RenderStateGroup ) /*0x814bbe*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814bc9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x814bd5*/
  if ( !v0->RenderStateGroup ) /*0x814bda*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814be5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x814bf1*/
  if ( !v0->RenderStateGroup ) /*0x814bf6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814c01*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x814c0d*/
  v3 = v0 == (NiD3DPass *)unk_B455EC; /*0x814c1a*/
  unk_B43B68 = 2; /*0x814c20*/
  unk_B441F8 = 4; /*0x814c26*/
  if ( !v3 ) /*0x814c30*/
  {
    v3 = v0->RefCount-- == 1; /*0x814c32*/
    if ( v3 ) /*0x814c35*/
      NiD3DPass_ReleaseToPool(v0); /*0x814c39*/
    v0 = (NiD3DPass *)unk_B455EC; /*0x814c3e*/
    if ( unk_B455EC ) /*0x814c46*/
      ++v0->RefCount; /*0x814c4c*/
  }
  if ( v0->StageCount < 2 ) /*0x814c53*/
  {
    v30 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x814c66*/
    v3 = v1 == *v30; /*0x814c68*/
    LOBYTE(v87) = 7; /*0x814c6a*/
    if ( !v3 ) /*0x814c6f*/
    {
      if ( v1 ) /*0x814c73*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x814c75*/
        if ( v3 ) /*0x814c78*/
          sub_772560(v1); /*0x814c7c*/
      }
      v1 = *v30; /*0x814c81*/
      if ( *v30 ) /*0x814c85*/
        ++v1[7].Unk08; /*0x814c8b*/
    }
    v31 = v86; /*0x814c8f*/
    LOBYTE(v87) = 1; /*0x814c95*/
    if ( v86 ) /*0x814c9a*/
    {
      --v86[7].Unk08; /*0x814c9c*/
      if ( !v31[7].Unk08 ) /*0x814ca4*/
        sub_772560(v31); /*0x814ca9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x814cb5*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x814cc4*/
    v32 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x814cd6*/
    v3 = v1 == *v32; /*0x814cd8*/
    LOBYTE(v87) = 8; /*0x814cda*/
    if ( !v3 ) /*0x814cdf*/
    {
      if ( v1 ) /*0x814ce3*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x814ce5*/
        if ( v3 ) /*0x814ce8*/
          sub_772560(v1); /*0x814cec*/
      }
      v1 = *v32; /*0x814cf1*/
      if ( *v32 ) /*0x814cf5*/
        ++v1[7].Unk08; /*0x814cfb*/
    }
    v33 = v86; /*0x814cff*/
    LOBYTE(v87) = 1; /*0x814d05*/
    if ( v86 ) /*0x814d0a*/
    {
      --v86[7].Unk08; /*0x814d0c*/
      if ( !v33[7].Unk08 ) /*0x814d14*/
        sub_772560(v33); /*0x814d19*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x814d25*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x814d34*/
  }
  v34 = v0->VertexShader; /*0x814d3e*/
  v35 = unk_B452F0; /*0x814d43*/
  if ( v34 != (NiD3DVertexShader *)unk_B452F0 ) /*0x814d45*/
  {
    if ( v34 ) /*0x814d49*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v34 + 1) ) /*0x814d4f*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v34)(v34, 1); /*0x814d65*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v35; /*0x814d69*/
    if ( v35 ) /*0x814d6c*/
      InterlockedIncrement((volatile LONG *)(v35 + 4)); /*0x814d72*/
  }
  v36 = v0->PixelShader; /*0x814d7d*/
  v37 = unk_B45118; /*0x814d82*/
  if ( v36 != (NiD3DPixelShader *)unk_B45118 ) /*0x814d84*/
  {
    if ( v36 ) /*0x814d88*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) ) /*0x814d8e*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v36)(v36, 1); /*0x814da4*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v37; /*0x814da8*/
    if ( v37 ) /*0x814dab*/
      InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x814db1*/
  }
  if ( !v0->RenderStateGroup ) /*0x814db7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814dc2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x814dce*/
  if ( !v0->RenderStateGroup ) /*0x814dd3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814dde*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x814dee*/
  if ( !v0->RenderStateGroup ) /*0x814df3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814dfe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x814e09*/
  if ( !v0->RenderStateGroup ) /*0x814e0e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814e19*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x814e25*/
  if ( !v0->RenderStateGroup ) /*0x814e2a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814e35*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x814e40*/
  if ( !v0->RenderStateGroup ) /*0x814e45*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814e50*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x814e5c*/
  v3 = v0 == (NiD3DPass *)unk_B455F0; /*0x814e61*/
  unk_B43B6C = 2; /*0x814e67*/
  unk_B441FC = 0x84; /*0x814e71*/
  unk_B4488C = 4; /*0x814e7b*/
  if ( !v3 ) /*0x814e85*/
  {
    v3 = v0->RefCount-- == 1; /*0x814e87*/
    if ( v3 ) /*0x814e8b*/
      NiD3DPass_ReleaseToPool(v0); /*0x814e8f*/
    v0 = (NiD3DPass *)unk_B455F0; /*0x814e94*/
    if ( unk_B455F0 ) /*0x814e9c*/
      ++v0->RefCount; /*0x814ea2*/
  }
  if ( !v0->StageCount ) /*0x814ea5*/
  {
    v38 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x814eb7*/
    v3 = v1 == *v38; /*0x814eb9*/
    LOBYTE(v87) = 9; /*0x814ebb*/
    if ( !v3 ) /*0x814ec0*/
    {
      if ( v1 ) /*0x814ec4*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x814ec6*/
        if ( v3 ) /*0x814eca*/
          sub_772560(v1); /*0x814ece*/
      }
      v1 = *v38; /*0x814ed3*/
      if ( *v38 ) /*0x814ed7*/
        ++v1[7].Unk08; /*0x814edd*/
    }
    v39 = v86; /*0x814ee0*/
    LOBYTE(v87) = 1; /*0x814ee6*/
    if ( v86 ) /*0x814eeb*/
    {
      --v86[7].Unk08; /*0x814eed*/
      if ( !v39[7].Unk08 ) /*0x814ef6*/
        sub_772560(v39); /*0x814efb*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x814f06*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x814f15*/
  }
  v40 = v0->VertexShader; /*0x814f1f*/
  v41 = unk_B4530C[0]; /*0x814f24*/
  if ( v40 != (NiD3DVertexShader *)unk_B4530C[0] ) /*0x814f26*/
  {
    if ( v40 ) /*0x814f2a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v40 + 1) ) /*0x814f30*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v40)(v40, 1); /*0x814f46*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v41; /*0x814f4a*/
    if ( v41 ) /*0x814f4d*/
      InterlockedIncrement((volatile LONG *)(v41 + 4)); /*0x814f53*/
  }
  v42 = v0->PixelShader; /*0x814f5e*/
  v43 = unk_B45088[0]; /*0x814f63*/
  if ( v42 != (NiD3DPixelShader *)unk_B45088[0] ) /*0x814f65*/
  {
    if ( v42 ) /*0x814f69*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) ) /*0x814f6f*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v42)(v42, 1); /*0x814f85*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v43; /*0x814f89*/
    if ( v43 ) /*0x814f8c*/
      InterlockedIncrement((volatile LONG *)(v43 + 4)); /*0x814f92*/
  }
  if ( !v0->RenderStateGroup ) /*0x814f98*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814fa3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x814faf*/
  if ( !v0->RenderStateGroup ) /*0x814fb4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814fbf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x814fcb*/
  if ( !v0->RenderStateGroup ) /*0x814fd0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814fdb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x814feb*/
  if ( !v0->RenderStateGroup ) /*0x814ff0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x814ffb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x815007*/
  if ( !v0->RenderStateGroup ) /*0x81500c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815017*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x815022*/
  if ( !v0->RenderStateGroup ) /*0x815027*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815032*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x81503e*/
  v3 = v0 == (NiD3DPass *)unk_B455F4; /*0x815046*/
  unk_B43B70 = 0x40008; /*0x81504c*/
  unk_B44200 = 4; /*0x815056*/
  if ( !v3 ) /*0x815060*/
  {
    v3 = v0->RefCount-- == 1; /*0x815062*/
    if ( v3 ) /*0x815065*/
      NiD3DPass_ReleaseToPool(v0); /*0x815069*/
    v0 = (NiD3DPass *)unk_B455F4; /*0x81506e*/
    if ( unk_B455F4 ) /*0x815076*/
      ++v0->RefCount; /*0x81507c*/
  }
  if ( !v0->StageCount ) /*0x81507f*/
  {
    v44 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x815095*/
    v3 = v1 == *v44; /*0x815097*/
    LOBYTE(v87) = 0xA; /*0x815099*/
    if ( !v3 ) /*0x81509e*/
    {
      if ( v1 ) /*0x8150a2*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8150a4*/
        if ( v3 ) /*0x8150a7*/
          sub_772560(v1); /*0x8150ab*/
      }
      v1 = *v44; /*0x8150b0*/
      if ( *v44 ) /*0x8150b4*/
        ++v1[7].Unk08; /*0x8150ba*/
    }
    v45 = v86; /*0x8150be*/
    LOBYTE(v87) = 1; /*0x8150c4*/
    if ( v86 ) /*0x8150c9*/
    {
      --v86[7].Unk08; /*0x8150cb*/
      if ( !v45[7].Unk08 ) /*0x8150d3*/
        sub_772560(v45); /*0x8150d8*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8150e4*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8150f3*/
    v46 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x815105*/
    v3 = v1 == *v46; /*0x815107*/
    LOBYTE(v87) = 0xB; /*0x815109*/
    if ( !v3 ) /*0x81510e*/
    {
      if ( v1 ) /*0x815112*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x815114*/
        if ( v3 ) /*0x815117*/
          sub_772560(v1); /*0x81511b*/
      }
      v1 = *v46; /*0x815120*/
      if ( *v46 ) /*0x815124*/
        ++v1[7].Unk08; /*0x81512a*/
    }
    v47 = v86; /*0x81512e*/
    LOBYTE(v87) = 1; /*0x815134*/
    if ( v86 ) /*0x815139*/
    {
      --v86[7].Unk08; /*0x81513b*/
      if ( !v47[7].Unk08 ) /*0x815143*/
        sub_772560(v47); /*0x815148*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x815154*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x815163*/
  }
  v48 = v0->VertexShader; /*0x81516d*/
  v49 = unk_B4535C; /*0x815172*/
  if ( v48 != (NiD3DVertexShader *)unk_B4535C ) /*0x815174*/
  {
    if ( v48 ) /*0x815178*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v48 + 1) ) /*0x81517e*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v48)(v48, 1); /*0x815194*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v49; /*0x815198*/
    if ( v49 ) /*0x81519b*/
      InterlockedIncrement((volatile LONG *)(v49 + 4)); /*0x8151a1*/
  }
  v50 = v0->PixelShader; /*0x8151ac*/
  v51 = unk_B45118; /*0x8151b1*/
  if ( v50 != (NiD3DPixelShader *)unk_B45118 ) /*0x8151b3*/
  {
    if ( v50 ) /*0x8151b7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v50 + 1) ) /*0x8151bd*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v50)(v50, 1); /*0x8151d3*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v51; /*0x8151d7*/
    if ( v51 ) /*0x8151da*/
      InterlockedIncrement((volatile LONG *)(v51 + 4)); /*0x8151e0*/
  }
  if ( !v0->RenderStateGroup ) /*0x8151e6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8151f1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8151fd*/
  if ( !v0->RenderStateGroup ) /*0x815202*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81520d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x815219*/
  if ( !v0->RenderStateGroup ) /*0x81521e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815229*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x815239*/
  if ( !v0->RenderStateGroup ) /*0x81523e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815249*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x815255*/
  if ( !v0->RenderStateGroup ) /*0x81525a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815265*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x815270*/
  if ( !v0->RenderStateGroup ) /*0x815275*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815280*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x81528c*/
  v3 = v0 == (NiD3DPass *)unk_B455F8; /*0x815291*/
  unk_B43B74 = 0x40008; /*0x815297*/
  unk_B44204 = 0x84; /*0x8152a1*/
  unk_B44894 = 4; /*0x8152ab*/
  if ( !v3 ) /*0x8152b5*/
  {
    v3 = v0->RefCount-- == 1; /*0x8152b7*/
    if ( v3 ) /*0x8152bb*/
      NiD3DPass_ReleaseToPool(v0); /*0x8152bf*/
    v0 = (NiD3DPass *)unk_B455F8; /*0x8152c4*/
    if ( unk_B455F8 ) /*0x8152cc*/
      ++v0->RefCount; /*0x8152d2*/
  }
  if ( !v0->StageCount ) /*0x8152d5*/
  {
    v52 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x8152e7*/
    v3 = v1 == *v52; /*0x8152e9*/
    LOBYTE(v87) = 0xC; /*0x8152eb*/
    if ( !v3 ) /*0x8152f0*/
    {
      if ( v1 ) /*0x8152f4*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8152f6*/
        if ( v3 ) /*0x8152fa*/
          sub_772560(v1); /*0x8152fe*/
      }
      v1 = *v52; /*0x815303*/
      if ( *v52 ) /*0x815307*/
        ++v1[7].Unk08; /*0x81530d*/
    }
    v53 = v86; /*0x815310*/
    LOBYTE(v87) = 1; /*0x815316*/
    if ( v86 ) /*0x81531b*/
    {
      --v86[7].Unk08; /*0x81531d*/
      if ( !v53[7].Unk08 ) /*0x815326*/
        sub_772560(v53); /*0x81532b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x815336*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x815345*/
  }
  v54 = v0->VertexShader; /*0x81534f*/
  v55 = unk_B4530C[0]; /*0x815354*/
  if ( v54 != (NiD3DVertexShader *)unk_B4530C[0] ) /*0x815356*/
  {
    if ( v54 ) /*0x81535a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v54 + 1) ) /*0x815360*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v54)(v54, 1); /*0x815376*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v55; /*0x81537a*/
    if ( v55 ) /*0x81537d*/
      InterlockedIncrement((volatile LONG *)(v55 + 4)); /*0x815383*/
  }
  v56 = v0->PixelShader; /*0x81538e*/
  v57 = unk_B45088[0]; /*0x815393*/
  if ( v56 != (NiD3DPixelShader *)unk_B45088[0] ) /*0x815395*/
  {
    if ( v56 ) /*0x815399*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) ) /*0x81539f*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v56)(v56, 1); /*0x8153b5*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v57; /*0x8153b9*/
    if ( v57 ) /*0x8153bc*/
      InterlockedIncrement((volatile LONG *)(v57 + 4)); /*0x8153c2*/
  }
  if ( !v0->RenderStateGroup ) /*0x8153c8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8153d3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8153df*/
  if ( !v0->RenderStateGroup ) /*0x8153e4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8153ef*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x8153fb*/
  if ( !v0->RenderStateGroup ) /*0x815400*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81540b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x815417*/
  if ( !v0->RenderStateGroup ) /*0x81541c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815427*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x815433*/
  if ( !v0->RenderStateGroup ) /*0x815438*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815443*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x81544f*/
  if ( !v0->RenderStateGroup ) /*0x815454*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81545f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x81546b*/
  v3 = v0 == (NiD3DPass *)unk_B455FC; /*0x815473*/
  unk_B43B78 = 0x40008; /*0x815479*/
  unk_B44208 = 4; /*0x815483*/
  if ( !v3 ) /*0x81548d*/
  {
    v3 = v0->RefCount-- == 1; /*0x81548f*/
    if ( v3 ) /*0x815492*/
      NiD3DPass_ReleaseToPool(v0); /*0x815496*/
    v0 = (NiD3DPass *)unk_B455FC; /*0x81549b*/
    if ( unk_B455FC ) /*0x8154a3*/
      ++v0->RefCount; /*0x8154a9*/
  }
  if ( v0->StageCount < 2 ) /*0x8154b1*/
  {
    v58 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x8154c4*/
    v3 = v1 == *v58; /*0x8154c6*/
    LOBYTE(v87) = 0xD; /*0x8154c8*/
    if ( !v3 ) /*0x8154cd*/
    {
      if ( v1 ) /*0x8154d1*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8154d3*/
        if ( v3 ) /*0x8154d6*/
          sub_772560(v1); /*0x8154da*/
      }
      v1 = *v58; /*0x8154df*/
      if ( *v58 ) /*0x8154e3*/
        ++v1[7].Unk08; /*0x8154e9*/
    }
    v59 = v86; /*0x8154ed*/
    LOBYTE(v87) = 1; /*0x8154f3*/
    if ( v86 ) /*0x8154f8*/
    {
      --v86[7].Unk08; /*0x8154fa*/
      if ( !v59[7].Unk08 ) /*0x815502*/
        sub_772560(v59); /*0x815507*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x815513*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x815522*/
    v60 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x815534*/
    v3 = v1 == *v60; /*0x815536*/
    LOBYTE(v87) = 0xE; /*0x815538*/
    if ( !v3 ) /*0x81553d*/
    {
      if ( v1 ) /*0x815541*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x815543*/
        if ( v3 ) /*0x815546*/
          sub_772560(v1); /*0x81554a*/
      }
      v1 = *v60; /*0x81554f*/
      if ( *v60 ) /*0x815553*/
        ++v1[7].Unk08; /*0x815559*/
    }
    v61 = v86; /*0x81555d*/
    LOBYTE(v87) = 1; /*0x815563*/
    if ( v86 ) /*0x815568*/
    {
      --v86[7].Unk08; /*0x81556a*/
      if ( !v61[7].Unk08 ) /*0x815572*/
        sub_772560(v61); /*0x815577*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x815583*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x815592*/
  }
  v62 = v0->VertexShader; /*0x81559c*/
  v63 = unk_B4535C; /*0x8155a1*/
  if ( v62 != (NiD3DVertexShader *)unk_B4535C ) /*0x8155a3*/
  {
    if ( v62 ) /*0x8155a7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v62 + 1) ) /*0x8155ad*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v62)(v62, 1); /*0x8155c3*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v63; /*0x8155c7*/
    if ( v63 ) /*0x8155ca*/
      InterlockedIncrement((volatile LONG *)(v63 + 4)); /*0x8155d0*/
  }
  v64 = v0->PixelShader; /*0x8155db*/
  v65 = unk_B45118; /*0x8155e0*/
  if ( v64 != (NiD3DPixelShader *)unk_B45118 ) /*0x8155e2*/
  {
    if ( v64 ) /*0x8155e6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v64 + 1) ) /*0x8155ec*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v64)(v64, 1); /*0x815602*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v65; /*0x815606*/
    if ( v65 ) /*0x815609*/
      InterlockedIncrement((volatile LONG *)(v65 + 4)); /*0x81560f*/
  }
  if ( !v0->RenderStateGroup ) /*0x815615*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815620*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x81562c*/
  if ( !v0->RenderStateGroup ) /*0x815631*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81563c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x81564c*/
  if ( !v0->RenderStateGroup ) /*0x815651*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81565c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x815667*/
  if ( !v0->RenderStateGroup ) /*0x81566c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815677*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x815683*/
  if ( !v0->RenderStateGroup ) /*0x815688*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815693*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x81569e*/
  if ( !v0->RenderStateGroup ) /*0x8156a3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8156ae*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8156ba*/
  v3 = v0 == (NiD3DPass *)unk_B45C18; /*0x8156bf*/
  unk_B43B7C = 0x40008; /*0x8156c5*/
  unk_B4420C = 0x84; /*0x8156cf*/
  unk_B4489C = 4; /*0x8156d9*/
  if ( !v3 ) /*0x8156e3*/
  {
    v3 = v0->RefCount-- == 1; /*0x8156e5*/
    if ( v3 ) /*0x8156e9*/
      NiD3DPass_ReleaseToPool(v0); /*0x8156ed*/
    v0 = (NiD3DPass *)unk_B45C18; /*0x8156f2*/
    if ( unk_B45C18 ) /*0x8156fa*/
      ++v0->RefCount; /*0x815700*/
  }
  if ( !v0->StageCount ) /*0x815703*/
  {
    v66 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x815715*/
    v3 = v1 == *v66; /*0x815717*/
    LOBYTE(v87) = 0xF; /*0x815719*/
    if ( !v3 ) /*0x81571e*/
    {
      if ( v1 ) /*0x815722*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x815724*/
        if ( v3 ) /*0x815728*/
          sub_772560(v1); /*0x81572c*/
      }
      v1 = *v66; /*0x815731*/
      if ( *v66 ) /*0x815735*/
        ++v1[7].Unk08; /*0x81573b*/
    }
    v67 = v86; /*0x81573e*/
    LOBYTE(v87) = 1; /*0x815744*/
    if ( v86 ) /*0x815749*/
    {
      --v86[7].Unk08; /*0x81574b*/
      if ( !v67[7].Unk08 ) /*0x815754*/
        sub_772560(v67); /*0x815759*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x815764*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x815773*/
  }
  v68 = v0->VertexShader; /*0x81577d*/
  v69 = unk_B452F0; /*0x815782*/
  if ( v68 != (NiD3DVertexShader *)unk_B452F0 ) /*0x815784*/
  {
    if ( v68 ) /*0x815788*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v68 + 1) ) /*0x81578e*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v68)(v68, 1); /*0x8157a4*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v69; /*0x8157a8*/
    if ( v69 ) /*0x8157ab*/
      InterlockedIncrement((volatile LONG *)(v69 + 4)); /*0x8157b1*/
  }
  v70 = v0->PixelShader; /*0x8157bc*/
  v71 = unk_B4511C; /*0x8157c1*/
  if ( v70 != (NiD3DPixelShader *)unk_B4511C ) /*0x8157c3*/
  {
    if ( v70 ) /*0x8157c7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v70 + 1) ) /*0x8157cd*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v70)(v70, 1); /*0x8157e3*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v71; /*0x8157e7*/
    if ( v71 ) /*0x8157ea*/
      InterlockedIncrement((volatile LONG *)(v71 + 4)); /*0x8157f0*/
  }
  if ( !v0->RenderStateGroup ) /*0x8157f6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815801*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x81580d*/
  if ( !v0->RenderStateGroup ) /*0x815812*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81581d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x81582d*/
  if ( !v0->RenderStateGroup ) /*0x815832*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x81583d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x815848*/
  if ( !v0->RenderStateGroup ) /*0x81584d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815858*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x815864*/
  if ( !v0->RenderStateGroup ) /*0x815869*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815874*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x815880*/
  if ( !v0->RenderStateGroup ) /*0x815885*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815890*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x81589c*/
  v3 = v0 == (NiD3DPass *)unk_B45C1C; /*0x8158a1*/
  unk_B44198 = 2; /*0x8158a7*/
  unk_B44828 = 0x84; /*0x8158b1*/
  unk_B44EB8 = 4; /*0x8158bb*/
  if ( !v3 ) /*0x8158c5*/
  {
    v3 = v0->RefCount-- == 1; /*0x8158c7*/
    if ( v3 ) /*0x8158cb*/
      NiD3DPass_ReleaseToPool(v0); /*0x8158cf*/
    v0 = (NiD3DPass *)unk_B45C1C; /*0x8158d4*/
    if ( unk_B45C1C ) /*0x8158dc*/
      ++v0->RefCount; /*0x8158e2*/
  }
  if ( !v0->StageCount ) /*0x8158e5*/
  {
    v72 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v86); /*0x8158f7*/
    v3 = v1 == *v72; /*0x8158f9*/
    LOBYTE(v87) = 0x10; /*0x8158fb*/
    if ( !v3 ) /*0x815900*/
    {
      if ( v1 ) /*0x815904*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x815906*/
        if ( v3 ) /*0x81590a*/
          sub_772560(v1); /*0x81590e*/
      }
      v1 = *v72; /*0x815913*/
      if ( *v72 ) /*0x815917*/
        ++v1[7].Unk08; /*0x81591d*/
    }
    v73 = v86; /*0x815920*/
    LOBYTE(v87) = 1; /*0x815926*/
    if ( v86 ) /*0x81592b*/
    {
      --v86[7].Unk08; /*0x81592d*/
      if ( !v73[7].Unk08 ) /*0x815936*/
        sub_772560(v73); /*0x81593b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x815946*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x815955*/
  }
  v74 = v0->VertexShader; /*0x81595f*/
  v75 = unk_B4535C; /*0x815964*/
  if ( v74 != (NiD3DVertexShader *)unk_B4535C ) /*0x815966*/
  {
    if ( v74 ) /*0x81596a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v74 + 1) ) /*0x815970*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v74)(v74, 1); /*0x815986*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v75; /*0x81598a*/
    if ( v75 ) /*0x81598d*/
      InterlockedIncrement((volatile LONG *)(v75 + 4)); /*0x815993*/
  }
  v76 = v0->PixelShader; /*0x81599e*/
  v77 = unk_B4511C; /*0x8159a3*/
  if ( v76 != (NiD3DPixelShader *)unk_B4511C ) /*0x8159a5*/
  {
    if ( v76 ) /*0x8159a9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v76 + 1) ) /*0x8159af*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v76)(v76, 1); /*0x8159c5*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v77; /*0x8159c9*/
    if ( v77 ) /*0x8159cc*/
      InterlockedIncrement((volatile LONG *)(v77 + 4)); /*0x8159d2*/
  }
  if ( !v0->RenderStateGroup ) /*0x8159d8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8159e3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8159ef*/
  if ( !v0->RenderStateGroup ) /*0x8159f4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8159ff*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x815a0b*/
  if ( !v0->RenderStateGroup ) /*0x815a10*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815a1b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x815a27*/
  if ( !v0->RenderStateGroup ) /*0x815a2c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815a37*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x815a43*/
  if ( !v0->RenderStateGroup ) /*0x815a48*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815a53*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x815a5f*/
  if ( !v0->RenderStateGroup ) /*0x815a64*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815a6f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x815a7b*/
  v3 = v0 == (NiD3DPass *)unk_B455C8; /*0x815a80*/
  unk_B4419C = 0x40008; /*0x815a86*/
  unk_B4482C = 0x84; /*0x815a90*/
  unk_B44EBC = 4; /*0x815a9a*/
  if ( !v3 ) /*0x815aa4*/
  {
    v3 = v0->RefCount-- == 1; /*0x815aa6*/
    if ( v3 ) /*0x815aaa*/
      NiD3DPass_ReleaseToPool(v0); /*0x815aae*/
    v0 = (NiD3DPass *)unk_B455C8; /*0x815ab3*/
    if ( unk_B455C8 ) /*0x815abb*/
      ++v0->RefCount; /*0x815ac1*/
  }
  v78 = v0->VertexShader; /*0x815aca*/
  v79 = unk_B452F0; /*0x815acf*/
  if ( v78 != (NiD3DVertexShader *)unk_B452F0 ) /*0x815ad1*/
  {
    if ( v78 ) /*0x815ad5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v78 + 1) ) /*0x815adb*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v78)(v78, 1); /*0x815af1*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v79; /*0x815af5*/
    if ( v79 ) /*0x815af8*/
      InterlockedIncrement((volatile LONG *)(v79 + 4)); /*0x815afe*/
  }
  v80 = v0->PixelShader; /*0x815b09*/
  v81 = unk_B45120; /*0x815b0e*/
  if ( v80 != (NiD3DPixelShader *)unk_B45120 ) /*0x815b10*/
  {
    if ( v80 ) /*0x815b14*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v80 + 1) ) /*0x815b1a*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v80)(v80, 1); /*0x815b30*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v81; /*0x815b34*/
    if ( v81 ) /*0x815b37*/
      InterlockedIncrement((volatile LONG *)(v81 + 4)); /*0x815b3d*/
  }
  if ( !v0->RenderStateGroup ) /*0x815b43*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815b4e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x815b5a*/
  if ( !v0->RenderStateGroup ) /*0x815b5f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815b6a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x815b76*/
  if ( !v0->RenderStateGroup ) /*0x815b7b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815b86*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x815b92*/
  if ( !v0->RenderStateGroup ) /*0x815b97*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815ba2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x815bae*/
  if ( !v0->RenderStateGroup ) /*0x815bb3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815bbe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x815bca*/
  if ( !v0->RenderStateGroup ) /*0x815bcf*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815bda*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x815be6*/
  v3 = v0 == (NiD3DPass *)unk_B455CC; /*0x815beb*/
  unk_B43B48 = 2; /*0x815bf1*/
  unk_B441D8 = 0x84; /*0x815bfb*/
  unk_B44868 = 4; /*0x815c05*/
  if ( !v3 ) /*0x815c0f*/
  {
    v3 = v0->RefCount-- == 1; /*0x815c11*/
    if ( v3 ) /*0x815c15*/
      NiD3DPass_ReleaseToPool(v0); /*0x815c19*/
    v0 = (NiD3DPass *)unk_B455CC; /*0x815c1e*/
    if ( unk_B455CC ) /*0x815c26*/
      ++v0->RefCount; /*0x815c2c*/
  }
  v82 = v0->VertexShader; /*0x815c35*/
  v83 = unk_B4535C; /*0x815c3a*/
  if ( v82 != (NiD3DVertexShader *)unk_B4535C ) /*0x815c3c*/
  {
    if ( v82 ) /*0x815c40*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v82 + 1) ) /*0x815c46*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v82)(v82, 1); /*0x815c5c*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v83; /*0x815c60*/
    if ( v83 ) /*0x815c63*/
      InterlockedIncrement((volatile LONG *)(v83 + 4)); /*0x815c69*/
  }
  v84 = v0->PixelShader; /*0x815c74*/
  v85 = unk_B45120; /*0x815c79*/
  if ( v84 != (NiD3DPixelShader *)unk_B45120 ) /*0x815c7b*/
  {
    if ( v84 ) /*0x815c7f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v84 + 1) ) /*0x815c85*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v84)(v84, 1); /*0x815c9b*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v85; /*0x815c9f*/
    if ( v85 ) /*0x815ca2*/
      InterlockedIncrement((volatile LONG *)(v85 + 4)); /*0x815ca8*/
  }
  if ( !v0->RenderStateGroup ) /*0x815cae*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815cb9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x815cc5*/
  if ( !v0->RenderStateGroup ) /*0x815cca*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815cd5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0); /*0x815ce1*/
  if ( !v0->RenderStateGroup ) /*0x815ce6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815cf1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x815cfd*/
  if ( !v0->RenderStateGroup ) /*0x815d02*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815d0d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x815d19*/
  if ( !v0->RenderStateGroup ) /*0x815d1e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815d29*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x815d35*/
  if ( !v0->RenderStateGroup ) /*0x815d3a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x815d45*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x815d51*/
  unk_B43B4C = 0x40008; /*0x815d5b*/
  unk_B441DC = 0x84; /*0x815d65*/
  unk_B4486C = 4; /*0x815d6f*/
  LOBYTE(v87) = 0; /*0x815d79*/
  if ( v1 ) /*0x815d7e*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x815d80*/
    if ( v3 ) /*0x815d83*/
      sub_772560(v1); /*0x815d87*/
  }
  v3 = v0->RefCount-- == 1; /*0x815d8c*/
  v87 = 0xFFFFFFFF; /*0x815d8f*/
  if ( v3 ) /*0x815d93*/
    NiD3DPass_ReleaseToPool(v0); /*0x815d97*/
}
