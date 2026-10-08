char sub_7EF2F0()
{
  int v0; // ebx
  NiD3DPass **v1; // esi
  NiD3DPass *v2; // eax
  bool v3; // zf
  float v4; // esi
  NiD3DPass *v5; // eax
  int v6; // eax
  NiD3DTextureStage *v7; // eax
  int v8; // esi
  float *v9; // edi
  float v10; // ebp
  int v11; // esi
  float *v12; // ebp
  float v13; // edi
  _DWORD **v14; // esi
  _DWORD **v15; // esi
  _DWORD **v16; // esi
  _DWORD **v17; // esi
  _DWORD **v18; // esi
  _DWORD **v19; // esi
  _DWORD **v20; // esi
  _DWORD **v21; // esi
  NiD3DPass *v23; // [esp+14h] [ebp-14h] BYREF
  int v24; // [esp+18h] [ebp-10h]
  unsigned int v25; // [esp+24h] [ebp-4h]

  v0 = 0; /*0x7ef317*/
  v24 = 0; /*0x7ef319*/
  v25 = 0; /*0x7ef322*/
  v1 = NiD3DPassPool_Acquire(&v23); /*0x7ef32e*/
  v2 = (NiD3DPass *)LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]); /*0x7ef330*/
  v3 = LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) == (_DWORD)*v1; /*0x7ef335*/
  LOBYTE(v25) = 1; /*0x7ef337*/
  if ( !v3 ) /*0x7ef33c*/
  {
    if ( v2 ) /*0x7ef340*/
    {
      if ( !--v2->RefCount ) /*0x7ef34b*/
        NiD3DPass_ReleaseToPool(v2); /*0x7ef34f*/
    }
    v4 = *(float *)v1; /*0x7ef354*/
    OB_ShaderConstantStorage_010201A0[0x23C] = v4; /*0x7ef358*/
    if ( v4 != 0.0 ) /*0x7ef35e*/
      ++*(_DWORD *)(LODWORD(v4) + 0x60); /*0x7ef360*/
  }
  v5 = v23; /*0x7ef364*/
  LOBYTE(v25) = 0; /*0x7ef36a*/
  if ( v23 ) /*0x7ef36f*/
  {
    --v23->RefCount; /*0x7ef371*/
    if ( !v5->RefCount ) /*0x7ef37a*/
      NiD3DPass_ReleaseToPool(v5); /*0x7ef37f*/
  }
  v6 = *NiD3DTextureStagePool_Acquire(&v23); /*0x7ef391*/
  if ( v6 ) /*0x7ef395*/
  {
    v0 = v6; /*0x7ef397*/
    ++*(_DWORD *)(v6 + 0x5C); /*0x7ef399*/
    v24 = v6; /*0x7ef39d*/
  }
  v7 = (NiD3DTextureStage *)v23; /*0x7ef3a1*/
  LOBYTE(v25) = 0; /*0x7ef3a7*/
  if ( v23 ) /*0x7ef3ac*/
  {
    --*(_DWORD *)&v23->SoftwareVP; /*0x7ef3ae*/
    if ( !v7[7].Unk08 ) /*0x7ef3b7*/
      sub_772560(v7); /*0x7ef3bc*/
  }
  BSShader_ConfigureTextureStageSampler(v0, 0, 3, 2); /*0x7ef3c8*/
  NiD3DTextureStage_ApplyFilterPreset((_DWORD **)v0, 1); /*0x7ef3d4*/
  NiD3DPass_SetTextureStage( /*0x7ef3e4*/
    (NiD3DPass *)LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]),
    *(_DWORD *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x14),
    (unsigned int *)v0);
  v8 = *(_DWORD *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x58); /*0x7ef3f4*/
  v9 = (float *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x58); /*0x7ef3f7*/
  v10 = OB_ShaderConstantStorage_010201A0[0x233]; /*0x7ef3fc*/
  if ( v8 != LODWORD(OB_ShaderConstantStorage_010201A0[0x233]) ) /*0x7ef3fe*/
  {
    if ( v8 ) /*0x7ef402*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7ef408*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7ef41e*/
    }
    *v9 = v10; /*0x7ef422*/
    if ( v10 != 0.0 ) /*0x7ef424*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v10) + 4)); /*0x7ef42a*/
  }
  v11 = *(_DWORD *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x44); /*0x7ef43b*/
  v12 = (float *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x44); /*0x7ef43e*/
  v13 = OB_ShaderConstantStorage_010201A0[0x23D]; /*0x7ef443*/
  if ( v11 != LODWORD(OB_ShaderConstantStorage_010201A0[0x23D]) ) /*0x7ef445*/
  {
    if ( v11 ) /*0x7ef449*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7ef44f*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7ef465*/
    }
    *v12 = v13; /*0x7ef469*/
    if ( v13 != 0.0 ) /*0x7ef46c*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v13) + 4)); /*0x7ef472*/
  }
  v14 = (_DWORD **)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x30); /*0x7ef47e*/
  if ( !*v14 ) /*0x7ef481*/
    *v14 = NiD3DRenderStateGroupPool_Acquire(); /*0x7ef48b*/
  NiD3DRenderStateGroup_SetRenderState(*v14, 7, 1, 0); /*0x7ef495*/
  v15 = (_DWORD **)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x30); /*0x7ef4a0*/
  if ( !*v15 ) /*0x7ef4a3*/
    *v15 = NiD3DRenderStateGroupPool_Acquire(); /*0x7ef4ad*/
  NiD3DRenderStateGroup_SetRenderState(*v15, 0xE, 0, 0); /*0x7ef4b7*/
  v16 = (_DWORD **)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x30); /*0x7ef4c2*/
  if ( !*v16 ) /*0x7ef4c5*/
    *v16 = NiD3DRenderStateGroupPool_Acquire(); /*0x7ef4cf*/
  NiD3DRenderStateGroup_SetRenderState(*v16, 0x17, 4, 0); /*0x7ef4d9*/
  v17 = (_DWORD **)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x30); /*0x7ef4e4*/
  if ( !*v17 ) /*0x7ef4e7*/
    *v17 = NiD3DRenderStateGroupPool_Acquire(); /*0x7ef4f1*/
  NiD3DRenderStateGroup_SetRenderState(*v17, 0x1B, 1, 0); /*0x7ef4fb*/
  v18 = (_DWORD **)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x30); /*0x7ef506*/
  if ( !*v18 ) /*0x7ef509*/
    *v18 = NiD3DRenderStateGroupPool_Acquire(); /*0x7ef513*/
  NiD3DRenderStateGroup_SetRenderState(*v18, 0x13, 5, 0); /*0x7ef51d*/
  v19 = (_DWORD **)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x30); /*0x7ef528*/
  if ( !*v19 ) /*0x7ef52b*/
    *v19 = NiD3DRenderStateGroupPool_Acquire(); /*0x7ef535*/
  NiD3DRenderStateGroup_SetRenderState(*v19, 0x14, 6, 0); /*0x7ef53f*/
  v20 = (_DWORD **)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x30); /*0x7ef54a*/
  if ( !*v20 ) /*0x7ef54d*/
    *v20 = NiD3DRenderStateGroupPool_Acquire(); /*0x7ef557*/
  NiD3DRenderStateGroup_SetRenderState(*v20, 0xF, 0, 0); /*0x7ef561*/
  v21 = (_DWORD **)(LODWORD(OB_ShaderConstantStorage_010201A0[0x23C]) + 0x30); /*0x7ef56c*/
  if ( !*v21 ) /*0x7ef56f*/
    *v21 = NiD3DRenderStateGroupPool_Acquire(); /*0x7ef579*/
  NiD3DRenderStateGroup_SetRenderState(*v21, 0xA8, 7, 0); /*0x7ef586*/
  v25 = 0xFFFFFFFF; /*0x7ef590*/
  if ( v0 ) /*0x7ef594*/
  {
    v3 = (*(_DWORD *)(v0 + 0x5C))-- == 1; /*0x7ef596*/
    if ( v3 ) /*0x7ef599*/
      sub_772560((NiD3DTextureStage *)v0); /*0x7ef59d*/
  }
  return 1; /*0x7ef5a4*/
}
