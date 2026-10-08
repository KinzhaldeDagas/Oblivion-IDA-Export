void __stdcall sub_7FED20(_DWORD *a1, int a2)
{
  int v2; // edi
  NiD3DTextureStage *v3; // ebp
  int v4; // eax
  NiD3DTextureStage *v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // edi

  v2 = a1[0x38]; /*0x7fed27*/
  if ( v2 ) /*0x7fed33*/
  {
    v3 = **(NiD3DTextureStage ***)(a2 + 0x24); /*0x7fed44*/
    if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x8C))(a1, 0) ) /*0x7fed50*/
    {
      v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x8C))(a1, 0); /*0x7fed62*/
    }
    else
    {
      v4 = unk_B430F0; /*0x7fed6d*/
      if ( (a1[7] & 0x80) == 0 ) /*0x7fed72*/
        v4 = LODWORD(flt_B430DC[0]); /*0x7fed74*/
    }
    NiD3DTextureStage_SetTexture(v3, (NiTexture *)v4); /*0x7fed7c*/
    NiD3DTextureStage_ApplyAddressModePreset(v3, 3u); /*0x7fed85*/
    v5 = *(NiD3DTextureStage **)(*(_DWORD *)(a2 + 0x24) + 4); /*0x7fed92*/
    if ( *(_DWORD *)(v2 + 8) ) /*0x7fed8d*/
      NiD3DTextureStage_SetTexture(v5, *(NiTexture **)(v2 + 8)); /*0x7fed9a*/
    else
      NiD3DTextureStage_SetTexture(v5, (NiTexture *)unk_B43120); /*0x7feda3*/
    NiD3DTextureStage_ApplyAddressModePreset(v5, 3u); /*0x7fedac*/
    sub_862600(a2, 2u); /*0x7fedb8*/
    v6 = *(_DWORD *)(v2 + 0x5C); /*0x7fedc1*/
    if ( !*(_DWORD *)(a2 + 0x30) ) /*0x7fedbd*/
      *(_DWORD *)(a2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fedcb*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(a2 + 0x30), 0x13u, v6, 0); /*0x7fedd6*/
    v7 = *(_DWORD *)(v2 + 0x60); /*0x7feddf*/
    if ( !*(_DWORD *)(a2 + 0x30) ) /*0x7feddb*/
      *(_DWORD *)(a2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fede9*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(a2 + 0x30), 0x14u, v7, 0); /*0x7fedf4*/
    v8 = *(_DWORD *)(v2 + 0x64); /*0x7fedfd*/
    if ( !*(_DWORD *)(a2 + 0x30) ) /*0x7fedf9*/
      *(_DWORD *)(a2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fee07*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(a2 + 0x30), 0xABu, v8, 1u); /*0x7fee15*/
    v9 = *(_DWORD *)(v2 + 0x68); /*0x7fee1e*/
    if ( !*(_DWORD *)(a2 + 0x30) ) /*0x7fee1a*/
      *(_DWORD *)(a2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fee28*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(a2 + 0x30), 0x17u, v9, 0); /*0x7fee33*/
  }
}
