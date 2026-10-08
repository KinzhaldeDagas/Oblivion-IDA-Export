// Oblivion Lighting30 pass-pool initializer. SimpleShadow pool rows 36..39/selectors 0x14E..0x151 use SM3013..SM3016 with SM3023, seven stages, Z test LESS_EQUAL with no Z write, alpha blend DESTCOLOR/ZERO, stencil disabled, and six clip planes enabled. Mode-5 pool rows 42/43/selectors 0x154/0x155 use SM3018/SM3019 with SM3026, one BaseMap stage, alpha blending and stencil disabled, and Z test/write LESS_EQUAL. Alpha-test state is supplied by Lighting30 geometry-state preparation, not these pass groups.
void __cdecl Lighting30Shader_InitializePassPool()
{
  float v0; // esi
  float v1; // eax
  bool v2; // zf
  int v3; // edi
  float v4; // ebp
  int v5; // edi
  float v6; // ebp
  int v7; // edi
  float v8; // ebp
  int v9; // edi
  float v10; // ebp
  int v11; // edi
  float v12; // ebp
  int v13; // edi
  float v14; // ebp
  int v15; // edi
  float v16; // ebp
  int v17; // edi
  float v18; // ebp
  int v19; // edi
  float v20; // ebp
  int v21; // edi
  float v22; // ebp
  int v23; // edi
  float v24; // ebp
  int v25; // edi
  float v26; // ebp
  int v27; // edi
  float v28; // ebp
  int v29; // edi
  float v30; // ebp
  int v31; // edi
  float v32; // ebp
  int v33; // edi
  float v34; // ebp
  int v35; // edi
  float v36; // ebp
  int v37; // edi
  float v38; // ebp
  int v39; // edi
  float v40; // ebp
  int v41; // edi
  float v42; // ebp
  int v43; // edi
  float v44; // ebp
  int v45; // edi
  float v46; // ebp
  int v47; // edi
  float v48; // ebp
  int v49; // edi
  float v50; // ebp
  int v51; // edi
  float v52; // ebp
  int v53; // edi
  float v54; // ebp
  int v55; // edi
  float v56; // ebp
  int v57; // edi
  float v58; // ebp
  int v59; // edi
  float v60; // ebp
  int v61; // edi
  float v62; // ebp
  NiD3DTextureStage **v63; // eax
  NiD3DTextureStage *v64; // eax
  unsigned int *v65; // edi
  NiD3DTextureStage **v66; // eax
  NiD3DTextureStage *v67; // eax
  unsigned int *v68; // edi
  NiD3DTextureStage **v69; // eax
  NiD3DTextureStage *v70; // eax
  unsigned int *v71; // edi
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
  unsigned int *v83; // edi
  NiD3DTextureStage **v84; // eax
  NiD3DTextureStage *v85; // eax
  unsigned int *v86; // edi
  NiD3DTextureStage **v87; // eax
  NiD3DTextureStage *v88; // eax
  unsigned int *v89; // edi
  NiD3DTextureStage **v90; // eax
  NiD3DTextureStage *v91; // eax
  unsigned int *v92; // edi
  NiD3DTextureStage **v93; // eax
  NiD3DTextureStage *v94; // eax
  unsigned int *v95; // edi
  NiD3DTextureStage **v96; // eax
  NiD3DTextureStage *v97; // eax
  unsigned int *v98; // edi
  NiD3DTextureStage **v99; // eax
  NiD3DTextureStage *v100; // eax
  unsigned int *v101; // edi
  NiD3DTextureStage **v102; // eax
  NiD3DTextureStage *v103; // eax
  unsigned int *v104; // edi
  NiD3DPass *v105; // esi
  NiD3DPass *v106; // esi
  NiD3DPass *v107; // esi
  NiD3DTextureStage **v108; // eax
  NiD3DTextureStage *v109; // eax
  unsigned int *v110; // edi
  NiD3DPass *v111; // esi
  NiD3DTextureStage **v112; // eax
  NiD3DTextureStage *v113; // eax
  unsigned int *v114; // ebp
  NiD3DPass *v115; // esi
  NiD3DTextureStage **v116; // eax
  NiD3DTextureStage *v117; // eax
  NiD3DPass *v118; // esi
  NiD3DPass *v119; // esi
  NiD3DPass *v120; // esi
  NiD3DTextureStage **v121; // eax
  NiD3DTextureStage *v122; // eax
  unsigned int *v123; // edi
  NiD3DTextureStage **v124; // eax
  NiD3DTextureStage *v125; // eax
  unsigned int *v126; // edi
  NiD3DPass *v127; // esi
  NiD3DTextureStage **v128; // eax
  NiD3DTextureStage *v129; // eax
  unsigned int *v130; // edi
  NiD3DTextureStage **v131; // eax
  NiD3DTextureStage *v132; // eax
  unsigned int *v133; // edi
  NiD3DPass *v134; // esi
  NiD3DTextureStage **v135; // eax
  NiD3DTextureStage *v136; // eax
  unsigned int *v137; // edi
  NiD3DPass *v138; // esi
  NiD3DTextureStage **v139; // eax
  NiD3DTextureStage *v140; // eax
  NiD3DPass *v141; // esi
  NiD3DPass *v142; // esi
  NiD3DPass *v143; // esi
  NiD3DTextureStage *v144; // ecx
  NiD3DPassVtbl **v145; // [esp+78h] [ebp-18h] BYREF
  unsigned int *a3; // [esp+7Ch] [ebp-14h] BYREF
  NiD3DTextureStage *v147; // [esp+80h] [ebp-10h] BYREF
  unsigned int v148; // [esp+8Ch] [ebp-4h]

  v0 = 0.0; /*0x85e687*/
  v145 = 0; /*0x85e68b*/
  v148 = 0; /*0x85e68f*/
  a3 = 0; /*0x85e693*/
  v1 = OB_ShaderConstantStorage_010201A0[0x56F]; /*0x85e697*/
  v2 = LODWORD(OB_ShaderConstantStorage_010201A0[0x56F]) == 0; /*0x85e69c*/
  LOBYTE(v148) = 1; /*0x85e69e*/
  if ( !v2 ) /*0x85e6a3*/
  {
    v0 = v1; /*0x85e6a5*/
    v145 = (NiD3DPassVtbl **)LODWORD(v1); /*0x85e6a9*/
    if ( v1 != 0.0 ) /*0x85e6ad*/
      ++*(_DWORD *)(LODWORD(v1) + 0x60); /*0x85e6af*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85e6b4*/
  v3 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85e6be*/
  v4 = OB_ShaderConstantStorage_010201A0[0x53B]; /*0x85e6c6*/
  if ( v3 != LODWORD(OB_ShaderConstantStorage_010201A0[0x53B]) ) /*0x85e6c8*/
  {
    if ( v3 ) /*0x85e6cc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x85e6d2*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x85e6e8*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v4; /*0x85e6ec*/
    if ( v4 != 0.0 ) /*0x85e6ef*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v4) + 4)); /*0x85e6f5*/
  }
  v5 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85e700*/
  v6 = OB_ShaderConstantStorage_010201A0[0x456]; /*0x85e705*/
  if ( v5 != LODWORD(OB_ShaderConstantStorage_010201A0[0x456]) ) /*0x85e707*/
  {
    if ( v5 ) /*0x85e70b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x85e711*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x85e727*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v6; /*0x85e72b*/
    if ( v6 != 0.0 ) /*0x85e72e*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v6) + 4)); /*0x85e734*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e73a*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e744*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85e74f*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e754*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e75e*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85e769*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e76e*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e778*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x85e782*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e787*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e791*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85e79b*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e7a0*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e7aa*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x16, 1, 0); /*0x85e7b5*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e7ba*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e7c4*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xA8, 0, 0); /*0x85e7d1*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x570]); /*0x85e7d6*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2DD]) = 0x812; /*0x85e7dc*/
  OB_ShaderConstantStorage_010201A0[0x313] = 0.0; /*0x85e7e6*/
  if ( !v2 ) /*0x85e7ec*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85e7ee*/
    if ( v2 ) /*0x85e7f2*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85e7f6*/
    v0 = OB_ShaderConstantStorage_010201A0[0x570]; /*0x85e7fb*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x570]); /*0x85e803*/
    if ( v145 ) /*0x85e807*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85e809*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85e80e*/
  v7 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85e818*/
  v8 = OB_ShaderConstantStorage_010201A0[0x53B]; /*0x85e820*/
  if ( v7 != LODWORD(OB_ShaderConstantStorage_010201A0[0x53B]) ) /*0x85e822*/
  {
    if ( v7 ) /*0x85e826*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x85e82c*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x85e842*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v8; /*0x85e846*/
    if ( v8 != 0.0 ) /*0x85e849*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v8) + 4)); /*0x85e84f*/
  }
  v9 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85e85a*/
  v10 = OB_ShaderConstantStorage_010201A0[0x456]; /*0x85e85f*/
  if ( v9 != LODWORD(OB_ShaderConstantStorage_010201A0[0x456]) ) /*0x85e861*/
  {
    if ( v9 ) /*0x85e865*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x85e86b*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x85e881*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v10; /*0x85e885*/
    if ( v10 != 0.0 ) /*0x85e888*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v10) + 4)); /*0x85e88e*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e894*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e89e*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85e8a9*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e8ae*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e8b8*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85e8c3*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e8c8*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e8d2*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85e8dd*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e8e2*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e8ec*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85e8f6*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x571]); /*0x85e8fb*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2DE]) = 2; /*0x85e901*/
  OB_ShaderConstantStorage_010201A0[0x314] = 0.0; /*0x85e90b*/
  if ( !v2 ) /*0x85e911*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85e913*/
    if ( v2 ) /*0x85e917*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85e91b*/
    v0 = OB_ShaderConstantStorage_010201A0[0x571]; /*0x85e920*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x571]); /*0x85e928*/
    if ( v145 ) /*0x85e92c*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85e92e*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85e933*/
  v11 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85e93d*/
  v12 = OB_ShaderConstantStorage_010201A0[0x53C]; /*0x85e945*/
  if ( v11 != LODWORD(OB_ShaderConstantStorage_010201A0[0x53C]) ) /*0x85e947*/
  {
    if ( v11 ) /*0x85e94b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85e951*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85e967*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v12; /*0x85e96b*/
    if ( v12 != 0.0 ) /*0x85e96e*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v12) + 4)); /*0x85e974*/
  }
  v13 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85e97f*/
  v14 = OB_ShaderConstantStorage_010201A0[0x457]; /*0x85e984*/
  if ( v13 != LODWORD(OB_ShaderConstantStorage_010201A0[0x457]) ) /*0x85e986*/
  {
    if ( v13 ) /*0x85e98a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x85e990*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x85e9a6*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v14; /*0x85e9aa*/
    if ( v14 != 0.0 ) /*0x85e9ad*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v14) + 4)); /*0x85e9b3*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e9b9*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e9c3*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85e9ce*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e9d3*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e9dd*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85e9e8*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85e9ed*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85e9f7*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85ea02*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ea07*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ea11*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85ea1b*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x572]); /*0x85ea20*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2DF]) = 0xC; /*0x85ea26*/
  OB_ShaderConstantStorage_010201A0[0x315] = 0.0; /*0x85ea30*/
  if ( !v2 ) /*0x85ea36*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85ea38*/
    if ( v2 ) /*0x85ea3c*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85ea40*/
    v0 = OB_ShaderConstantStorage_010201A0[0x572]; /*0x85ea45*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x572]); /*0x85ea4d*/
    if ( v145 ) /*0x85ea51*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85ea53*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85ea58*/
  v15 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85ea62*/
  v16 = OB_ShaderConstantStorage_010201A0[0x51D]; /*0x85ea6a*/
  if ( v15 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51D]) ) /*0x85ea6c*/
  {
    if ( v15 ) /*0x85ea70*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x85ea76*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x85ea8c*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v16; /*0x85ea90*/
    if ( v16 != 0.0 ) /*0x85ea93*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x85ea99*/
  }
  v17 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85eaa4*/
  v18 = OB_ShaderConstantStorage_010201A0[0x431]; /*0x85eaa9*/
  if ( v17 != LODWORD(OB_ShaderConstantStorage_010201A0[0x431]) ) /*0x85eaab*/
  {
    if ( v17 ) /*0x85eaaf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x85eab5*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x85eacb*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v18; /*0x85eacf*/
    if ( v18 != 0.0 ) /*0x85ead2*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x85ead8*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85eade*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85eae8*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85eaf3*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85eaf8*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85eb02*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85eb0d*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85eb12*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85eb1c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85eb27*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85eb2c*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85eb36*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85eb40*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x573]); /*0x85eb45*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2E0]) = 0x30002; /*0x85eb4b*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x316]) = 0x16; /*0x85eb55*/
  if ( !v2 ) /*0x85eb5f*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85eb61*/
    if ( v2 ) /*0x85eb65*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85eb69*/
    v0 = OB_ShaderConstantStorage_010201A0[0x573]; /*0x85eb6e*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x573]); /*0x85eb76*/
    if ( v145 ) /*0x85eb7a*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85eb7c*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85eb81*/
  v19 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85eb8b*/
  v20 = OB_ShaderConstantStorage_010201A0[0x51E]; /*0x85eb93*/
  if ( v19 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51E]) ) /*0x85eb95*/
  {
    if ( v19 ) /*0x85eb99*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x85eb9f*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x85ebb5*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v20; /*0x85ebb9*/
    if ( v20 != 0.0 ) /*0x85ebbc*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v20) + 4)); /*0x85ebc2*/
  }
  v21 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85ebcd*/
  v22 = OB_ShaderConstantStorage_010201A0[0x431]; /*0x85ebd2*/
  if ( v21 != LODWORD(OB_ShaderConstantStorage_010201A0[0x431]) ) /*0x85ebd4*/
  {
    if ( v21 ) /*0x85ebd8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x85ebde*/
        (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x85ebf4*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v22; /*0x85ebf8*/
    if ( v22 != 0.0 ) /*0x85ebfb*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x85ec01*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ec07*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ec11*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85ec1c*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ec21*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ec2b*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85ec36*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ec3b*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ec45*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85ec50*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ec55*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ec5f*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85ec6b*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x574]); /*0x85ec70*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2E1]) = 0x3000C; /*0x85ec7b*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x317]) = 0x16; /*0x85ec81*/
  if ( !v2 ) /*0x85ec8b*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85ec8d*/
    if ( v2 ) /*0x85ec91*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85ec95*/
    v0 = OB_ShaderConstantStorage_010201A0[0x574]; /*0x85ec9a*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x574]); /*0x85eca2*/
    if ( v145 ) /*0x85eca6*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85eca8*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85ecad*/
  v23 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85ecb7*/
  v24 = OB_ShaderConstantStorage_010201A0[0x51F]; /*0x85ecbf*/
  if ( v23 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51F]) ) /*0x85ecc1*/
  {
    if ( v23 ) /*0x85ecc5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x85eccb*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x85ece1*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v24; /*0x85ece5*/
    if ( v24 != 0.0 ) /*0x85ece8*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v24) + 4)); /*0x85ecee*/
  }
  v25 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85ecf9*/
  v26 = OB_ShaderConstantStorage_010201A0[0x433]; /*0x85ecfe*/
  if ( v25 != LODWORD(OB_ShaderConstantStorage_010201A0[0x433]) ) /*0x85ed00*/
  {
    if ( v25 ) /*0x85ed04*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) ) /*0x85ed0a*/
        (**(void (__thiscall ***)(int, int))v25)(v25, 1); /*0x85ed20*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v26; /*0x85ed24*/
    if ( v26 != 0.0 ) /*0x85ed27*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v26) + 4)); /*0x85ed2d*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ed33*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ed3e*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85ed4a*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ed4f*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ed5a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85ed66*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ed6b*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ed76*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85ed82*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ed87*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ed92*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85ed9e*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x575]); /*0x85eda3*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2E2]) = 0x30002; /*0x85eda9*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x318]) = 0x1E; /*0x85edb3*/
  if ( !v2 ) /*0x85edbd*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85edbf*/
    if ( v2 ) /*0x85edc3*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85edc7*/
    v0 = OB_ShaderConstantStorage_010201A0[0x575]; /*0x85edcc*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x575]); /*0x85edd4*/
    if ( v145 ) /*0x85edd8*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85edda*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85eddf*/
  v27 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85ede9*/
  v28 = OB_ShaderConstantStorage_010201A0[0x51D]; /*0x85edf1*/
  if ( v27 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51D]) ) /*0x85edf3*/
  {
    if ( v27 ) /*0x85edf7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x85edfd*/
        (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x85ee13*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v28; /*0x85ee17*/
    if ( v28 != 0.0 ) /*0x85ee1a*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v28) + 4)); /*0x85ee20*/
  }
  v29 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85ee2b*/
  v30 = OB_ShaderConstantStorage_010201A0[0x435]; /*0x85ee30*/
  if ( v29 != LODWORD(OB_ShaderConstantStorage_010201A0[0x435]) ) /*0x85ee32*/
  {
    if ( v29 ) /*0x85ee36*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) ) /*0x85ee3c*/
        (**(void (__thiscall ***)(int, int))v29)(v29, 1); /*0x85ee52*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v30; /*0x85ee56*/
    if ( v30 != 0.0 ) /*0x85ee59*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v30) + 4)); /*0x85ee5f*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ee65*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ee70*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85ee7c*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ee81*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ee8c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85ee98*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ee9d*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85eea8*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85eeb4*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85eeb9*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85eec4*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85eed0*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x576]); /*0x85eed5*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2E3]) = 0x30002; /*0x85eedb*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x319]) = 0x16; /*0x85eee5*/
  if ( !v2 ) /*0x85eeef*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85eef1*/
    if ( v2 ) /*0x85eef5*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85eef9*/
    v0 = OB_ShaderConstantStorage_010201A0[0x576]; /*0x85eefe*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x576]); /*0x85ef06*/
    if ( v145 ) /*0x85ef0a*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85ef0c*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85ef11*/
  v31 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85ef1b*/
  v32 = OB_ShaderConstantStorage_010201A0[0x51D]; /*0x85ef23*/
  if ( v31 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51D]) ) /*0x85ef25*/
  {
    if ( v31 ) /*0x85ef29*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) ) /*0x85ef2f*/
        (**(void (__thiscall ***)(int, int))v31)(v31, 1); /*0x85ef45*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v32; /*0x85ef49*/
    if ( v32 != 0.0 ) /*0x85ef4c*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v32) + 4)); /*0x85ef52*/
  }
  v33 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85ef5d*/
  v34 = OB_ShaderConstantStorage_010201A0[0x437]; /*0x85ef62*/
  if ( v33 != LODWORD(OB_ShaderConstantStorage_010201A0[0x437]) ) /*0x85ef64*/
  {
    if ( v33 ) /*0x85ef68*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v33 + 4)) ) /*0x85ef6e*/
        (**(void (__thiscall ***)(int, int))v33)(v33, 1); /*0x85ef84*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v34; /*0x85ef88*/
    if ( v34 != 0.0 ) /*0x85ef8b*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v34) + 4)); /*0x85ef91*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ef97*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85efa2*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85efae*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85efb3*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85efbe*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85efca*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85efcf*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85efda*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85efe6*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85efeb*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85eff6*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85f002*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x577]); /*0x85f007*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2E4]) = 0x30002; /*0x85f00d*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x31A]) = 0x16; /*0x85f017*/
  if ( !v2 ) /*0x85f021*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85f023*/
    if ( v2 ) /*0x85f027*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85f02b*/
    v0 = OB_ShaderConstantStorage_010201A0[0x577]; /*0x85f030*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x577]); /*0x85f038*/
    if ( v145 ) /*0x85f03c*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85f03e*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85f043*/
  v35 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85f04d*/
  v36 = OB_ShaderConstantStorage_010201A0[0x51E]; /*0x85f055*/
  if ( v35 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51E]) ) /*0x85f057*/
  {
    if ( v35 ) /*0x85f05b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v35 + 4)) ) /*0x85f061*/
        (**(void (__thiscall ***)(int, int))v35)(v35, 1); /*0x85f077*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v36; /*0x85f07b*/
    if ( v36 != 0.0 ) /*0x85f07e*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v36) + 4)); /*0x85f084*/
  }
  v37 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85f08f*/
  v38 = OB_ShaderConstantStorage_010201A0[0x437]; /*0x85f094*/
  if ( v37 != LODWORD(OB_ShaderConstantStorage_010201A0[0x437]) ) /*0x85f096*/
  {
    if ( v37 ) /*0x85f09a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v37 + 4)) ) /*0x85f0a0*/
        (**(void (__thiscall ***)(int, int))v37)(v37, 1); /*0x85f0b6*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v38; /*0x85f0ba*/
    if ( v38 != 0.0 ) /*0x85f0bd*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v38) + 4)); /*0x85f0c3*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f0c9*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f0d4*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85f0e0*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f0e5*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f0f0*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85f0fc*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f101*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f10c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85f118*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f11d*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f128*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85f134*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x578]); /*0x85f139*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2E5]) = 0x3000C; /*0x85f13f*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x31B]) = 0x16; /*0x85f145*/
  if ( !v2 ) /*0x85f14f*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85f151*/
    if ( v2 ) /*0x85f155*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85f159*/
    v0 = OB_ShaderConstantStorage_010201A0[0x578]; /*0x85f15e*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x578]); /*0x85f166*/
    if ( v145 ) /*0x85f16a*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85f16c*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85f171*/
  v39 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85f17b*/
  v40 = OB_ShaderConstantStorage_010201A0[0x51D]; /*0x85f183*/
  if ( v39 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51D]) ) /*0x85f185*/
  {
    if ( v39 ) /*0x85f189*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v39 + 4)) ) /*0x85f18f*/
        (**(void (__thiscall ***)(int, int))v39)(v39, 1); /*0x85f1a5*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v40; /*0x85f1a9*/
    if ( v40 != 0.0 ) /*0x85f1ac*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v40) + 4)); /*0x85f1b2*/
  }
  v41 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85f1bd*/
  v42 = OB_ShaderConstantStorage_010201A0[0x439]; /*0x85f1c2*/
  if ( v41 != LODWORD(OB_ShaderConstantStorage_010201A0[0x439]) ) /*0x85f1c4*/
  {
    if ( v41 ) /*0x85f1c8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v41 + 4)) ) /*0x85f1ce*/
        (**(void (__thiscall ***)(int, int))v41)(v41, 1); /*0x85f1e4*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v42; /*0x85f1e8*/
    if ( v42 != 0.0 ) /*0x85f1eb*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v42) + 4)); /*0x85f1f1*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f1f7*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f202*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85f20e*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f213*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f21e*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85f22a*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f22f*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f23a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85f246*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f24b*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f256*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85f262*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x579]); /*0x85f267*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2E6]) = 0x30002; /*0x85f26d*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x31C]) = 0x36; /*0x85f277*/
  if ( !v2 ) /*0x85f281*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85f283*/
    if ( v2 ) /*0x85f287*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85f28b*/
    v0 = OB_ShaderConstantStorage_010201A0[0x579]; /*0x85f290*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x579]); /*0x85f298*/
    if ( v145 ) /*0x85f29c*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85f29e*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85f2a3*/
  v43 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85f2ad*/
  v44 = OB_ShaderConstantStorage_010201A0[0x51E]; /*0x85f2b5*/
  if ( v43 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51E]) ) /*0x85f2b7*/
  {
    if ( v43 ) /*0x85f2bb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v43 + 4)) ) /*0x85f2c1*/
        (**(void (__thiscall ***)(int, int))v43)(v43, 1); /*0x85f2d7*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v44; /*0x85f2db*/
    if ( v44 != 0.0 ) /*0x85f2de*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v44) + 4)); /*0x85f2e4*/
  }
  v45 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85f2ef*/
  v46 = OB_ShaderConstantStorage_010201A0[0x439]; /*0x85f2f4*/
  if ( v45 != LODWORD(OB_ShaderConstantStorage_010201A0[0x439]) ) /*0x85f2f6*/
  {
    if ( v45 ) /*0x85f2fa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v45 + 4)) ) /*0x85f300*/
        (**(void (__thiscall ***)(int, int))v45)(v45, 1); /*0x85f316*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v46; /*0x85f31a*/
    if ( v46 != 0.0 ) /*0x85f31d*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v46) + 4)); /*0x85f323*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f329*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f334*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85f340*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f345*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f350*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85f35c*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f361*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f36c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85f378*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f37d*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f388*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85f394*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x57A]); /*0x85f399*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2E7]) = 0x3000C; /*0x85f39f*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x31D]) = 0x36; /*0x85f3a5*/
  if ( !v2 ) /*0x85f3af*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85f3b1*/
    if ( v2 ) /*0x85f3b5*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85f3b9*/
    v0 = OB_ShaderConstantStorage_010201A0[0x57A]; /*0x85f3be*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x57A]); /*0x85f3c6*/
    if ( v145 ) /*0x85f3ca*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85f3cc*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85f3d1*/
  v47 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85f3db*/
  v48 = OB_ShaderConstantStorage_010201A0[0x51F]; /*0x85f3e3*/
  if ( v47 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51F]) ) /*0x85f3e5*/
  {
    if ( v47 ) /*0x85f3e9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v47 + 4)) ) /*0x85f3ef*/
        (**(void (__thiscall ***)(int, int))v47)(v47, 1); /*0x85f405*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v48; /*0x85f409*/
    if ( v48 != 0.0 ) /*0x85f40c*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v48) + 4)); /*0x85f412*/
  }
  v49 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85f41d*/
  v50 = OB_ShaderConstantStorage_010201A0[0x431]; /*0x85f422*/
  if ( v49 != LODWORD(OB_ShaderConstantStorage_010201A0[0x431]) ) /*0x85f424*/
  {
    if ( v49 ) /*0x85f428*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v49 + 4)) ) /*0x85f42e*/
        (**(void (__thiscall ***)(int, int))v49)(v49, 1); /*0x85f444*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v50; /*0x85f448*/
    if ( v50 != 0.0 ) /*0x85f44b*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v50) + 4)); /*0x85f451*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f457*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f462*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85f46e*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f473*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f47e*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85f48a*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f48f*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f49a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85f4a6*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f4ab*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f4b6*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85f4c2*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x57B]); /*0x85f4c7*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2E8]) = 0x30002; /*0x85f4cd*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x31E]) = 0x16; /*0x85f4d7*/
  if ( !v2 ) /*0x85f4e1*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85f4e3*/
    if ( v2 ) /*0x85f4e7*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85f4eb*/
    v0 = OB_ShaderConstantStorage_010201A0[0x57B]; /*0x85f4f0*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x57B]); /*0x85f4f8*/
    if ( v145 ) /*0x85f4fc*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85f4fe*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85f503*/
  v51 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85f50d*/
  v52 = OB_ShaderConstantStorage_010201A0[0x520]; /*0x85f515*/
  if ( v51 != LODWORD(OB_ShaderConstantStorage_010201A0[0x520]) ) /*0x85f517*/
  {
    if ( v51 ) /*0x85f51b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v51 + 4)) ) /*0x85f521*/
        (**(void (__thiscall ***)(int, int))v51)(v51, 1); /*0x85f537*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v52; /*0x85f53b*/
    if ( v52 != 0.0 ) /*0x85f53e*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v52) + 4)); /*0x85f544*/
  }
  v53 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85f54f*/
  v54 = OB_ShaderConstantStorage_010201A0[0x431]; /*0x85f554*/
  if ( v53 != LODWORD(OB_ShaderConstantStorage_010201A0[0x431]) ) /*0x85f556*/
  {
    if ( v53 ) /*0x85f55a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v53 + 4)) ) /*0x85f560*/
        (**(void (__thiscall ***)(int, int))v53)(v53, 1); /*0x85f576*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v54; /*0x85f57a*/
    if ( v54 != 0.0 ) /*0x85f57d*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v54) + 4)); /*0x85f583*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f589*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f594*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85f5a0*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f5a5*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f5b0*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85f5bc*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f5c1*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f5cc*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85f5d8*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f5dd*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f5e8*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85f5f4*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x57C]); /*0x85f5f9*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2E9]) = 0x3000C; /*0x85f5ff*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x31F]) = 0x16; /*0x85f605*/
  if ( !v2 ) /*0x85f60f*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85f611*/
    if ( v2 ) /*0x85f615*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85f619*/
    v0 = OB_ShaderConstantStorage_010201A0[0x57C]; /*0x85f61e*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x57C]); /*0x85f626*/
    if ( v145 ) /*0x85f62a*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85f62c*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85f631*/
  v55 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85f63b*/
  v56 = OB_ShaderConstantStorage_010201A0[0x51F]; /*0x85f643*/
  if ( v55 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51F]) ) /*0x85f645*/
  {
    if ( v55 ) /*0x85f649*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v55 + 4)) ) /*0x85f64f*/
        (**(void (__thiscall ***)(int, int))v55)(v55, 1); /*0x85f665*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v56; /*0x85f669*/
    if ( v56 != 0.0 ) /*0x85f66c*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v56) + 4)); /*0x85f672*/
  }
  v57 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85f67d*/
  v58 = OB_ShaderConstantStorage_010201A0[0x435]; /*0x85f682*/
  if ( v57 != LODWORD(OB_ShaderConstantStorage_010201A0[0x435]) ) /*0x85f684*/
  {
    if ( v57 ) /*0x85f688*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v57 + 4)) ) /*0x85f68e*/
        (**(void (__thiscall ***)(int, int))v57)(v57, 1); /*0x85f6a4*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v58; /*0x85f6a8*/
    if ( v58 != 0.0 ) /*0x85f6ab*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v58) + 4)); /*0x85f6b1*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f6b7*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f6c2*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85f6ce*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f6d3*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f6de*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85f6ea*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f6ef*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f6fa*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85f706*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f70b*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f716*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85f722*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x57D]); /*0x85f727*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2EA]) = 0x30012; /*0x85f72d*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x320]) = 0x16; /*0x85f737*/
  if ( !v2 ) /*0x85f741*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85f743*/
    if ( v2 ) /*0x85f747*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85f74b*/
    v0 = OB_ShaderConstantStorage_010201A0[0x57D]; /*0x85f750*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x57D]); /*0x85f758*/
    if ( v145 ) /*0x85f75c*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85f75e*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85f763*/
  v59 = *(_DWORD *)(LODWORD(v0) + 0x58); /*0x85f76d*/
  v60 = OB_ShaderConstantStorage_010201A0[0x51F]; /*0x85f775*/
  if ( v59 != LODWORD(OB_ShaderConstantStorage_010201A0[0x51F]) ) /*0x85f777*/
  {
    if ( v59 ) /*0x85f77b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v59 + 4)) ) /*0x85f781*/
        (**(void (__thiscall ***)(int, int))v59)(v59, 1); /*0x85f797*/
    }
    *(float *)(LODWORD(v0) + 0x58) = v60; /*0x85f79b*/
    if ( v60 != 0.0 ) /*0x85f79e*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v60) + 4)); /*0x85f7a4*/
  }
  v61 = *(_DWORD *)(LODWORD(v0) + 0x44); /*0x85f7af*/
  v62 = OB_ShaderConstantStorage_010201A0[0x439]; /*0x85f7b4*/
  if ( v61 != LODWORD(OB_ShaderConstantStorage_010201A0[0x439]) ) /*0x85f7b6*/
  {
    if ( v61 ) /*0x85f7ba*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v61 + 4)) ) /*0x85f7c0*/
        (**(void (__thiscall ***)(int, int))v61)(v61, 1); /*0x85f7d6*/
    }
    *(float *)(LODWORD(v0) + 0x44) = v62; /*0x85f7da*/
    if ( v62 != 0.0 ) /*0x85f7dd*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v62) + 4)); /*0x85f7e3*/
  }
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f7e9*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f7f4*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85f800*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f805*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f810*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85f81c*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f821*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f82c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85f838*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f83d*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f848*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85f854*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x57E]); /*0x85f861*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2EB]) = 0x30002; /*0x85f867*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x321]) = 0x36; /*0x85f871*/
  if ( !v2 ) /*0x85f877*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85f879*/
    if ( v2 ) /*0x85f87c*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85f880*/
    v0 = OB_ShaderConstantStorage_010201A0[0x57E]; /*0x85f885*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x57E]); /*0x85f88d*/
    if ( v145 ) /*0x85f891*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85f893*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85f898*/
  NiD3DPass_SetVertexShader( /*0x85f8a9*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x520]));
  NiD3DPass_SetPixelShader( /*0x85f8b7*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x439]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f8bc*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f8c7*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85f8d3*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f8d8*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f8e3*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85f8ef*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f8f4*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f8ff*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85f90b*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f910*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f91b*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85f927*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x57F]); /*0x85f92c*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2EC]) = 0x3000C; /*0x85f932*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x322]) = 0x36; /*0x85f938*/
  if ( !v2 ) /*0x85f93e*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85f940*/
    if ( v2 ) /*0x85f943*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85f947*/
    v0 = OB_ShaderConstantStorage_010201A0[0x57F]; /*0x85f94c*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x57F]); /*0x85f954*/
    if ( v145 ) /*0x85f958*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85f95a*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85f95f*/
  NiD3DPass_SetVertexShader( /*0x85f96f*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x521]));
  NiD3DPass_SetPixelShader( /*0x85f97d*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x43B]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f982*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f98d*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85f999*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f99e*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f9a9*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85f9b5*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f9ba*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f9c5*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85f9d1*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85f9d6*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85f9e1*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85f9ed*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x580]); /*0x85f9f2*/
  OB_ShaderConstantStorage_010201A0[0x2ED] = 1.5022256e-31; /*0x85f9fd*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x323]) = 0x16; /*0x85fa03*/
  if ( !v2 ) /*0x85fa0d*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85fa0f*/
    if ( v2 ) /*0x85fa12*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85fa16*/
    v0 = OB_ShaderConstantStorage_010201A0[0x580]; /*0x85fa1b*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x580]); /*0x85fa23*/
    if ( v145 ) /*0x85fa27*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85fa29*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85fa2e*/
  NiD3DPass_SetVertexShader( /*0x85fa3f*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x522]));
  NiD3DPass_SetPixelShader( /*0x85fa4c*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x43B]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fa51*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fa5c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85fa68*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fa6d*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fa78*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85fa84*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fa89*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fa94*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85faa0*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85faa5*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fab0*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85fabc*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x581]); /*0x85fac1*/
  OB_ShaderConstantStorage_010201A0[0x2EE] = 1.5022268e-31; /*0x85facc*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x324]) = 0x16; /*0x85fad2*/
  if ( !v2 ) /*0x85fadc*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85fade*/
    if ( v2 ) /*0x85fae2*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85fae6*/
    v0 = OB_ShaderConstantStorage_010201A0[0x581]; /*0x85faeb*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x581]); /*0x85faf3*/
    if ( v145 ) /*0x85fafc*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85fafe*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85fb09*/
  NiD3DPass_SetVertexShader( /*0x85fb1a*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x523]));
  NiD3DPass_SetPixelShader( /*0x85fb28*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x43D]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fb2d*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fb38*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85fb43*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fb48*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fb53*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85fb5f*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fb64*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fb6f*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85fb7a*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fb7f*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fb8a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85fb96*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x582]); /*0x85fb9b*/
  OB_ShaderConstantStorage_010201A0[0x2EF] = 1.5022256e-31; /*0x85fba1*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x325]) = 0x1E; /*0x85fba7*/
  if ( !v2 ) /*0x85fbb1*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85fbb3*/
    if ( v2 ) /*0x85fbb7*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85fbbb*/
    v0 = OB_ShaderConstantStorage_010201A0[0x582]; /*0x85fbc0*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x582]); /*0x85fbc8*/
    if ( v145 ) /*0x85fbcc*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85fbce*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85fbd2*/
  NiD3DPass_SetVertexShader( /*0x85fbe2*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x521]));
  NiD3DPass_SetPixelShader( /*0x85fbf0*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x43F]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fbf5*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fc00*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85fc0b*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fc10*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fc1b*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85fc27*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fc2c*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fc37*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85fc42*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fc47*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fc52*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85fc5e*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x583]); /*0x85fc63*/
  OB_ShaderConstantStorage_010201A0[0x2F0] = 1.5022256e-31; /*0x85fc69*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x326]) = 0x16; /*0x85fc6f*/
  if ( !v2 ) /*0x85fc79*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85fc7b*/
    if ( v2 ) /*0x85fc7f*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85fc83*/
    v0 = OB_ShaderConstantStorage_010201A0[0x583]; /*0x85fc88*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x583]); /*0x85fc90*/
    if ( v145 ) /*0x85fc94*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85fc96*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85fc9a*/
  NiD3DPass_SetVertexShader( /*0x85fcab*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x521]));
  NiD3DPass_SetPixelShader( /*0x85fcb8*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x441]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fcbd*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fcc8*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85fcd3*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fcd8*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fce3*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85fcef*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fcf4*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fcff*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85fd0a*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fd0f*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fd1a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85fd26*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x584]); /*0x85fd2b*/
  OB_ShaderConstantStorage_010201A0[0x2F1] = 1.5022256e-31; /*0x85fd31*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x327]) = 0x16; /*0x85fd37*/
  if ( !v2 ) /*0x85fd41*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85fd43*/
    if ( v2 ) /*0x85fd47*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85fd4b*/
    v0 = OB_ShaderConstantStorage_010201A0[0x584]; /*0x85fd50*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x584]); /*0x85fd58*/
    if ( v145 ) /*0x85fd5c*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85fd5e*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85fd62*/
  NiD3DPass_SetVertexShader( /*0x85fd73*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x522]));
  NiD3DPass_SetPixelShader( /*0x85fd81*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x441]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fd86*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fd91*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85fd9c*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fda1*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fdac*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85fdb8*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fdbd*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fdc8*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85fdd3*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fdd8*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fde3*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85fdef*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x585]); /*0x85fdf4*/
  OB_ShaderConstantStorage_010201A0[0x2F2] = 1.5022268e-31; /*0x85fdfa*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x328]) = 0x16; /*0x85fe00*/
  if ( !v2 ) /*0x85fe0a*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85fe0c*/
    if ( v2 ) /*0x85fe10*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85fe14*/
    v0 = OB_ShaderConstantStorage_010201A0[0x585]; /*0x85fe19*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x585]); /*0x85fe21*/
    if ( v145 ) /*0x85fe25*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85fe27*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85fe2b*/
  NiD3DPass_SetVertexShader( /*0x85fe3b*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x521]));
  NiD3DPass_SetPixelShader( /*0x85fe49*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x443]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fe4e*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fe59*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85fe64*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fe69*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fe74*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85fe80*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fe85*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85fe90*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85fe9b*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fea0*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85feab*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85feb7*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x586]); /*0x85febc*/
  OB_ShaderConstantStorage_010201A0[0x2F3] = 1.5022256e-31; /*0x85fec7*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x329]) = 0x36; /*0x85fecd*/
  if ( !v2 ) /*0x85fed3*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85fed5*/
    if ( v2 ) /*0x85fed9*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85fedd*/
    v0 = OB_ShaderConstantStorage_010201A0[0x586]; /*0x85fee2*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x586]); /*0x85feea*/
    if ( v145 ) /*0x85feee*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85fef0*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85fef5*/
  NiD3DPass_SetVertexShader( /*0x85ff06*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x522]));
  NiD3DPass_SetPixelShader( /*0x85ff13*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x443]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ff18*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ff23*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85ff2f*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ff34*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ff3f*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x85ff4b*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ff50*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ff5b*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x85ff67*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ff6c*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ff77*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x85ff83*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x587]); /*0x85ff88*/
  OB_ShaderConstantStorage_010201A0[0x2F4] = 1.5022268e-31; /*0x85ff8e*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x32A]) = 0x36; /*0x85ff94*/
  if ( !v2 ) /*0x85ff9a*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x85ff9c*/
    if ( v2 ) /*0x85ffa0*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x85ffa4*/
    v0 = OB_ShaderConstantStorage_010201A0[0x587]; /*0x85ffa9*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x587]); /*0x85ffb1*/
    if ( v145 ) /*0x85ffb5*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x85ffb7*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x85ffbc*/
  NiD3DPass_SetVertexShader( /*0x85ffcd*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x523]));
  NiD3DPass_SetPixelShader( /*0x85ffdb*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x43B]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85ffe0*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x85ffeb*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x85fff7*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x85fffc*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860007*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x860013*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860018*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860023*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x86002f*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860034*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86003f*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x86004b*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x588]); /*0x860050*/
  OB_ShaderConstantStorage_010201A0[0x2F5] = 1.5022256e-31; /*0x860056*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x32B]) = 0x16; /*0x86005c*/
  if ( !v2 ) /*0x860066*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x860068*/
    if ( v2 ) /*0x86006c*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x860070*/
    v0 = OB_ShaderConstantStorage_010201A0[0x588]; /*0x860075*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x588]); /*0x86007d*/
    if ( v145 ) /*0x860081*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x860083*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x860088*/
  NiD3DPass_SetVertexShader( /*0x860098*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x524]));
  NiD3DPass_SetPixelShader( /*0x8600a6*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x43B]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8600ab*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8600b6*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x8600c2*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8600c7*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8600d2*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x8600de*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8600e3*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8600ee*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x8600fa*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8600ff*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86010a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x860116*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x589]); /*0x86011b*/
  OB_ShaderConstantStorage_010201A0[0x2F6] = 1.5022268e-31; /*0x860121*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x32C]) = 0x16; /*0x860127*/
  if ( !v2 ) /*0x860131*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x860133*/
    if ( v2 ) /*0x860137*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x86013b*/
    v0 = OB_ShaderConstantStorage_010201A0[0x589]; /*0x860140*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x589]); /*0x860148*/
    if ( v145 ) /*0x86014c*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x86014e*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x860153*/
  NiD3DPass_SetVertexShader( /*0x860164*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x523]));
  NiD3DPass_SetPixelShader( /*0x860171*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x43F]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860176*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860181*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x86018d*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860192*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86019d*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x8601a9*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8601ae*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8601b9*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x8601c5*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8601ca*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8601d5*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x8601e1*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x58A]); /*0x8601e6*/
  OB_ShaderConstantStorage_010201A0[0x2F7] = 1.5022256e-31; /*0x8601ec*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x32D]) = 0x16; /*0x8601f2*/
  if ( !v2 ) /*0x8601fc*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x8601fe*/
    if ( v2 ) /*0x860202*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x860206*/
    v0 = OB_ShaderConstantStorage_010201A0[0x58A]; /*0x86020b*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x58A]); /*0x860213*/
    if ( v145 ) /*0x860217*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x860219*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x86021e*/
  NiD3DPass_SetVertexShader( /*0x86022f*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x523]));
  NiD3DPass_SetPixelShader( /*0x86023d*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x443]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860242*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86024d*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x860259*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86025e*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860269*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x860275*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86027a*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860285*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x860291*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860296*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8602a1*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x8602ad*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x58B]); /*0x8602b2*/
  OB_ShaderConstantStorage_010201A0[0x2F8] = 1.5022256e-31; /*0x8602b8*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x32E]) = 0x36; /*0x8602be*/
  if ( !v2 ) /*0x8602c4*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x8602c6*/
    if ( v2 ) /*0x8602ca*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x8602ce*/
    v0 = OB_ShaderConstantStorage_010201A0[0x58B]; /*0x8602d3*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x58B]); /*0x8602db*/
    if ( v145 ) /*0x8602df*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x8602e1*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x8602e6*/
  NiD3DPass_SetVertexShader( /*0x8602f6*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x524]));
  NiD3DPass_SetPixelShader( /*0x860304*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x443]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860309*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860314*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x860320*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860325*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860330*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x86033c*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860341*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86034c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 1, 0); /*0x860358*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86035d*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860368*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x860374*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x58C]); /*0x860379*/
  OB_ShaderConstantStorage_010201A0[0x2F9] = 1.5022268e-31; /*0x86037f*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x32F]) = 0x36; /*0x860385*/
  if ( !v2 ) /*0x86038b*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x86038d*/
    if ( v2 ) /*0x860391*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x860395*/
    v0 = OB_ShaderConstantStorage_010201A0[0x58C]; /*0x86039a*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x58C]); /*0x8603a2*/
    if ( v145 ) /*0x8603a6*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x8603a8*/
  }
  if ( *(_DWORD *)(LODWORD(v0) + 0x18) < 2u ) /*0x8603b6*/
  {
    v63 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x8603c1*/
    LOBYTE(v148) = 2; /*0x8603ce*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v63); /*0x8603d2*/
    v64 = v147; /*0x8603d7*/
    LOBYTE(v148) = 1; /*0x8603dd*/
    if ( v147 ) /*0x8603e2*/
    {
      --v147[7].Unk08; /*0x8603e4*/
      if ( !v64[7].Unk08 ) /*0x8603ed*/
        sub_772560(v64); /*0x8603f2*/
    }
    v65 = a3; /*0x8603f7*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x860401*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v65); /*0x860410*/
    v66 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x86041a*/
    LOBYTE(v148) = 3; /*0x860427*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v66); /*0x86042c*/
    v67 = v147; /*0x860431*/
    LOBYTE(v148) = 1; /*0x860437*/
    if ( v147 ) /*0x86043c*/
    {
      --v147[7].Unk08; /*0x86043e*/
      if ( !v67[7].Unk08 ) /*0x860447*/
        sub_772560(v67); /*0x86044c*/
    }
    v68 = a3; /*0x860451*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86045b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v68); /*0x86046a*/
  }
  NiD3DPass_SetVertexShader( /*0x860477*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x525]));
  NiD3DPass_SetPixelShader( /*0x860485*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x445]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86048a*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860495*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x8604a1*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8604a6*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8604b1*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x8604bd*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8604c2*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8604cd*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x8604d9*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8604de*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8604e9*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x8604f5*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8604fa*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860505*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 2, 0); /*0x860510*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860515*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860520*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 2, 0); /*0x86052b*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860530*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86053b*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x860547*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x58D]); /*0x86054c*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2FA]) = 0x8802; /*0x860557*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x330]) = 0x10; /*0x86055d*/
  if ( !v2 ) /*0x860567*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x860569*/
    if ( v2 ) /*0x86056d*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x860571*/
    v0 = OB_ShaderConstantStorage_010201A0[0x58D]; /*0x860576*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x58D]); /*0x86057e*/
    if ( v145 ) /*0x860582*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x860584*/
  }
  if ( *(_DWORD *)(LODWORD(v0) + 0x18) < 2u ) /*0x86058d*/
  {
    v69 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x860598*/
    LOBYTE(v148) = 4; /*0x8605a5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v69); /*0x8605aa*/
    v70 = v147; /*0x8605af*/
    LOBYTE(v148) = 1; /*0x8605b5*/
    if ( v147 ) /*0x8605ba*/
    {
      --v147[7].Unk08; /*0x8605bc*/
      if ( !v70[7].Unk08 ) /*0x8605c5*/
        sub_772560(v70); /*0x8605ca*/
    }
    v71 = a3; /*0x8605cf*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8605d9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v71); /*0x8605e8*/
    v72 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x8605f2*/
    LOBYTE(v148) = 5; /*0x8605ff*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v72); /*0x860604*/
    v73 = v147; /*0x860609*/
    LOBYTE(v148) = 1; /*0x86060f*/
    if ( v147 ) /*0x860614*/
    {
      --v147[7].Unk08; /*0x860616*/
      if ( !v73[7].Unk08 ) /*0x86061f*/
        sub_772560(v73); /*0x860624*/
    }
    v74 = a3; /*0x860629*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x860633*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v74); /*0x860642*/
  }
  NiD3DPass_SetVertexShader( /*0x86064f*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x525]));
  NiD3DPass_SetPixelShader( /*0x86065d*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x446]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860662*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86066d*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x860679*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86067e*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860689*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x860695*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86069a*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8606a5*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x8606b1*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8606b6*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8606c1*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x8606cd*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8606d2*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8606dd*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 2, 0); /*0x8606e8*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8606ed*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8606f8*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 2, 0); /*0x860703*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860708*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860713*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x86071f*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x58E]); /*0x860724*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2FB]) = 0x8802; /*0x86072a*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x331]) = 0x10; /*0x860730*/
  if ( !v2 ) /*0x86073a*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x86073c*/
    if ( v2 ) /*0x860740*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x860744*/
    v0 = OB_ShaderConstantStorage_010201A0[0x58E]; /*0x860749*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x58E]); /*0x860751*/
    if ( v145 ) /*0x860755*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x860757*/
  }
  if ( *(_DWORD *)(LODWORD(v0) + 0x18) < 2u ) /*0x860760*/
  {
    v75 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x86076b*/
    LOBYTE(v148) = 6; /*0x860778*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v75); /*0x86077d*/
    v76 = v147; /*0x860782*/
    LOBYTE(v148) = 1; /*0x860788*/
    if ( v147 ) /*0x86078d*/
    {
      --v147[7].Unk08; /*0x86078f*/
      if ( !v76[7].Unk08 ) /*0x860798*/
        sub_772560(v76); /*0x86079d*/
    }
    v77 = a3; /*0x8607a2*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8607ac*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v77); /*0x8607bb*/
    v78 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x8607c5*/
    LOBYTE(v148) = 7; /*0x8607d2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v78); /*0x8607d7*/
    v79 = v147; /*0x8607dc*/
    LOBYTE(v148) = 1; /*0x8607e2*/
    if ( v147 ) /*0x8607e7*/
    {
      --v147[7].Unk08; /*0x8607e9*/
      if ( !v79[7].Unk08 ) /*0x8607f2*/
        sub_772560(v79); /*0x8607f7*/
    }
    v80 = a3; /*0x8607fc*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x860806*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v80); /*0x860815*/
  }
  NiD3DPass_SetVertexShader( /*0x860822*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x526]));
  NiD3DPass_SetPixelShader( /*0x860830*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x445]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860835*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860840*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x86084c*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860851*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86085c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x860868*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86086d*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860878*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x860884*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860889*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860894*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x8608a0*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8608a5*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8608b0*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 2, 0); /*0x8608bb*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8608c0*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8608cb*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 2, 0); /*0x8608d6*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8608db*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8608e6*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x8608f2*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x58F]); /*0x8608f7*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2FC]) = 0x8802; /*0x8608fd*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x332]) = 0x10; /*0x860903*/
  if ( !v2 ) /*0x86090d*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x86090f*/
    if ( v2 ) /*0x860913*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x860917*/
    v0 = OB_ShaderConstantStorage_010201A0[0x58F]; /*0x86091c*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x58F]); /*0x860924*/
    if ( v145 ) /*0x860928*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x86092a*/
  }
  if ( *(_DWORD *)(LODWORD(v0) + 0x18) < 2u ) /*0x860933*/
  {
    v81 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x86093e*/
    LOBYTE(v148) = 8; /*0x86094b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v81); /*0x860950*/
    v82 = v147; /*0x860955*/
    LOBYTE(v148) = 1; /*0x86095b*/
    if ( v147 ) /*0x860960*/
    {
      --v147[7].Unk08; /*0x860962*/
      if ( !v82[7].Unk08 ) /*0x86096b*/
        sub_772560(v82); /*0x860970*/
    }
    v83 = a3; /*0x860975*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86097f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v83); /*0x86098e*/
    v84 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x860998*/
    LOBYTE(v148) = 9; /*0x8609a5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v84); /*0x8609aa*/
    v85 = v147; /*0x8609af*/
    LOBYTE(v148) = 1; /*0x8609b5*/
    if ( v147 ) /*0x8609ba*/
    {
      --v147[7].Unk08; /*0x8609bc*/
      if ( !v85[7].Unk08 ) /*0x8609c5*/
        sub_772560(v85); /*0x8609ca*/
    }
    v86 = a3; /*0x8609cf*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8609d9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v86); /*0x8609e8*/
  }
  NiD3DPass_SetVertexShader( /*0x8609f5*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x526]));
  NiD3DPass_SetPixelShader( /*0x860a03*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x446]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860a08*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860a13*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x860a1f*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860a24*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860a2f*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x860a3b*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860a40*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860a4b*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x860a57*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860a5c*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860a67*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x860a73*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860a78*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860a83*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 2, 0); /*0x860a8e*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860a93*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860a9e*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 2, 0); /*0x860aa9*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860aae*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860ab9*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x860ac5*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x590]); /*0x860aca*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x2FD]) = 0x8802; /*0x860ad0*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x333]) = 0x10; /*0x860ad6*/
  if ( !v2 ) /*0x860ae0*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x860ae2*/
    if ( v2 ) /*0x860ae6*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x860aea*/
    v0 = OB_ShaderConstantStorage_010201A0[0x590]; /*0x860aef*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x590]); /*0x860af7*/
    if ( v145 ) /*0x860afb*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x860afd*/
  }
  if ( *(_DWORD *)(LODWORD(v0) + 0x18) < 2u ) /*0x860b04*/
  {
    v87 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x860b0f*/
    LOBYTE(v148) = 0xA; /*0x860b1c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v87); /*0x860b21*/
    v88 = v147; /*0x860b26*/
    LOBYTE(v148) = 1; /*0x860b2c*/
    if ( v147 ) /*0x860b31*/
    {
      --v147[7].Unk08; /*0x860b33*/
      if ( !v88[7].Unk08 ) /*0x860b3c*/
        sub_772560(v88); /*0x860b41*/
    }
    v89 = a3; /*0x860b46*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x860b50*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v89); /*0x860b5f*/
    v90 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x860b69*/
    LOBYTE(v148) = 0xB; /*0x860b76*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v90); /*0x860b7b*/
    v91 = v147; /*0x860b80*/
    LOBYTE(v148) = 1; /*0x860b86*/
    if ( v147 ) /*0x860b8b*/
    {
      --v147[7].Unk08; /*0x860b8d*/
      if ( !v91[7].Unk08 ) /*0x860b96*/
        sub_772560(v91); /*0x860b9b*/
    }
    v92 = a3; /*0x860ba0*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x860baa*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v92); /*0x860bb9*/
  }
  NiD3DPass_SetVertexShader( /*0x860bc6*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x527]));
  NiD3DPass_SetPixelShader( /*0x860bd4*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x445]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860bd9*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860be4*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x860bf0*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860bf5*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860c00*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x860c0c*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860c11*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860c1c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x860c28*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860c2d*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860c38*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x860c44*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860c49*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860c54*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 2, 0); /*0x860c5f*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860c64*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860c6f*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 2, 0); /*0x860c7a*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860c7f*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860c8a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x860c96*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x591]); /*0x860c9b*/
  OB_ShaderConstantStorage_010201A0[0x2FE] = 2.5342193e-29; /*0x860ca6*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x334]) = 0x10; /*0x860cac*/
  if ( !v2 ) /*0x860cb6*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x860cb8*/
    if ( v2 ) /*0x860cbc*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x860cc0*/
    v0 = OB_ShaderConstantStorage_010201A0[0x591]; /*0x860cc5*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x591]); /*0x860ccd*/
    if ( v145 ) /*0x860cd1*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x860cd3*/
  }
  if ( *(_DWORD *)(LODWORD(v0) + 0x18) < 2u ) /*0x860cda*/
  {
    v93 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x860ce5*/
    LOBYTE(v148) = 0xC; /*0x860cf2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v93); /*0x860cf7*/
    v94 = v147; /*0x860cfc*/
    LOBYTE(v148) = 1; /*0x860d02*/
    if ( v147 ) /*0x860d07*/
    {
      --v147[7].Unk08; /*0x860d09*/
      if ( !v94[7].Unk08 ) /*0x860d12*/
        sub_772560(v94); /*0x860d17*/
    }
    v95 = a3; /*0x860d1c*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x860d26*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v95); /*0x860d35*/
    v96 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x860d3f*/
    LOBYTE(v148) = 0xD; /*0x860d4c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v96); /*0x860d51*/
    v97 = v147; /*0x860d56*/
    LOBYTE(v148) = 1; /*0x860d5c*/
    if ( v147 ) /*0x860d61*/
    {
      --v147[7].Unk08; /*0x860d63*/
      if ( !v97[7].Unk08 ) /*0x860d6c*/
        sub_772560(v97); /*0x860d71*/
    }
    v98 = a3; /*0x860d76*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x860d80*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v98); /*0x860d8f*/
  }
  NiD3DPass_SetVertexShader( /*0x860d9c*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x528]));
  NiD3DPass_SetPixelShader( /*0x860daa*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x445]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860daf*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860dba*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x860dc6*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860dcb*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860dd6*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x860de2*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860de7*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860df2*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x860dfe*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860e03*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860e0e*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x860e1a*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860e1f*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860e2a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 2, 0); /*0x860e35*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860e3a*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860e45*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 2, 0); /*0x860e50*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860e55*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860e60*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x860e6c*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x592]); /*0x860e71*/
  OB_ShaderConstantStorage_010201A0[0x2FF] = 2.5342193e-29; /*0x860e77*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x335]) = 0x10; /*0x860e7d*/
  if ( !v2 ) /*0x860e87*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x860e89*/
    if ( v2 ) /*0x860e8d*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x860e91*/
    v0 = OB_ShaderConstantStorage_010201A0[0x592]; /*0x860e96*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x592]); /*0x860e9e*/
    if ( v145 ) /*0x860ea2*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x860ea4*/
  }
  if ( *(_DWORD *)(LODWORD(v0) + 0x18) < 2u ) /*0x860ead*/
  {
    v99 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x860eb8*/
    LOBYTE(v148) = 0xE; /*0x860ec5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v99); /*0x860eca*/
    v100 = v147; /*0x860ecf*/
    LOBYTE(v148) = 1; /*0x860ed5*/
    if ( v147 ) /*0x860eda*/
    {
      --v147[7].Unk08; /*0x860edc*/
      if ( !v100[7].Unk08 ) /*0x860ee5*/
        sub_772560(v100); /*0x860eea*/
    }
    v101 = a3; /*0x860eef*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x860ef9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v101); /*0x860f08*/
    v102 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x860f12*/
    LOBYTE(v148) = 0xF; /*0x860f1f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v102); /*0x860f24*/
    v103 = v147; /*0x860f29*/
    LOBYTE(v148) = 1; /*0x860f2f*/
    if ( v147 ) /*0x860f34*/
    {
      --v147[7].Unk08; /*0x860f36*/
      if ( !v103[7].Unk08 ) /*0x860f3f*/
        sub_772560(v103); /*0x860f44*/
    }
    v104 = a3; /*0x860f49*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x860f53*/
    NiD3DPass_SetTextureStage((NiD3DPass *)LODWORD(v0), *(_DWORD *)(LODWORD(v0) + 0x14), v104); /*0x860f62*/
  }
  NiD3DPass_SetVertexShader( /*0x860f6f*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x529]));
  NiD3DPass_SetPixelShader( /*0x860f7d*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x447]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860f82*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860f8d*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x860f99*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860f9e*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860fa9*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x860fb5*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860fba*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860fc5*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x860fd1*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860fd6*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860fe1*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x860fed*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x860ff2*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x860ffd*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 2, 0); /*0x861008*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86100d*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861018*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 2, 0); /*0x861023*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861028*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861033*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x86103f*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x593]); /*0x861044*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x300]) = 0x208802; /*0x86104a*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x336]) = 0x10; /*0x861054*/
  if ( !v2 ) /*0x86105e*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x861060*/
    if ( v2 ) /*0x861064*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x861068*/
    v0 = OB_ShaderConstantStorage_010201A0[0x593]; /*0x86106d*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x593]); /*0x861075*/
    if ( v145 ) /*0x861079*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x86107b*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0));// Initialize seven texture stages for selector 0x14E; setup later binds the shadow map to stage 2. /*0x861080*/
  NiD3DPass_SetVertexShader( /*0x861091*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x52A]));// Selector 0x14E / pool[36]: SM3013 SimpleShadow vertex + SM3023 SimpleShadow pixel; vMask=0x00030802, pMask=0x00000C10.
  NiD3DPass_SetPixelShader( /*0x86109e*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x448]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8610a3*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8610ae*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0);// Selectors 0x14E..0x151 share this state tuple: ZENABLE=TRUE, ZFUNC=LESSEQUAL, ZWRITE=FALSE, ALPHABLEND=TRUE, SRCBLEND=DESTCOLOR, DESTBLEND=ZERO, STENCIL=FALSE, CLIPPLANEENABLE=0x3F. /*0x8610ba*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8610bf*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8610ca*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x8610d6*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8610db*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8610e6*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x8610f2*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8610f7*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861102*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x86110e*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861113*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86111e*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 9, 0);// D3DRS_SRCBLEND=D3DBLEND_DESTCOLOR; with DESTBLEND=ZERO this is multiplicative destination-color modulation. /*0x86112a*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86112f*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86113a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 1, 0);// D3DRS_DESTBLEND=D3DBLEND_ZERO. /*0x861146*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86114b*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861156*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x861162*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861167*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861172*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x98, 0x3F, 1);// D3DRS_CLIPPLANEENABLE=0x3F (all six user clip planes). /*0x861185*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x594]); /*0x86118a*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x301]) = 0x30802;// Selector 0x14E masks: vertex=0x00030802, pixel=0x00000C10. /*0x86119a*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x337]) = 0xC10; /*0x8611a0*/
  if ( !v2 ) /*0x8611a6*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x8611a8*/
    if ( v2 ) /*0x8611ac*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x8611b0*/
    v0 = OB_ShaderConstantStorage_010201A0[0x594]; /*0x8611b5*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x594]); /*0x8611bd*/
    if ( v145 ) /*0x8611c1*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x8611c3*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x8611c7*/
  NiD3DPass_SetVertexShader( /*0x8611d8*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x52B]));// Selector 0x14F / pool[37]: SM3014 SimpleShadow VC + SM3023; same seven stages/state tuple; vMask=0x00030802, pMask=0x00000C10.
  NiD3DPass_SetPixelShader( /*0x8611e6*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x448]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8611eb*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8611f6*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x861201*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861206*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861211*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x86121d*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861222*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86122d*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x861239*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86123e*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861249*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x861254*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861259*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861264*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 9, 0); /*0x861270*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861275*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861280*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 1, 0); /*0x86128b*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861290*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86129b*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x8612a7*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8612ac*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8612b7*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x98, 0x3F, 1); /*0x8612c5*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x595]); /*0x8612ca*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x302]) = 0x30802;// Selector 0x14F masks: vertex=0x00030802, pixel=0x00000C10. /*0x8612d0*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x338]) = 0xC10; /*0x8612d6*/
  if ( !v2 ) /*0x8612dc*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x8612de*/
    if ( v2 ) /*0x8612e2*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x8612e6*/
    v0 = OB_ShaderConstantStorage_010201A0[0x595]; /*0x8612eb*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x595]); /*0x8612f3*/
    if ( v145 ) /*0x8612f7*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x8612f9*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x8612fd*/
  NiD3DPass_SetVertexShader( /*0x86130d*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x52C]));// Selector 0x150 / pool[38]: SM3015 SimpleShadow SKIN + SM3023; same seven stages/state tuple; vMask=0x0003080C, pMask=0x00000C10.
  NiD3DPass_SetPixelShader( /*0x86131b*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x448]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861320*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86132b*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x861336*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86133b*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861346*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x861352*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861357*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861362*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x86136e*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861373*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86137e*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x861389*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86138e*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861399*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 9, 0); /*0x8613a5*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8613aa*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8613b5*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 1, 0); /*0x8613c0*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8613c5*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8613d0*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x8613dc*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8613e1*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8613ec*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x98, 0x3F, 1); /*0x8613fa*/
  v2 = LODWORD(v0) == LODWORD(OB_ShaderConstantStorage_010201A0[0x596]); /*0x8613ff*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x303]) = 0x3080C;// Selector 0x150 masks: vertex=0x0003080C, pixel=0x00000C10. /*0x86140a*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x339]) = 0xC10; /*0x861410*/
  if ( !v2 ) /*0x861416*/
  {
    v2 = (*(_DWORD *)(LODWORD(v0) + 0x60))-- == 1; /*0x861418*/
    if ( v2 ) /*0x86141c*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)LODWORD(v0)); /*0x861420*/
    v0 = OB_ShaderConstantStorage_010201A0[0x596]; /*0x861425*/
    v145 = (NiD3DPassVtbl **)LODWORD(OB_ShaderConstantStorage_010201A0[0x596]); /*0x86142d*/
    if ( v145 ) /*0x861431*/
      ++*(_DWORD *)(LODWORD(v0) + 0x60); /*0x861433*/
  }
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)LODWORD(v0)); /*0x861437*/
  NiD3DPass_SetVertexShader( /*0x861448*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x52D]));// Selector 0x151 / pool[39]: SM3016 SimpleShadow SKIN VC + SM3023; same seven stages/state tuple; vMask=0x0003080C, pMask=0x00000C10.
  NiD3DPass_SetPixelShader( /*0x861455*/
    (NiD3DPass *)LODWORD(v0),
    (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x448]));
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86145a*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861465*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 7, 1, 0); /*0x861470*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861475*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861480*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x17, 4, 0); /*0x86148c*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x861491*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86149c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0xE, 0, 0); /*0x8614a8*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8614ad*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8614b8*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x1B, 1, 0); /*0x8614c3*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8614c8*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8614d3*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x13, 9, 0); /*0x8614df*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8614e4*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8614ef*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x14, 1, 0); /*0x8614fa*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x8614ff*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86150a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x34, 0, 0); /*0x861516*/
  if ( !*(_DWORD *)(LODWORD(v0) + 0x30) ) /*0x86151b*/
    *(_DWORD *)(LODWORD(v0) + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x861526*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(LODWORD(v0) + 0x30), 0x98, 0x3F, 1); /*0x861534*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x304]) = 0x3080C;// Selector 0x151 masks: vertex=0x0003080C, pixel=0x00000C10. /*0x861542*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x33A]) = 0xC10; /*0x861548*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x597]); /*0x86154e*/
  v105 = (NiD3DPass *)v145; /*0x861553*/
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)v145); /*0x861558*/
  NiD3DTextureStage_ApplyAddressModePreset((NiD3DTextureStage *)v105->Stages.data->Texture, 0); /*0x861568*/
  NiD3DPass_SetVertexShader(v105, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x52E])); /*0x861576*/
  NiD3DPass_SetPixelShader(v105, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x449])); /*0x861583*/
  if ( !v105->RenderStateGroup ) /*0x861588*/
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861593*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v105->RenderStateGroup, 7, 1, 0); /*0x86159f*/
  if ( !v105->RenderStateGroup ) /*0x8615a4*/
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8615ae*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v105->RenderStateGroup, 0x17, 4, 0); /*0x8615b9*/
  if ( !v105->RenderStateGroup ) /*0x8615be*/
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8615c8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v105->RenderStateGroup, 0xE, 0, 0); /*0x8615d2*/
  if ( !v105->RenderStateGroup ) /*0x8615d7*/
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8615e1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v105->RenderStateGroup, 0x1B, 1, 0); /*0x8615eb*/
  if ( !v105->RenderStateGroup ) /*0x8615f0*/
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8615fa*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v105->RenderStateGroup, 0x13, 9, 0); /*0x861605*/
  if ( !v105->RenderStateGroup ) /*0x86160a*/
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861614*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v105->RenderStateGroup, 0x14, 6, 0); /*0x86161f*/
  if ( !v105->RenderStateGroup ) /*0x861624*/
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86162e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v105->RenderStateGroup, 0xF, 1, 0); /*0x861638*/
  if ( !v105->RenderStateGroup ) /*0x86163d*/
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861647*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v105->RenderStateGroup, 0x19, 5, 0); /*0x861652*/
  if ( !v105->RenderStateGroup ) /*0x861657*/
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861661*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v105->RenderStateGroup, 0x18, 0, 0); /*0x86166b*/
  if ( !v105->RenderStateGroup ) /*0x861670*/
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86167a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v105->RenderStateGroup, 0x34, 0, 0); /*0x861684*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x305]) = 2; /*0x861697*/
  OB_ShaderConstantStorage_010201A0[0x33B] = 0.0; /*0x86169d*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x598]); /*0x8616a3*/
  v106 = (NiD3DPass *)v145; /*0x8616a8*/
  Lighting30Pass_InitializeSevenTextureStages((NiD3DPass *)v145); /*0x8616ad*/
  NiD3DTextureStage_ApplyAddressModePreset((NiD3DTextureStage *)v106->Stages.data->Texture, 0); /*0x8616bc*/
  NiD3DPass_SetVertexShader(v106, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x52E])); /*0x8616ca*/
  NiD3DPass_SetPixelShader(v106, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x44A])); /*0x8616d7*/
  if ( !v106->RenderStateGroup ) /*0x8616dc*/
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8616e6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v106->RenderStateGroup, 7, 1, 0); /*0x8616f0*/
  if ( !v106->RenderStateGroup ) /*0x8616f5*/
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8616ff*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v106->RenderStateGroup, 0x17, 4, 0); /*0x86170a*/
  if ( !v106->RenderStateGroup ) /*0x86170f*/
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861719*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v106->RenderStateGroup, 0xE, 0, 0); /*0x861723*/
  if ( !v106->RenderStateGroup ) /*0x861728*/
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861732*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v106->RenderStateGroup, 0x1B, 1, 0); /*0x86173c*/
  if ( !v106->RenderStateGroup ) /*0x861741*/
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86174b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v106->RenderStateGroup, 0x13, 9, 0); /*0x861756*/
  if ( !v106->RenderStateGroup ) /*0x86175b*/
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861765*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v106->RenderStateGroup, 0x14, 6, 0); /*0x861770*/
  if ( !v106->RenderStateGroup ) /*0x861775*/
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86177f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v106->RenderStateGroup, 0xF, 1, 0); /*0x861789*/
  if ( !v106->RenderStateGroup ) /*0x86178e*/
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861798*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v106->RenderStateGroup, 0x19, 5, 0); /*0x8617a3*/
  if ( !v106->RenderStateGroup ) /*0x8617a8*/
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8617b2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v106->RenderStateGroup, 0x18, 0, 0); /*0x8617bc*/
  if ( !v106->RenderStateGroup ) /*0x8617c1*/
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8617cb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v106->RenderStateGroup, 0x34, 0, 0); /*0x8617d5*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x306]) = 2; /*0x8617e3*/
  OB_ShaderConstantStorage_010201A0[0x33C] = 0.0; /*0x8617e9*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x59B]); /*0x8617ef*/
  v107 = (NiD3DPass *)v145; /*0x8617f4*/
  if ( !v145[6] ) /*0x8617f8*/
  {
    v108 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x861802*/
    LOBYTE(v148) = 0x10; /*0x86180f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v108); /*0x861814*/
    v109 = v147; /*0x861819*/
    LOBYTE(v148) = 1; /*0x86181f*/
    if ( v147 ) /*0x861824*/
    {
      --v147[7].Unk08; /*0x861826*/
      if ( !v109[7].Unk08 ) /*0x86182f*/
        sub_772560(v109); /*0x861833*/
    }
    v110 = a3; /*0x861839*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x861840*/
    NiD3DPass_SetTextureStage(v107, v107->CurrentStage, v110); /*0x86184f*/
  }
  NiD3DPass_SetVertexShader(v107, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x531])); /*0x86185c*/
  NiD3DPass_SetPixelShader(v107, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x44D])); /*0x86186a*/
  if ( !v107->RenderStateGroup ) /*0x86186f*/
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861879*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v107->RenderStateGroup, 0x1B, 0, 0); /*0x861883*/
  if ( !v107->RenderStateGroup ) /*0x861888*/
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861892*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v107->RenderStateGroup, 0xF, 0, 0); /*0x86189c*/
  if ( !v107->RenderStateGroup ) /*0x8618a1*/
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8618ab*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v107->RenderStateGroup, 7, 1, 0); /*0x8618b5*/
  if ( !v107->RenderStateGroup ) /*0x8618ba*/
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8618c4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v107->RenderStateGroup, 0x17, 4, 0); /*0x8618cf*/
  if ( !v107->RenderStateGroup ) /*0x8618d4*/
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8618de*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v107->RenderStateGroup, 0xE, 1, 0); /*0x8618e8*/
  if ( !v107->RenderStateGroup ) /*0x8618ed*/
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8618f7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v107->RenderStateGroup, 0x34, 0, 0); /*0x861903*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x309]) = 0x12; /*0x86191b*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x33F]) = 0x200; /*0x861921*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x59C]); /*0x861927*/
  v111 = (NiD3DPass *)v145; /*0x86192c*/
  if ( !v145[6] ) /*0x861930*/
  {
    v112 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x86193b*/
    LOBYTE(v148) = 0x11; /*0x861948*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v112); /*0x86194d*/
    v113 = v147; /*0x861952*/
    LOBYTE(v148) = 1; /*0x861958*/
    if ( v147 ) /*0x86195d*/
    {
      --v147[7].Unk08; /*0x86195f*/
      if ( !v113[7].Unk08 ) /*0x861968*/
        sub_772560(v113); /*0x86196d*/
    }
    v114 = a3; /*0x861972*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86197d*/
    NiD3DPass_SetTextureStage(v111, v111->CurrentStage, v114); /*0x86198c*/
  }
  NiD3DPass_SetVertexShader(v111, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x532])); /*0x86199a*/
  NiD3DPass_SetPixelShader(v111, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x44E])); /*0x8619a8*/
  if ( !v111->RenderStateGroup ) /*0x8619ad*/
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8619b8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v111->RenderStateGroup, 0x1B, 0, 0); /*0x8619c4*/
  if ( !v111->RenderStateGroup ) /*0x8619c9*/
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8619d4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v111->RenderStateGroup, 0xF, 0, 0); /*0x8619e0*/
  if ( !v111->RenderStateGroup ) /*0x8619e5*/
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8619f0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v111->RenderStateGroup, 7, 1, 0); /*0x8619fc*/
  if ( !v111->RenderStateGroup ) /*0x861a01*/
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861a0c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v111->RenderStateGroup, 0x17, 4, 0); /*0x861a18*/
  if ( !v111->RenderStateGroup ) /*0x861a1d*/
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861a28*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v111->RenderStateGroup, 0xE, 1, 0); /*0x861a34*/
  if ( !v111->RenderStateGroup ) /*0x861a39*/
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861a44*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v111->RenderStateGroup, 0x34, 0, 0); /*0x861a50*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x30A]) = 0x2C; /*0x861a63*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x340]) = 0x200; /*0x861a69*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x59D]); /*0x861a6f*/
  v115 = (NiD3DPass *)v145; /*0x861a74*/
  if ( !v145[6] ) /*0x861a78*/
  {
    v116 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x861a83*/
    LOBYTE(v148) = 0x12; /*0x861a90*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v116); /*0x861a94*/
    v117 = v147; /*0x861a99*/
    LOBYTE(v148) = 1; /*0x861a9f*/
    if ( v147 ) /*0x861aa4*/
    {
      --v147[7].Unk08; /*0x861aa6*/
      if ( !v117[7].Unk08 ) /*0x861aaf*/
        sub_772560(v117); /*0x861ab4*/
    }
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x861ac4*/
    NiD3DPass_SetTextureStage(v115, v115->CurrentStage, a3); /*0x861ad7*/
  }
  NiD3DPass_SetVertexShader(v115, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x533])); /*0x861ae5*/
  NiD3DPass_SetPixelShader(v115, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x44F])); /*0x861af3*/
  if ( !v115->RenderStateGroup ) /*0x861af8*/
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861b03*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v115->RenderStateGroup, 0x1B, 1, 0); /*0x861b0f*/
  if ( !v115->RenderStateGroup ) /*0x861b14*/
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861b1f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v115->RenderStateGroup, 0x13, 5, 0); /*0x861b2b*/
  if ( !v115->RenderStateGroup ) /*0x861b30*/
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861b3b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v115->RenderStateGroup, 0x14, 6, 0); /*0x861b47*/
  if ( !v115->RenderStateGroup ) /*0x861b4c*/
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861b57*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v115->RenderStateGroup, 0xF, 0, 0); /*0x861b63*/
  if ( !v115->RenderStateGroup ) /*0x861b68*/
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861b73*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v115->RenderStateGroup, 7, 1, 0); /*0x861b7f*/
  if ( !v115->RenderStateGroup ) /*0x861b84*/
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861b8f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v115->RenderStateGroup, 0x17, 4, 0); /*0x861b9b*/
  if ( !v115->RenderStateGroup ) /*0x861ba0*/
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861bab*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v115->RenderStateGroup, 0xE, 0, 0); /*0x861bb7*/
  if ( !v115->RenderStateGroup ) /*0x861bbc*/
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861bc7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v115->RenderStateGroup, 0x34, 0, 0); /*0x861bd3*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x30B]) = 0x108012; /*0x861be1*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x341]) = 0x200; /*0x861beb*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x59E]); /*0x861bf1*/
  v118 = (NiD3DPass *)v145; /*0x861bfb*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v145, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x534])); /*0x861c02*/
  NiD3DPass_SetPixelShader(v118, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x450])); /*0x861c10*/
  if ( !v118->RenderStateGroup ) /*0x861c15*/
    v118->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861c20*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v118->RenderStateGroup, 0x1B, 0, 0); /*0x861c2c*/
  if ( !v118->RenderStateGroup ) /*0x861c31*/
    v118->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861c3b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v118->RenderStateGroup, 0xF, 0, 0); /*0x861c45*/
  if ( !v118->RenderStateGroup ) /*0x861c4a*/
    v118->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861c54*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v118->RenderStateGroup, 7, 0, 0); /*0x861c5e*/
  if ( !v118->RenderStateGroup ) /*0x861c63*/
    v118->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861c6d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v118->RenderStateGroup, 0xE, 0, 0); /*0x861c77*/
  if ( !v118->RenderStateGroup ) /*0x861c7c*/
    v118->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861c86*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v118->RenderStateGroup, 0x34, 0, 0); /*0x861c90*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x30C]) = 2; /*0x861c9e*/
  OB_ShaderConstantStorage_010201A0[0x342] = 0.0; /*0x861ca8*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x59F]); /*0x861cae*/
  v119 = (NiD3DPass *)v145; /*0x861cb9*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v145, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x535])); /*0x861cc0*/
  NiD3DPass_SetPixelShader(v119, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x451])); /*0x861ccd*/
  if ( !v119->RenderStateGroup ) /*0x861cd2*/
    v119->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861cdc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v119->RenderStateGroup, 0x1B, 0, 0); /*0x861ce6*/
  if ( !v119->RenderStateGroup ) /*0x861ceb*/
    v119->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861cf5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v119->RenderStateGroup, 0xF, 0, 0); /*0x861cff*/
  if ( !v119->RenderStateGroup ) /*0x861d04*/
    v119->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861d0e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v119->RenderStateGroup, 7, 0, 0); /*0x861d18*/
  if ( !v119->RenderStateGroup ) /*0x861d1d*/
    v119->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861d27*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v119->RenderStateGroup, 0xE, 0, 0); /*0x861d31*/
  if ( !v119->RenderStateGroup ) /*0x861d36*/
    v119->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861d40*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v119->RenderStateGroup, 0x34, 0, 0); /*0x861d4a*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x30D]) = 0xC; /*0x861d58*/
  OB_ShaderConstantStorage_010201A0[0x343] = 0.0; /*0x861d62*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x5A3]); /*0x861d68*/
  v120 = (NiD3DPass *)v145; /*0x861d6d*/
  if ( (unsigned int)v145[6] < 2 ) /*0x861d75*/
  {
    v121 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x861d80*/
    LOBYTE(v148) = 0x13; /*0x861d8d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v121); /*0x861d92*/
    v122 = v147; /*0x861d97*/
    LOBYTE(v148) = 1; /*0x861d9d*/
    if ( v147 ) /*0x861da2*/
    {
      --v147[7].Unk08; /*0x861da4*/
      if ( !v122[7].Unk08 ) /*0x861dad*/
        sub_772560(v122); /*0x861db1*/
    }
    v123 = a3; /*0x861db6*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x861dc1*/
    NiD3DPass_SetTextureStage(v120, v120->CurrentStage, v123); /*0x861dd0*/
    v124 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x861dda*/
    LOBYTE(v148) = 0x14; /*0x861de7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v124); /*0x861dec*/
    v125 = v147; /*0x861df1*/
    LOBYTE(v148) = 1; /*0x861df7*/
    if ( v147 ) /*0x861dfc*/
    {
      --v147[7].Unk08; /*0x861dfe*/
      if ( !v125[7].Unk08 ) /*0x861e07*/
        sub_772560(v125); /*0x861e0c*/
    }
    v126 = a3; /*0x861e11*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x861e1c*/
    NiD3DPass_SetTextureStage(v120, v120->CurrentStage, v126); /*0x861e2b*/
  }
  NiD3DPass_SetVertexShader(v120, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x539])); /*0x861e3b*/
  NiD3DPass_SetPixelShader(v120, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x454])); /*0x861e48*/
  if ( !v120->RenderStateGroup ) /*0x861e4d*/
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861e57*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v120->RenderStateGroup, 0x1B, 1, 0); /*0x861e62*/
  if ( !v120->RenderStateGroup ) /*0x861e67*/
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861e71*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v120->RenderStateGroup, 0x13, 5, 0); /*0x861e7c*/
  if ( !v120->RenderStateGroup ) /*0x861e81*/
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861e8b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v120->RenderStateGroup, 0x14, 6, 0); /*0x861e96*/
  if ( !v120->RenderStateGroup ) /*0x861e9b*/
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861ea5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v120->RenderStateGroup, 0xF, 0, 0); /*0x861eaf*/
  if ( !v120->RenderStateGroup ) /*0x861eb4*/
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861ebe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v120->RenderStateGroup, 7, 1, 0); /*0x861ec9*/
  if ( !v120->RenderStateGroup ) /*0x861ece*/
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861ed8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v120->RenderStateGroup, 0x17, 3, 0); /*0x861ee3*/
  if ( !v120->RenderStateGroup ) /*0x861ee8*/
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861ef2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v120->RenderStateGroup, 0xE, 0, 0); /*0x861efc*/
  if ( !v120->RenderStateGroup ) /*0x861f01*/
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x861f0b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v120->RenderStateGroup, 0x34, 0, 0); /*0x861f15*/
  OB_ShaderConstantStorage_010201A0[0x311] = 0.0; /*0x861f23*/
  OB_ShaderConstantStorage_010201A0[0x347] = 0.0; /*0x861f29*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x5A4]); /*0x861f2f*/
  v127 = (NiD3DPass *)v145; /*0x861f34*/
  if ( (unsigned int)v145[6] < 2 ) /*0x861f3c*/
  {
    v128 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x861f47*/
    LOBYTE(v148) = 0x15; /*0x861f54*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v128); /*0x861f59*/
    v129 = v147; /*0x861f5e*/
    LOBYTE(v148) = 1; /*0x861f64*/
    if ( v147 ) /*0x861f69*/
    {
      --v147[7].Unk08; /*0x861f6b*/
      if ( !v129[7].Unk08 ) /*0x861f74*/
        sub_772560(v129); /*0x861f78*/
    }
    v130 = a3; /*0x861f7d*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x861f88*/
    NiD3DPass_SetTextureStage(v127, v127->CurrentStage, v130); /*0x861f97*/
    v131 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x861fa1*/
    LOBYTE(v148) = 0x16; /*0x861fae*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v131); /*0x861fb3*/
    v132 = v147; /*0x861fb8*/
    LOBYTE(v148) = 1; /*0x861fbe*/
    if ( v147 ) /*0x861fc3*/
    {
      --v147[7].Unk08; /*0x861fc5*/
      if ( !v132[7].Unk08 ) /*0x861fce*/
        sub_772560(v132); /*0x861fd3*/
    }
    v133 = a3; /*0x861fd8*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x861fe3*/
    NiD3DPass_SetTextureStage(v127, v127->CurrentStage, v133); /*0x861ff2*/
  }
  NiD3DPass_SetVertexShader(v127, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x53A])); /*0x862002*/
  NiD3DPass_SetPixelShader(v127, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x455])); /*0x86200f*/
  if ( !v127->RenderStateGroup ) /*0x862014*/
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86201e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v127->RenderStateGroup, 0x1B, 1, 0); /*0x862029*/
  if ( !v127->RenderStateGroup ) /*0x86202e*/
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862038*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v127->RenderStateGroup, 0x13, 5, 0); /*0x862043*/
  if ( !v127->RenderStateGroup ) /*0x862048*/
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862052*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v127->RenderStateGroup, 0x14, 6, 0); /*0x86205d*/
  if ( !v127->RenderStateGroup ) /*0x862062*/
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86206c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v127->RenderStateGroup, 0xF, 0, 0); /*0x862076*/
  if ( !v127->RenderStateGroup ) /*0x86207b*/
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862085*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v127->RenderStateGroup, 7, 1, 0); /*0x862090*/
  if ( !v127->RenderStateGroup ) /*0x862095*/
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86209f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v127->RenderStateGroup, 0x17, 3, 0); /*0x8620aa*/
  if ( !v127->RenderStateGroup ) /*0x8620af*/
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8620b9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v127->RenderStateGroup, 0xE, 0, 0); /*0x8620c3*/
  if ( !v127->RenderStateGroup ) /*0x8620c8*/
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8620d2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v127->RenderStateGroup, 0x34, 0, 0); /*0x8620dc*/
  OB_ShaderConstantStorage_010201A0[0x312] = 0.0; /*0x8620ea*/
  OB_ShaderConstantStorage_010201A0[0x348] = 0.0; /*0x8620f0*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x599]);// Initialize Lighting30 pool[42], selector 0x154: one BaseMap stage, rigid SM3018 vertex caster, shared SM3026 depth pixel shader. /*0x8620f6*/
  v134 = (NiD3DPass *)v145; /*0x8620fb*/
  if ( !v145[6] ) /*0x8620ff*/
  {
    v135 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x86210a*/
    LOBYTE(v148) = 0x17; /*0x862117*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v135); /*0x86211c*/
    v136 = v147; /*0x862121*/
    LOBYTE(v148) = 1; /*0x862127*/
    if ( v147 ) /*0x86212c*/
    {
      --v147[7].Unk08; /*0x86212e*/
      if ( !v136[7].Unk08 ) /*0x862137*/
        sub_772560(v136); /*0x86213b*/
    }
    v137 = a3; /*0x862140*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86214b*/
    NiD3DPass_SetTextureStage(v134, v134->CurrentStage, v137); /*0x86215a*/
  }
  NiD3DPass_SetVertexShader(v134, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x52F]));// Selector 0x154 vertex program pointer: retail Oblivion SM3018.vso, rigid ModelViewProj/WorldView caster transform. /*0x862169*/
  NiD3DPass_SetPixelShader(v134, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x44B]));// Selectors 0x154/0x155 shared pixel program: retail Oblivion SM3026.pso; RGB=viewSpaceZ/LightData.w, A=BaseMap.a. /*0x862177*/
  if ( !v134->RenderStateGroup ) /*0x86217c*/
    v134->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862186*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v134->RenderStateGroup, 0x1B, 0, 0); /*0x862190*/
  if ( !v134->RenderStateGroup ) /*0x862195*/
    v134->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86219f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v134->RenderStateGroup, 7, 1, 0); /*0x8621aa*/
  if ( !v134->RenderStateGroup ) /*0x8621af*/
    v134->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8621b9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v134->RenderStateGroup, 0x17, 4, 0); /*0x8621c4*/
  if ( !v134->RenderStateGroup ) /*0x8621c9*/
    v134->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8621d3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v134->RenderStateGroup, 0xE, 1, 0); /*0x8621de*/
  if ( !v134->RenderStateGroup ) /*0x8621e3*/
    v134->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8621ed*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v134->RenderStateGroup, 0x34, 0, 0); /*0x8621f9*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x307]) = 0x12; /*0x86220c*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x33D]) = 0x400; /*0x862212*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x59A]);// Initialize Lighting30 pool[43], selector 0x155: one BaseMap stage, skinned SM3019 vertex caster, shared SM3026 depth pixel shader. /*0x862218*/
  v138 = (NiD3DPass *)v145; /*0x86221d*/
  if ( !v145[6] ) /*0x862221*/
  {
    v139 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v147); /*0x86222c*/
    LOBYTE(v148) = 0x18; /*0x862239*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v139); /*0x86223e*/
    v140 = v147; /*0x862243*/
    LOBYTE(v148) = 1; /*0x862249*/
    if ( v147 ) /*0x86224e*/
    {
      --v147[7].Unk08; /*0x862250*/
      if ( !v140[7].Unk08 ) /*0x862259*/
        sub_772560(v140); /*0x86225e*/
    }
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x86226e*/
    NiD3DPass_SetTextureStage(v138, v138->CurrentStage, a3); /*0x862281*/
  }
  NiD3DPass_SetVertexShader(v138, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x530]));// Selector 0x155 vertex program pointer: retail Oblivion SM3019.vso, skinned SkinMVP/SkinWorldView/Bones caster transform. /*0x86228e*/
  NiD3DPass_SetPixelShader(v138, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x44B]));// Selectors 0x154/0x155 shared SM3026 pixel program; stage 0 is BaseMap, not the receiver ShadowMap. /*0x86229c*/
  if ( !v138->RenderStateGroup ) /*0x8622a1*/
    v138->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8622ac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v138->RenderStateGroup, 0x1B, 0, 0); /*0x8622b8*/
  if ( !v138->RenderStateGroup ) /*0x8622bd*/
    v138->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8622c8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v138->RenderStateGroup, 7, 1, 0); /*0x8622d4*/
  if ( !v138->RenderStateGroup ) /*0x8622d9*/
    v138->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8622e4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v138->RenderStateGroup, 0x17, 4, 0); /*0x8622f0*/
  if ( !v138->RenderStateGroup ) /*0x8622f5*/
    v138->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862300*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v138->RenderStateGroup, 0xE, 1, 0); /*0x86230c*/
  if ( !v138->RenderStateGroup ) /*0x862311*/
    v138->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86231c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v138->RenderStateGroup, 0x34, 0, 0); /*0x862328*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x308]) = 0x2C; /*0x862336*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x33E]) = 0x400; /*0x86233c*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x5A0]); /*0x862342*/
  v141 = (NiD3DPass *)v145; /*0x86234d*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v145, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x536])); /*0x862354*/
  NiD3DPass_SetPixelShader(v141, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x452])); /*0x862361*/
  if ( !v141->RenderStateGroup ) /*0x862366*/
    v141->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862371*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v141->RenderStateGroup, 0x1B, 0, 0); /*0x86237d*/
  if ( !v141->RenderStateGroup ) /*0x862382*/
    v141->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86238c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v141->RenderStateGroup, 0xF, 0, 0); /*0x862396*/
  if ( !v141->RenderStateGroup ) /*0x86239b*/
    v141->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8623a5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v141->RenderStateGroup, 7, 1, 0); /*0x8623b0*/
  if ( !v141->RenderStateGroup ) /*0x8623b5*/
    v141->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8623bf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v141->RenderStateGroup, 0x17, 4, 0); /*0x8623ca*/
  if ( !v141->RenderStateGroup ) /*0x8623cf*/
    v141->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8623d9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v141->RenderStateGroup, 0xE, 1, 0); /*0x8623e4*/
  if ( !v141->RenderStateGroup ) /*0x8623e9*/
    v141->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8623f3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v141->RenderStateGroup, 0x34, 0, 0); /*0x8623fd*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x30E]) = 0x12; /*0x86240b*/
  OB_ShaderConstantStorage_010201A0[0x344] = 0.0; /*0x862411*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x5A1]); /*0x862417*/
  v142 = (NiD3DPass *)v145; /*0x862422*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v145, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x537])); /*0x862429*/
  NiD3DPass_SetPixelShader(v142, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x452])); /*0x862437*/
  if ( !v142->RenderStateGroup ) /*0x86243c*/
    v142->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862446*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v142->RenderStateGroup, 0x1B, 0, 0); /*0x862450*/
  if ( !v142->RenderStateGroup ) /*0x862455*/
    v142->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86245f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v142->RenderStateGroup, 0xF, 0, 0); /*0x862469*/
  if ( !v142->RenderStateGroup ) /*0x86246e*/
    v142->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862478*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v142->RenderStateGroup, 7, 1, 0); /*0x862483*/
  if ( !v142->RenderStateGroup ) /*0x862488*/
    v142->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862492*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v142->RenderStateGroup, 0x17, 4, 0); /*0x86249d*/
  if ( !v142->RenderStateGroup ) /*0x8624a2*/
    v142->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8624ac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v142->RenderStateGroup, 0xE, 1, 0); /*0x8624b7*/
  if ( !v142->RenderStateGroup ) /*0x8624bc*/
    v142->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8624c6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v142->RenderStateGroup, 0x34, 0, 0); /*0x8624d0*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x30F]) = 0x2C; /*0x8624de*/
  OB_ShaderConstantStorage_010201A0[0x345] = 0.0; /*0x8624e4*/
  sub_76C890((NiD3DPass **)&v145, (int *)&OB_ShaderConstantStorage_010201A0[0x5A2]); /*0x8624ea*/
  v143 = (NiD3DPass *)v145; /*0x8624f4*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v145, (NiD3DVertexShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x538])); /*0x8624fb*/
  NiD3DPass_SetPixelShader(v143, (NiD3DPixelShader *)LODWORD(OB_ShaderConstantStorage_010201A0[0x453])); /*0x862509*/
  if ( !v143->RenderStateGroup ) /*0x86250e*/
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862518*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v143->RenderStateGroup, 0x1B, 0, 0); /*0x862522*/
  if ( !v143->RenderStateGroup ) /*0x862527*/
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862531*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v143->RenderStateGroup, 0xF, 0, 0); /*0x86253b*/
  if ( !v143->RenderStateGroup ) /*0x862540*/
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86254a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v143->RenderStateGroup, 7, 1, 0); /*0x862555*/
  if ( !v143->RenderStateGroup ) /*0x86255a*/
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862564*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v143->RenderStateGroup, 0x17, 8, 0); /*0x86256f*/
  if ( !v143->RenderStateGroup ) /*0x862574*/
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x86257e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v143->RenderStateGroup, 0xE, 1, 0); /*0x862589*/
  if ( !v143->RenderStateGroup ) /*0x86258e*/
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x862598*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v143->RenderStateGroup, 0x34, 0, 0); /*0x8625a2*/
  v144 = (NiD3DTextureStage *)a3; /*0x8625a7*/
  v2 = a3 == 0; /*0x8625ab*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x310]) = 2; /*0x8625ad*/
  OB_ShaderConstantStorage_010201A0[0x346] = 0.0; /*0x8625b7*/
  LOBYTE(v148) = 0; /*0x8625bd*/
  if ( !v2 ) /*0x8625c2*/
  {
    v2 = v144[7].Unk08-- == 1; /*0x8625c7*/
    if ( v2 ) /*0x8625ca*/
      sub_772560(v144); /*0x8625cc*/
  }
  v2 = v143->RefCount-- == 1; /*0x8625d6*/
  v148 = 0xFFFFFFFF; /*0x8625d9*/
  if ( v2 ) /*0x8625dd*/
    NiD3DPass_ReleaseToPool(v143); /*0x8625e1*/
}
