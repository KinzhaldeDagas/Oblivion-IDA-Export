char __thiscall sub_7BF1B0(HDRShader *this)
{
  int v2; // esi
  NiD3DPass **v3; // ebp
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DPass *v6; // ebp
  NiD3DPass *v7; // eax
  int v8; // eax
  NiD3DTextureStage *v9; // eax
  NiD3DPass **v10; // ebp
  NiD3DPass *v11; // ecx
  NiD3DPass *v12; // ebp
  NiD3DPass *v13; // eax
  int *v14; // ebp
  NiD3DTextureStage *v15; // eax
  NiD3DPass **v16; // ebp
  NiD3DPass *v17; // ecx
  NiD3DPass *v18; // ebp
  NiD3DPass *v19; // eax
  int *v20; // ebp
  NiD3DTextureStage *v21; // eax
  NiD3DPass **v22; // ebp
  NiD3DPass *v23; // ecx
  NiD3DPass *v24; // ebp
  NiD3DPass *v25; // eax
  int *v26; // ebp
  NiD3DTextureStage *v27; // eax
  NiD3DPass *v28; // ecx
  NiD3DPass *v29; // ecx
  NiD3DPass *v30; // ecx
  NiD3DPass **v31; // ebp
  NiD3DPass *v32; // ecx
  NiD3DPass *v33; // eax
  NiD3DPass *v34; // eax
  int *v35; // ebp
  NiD3DTextureStage *v36; // eax
  NiD3DPass *v37; // ecx
  NiD3DPass **v38; // ebp
  NiD3DPass *v39; // ecx
  NiD3DPass *v40; // eax
  NiD3DPass *v41; // eax
  int *v42; // ebp
  NiD3DTextureStage *v43; // eax
  NiD3DPass **v44; // ebp
  NiD3DPass *v45; // ecx
  NiD3DPass *v46; // ebp
  NiD3DPass *v47; // eax
  int *v48; // ebp
  NiD3DTextureStage *v49; // eax
  int *v50; // ebp
  NiD3DTextureStage *v51; // eax
  int *v52; // ebp
  NiD3DTextureStage *v53; // eax
  NiD3DPass **v54; // ebp
  NiD3DPass *v55; // ecx
  NiD3DPass *v56; // ebp
  NiD3DPass *v57; // eax
  int *v58; // ebp
  NiD3DTextureStage *v59; // eax
  NiD3DPass **v60; // ebp
  NiD3DPass *v61; // ecx
  NiD3DPass *v62; // ebp
  NiD3DPass *v63; // eax
  int *v64; // ebp
  NiD3DTextureStage *v65; // eax
  int *v66; // ebp
  NiD3DTextureStage *v67; // eax
  NiD3DPass **v68; // ebp
  NiD3DPass *v69; // ecx
  NiD3DPass *v70; // ebp
  NiD3DPass *v71; // eax
  int *v72; // ebp
  NiD3DTextureStage *v73; // eax
  NiD3DPass **passes; // edi
  NiD3DPass *v75; // ebp
  NiD3DPass *v76; // ebp
  NiD3DPass *v77; // ebp
  NiD3DPass *v78; // ebp
  NiD3DPass *v79; // ebp
  NiD3DPass *v81; // [esp+18h] [ebp-14h] BYREF
  NiD3DTextureStage *v82; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v83; // [esp+28h] [ebp-4h]

  v2 = 0; /*0x7bf1d9*/
  v83 = 0; /*0x7bf1e6*/
  v3 = NiD3DPassPool_Acquire(&v81); /*0x7bf1f2*/
  v4 = this->passes[0]; /*0x7bf1f4*/
  v5 = v4 == *v3; /*0x7bf1fa*/
  LOBYTE(v83) = 1; /*0x7bf1fd*/
  if ( !v5 ) /*0x7bf202*/
  {
    if ( v4 ) /*0x7bf206*/
    {
      v5 = v4->RefCount-- == 1; /*0x7bf208*/
      if ( v5 ) /*0x7bf20c*/
        NiD3DPass_ReleaseToPool(v4); /*0x7bf20e*/
    }
    v6 = *v3; /*0x7bf213*/
    this->passes[0] = v6; /*0x7bf218*/
    if ( v6 ) /*0x7bf21e*/
      ++v6->RefCount; /*0x7bf220*/
  }
  v7 = v81; /*0x7bf224*/
  LOBYTE(v83) = 0; /*0x7bf22a*/
  if ( v81 ) /*0x7bf22f*/
  {
    --v81->RefCount; /*0x7bf231*/
    if ( !v7->RefCount ) /*0x7bf23a*/
      NiD3DPass_ReleaseToPool(v7); /*0x7bf23e*/
  }
  v8 = *NiD3DTextureStagePool_Acquire(&v81); /*0x7bf250*/
  if ( v8 ) /*0x7bf254*/
  {
    v2 = v8; /*0x7bf256*/
    ++*(_DWORD *)(v8 + 0x5C); /*0x7bf258*/
  }
  v9 = (NiD3DTextureStage *)v81; /*0x7bf260*/
  LOBYTE(v83) = 0; /*0x7bf266*/
  if ( v81 ) /*0x7bf26b*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bf26d*/
    if ( !v9[7].Unk08 ) /*0x7bf276*/
      sub_772560(v9); /*0x7bf27a*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 0, 3, 2); /*0x7bf285*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, 0); /*0x7bf290*/
  NiD3DPass_SetTextureStage(this->passes[0], this->passes[0]->CurrentStage, (unsigned int *)v2); /*0x7bf2a0*/
  v10 = NiD3DPassPool_Acquire(&v81); /*0x7bf2b2*/
  v11 = this->passes[1]; /*0x7bf2b4*/
  v5 = v11 == *v10; /*0x7bf2ba*/
  LOBYTE(v83) = 3; /*0x7bf2bd*/
  if ( !v5 ) /*0x7bf2c2*/
  {
    if ( v11 ) /*0x7bf2c6*/
    {
      v5 = v11->RefCount-- == 1; /*0x7bf2c8*/
      if ( v5 ) /*0x7bf2cc*/
        NiD3DPass_ReleaseToPool(v11); /*0x7bf2ce*/
    }
    v12 = *v10; /*0x7bf2d3*/
    this->passes[1] = v12; /*0x7bf2d8*/
    if ( v12 ) /*0x7bf2de*/
      ++v12->RefCount; /*0x7bf2e0*/
  }
  v13 = v81; /*0x7bf2e4*/
  LOBYTE(v83) = 0; /*0x7bf2ea*/
  if ( v81 ) /*0x7bf2ef*/
  {
    --v81->RefCount; /*0x7bf2f1*/
    if ( !v13->RefCount ) /*0x7bf2fa*/
      NiD3DPass_ReleaseToPool(v13); /*0x7bf2fe*/
  }
  v14 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bf310*/
  v5 = v2 == *v14; /*0x7bf312*/
  LOBYTE(v83) = 4; /*0x7bf315*/
  if ( !v5 ) /*0x7bf31a*/
  {
    if ( v2 ) /*0x7bf31e*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bf320*/
      if ( v5 ) /*0x7bf324*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bf328*/
    }
    v2 = *v14; /*0x7bf32d*/
    if ( *v14 ) /*0x7bf332*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bf338*/
  }
  v15 = (NiD3DTextureStage *)v81; /*0x7bf33c*/
  LOBYTE(v83) = 0; /*0x7bf342*/
  if ( v81 ) /*0x7bf347*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bf349*/
    if ( !v15[7].Unk08 ) /*0x7bf352*/
      sub_772560(v15); /*0x7bf356*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 0, 3, 2); /*0x7bf361*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, 0); /*0x7bf36c*/
  NiD3DPass_SetTextureStage(this->passes[1], this->passes[1]->CurrentStage, (unsigned int *)v2); /*0x7bf37c*/
  v16 = NiD3DPassPool_Acquire(&v81); /*0x7bf38e*/
  v17 = this->passes[2]; /*0x7bf390*/
  v5 = v17 == *v16; /*0x7bf396*/
  LOBYTE(v83) = 5; /*0x7bf399*/
  if ( !v5 ) /*0x7bf39e*/
  {
    if ( v17 ) /*0x7bf3a2*/
    {
      v5 = v17->RefCount-- == 1; /*0x7bf3a4*/
      if ( v5 ) /*0x7bf3a8*/
        NiD3DPass_ReleaseToPool(v17); /*0x7bf3aa*/
    }
    v18 = *v16; /*0x7bf3af*/
    this->passes[2] = v18; /*0x7bf3b4*/
    if ( v18 ) /*0x7bf3ba*/
      ++v18->RefCount; /*0x7bf3bc*/
  }
  v19 = v81; /*0x7bf3c0*/
  LOBYTE(v83) = 0; /*0x7bf3c6*/
  if ( v81 ) /*0x7bf3cb*/
  {
    --v81->RefCount; /*0x7bf3cd*/
    if ( !v19->RefCount ) /*0x7bf3d6*/
      NiD3DPass_ReleaseToPool(v19); /*0x7bf3da*/
  }
  v20 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bf3ec*/
  v5 = v2 == *v20; /*0x7bf3ee*/
  LOBYTE(v83) = 6; /*0x7bf3f1*/
  if ( !v5 ) /*0x7bf3f6*/
  {
    if ( v2 ) /*0x7bf3fa*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bf3fc*/
      if ( v5 ) /*0x7bf400*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bf404*/
    }
    v2 = *v20; /*0x7bf409*/
    if ( *v20 ) /*0x7bf40e*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bf414*/
  }
  v21 = (NiD3DTextureStage *)v81; /*0x7bf418*/
  LOBYTE(v83) = 0; /*0x7bf41e*/
  if ( v81 ) /*0x7bf423*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bf425*/
    if ( !v21[7].Unk08 ) /*0x7bf42e*/
      sub_772560(v21); /*0x7bf432*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 0, 3, 2); /*0x7bf43d*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, 0); /*0x7bf448*/
  NiD3DPass_SetTextureStage(this->passes[2], this->passes[2]->CurrentStage, (unsigned int *)v2); /*0x7bf458*/
  v22 = NiD3DPassPool_Acquire(&v81); /*0x7bf46a*/
  v23 = this->passes[3]; /*0x7bf46c*/
  v5 = v23 == *v22; /*0x7bf472*/
  LOBYTE(v83) = 7; /*0x7bf475*/
  if ( !v5 ) /*0x7bf47a*/
  {
    if ( v23 ) /*0x7bf47e*/
    {
      v5 = v23->RefCount-- == 1; /*0x7bf480*/
      if ( v5 ) /*0x7bf484*/
        NiD3DPass_ReleaseToPool(v23); /*0x7bf486*/
    }
    v24 = *v22; /*0x7bf48b*/
    this->passes[3] = v24; /*0x7bf490*/
    if ( v24 ) /*0x7bf496*/
      ++v24->RefCount; /*0x7bf498*/
  }
  v25 = v81; /*0x7bf49c*/
  LOBYTE(v83) = 0; /*0x7bf4a2*/
  if ( v81 ) /*0x7bf4a7*/
  {
    --v81->RefCount; /*0x7bf4a9*/
    if ( !v25->RefCount ) /*0x7bf4b2*/
      NiD3DPass_ReleaseToPool(v25); /*0x7bf4b6*/
  }
  v26 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bf4c8*/
  v5 = v2 == *v26; /*0x7bf4ca*/
  LOBYTE(v83) = 8; /*0x7bf4cd*/
  if ( !v5 ) /*0x7bf4d2*/
  {
    if ( v2 ) /*0x7bf4d6*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bf4d8*/
      if ( v5 ) /*0x7bf4dc*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bf4e0*/
    }
    v2 = *v26; /*0x7bf4e5*/
    if ( *v26 ) /*0x7bf4ea*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bf4f0*/
  }
  v27 = (NiD3DTextureStage *)v81; /*0x7bf4f4*/
  LOBYTE(v83) = 0; /*0x7bf4fa*/
  if ( v81 ) /*0x7bf4ff*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bf501*/
    if ( !v27[7].Unk08 ) /*0x7bf50a*/
      sub_772560(v27); /*0x7bf50e*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 0, 3, 2); /*0x7bf519*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, OB_RendererGlobalState_010201A0.bFP16ARGBFiltering != 0); /*0x7bf52f*/
  NiD3DPass_SetTextureStage(this->passes[3], this->passes[3]->CurrentStage, (unsigned int *)v2); /*0x7bf53f*/
  v28 = this->passes[4]; /*0x7bf544*/
  if ( v28 ) /*0x7bf54f*/
  {
    v5 = v28->RefCount-- == 1; /*0x7bf551*/
    if ( v5 ) /*0x7bf554*/
      NiD3DPass_ReleaseToPool(v28); /*0x7bf556*/
    this->passes[4] = 0; /*0x7bf55b*/
  }
  v29 = this->passes[5]; /*0x7bf561*/
  if ( v29 ) /*0x7bf569*/
  {
    v5 = v29->RefCount-- == 1; /*0x7bf56b*/
    if ( v5 ) /*0x7bf56e*/
      NiD3DPass_ReleaseToPool(v29); /*0x7bf570*/
    this->passes[5] = 0; /*0x7bf575*/
  }
  v30 = this->passes[6]; /*0x7bf57b*/
  if ( v30 ) /*0x7bf583*/
  {
    v5 = v30->RefCount-- == 1; /*0x7bf585*/
    if ( v5 ) /*0x7bf588*/
      NiD3DPass_ReleaseToPool(v30); /*0x7bf58a*/
    this->passes[6] = 0; /*0x7bf58f*/
  }
  if ( LOBYTE(this->unk120) ) /*0x7bf595*/
  {
    v31 = NiD3DPassPool_Acquire(&v81); /*0x7bf5af*/
    v32 = this->passes[7]; /*0x7bf5b1*/
    v5 = v32 == *v31; /*0x7bf5b7*/
    LOBYTE(v83) = 9; /*0x7bf5ba*/
    if ( !v5 ) /*0x7bf5bf*/
    {
      if ( v32 ) /*0x7bf5c3*/
      {
        v5 = v32->RefCount-- == 1; /*0x7bf5c5*/
        if ( v5 ) /*0x7bf5c9*/
          NiD3DPass_ReleaseToPool(v32); /*0x7bf5cb*/
      }
      v33 = *v31; /*0x7bf5d0*/
      v5 = *v31 == 0; /*0x7bf5d3*/
      this->passes[7] = *v31; /*0x7bf5d5*/
      if ( !v5 ) /*0x7bf5db*/
        ++v33->RefCount; /*0x7bf5dd*/
    }
    v34 = v81; /*0x7bf5e1*/
    LOBYTE(v83) = 0; /*0x7bf5e7*/
    if ( v81 ) /*0x7bf5ec*/
    {
      --v81->RefCount; /*0x7bf5ee*/
      if ( !v34->RefCount ) /*0x7bf5f7*/
        NiD3DPass_ReleaseToPool(v34); /*0x7bf5fb*/
    }
    v35 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bf60d*/
    v5 = v2 == *v35; /*0x7bf60f*/
    LOBYTE(v83) = 0xA; /*0x7bf612*/
    if ( !v5 ) /*0x7bf617*/
    {
      if ( v2 ) /*0x7bf61b*/
      {
        v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bf61d*/
        if ( v5 ) /*0x7bf621*/
          sub_772560((NiD3DTextureStage *)v2); /*0x7bf625*/
      }
      v2 = *v35; /*0x7bf62a*/
      if ( *v35 ) /*0x7bf62f*/
        ++*(_DWORD *)(v2 + 0x5C); /*0x7bf635*/
    }
    v36 = (NiD3DTextureStage *)v81; /*0x7bf639*/
    LOBYTE(v83) = 0; /*0x7bf63f*/
    if ( v81 ) /*0x7bf644*/
    {
      --*(_DWORD *)&v81->SoftwareVP; /*0x7bf646*/
      if ( !v36[7].Unk08 ) /*0x7bf64f*/
        sub_772560(v36); /*0x7bf653*/
    }
    BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 0, 3, 2); /*0x7bf65e*/
    sub_773100(*(_DWORD **)(v2 + 0xC), 5, 2, 0, 0); /*0x7bf66f*/
    sub_773100(*(_DWORD **)(v2 + 0xC), 6, 3, 0, 0); /*0x7bf67d*/
    sub_773100(*(_DWORD **)(v2 + 0xC), 7, 0, 0, 0); /*0x7bf68a*/
    NiD3DPass_SetTextureStage(this->passes[7], this->passes[7]->CurrentStage, (unsigned int *)v2); /*0x7bf69a*/
  }
  else
  {
    v37 = this->passes[7]; /*0x7bf6a1*/
    if ( v37 ) /*0x7bf6a9*/
    {
      v5 = v37->RefCount-- == 1; /*0x7bf6ab*/
      if ( v5 ) /*0x7bf6ae*/
        NiD3DPass_ReleaseToPool(v37); /*0x7bf6b0*/
      this->passes[7] = 0; /*0x7bf6b5*/
    }
  }
  v38 = NiD3DPassPool_Acquire(&v81); /*0x7bf6c8*/
  v39 = this->passes[8]; /*0x7bf6ca*/
  v5 = v39 == *v38; /*0x7bf6d0*/
  LOBYTE(v83) = 0xB; /*0x7bf6d3*/
  if ( !v5 ) /*0x7bf6d8*/
  {
    if ( v39 ) /*0x7bf6dc*/
    {
      v5 = v39->RefCount-- == 1; /*0x7bf6de*/
      if ( v5 ) /*0x7bf6e2*/
        NiD3DPass_ReleaseToPool(v39); /*0x7bf6e4*/
    }
    v40 = *v38; /*0x7bf6e9*/
    v5 = *v38 == 0; /*0x7bf6ec*/
    this->passes[8] = *v38; /*0x7bf6ee*/
    if ( !v5 ) /*0x7bf6f4*/
      ++v40->RefCount; /*0x7bf6f6*/
  }
  v41 = v81; /*0x7bf6fa*/
  LOBYTE(v83) = 0; /*0x7bf700*/
  if ( v81 ) /*0x7bf705*/
  {
    --v81->RefCount; /*0x7bf707*/
    if ( !v41->RefCount ) /*0x7bf710*/
      NiD3DPass_ReleaseToPool(v41); /*0x7bf714*/
  }
  v42 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bf726*/
  v5 = v2 == *v42; /*0x7bf728*/
  LOBYTE(v83) = 0xC; /*0x7bf72b*/
  if ( !v5 ) /*0x7bf730*/
  {
    if ( v2 ) /*0x7bf734*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bf736*/
      if ( v5 ) /*0x7bf73a*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bf73e*/
    }
    v2 = *v42; /*0x7bf743*/
    if ( *v42 ) /*0x7bf748*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bf74e*/
  }
  v43 = (NiD3DTextureStage *)v81; /*0x7bf752*/
  LOBYTE(v83) = 0; /*0x7bf758*/
  if ( v81 ) /*0x7bf75d*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bf75f*/
    if ( !v43[7].Unk08 ) /*0x7bf768*/
      sub_772560(v43); /*0x7bf76c*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 0, 3, 2); /*0x7bf777*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, 0); /*0x7bf782*/
  NiD3DPass_SetTextureStage(this->passes[8], this->passes[8]->CurrentStage, (unsigned int *)v2); /*0x7bf792*/
  v44 = NiD3DPassPool_Acquire(&v81); /*0x7bf7a4*/
  v45 = this->passes[9]; /*0x7bf7a6*/
  v5 = v45 == *v44; /*0x7bf7ac*/
  LOBYTE(v83) = 0xD; /*0x7bf7af*/
  if ( !v5 ) /*0x7bf7b4*/
  {
    if ( v45 ) /*0x7bf7b8*/
    {
      v5 = v45->RefCount-- == 1; /*0x7bf7ba*/
      if ( v5 ) /*0x7bf7be*/
        NiD3DPass_ReleaseToPool(v45); /*0x7bf7c0*/
    }
    v46 = *v44; /*0x7bf7c5*/
    this->passes[9] = v46; /*0x7bf7ca*/
    if ( v46 ) /*0x7bf7d0*/
      ++v46->RefCount; /*0x7bf7d2*/
  }
  v47 = v81; /*0x7bf7d6*/
  LOBYTE(v83) = 0; /*0x7bf7dc*/
  if ( v81 ) /*0x7bf7e1*/
  {
    --v81->RefCount; /*0x7bf7e3*/
    if ( !v47->RefCount ) /*0x7bf7ec*/
      NiD3DPass_ReleaseToPool(v47); /*0x7bf7f0*/
  }
  v48 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bf802*/
  v5 = v2 == *v48; /*0x7bf804*/
  LOBYTE(v83) = 0xE; /*0x7bf807*/
  if ( !v5 ) /*0x7bf80c*/
  {
    if ( v2 ) /*0x7bf810*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bf812*/
      if ( v5 ) /*0x7bf816*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bf81a*/
    }
    v2 = *v48; /*0x7bf81f*/
    if ( *v48 ) /*0x7bf824*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bf82a*/
  }
  v49 = (NiD3DTextureStage *)v81; /*0x7bf82e*/
  LOBYTE(v83) = 0; /*0x7bf834*/
  if ( v81 ) /*0x7bf839*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bf83b*/
    if ( !v49[7].Unk08 ) /*0x7bf844*/
      sub_772560(v49); /*0x7bf848*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 0, 3, 2); /*0x7bf853*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, OB_RendererGlobalState_010201A0.bFP16ARGBFiltering != 0); /*0x7bf869*/
  NiD3DPass_SetTextureStage(this->passes[9], this->passes[9]->CurrentStage, (unsigned int *)v2); /*0x7bf879*/
  v50 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bf88b*/
  v5 = v2 == *v50; /*0x7bf88d*/
  LOBYTE(v83) = 0xF; /*0x7bf890*/
  if ( !v5 ) /*0x7bf895*/
  {
    if ( v2 ) /*0x7bf899*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bf89b*/
      if ( v5 ) /*0x7bf89f*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bf8a3*/
    }
    v2 = *v50; /*0x7bf8a8*/
    if ( *v50 ) /*0x7bf8ad*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bf8b3*/
  }
  v51 = (NiD3DTextureStage *)v81; /*0x7bf8b7*/
  LOBYTE(v83) = 0; /*0x7bf8bd*/
  if ( v81 ) /*0x7bf8c2*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bf8c4*/
    if ( !v51[7].Unk08 ) /*0x7bf8cd*/
      sub_772560(v51); /*0x7bf8d1*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 1, 3, 2); /*0x7bf8dd*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, 0); /*0x7bf8e8*/
  NiD3DPass_SetTextureStage(this->passes[9], this->passes[9]->CurrentStage, (unsigned int *)v2); /*0x7bf8f8*/
  v52 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bf90a*/
  v5 = v2 == *v52; /*0x7bf90c*/
  LOBYTE(v83) = 0x10; /*0x7bf90f*/
  if ( !v5 ) /*0x7bf914*/
  {
    if ( v2 ) /*0x7bf918*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bf91a*/
      if ( v5 ) /*0x7bf91e*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bf922*/
    }
    v2 = *v52; /*0x7bf927*/
    if ( *v52 ) /*0x7bf92c*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bf932*/
  }
  v53 = (NiD3DTextureStage *)v81; /*0x7bf936*/
  LOBYTE(v83) = 0; /*0x7bf93c*/
  if ( v81 ) /*0x7bf941*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bf943*/
    if ( !v53[7].Unk08 ) /*0x7bf94c*/
      sub_772560(v53); /*0x7bf950*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 2, 3, 2); /*0x7bf95c*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, 0); /*0x7bf967*/
  NiD3DPass_SetTextureStage(this->passes[9], this->passes[9]->CurrentStage, (unsigned int *)v2); /*0x7bf977*/
  v54 = NiD3DPassPool_Acquire(&v81); /*0x7bf989*/
  v55 = this->passes[0xA]; /*0x7bf98b*/
  v5 = v55 == *v54; /*0x7bf991*/
  LOBYTE(v83) = 0x11; /*0x7bf994*/
  if ( !v5 ) /*0x7bf999*/
  {
    if ( v55 ) /*0x7bf99d*/
    {
      v5 = v55->RefCount-- == 1; /*0x7bf99f*/
      if ( v5 ) /*0x7bf9a3*/
        NiD3DPass_ReleaseToPool(v55); /*0x7bf9a5*/
    }
    v56 = *v54; /*0x7bf9aa*/
    this->passes[0xA] = v56; /*0x7bf9af*/
    if ( v56 ) /*0x7bf9b5*/
      ++v56->RefCount; /*0x7bf9b7*/
  }
  v57 = v81; /*0x7bf9bb*/
  LOBYTE(v83) = 0; /*0x7bf9c1*/
  if ( v81 ) /*0x7bf9c6*/
  {
    --v81->RefCount; /*0x7bf9c8*/
    if ( !v57->RefCount ) /*0x7bf9d1*/
      NiD3DPass_ReleaseToPool(v57); /*0x7bf9d5*/
  }
  v58 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bf9e7*/
  v5 = v2 == *v58; /*0x7bf9e9*/
  LOBYTE(v83) = 0x12; /*0x7bf9ec*/
  if ( !v5 ) /*0x7bf9f1*/
  {
    if ( v2 ) /*0x7bf9f5*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bf9f7*/
      if ( v5 ) /*0x7bf9fb*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bf9ff*/
    }
    v2 = *v58; /*0x7bfa04*/
    if ( *v58 ) /*0x7bfa09*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bfa0f*/
  }
  v59 = (NiD3DTextureStage *)v81; /*0x7bfa13*/
  LOBYTE(v83) = 0; /*0x7bfa19*/
  if ( v81 ) /*0x7bfa1e*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bfa20*/
    if ( !v59[7].Unk08 ) /*0x7bfa29*/
      sub_772560(v59); /*0x7bfa2d*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 0, 3, 2); /*0x7bfa38*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, 0); /*0x7bfa43*/
  NiD3DPass_SetTextureStage(this->passes[0xA], this->passes[0xA]->CurrentStage, (unsigned int *)v2); /*0x7bfa53*/
  v60 = NiD3DPassPool_Acquire(&v81); /*0x7bfa65*/
  v61 = this->passes[0xB]; /*0x7bfa67*/
  v5 = v61 == *v60; /*0x7bfa6d*/
  LOBYTE(v83) = 0x13; /*0x7bfa70*/
  if ( !v5 ) /*0x7bfa75*/
  {
    if ( v61 ) /*0x7bfa79*/
    {
      v5 = v61->RefCount-- == 1; /*0x7bfa7b*/
      if ( v5 ) /*0x7bfa7f*/
        NiD3DPass_ReleaseToPool(v61); /*0x7bfa81*/
    }
    v62 = *v60; /*0x7bfa86*/
    this->passes[0xB] = v62; /*0x7bfa8b*/
    if ( v62 ) /*0x7bfa91*/
      ++v62->RefCount; /*0x7bfa93*/
  }
  v63 = v81; /*0x7bfa97*/
  LOBYTE(v83) = 0; /*0x7bfa9d*/
  if ( v81 ) /*0x7bfaa2*/
  {
    --v81->RefCount; /*0x7bfaa4*/
    if ( !v63->RefCount ) /*0x7bfaad*/
      NiD3DPass_ReleaseToPool(v63); /*0x7bfab1*/
  }
  v64 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bfac3*/
  v5 = v2 == *v64; /*0x7bfac5*/
  LOBYTE(v83) = 0x14; /*0x7bfac8*/
  if ( !v5 ) /*0x7bfacd*/
  {
    if ( v2 ) /*0x7bfad1*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bfad3*/
      if ( v5 ) /*0x7bfad7*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bfadb*/
    }
    v2 = *v64; /*0x7bfae0*/
    if ( *v64 ) /*0x7bfae5*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bfaeb*/
  }
  v65 = (NiD3DTextureStage *)v81; /*0x7bfaef*/
  LOBYTE(v83) = 0; /*0x7bfaf5*/
  if ( v81 ) /*0x7bfafa*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bfafc*/
    if ( !v65[7].Unk08 ) /*0x7bfb05*/
      sub_772560(v65); /*0x7bfb09*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 0, 3, 2); /*0x7bfb14*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, 0); /*0x7bfb1f*/
  NiD3DPass_SetTextureStage(this->passes[0xB], this->passes[0xB]->CurrentStage, (unsigned int *)v2); /*0x7bfb2f*/
  v66 = NiD3DTextureStagePool_Acquire(&v81); /*0x7bfb41*/
  v5 = v2 == *v66; /*0x7bfb43*/
  LOBYTE(v83) = 0x15; /*0x7bfb46*/
  if ( !v5 ) /*0x7bfb4b*/
  {
    if ( v2 ) /*0x7bfb4f*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bfb51*/
      if ( v5 ) /*0x7bfb55*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bfb59*/
    }
    v2 = *v66; /*0x7bfb5e*/
    if ( *v66 ) /*0x7bfb63*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bfb69*/
  }
  v67 = (NiD3DTextureStage *)v81; /*0x7bfb6d*/
  LOBYTE(v83) = 0; /*0x7bfb73*/
  if ( v81 ) /*0x7bfb78*/
  {
    --*(_DWORD *)&v81->SoftwareVP; /*0x7bfb7a*/
    if ( !v67[7].Unk08 ) /*0x7bfb83*/
      sub_772560(v67); /*0x7bfb87*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 1, 3, 2); /*0x7bfb93*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, 0); /*0x7bfb9e*/
  NiD3DPass_SetTextureStage(this->passes[0xB], this->passes[0xB]->CurrentStage, (unsigned int *)v2); /*0x7bfbae*/
  v68 = NiD3DPassPool_Acquire(&v81); /*0x7bfbc0*/
  v69 = this->passes[0xC]; /*0x7bfbc2*/
  v5 = v69 == *v68; /*0x7bfbc8*/
  LOBYTE(v83) = 0x16; /*0x7bfbcb*/
  if ( !v5 ) /*0x7bfbd0*/
  {
    if ( v69 ) /*0x7bfbd4*/
    {
      v5 = v69->RefCount-- == 1; /*0x7bfbd6*/
      if ( v5 ) /*0x7bfbda*/
        NiD3DPass_ReleaseToPool(v69); /*0x7bfbdc*/
    }
    v70 = *v68; /*0x7bfbe1*/
    this->passes[0xC] = v70; /*0x7bfbe6*/
    if ( v70 ) /*0x7bfbec*/
      ++v70->RefCount; /*0x7bfbee*/
  }
  v71 = v81; /*0x7bfbf2*/
  LOBYTE(v83) = 0; /*0x7bfbf8*/
  if ( v81 ) /*0x7bfbfd*/
  {
    --v81->RefCount; /*0x7bfbff*/
    if ( !v71->RefCount ) /*0x7bfc08*/
      NiD3DPass_ReleaseToPool(v71); /*0x7bfc0c*/
  }
  v72 = NiD3DTextureStagePool_Acquire(&v82); /*0x7bfc1e*/
  v5 = v2 == *v72; /*0x7bfc20*/
  LOBYTE(v83) = 0x17; /*0x7bfc23*/
  if ( !v5 ) /*0x7bfc28*/
  {
    if ( v2 ) /*0x7bfc2c*/
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bfc2e*/
      if ( v5 ) /*0x7bfc32*/
        sub_772560((NiD3DTextureStage *)v2); /*0x7bfc36*/
    }
    v2 = *v72; /*0x7bfc3b*/
    if ( *v72 ) /*0x7bfc40*/
      ++*(_DWORD *)(v2 + 0x5C); /*0x7bfc46*/
  }
  v73 = v82; /*0x7bfc4a*/
  LOBYTE(v83) = 0; /*0x7bfc50*/
  if ( v82 ) /*0x7bfc55*/
  {
    --v82[7].Unk08; /*0x7bfc57*/
    if ( !v73[7].Unk08 ) /*0x7bfc60*/
      sub_772560(v73); /*0x7bfc64*/
  }
  BSShader_ConfigureTextureStageSampler((_DWORD *)v2, 0, 3, 2); /*0x7bfc70*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v2, 0); /*0x7bfc7c*/
  NiD3DPass_SetTextureStage(this->passes[0xC], this->passes[0xC]->CurrentStage, (unsigned int *)v2); /*0x7bfc8c*/
  passes = this->passes; /*0x7bfc91*/
  v81 = (NiD3DPass *)0xD; /*0x7bfc97*/
  do /*0x7bfd49*/
  {
    v75 = *passes; /*0x7bfca0*/
    if ( *passes ) /*0x7bfca0*/
    {
      if ( !v75->RenderStateGroup ) /*0x7bfcaa*/
        v75->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x7bfcb5*/
      NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v75->RenderStateGroup, 7u, 0, 0); /*0x7bfcc1*/
      v76 = *passes; /*0x7bfcc6*/
      if ( !(*passes)->RenderStateGroup ) /*0x7bfcc8*/
        v76->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x7bfcd3*/
      NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v76->RenderStateGroup, 0xEu, 0, 0); /*0x7bfcdf*/
      v77 = *passes; /*0x7bfce4*/
      if ( !(*passes)->RenderStateGroup ) /*0x7bfce6*/
        v77->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x7bfcf1*/
      NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v77->RenderStateGroup, 0x1Bu, 0, 0); /*0x7bfcfd*/
      v78 = *passes; /*0x7bfd02*/
      if ( !(*passes)->RenderStateGroup ) /*0x7bfd04*/
        v78->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x7bfd0f*/
      NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v78->RenderStateGroup, 0xFu, 0, 0); /*0x7bfd1b*/
      v79 = *passes; /*0x7bfd20*/
      if ( !(*passes)->RenderStateGroup ) /*0x7bfd22*/
        v79->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x7bfd2d*/
      NiD3DRenderStateGroup_SetRenderState((OblivionRenderStateGroupPrefix *)v79->RenderStateGroup, 0xA8u, 0xFu, 0); /*0x7bfd3c*/
    }
    ++passes; /*0x7bfd41*/
    v81 = (NiD3DPass *)((char *)v81 + 0xFFFFFFFF); /*0x7bfd44*/
  }
  while ( v81 ); /*0x7bfd49*/
  this->__vftable->UnkB8(this); /*0x7bfd59*/
  v83 = 0xFFFFFFFF; /*0x7bfd60*/
  if ( v2 ) /*0x7bfd64*/
  {
    v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1; /*0x7bfd66*/
    if ( v5 ) /*0x7bfd69*/
      sub_772560((NiD3DTextureStage *)v2); /*0x7bfd6d*/
  }
  return 1; /*0x7bfd74*/
}
