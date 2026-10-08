// Verified (Oblivion): shared by ShadowLight, Skin, and Hair setup for selector 0x18C. It binds TextureEffectData's texture and render-state fields into the pass template; the active shader's owned pixel/vertex constant maps are then applied by NiD3DShader_SetupShaderPrograms. ShadowLight's vtable owner is confirmed to build/apply maps from the texture-effect globals.
void __thiscall NiD3DPassArray_AddTextureEffectPass1x(
        NiTArray_NiD3DPass *this,
        NiGeometry *geometry,
        int arg3,
        int arg4,
        BSShaderProperty *shaderProperty)
{
  BSShaderProperty *v5; // ebx
  OblivionTextureEffectData *textureEffectData; // edi
  int v7; // esi
  NiD3DTextureStage *v8; // ebp
  int v9; // eax
  unsigned int v10; // eax
  NiD3DTextureStage *v11; // ebp
  unsigned int v12; // eax
  unsigned int eTextureBlendModeSource_5C; // ebp
  unsigned int eTextureBlendModeDest_60; // ebp
  unsigned int eTextureBlendOperation_64; // ebp
  unsigned int eTextureZTestFunction_68; // edi

  v5 = shaderProperty; /*0x851cc9*/
  textureEffectData = (OblivionTextureEffectData *)shaderProperty[2].member.super.super.m_pcName; /*0x851ccd*/
  v7 = unk_B45BD0; /*0x851cd5*/
  if ( textureEffectData ) /*0x851cdb*/
  {
    v8 = **(NiD3DTextureStage ***)(v7 + 0x24); /*0x851ce6*/
    if ( (*((int (__thiscall **)(BSShaderProperty *, _DWORD))shaderProperty->vtbl + 0x23))(shaderProperty, 0) ) /*0x851cf2*/
    {
      v9 = (*((int (__thiscall **)(BSShaderProperty *, _DWORD))v5->vtbl + 0x23))(v5, 0); /*0x851d04*/
    }
    else
    {
      v9 = unk_B430F0; /*0x851d0f*/
      if ( (v5->member.passInfo & 0x80) == 0 ) /*0x851d14*/
        v9 = LODWORD(flt_B430DC[0]); /*0x851d16*/
    }
    NiD3DTextureStage_SetTexture(v8, (NiTexture *)v9); /*0x851d1e*/
    if ( v8 ) /*0x851d25*/
    {
      if ( unk_B42CDD ) /*0x851d27*/
      {
        v10 = (*((int (__thiscall **)(BSShaderProperty *))v5->vtbl + 0x1E))(v5); /*0x851d37*/
        NiD3DTextureStage_ApplyAddressModePreset(v8, v10); /*0x851d3c*/
      }
    }
    v11 = *(NiD3DTextureStage **)(*(_DWORD *)(v7 + 0x24) + 4); /*0x851d49*/
    if ( textureEffectData->sourceTexture_08 ) /*0x851d44*/
      NiD3DTextureStage_SetTexture(v11, (NiTexture *)textureEffectData->sourceTexture_08); /*0x851d51*/
    else
      NiD3DTextureStage_SetTexture(v11, (NiTexture *)unk_B43120); /*0x851d5a*/
    NiD3DTextureStage_ApplyAddressModePreset(v11, 3u); /*0x851d63*/
    if ( v11 ) /*0x851d6a*/
    {
      if ( unk_B42CDD ) /*0x851d6c*/
      {
        v12 = (*((int (__thiscall **)(BSShaderProperty *))v5->vtbl + 0x1E))(v5); /*0x851d7c*/
        NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x851d81*/
      }
    }
    eTextureBlendModeSource_5C = textureEffectData->eTextureBlendModeSource_5C; /*0x851d8a*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x851d86*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x851d94*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x13, eTextureBlendModeSource_5C, 0); /*0x851d9f*/
    eTextureBlendModeDest_60 = textureEffectData->eTextureBlendModeDest_60; /*0x851da8*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x851da4*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x851db2*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x14, eTextureBlendModeDest_60, 0); /*0x851dbd*/
    eTextureBlendOperation_64 = textureEffectData->eTextureBlendOperation_64; /*0x851dc6*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x851dc2*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x851dd0*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0xAB, eTextureBlendOperation_64, 1); /*0x851dde*/
    eTextureZTestFunction_68 = textureEffectData->eTextureZTestFunction_68; /*0x851de7*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x851de3*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x851df1*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x17, eTextureZTestFunction_68, 0); /*0x851dfc*/
    BSShaderProperty_SetupTextureEffectConstants(geometry, v5); /*0x851e0d*/
    ++*(_DWORD *)(v7 + 0x60); /*0x851e17*/
    shaderProperty = (BSShaderProperty *)v7; /*0x851e1a*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&shaderProperty); /*0x851e32*/
    if ( (*(_DWORD *)(v7 + 0x60))-- == 1 ) /*0x851e3a*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x851e45*/
    ++*((_DWORD *)this + 0xE); /*0x851e4a*/
  }
}
