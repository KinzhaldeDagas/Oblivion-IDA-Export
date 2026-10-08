void sub_81AA00()
{
  int v0; // edi
  NiD3DTextureStage *v1; // esi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage **v6; // ebp
  NiD3DTextureStage *v7; // eax
  NiD3DTextureStage **v8; // ebp
  NiD3DTextureStage *v9; // eax
  NiD3DTextureStage **v10; // ebp
  NiD3DTextureStage *v11; // eax
  int v12; // ebp
  int v13; // ebx
  int v14; // ebp
  int v15; // ebx
  NiD3DTextureStage **v16; // ebp
  NiD3DTextureStage *v17; // eax
  NiD3DTextureStage **v18; // ebp
  NiD3DTextureStage *v19; // eax
  NiD3DTextureStage **v20; // ebp
  NiD3DTextureStage *v21; // eax
  NiD3DTextureStage **v22; // ebp
  NiD3DTextureStage *v23; // eax
  int v24; // ebp
  int v25; // ebx
  int v26; // ebp
  int v27; // ebx
  NiD3DTextureStage *v28; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v29; // [esp+28h] [ebp-4h]

  v0 = 0; /*0x81aa27*/
  v1 = 0; /*0x81aa29*/
  v29 = 0; /*0x81aa2f*/
  v2 = unk_B45664; /*0x81aa37*/
  v3 = unk_B45664 == 0; /*0x81aa3c*/
  LOBYTE(v29) = 1; /*0x81aa43*/
  if ( !v3 ) /*0x81aa48*/
  {
    v0 = v2; /*0x81aa4a*/
    if ( v2 ) /*0x81aa52*/
      ++*(_DWORD *)(v2 + 0x60); /*0x81aa54*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 4u ) /*0x81aa60*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v28); /*0x81aa73*/
    if ( v4 ) /*0x81aa77*/
    {
      v1 = v4; /*0x81aa79*/
      ++v4[7].Unk08; /*0x81aa7b*/
    }
    v5 = v28; /*0x81aa82*/
    LOBYTE(v29) = 1; /*0x81aa88*/
    if ( v28 ) /*0x81aa8d*/
    {
      --v28[7].Unk08; /*0x81aa8f*/
      if ( !v5[7].Unk08 ) /*0x81aa97*/
        sub_772560(v5); /*0x81aa9c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81aaa8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81aab7*/
    v6 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v28); /*0x81aac9*/
    v3 = v1 == *v6; /*0x81aacb*/
    LOBYTE(v29) = 3; /*0x81aace*/
    if ( !v3 ) /*0x81aad3*/
    {
      if ( v1 ) /*0x81aad7*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81aad9*/
        if ( v3 ) /*0x81aadc*/
          sub_772560(v1); /*0x81aae0*/
      }
      v1 = *v6; /*0x81aae5*/
      if ( *v6 ) /*0x81aaea*/
        ++v1[7].Unk08; /*0x81aaf0*/
    }
    v7 = v28; /*0x81aaf4*/
    LOBYTE(v29) = 1; /*0x81aafa*/
    if ( v28 ) /*0x81aaff*/
    {
      --v28[7].Unk08; /*0x81ab01*/
      if ( !v7[7].Unk08 ) /*0x81ab09*/
        sub_772560(v7); /*0x81ab0e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 3, 2); /*0x81ab1a*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B43110[0])); /*0x81ab2a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81ab36*/
    v8 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v28); /*0x81ab48*/
    v3 = v1 == *v8; /*0x81ab4a*/
    LOBYTE(v29) = 4; /*0x81ab4d*/
    if ( !v3 ) /*0x81ab52*/
    {
      if ( v1 ) /*0x81ab56*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81ab58*/
        if ( v3 ) /*0x81ab5b*/
          sub_772560(v1); /*0x81ab5f*/
      }
      v1 = *v8; /*0x81ab64*/
      if ( *v8 ) /*0x81ab69*/
        ++v1[7].Unk08; /*0x81ab6f*/
    }
    v9 = v28; /*0x81ab73*/
    LOBYTE(v29) = 1; /*0x81ab79*/
    if ( v28 ) /*0x81ab7e*/
    {
      --v28[7].Unk08; /*0x81ab80*/
      if ( !v9[7].Unk08 ) /*0x81ab88*/
        sub_772560(v9); /*0x81ab8d*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 3, 2); /*0x81ab99*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430D4)); /*0x81aba9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81abb5*/
    v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v28); /*0x81abc7*/
    v3 = v1 == *v10; /*0x81abc9*/
    LOBYTE(v29) = 5; /*0x81abcc*/
    if ( !v3 ) /*0x81abd1*/
    {
      if ( v1 ) /*0x81abd5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81abd7*/
        if ( v3 ) /*0x81abda*/
          sub_772560(v1); /*0x81abde*/
      }
      v1 = *v10; /*0x81abe3*/
      if ( *v10 ) /*0x81abe8*/
        ++v1[7].Unk08; /*0x81abee*/
    }
    v11 = v28; /*0x81abf2*/
    LOBYTE(v29) = 1; /*0x81abf8*/
    if ( v28 ) /*0x81abfd*/
    {
      --v28[7].Unk08; /*0x81abff*/
      if ( !v11[7].Unk08 ) /*0x81ac07*/
        sub_772560(v11); /*0x81ac0c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x81ac18*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430DC[4])); /*0x81ac28*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81ac34*/
  }
  v12 = *(_DWORD *)(v0 + 0x58); /*0x81ac3e*/
  v13 = unk_B452D0; /*0x81ac43*/
  if ( v12 != unk_B452D0 ) /*0x81ac45*/
  {
    if ( v12 ) /*0x81ac49*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x81ac4f*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x81ac66*/
    }
    *(_DWORD *)(v0 + 0x58) = v13; /*0x81ac6a*/
    if ( v13 ) /*0x81ac6d*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x81ac73*/
  }
  v14 = *(_DWORD *)(v0 + 0x44); /*0x81ac7e*/
  v15 = unk_B450FC; /*0x81ac83*/
  if ( v14 != unk_B450FC ) /*0x81ac85*/
  {
    if ( v14 ) /*0x81ac89*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x81ac8f*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x81aca6*/
    }
    *(_DWORD *)(v0 + 0x44) = v15; /*0x81acaa*/
    if ( v15 ) /*0x81acad*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x81acb3*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81acb9*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81acc4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 0, 0); /*0x81acd0*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81acd5*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ace0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81acec*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81acf1*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81acfc*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81ad08*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ad0d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ad18*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x81ad24*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ad29*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ad34*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 1u, 0); /*0x81ad40*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ad45*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ad50*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81ad5c*/
  v3 = v0 == unk_B45668; /*0x81ad64*/
  unk_B43BE4 = 0x1082; /*0x81ad6a*/
  unk_B44274 = 0x1C; /*0x81ad74*/
  if ( !v3 ) /*0x81ad7e*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81ad80*/
    if ( v3 ) /*0x81ad83*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81ad87*/
    v0 = unk_B45668; /*0x81ad8c*/
    if ( unk_B45668 ) /*0x81ad94*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81ad9a*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 4u ) /*0x81ada2*/
  {
    v16 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v28); /*0x81adb5*/
    v3 = v1 == *v16; /*0x81adb7*/
    LOBYTE(v29) = 6; /*0x81adba*/
    if ( !v3 ) /*0x81adbf*/
    {
      if ( v1 ) /*0x81adc3*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81adc5*/
        if ( v3 ) /*0x81adc8*/
          sub_772560(v1); /*0x81adcc*/
      }
      v1 = *v16; /*0x81add1*/
      if ( *v16 ) /*0x81add6*/
        ++v1[7].Unk08; /*0x81addc*/
    }
    v17 = v28; /*0x81ade0*/
    LOBYTE(v29) = 1; /*0x81ade6*/
    if ( v28 ) /*0x81adeb*/
    {
      --v28[7].Unk08; /*0x81aded*/
      if ( !v17[7].Unk08 ) /*0x81adf5*/
        sub_772560(v17); /*0x81adfa*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81ae06*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81ae15*/
    v18 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v28); /*0x81ae27*/
    v3 = v1 == *v18; /*0x81ae29*/
    LOBYTE(v29) = 7; /*0x81ae2c*/
    if ( !v3 ) /*0x81ae31*/
    {
      if ( v1 ) /*0x81ae35*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81ae37*/
        if ( v3 ) /*0x81ae3a*/
          sub_772560(v1); /*0x81ae3e*/
      }
      v1 = *v18; /*0x81ae43*/
      if ( *v18 ) /*0x81ae48*/
        ++v1[7].Unk08; /*0x81ae4e*/
    }
    v19 = v28; /*0x81ae52*/
    LOBYTE(v29) = 1; /*0x81ae58*/
    if ( v28 ) /*0x81ae5d*/
    {
      --v28[7].Unk08; /*0x81ae5f*/
      if ( !v19[7].Unk08 ) /*0x81ae67*/
        sub_772560(v19); /*0x81ae6c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 3, 2); /*0x81ae78*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B43110[0])); /*0x81ae89*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81ae95*/
    v20 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v28); /*0x81aea7*/
    v3 = v1 == *v20; /*0x81aea9*/
    LOBYTE(v29) = 8; /*0x81aeac*/
    if ( !v3 ) /*0x81aeb1*/
    {
      if ( v1 ) /*0x81aeb5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81aeb7*/
        if ( v3 ) /*0x81aeba*/
          sub_772560(v1); /*0x81aebe*/
      }
      v1 = *v20; /*0x81aec3*/
      if ( *v20 ) /*0x81aec8*/
        ++v1[7].Unk08; /*0x81aece*/
    }
    v21 = v28; /*0x81aed2*/
    LOBYTE(v29) = 1; /*0x81aed8*/
    if ( v28 ) /*0x81aedd*/
    {
      --v28[7].Unk08; /*0x81aedf*/
      if ( !v21[7].Unk08 ) /*0x81aee7*/
        sub_772560(v21); /*0x81aeec*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 3, 2); /*0x81aef8*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430D4)); /*0x81af09*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81af15*/
    v22 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v28); /*0x81af27*/
    v3 = v1 == *v22; /*0x81af29*/
    LOBYTE(v29) = 9; /*0x81af2c*/
    if ( !v3 ) /*0x81af31*/
    {
      if ( v1 ) /*0x81af35*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81af37*/
        if ( v3 ) /*0x81af3a*/
          sub_772560(v1); /*0x81af3e*/
      }
      v1 = *v22; /*0x81af43*/
      if ( *v22 ) /*0x81af48*/
        ++v1[7].Unk08; /*0x81af4e*/
    }
    v23 = v28; /*0x81af52*/
    LOBYTE(v29) = 1; /*0x81af58*/
    if ( v28 ) /*0x81af5d*/
    {
      --v28[7].Unk08; /*0x81af5f*/
      if ( !v23[7].Unk08 ) /*0x81af67*/
        sub_772560(v23); /*0x81af6c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x81af78*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430DC[4])); /*0x81af89*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81af95*/
  }
  v24 = *(_DWORD *)(v0 + 0x58); /*0x81af9f*/
  v25 = unk_B4534C; /*0x81afa4*/
  if ( v24 != unk_B4534C ) /*0x81afa6*/
  {
    if ( v24 ) /*0x81afaa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x81afb0*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x81afc7*/
    }
    *(_DWORD *)(v0 + 0x58) = v25; /*0x81afcb*/
    if ( v25 ) /*0x81afce*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x81afd4*/
  }
  v26 = *(_DWORD *)(v0 + 0x44); /*0x81afdf*/
  v27 = unk_B450FC; /*0x81afe4*/
  if ( v26 != unk_B450FC ) /*0x81afe6*/
  {
    if ( v26 ) /*0x81afea*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x81aff0*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x81b007*/
    }
    *(_DWORD *)(v0 + 0x44) = v27; /*0x81b00b*/
    if ( v27 ) /*0x81b00e*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x81b014*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b01a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b025*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 0, 0); /*0x81b031*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b036*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b041*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81b04d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b052*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b05d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81b069*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b06e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b079*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x81b085*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b08a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b095*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 1u, 0); /*0x81b0a1*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b0a6*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b0b1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81b0bd*/
  unk_B43BE8 = 0x41088; /*0x81b0c7*/
  unk_B44278 = 0x1C; /*0x81b0d1*/
  LOBYTE(v29) = 0; /*0x81b0db*/
  if ( v1 ) /*0x81b0e0*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x81b0e2*/
    if ( v3 ) /*0x81b0e5*/
      sub_772560(v1); /*0x81b0e9*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81b0ee*/
  v29 = 0xFFFFFFFF; /*0x81b0f1*/
  if ( v3 ) /*0x81b0f5*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81b0f9*/
}
