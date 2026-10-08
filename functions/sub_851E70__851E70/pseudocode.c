// Verified (Oblivion): shared by ShadowLight, Skin, and Hair setup for selector 0x18D. It binds the same effect-data fields as 0x18C; the active shader's owned pixel/vertex maps are applied afterward by NiD3DShader_SetupShaderPrograms. The selector is passInfo bit 0x02-dependent.
void __thiscall NiD3DPassArray_AddTextureEffectPass1xS(
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

  v5 = shaderProperty; /*0x851e99*/
  textureEffectData = (OblivionTextureEffectData *)shaderProperty[2].member.super.super.m_pcName; /*0x851e9d*/
  v7 = unk_B45BD4; /*0x851ea5*/
  if ( textureEffectData ) /*0x851eab*/
  {
    v8 = **(NiD3DTextureStage ***)(v7 + 0x24); /*0x851eb6*/
    if ( (*((int (__thiscall **)(BSShaderProperty *, _DWORD))shaderProperty->vtbl + 0x23))(shaderProperty, 0) ) /*0x851ec2*/
    {
      v9 = (*((int (__thiscall **)(BSShaderProperty *, _DWORD))v5->vtbl + 0x23))(v5, 0); /*0x851ed4*/
    }
    else
    {
      v9 = unk_B430F0; /*0x851edf*/
      if ( (v5->member.passInfo & 0x80) == 0 ) /*0x851ee4*/
        v9 = LODWORD(flt_B430DC[0]); /*0x851ee6*/
    }
    NiD3DTextureStage_SetTexture(v8, (NiTexture *)v9); /*0x851eee*/
    if ( v8 ) /*0x851ef5*/
    {
      if ( unk_B42CDD ) /*0x851ef7*/
      {
        v10 = (*((int (__thiscall **)(BSShaderProperty *))v5->vtbl + 0x1E))(v5); /*0x851f07*/
        NiD3DTextureStage_ApplyAddressModePreset(v8, v10); /*0x851f0c*/
      }
    }
    v11 = *(NiD3DTextureStage **)(*(_DWORD *)(v7 + 0x24) + 4); /*0x851f19*/
    if ( textureEffectData->sourceTexture_08 ) /*0x851f14*/
      NiD3DTextureStage_SetTexture(v11, (NiTexture *)textureEffectData->sourceTexture_08); /*0x851f21*/
    else
      NiD3DTextureStage_SetTexture(v11, (NiTexture *)unk_B43120); /*0x851f2a*/
    if ( v11 ) /*0x851f31*/
    {
      if ( unk_B42CDD ) /*0x851f33*/
      {
        v12 = (*((int (__thiscall **)(BSShaderProperty *))v5->vtbl + 0x1E))(v5); /*0x851f43*/
        NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x851f48*/
      }
    }
    eTextureBlendModeSource_5C = textureEffectData->eTextureBlendModeSource_5C; /*0x851f51*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x851f4d*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x851f5b*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x13, eTextureBlendModeSource_5C, 0); /*0x851f66*/
    eTextureBlendModeDest_60 = textureEffectData->eTextureBlendModeDest_60; /*0x851f6f*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x851f6b*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x851f79*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x14, eTextureBlendModeDest_60, 0); /*0x851f84*/
    eTextureBlendOperation_64 = textureEffectData->eTextureBlendOperation_64; /*0x851f8d*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x851f89*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x851f97*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0xAB, eTextureBlendOperation_64, 1); /*0x851fa5*/
    eTextureZTestFunction_68 = textureEffectData->eTextureZTestFunction_68; /*0x851fae*/
    if ( !*(_DWORD *)(v7 + 0x30) ) /*0x851faa*/
      *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x851fb8*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0x17, eTextureZTestFunction_68, 0); /*0x851fc3*/
    BSShaderProperty_SetupTextureEffectConstants(geometry, v5); /*0x851fd4*/
    ++*(_DWORD *)(v7 + 0x60); /*0x851fde*/
    shaderProperty = (BSShaderProperty *)v7; /*0x851fe1*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&shaderProperty); /*0x851ff9*/
    if ( (*(_DWORD *)(v7 + 0x60))-- == 1 ) /*0x852001*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x85200c*/
    ++*((_DWORD *)this + 0xE); /*0x852011*/
  }
}
