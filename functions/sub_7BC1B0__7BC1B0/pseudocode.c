char __thiscall sub_7BC1B0(NiD3DPass **this)
{
  bool v2; // zf
  NiD3DPass **v3; // edi
  NiD3DPass *v4; // ecx
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // edi
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // ecx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  NiD3DTextureStage *v19; // eax
  int v20; // ebx
  int v21; // ebp
  int v22; // edi
  NiD3DPass **v23; // edi
  NiD3DPass *v24; // ecx
  NiD3DPass *v25; // eax
  NiD3DPass *v26; // eax
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  NiD3DTextureStage *v35; // eax
  int v36; // ebx
  int v37; // ebp
  int v38; // edi
  int v39; // ebx
  int v40; // ebp
  int v41; // edi
  NiD3DPass **v42; // edi
  NiD3DPass *v43; // ecx
  NiD3DPass *v44; // eax
  NiD3DPass *v45; // eax
  unsigned int *v46; // eax
  unsigned int *v47; // edi
  NiD3DTextureStage *v48; // eax
  int v49; // edi
  int v50; // edi
  int v51; // edi
  int v52; // edi
  int v53; // edi
  int v54; // edi
  int v55; // edi
  int v56; // edi
  int v57; // ebx
  int v58; // ebp
  int v59; // edi
  int v60; // ebx
  int v61; // ebp
  int v62; // edi
  NiD3DPass **v63; // edi
  NiD3DPass *v64; // ecx
  NiD3DPass *v65; // eax
  NiD3DPass *v66; // eax
  unsigned int **v67; // ebx
  NiD3DTextureStage *v68; // edi
  NiD3DTextureStage *v69; // eax
  int v70; // edi
  int v71; // edi
  int v72; // edi
  int v73; // edi
  int v74; // edi
  int v75; // edi
  int v76; // ebx
  int v77; // ebp
  int v78; // edi
  int v79; // ebx
  int v80; // ebp
  int v81; // edi
  NiD3DPass **v82; // edi
  NiD3DPass *v83; // ecx
  NiD3DPass *v84; // eax
  NiD3DPass *v85; // eax
  unsigned int **v86; // ebx
  NiD3DTextureStage *v87; // edi
  NiD3DTextureStage *v88; // eax
  int v89; // edi
  int v90; // edi
  int v91; // edi
  int v92; // edi
  int v93; // edi
  int v94; // edi
  int v95; // edi
  int v96; // edi
  int v97; // ebx
  int v98; // ebp
  int v99; // edi
  int v100; // ebx
  int v101; // ebp
  int v102; // edi
  NiD3DPass **v103; // edi
  NiD3DPass *v104; // ecx
  NiD3DPass *v105; // eax
  NiD3DPass *v106; // eax
  unsigned int **v107; // ebx
  NiD3DTextureStage *v108; // edi
  NiD3DTextureStage *v109; // eax
  int v110; // edi
  int v111; // edi
  int v112; // edi
  int v113; // edi
  int v114; // edi
  int v115; // edi
  int v116; // edi
  int v117; // edi
  int v118; // ebx
  int v119; // ebp
  int v120; // edi
  int v121; // ebp
  int v122; // esi
  int v123; // edi
  NiD3DTextureStage *v124; // ecx
  unsigned int *a3; // [esp+28h] [ebp-18h] BYREF
  unsigned int *v127; // [esp+2Ch] [ebp-14h]
  NiD3DPass *v128; // [esp+30h] [ebp-10h] BYREF
  unsigned int v129; // [esp+3Ch] [ebp-4h]

  v127 = 0; /*0x7bc1db*/
  v2 = *(this + 0x1C) == 0; /*0x7bc1df*/
  v129 = 0; /*0x7bc1e2*/
  if ( v2 ) /*0x7bc1eb*/
  {
    v3 = NiD3DPassPool_Acquire(&v128); /*0x7bc1fe*/
    v4 = *(this + 0x1C); /*0x7bc200*/
    v2 = v4 == *v3; /*0x7bc203*/
    LOBYTE(v129) = 1; /*0x7bc205*/
    if ( !v2 ) /*0x7bc20a*/
    {
      if ( v4 ) /*0x7bc20e*/
      {
        v2 = v4->RefCount-- == 1; /*0x7bc210*/
        if ( v2 ) /*0x7bc214*/
          NiD3DPass_ReleaseToPool(v4); /*0x7bc216*/
      }
      v5 = *v3; /*0x7bc21b*/
      v2 = *v3 == 0; /*0x7bc21d*/
      *(this + 0x1C) = *v3; /*0x7bc21f*/
      if ( !v2 ) /*0x7bc222*/
        ++v5->RefCount; /*0x7bc224*/
    }
    v6 = v128; /*0x7bc227*/
    LOBYTE(v129) = 0; /*0x7bc22d*/
    if ( v128 ) /*0x7bc232*/
    {
      --v128->RefCount; /*0x7bc234*/
      if ( !v6->RefCount ) /*0x7bc23d*/
        NiD3DPass_ReleaseToPool(v6); /*0x7bc241*/
    }
    NiD3DTextureStagePool_Acquire(&a3); /*0x7bc24b*/
    LOBYTE(v129) = 2; /*0x7bc25a*/
    BSShader_ConfigureTextureStageSampler((int)a3, 0, 3, 2); /*0x7bc25f*/
    NiD3DPass_SetTextureStage(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3); /*0x7bc273*/
    v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v128); /*0x7bc285*/
    v8 = (NiD3DTextureStage *)a3; /*0x7bc287*/
    v2 = a3 == *v7; /*0x7bc28b*/
    LOBYTE(v129) = 3; /*0x7bc28d*/
    if ( !v2 ) /*0x7bc292*/
    {
      if ( a3 ) /*0x7bc296*/
      {
        --a3[0x17]; /*0x7bc298*/
        if ( !v8[7].Unk08 ) /*0x7bc2a1*/
          sub_772560(v8); /*0x7bc2a5*/
      }
      v8 = (NiD3DTextureStage *)*v7; /*0x7bc2aa*/
      a3 = *v7; /*0x7bc2ae*/
      if ( a3 ) /*0x7bc2b2*/
      {
        ++v8[7].Unk08; /*0x7bc2b4*/
        v8 = (NiD3DTextureStage *)a3; /*0x7bc2b7*/
      }
    }
    v9 = (NiD3DTextureStage *)v128; /*0x7bc2bb*/
    LOBYTE(v129) = 2; /*0x7bc2c1*/
    if ( v128 ) /*0x7bc2c6*/
    {
      --*(_DWORD *)&v128->SoftwareVP; /*0x7bc2c8*/
      if ( !v9[7].Unk08 ) /*0x7bc2cc*/
        sub_772560(v9); /*0x7bc2d4*/
      v8 = (NiD3DTextureStage *)a3; /*0x7bc2d9*/
    }
    BSShader_ConfigureTextureStageSampler((int)v8, 1, 3, 2); /*0x7bc2e3*/
    NiD3DPass_SetTextureStage(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3); /*0x7bc2f7*/
    v10 = (int)*(this + 0x1C); /*0x7bc2fc*/
    if ( !*(_DWORD *)(v10 + 0x30) ) /*0x7bc2ff*/
      *(_DWORD *)(v10 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc309*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v10 + 0x30), 7, 1, 0); /*0x7bc313*/
    v11 = (int)*(this + 0x1C); /*0x7bc318*/
    if ( !*(_DWORD *)(v11 + 0x30) ) /*0x7bc31b*/
      *(_DWORD *)(v11 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc325*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v11 + 0x30), 0x17, 4, 0); /*0x7bc330*/
    v12 = (int)*(this + 0x1C); /*0x7bc335*/
    if ( !*(_DWORD *)(v12 + 0x30) ) /*0x7bc338*/
      *(_DWORD *)(v12 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc342*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v12 + 0x30), 0xE, 0, 0); /*0x7bc34c*/
    v13 = (int)*(this + 0x1C); /*0x7bc351*/
    if ( !*(_DWORD *)(v13 + 0x30) ) /*0x7bc354*/
      *(_DWORD *)(v13 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc35e*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v13 + 0x30), 0x1B, 1, 0); /*0x7bc368*/
    v14 = (int)*(this + 0x1C); /*0x7bc36d*/
    if ( !*(_DWORD *)(v14 + 0x30) ) /*0x7bc370*/
      *(_DWORD *)(v14 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc37a*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v14 + 0x30), 0x13, 5, 0); /*0x7bc385*/
    v15 = (int)*(this + 0x1C); /*0x7bc38a*/
    if ( !*(_DWORD *)(v15 + 0x30) ) /*0x7bc38d*/
      *(_DWORD *)(v15 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc397*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v15 + 0x30), 0x14, 6, 0); /*0x7bc3a2*/
    v16 = (int)*(this + 0x1C); /*0x7bc3a7*/
    if ( !*(_DWORD *)(v16 + 0x30) ) /*0x7bc3aa*/
      *(_DWORD *)(v16 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc3b4*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v16 + 0x30), 0x34, 0, 0); /*0x7bc3be*/
    v17 = (int)*(this + 0x1C); /*0x7bc3c3*/
    if ( !*(_DWORD *)(v17 + 0x30) ) /*0x7bc3c6*/
      *(_DWORD *)(v17 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc3d0*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v17 + 0x30), 0xF, 0, 0); /*0x7bc3da*/
    v18 = (int)*(this + 0x1C); /*0x7bc3df*/
    if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7bc3e2*/
      *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc3ec*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v18 + 0x30), 0xA8, 7, 0); /*0x7bc3fa*/
    v19 = (NiD3DTextureStage *)a3; /*0x7bc3ff*/
    LOBYTE(v129) = 0; /*0x7bc405*/
    if ( a3 ) /*0x7bc40a*/
    {
      --a3[0x17]; /*0x7bc40c*/
      if ( !v19[7].Unk08 ) /*0x7bc415*/
        sub_772560(v19); /*0x7bc419*/
    }
  }
  v20 = (int)*(this + 0x1C); /*0x7bc41e*/
  v21 = (int)*(this + 0x1F); /*0x7bc421*/
  v22 = *(_DWORD *)(v20 + 0x58); /*0x7bc424*/
  if ( v22 != v21 ) /*0x7bc429*/
  {
    if ( v22 ) /*0x7bc42d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x7bc433*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x7bc449*/
    }
    *(_DWORD *)(v20 + 0x58) = v21; /*0x7bc44d*/
    if ( v21 ) /*0x7bc450*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x7bc456*/
  }
  if ( !*(this + 0x2B) ) /*0x7bc45c*/
  {
    v23 = NiD3DPassPool_Acquire(&v128); /*0x7bc476*/
    v24 = *(this + 0x2B); /*0x7bc478*/
    v2 = v24 == *v23; /*0x7bc47e*/
    LOBYTE(v129) = 4; /*0x7bc480*/
    if ( !v2 ) /*0x7bc485*/
    {
      if ( v24 ) /*0x7bc489*/
      {
        v2 = v24->RefCount-- == 1; /*0x7bc48b*/
        if ( v2 ) /*0x7bc48f*/
          NiD3DPass_ReleaseToPool(v24); /*0x7bc491*/
      }
      v25 = *v23; /*0x7bc496*/
      v2 = *v23 == 0; /*0x7bc498*/
      *(this + 0x2B) = *v23; /*0x7bc49a*/
      if ( !v2 ) /*0x7bc4a0*/
        ++v25->RefCount; /*0x7bc4a2*/
    }
    v26 = v128; /*0x7bc4a6*/
    LOBYTE(v129) = 0; /*0x7bc4ac*/
    if ( v128 ) /*0x7bc4b1*/
    {
      --v128->RefCount; /*0x7bc4b3*/
      if ( !v26->RefCount ) /*0x7bc4bc*/
        NiD3DPass_ReleaseToPool(v26); /*0x7bc4c1*/
    }
    NiD3DTextureStagePool_Acquire(&a3); /*0x7bc4cb*/
    LOBYTE(v129) = 5; /*0x7bc4db*/
    BSShader_ConfigureTextureStageSampler((int)a3, 0, 3, 2); /*0x7bc4e0*/
    NiD3DPass_SetTextureStage(*(this + 0x2B), (*(this + 0x2B))->CurrentStage, a3); /*0x7bc4f7*/
    v27 = (int)*(this + 0x2B); /*0x7bc4fc*/
    if ( !*(_DWORD *)(v27 + 0x30) ) /*0x7bc502*/
      *(_DWORD *)(v27 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc50d*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v27 + 0x30), 7, 0, 0); /*0x7bc519*/
    v28 = (int)*(this + 0x2B); /*0x7bc51e*/
    if ( !*(_DWORD *)(v28 + 0x30) ) /*0x7bc524*/
      *(_DWORD *)(v28 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc52f*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v28 + 0x30), 0xE, 0, 0); /*0x7bc53b*/
    v29 = (int)*(this + 0x2B); /*0x7bc540*/
    if ( !*(_DWORD *)(v29 + 0x30) ) /*0x7bc546*/
      *(_DWORD *)(v29 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc551*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v29 + 0x30), 0x1B, 1, 0); /*0x7bc55d*/
    v30 = (int)*(this + 0x2B); /*0x7bc562*/
    if ( !*(_DWORD *)(v30 + 0x30) ) /*0x7bc568*/
      *(_DWORD *)(v30 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc573*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v30 + 0x30), 0x13, 5, 0); /*0x7bc57f*/
    v31 = (int)*(this + 0x2B); /*0x7bc584*/
    if ( !*(_DWORD *)(v31 + 0x30) ) /*0x7bc58a*/
      *(_DWORD *)(v31 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc595*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v31 + 0x30), 0x14, 2, 0); /*0x7bc5a1*/
    v32 = (int)*(this + 0x2B); /*0x7bc5a6*/
    if ( !*(_DWORD *)(v32 + 0x30) ) /*0x7bc5ac*/
      *(_DWORD *)(v32 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc5b7*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v32 + 0x30), 0x34, 0, 0); /*0x7bc5c3*/
    v33 = (int)*(this + 0x2B); /*0x7bc5c8*/
    if ( !*(_DWORD *)(v33 + 0x30) ) /*0x7bc5ce*/
      *(_DWORD *)(v33 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc5d9*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v33 + 0x30), 0xF, 0, 0); /*0x7bc5e5*/
    v34 = (int)*(this + 0x2B); /*0x7bc5ea*/
    if ( !*(_DWORD *)(v34 + 0x30) ) /*0x7bc5f0*/
      *(_DWORD *)(v34 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc5fb*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v34 + 0x30), 0xA8, 7, 0); /*0x7bc60a*/
    v35 = (NiD3DTextureStage *)a3; /*0x7bc60f*/
    LOBYTE(v129) = 0; /*0x7bc615*/
    if ( a3 ) /*0x7bc61a*/
    {
      --a3[0x17]; /*0x7bc61c*/
      if ( !v35[7].Unk08 ) /*0x7bc625*/
        sub_772560(v35); /*0x7bc62a*/
    }
  }
  v36 = (int)*(this + 0x2B); /*0x7bc62f*/
  v37 = (int)*(this + 0x20); /*0x7bc635*/
  v38 = *(_DWORD *)(v36 + 0x58); /*0x7bc63b*/
  if ( v38 != v37 ) /*0x7bc640*/
  {
    if ( v38 ) /*0x7bc644*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v38 + 4)) ) /*0x7bc64a*/
        (**(void (__thiscall ***)(int, int))v38)(v38, 1); /*0x7bc660*/
    }
    *(_DWORD *)(v36 + 0x58) = v37; /*0x7bc664*/
    if ( v37 ) /*0x7bc667*/
      InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x7bc66d*/
  }
  v39 = (int)*(this + 0x2B); /*0x7bc673*/
  v40 = (int)*(this + 0x26); /*0x7bc679*/
  v41 = *(_DWORD *)(v39 + 0x44); /*0x7bc67f*/
  if ( v41 != v40 ) /*0x7bc684*/
  {
    if ( v41 ) /*0x7bc688*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v41 + 4)) ) /*0x7bc68e*/
        (**(void (__thiscall ***)(int, int))v41)(v41, 1); /*0x7bc6a4*/
    }
    *(_DWORD *)(v39 + 0x44) = v40; /*0x7bc6a8*/
    if ( v40 ) /*0x7bc6ab*/
      InterlockedIncrement((volatile LONG *)(v40 + 4)); /*0x7bc6b1*/
  }
  if ( !*(this + 0x2D) ) /*0x7bc6b7*/
  {
    v42 = NiD3DPassPool_Acquire(&v128); /*0x7bc6d1*/
    v43 = *(this + 0x2D); /*0x7bc6d3*/
    v2 = v43 == *v42; /*0x7bc6d9*/
    LOBYTE(v129) = 6; /*0x7bc6db*/
    if ( !v2 ) /*0x7bc6e0*/
    {
      if ( v43 ) /*0x7bc6e4*/
      {
        v2 = v43->RefCount-- == 1; /*0x7bc6e6*/
        if ( v2 ) /*0x7bc6ea*/
          NiD3DPass_ReleaseToPool(v43); /*0x7bc6ec*/
      }
      v44 = *v42; /*0x7bc6f1*/
      v2 = *v42 == 0; /*0x7bc6f3*/
      *(this + 0x2D) = *v42; /*0x7bc6f5*/
      if ( !v2 ) /*0x7bc6fb*/
        ++v44->RefCount; /*0x7bc6fd*/
    }
    v45 = v128; /*0x7bc701*/
    LOBYTE(v129) = 0; /*0x7bc707*/
    if ( v128 ) /*0x7bc70c*/
    {
      --v128->RefCount; /*0x7bc70e*/
      if ( !v45->RefCount ) /*0x7bc717*/
        NiD3DPass_ReleaseToPool(v45); /*0x7bc71c*/
    }
    v46 = (unsigned int *)*NiD3DTextureStagePool_Acquire(&v128); /*0x7bc72e*/
    if ( v46 ) /*0x7bc732*/
    {
      v47 = v46; /*0x7bc734*/
      ++v46[0x17]; /*0x7bc736*/
      v127 = v46; /*0x7bc73a*/
    }
    else
    {
      v47 = v127; /*0x7bc740*/
    }
    v48 = (NiD3DTextureStage *)v128; /*0x7bc744*/
    LOBYTE(v129) = 0; /*0x7bc74a*/
    if ( v128 ) /*0x7bc74f*/
    {
      --*(_DWORD *)&v128->SoftwareVP; /*0x7bc751*/
      if ( !v48[7].Unk08 ) /*0x7bc75a*/
        sub_772560(v48); /*0x7bc75f*/
    }
    BSShader_ConfigureTextureStageSampler((int)v47, 0, 3, 2); /*0x7bc76b*/
    NiD3DPass_SetTextureStage(*(this + 0x2D), (*(this + 0x2D))->CurrentStage, v47); /*0x7bc77e*/
    v49 = (int)*(this + 0x2D); /*0x7bc783*/
    if ( !*(_DWORD *)(v49 + 0x30) ) /*0x7bc789*/
      *(_DWORD *)(v49 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc794*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v49 + 0x30), 0x1B, 1, 0); /*0x7bc7a0*/
    v50 = (int)*(this + 0x2D); /*0x7bc7a5*/
    if ( !*(_DWORD *)(v50 + 0x30) ) /*0x7bc7ab*/
      *(_DWORD *)(v50 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc7b6*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v50 + 0x30), 0x13, 2, 0); /*0x7bc7c2*/
    v51 = (int)*(this + 0x2D); /*0x7bc7c7*/
    if ( !*(_DWORD *)(v51 + 0x30) ) /*0x7bc7cd*/
      *(_DWORD *)(v51 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc7d8*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v51 + 0x30), 0x14, 2, 0); /*0x7bc7e4*/
    v52 = (int)*(this + 0x2D); /*0x7bc7e9*/
    if ( !*(_DWORD *)(v52 + 0x30) ) /*0x7bc7ef*/
      *(_DWORD *)(v52 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc7fa*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v52 + 0x30), 0xF, 0, 0); /*0x7bc806*/
    v53 = (int)*(this + 0x2D); /*0x7bc80b*/
    if ( !*(_DWORD *)(v53 + 0x30) ) /*0x7bc811*/
      *(_DWORD *)(v53 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc81c*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v53 + 0x30), 7, 1, 0); /*0x7bc828*/
    v54 = (int)*(this + 0x2D); /*0x7bc82d*/
    if ( !*(_DWORD *)(v54 + 0x30) ) /*0x7bc833*/
      *(_DWORD *)(v54 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc83e*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v54 + 0x30), 0xE, 0, 0); /*0x7bc84a*/
    v55 = (int)*(this + 0x2D); /*0x7bc84f*/
    if ( !*(_DWORD *)(v55 + 0x30) ) /*0x7bc855*/
      *(_DWORD *)(v55 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc860*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v55 + 0x30), 0x17, 4, 0); /*0x7bc86c*/
    v56 = (int)*(this + 0x2D); /*0x7bc871*/
    if ( !*(_DWORD *)(v56 + 0x30) ) /*0x7bc877*/
      *(_DWORD *)(v56 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bc882*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v56 + 0x30), 0xA8, 0, 0); /*0x7bc891*/
  }
  v57 = (int)*(this + 0x2D); /*0x7bc896*/
  v58 = (int)*(this + 0x23); /*0x7bc89c*/
  v59 = *(_DWORD *)(v57 + 0x58); /*0x7bc8a2*/
  if ( v59 != v58 ) /*0x7bc8a7*/
  {
    if ( v59 ) /*0x7bc8ab*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v59 + 4)) ) /*0x7bc8b1*/
        (**(void (__thiscall ***)(int, int))v59)(v59, 1); /*0x7bc8c7*/
    }
    *(_DWORD *)(v57 + 0x58) = v58; /*0x7bc8cb*/
    if ( v58 ) /*0x7bc8ce*/
      InterlockedIncrement((volatile LONG *)(v58 + 4)); /*0x7bc8d4*/
  }
  v60 = (int)*(this + 0x2D); /*0x7bc8da*/
  v61 = (int)*(this + 0x29); /*0x7bc8e0*/
  v62 = *(_DWORD *)(v60 + 0x44); /*0x7bc8e6*/
  if ( v62 != v61 ) /*0x7bc8eb*/
  {
    if ( v62 ) /*0x7bc8ef*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) ) /*0x7bc8f5*/
        (**(void (__thiscall ***)(int, int))v62)(v62, 1); /*0x7bc90b*/
    }
    *(_DWORD *)(v60 + 0x44) = v61; /*0x7bc90f*/
    if ( v61 ) /*0x7bc912*/
      InterlockedIncrement((volatile LONG *)(v61 + 4)); /*0x7bc918*/
  }
  if ( !*(this + 0x2E) ) /*0x7bc91e*/
  {
    v63 = NiD3DPassPool_Acquire(&v128); /*0x7bc939*/
    v64 = *(this + 0x2E); /*0x7bc93b*/
    v2 = v64 == *v63; /*0x7bc941*/
    LOBYTE(v129) = 8; /*0x7bc943*/
    if ( !v2 ) /*0x7bc948*/
    {
      if ( v64 ) /*0x7bc94c*/
      {
        v2 = v64->RefCount-- == 1; /*0x7bc94e*/
        if ( v2 ) /*0x7bc952*/
          NiD3DPass_ReleaseToPool(v64); /*0x7bc954*/
      }
      v65 = *v63; /*0x7bc959*/
      v2 = *v63 == 0; /*0x7bc95b*/
      *(this + 0x2E) = *v63; /*0x7bc95d*/
      if ( !v2 ) /*0x7bc963*/
        ++v65->RefCount; /*0x7bc965*/
    }
    v66 = v128; /*0x7bc969*/
    LOBYTE(v129) = 0; /*0x7bc96f*/
    if ( v128 ) /*0x7bc974*/
    {
      --v128->RefCount; /*0x7bc976*/
      if ( !v66->RefCount ) /*0x7bc97f*/
        NiD3DPass_ReleaseToPool(v66); /*0x7bc984*/
    }
    v67 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v128); /*0x7bc996*/
    v68 = (NiD3DTextureStage *)v127; /*0x7bc998*/
    v2 = v127 == *v67; /*0x7bc99c*/
    LOBYTE(v129) = 9; /*0x7bc99e*/
    if ( !v2 ) /*0x7bc9a3*/
    {
      if ( v127 ) /*0x7bc9a7*/
      {
        v2 = v127[0x17]-- == 1; /*0x7bc9a9*/
        if ( v2 ) /*0x7bc9ad*/
          sub_772560(v68); /*0x7bc9b1*/
      }
      v68 = (NiD3DTextureStage *)*v67; /*0x7bc9b6*/
      v127 = *v67; /*0x7bc9ba*/
      if ( v127 ) /*0x7bc9be*/
        ++v68[7].Unk08; /*0x7bc9c0*/
    }
    v69 = (NiD3DTextureStage *)v128; /*0x7bc9c4*/
    LOBYTE(v129) = 0; /*0x7bc9ca*/
    if ( v128 ) /*0x7bc9cf*/
    {
      --*(_DWORD *)&v128->SoftwareVP; /*0x7bc9d1*/
      if ( !v69[7].Unk08 ) /*0x7bc9da*/
        sub_772560(v69); /*0x7bc9df*/
    }
    BSShader_ConfigureTextureStageSampler((int)v68, 0, 3, 2); /*0x7bc9eb*/
    NiD3DPass_SetTextureStage(*(this + 0x2E), (*(this + 0x2E))->CurrentStage, &v68->Stage); /*0x7bc9fe*/
    v70 = (int)*(this + 0x2E); /*0x7bca03*/
    if ( !*(_DWORD *)(v70 + 0x30) ) /*0x7bca09*/
      *(_DWORD *)(v70 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bca14*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v70 + 0x30), 0xF, 0, 0); /*0x7bca20*/
    v71 = (int)*(this + 0x2E); /*0x7bca25*/
    if ( !*(_DWORD *)(v71 + 0x30) ) /*0x7bca2b*/
      *(_DWORD *)(v71 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bca36*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v71 + 0x30), 0x1B, 0, 0); /*0x7bca42*/
    v72 = (int)*(this + 0x2E); /*0x7bca47*/
    if ( !*(_DWORD *)(v72 + 0x30) ) /*0x7bca4d*/
      *(_DWORD *)(v72 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bca58*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v72 + 0x30), 7, 1, 0); /*0x7bca64*/
    v73 = (int)*(this + 0x2E); /*0x7bca69*/
    if ( !*(_DWORD *)(v73 + 0x30) ) /*0x7bca6f*/
      *(_DWORD *)(v73 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bca7a*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v73 + 0x30), 0xE, 0, 0); /*0x7bca86*/
    v74 = (int)*(this + 0x2E); /*0x7bca8b*/
    if ( !*(_DWORD *)(v74 + 0x30) ) /*0x7bca91*/
      *(_DWORD *)(v74 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bca9c*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v74 + 0x30), 0x17, 4, 0); /*0x7bcaa8*/
    v75 = (int)*(this + 0x2E); /*0x7bcaad*/
    if ( !*(_DWORD *)(v75 + 0x30) ) /*0x7bcab3*/
      *(_DWORD *)(v75 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcabe*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v75 + 0x30), 0xA8, 8, 0); /*0x7bcacd*/
  }
  v76 = (int)*(this + 0x2E); /*0x7bcad2*/
  v77 = (int)*(this + 0x33); /*0x7bcad8*/
  v78 = *(_DWORD *)(v76 + 0x58); /*0x7bcade*/
  if ( v78 != v77 ) /*0x7bcae3*/
  {
    if ( v78 ) /*0x7bcae7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v78 + 4)) ) /*0x7bcaed*/
        (**(void (__thiscall ***)(int, int))v78)(v78, 1); /*0x7bcb03*/
    }
    *(_DWORD *)(v76 + 0x58) = v77; /*0x7bcb07*/
    if ( v77 ) /*0x7bcb0a*/
      InterlockedIncrement((volatile LONG *)(v77 + 4)); /*0x7bcb10*/
  }
  v79 = (int)*(this + 0x2E); /*0x7bcb16*/
  v80 = (int)*(this + 0x34); /*0x7bcb1c*/
  v81 = *(_DWORD *)(v79 + 0x44); /*0x7bcb22*/
  if ( v81 != v80 ) /*0x7bcb27*/
  {
    if ( v81 ) /*0x7bcb2b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v81 + 4)) ) /*0x7bcb31*/
        (**(void (__thiscall ***)(int, int))v81)(v81, 1); /*0x7bcb47*/
    }
    *(_DWORD *)(v79 + 0x44) = v80; /*0x7bcb4b*/
    if ( v80 ) /*0x7bcb4e*/
      InterlockedIncrement((volatile LONG *)(v80 + 4)); /*0x7bcb54*/
  }
  if ( !*(this + 0x2F) ) /*0x7bcb5a*/
  {
    v82 = NiD3DPassPool_Acquire(&v128); /*0x7bcb74*/
    v83 = *(this + 0x2F); /*0x7bcb76*/
    v2 = v83 == *v82; /*0x7bcb7c*/
    LOBYTE(v129) = 0xA; /*0x7bcb7e*/
    if ( !v2 ) /*0x7bcb83*/
    {
      if ( v83 ) /*0x7bcb87*/
      {
        v2 = v83->RefCount-- == 1; /*0x7bcb89*/
        if ( v2 ) /*0x7bcb8d*/
          NiD3DPass_ReleaseToPool(v83); /*0x7bcb8f*/
      }
      v84 = *v82; /*0x7bcb94*/
      v2 = *v82 == 0; /*0x7bcb96*/
      *(this + 0x2F) = *v82; /*0x7bcb98*/
      if ( !v2 ) /*0x7bcb9e*/
        ++v84->RefCount; /*0x7bcba0*/
    }
    v85 = v128; /*0x7bcba4*/
    LOBYTE(v129) = 0; /*0x7bcbaa*/
    if ( v128 ) /*0x7bcbaf*/
    {
      --v128->RefCount; /*0x7bcbb1*/
      if ( !v85->RefCount ) /*0x7bcbba*/
        NiD3DPass_ReleaseToPool(v85); /*0x7bcbbf*/
    }
    v86 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v128); /*0x7bcbd1*/
    v87 = (NiD3DTextureStage *)v127; /*0x7bcbd3*/
    v2 = v127 == *v86; /*0x7bcbd7*/
    LOBYTE(v129) = 0xB; /*0x7bcbd9*/
    if ( !v2 ) /*0x7bcbde*/
    {
      if ( v127 ) /*0x7bcbe2*/
      {
        v2 = v127[0x17]-- == 1; /*0x7bcbe4*/
        if ( v2 ) /*0x7bcbe8*/
          sub_772560(v87); /*0x7bcbec*/
      }
      v87 = (NiD3DTextureStage *)*v86; /*0x7bcbf1*/
      v127 = *v86; /*0x7bcbf5*/
      if ( v127 ) /*0x7bcbf9*/
        ++v87[7].Unk08; /*0x7bcbfb*/
    }
    v88 = (NiD3DTextureStage *)v128; /*0x7bcbff*/
    LOBYTE(v129) = 0; /*0x7bcc05*/
    if ( v128 ) /*0x7bcc0a*/
    {
      --*(_DWORD *)&v128->SoftwareVP; /*0x7bcc0c*/
      if ( !v88[7].Unk08 ) /*0x7bcc15*/
        sub_772560(v88); /*0x7bcc1a*/
    }
    BSShader_ConfigureTextureStageSampler((int)v87, 0, 3, 2); /*0x7bcc26*/
    NiD3DPass_SetTextureStage(*(this + 0x2F), (*(this + 0x2F))->CurrentStage, &v87->Stage); /*0x7bcc39*/
    v89 = (int)*(this + 0x2F); /*0x7bcc3e*/
    if ( !*(_DWORD *)(v89 + 0x30) ) /*0x7bcc44*/
      *(_DWORD *)(v89 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcc4f*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v89 + 0x30), 0x1B, 1, 0); /*0x7bcc5b*/
    v90 = (int)*(this + 0x2F); /*0x7bcc60*/
    if ( !*(_DWORD *)(v90 + 0x30) ) /*0x7bcc66*/
      *(_DWORD *)(v90 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcc71*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v90 + 0x30), 0x13, 2, 0); /*0x7bcc7d*/
    v91 = (int)*(this + 0x2F); /*0x7bcc82*/
    if ( !*(_DWORD *)(v91 + 0x30) ) /*0x7bcc88*/
      *(_DWORD *)(v91 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcc93*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v91 + 0x30), 0x14, 2, 0); /*0x7bcc9f*/
    v92 = (int)*(this + 0x2F); /*0x7bcca4*/
    if ( !*(_DWORD *)(v92 + 0x30) ) /*0x7bccaa*/
      *(_DWORD *)(v92 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bccb5*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v92 + 0x30), 0xF, 0, 0); /*0x7bccc1*/
    v93 = (int)*(this + 0x2F); /*0x7bccc6*/
    if ( !*(_DWORD *)(v93 + 0x30) ) /*0x7bcccc*/
      *(_DWORD *)(v93 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bccd7*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v93 + 0x30), 7, 1, 0); /*0x7bcce3*/
    v94 = (int)*(this + 0x2F); /*0x7bcce8*/
    if ( !*(_DWORD *)(v94 + 0x30) ) /*0x7bccee*/
      *(_DWORD *)(v94 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bccf9*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v94 + 0x30), 0xE, 0, 0); /*0x7bcd05*/
    v95 = (int)*(this + 0x2F); /*0x7bcd0a*/
    if ( !*(_DWORD *)(v95 + 0x30) ) /*0x7bcd10*/
      *(_DWORD *)(v95 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcd1b*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v95 + 0x30), 0x17, 4, 0); /*0x7bcd27*/
    v96 = (int)*(this + 0x2F); /*0x7bcd2c*/
    if ( !*(_DWORD *)(v96 + 0x30) ) /*0x7bcd32*/
      *(_DWORD *)(v96 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcd3d*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v96 + 0x30), 0xA8, 8, 0); /*0x7bcd4c*/
  }
  v97 = (int)*(this + 0x2F); /*0x7bcd51*/
  v98 = (int)*(this + 0x31); /*0x7bcd57*/
  v99 = *(_DWORD *)(v97 + 0x58); /*0x7bcd5d*/
  if ( v99 != v98 ) /*0x7bcd62*/
  {
    if ( v99 ) /*0x7bcd66*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v99 + 4)) ) /*0x7bcd6c*/
        (**(void (__thiscall ***)(int, int))v99)(v99, 1); /*0x7bcd82*/
    }
    *(_DWORD *)(v97 + 0x58) = v98; /*0x7bcd86*/
    if ( v98 ) /*0x7bcd89*/
      InterlockedIncrement((volatile LONG *)(v98 + 4)); /*0x7bcd8f*/
  }
  v100 = (int)*(this + 0x2F); /*0x7bcd95*/
  v101 = (int)*(this + 0x35); /*0x7bcd9b*/
  v102 = *(_DWORD *)(v100 + 0x44); /*0x7bcda1*/
  if ( v102 != v101 ) /*0x7bcda6*/
  {
    if ( v102 ) /*0x7bcdaa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v102 + 4)) ) /*0x7bcdb0*/
        (**(void (__thiscall ***)(int, int))v102)(v102, 1); /*0x7bcdc6*/
    }
    *(_DWORD *)(v100 + 0x44) = v101; /*0x7bcdca*/
    if ( v101 ) /*0x7bcdcd*/
      InterlockedIncrement((volatile LONG *)(v101 + 4)); /*0x7bcdd3*/
  }
  if ( !*(this + 0x30) ) /*0x7bcdd9*/
  {
    v103 = NiD3DPassPool_Acquire(&v128); /*0x7bcdf3*/
    v104 = *(this + 0x30); /*0x7bcdf5*/
    v2 = v104 == *v103; /*0x7bcdfb*/
    LOBYTE(v129) = 0xC; /*0x7bcdfd*/
    if ( !v2 ) /*0x7bce02*/
    {
      if ( v104 ) /*0x7bce06*/
      {
        v2 = v104->RefCount-- == 1; /*0x7bce08*/
        if ( v2 ) /*0x7bce0c*/
          NiD3DPass_ReleaseToPool(v104); /*0x7bce0e*/
      }
      v105 = *v103; /*0x7bce13*/
      v2 = *v103 == 0; /*0x7bce15*/
      *(this + 0x30) = *v103; /*0x7bce17*/
      if ( !v2 ) /*0x7bce1d*/
        ++v105->RefCount; /*0x7bce1f*/
    }
    v106 = v128; /*0x7bce23*/
    LOBYTE(v129) = 0; /*0x7bce29*/
    if ( v128 ) /*0x7bce2e*/
    {
      --v128->RefCount; /*0x7bce30*/
      if ( !v106->RefCount ) /*0x7bce39*/
        NiD3DPass_ReleaseToPool(v106); /*0x7bce3e*/
    }
    v107 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v128); /*0x7bce50*/
    v108 = (NiD3DTextureStage *)v127; /*0x7bce52*/
    v2 = v127 == *v107; /*0x7bce56*/
    LOBYTE(v129) = 0xD; /*0x7bce58*/
    if ( !v2 ) /*0x7bce5d*/
    {
      if ( v127 ) /*0x7bce61*/
      {
        v2 = v127[0x17]-- == 1; /*0x7bce63*/
        if ( v2 ) /*0x7bce67*/
          sub_772560(v108); /*0x7bce6b*/
      }
      v108 = (NiD3DTextureStage *)*v107; /*0x7bce70*/
      v127 = *v107; /*0x7bce74*/
      if ( v127 ) /*0x7bce78*/
        ++v108[7].Unk08; /*0x7bce7a*/
    }
    v109 = (NiD3DTextureStage *)v128; /*0x7bce7e*/
    LOBYTE(v129) = 0; /*0x7bce84*/
    if ( v128 ) /*0x7bce89*/
    {
      --*(_DWORD *)&v128->SoftwareVP; /*0x7bce8b*/
      if ( !v109[7].Unk08 ) /*0x7bce94*/
        sub_772560(v109); /*0x7bce99*/
    }
    BSShader_ConfigureTextureStageSampler((int)v108, 0, 3, 2); /*0x7bcea5*/
    NiD3DPass_SetTextureStage(*(this + 0x30), (*(this + 0x30))->CurrentStage, &v108->Stage); /*0x7bceb8*/
    v110 = (int)*(this + 0x30); /*0x7bcebd*/
    if ( !*(_DWORD *)(v110 + 0x30) ) /*0x7bcec3*/
      *(_DWORD *)(v110 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcece*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v110 + 0x30), 0xF, 0, 0); /*0x7bceda*/
    v111 = (int)*(this + 0x30); /*0x7bcedf*/
    if ( !*(_DWORD *)(v111 + 0x30) ) /*0x7bcee5*/
      *(_DWORD *)(v111 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcef0*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v111 + 0x30), 0x1B, 1, 0); /*0x7bcefc*/
    v112 = (int)*(this + 0x30); /*0x7bcf01*/
    if ( !*(_DWORD *)(v112 + 0x30) ) /*0x7bcf07*/
      *(_DWORD *)(v112 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcf12*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v112 + 0x30), 0x13, 1, 0); /*0x7bcf1e*/
    v113 = (int)*(this + 0x30); /*0x7bcf23*/
    if ( !*(_DWORD *)(v113 + 0x30) ) /*0x7bcf29*/
      *(_DWORD *)(v113 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcf34*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v113 + 0x30), 0x14, 6, 0); /*0x7bcf40*/
    v114 = (int)*(this + 0x30); /*0x7bcf45*/
    if ( !*(_DWORD *)(v114 + 0x30) ) /*0x7bcf4b*/
      *(_DWORD *)(v114 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcf56*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v114 + 0x30), 7, 1, 0); /*0x7bcf62*/
    v115 = (int)*(this + 0x30); /*0x7bcf67*/
    if ( !*(_DWORD *)(v115 + 0x30) ) /*0x7bcf6d*/
      *(_DWORD *)(v115 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcf78*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v115 + 0x30), 0xE, 0, 0); /*0x7bcf84*/
    v116 = (int)*(this + 0x30); /*0x7bcf89*/
    if ( !*(_DWORD *)(v116 + 0x30) ) /*0x7bcf8f*/
      *(_DWORD *)(v116 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcf9a*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v116 + 0x30), 0x17, 4, 0); /*0x7bcfa6*/
    v117 = (int)*(this + 0x30); /*0x7bcfab*/
    if ( !*(_DWORD *)(v117 + 0x30) ) /*0x7bcfb1*/
      *(_DWORD *)(v117 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7bcfbc*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v117 + 0x30), 0xA8, 8, 0); /*0x7bcfcb*/
  }
  v118 = (int)*(this + 0x30); /*0x7bcfd0*/
  v119 = (int)*(this + 0x32); /*0x7bcfd6*/
  v120 = *(_DWORD *)(v118 + 0x58); /*0x7bcfdc*/
  if ( v120 != v119 ) /*0x7bcfe1*/
  {
    if ( v120 ) /*0x7bcfe5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v120 + 4)) ) /*0x7bcfeb*/
        (**(void (__thiscall ***)(int, int))v120)(v120, 1); /*0x7bd001*/
    }
    *(_DWORD *)(v118 + 0x58) = v119; /*0x7bd005*/
    if ( v119 ) /*0x7bd008*/
      InterlockedIncrement((volatile LONG *)(v119 + 4)); /*0x7bd00e*/
  }
  v121 = (int)*(this + 0x36); /*0x7bd014*/
  v122 = (int)*(this + 0x30); /*0x7bd01a*/
  v123 = *(_DWORD *)(v122 + 0x44); /*0x7bd020*/
  if ( v123 != v121 ) /*0x7bd025*/
  {
    if ( v123 ) /*0x7bd029*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v123 + 4)) ) /*0x7bd02f*/
        (**(void (__thiscall ***)(int, int))v123)(v123, 1); /*0x7bd045*/
    }
    *(_DWORD *)(v122 + 0x44) = v121; /*0x7bd049*/
    if ( v121 ) /*0x7bd04c*/
      InterlockedIncrement((volatile LONG *)(v121 + 4)); /*0x7bd052*/
  }
  v124 = (NiD3DTextureStage *)v127; /*0x7bd058*/
  v129 = 0xFFFFFFFF; /*0x7bd061*/
  if ( v127 ) /*0x7bd065*/
  {
    v2 = v127[0x17]-- == 1; /*0x7bd067*/
    if ( v2 ) /*0x7bd06a*/
      sub_772560(v124); /*0x7bd06c*/
  }
  return 1; /*0x7bd073*/
}
