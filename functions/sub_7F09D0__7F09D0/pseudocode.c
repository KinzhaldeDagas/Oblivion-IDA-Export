// SpeedTree leaf pass builder: texture stage uses wrap+linear; render states set ZENABLE=TRUE, ZFUNC=LESSEQUAL, ZWRITEENABLE=TRUE.
void __thiscall sub_7F09D0(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // ebp
  int v11; // ebx
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // esi
  NiD3DTextureStage *v16; // eax
  unsigned int *a3; // [esp+14h] [ebp-14h] BYREF
  NiD3DPass *v18; // [esp+18h] [ebp-10h] BYREF
  int v19; // [esp+24h] [ebp-4h]

  v2 = NiD3DPassPool_Acquire(&v18); /*0x7f0a06*/
  v3 = *(this + 0xE5); /*0x7f0a08*/
  v4 = v3 == *v2; /*0x7f0a0e*/
  v19 = 0; /*0x7f0a10*/
  if ( !v4 ) /*0x7f0a18*/
  {
    if ( v3 ) /*0x7f0a1c*/
    {
      v4 = v3->RefCount-- == 1; /*0x7f0a1e*/
      if ( v4 ) /*0x7f0a22*/
        NiD3DPass_ReleaseToPool(v3); /*0x7f0a24*/
    }
    v5 = *v2; /*0x7f0a29*/
    v4 = *v2 == 0; /*0x7f0a2b*/
    *(this + 0xE5) = *v2; /*0x7f0a2d*/
    if ( !v4 ) /*0x7f0a33*/
      ++v5->RefCount; /*0x7f0a35*/
  }
  v6 = v18; /*0x7f0a39*/
  v19 = 0xFFFFFFFF; /*0x7f0a3f*/
  if ( v18 ) /*0x7f0a47*/
  {
    --v18->RefCount; /*0x7f0a49*/
    if ( !v6->RefCount ) /*0x7f0a52*/
      NiD3DPass_ReleaseToPool(v6); /*0x7f0a57*/
  }
  NiD3DTextureStagePool_Acquire(&a3); /*0x7f0a61*/
  v19 = 1; /*0x7f0a71*/
  BSShader_ConfigureTextureStageSampler((int)a3, 0, 1, 2);// Builds the sole leaf sampler with texcoord set 0, address mode WRAP, and LINEAR mag/min/mip filtering. This leaf pass writes no MIPMAPLODBIAS or MAXMIPLEVEL override; normal hardware mip choice uses the uploaded DDS chain. /*0x7f0a79*/
  NiD3DPass_SetTextureStage(*(this + 0xE5), (*(this + 0xE5))->CurrentStage, a3); /*0x7f0a90*/
  v7 = (int)*(this + 0xE5); /*0x7f0a95*/
  v8 = (int)*(this + 0xDF); /*0x7f0a9b*/
  v9 = *(_DWORD *)(v7 + 0x58); /*0x7f0aa1*/
  if ( v9 != v8 ) /*0x7f0aa6*/
  {
    if ( v9 ) /*0x7f0aaa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x7f0ab0*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7f0ac6*/
    }
    *(_DWORD *)(v7 + 0x58) = v8; /*0x7f0aca*/
    if ( v8 ) /*0x7f0acd*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x7f0ad3*/
  }
  v10 = (int)*(this + 0xE5); /*0x7f0ad9*/
  v11 = (int)*(this + 0xE3); /*0x7f0adf*/
  v12 = *(_DWORD *)(v10 + 0x44); /*0x7f0ae5*/
  if ( v12 != v11 ) /*0x7f0aea*/
  {
    if ( v12 ) /*0x7f0aee*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x7f0af4*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7f0b0a*/
    }
    *(_DWORD *)(v10 + 0x44) = v11; /*0x7f0b0e*/
    if ( v11 ) /*0x7f0b11*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x7f0b17*/
  }
  v13 = (int)*(this + 0xE5); /*0x7f0b1d*/
  if ( !*(_DWORD *)(v13 + 0x30) ) /*0x7f0b23*/
    *(_DWORD *)(v13 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f0b2e*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v13 + 0x30), 7, 1, 0);// Leaf pass enables depth testing (D3DRS_ZENABLE = TRUE). /*0x7f0b3a*/
  v14 = (int)*(this + 0xE5); /*0x7f0b3f*/
  if ( !*(_DWORD *)(v14 + 0x30) ) /*0x7f0b45*/
    *(_DWORD *)(v14 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f0b50*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v14 + 0x30), 0x17, 4, 0);// Leaf pass depth function is D3DCMP_LESSEQUAL. /*0x7f0b5c*/
  v15 = (int)*(this + 0xE5); /*0x7f0b61*/
  if ( !*(_DWORD *)(v15 + 0x30) ) /*0x7f0b67*/
    *(_DWORD *)(v15 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f0b72*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v15 + 0x30), 0xE, 1, 0);// Leaf pass enables depth writes (D3DRS_ZWRITEENABLE = TRUE). /*0x7f0b7e*/
  v16 = (NiD3DTextureStage *)a3; /*0x7f0b83*/
  v19 = 0xFFFFFFFF; /*0x7f0b89*/
  if ( a3 ) /*0x7f0b91*/
  {
    --a3[0x17]; /*0x7f0b93*/
    if ( !v16[7].Unk08 ) /*0x7f0b9c*/
      sub_772560(v16); /*0x7f0ba1*/
  }
}
