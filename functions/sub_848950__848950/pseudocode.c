// Verified (Oblivion): shared by ShadowLight, Skin, and Hair setup for selector 0x18E. It binds the effect texture and render-state fields; NiD3DShader_SetupShaderPrograms applies the active shader's owned fill/rim/fVars/U/V maps afterward.
void __thiscall NiD3DPassArray_AddTextureEffectPass2x(
        NiTArray_NiD3DPass *this,
        NiGeometry *geometry,
        int arg3,
        int arg4,
        BSShaderProperty *shaderProperty)
{
  OblivionTextureEffectData *textureEffectData; // ebx
  int v7; // esi
  NiD3DTextureStage *v8; // ebp
  NiTexture *v9; // eax
  NiD3DTextureStage *v10; // ebp
  unsigned int eTextureBlendModeSource_5C; // ebp
  unsigned int eTextureBlendModeDest_60; // ebp
  unsigned int eTextureBlendOperation_64; // ebp
  unsigned int eTextureZTestFunction_68; // ebx

  textureEffectData = (OblivionTextureEffectData *)shaderProperty[2].member.super.super.m_pcName; /*0x84897a*/
  v7 = unk_B45BD8; /*0x848982*/
  if ( textureEffectData ) /*0x848988*/
  {
    v8 = **(NiD3DTextureStage ***)(v7 + 0x24); /*0x848991*/
    v9 = (NiTexture *)sub_848FD0(shaderProperty, 0); /*0x848998*/
    NiD3DTextureStage_SetTexture(v8, v9); /*0x8489a0*/
    sub_848FA0(v8, (int)shaderProperty); /*0x8489ad*/
    v10 = *(NiD3DTextureStage **)(*(_DWORD *)(v7 + 0x24) + 4); /*0x8489b5*/
    if ( textureEffectData->sourceTexture_08 ) /*0x8489b8*/
      NiD3DTextureStage_SetTexture(v10, (NiTexture *)textureEffectData->sourceTexture_08); /*0x8489c0*/
    else
      NiD3DTextureStage_SetTexture(v10, (NiTexture *)unk_B43120); /*0x8489cb*/
    NiD3DTextureStage_ApplyAddressModePreset(v10, 3u); /*0x8489d4*/
    sub_848FA0(v10, (int)shaderProperty); /*0x8489e1*/
    eTextureBlendModeSource_5C = textureEffectData->eTextureBlendModeSource_5C; /*0x8489ea*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x8489e6*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8489f4*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x13, eTextureBlendModeSource_5C, 0); /*0x8489ff*/
    eTextureBlendModeDest_60 = textureEffectData->eTextureBlendModeDest_60; /*0x848a08*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x848a04*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x848a12*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x14, eTextureBlendModeDest_60, 0); /*0x848a1d*/
    eTextureBlendOperation_64 = textureEffectData->eTextureBlendOperation_64; /*0x848a26*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x848a22*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x848a30*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0xAB, eTextureBlendOperation_64, 1); /*0x848a3e*/
    eTextureZTestFunction_68 = textureEffectData->eTextureZTestFunction_68; /*0x848a47*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x848a43*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x848a51*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x17, eTextureZTestFunction_68, 0); /*0x848a5c*/
    BSShaderProperty_SetupTextureEffectConstants(geometry, shaderProperty); /*0x848a6d*/
    ++*(_DWORD *)(v7 + 0x60); /*0x848a77*/
    shaderProperty = (BSShaderProperty *)v7; /*0x848a7a*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&shaderProperty); /*0x848a92*/
    if ( (*(_DWORD *)(v7 + 0x60))-- == 1 ) /*0x848a9a*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x848aa5*/
    ++*((_DWORD *)this + 0xE); /*0x848aaa*/
  }
}
