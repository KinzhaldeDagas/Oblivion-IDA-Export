void __thiscall sub_7F4190(BoltShader *this)
{
  UInt32 v2; // esi
  unsigned int *p_Stage; // edi
  UInt32 v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage *v6; // eax
  NiD3DVertexShader *v7; // ebp
  volatile LONG *v8; // edi
  NiD3DPixelShader *v9; // ebp
  volatile LONG *v10; // edi
  bool v11; // zf
  NiD3DTextureStage *v12; // [esp+14h] [ebp-18h]
  NiD3DTextureStage *v13; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  v2 = 0; /*0x7f41b9*/
  p_Stage = 0; /*0x7f41bf*/
  v14 = 0; /*0x7f41c1*/
  v12 = 0; /*0x7f41c5*/
  v4 = this->Unk00[0x3F]; /*0x7f41c9*/
  LOBYTE(v14) = 1; /*0x7f41d1*/
  if ( v4 ) /*0x7f41d6*/
  {
    v2 = v4; /*0x7f41d8*/
    ++*(_DWORD *)(v4 + 0x60); /*0x7f41da*/
  }
  if ( !*(_DWORD *)(v2 + 0x18) ) /*0x7f41e2*/
  {
    v5 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v13); /*0x7f41f7*/
    if ( v5 ) /*0x7f41fb*/
    {
      ++v5[7].Unk08; /*0x7f41fd*/
      v12 = v5; /*0x7f4201*/
      p_Stage = &v5->Stage; /*0x7f4205*/
    }
    v6 = v13; /*0x7f4207*/
    LOBYTE(v14) = 1; /*0x7f420d*/
    if ( v13 ) /*0x7f4212*/
    {
      --v13[7].Unk08; /*0x7f4214*/
      if ( !v6[7].Unk08 ) /*0x7f421d*/
        sub_772560(v6); /*0x7f4222*/
    }
    BSShader_ConfigureTextureStageSampler(p_Stage, 0, 1, 2); /*0x7f422e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v2, *(_DWORD *)(v2 + 0x14), p_Stage); /*0x7f423d*/
  }
  v7 = this->Vertex[0]; /*0x7f4242*/
  v8 = *(volatile LONG **)(v2 + 0x58); /*0x7f4248*/
  if ( v8 != (volatile LONG *)v7 ) /*0x7f424d*/
  {
    if ( v8 ) /*0x7f4251*/
    {
      if ( !InterlockedDecrement(v8 + 1) ) /*0x7f4257*/
        (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1); /*0x7f426d*/
    }
    *(_DWORD *)(v2 + 0x58) = v7; /*0x7f4271*/
    if ( v7 ) /*0x7f4274*/
      InterlockedIncrement((volatile LONG *)v7 + 1); /*0x7f427a*/
  }
  v9 = this->Pixel[0]; /*0x7f4280*/
  v10 = *(volatile LONG **)(v2 + 0x44); /*0x7f4286*/
  if ( v10 != (volatile LONG *)v9 ) /*0x7f428b*/
  {
    if ( v10 ) /*0x7f428f*/
    {
      if ( !InterlockedDecrement(v10 + 1) ) /*0x7f4295*/
        (**(void (__thiscall ***)(volatile LONG *, int))v10)(v10, 1); /*0x7f42ab*/
    }
    *(_DWORD *)(v2 + 0x44) = v9; /*0x7f42af*/
    if ( v9 ) /*0x7f42b2*/
      InterlockedIncrement((volatile LONG *)v9 + 1); /*0x7f42b8*/
  }
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7f42be*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f42c9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x16u, 1u, 0); /*0x7f42d5*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7f42da*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f42e5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0xA8u, 0xFu, 0); /*0x7f42f4*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7f42f9*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f4304*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x1Bu, 1u, 0); /*0x7f4310*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7f4315*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f4320*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x13u, 5u, 0); /*0x7f432c*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7f4331*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f433c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x14u, 2u, 0); /*0x7f4348*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7f434d*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f4358*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0xFu, 0, 0); /*0x7f4364*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7f4369*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f4374*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x34u, 0, 0); /*0x7f4380*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7f4385*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f4390*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 7u, 1u, 0); /*0x7f439c*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7f43a1*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f43ac*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x17u, 4u, 0); /*0x7f43b8*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7f43bd*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f43c8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0xEu, 0, 0); /*0x7f43d4*/
  LOBYTE(v14) = 0; /*0x7f43e2*/
  if ( v12 ) /*0x7f43e7*/
  {
    v11 = v12[7].Unk08-- == 1; /*0x7f43e9*/
    if ( v11 ) /*0x7f43ec*/
      sub_772560(v12); /*0x7f43ee*/
  }
  v11 = (*(_DWORD *)(v2 + 0x60))-- == 1; /*0x7f43f3*/
  v14 = 0xFFFFFFFF; /*0x7f43f6*/
  if ( v11 ) /*0x7f43fa*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v2); /*0x7f43fe*/
}
