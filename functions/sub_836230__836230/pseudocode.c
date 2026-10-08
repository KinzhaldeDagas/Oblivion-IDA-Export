void sub_836230()
{
  int v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage **v6; // ebp
  NiD3DTextureStage *v7; // eax
  int v8; // ebp
  int v9; // ebx
  int v10; // ebp
  int v11; // ebx
  NiD3DTextureStage **v12; // ebp
  NiD3DTextureStage *v13; // eax
  NiD3DTextureStage **v14; // ebp
  NiD3DTextureStage *v15; // eax
  int v16; // ebp
  int v17; // ebx
  int v18; // ebp
  int v19; // ebx
  NiD3DTextureStage *v20; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v21; // [esp+28h] [ebp-4h]

  v0 = 0; /*0x836257*/
  v1 = 0; /*0x83625d*/
  v21 = 0; /*0x83625f*/
  v2 = unk_B45BC8; /*0x836267*/
  v3 = unk_B45BC8 == 0; /*0x83626c*/
  LOBYTE(v21) = 1; /*0x836273*/
  if ( !v3 ) /*0x836277*/
  {
    v0 = v2; /*0x836279*/
    if ( v2 ) /*0x836281*/
      ++*(_DWORD *)(v2 + 0x60); /*0x836283*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x83628c*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v20); /*0x83629f*/
    if ( v4 ) /*0x8362a3*/
    {
      v1 = v4; /*0x8362a5*/
      ++v4[7].Unk08; /*0x8362a7*/
    }
    v5 = v20; /*0x8362ae*/
    LOBYTE(v21) = 1; /*0x8362b4*/
    if ( v20 ) /*0x8362b9*/
    {
      --v20[7].Unk08; /*0x8362bb*/
      if ( !v5[7].Unk08 ) /*0x8362c4*/
        sub_772560(v5); /*0x8362c9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8362d4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x8362e3*/
    v6 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x8362f5*/
    v3 = v1 == *v6; /*0x8362f7*/
    LOBYTE(v21) = 3; /*0x8362fa*/
    if ( !v3 ) /*0x8362ff*/
    {
      if ( v1 ) /*0x836303*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x836305*/
        if ( v3 ) /*0x836309*/
          sub_772560(v1); /*0x83630d*/
      }
      v1 = *v6; /*0x836312*/
      if ( *v6 ) /*0x836317*/
        ++v1[7].Unk08; /*0x83631d*/
    }
    v7 = v20; /*0x836320*/
    LOBYTE(v21) = 1; /*0x836326*/
    if ( v20 ) /*0x83632b*/
    {
      --v20[7].Unk08; /*0x83632d*/
      if ( !v7[7].Unk08 ) /*0x836336*/
        sub_772560(v7); /*0x83633b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 3, 2); /*0x836346*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x836355*/
  }
  v8 = *(_DWORD *)(v0 + 0x58); /*0x83635f*/
  v9 = unk_B45404; /*0x836364*/
  if ( v8 != unk_B45404 ) /*0x836366*/
  {
    if ( v8 ) /*0x83636a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x836370*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x836387*/
    }
    *(_DWORD *)(v0 + 0x58) = v9; /*0x83638b*/
    if ( v9 ) /*0x83638e*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x836394*/
  }
  v10 = *(_DWORD *)(v0 + 0x44); /*0x83639f*/
  v11 = unk_B451FC; /*0x8363a4*/
  if ( v10 != unk_B451FC ) /*0x8363a6*/
  {
    if ( v10 ) /*0x8363aa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x8363b0*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x8363c7*/
    }
    *(_DWORD *)(v0 + 0x44) = v11; /*0x8363cb*/
    if ( v11 ) /*0x8363ce*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x8363d4*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8363da*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8363e5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x8363f1*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8363f6*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x836401*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 9u, 0); /*0x83640d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x836412*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83641d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x836429*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83642e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x836439*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 1u, 0); /*0x836445*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83644a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x836455*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x19u, 5u, 0); /*0x836461*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x836466*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x836471*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x18u, 0, 0); /*0x83647d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x836482*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83648d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x836499*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83649e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8364a9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x8364b5*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8364ba*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8364c5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x8364d1*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8364d6*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8364e1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x8364ed*/
  v3 = v0 == unk_B45BCC; /*0x8364fa*/
  unk_B44148 = 2; /*0x836500*/
  unk_B447D8 = 0; /*0x836506*/
  if ( !v3 ) /*0x836510*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x836512*/
    if ( v3 ) /*0x836515*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x836519*/
    v0 = unk_B45BCC; /*0x83651e*/
    if ( unk_B45BCC ) /*0x836526*/
      ++*(_DWORD *)(v0 + 0x60); /*0x83652c*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x836533*/
  {
    v12 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x836546*/
    v3 = v1 == *v12; /*0x836548*/
    LOBYTE(v21) = 4; /*0x83654b*/
    if ( !v3 ) /*0x836550*/
    {
      if ( v1 ) /*0x836554*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x836556*/
        if ( v3 ) /*0x836559*/
          sub_772560(v1); /*0x83655d*/
      }
      v1 = *v12; /*0x836562*/
      if ( *v12 ) /*0x836567*/
        ++v1[7].Unk08; /*0x83656d*/
    }
    v13 = v20; /*0x836571*/
    LOBYTE(v21) = 1; /*0x836577*/
    if ( v20 ) /*0x83657c*/
    {
      --v20[7].Unk08; /*0x83657e*/
      if ( !v13[7].Unk08 ) /*0x836586*/
        sub_772560(v13); /*0x83658b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x836597*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x8365a6*/
    v14 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x8365b8*/
    v3 = v1 == *v14; /*0x8365ba*/
    LOBYTE(v21) = 5; /*0x8365bd*/
    if ( !v3 ) /*0x8365c2*/
    {
      if ( v1 ) /*0x8365c6*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8365c8*/
        if ( v3 ) /*0x8365cb*/
          sub_772560(v1); /*0x8365cf*/
      }
      v1 = *v14; /*0x8365d4*/
      if ( *v14 ) /*0x8365d9*/
        ++v1[7].Unk08; /*0x8365df*/
    }
    v15 = v20; /*0x8365e3*/
    LOBYTE(v21) = 1; /*0x8365e9*/
    if ( v20 ) /*0x8365ee*/
    {
      --v20[7].Unk08; /*0x8365f0*/
      if ( !v15[7].Unk08 ) /*0x8365f8*/
        sub_772560(v15); /*0x8365fd*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 3, 2); /*0x836609*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x836618*/
  }
  v16 = *(_DWORD *)(v0 + 0x58); /*0x836622*/
  v17 = unk_B45408; /*0x836627*/
  if ( v16 != unk_B45408 ) /*0x836629*/
  {
    if ( v16 ) /*0x83662d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x836633*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x83664a*/
    }
    *(_DWORD *)(v0 + 0x58) = v17; /*0x83664e*/
    if ( v17 ) /*0x836651*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x836657*/
  }
  v18 = *(_DWORD *)(v0 + 0x44); /*0x836662*/
  v19 = unk_B45200; /*0x836667*/
  if ( v18 != unk_B45200 ) /*0x836669*/
  {
    if ( v18 ) /*0x83666d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x836673*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x83668a*/
    }
    *(_DWORD *)(v0 + 0x44) = v19; /*0x83668e*/
    if ( v19 ) /*0x836691*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x836697*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83669d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8366a8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x8366b4*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8366b9*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8366c4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 9u, 0); /*0x8366d0*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8366d5*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8366e0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x8366ec*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8366f1*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8366fc*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 1u, 0); /*0x836708*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83670d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x836718*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x19u, 5u, 0); /*0x836724*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x836729*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x836734*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x18u, 0, 0); /*0x836740*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x836745*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x836750*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x83675c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x836761*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83676c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x836778*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83677d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x836788*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x836794*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x836799*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8367a4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x8367b0*/
  unk_B4414C = 2; /*0x8367ba*/
  unk_B447DC = 0; /*0x8367c4*/
  LOBYTE(v21) = 0; /*0x8367ce*/
  if ( v1 ) /*0x8367d3*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x8367d5*/
    if ( v3 ) /*0x8367d8*/
      sub_772560(v1); /*0x8367dc*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x8367e1*/
  v21 = 0xFFFFFFFF; /*0x8367e4*/
  if ( v3 ) /*0x8367e8*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x8367ec*/
}
