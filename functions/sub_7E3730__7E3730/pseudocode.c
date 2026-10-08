void __thiscall sub_7E3730(_DWORD *this)
{
  int v2; // esi
  unsigned int *p_Stage; // edi
  int v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage *v6; // eax
  int v7; // ebp
  int v8; // edi
  int v9; // ebp
  int v10; // edi
  bool v11; // zf
  NiD3DTextureStage *v12; // [esp+14h] [ebp-18h]
  NiD3DTextureStage *v13; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  v2 = 0; /*0x7e3759*/
  p_Stage = 0; /*0x7e375f*/
  v14 = 0; /*0x7e3761*/
  v12 = 0; /*0x7e3765*/
  v4 = *(this + 0x21); /*0x7e3769*/
  LOBYTE(v14) = 1; /*0x7e3771*/
  if ( v4 ) /*0x7e3776*/
  {
    v2 = v4; /*0x7e3778*/
    ++*(_DWORD *)(v4 + 0x60); /*0x7e377a*/
  }
  if ( !*(_DWORD *)(v2 + 0x18) ) /*0x7e3782*/
  {
    v5 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v13); /*0x7e3797*/
    if ( v5 ) /*0x7e379b*/
    {
      ++v5[7].Unk08; /*0x7e379d*/
      v12 = v5; /*0x7e37a1*/
      p_Stage = &v5->Stage; /*0x7e37a5*/
    }
    v6 = v13; /*0x7e37a7*/
    LOBYTE(v14) = 1; /*0x7e37ad*/
    if ( v13 ) /*0x7e37b2*/
    {
      --v13[7].Unk08; /*0x7e37b4*/
      if ( !v6[7].Unk08 ) /*0x7e37bd*/
        sub_772560(v6); /*0x7e37c2*/
    }
    BSShader_ConfigureTextureStageSampler(p_Stage, 0, 1, 2); /*0x7e37ce*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v2, *(_DWORD *)(v2 + 0x14), p_Stage); /*0x7e37dd*/
  }
  v7 = *(this + 0x22); /*0x7e37e2*/
  v8 = *(_DWORD *)(v2 + 0x58); /*0x7e37e8*/
  if ( v8 != v7 ) /*0x7e37ed*/
  {
    if ( v8 ) /*0x7e37f1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7e37f7*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7e380d*/
    }
    *(_DWORD *)(v2 + 0x58) = v7; /*0x7e3811*/
    if ( v7 ) /*0x7e3814*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x7e381a*/
  }
  v9 = *(this + 0x23); /*0x7e3820*/
  v10 = *(_DWORD *)(v2 + 0x44); /*0x7e3826*/
  if ( v10 != v9 ) /*0x7e382b*/
  {
    if ( v10 ) /*0x7e382f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x7e3835*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7e384b*/
    }
    *(_DWORD *)(v2 + 0x44) = v9; /*0x7e384f*/
    if ( v9 ) /*0x7e3852*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x7e3858*/
  }
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7e385e*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e3869*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0xA8u, 0xFu, 0); /*0x7e3878*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7e387d*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e3888*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x1Bu, 1u, 0); /*0x7e3894*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7e3899*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e38a4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x13u, 5u, 0); /*0x7e38b0*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7e38b5*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e38c0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x14u, 6u, 0); /*0x7e38cc*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7e38d1*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e38dc*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0xFu, 0, 0); /*0x7e38e8*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7e38ed*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e38f8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x34u, 0, 0); /*0x7e3904*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7e3909*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e3914*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 7u, 1u, 0); /*0x7e3920*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7e3925*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e3930*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x17u, 4u, 0); /*0x7e393c*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x7e3941*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e394c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0xEu, 0, 0); /*0x7e3958*/
  LOBYTE(v14) = 0; /*0x7e3966*/
  if ( v12 ) /*0x7e396b*/
  {
    v11 = v12[7].Unk08-- == 1; /*0x7e396d*/
    if ( v11 ) /*0x7e3970*/
      sub_772560(v12); /*0x7e3972*/
  }
  v11 = (*(_DWORD *)(v2 + 0x60))-- == 1; /*0x7e3977*/
  v14 = 0xFFFFFFFF; /*0x7e397a*/
  if ( v11 ) /*0x7e397e*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v2); /*0x7e3982*/
}
