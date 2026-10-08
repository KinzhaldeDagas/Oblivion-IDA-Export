// Verified (Oblivion): shared by all four 1x/2x texture-effect pass handlers used from ShadowLight, Skin, and Hair shader setup. Reads TextureEffectData from shaderProperty+0xE0, copies current fill/edge RGBA into ShadowLight shader-map backing, copies U/V offsets and edge exponent, writes the second fVars component as 1.0, then updates separate per-geometry property-state constants.
void __stdcall BSShaderProperty_SetupTextureEffectConstants(NiGeometry *geometry, BSShaderProperty *shaderProperty)
{
  OblivionTextureEffectData *textureEffectData; // eax
  NiPropertyState *v3; // edi
  BSShaderProperty *v4; // esi
  int v5; // ecx
  float v6; // [esp+4h] [ebp-20h]
  float v7; // [esp+8h] [ebp-1Ch]
  float v8; // [esp+Ch] [ebp-18h]
  float v9; // [esp+18h] [ebp-Ch]
  float geometrya; // [esp+28h] [ebp+4h]

  if ( *(float *)&shaderProperty != 0.0 ) /*0x7d1c99*/
  {
    textureEffectData = (OblivionTextureEffectData *)shaderProperty[2].member.super.super.m_pcName; /*0x7d1c9f*/
    if ( textureEffectData ) /*0x7d1ca7*/
    {
      g_ShadowLight_CurrentFillColor.r = textureEffectData->currentFillColor_0C.r; /*0x7d1cac*/
      g_ShadowLight_CurrentFillColor.g = textureEffectData->currentFillColor_0C.g; /*0x7d1cb5*/
      g_ShadowLight_CurrentFillColor.b = textureEffectData->currentFillColor_0C.b; /*0x7d1cbe*/
      g_ShadowLight_CurrentFillColor.a = textureEffectData->currentFillColor_0C.a; /*0x7d1cc7*/
      g_ShadowLight_CurrentEdgeColor.r = textureEffectData->currentEdgeColor_1C.r; /*0x7d1cd0*/
      g_ShadowLight_CurrentEdgeColor.g = textureEffectData->currentEdgeColor_1C.g; /*0x7d1cd9*/
      g_ShadowLight_CurrentEdgeColor.b = textureEffectData->currentEdgeColor_1C.b; /*0x7d1ce2*/
      g_ShadowLight_CurrentEdgeColor.a = textureEffectData->currentEdgeColor_1C.a; /*0x7d1ceb*/
      g_ShadowLight_TextureEffectUOffset = textureEffectData->textureOffsetU_4C; /*0x7d1cf4*/
      g_ShadowLight_TextureEffectVOffset = textureEffectData->textureOffsetV_50; /*0x7d1cfd*/
      g_ShadowLight_TextureEffectEdgeFalloff = textureEffectData->edgeExponent_54; /*0x7d1d06*/
      g_ShadowLight_TextureEffectFVarsOne = 1.0; /*0x7d1d0e*/
    }
    flt_B44F68[1] = 0.0; /*0x7d1d33*/
    flt_B44F68[0] = 0.0; /*0x7d1d40*/
    flt_B44F78[0] = 0.0; /*0x7d1d51*/
    flt_B44F78[3] = 0.0; /*0x7d1d5b*/
    flt_B44F68[2] = 0.0; /*0x7d1d67*/
    flt_B44F68[3] = 0.0; /*0x7d1d71*/
    flt_B44F78[1] = 0.0; /*0x7d1d7a*/
    flt_B44F78[2] = 0.0; /*0x7d1d80*/
    if ( geometry ) /*0x7d1d85*/
    {
      v3 = *NiGeometry_GetPropertyState(geometry, (NiPropertyState **)&shaderProperty); /*0x7d1d96*/
      if ( *(float *)&shaderProperty != 0.0 ) /*0x7d1d9e*/
      {
        v4 = shaderProperty; /*0x7d1da1*/
        if ( !InterlockedDecrement((volatile LONG *)&shaderProperty->member) ) /*0x7d1da7*/
          (*(void (__thiscall **)(BSShaderProperty *, int))v4->vtbl)(v4, 1); /*0x7d1dbd*/
      }
      v5 = *((_DWORD *)v3 + 3); /*0x7d1dc0*/
      if ( v5 ) /*0x7d1dc6*/
      {
        geometrya = *(float *)(v5 + 0x2C); /*0x7d1dcf*/
        shaderProperty = *(BSShaderProperty **)(v5 + 0x30); /*0x7d1dd6*/
        if ( *(float *)&shaderProperty != 0.0 || 0.0 != geometrya ) /*0x7d1dfa*/
        {
          v6 = *(float *)(v5 + 0x20); /*0x7d1e0e*/
          v9 = *(float *)&shaderProperty - geometrya; /*0x7d1e18*/
          v7 = *(float *)(v5 + 0x24); /*0x7d1e1c*/
          v8 = *(float *)(v5 + 0x28); /*0x7d1e2a*/
          flt_B44F78[0] = *(float *)&shaderProperty; /*0x7d1e32*/
          flt_B44F78[1] = v9; /*0x7d1e43*/
          flt_B44F78[2] = 1.0; /*0x7d1e55*/
          flt_B44F78[3] = 0.0; /*0x7d1e66*/
          flt_B44F68[0] = v6; /*0x7d1e74*/
          flt_B44F68[1] = v7; /*0x7d1e82*/
          flt_B44F68[2] = v8; /*0x7d1e87*/
          flt_B44F68[3] = 0.0; /*0x7d1e8d*/
        }
      }
    }
  }
}
