// PPLighting-property vtable thunk target for slot +0x30; forwards to the inherited base implementation at 0x7D9890.
// attributes: thunk
unsigned int __thiscall OB_BSShaderPPLightingProperty_Vtbl30Thunk_010201A0(void *this, void *textureMapArray)
{
  return BSShaderPPLightingProperty_GetViewerStrings(
           (BSShaderPPLightingProperty *)this,
           (NiTArray_NiTexturingPropertyMap *)textureMapArray);
}
