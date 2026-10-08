// Verified (Oblivion): shared by PP-lighting class-1 and Hair pass builders. When renderStateClass's low byte is 1, constructs and appends a 0x10-byte RenderPass: passInfo bit 0x02 clear selects 0x18C, set selects 0x18D; otherwise it increments passCount and clears the pending pass flag. BSShaderProperty_GetRenderPassName maps these to "BSSM_TEXEFFECT" and "BSSM_TEXEFFECT_S". The PP-lighting caller invokes it only when TextureEffectData at +0xE0 is non-null. Fallout's AddTextureEffectPass_1x uses separate IDs 0x2E9/0x2EA and a direct abSkinned input; numeric pass IDs differ across versions.
NiTPointerList_Node_void *__thiscall BSShaderProperty_AppendTextureEffectPass(
        BSShaderProperty *this,
        NiGeometry *geometry,
        unsigned __int16 *passCount,
        int renderStateClass,
        char *passFlags,
        bool bPassInfoBit2)
{
  RenderPass_DecodedLayout *v7; // eax
  char *v8; // esi
  RenderPass_DecodedLayout *v9; // eax
  NiTPointerList_Node_void *result; // eax
  char *v11; // ecx
  RenderPass_DecodedLayout *v12; // eax

  if ( bPassInfoBit2 ) /*0x854b99*/
  {
    if ( (_BYTE)renderStateClass == 1 ) /*0x854ba4*/
    {
      v7 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854ba8*/
      renderStateClass = (int)v7; /*0x854bb0*/
      v8 = passFlags; /*0x854bb6*/
      if ( v7 ) /*0x854bc2*/
        v9 = RenderPass_Construct(v7, geometry, 0x18Du, *passFlags, 0, 0); /*0x854bd7*/
      else
        v9 = 0; /*0x854be1*/
LABEL_6:
      renderStateClass = (int)v9; /*0x854be3*/
      result = NiTPointerList__AddTail((BSTextureManager *)&this->member.passes, (void **)&renderStateClass); /*0x854bf7*/
      *v8 = 0; /*0x854bfc*/
      return result; /*0x854c10*/
    }
    v11 = passFlags; /*0x854c17*/
    ++*passCount; /*0x854c1b*/
    *v11 = 0; /*0x854c1f*/
    return (NiTPointerList_Node_void *)passCount; /*0x854c13*/
  }
  else
  {
    if ( (_BYTE)renderStateClass == 1 ) /*0x854c3b*/
    {
      v12 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854c3f*/
      renderStateClass = (int)v12; /*0x854c47*/
      v8 = passFlags; /*0x854c4d*/
      if ( v12 ) /*0x854c59*/
        v9 = RenderPass_Construct(v12, geometry, 0x18Cu, *passFlags, 0, 0); /*0x854c6e*/
      else
        v9 = 0; /*0x854c78*/
      goto LABEL_6; /*0x854c76*/
    }
    ++*passCount; /*0x854cae*/
    result = (NiTPointerList_Node_void *)passFlags; /*0x854cb2*/
    *passFlags = 0; /*0x854cb6*/
  }
  return result; /*0x854bff*/
}
