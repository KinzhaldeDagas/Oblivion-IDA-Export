void __thiscall sub_7E7F70(void *this)
{
  unsigned int **v2; // edi
  NiD3DTextureStage *v3; // eax
  bool v4; // zf
  NiD3DTextureStage *v5; // ecx
  unsigned int **v6; // edi
  NiD3DTextureStage *v7; // eax
  NiD3DTextureStage *v8; // ecx
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // ebx
  int v22; // ebp
  int v23; // edi
  int v24; // ebp
  int v25; // ebx
  int v26; // edi
  unsigned int **v27; // edi
  NiD3DTextureStage *v28; // eax
  NiD3DTextureStage *v29; // ecx
  unsigned int **v30; // edi
  NiD3DTextureStage *v31; // eax
  NiD3DTextureStage *v32; // ecx
  unsigned int **v33; // edi
  NiD3DTextureStage *v34; // eax
  NiD3DTextureStage *v35; // ecx
  unsigned int **v36; // edi
  NiD3DTextureStage *v37; // eax
  NiD3DTextureStage *v38; // ecx
  unsigned int **v39; // edi
  NiD3DTextureStage *v40; // eax
  NiD3DTextureStage *v41; // ecx
  unsigned int **v42; // edi
  NiD3DTextureStage *v43; // eax
  NiD3DTextureStage *v44; // ecx
  int v45; // edi
  int v46; // edi
  int v47; // edi
  int v48; // edi
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
  int v60; // ebp
  int v61; // ebx
  int v62; // edi
  unsigned int **v63; // edi
  NiD3DTextureStage *v64; // eax
  NiD3DTextureStage *v65; // ecx
  unsigned int **v66; // edi
  NiD3DTextureStage *v67; // eax
  NiD3DTextureStage *v68; // ecx
  int v69; // edi
  int v70; // edi
  int v71; // edi
  int v72; // edi
  int v73; // edi
  int v74; // edi
  int v75; // edi
  int v76; // edi
  int v77; // edi
  int v78; // edi
  int v79; // edi
  NiD3DTextureStage *v80; // eax
  unsigned int *a3; // [esp+14h] [ebp-14h] BYREF
  NiD3DTextureStage *v82; // [esp+18h] [ebp-10h] BYREF
  unsigned int v83; // [esp+24h] [ebp-4h]

  NiD3DTextureStagePool_Acquire(&a3); /*0x7e7f9e*/
  v83 = 0; /*0x7e7fae*/
  BSShader_ConfigureTextureStageSampler((int)a3, 0, 3, 2); /*0x7e7fb6*/
  NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x1F), *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x14), a3); /*0x7e7fca*/
  v2 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v82); /*0x7e7fdc*/
  v3 = (NiD3DTextureStage *)a3; /*0x7e7fde*/
  v4 = a3 == *v2; /*0x7e7fe2*/
  LOBYTE(v83) = 1; /*0x7e7fe9*/
  if ( !v4 ) /*0x7e7fed*/
  {
    if ( a3 ) /*0x7e7ff1*/
    {
      --a3[0x17]; /*0x7e7ff3*/
      if ( !v3[7].Unk08 ) /*0x7e7ffc*/
        sub_772560(v3); /*0x7e8001*/
    }
    v3 = (NiD3DTextureStage *)*v2; /*0x7e8006*/
    a3 = *v2; /*0x7e800a*/
    if ( a3 ) /*0x7e800e*/
    {
      ++v3[7].Unk08; /*0x7e8010*/
      v3 = (NiD3DTextureStage *)a3; /*0x7e8013*/
    }
  }
  v5 = v82; /*0x7e8017*/
  LOBYTE(v83) = 0; /*0x7e801d*/
  if ( v82 ) /*0x7e8022*/
  {
    --v82[7].Unk08; /*0x7e8024*/
    if ( !v5[7].Unk08 ) /*0x7e8028*/
      sub_772560(v5); /*0x7e8031*/
    v3 = (NiD3DTextureStage *)a3; /*0x7e8036*/
  }
  BSShader_ConfigureTextureStageSampler((int)v3, 1, 1, 2); /*0x7e803f*/
  NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x1F), *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x14), a3); /*0x7e8053*/
  v6 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v82); /*0x7e8065*/
  v7 = (NiD3DTextureStage *)a3; /*0x7e8067*/
  v4 = a3 == *v6; /*0x7e806b*/
  LOBYTE(v83) = 2; /*0x7e806d*/
  if ( !v4 ) /*0x7e8072*/
  {
    if ( a3 ) /*0x7e8076*/
    {
      --a3[0x17]; /*0x7e8078*/
      if ( !v7[7].Unk08 ) /*0x7e8081*/
        sub_772560(v7); /*0x7e8086*/
    }
    v7 = (NiD3DTextureStage *)*v6; /*0x7e808b*/
    a3 = *v6; /*0x7e808f*/
    if ( a3 ) /*0x7e8093*/
    {
      ++v7[7].Unk08; /*0x7e8095*/
      v7 = (NiD3DTextureStage *)a3; /*0x7e8098*/
    }
  }
  v8 = v82; /*0x7e809c*/
  LOBYTE(v83) = 0; /*0x7e80a2*/
  if ( v82 ) /*0x7e80a7*/
  {
    --v82[7].Unk08; /*0x7e80a9*/
    if ( !v8[7].Unk08 ) /*0x7e80ad*/
      sub_772560(v8); /*0x7e80b6*/
    v7 = (NiD3DTextureStage *)a3; /*0x7e80bb*/
  }
  BSShader_ConfigureTextureStageSampler((int)v7, 2, 1, 2); /*0x7e80c5*/
  NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x1F), *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x14), a3); /*0x7e80d9*/
  v9 = *((_DWORD *)this + 0x1F); /*0x7e80de*/
  if ( !*(_DWORD *)(v9 + 0x30) ) /*0x7e80e1*/
    *(_DWORD *)(v9 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e80ec*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v9 + 0x30), 0x1B, 0, 0); /*0x7e80f8*/
  v10 = *((_DWORD *)this + 0x1F); /*0x7e8104*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7e8107*/
  {
    if ( !*(_DWORD *)(v10 + 0x30) ) /*0x7e81c5*/
      *(_DWORD *)(v10 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e81d0*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v10 + 0x30), 0xF, 0, 0); /*0x7e81dc*/
  }
  else
  {
    if ( !*(_DWORD *)(v10 + 0x30) ) /*0x7e810d*/
      *(_DWORD *)(v10 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8118*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v10 + 0x30), 0xF, 1, 0); /*0x7e8123*/
    v11 = *((_DWORD *)this + 0x1F); /*0x7e8128*/
    if ( !*(_DWORD *)(v11 + 0x30) ) /*0x7e812b*/
      *(_DWORD *)(v11 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8136*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v11 + 0x30), 0x19, 5, 0); /*0x7e8142*/
    v12 = *((_DWORD *)this + 0x1F); /*0x7e8147*/
    if ( !*(_DWORD *)(v12 + 0x30) ) /*0x7e814a*/
      *(_DWORD *)(v12 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8155*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v12 + 0x30), 0x18, 0xA, 0); /*0x7e8161*/
    if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7e8166*/
    {
      v13 = *((_DWORD *)this + 0x1F); /*0x7e816f*/
      if ( !*(_DWORD *)(v13 + 0x30) ) /*0x7e8172*/
        *(_DWORD *)(v13 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e817d*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v13 + 0x30), 0x1B, 1, 0); /*0x7e8188*/
      v14 = *((_DWORD *)this + 0x1F); /*0x7e818d*/
      if ( !*(_DWORD *)(v14 + 0x30) ) /*0x7e8190*/
        *(_DWORD *)(v14 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e819b*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v14 + 0x30), 0x13, 5, 0); /*0x7e81a7*/
      v15 = *((_DWORD *)this + 0x1F); /*0x7e81ac*/
      if ( !*(_DWORD *)(v15 + 0x30) ) /*0x7e81af*/
        *(_DWORD *)(v15 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e81ba*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v15 + 0x30), 0x14, 6, 0); /*0x7e81c3*/
    }
  }
  v16 = *((_DWORD *)this + 0x1F); /*0x7e81e1*/
  if ( !*(_DWORD *)(v16 + 0x30) ) /*0x7e81e4*/
    *(_DWORD *)(v16 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e81ef*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v16 + 0x30), 7, 1, 0); /*0x7e81fa*/
  v17 = *((_DWORD *)this + 0x1F); /*0x7e81ff*/
  if ( !*(_DWORD *)(v17 + 0x30) ) /*0x7e8202*/
    *(_DWORD *)(v17 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e820d*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v17 + 0x30), 0x17, 4, 0); /*0x7e8219*/
  v18 = *((_DWORD *)this + 0x1F); /*0x7e821e*/
  if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7e8221*/
    *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e822c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v18 + 0x30), 0xE, 1, 0); /*0x7e8237*/
  v19 = *((_DWORD *)this + 0x1F); /*0x7e823c*/
  if ( !*(_DWORD *)(v19 + 0x30) ) /*0x7e823f*/
    *(_DWORD *)(v19 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e824a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v19 + 0x30), 0xA8, 7, 0); /*0x7e8259*/
  v20 = *((_DWORD *)this + 0x1F); /*0x7e825e*/
  if ( !*(_DWORD *)(v20 + 0x30) ) /*0x7e8261*/
    *(_DWORD *)(v20 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e826c*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v20 + 0x30), 0x1C, 0, 0); /*0x7e8278*/
  v21 = *((_DWORD *)this + 0x1F); /*0x7e827d*/
  v22 = *((_DWORD *)this + 0x25); /*0x7e8280*/
  v23 = *(_DWORD *)(v21 + 0x58); /*0x7e8286*/
  if ( v23 != v22 ) /*0x7e828b*/
  {
    if ( v23 ) /*0x7e828f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x7e8295*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x7e82ab*/
    }
    *(_DWORD *)(v21 + 0x58) = v22; /*0x7e82af*/
    if ( v22 ) /*0x7e82b2*/
      InterlockedIncrement((volatile LONG *)(v22 + 4)); /*0x7e82b8*/
  }
  v24 = *((_DWORD *)this + 0x1F); /*0x7e82be*/
  v25 = *((_DWORD *)this + 0x4D); /*0x7e82c1*/
  v26 = *(_DWORD *)(v24 + 0x44); /*0x7e82c7*/
  if ( v26 != v25 ) /*0x7e82cc*/
  {
    if ( v26 ) /*0x7e82d0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x7e82d6*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x7e82ec*/
    }
    *(_DWORD *)(v24 + 0x44) = v25; /*0x7e82f0*/
    if ( v25 ) /*0x7e82f3*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x7e82f9*/
  }
  v27 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v82); /*0x7e830c*/
  v28 = (NiD3DTextureStage *)a3; /*0x7e830e*/
  v4 = a3 == *v27; /*0x7e8312*/
  LOBYTE(v83) = 3; /*0x7e8314*/
  if ( !v4 ) /*0x7e8319*/
  {
    if ( a3 ) /*0x7e831d*/
    {
      --a3[0x17]; /*0x7e831f*/
      if ( !v28[7].Unk08 ) /*0x7e8328*/
        sub_772560(v28); /*0x7e832d*/
    }
    v28 = (NiD3DTextureStage *)*v27; /*0x7e8332*/
    a3 = *v27; /*0x7e8336*/
    if ( a3 ) /*0x7e833f*/
    {
      ++v28[7].Unk08; /*0x7e8341*/
      v28 = (NiD3DTextureStage *)a3; /*0x7e8344*/
    }
  }
  v29 = v82; /*0x7e834f*/
  LOBYTE(v83) = 0; /*0x7e8355*/
  if ( v82 ) /*0x7e835a*/
  {
    --v82[7].Unk08; /*0x7e835c*/
    if ( !v29[7].Unk08 ) /*0x7e8360*/
      sub_772560(v29); /*0x7e8369*/
    v28 = (NiD3DTextureStage *)a3; /*0x7e836e*/
  }
  BSShader_ConfigureTextureStageSampler((int)v28, 0, 3, 2); /*0x7e837d*/
  NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x20), *(_DWORD *)(*((_DWORD *)this + 0x20) + 0x14), a3); /*0x7e8394*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7e83a4*/
  {
    v39 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v82); /*0x7e852c*/
    v40 = (NiD3DTextureStage *)a3; /*0x7e852e*/
    v4 = a3 == *v39; /*0x7e8532*/
    LOBYTE(v83) = 7; /*0x7e8534*/
    if ( !v4 ) /*0x7e8539*/
    {
      if ( a3 ) /*0x7e853d*/
      {
        --a3[0x17]; /*0x7e853f*/
        if ( !v40[7].Unk08 ) /*0x7e8548*/
          sub_772560(v40); /*0x7e854d*/
      }
      v40 = (NiD3DTextureStage *)*v39; /*0x7e8552*/
      a3 = *v39; /*0x7e8556*/
      if ( a3 ) /*0x7e855a*/
      {
        ++v40[7].Unk08; /*0x7e855c*/
        v40 = (NiD3DTextureStage *)a3; /*0x7e855f*/
      }
    }
    v41 = v82; /*0x7e8563*/
    LOBYTE(v83) = 0; /*0x7e8569*/
    if ( v82 ) /*0x7e856e*/
    {
      --v82[7].Unk08; /*0x7e8570*/
      if ( !v41[7].Unk08 ) /*0x7e8574*/
        sub_772560(v41); /*0x7e857d*/
      v40 = (NiD3DTextureStage *)a3; /*0x7e8582*/
    }
    BSShader_ConfigureTextureStageSampler((int)v40, 1, 3, 2); /*0x7e858b*/
    NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x20), *(_DWORD *)(*((_DWORD *)this + 0x20) + 0x14), a3); /*0x7e85a2*/
    v42 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v82); /*0x7e85b4*/
    v43 = (NiD3DTextureStage *)a3; /*0x7e85b6*/
    v4 = a3 == *v42; /*0x7e85ba*/
    LOBYTE(v83) = 8; /*0x7e85bc*/
    if ( !v4 ) /*0x7e85c1*/
    {
      if ( a3 ) /*0x7e85c5*/
      {
        --a3[0x17]; /*0x7e85c7*/
        if ( !v43[7].Unk08 ) /*0x7e85d0*/
          sub_772560(v43); /*0x7e85d5*/
      }
      v43 = (NiD3DTextureStage *)*v42; /*0x7e85da*/
      a3 = *v42; /*0x7e85de*/
      if ( a3 ) /*0x7e85e2*/
      {
        ++v43[7].Unk08; /*0x7e85e4*/
        v43 = (NiD3DTextureStage *)a3; /*0x7e85e7*/
      }
    }
    v44 = v82; /*0x7e85eb*/
    LOBYTE(v83) = 0; /*0x7e85f1*/
    if ( v82 ) /*0x7e85f6*/
    {
      --v82[7].Unk08; /*0x7e85f8*/
      if ( !v44[7].Unk08 ) /*0x7e85fc*/
        sub_772560(v44); /*0x7e8605*/
      v43 = (NiD3DTextureStage *)a3; /*0x7e860a*/
    }
    BSShader_ConfigureTextureStageSampler((int)v43, 2, 3, 2); /*0x7e8613*/
  }
  else
  {
    v30 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v82); /*0x7e83b2*/
    v31 = (NiD3DTextureStage *)a3; /*0x7e83b4*/
    v4 = a3 == *v30; /*0x7e83b8*/
    LOBYTE(v83) = 4; /*0x7e83ba*/
    if ( !v4 ) /*0x7e83bf*/
    {
      if ( a3 ) /*0x7e83c3*/
      {
        --a3[0x17]; /*0x7e83c5*/
        if ( !v31[7].Unk08 ) /*0x7e83ce*/
          sub_772560(v31); /*0x7e83d3*/
      }
      v31 = (NiD3DTextureStage *)*v30; /*0x7e83d8*/
      a3 = *v30; /*0x7e83dc*/
      if ( a3 ) /*0x7e83e0*/
      {
        ++v31[7].Unk08; /*0x7e83e2*/
        v31 = (NiD3DTextureStage *)a3; /*0x7e83e5*/
      }
    }
    v32 = v82; /*0x7e83e9*/
    LOBYTE(v83) = 0; /*0x7e83ef*/
    if ( v82 ) /*0x7e83f4*/
    {
      --v82[7].Unk08; /*0x7e83f6*/
      if ( !v32[7].Unk08 ) /*0x7e83fa*/
        sub_772560(v32); /*0x7e8403*/
      v31 = (NiD3DTextureStage *)a3; /*0x7e8408*/
    }
    BSShader_ConfigureTextureStageSampler((int)v31, 1, 3, 2); /*0x7e8411*/
    NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x20), *(_DWORD *)(*((_DWORD *)this + 0x20) + 0x14), a3); /*0x7e8428*/
    v33 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v82); /*0x7e843a*/
    v34 = (NiD3DTextureStage *)a3; /*0x7e843c*/
    v4 = a3 == *v33; /*0x7e8440*/
    LOBYTE(v83) = 5; /*0x7e8442*/
    if ( !v4 ) /*0x7e8447*/
    {
      if ( a3 ) /*0x7e844b*/
      {
        --a3[0x17]; /*0x7e844d*/
        if ( !v34[7].Unk08 ) /*0x7e8456*/
          sub_772560(v34); /*0x7e845b*/
      }
      v34 = (NiD3DTextureStage *)*v33; /*0x7e8460*/
      a3 = *v33; /*0x7e8464*/
      if ( a3 ) /*0x7e8468*/
      {
        ++v34[7].Unk08; /*0x7e846a*/
        v34 = (NiD3DTextureStage *)a3; /*0x7e846d*/
      }
    }
    v35 = v82; /*0x7e8471*/
    LOBYTE(v83) = 0; /*0x7e8477*/
    if ( v82 ) /*0x7e847c*/
    {
      --v82[7].Unk08; /*0x7e847e*/
      if ( !v35[7].Unk08 ) /*0x7e8482*/
        sub_772560(v35); /*0x7e848b*/
      v34 = (NiD3DTextureStage *)a3; /*0x7e8490*/
    }
    BSShader_ConfigureTextureStageSampler((int)v34, 2, 1, 2); /*0x7e8498*/
    NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x20), *(_DWORD *)(*((_DWORD *)this + 0x20) + 0x14), a3); /*0x7e84af*/
    v36 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v82); /*0x7e84c1*/
    v37 = (NiD3DTextureStage *)a3; /*0x7e84c3*/
    v4 = a3 == *v36; /*0x7e84c7*/
    LOBYTE(v83) = 6; /*0x7e84c9*/
    if ( !v4 ) /*0x7e84ce*/
    {
      if ( a3 ) /*0x7e84d2*/
      {
        --a3[0x17]; /*0x7e84d4*/
        if ( !v37[7].Unk08 ) /*0x7e84dd*/
          sub_772560(v37); /*0x7e84e2*/
      }
      v37 = (NiD3DTextureStage *)*v36; /*0x7e84e7*/
      a3 = *v36; /*0x7e84eb*/
      if ( a3 ) /*0x7e84ef*/
      {
        ++v37[7].Unk08; /*0x7e84f1*/
        v37 = (NiD3DTextureStage *)a3; /*0x7e84f4*/
      }
    }
    v38 = v82; /*0x7e84f8*/
    LOBYTE(v83) = 0; /*0x7e84fe*/
    if ( v82 ) /*0x7e8503*/
    {
      --v82[7].Unk08; /*0x7e8505*/
      if ( !v38[7].Unk08 ) /*0x7e8509*/
        sub_772560(v38); /*0x7e8512*/
      v37 = (NiD3DTextureStage *)a3; /*0x7e8517*/
    }
    BSShader_ConfigureTextureStageSampler((int)v37, 3, 1, 2); /*0x7e851f*/
  }
  NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x20), *(_DWORD *)(*((_DWORD *)this + 0x20) + 0x14), a3); /*0x7e862a*/
  v45 = *((_DWORD *)this + 0x20); /*0x7e862f*/
  if ( !*(_DWORD *)(v45 + 0x30) ) /*0x7e8635*/
    *(_DWORD *)(v45 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8640*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v45 + 0x30), 0x1B, 0, 0); /*0x7e864c*/
  v46 = *((_DWORD *)this + 0x20); /*0x7e8657*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7e865d*/
  {
    if ( !*(_DWORD *)(v46 + 0x30) ) /*0x7e872a*/
      *(_DWORD *)(v46 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8735*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v46 + 0x30), 0xF, 0, 0); /*0x7e8741*/
  }
  else
  {
    if ( !*(_DWORD *)(v46 + 0x30) ) /*0x7e8663*/
      *(_DWORD *)(v46 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e866e*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v46 + 0x30), 0xF, 1, 0); /*0x7e8679*/
    v47 = *((_DWORD *)this + 0x20); /*0x7e867e*/
    if ( !*(_DWORD *)(v47 + 0x30) ) /*0x7e8684*/
      *(_DWORD *)(v47 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e868f*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v47 + 0x30), 0x19, 5, 0); /*0x7e869b*/
    v48 = *((_DWORD *)this + 0x20); /*0x7e86a0*/
    if ( !*(_DWORD *)(v48 + 0x30) ) /*0x7e86a6*/
      *(_DWORD *)(v48 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e86b1*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v48 + 0x30), 0x18, 0xA, 0); /*0x7e86bd*/
    if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7e86c2*/
    {
      v49 = *((_DWORD *)this + 0x20); /*0x7e86cb*/
      if ( !*(_DWORD *)(v49 + 0x30) ) /*0x7e86d1*/
        *(_DWORD *)(v49 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e86dc*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v49 + 0x30), 0x1B, 1, 0); /*0x7e86e7*/
      v50 = *((_DWORD *)this + 0x20); /*0x7e86ec*/
      if ( !*(_DWORD *)(v50 + 0x30) ) /*0x7e86f2*/
        *(_DWORD *)(v50 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e86fd*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v50 + 0x30), 0x13, 5, 0); /*0x7e8709*/
      v51 = *((_DWORD *)this + 0x20); /*0x7e870e*/
      if ( !*(_DWORD *)(v51 + 0x30) ) /*0x7e8714*/
        *(_DWORD *)(v51 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e871f*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v51 + 0x30), 0x14, 6, 0); /*0x7e8728*/
    }
  }
  v52 = *((_DWORD *)this + 0x20); /*0x7e8746*/
  if ( !*(_DWORD *)(v52 + 0x30) ) /*0x7e874c*/
    *(_DWORD *)(v52 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8757*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v52 + 0x30), 7, 1, 0); /*0x7e8762*/
  v53 = *((_DWORD *)this + 0x20); /*0x7e8767*/
  if ( !*(_DWORD *)(v53 + 0x30) ) /*0x7e876d*/
    *(_DWORD *)(v53 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8778*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v53 + 0x30), 0x17, 4, 0); /*0x7e8784*/
  v54 = *((_DWORD *)this + 0x20); /*0x7e8789*/
  if ( !*(_DWORD *)(v54 + 0x30) ) /*0x7e878f*/
    *(_DWORD *)(v54 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e879a*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v54 + 0x30), 0xE, 1, 0); /*0x7e87a5*/
  v55 = *((_DWORD *)this + 0x20); /*0x7e87aa*/
  if ( !*(_DWORD *)(v55 + 0x30) ) /*0x7e87b0*/
    *(_DWORD *)(v55 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e87bb*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v55 + 0x30), 0xA8, 7, 0); /*0x7e87ca*/
  v56 = *((_DWORD *)this + 0x20); /*0x7e87cf*/
  if ( !*(_DWORD *)(v56 + 0x30) ) /*0x7e87d5*/
    *(_DWORD *)(v56 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e87e0*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v56 + 0x30), 0x1C, 0, 0); /*0x7e87ec*/
  v57 = *((_DWORD *)this + 0x20); /*0x7e87f1*/
  v58 = *((_DWORD *)this + 0x29); /*0x7e87f7*/
  v59 = *(_DWORD *)(v57 + 0x58); /*0x7e87fd*/
  if ( v59 != v58 ) /*0x7e8802*/
  {
    if ( v59 ) /*0x7e8806*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v59 + 4)) ) /*0x7e880c*/
        (**(void (__thiscall ***)(int, int))v59)(v59, 1); /*0x7e8822*/
    }
    *(_DWORD *)(v57 + 0x58) = v58; /*0x7e8826*/
    if ( v58 ) /*0x7e8829*/
      InterlockedIncrement((volatile LONG *)(v58 + 4)); /*0x7e882f*/
  }
  v60 = *((_DWORD *)this + 0x20); /*0x7e8835*/
  v61 = *((_DWORD *)this + 0x4E); /*0x7e883b*/
  v62 = *(_DWORD *)(v60 + 0x44); /*0x7e8841*/
  if ( v62 != v61 ) /*0x7e8846*/
  {
    if ( v62 ) /*0x7e884a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) ) /*0x7e8850*/
        (**(void (__thiscall ***)(int, int))v62)(v62, 1); /*0x7e8866*/
    }
    *(_DWORD *)(v60 + 0x44) = v61; /*0x7e886a*/
    if ( v61 ) /*0x7e886d*/
      InterlockedIncrement((volatile LONG *)(v61 + 4)); /*0x7e8873*/
  }
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x7e8880*/
  {
    v63 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v82); /*0x7e8893*/
    v64 = (NiD3DTextureStage *)a3; /*0x7e8895*/
    v4 = a3 == *v63; /*0x7e8899*/
    LOBYTE(v83) = 9; /*0x7e889b*/
    if ( !v4 ) /*0x7e88a0*/
    {
      if ( a3 ) /*0x7e88a4*/
      {
        --a3[0x17]; /*0x7e88a6*/
        if ( !v64[7].Unk08 ) /*0x7e88af*/
          sub_772560(v64); /*0x7e88b4*/
      }
      v64 = (NiD3DTextureStage *)*v63; /*0x7e88b9*/
      a3 = *v63; /*0x7e88bd*/
      if ( a3 ) /*0x7e88c1*/
      {
        ++v64[7].Unk08; /*0x7e88c3*/
        v64 = (NiD3DTextureStage *)a3; /*0x7e88c7*/
      }
    }
    v65 = v82; /*0x7e88cb*/
    LOBYTE(v83) = 0; /*0x7e88d1*/
    if ( v82 ) /*0x7e88d6*/
    {
      --v82[7].Unk08; /*0x7e88d8*/
      if ( !v65[7].Unk08 ) /*0x7e88dc*/
        sub_772560(v65); /*0x7e88e5*/
      v64 = (NiD3DTextureStage *)a3; /*0x7e88ea*/
    }
    BSShader_ConfigureTextureStageSampler((int)v64, 0, 3, 2); /*0x7e88f5*/
    NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x21), *(_DWORD *)(*((_DWORD *)this + 0x21) + 0x14), a3); /*0x7e890c*/
    v66 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v82); /*0x7e891e*/
    v67 = (NiD3DTextureStage *)a3; /*0x7e8920*/
    v4 = a3 == *v66; /*0x7e8924*/
    LOBYTE(v83) = 0xA; /*0x7e8926*/
    if ( !v4 ) /*0x7e892b*/
    {
      if ( a3 ) /*0x7e892f*/
      {
        --a3[0x17]; /*0x7e8931*/
        if ( !v67[7].Unk08 ) /*0x7e893a*/
          sub_772560(v67); /*0x7e893f*/
      }
      v67 = (NiD3DTextureStage *)*v66; /*0x7e8944*/
      a3 = *v66; /*0x7e8948*/
      if ( a3 ) /*0x7e894c*/
      {
        ++v67[7].Unk08; /*0x7e894e*/
        v67 = (NiD3DTextureStage *)a3; /*0x7e8952*/
      }
    }
    v68 = v82; /*0x7e8956*/
    LOBYTE(v83) = 0; /*0x7e895c*/
    if ( v82 ) /*0x7e8961*/
    {
      --v82[7].Unk08; /*0x7e8963*/
      if ( !v68[7].Unk08 ) /*0x7e8967*/
        sub_772560(v68); /*0x7e8970*/
      v67 = (NiD3DTextureStage *)a3; /*0x7e8975*/
    }
    BSShader_ConfigureTextureStageSampler((int)v67, 1, 3, 2); /*0x7e8980*/
    NiD3DPass_SetTextureStage(*((NiD3DPass **)this + 0x21), *(_DWORD *)(*((_DWORD *)this + 0x21) + 0x14), a3); /*0x7e8997*/
    v69 = *((_DWORD *)this + 0x21); /*0x7e899c*/
    if ( !*(_DWORD *)(v69 + 0x30) ) /*0x7e89a2*/
      *(_DWORD *)(v69 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e89ad*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v69 + 0x30), 0xF, 1, 0); /*0x7e89b9*/
    v70 = *((_DWORD *)this + 0x21); /*0x7e89be*/
    if ( !*(_DWORD *)(v70 + 0x30) ) /*0x7e89c4*/
      *(_DWORD *)(v70 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e89cf*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v70 + 0x30), 0x19, 5, 0); /*0x7e89db*/
    v71 = *((_DWORD *)this + 0x21); /*0x7e89e0*/
    if ( !*(_DWORD *)(v71 + 0x30) ) /*0x7e89e6*/
      *(_DWORD *)(v71 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e89f1*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v71 + 0x30), 0x18, 0xA, 0); /*0x7e89fd*/
    v72 = *((_DWORD *)this + 0x21); /*0x7e8a02*/
    if ( !*(_DWORD *)(v72 + 0x30) ) /*0x7e8a08*/
      *(_DWORD *)(v72 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8a13*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v72 + 0x30), 0x1B, 1, 0); /*0x7e8a1f*/
    v73 = *((_DWORD *)this + 0x21); /*0x7e8a24*/
    if ( !*(_DWORD *)(v73 + 0x30) ) /*0x7e8a2a*/
      *(_DWORD *)(v73 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8a35*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v73 + 0x30), 0x13, 9, 0); /*0x7e8a41*/
    v74 = *((_DWORD *)this + 0x21); /*0x7e8a46*/
    if ( !*(_DWORD *)(v74 + 0x30) ) /*0x7e8a4c*/
      *(_DWORD *)(v74 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8a57*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v74 + 0x30), 0x14, 1, 0); /*0x7e8a63*/
    v75 = *((_DWORD *)this + 0x21); /*0x7e8a68*/
    if ( !*(_DWORD *)(v75 + 0x30) ) /*0x7e8a6e*/
      *(_DWORD *)(v75 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8a79*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v75 + 0x30), 7, 1, 0); /*0x7e8a85*/
    v76 = *((_DWORD *)this + 0x21); /*0x7e8a8a*/
    if ( !*(_DWORD *)(v76 + 0x30) ) /*0x7e8a90*/
      *(_DWORD *)(v76 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8a9b*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v76 + 0x30), 0x17, 4, 0); /*0x7e8aa7*/
    v77 = *((_DWORD *)this + 0x21); /*0x7e8aac*/
    if ( !*(_DWORD *)(v77 + 0x30) ) /*0x7e8ab2*/
      *(_DWORD *)(v77 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8abd*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v77 + 0x30), 0xE, 0, 0); /*0x7e8ac9*/
    v78 = *((_DWORD *)this + 0x21); /*0x7e8ace*/
    if ( !*(_DWORD *)(v78 + 0x30) ) /*0x7e8ad4*/
      *(_DWORD *)(v78 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8adf*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v78 + 0x30), 0xA8, 7, 0); /*0x7e8aee*/
    v79 = *((_DWORD *)this + 0x21); /*0x7e8af3*/
    if ( !*(_DWORD *)(v79 + 0x30) ) /*0x7e8af9*/
      *(_DWORD *)(v79 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e8b04*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v79 + 0x30), 0x1C, 0, 0); /*0x7e8b10*/
    NiD3DPass_SetVertexShader(*((NiD3DPass **)this + 0x21), *((NiD3DVertexShader **)this + 0x4D)); /*0x7e8b22*/
    NiD3DPass_SetPixelShader(*((NiD3DPassVtbl ***)this + 0x21), *((NiD3DPixelShader **)this + 0x53)); /*0x7e8b36*/
  }
  v80 = (NiD3DTextureStage *)a3; /*0x7e8b3b*/
  v83 = 0xFFFFFFFF; /*0x7e8b41*/
  if ( a3 ) /*0x7e8b49*/
  {
    --a3[0x17]; /*0x7e8b4b*/
    if ( !v80[7].Unk08 ) /*0x7e8b54*/
      sub_772560(v80); /*0x7e8b59*/
  }
}
