// [Verified] GeometryDecalShaderProperty vtable slot 23 (vtable+0x5C) BuildRenderPasses. In render mode 5 it returns no list; otherwise it caches/clears the property pass list and emits selector 0x188. BSShaderProperty_GetRenderPassName maps 0x188 to BSSM_GEOMDECAL. This is the class's own geometry-decal pass, separate from inherited DECAL_DATA batching (0x18A/0x18B and Lighting30 0x152/0x153). Fallout's corresponding property path emits different selectors 0x1FF/0x1FE; exact feature equivalence remains Unknown.
NiTList_NiProperty *__thiscall GeometryDecalShaderProperty_BuildRenderPasses(
        BSShaderProperty *this,
        NiGeometry *geometry,
        int renderFlags,
        unsigned __int16 *passCount,
        int emitMode)
{
  int v7; // edi
  RenderPass_DecodedLayout *v8; // eax
  RenderPass_DecodedLayout *v9; // eax

  if ( *(_WORD *)&OB_RendererGlobalState_010201A0.pad_00D[6] == 5 ) /*0x86485c*/
    return 0; /*0x86485e*/
  v7 = renderFlags; /*0x864874*/
  if ( this->member.lastRenderPassState != renderFlags ) /*0x86487b*/
  {
    BSShaderProperty_ClearRenderPassLists(this); /*0x86487d*/
    v8 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x864884*/
    renderFlags = (int)v8; /*0x86488c*/
    if ( v8 ) /*0x86489a*/
      v9 = RenderPass_Construct(v8, geometry, 0x188u, 1u, 0, 0); /*0x8648ad*/
    else
      v9 = 0; /*0x8648b7*/
    renderFlags = (int)v9; /*0x8648c9*/
    NiTList_AddHead(&this->member.passes.vtlb, &renderFlags); /*0x8648cd*/
    this->member.lastRenderPassState = v7 | (*(unsigned __int16 *)&OB_RendererGlobalState_010201A0.pad_00D[6] << 8); /*0x8648de*/
  }
  return &this->member.passes; /*0x864860*/
}
