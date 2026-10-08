// Verified (Oblivion): shared by ShadowLight, Skin, and Hair setup for selector 0x18F. It binds the same effect data and uses the active shader's owned texture-effect maps through NiD3DShader_SetupShaderPrograms.
void __thiscall NiD3DPassArray_AddTextureEffectPass2xS(
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

  textureEffectData = (OblivionTextureEffectData *)shaderProperty[2].member.super.super.m_pcName; /*0x848afa*/
  v7 = unk_B45BDC; /*0x848b02*/
  if ( textureEffectData ) /*0x848b08*/
  {
    v8 = **(NiD3DTextureStage ***)(v7 + 0x24); /*0x848b11*/
    v9 = (NiTexture *)sub_848FD0(shaderProperty, 0); /*0x848b18*/
    NiD3DTextureStage_SetTexture(v8, v9); /*0x848b20*/
    sub_848FA0(v8, (int)shaderProperty); /*0x848b2d*/
    v10 = *(NiD3DTextureStage **)(*(_DWORD *)(v7 + 0x24) + 4); /*0x848b35*/
    if ( textureEffectData->sourceTexture_08 ) /*0x848b38*/
      NiD3DTextureStage_SetTexture(v10, (NiTexture *)textureEffectData->sourceTexture_08); /*0x848b40*/
    else
      NiD3DTextureStage_SetTexture(v10, (NiTexture *)unk_B43120); /*0x848b4b*/
    sub_848FA0(v10, (int)shaderProperty); /*0x848b58*/
    eTextureBlendModeSource_5C = textureEffectData->eTextureBlendModeSource_5C; /*0x848b61*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x848b5d*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x848b6b*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x13, eTextureBlendModeSource_5C, 0); /*0x848b76*/
    eTextureBlendModeDest_60 = textureEffectData->eTextureBlendModeDest_60; /*0x848b7f*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x848b7b*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x848b89*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x14, eTextureBlendModeDest_60, 0); /*0x848b94*/
    eTextureBlendOperation_64 = textureEffectData->eTextureBlendOperation_64; /*0x848b9d*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x848b99*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x848ba7*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0xAB, eTextureBlendOperation_64, 1); /*0x848bb5*/
    eTextureZTestFunction_68 = textureEffectData->eTextureZTestFunction_68; /*0x848bbe*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x848bba*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x848bc8*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x17, eTextureZTestFunction_68, 0); /*0x848bd3*/
    BSShaderProperty_SetupTextureEffectConstants(geometry, shaderProperty); /*0x848be4*/
    ++*(_DWORD *)(v7 + 0x60); /*0x848bee*/
    shaderProperty = (BSShaderProperty *)v7; /*0x848bf1*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&shaderProperty); /*0x848c09*/
    if ( (*(_DWORD *)(v7 + 0x60))-- == 1 ) /*0x848c11*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x848c1c*/
    ++*((_DWORD *)this + 0xE); /*0x848c21*/
  }
}
