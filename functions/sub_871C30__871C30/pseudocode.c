// MoonSugarEffect decode: ParallaxShader pass population slot +0xD8. Populates final six pooled passes dword_B476F8..B4770C, completing the 0x3C Parallax pass table.
void __thiscall sub_871C30(volatile LONG **this)
{
  int v1; // edi
  NiD3DTextureStage *v2; // esi
  int v3; // eax
  bool v4; // zf
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage *v6; // eax
  NiD3DTextureStage **v7; // ebx
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage **v9; // ebx
  NiD3DTextureStage *v10; // eax
  NiD3DTextureStage **v11; // ebx
  NiD3DTextureStage *v12; // eax
  NiD3DTextureStage **v13; // ebx
  NiD3DTextureStage *v14; // eax
  NiD3DTextureStage **v15; // ebx
  NiD3DTextureStage *v16; // eax
  int v17; // ebx
  int v18; // ebp
  int v19; // ebx
  int v20; // ebp
  NiD3DTextureStage **v21; // ebp
  NiD3DTextureStage *v22; // eax
  NiD3DTextureStage **v23; // ebp
  NiD3DTextureStage *v24; // eax
  NiD3DTextureStage **v25; // ebp
  NiD3DTextureStage *v26; // eax
  NiD3DTextureStage **v27; // ebp
  NiD3DTextureStage *v28; // eax
  NiD3DTextureStage **v29; // ebp
  NiD3DTextureStage *v30; // eax
  NiD3DTextureStage **v31; // ebp
  NiD3DTextureStage *v32; // eax
  int v33; // ebx
  int v34; // ebp
  int v35; // ebx
  int v36; // ebp
  NiD3DTextureStage **v37; // ebp
  NiD3DTextureStage *v38; // eax
  NiD3DTextureStage **v39; // ebp
  NiD3DTextureStage *v40; // eax
  NiD3DTextureStage **v41; // ebp
  NiD3DTextureStage *v42; // eax
  NiD3DTextureStage **v43; // ebp
  NiD3DTextureStage *v44; // eax
  NiD3DTextureStage **v45; // ebp
  NiD3DTextureStage *v46; // eax
  NiD3DTextureStage **v47; // ebp
  NiD3DTextureStage *v48; // eax
  int v49; // ebx
  int v50; // ebp
  int v51; // ebx
  int v52; // ebp
  NiD3DTextureStage **v53; // ebp
  NiD3DTextureStage *v54; // eax
  NiD3DTextureStage **v55; // ebp
  NiD3DTextureStage *v56; // eax
  NiD3DTextureStage **v57; // ebp
  NiD3DTextureStage *v58; // eax
  NiD3DTextureStage **v59; // ebp
  NiD3DTextureStage *v60; // eax
  NiD3DTextureStage **v61; // ebp
  NiD3DTextureStage *v62; // eax
  NiD3DTextureStage **v63; // ebp
  NiD3DTextureStage *v64; // eax
  int v65; // ebx
  int v66; // ebp
  int v67; // ebx
  int v68; // ebp
  NiD3DTextureStage **v69; // ebp
  NiD3DTextureStage *v70; // eax
  NiD3DTextureStage **v71; // ebp
  NiD3DTextureStage *v72; // eax
  NiD3DTextureStage **v73; // ebp
  NiD3DTextureStage *v74; // eax
  NiD3DTextureStage **v75; // ebp
  NiD3DTextureStage *v76; // eax
  NiD3DTextureStage **v77; // ebp
  NiD3DTextureStage *v78; // eax
  NiD3DTextureStage **v79; // ebp
  NiD3DTextureStage *v80; // eax
  int v81; // ebx
  int v82; // ebp
  int v83; // ebx
  int v84; // ebp
  NiD3DTextureStage **v85; // ebp
  NiD3DTextureStage *v86; // eax
  NiD3DTextureStage **v87; // ebp
  NiD3DTextureStage *v88; // eax
  NiD3DTextureStage **v89; // ebp
  NiD3DTextureStage *v90; // eax
  NiD3DTextureStage **v91; // ebp
  NiD3DTextureStage *v92; // eax
  NiD3DTextureStage **v93; // ebp
  NiD3DTextureStage *v94; // eax
  NiD3DTextureStage **v95; // ebp
  NiD3DTextureStage *v96; // eax
  int v97; // ebx
  int v98; // ebp
  int v99; // ebx
  int v100; // ebp
  NiD3DTextureStage *v102; // [esp+34h] [ebp-10h] BYREF
  unsigned int v103; // [esp+40h] [ebp-4h]

  v1 = 0; /*0x871c5b*/
  v2 = 0; /*0x871c5d*/
  v103 = 0; /*0x871c63*/
  v3 = unk_B476F8; /*0x871c6b*/
  v4 = unk_B476F8 == 0; /*0x871c70*/
  LOBYTE(v103) = 1; /*0x871c77*/
  if ( !v4 ) /*0x871c7b*/
  {
    v1 = v3; /*0x871c7d*/
    if ( v3 ) /*0x871c85*/
      ++*(_DWORD *)(v3 + 0x60); /*0x871c87*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 6u ) /*0x871c93*/
  {
    v5 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v102); /*0x871ca6*/
    if ( v5 ) /*0x871caa*/
    {
      v2 = v5; /*0x871cac*/
      ++v5[7].Unk08; /*0x871cae*/
    }
    v6 = v102; /*0x871cb5*/
    LOBYTE(v103) = 1; /*0x871cbb*/
    if ( v102 ) /*0x871cc0*/
    {
      --v102[7].Unk08; /*0x871cc2*/
      if ( !v6[7].Unk08 ) /*0x871cca*/
        sub_772560(v6); /*0x871ccf*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x871cdb*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x871cea*/
    v7 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x871cfc*/
    v4 = v2 == *v7; /*0x871cfe*/
    LOBYTE(v103) = 3; /*0x871d00*/
    if ( !v4 ) /*0x871d05*/
    {
      if ( v2 ) /*0x871d09*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x871d0b*/
        if ( v4 ) /*0x871d0e*/
          sub_772560(v2); /*0x871d12*/
      }
      v2 = *v7; /*0x871d17*/
      if ( *v7 ) /*0x871d1b*/
        ++v2[7].Unk08; /*0x871d21*/
    }
    v8 = v102; /*0x871d25*/
    LOBYTE(v103) = 1; /*0x871d2b*/
    if ( v102 ) /*0x871d30*/
    {
      --v102[7].Unk08; /*0x871d32*/
      if ( !v8[7].Unk08 ) /*0x871d3a*/
        sub_772560(v8); /*0x871d3f*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x871d4b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x871d5a*/
    v9 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x871d6c*/
    v4 = v2 == *v9; /*0x871d6e*/
    LOBYTE(v103) = 4; /*0x871d70*/
    if ( !v4 ) /*0x871d75*/
    {
      if ( v2 ) /*0x871d79*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x871d7b*/
        if ( v4 ) /*0x871d7e*/
          sub_772560(v2); /*0x871d82*/
      }
      v2 = *v9; /*0x871d87*/
      if ( *v9 ) /*0x871d8b*/
        ++v2[7].Unk08; /*0x871d91*/
    }
    v10 = v102; /*0x871d95*/
    LOBYTE(v103) = 1; /*0x871d9b*/
    if ( v102 ) /*0x871da0*/
    {
      --v102[7].Unk08; /*0x871da2*/
      if ( !v10[7].Unk08 ) /*0x871daa*/
        sub_772560(v10); /*0x871daf*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x871dbb*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x871dca*/
    v11 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x871ddc*/
    v4 = v2 == *v11; /*0x871dde*/
    LOBYTE(v103) = 5; /*0x871de0*/
    if ( !v4 ) /*0x871de5*/
    {
      if ( v2 ) /*0x871de9*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x871deb*/
        if ( v4 ) /*0x871dee*/
          sub_772560(v2); /*0x871df2*/
      }
      v2 = *v11; /*0x871df7*/
      if ( *v11 ) /*0x871dfb*/
        ++v2[7].Unk08; /*0x871e01*/
    }
    v12 = v102; /*0x871e05*/
    LOBYTE(v103) = 1; /*0x871e0b*/
    if ( v102 ) /*0x871e10*/
    {
      --v102[7].Unk08; /*0x871e12*/
      if ( !v12[7].Unk08 ) /*0x871e1a*/
        sub_772560(v12); /*0x871e1f*/
    }
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x871e2d*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 0); /*0x871e39*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x871e48*/
    v13 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x871e5a*/
    v4 = v2 == *v13; /*0x871e5c*/
    LOBYTE(v103) = 6; /*0x871e5e*/
    if ( !v4 ) /*0x871e63*/
    {
      if ( v2 ) /*0x871e67*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x871e69*/
        if ( v4 ) /*0x871e6c*/
          sub_772560(v2); /*0x871e70*/
      }
      v2 = *v13; /*0x871e75*/
      if ( *v13 ) /*0x871e79*/
        ++v2[7].Unk08; /*0x871e7f*/
    }
    v14 = v102; /*0x871e83*/
    LOBYTE(v103) = 1; /*0x871e89*/
    if ( v102 ) /*0x871e8e*/
    {
      --v102[7].Unk08; /*0x871e90*/
      if ( !v14[7].Unk08 ) /*0x871e98*/
        sub_772560(v14); /*0x871e9d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x871ea9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x871eb8*/
    v15 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x871eca*/
    v4 = v2 == *v15; /*0x871ecc*/
    LOBYTE(v103) = 7; /*0x871ece*/
    if ( !v4 ) /*0x871ed3*/
    {
      if ( v2 ) /*0x871ed7*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x871ed9*/
        if ( v4 ) /*0x871edc*/
          sub_772560(v2); /*0x871ee0*/
      }
      v2 = *v15; /*0x871ee5*/
      if ( *v15 ) /*0x871ee9*/
        ++v2[7].Unk08; /*0x871eef*/
    }
    v16 = v102; /*0x871ef3*/
    LOBYTE(v103) = 1; /*0x871ef9*/
    if ( v102 ) /*0x871efe*/
    {
      --v102[7].Unk08; /*0x871f00*/
      if ( !v16[7].Unk08 ) /*0x871f08*/
        sub_772560(v16); /*0x871f0d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x871f19*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x871f28*/
  }
  v17 = (int)*(this + 0x45); /*0x871f31*/
  v18 = *(_DWORD *)(v1 + 0x58); /*0x871f37*/
  if ( v18 != v17 ) /*0x871f3c*/
  {
    if ( v18 ) /*0x871f40*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x871f46*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x871f5d*/
    }
    *(_DWORD *)(v1 + 0x58) = v17; /*0x871f61*/
    if ( v17 ) /*0x871f64*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x871f6a*/
  }
  v19 = (int)*(this + 0x62); /*0x871f74*/
  v20 = *(_DWORD *)(v1 + 0x44); /*0x871f7a*/
  if ( v20 != v19 ) /*0x871f7f*/
  {
    if ( v20 ) /*0x871f83*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x871f89*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x871fa0*/
    }
    *(_DWORD *)(v1 + 0x44) = v19; /*0x871fa4*/
    if ( v19 ) /*0x871fa7*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x871fad*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x871fb3*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871fbe*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 1u, 0); /*0x871fca*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x871fcf*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871fda*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x13u, 2u, 0); /*0x871fe6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x871feb*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871ff6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x14u, 2u, 0); /*0x872002*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872007*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872012*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x87201e*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872023*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87202e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x87203a*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87203f*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87204a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 3u, 0); /*0x872056*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87205b*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872066*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 0, 0); /*0x872072*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872077*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872082*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x87208e*/
  v4 = v1 == unk_B476FC; /*0x872096*/
  unk_B43F7C = 0x20082; /*0x87209c*/
  unk_B4460C = 0x108; /*0x8720a6*/
  if ( !v4 ) /*0x8720b0*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x8720b2*/
    if ( v4 ) /*0x8720b5*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x8720b9*/
    v1 = unk_B476FC; /*0x8720be*/
    if ( unk_B476FC ) /*0x8720c6*/
      ++*(_DWORD *)(v1 + 0x60); /*0x8720cc*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 6u ) /*0x8720d4*/
  {
    v21 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x8720e7*/
    v4 = v2 == *v21; /*0x8720e9*/
    LOBYTE(v103) = 8; /*0x8720ec*/
    if ( !v4 ) /*0x8720f1*/
    {
      if ( v2 ) /*0x8720f5*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8720f7*/
        if ( v4 ) /*0x8720fa*/
          sub_772560(v2); /*0x8720fe*/
      }
      v2 = *v21; /*0x872103*/
      if ( *v21 ) /*0x872108*/
        ++v2[7].Unk08; /*0x87210e*/
    }
    v22 = v102; /*0x872112*/
    LOBYTE(v103) = 1; /*0x872118*/
    if ( v102 ) /*0x87211d*/
    {
      --v102[7].Unk08; /*0x87211f*/
      if ( !v22[7].Unk08 ) /*0x872127*/
        sub_772560(v22); /*0x87212c*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x872138*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872147*/
    v23 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872159*/
    v4 = v2 == *v23; /*0x87215b*/
    LOBYTE(v103) = 9; /*0x87215e*/
    if ( !v4 ) /*0x872163*/
    {
      if ( v2 ) /*0x872167*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872169*/
        if ( v4 ) /*0x87216c*/
          sub_772560(v2); /*0x872170*/
      }
      v2 = *v23; /*0x872175*/
      if ( *v23 ) /*0x87217a*/
        ++v2[7].Unk08; /*0x872180*/
    }
    v24 = v102; /*0x872184*/
    LOBYTE(v103) = 1; /*0x87218a*/
    if ( v102 ) /*0x87218f*/
    {
      --v102[7].Unk08; /*0x872191*/
      if ( !v24[7].Unk08 ) /*0x872199*/
        sub_772560(v24); /*0x87219e*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x8721aa*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x8721b9*/
    v25 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x8721cb*/
    v4 = v2 == *v25; /*0x8721cd*/
    LOBYTE(v103) = 0xA; /*0x8721d0*/
    if ( !v4 ) /*0x8721d5*/
    {
      if ( v2 ) /*0x8721d9*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8721db*/
        if ( v4 ) /*0x8721de*/
          sub_772560(v2); /*0x8721e2*/
      }
      v2 = *v25; /*0x8721e7*/
      if ( *v25 ) /*0x8721ec*/
        ++v2[7].Unk08; /*0x8721f2*/
    }
    v26 = v102; /*0x8721f6*/
    LOBYTE(v103) = 1; /*0x8721fc*/
    if ( v102 ) /*0x872201*/
    {
      --v102[7].Unk08; /*0x872203*/
      if ( !v26[7].Unk08 ) /*0x87220b*/
        sub_772560(v26); /*0x872210*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x87221c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x87222b*/
    v27 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x87223d*/
    v4 = v2 == *v27; /*0x87223f*/
    LOBYTE(v103) = 0xB; /*0x872242*/
    if ( !v4 ) /*0x872247*/
    {
      if ( v2 ) /*0x87224b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87224d*/
        if ( v4 ) /*0x872250*/
          sub_772560(v2); /*0x872254*/
      }
      v2 = *v27; /*0x872259*/
      if ( *v27 ) /*0x87225e*/
        ++v2[7].Unk08; /*0x872264*/
    }
    v28 = v102; /*0x872268*/
    LOBYTE(v103) = 1; /*0x87226e*/
    if ( v102 ) /*0x872273*/
    {
      --v102[7].Unk08; /*0x872275*/
      if ( !v28[7].Unk08 ) /*0x87227d*/
        sub_772560(v28); /*0x872282*/
    }
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x872290*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 0); /*0x87229c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x8722ab*/
    v29 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x8722bd*/
    v4 = v2 == *v29; /*0x8722bf*/
    LOBYTE(v103) = 0xC; /*0x8722c2*/
    if ( !v4 ) /*0x8722c7*/
    {
      if ( v2 ) /*0x8722cb*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8722cd*/
        if ( v4 ) /*0x8722d0*/
          sub_772560(v2); /*0x8722d4*/
      }
      v2 = *v29; /*0x8722d9*/
      if ( *v29 ) /*0x8722de*/
        ++v2[7].Unk08; /*0x8722e4*/
    }
    v30 = v102; /*0x8722e8*/
    LOBYTE(v103) = 1; /*0x8722ee*/
    if ( v102 ) /*0x8722f3*/
    {
      --v102[7].Unk08; /*0x8722f5*/
      if ( !v30[7].Unk08 ) /*0x8722fd*/
        sub_772560(v30); /*0x872302*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x87230e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x87231d*/
    v31 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x87232f*/
    v4 = v2 == *v31; /*0x872331*/
    LOBYTE(v103) = 0xD; /*0x872334*/
    if ( !v4 ) /*0x872339*/
    {
      if ( v2 ) /*0x87233d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87233f*/
        if ( v4 ) /*0x872342*/
          sub_772560(v2); /*0x872346*/
      }
      v2 = *v31; /*0x87234b*/
      if ( *v31 ) /*0x872350*/
        ++v2[7].Unk08; /*0x872356*/
    }
    v32 = v102; /*0x87235a*/
    LOBYTE(v103) = 1; /*0x872360*/
    if ( v102 ) /*0x872365*/
    {
      --v102[7].Unk08; /*0x872367*/
      if ( !v32[7].Unk08 ) /*0x87236f*/
        sub_772560(v32); /*0x872374*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x872380*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x87238f*/
  }
  v33 = (int)*(this + 0x46); /*0x872398*/
  v34 = *(_DWORD *)(v1 + 0x58); /*0x87239e*/
  if ( v34 != v33 ) /*0x8723a3*/
  {
    if ( v34 ) /*0x8723a7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v34 + 4)) ) /*0x8723ad*/
        (**(void (__thiscall ***)(int, int))v34)(v34, 1); /*0x8723c4*/
    }
    *(_DWORD *)(v1 + 0x58) = v33; /*0x8723c8*/
    if ( v33 ) /*0x8723cb*/
      InterlockedIncrement((volatile LONG *)(v33 + 4)); /*0x8723d1*/
  }
  v35 = (int)*(this + 0x62); /*0x8723db*/
  v36 = *(_DWORD *)(v1 + 0x44); /*0x8723e1*/
  if ( v36 != v35 ) /*0x8723e6*/
  {
    if ( v36 ) /*0x8723ea*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) ) /*0x8723f0*/
        (**(void (__thiscall ***)(int, int))v36)(v36, 1); /*0x872407*/
    }
    *(_DWORD *)(v1 + 0x44) = v35; /*0x87240b*/
    if ( v35 ) /*0x87240e*/
      InterlockedIncrement((volatile LONG *)(v35 + 4)); /*0x872414*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87241a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872425*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 1u, 0); /*0x872431*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872436*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872441*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x13u, 2u, 0); /*0x87244d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872452*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87245d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x14u, 2u, 0); /*0x872469*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87246e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872479*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x872485*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87248a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872495*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8724a1*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8724a6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8724b1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 3u, 0); /*0x8724bd*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8724c2*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8724cd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 0, 0); /*0x8724d9*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8724de*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8724e9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x8724f5*/
  v4 = v1 == unk_B47700; /*0x8724fd*/
  unk_B43F88 = 0x60088; /*0x872503*/
  unk_B44618 = 0x108; /*0x87250d*/
  if ( !v4 ) /*0x872517*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x872519*/
    if ( v4 ) /*0x87251c*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x872520*/
    v1 = unk_B47700; /*0x872525*/
    if ( unk_B47700 ) /*0x87252d*/
      ++*(_DWORD *)(v1 + 0x60); /*0x872533*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 6u ) /*0x87253b*/
  {
    v37 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x87254e*/
    v4 = v2 == *v37; /*0x872550*/
    LOBYTE(v103) = 0xE; /*0x872553*/
    if ( !v4 ) /*0x872558*/
    {
      if ( v2 ) /*0x87255c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x87255e*/
        if ( v4 ) /*0x872561*/
          sub_772560(v2); /*0x872565*/
      }
      v2 = *v37; /*0x87256a*/
      if ( *v37 ) /*0x87256f*/
        ++v2[7].Unk08; /*0x872575*/
    }
    v38 = v102; /*0x872579*/
    LOBYTE(v103) = 1; /*0x87257f*/
    if ( v102 ) /*0x872584*/
    {
      --v102[7].Unk08; /*0x872586*/
      if ( !v38[7].Unk08 ) /*0x87258e*/
        sub_772560(v38); /*0x872593*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x87259f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x8725ae*/
    v39 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x8725c0*/
    v4 = v2 == *v39; /*0x8725c2*/
    LOBYTE(v103) = 0xF; /*0x8725c5*/
    if ( !v4 ) /*0x8725ca*/
    {
      if ( v2 ) /*0x8725ce*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8725d0*/
        if ( v4 ) /*0x8725d3*/
          sub_772560(v2); /*0x8725d7*/
      }
      v2 = *v39; /*0x8725dc*/
      if ( *v39 ) /*0x8725e1*/
        ++v2[7].Unk08; /*0x8725e7*/
    }
    v40 = v102; /*0x8725eb*/
    LOBYTE(v103) = 1; /*0x8725f1*/
    if ( v102 ) /*0x8725f6*/
    {
      --v102[7].Unk08; /*0x8725f8*/
      if ( !v40[7].Unk08 ) /*0x872600*/
        sub_772560(v40); /*0x872605*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x872611*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872620*/
    v41 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872632*/
    v4 = v2 == *v41; /*0x872634*/
    LOBYTE(v103) = 0x10; /*0x872637*/
    if ( !v4 ) /*0x87263c*/
    {
      if ( v2 ) /*0x872640*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872642*/
        if ( v4 ) /*0x872645*/
          sub_772560(v2); /*0x872649*/
      }
      v2 = *v41; /*0x87264e*/
      if ( *v41 ) /*0x872653*/
        ++v2[7].Unk08; /*0x872659*/
    }
    v42 = v102; /*0x87265d*/
    LOBYTE(v103) = 1; /*0x872663*/
    if ( v102 ) /*0x872668*/
    {
      --v102[7].Unk08; /*0x87266a*/
      if ( !v42[7].Unk08 ) /*0x872672*/
        sub_772560(v42); /*0x872677*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x872683*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872692*/
    v43 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x8726a4*/
    v4 = v2 == *v43; /*0x8726a6*/
    LOBYTE(v103) = 0x11; /*0x8726a9*/
    if ( !v4 ) /*0x8726ae*/
    {
      if ( v2 ) /*0x8726b2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8726b4*/
        if ( v4 ) /*0x8726b7*/
          sub_772560(v2); /*0x8726bb*/
      }
      v2 = *v43; /*0x8726c0*/
      if ( *v43 ) /*0x8726c5*/
        ++v2[7].Unk08; /*0x8726cb*/
    }
    v44 = v102; /*0x8726cf*/
    LOBYTE(v103) = 1; /*0x8726d5*/
    if ( v102 ) /*0x8726da*/
    {
      --v102[7].Unk08; /*0x8726dc*/
      if ( !v44[7].Unk08 ) /*0x8726e4*/
        sub_772560(v44); /*0x8726e9*/
    }
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8726f7*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 0); /*0x872703*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872712*/
    v45 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872724*/
    v4 = v2 == *v45; /*0x872726*/
    LOBYTE(v103) = 0x12; /*0x872729*/
    if ( !v4 ) /*0x87272e*/
    {
      if ( v2 ) /*0x872732*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872734*/
        if ( v4 ) /*0x872737*/
          sub_772560(v2); /*0x87273b*/
      }
      v2 = *v45; /*0x872740*/
      if ( *v45 ) /*0x872745*/
        ++v2[7].Unk08; /*0x87274b*/
    }
    v46 = v102; /*0x87274f*/
    LOBYTE(v103) = 1; /*0x872755*/
    if ( v102 ) /*0x87275a*/
    {
      --v102[7].Unk08; /*0x87275c*/
      if ( !v46[7].Unk08 ) /*0x872764*/
        sub_772560(v46); /*0x872769*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x872775*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872784*/
    v47 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872796*/
    v4 = v2 == *v47; /*0x872798*/
    LOBYTE(v103) = 0x13; /*0x87279b*/
    if ( !v4 ) /*0x8727a0*/
    {
      if ( v2 ) /*0x8727a4*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8727a6*/
        if ( v4 ) /*0x8727a9*/
          sub_772560(v2); /*0x8727ad*/
      }
      v2 = *v47; /*0x8727b2*/
      if ( *v47 ) /*0x8727b7*/
        ++v2[7].Unk08; /*0x8727bd*/
    }
    v48 = v102; /*0x8727c1*/
    LOBYTE(v103) = 1; /*0x8727c7*/
    if ( v102 ) /*0x8727cc*/
    {
      --v102[7].Unk08; /*0x8727ce*/
      if ( !v48[7].Unk08 ) /*0x8727d6*/
        sub_772560(v48); /*0x8727db*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x8727e7*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x8727f6*/
  }
  v49 = (int)*(this + 0x47); /*0x8727ff*/
  v50 = *(_DWORD *)(v1 + 0x58); /*0x872805*/
  if ( v50 != v49 ) /*0x87280a*/
  {
    if ( v50 ) /*0x87280e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v50 + 4)) ) /*0x872814*/
        (**(void (__thiscall ***)(int, int))v50)(v50, 1); /*0x87282b*/
    }
    *(_DWORD *)(v1 + 0x58) = v49; /*0x87282f*/
    if ( v49 ) /*0x872832*/
      InterlockedIncrement((volatile LONG *)(v49 + 4)); /*0x872838*/
  }
  v51 = (int)*(this + 0x63); /*0x872842*/
  v52 = *(_DWORD *)(v1 + 0x44); /*0x872848*/
  if ( v52 != v51 ) /*0x87284d*/
  {
    if ( v52 ) /*0x872851*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v52 + 4)) ) /*0x872857*/
        (**(void (__thiscall ***)(int, int))v52)(v52, 1); /*0x87286e*/
    }
    *(_DWORD *)(v1 + 0x44) = v51; /*0x872872*/
    if ( v51 ) /*0x872875*/
      InterlockedIncrement((volatile LONG *)(v51 + 4)); /*0x87287b*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872881*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87288c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 1u, 0); /*0x872898*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87289d*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8728a8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x13u, 2u, 0); /*0x8728b4*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8728b9*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8728c4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x14u, 2u, 0); /*0x8728d0*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8728d5*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8728e0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x8728ec*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8728f1*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8728fc*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x872908*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87290d*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872918*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 3u, 0); /*0x872924*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872929*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872934*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 0, 0); /*0x872940*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872945*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872950*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x87295c*/
  v4 = v1 == unk_B47704; /*0x872964*/
  unk_B43F98 = 0x200F2; /*0x87296a*/
  unk_B44628 = 0x108; /*0x872974*/
  if ( !v4 ) /*0x87297e*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x872980*/
    if ( v4 ) /*0x872983*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x872987*/
    v1 = unk_B47704; /*0x87298c*/
    if ( unk_B47704 ) /*0x872994*/
      ++*(_DWORD *)(v1 + 0x60); /*0x87299a*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 6u ) /*0x8729a2*/
  {
    v53 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x8729b5*/
    v4 = v2 == *v53; /*0x8729b7*/
    LOBYTE(v103) = 0x14; /*0x8729ba*/
    if ( !v4 ) /*0x8729bf*/
    {
      if ( v2 ) /*0x8729c3*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8729c5*/
        if ( v4 ) /*0x8729c8*/
          sub_772560(v2); /*0x8729cc*/
      }
      v2 = *v53; /*0x8729d1*/
      if ( *v53 ) /*0x8729d6*/
        ++v2[7].Unk08; /*0x8729dc*/
    }
    v54 = v102; /*0x8729e0*/
    LOBYTE(v103) = 1; /*0x8729e6*/
    if ( v102 ) /*0x8729eb*/
    {
      --v102[7].Unk08; /*0x8729ed*/
      if ( !v54[7].Unk08 ) /*0x8729f5*/
        sub_772560(v54); /*0x8729fa*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x872a06*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872a15*/
    v55 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872a27*/
    v4 = v2 == *v55; /*0x872a29*/
    LOBYTE(v103) = 0x15; /*0x872a2c*/
    if ( !v4 ) /*0x872a31*/
    {
      if ( v2 ) /*0x872a35*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872a37*/
        if ( v4 ) /*0x872a3a*/
          sub_772560(v2); /*0x872a3e*/
      }
      v2 = *v55; /*0x872a43*/
      if ( *v55 ) /*0x872a48*/
        ++v2[7].Unk08; /*0x872a4e*/
    }
    v56 = v102; /*0x872a52*/
    LOBYTE(v103) = 1; /*0x872a58*/
    if ( v102 ) /*0x872a5d*/
    {
      --v102[7].Unk08; /*0x872a5f*/
      if ( !v56[7].Unk08 ) /*0x872a67*/
        sub_772560(v56); /*0x872a6c*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x872a78*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872a87*/
    v57 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872a99*/
    v4 = v2 == *v57; /*0x872a9b*/
    LOBYTE(v103) = 0x16; /*0x872a9e*/
    if ( !v4 ) /*0x872aa3*/
    {
      if ( v2 ) /*0x872aa7*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872aa9*/
        if ( v4 ) /*0x872aac*/
          sub_772560(v2); /*0x872ab0*/
      }
      v2 = *v57; /*0x872ab5*/
      if ( *v57 ) /*0x872aba*/
        ++v2[7].Unk08; /*0x872ac0*/
    }
    v58 = v102; /*0x872ac4*/
    LOBYTE(v103) = 1; /*0x872aca*/
    if ( v102 ) /*0x872acf*/
    {
      --v102[7].Unk08; /*0x872ad1*/
      if ( !v58[7].Unk08 ) /*0x872ad9*/
        sub_772560(v58); /*0x872ade*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x872aea*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872af9*/
    v59 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872b0b*/
    v4 = v2 == *v59; /*0x872b0d*/
    LOBYTE(v103) = 0x17; /*0x872b10*/
    if ( !v4 ) /*0x872b15*/
    {
      if ( v2 ) /*0x872b19*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872b1b*/
        if ( v4 ) /*0x872b1e*/
          sub_772560(v2); /*0x872b22*/
      }
      v2 = *v59; /*0x872b27*/
      if ( *v59 ) /*0x872b2c*/
        ++v2[7].Unk08; /*0x872b32*/
    }
    v60 = v102; /*0x872b36*/
    LOBYTE(v103) = 1; /*0x872b3c*/
    if ( v102 ) /*0x872b41*/
    {
      --v102[7].Unk08; /*0x872b43*/
      if ( !v60[7].Unk08 ) /*0x872b4b*/
        sub_772560(v60); /*0x872b50*/
    }
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x872b5e*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 0); /*0x872b6a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872b79*/
    v61 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872b8b*/
    v4 = v2 == *v61; /*0x872b8d*/
    LOBYTE(v103) = 0x18; /*0x872b90*/
    if ( !v4 ) /*0x872b95*/
    {
      if ( v2 ) /*0x872b99*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872b9b*/
        if ( v4 ) /*0x872b9e*/
          sub_772560(v2); /*0x872ba2*/
      }
      v2 = *v61; /*0x872ba7*/
      if ( *v61 ) /*0x872bac*/
        ++v2[7].Unk08; /*0x872bb2*/
    }
    v62 = v102; /*0x872bb6*/
    LOBYTE(v103) = 1; /*0x872bbc*/
    if ( v102 ) /*0x872bc1*/
    {
      --v102[7].Unk08; /*0x872bc3*/
      if ( !v62[7].Unk08 ) /*0x872bcb*/
        sub_772560(v62); /*0x872bd0*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x872bdc*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872beb*/
    v63 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872bfd*/
    v4 = v2 == *v63; /*0x872bff*/
    LOBYTE(v103) = 0x19; /*0x872c02*/
    if ( !v4 ) /*0x872c07*/
    {
      if ( v2 ) /*0x872c0b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872c0d*/
        if ( v4 ) /*0x872c10*/
          sub_772560(v2); /*0x872c14*/
      }
      v2 = *v63; /*0x872c19*/
      if ( *v63 ) /*0x872c1e*/
        ++v2[7].Unk08; /*0x872c24*/
    }
    v64 = v102; /*0x872c28*/
    LOBYTE(v103) = 1; /*0x872c2e*/
    if ( v102 ) /*0x872c33*/
    {
      --v102[7].Unk08; /*0x872c35*/
      if ( !v64[7].Unk08 ) /*0x872c3d*/
        sub_772560(v64); /*0x872c42*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x872c4e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872c5d*/
  }
  v65 = (int)*(this + 0x48); /*0x872c66*/
  v66 = *(_DWORD *)(v1 + 0x58); /*0x872c6c*/
  if ( v66 != v65 ) /*0x872c71*/
  {
    if ( v66 ) /*0x872c75*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v66 + 4)) ) /*0x872c7b*/
        (**(void (__thiscall ***)(int, int))v66)(v66, 1); /*0x872c92*/
    }
    *(_DWORD *)(v1 + 0x58) = v65; /*0x872c96*/
    if ( v65 ) /*0x872c99*/
      InterlockedIncrement((volatile LONG *)(v65 + 4)); /*0x872c9f*/
  }
  v67 = (int)*(this + 0x63); /*0x872ca9*/
  v68 = *(_DWORD *)(v1 + 0x44); /*0x872caf*/
  if ( v68 != v67 ) /*0x872cb4*/
  {
    if ( v68 ) /*0x872cb8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v68 + 4)) ) /*0x872cbe*/
        (**(void (__thiscall ***)(int, int))v68)(v68, 1); /*0x872cd5*/
    }
    *(_DWORD *)(v1 + 0x44) = v67; /*0x872cd9*/
    if ( v67 ) /*0x872cdc*/
      InterlockedIncrement((volatile LONG *)(v67 + 4)); /*0x872ce2*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872ce8*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872cf3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 1u, 0); /*0x872cff*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872d04*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872d0f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x13u, 2u, 0); /*0x872d1b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872d20*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872d2b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x14u, 2u, 0); /*0x872d37*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872d3c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872d47*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x872d53*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872d58*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872d63*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x872d6f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872d74*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872d7f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 3u, 0); /*0x872d8b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872d90*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872d9b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 0, 0); /*0x872da7*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x872dac*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x872db7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x872dc3*/
  v4 = v1 == unk_B47708; /*0x872dcb*/
  unk_B43FA4 = 0x600F8; /*0x872dd1*/
  unk_B44634 = 0x108; /*0x872ddb*/
  if ( !v4 ) /*0x872de5*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x872de7*/
    if ( v4 ) /*0x872dea*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x872dee*/
    v1 = unk_B47708; /*0x872df3*/
    if ( unk_B47708 ) /*0x872dfb*/
      ++*(_DWORD *)(v1 + 0x60); /*0x872e01*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 6u ) /*0x872e09*/
  {
    v69 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872e1c*/
    v4 = v2 == *v69; /*0x872e1e*/
    LOBYTE(v103) = 0x1A; /*0x872e21*/
    if ( !v4 ) /*0x872e26*/
    {
      if ( v2 ) /*0x872e2a*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872e2c*/
        if ( v4 ) /*0x872e2f*/
          sub_772560(v2); /*0x872e33*/
      }
      v2 = *v69; /*0x872e38*/
      if ( *v69 ) /*0x872e3d*/
        ++v2[7].Unk08; /*0x872e43*/
    }
    v70 = v102; /*0x872e47*/
    LOBYTE(v103) = 1; /*0x872e4d*/
    if ( v102 ) /*0x872e52*/
    {
      --v102[7].Unk08; /*0x872e54*/
      if ( !v70[7].Unk08 ) /*0x872e5c*/
        sub_772560(v70); /*0x872e61*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x872e6d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872e7c*/
    v71 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872e8e*/
    v4 = v2 == *v71; /*0x872e90*/
    LOBYTE(v103) = 0x1B; /*0x872e93*/
    if ( !v4 ) /*0x872e98*/
    {
      if ( v2 ) /*0x872e9c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872e9e*/
        if ( v4 ) /*0x872ea1*/
          sub_772560(v2); /*0x872ea5*/
      }
      v2 = *v71; /*0x872eaa*/
      if ( *v71 ) /*0x872eaf*/
        ++v2[7].Unk08; /*0x872eb5*/
    }
    v72 = v102; /*0x872eb9*/
    LOBYTE(v103) = 1; /*0x872ebf*/
    if ( v102 ) /*0x872ec4*/
    {
      --v102[7].Unk08; /*0x872ec6*/
      if ( !v72[7].Unk08 ) /*0x872ece*/
        sub_772560(v72); /*0x872ed3*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x872edf*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872eee*/
    v73 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872f00*/
    v4 = v2 == *v73; /*0x872f02*/
    LOBYTE(v103) = 0x1C; /*0x872f05*/
    if ( !v4 ) /*0x872f0a*/
    {
      if ( v2 ) /*0x872f0e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872f10*/
        if ( v4 ) /*0x872f13*/
          sub_772560(v2); /*0x872f17*/
      }
      v2 = *v73; /*0x872f1c*/
      if ( *v73 ) /*0x872f21*/
        ++v2[7].Unk08; /*0x872f27*/
    }
    v74 = v102; /*0x872f2b*/
    LOBYTE(v103) = 1; /*0x872f31*/
    if ( v102 ) /*0x872f36*/
    {
      --v102[7].Unk08; /*0x872f38*/
      if ( !v74[7].Unk08 ) /*0x872f40*/
        sub_772560(v74); /*0x872f45*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x872f51*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872f60*/
    v75 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872f72*/
    v4 = v2 == *v75; /*0x872f74*/
    LOBYTE(v103) = 0x1D; /*0x872f77*/
    if ( !v4 ) /*0x872f7c*/
    {
      if ( v2 ) /*0x872f80*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x872f82*/
        if ( v4 ) /*0x872f85*/
          sub_772560(v2); /*0x872f89*/
      }
      v2 = *v75; /*0x872f8e*/
      if ( *v75 ) /*0x872f93*/
        ++v2[7].Unk08; /*0x872f99*/
    }
    v76 = v102; /*0x872f9d*/
    LOBYTE(v103) = 1; /*0x872fa3*/
    if ( v102 ) /*0x872fa8*/
    {
      --v102[7].Unk08; /*0x872faa*/
      if ( !v76[7].Unk08 ) /*0x872fb2*/
        sub_772560(v76); /*0x872fb7*/
    }
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x872fc5*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 0); /*0x872fd1*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x872fe0*/
    v77 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x872ff2*/
    v4 = v2 == *v77; /*0x872ff4*/
    LOBYTE(v103) = 0x1E; /*0x872ff7*/
    if ( !v4 ) /*0x872ffc*/
    {
      if ( v2 ) /*0x873000*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x873002*/
        if ( v4 ) /*0x873005*/
          sub_772560(v2); /*0x873009*/
      }
      v2 = *v77; /*0x87300e*/
      if ( *v77 ) /*0x873013*/
        ++v2[7].Unk08; /*0x873019*/
    }
    v78 = v102; /*0x87301d*/
    LOBYTE(v103) = 1; /*0x873023*/
    if ( v102 ) /*0x873028*/
    {
      --v102[7].Unk08; /*0x87302a*/
      if ( !v78[7].Unk08 ) /*0x873032*/
        sub_772560(v78); /*0x873037*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x873043*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x873052*/
    v79 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x873064*/
    v4 = v2 == *v79; /*0x873066*/
    LOBYTE(v103) = 0x1F; /*0x873069*/
    if ( !v4 ) /*0x87306e*/
    {
      if ( v2 ) /*0x873072*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x873074*/
        if ( v4 ) /*0x873077*/
          sub_772560(v2); /*0x87307b*/
      }
      v2 = *v79; /*0x873080*/
      if ( *v79 ) /*0x873085*/
        ++v2[7].Unk08; /*0x87308b*/
    }
    v80 = v102; /*0x87308f*/
    LOBYTE(v103) = 1; /*0x873095*/
    if ( v102 ) /*0x87309a*/
    {
      --v102[7].Unk08; /*0x87309c*/
      if ( !v80[7].Unk08 ) /*0x8730a4*/
        sub_772560(v80); /*0x8730a9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x8730b5*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x8730c4*/
  }
  v81 = (int)*(this + 0x49); /*0x8730cd*/
  v82 = *(_DWORD *)(v1 + 0x58); /*0x8730d3*/
  if ( v82 != v81 ) /*0x8730d8*/
  {
    if ( v82 ) /*0x8730dc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v82 + 4)) ) /*0x8730e2*/
        (**(void (__thiscall ***)(int, int))v82)(v82, 1); /*0x8730f9*/
    }
    *(_DWORD *)(v1 + 0x58) = v81; /*0x8730fd*/
    if ( v81 ) /*0x873100*/
      InterlockedIncrement((volatile LONG *)(v81 + 4)); /*0x873106*/
  }
  v83 = (int)*(this + 0x64); /*0x873110*/
  v84 = *(_DWORD *)(v1 + 0x44); /*0x873116*/
  if ( v84 != v83 ) /*0x87311b*/
  {
    if ( v84 ) /*0x87311f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v84 + 4)) ) /*0x873125*/
        (**(void (__thiscall ***)(int, int))v84)(v84, 1); /*0x87313c*/
    }
    *(_DWORD *)(v1 + 0x44) = v83; /*0x873140*/
    if ( v83 ) /*0x873143*/
      InterlockedIncrement((volatile LONG *)(v83 + 4)); /*0x873149*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87314f*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87315a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 1u, 0); /*0x873166*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87316b*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x873176*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x13u, 2u, 0); /*0x873182*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x873187*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x873192*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x14u, 2u, 0); /*0x87319e*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8731a3*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8731ae*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x8731ba*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8731bf*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8731ca*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8731d6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8731db*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8731e6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 3u, 0); /*0x8731f2*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8731f7*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x873202*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 0, 0); /*0x87320e*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x873213*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87321e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x87322a*/
  v4 = v1 == unk_B4770C; /*0x873232*/
  unk_B43FB4 = 0x20802; /*0x873238*/
  unk_B44644 = 0x108; /*0x873242*/
  if ( !v4 ) /*0x87324c*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x87324e*/
    if ( v4 ) /*0x873251*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x873255*/
    v1 = unk_B4770C; /*0x87325a*/
    if ( unk_B4770C ) /*0x873262*/
      ++*(_DWORD *)(v1 + 0x60); /*0x873268*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 6u ) /*0x873270*/
  {
    v85 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x873283*/
    v4 = v2 == *v85; /*0x873285*/
    LOBYTE(v103) = 0x20; /*0x873288*/
    if ( !v4 ) /*0x87328d*/
    {
      if ( v2 ) /*0x873291*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x873293*/
        if ( v4 ) /*0x873296*/
          sub_772560(v2); /*0x87329a*/
      }
      v2 = *v85; /*0x87329f*/
      if ( *v85 ) /*0x8732a4*/
        ++v2[7].Unk08; /*0x8732aa*/
    }
    v86 = v102; /*0x8732ae*/
    LOBYTE(v103) = 1; /*0x8732b4*/
    if ( v102 ) /*0x8732b9*/
    {
      --v102[7].Unk08; /*0x8732bb*/
      if ( !v86[7].Unk08 ) /*0x8732c3*/
        sub_772560(v86); /*0x8732c8*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x8732d4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x8732e3*/
    v87 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x8732f5*/
    v4 = v2 == *v87; /*0x8732f7*/
    LOBYTE(v103) = 0x21; /*0x8732fa*/
    if ( !v4 ) /*0x8732ff*/
    {
      if ( v2 ) /*0x873303*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x873305*/
        if ( v4 ) /*0x873308*/
          sub_772560(v2); /*0x87330c*/
      }
      v2 = *v87; /*0x873311*/
      if ( *v87 ) /*0x873316*/
        ++v2[7].Unk08; /*0x87331c*/
    }
    v88 = v102; /*0x873320*/
    LOBYTE(v103) = 1; /*0x873326*/
    if ( v102 ) /*0x87332b*/
    {
      --v102[7].Unk08; /*0x87332d*/
      if ( !v88[7].Unk08 ) /*0x873335*/
        sub_772560(v88); /*0x87333a*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x873346*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x873355*/
    v89 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x873367*/
    v4 = v2 == *v89; /*0x873369*/
    LOBYTE(v103) = 0x22; /*0x87336c*/
    if ( !v4 ) /*0x873371*/
    {
      if ( v2 ) /*0x873375*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x873377*/
        if ( v4 ) /*0x87337a*/
          sub_772560(v2); /*0x87337e*/
      }
      v2 = *v89; /*0x873383*/
      if ( *v89 ) /*0x873388*/
        ++v2[7].Unk08; /*0x87338e*/
    }
    v90 = v102; /*0x873392*/
    LOBYTE(v103) = 1; /*0x873398*/
    if ( v102 ) /*0x87339d*/
    {
      --v102[7].Unk08; /*0x87339f*/
      if ( !v90[7].Unk08 ) /*0x8733a7*/
        sub_772560(v90); /*0x8733ac*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x8733b8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x8733c7*/
    v91 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x8733d9*/
    v4 = v2 == *v91; /*0x8733db*/
    LOBYTE(v103) = 0x23; /*0x8733de*/
    if ( !v4 ) /*0x8733e3*/
    {
      if ( v2 ) /*0x8733e7*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8733e9*/
        if ( v4 ) /*0x8733ec*/
          sub_772560(v2); /*0x8733f0*/
      }
      v2 = *v91; /*0x8733f5*/
      if ( *v91 ) /*0x8733fa*/
        ++v2[7].Unk08; /*0x873400*/
    }
    v92 = v102; /*0x873404*/
    LOBYTE(v103) = 1; /*0x87340a*/
    if ( v102 ) /*0x87340f*/
    {
      --v102[7].Unk08; /*0x873411*/
      if ( !v92[7].Unk08 ) /*0x873419*/
        sub_772560(v92); /*0x87341e*/
    }
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x87342c*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 0); /*0x873438*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x873447*/
    v93 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x873459*/
    v4 = v2 == *v93; /*0x87345b*/
    LOBYTE(v103) = 0x24; /*0x87345e*/
    if ( !v4 ) /*0x873463*/
    {
      if ( v2 ) /*0x873467*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x873469*/
        if ( v4 ) /*0x87346c*/
          sub_772560(v2); /*0x873470*/
      }
      v2 = *v93; /*0x873475*/
      if ( *v93 ) /*0x87347a*/
        ++v2[7].Unk08; /*0x873480*/
    }
    v94 = v102; /*0x873484*/
    LOBYTE(v103) = 1; /*0x87348a*/
    if ( v102 ) /*0x87348f*/
    {
      --v102[7].Unk08; /*0x873491*/
      if ( !v94[7].Unk08 ) /*0x873499*/
        sub_772560(v94); /*0x87349e*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x8734aa*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x8734b9*/
    v95 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v102); /*0x8734cb*/
    v4 = v2 == *v95; /*0x8734cd*/
    LOBYTE(v103) = 0x25; /*0x8734d0*/
    if ( !v4 ) /*0x8734d5*/
    {
      if ( v2 ) /*0x8734d9*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8734db*/
        if ( v4 ) /*0x8734de*/
          sub_772560(v2); /*0x8734e2*/
      }
      v2 = *v95; /*0x8734e7*/
      if ( *v95 ) /*0x8734ec*/
        ++v2[7].Unk08; /*0x8734f2*/
    }
    v96 = v102; /*0x8734f6*/
    LOBYTE(v103) = 1; /*0x8734fc*/
    if ( v102 ) /*0x873501*/
    {
      --v102[7].Unk08; /*0x873503*/
      if ( !v96[7].Unk08 ) /*0x87350b*/
        sub_772560(v96); /*0x873510*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x87351c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, *(_DWORD *)(v1 + 0x14), &v2->Stage); /*0x87352b*/
  }
  v97 = (int)*(this + 0x4A); /*0x873534*/
  v98 = *(_DWORD *)(v1 + 0x58); /*0x87353a*/
  if ( v98 != v97 ) /*0x87353f*/
  {
    if ( v98 ) /*0x873543*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v98 + 4)) ) /*0x873549*/
        (**(void (__thiscall ***)(int, int))v98)(v98, 1); /*0x873560*/
    }
    *(_DWORD *)(v1 + 0x58) = v97; /*0x873564*/
    if ( v97 ) /*0x873567*/
      InterlockedIncrement((volatile LONG *)(v97 + 4)); /*0x87356d*/
  }
  v99 = (int)*(this + 0x64); /*0x873577*/
  v100 = *(_DWORD *)(v1 + 0x44); /*0x87357d*/
  if ( v100 != v99 ) /*0x873582*/
  {
    if ( v100 ) /*0x873586*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v100 + 4)) ) /*0x87358c*/
        (**(void (__thiscall ***)(int, int))v100)(v100, 1); /*0x8735a3*/
    }
    *(_DWORD *)(v1 + 0x44) = v99; /*0x8735a7*/
    if ( v99 ) /*0x8735aa*/
      InterlockedIncrement((volatile LONG *)(v99 + 4)); /*0x8735b0*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8735b6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8735c1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 1u, 0); /*0x8735cd*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8735d2*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8735dd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x13u, 2u, 0); /*0x8735e9*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8735ee*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8735f9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x14u, 2u, 0); /*0x873605*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87360a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x873615*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x873621*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x873626*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x873631*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x87363d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x873642*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87364d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 3u, 0); /*0x873659*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87365e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x873669*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 0, 0); /*0x873675*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x87367a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x873685*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x873691*/
  unk_B43FC0 = 0x60808; /*0x87369b*/
  unk_B44650 = 0x108; /*0x8736a5*/
  LOBYTE(v103) = 0; /*0x8736af*/
  if ( v2 ) /*0x8736b4*/
  {
    v4 = v2[7].Unk08-- == 1; /*0x8736b6*/
    if ( v4 ) /*0x8736b9*/
      sub_772560(v2); /*0x8736bd*/
  }
  v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x8736c2*/
  v103 = 0xFFFFFFFF; /*0x8736c5*/
  if ( v4 ) /*0x8736c9*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x8736cd*/
}
