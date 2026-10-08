// SkyShaderProperty vtable +0x5C RenderPass builder. In its ordinary state it constructs selector 0x17D (or 0x19C for state 1) and may add 0x19D. During water-reflection accumulation, AccumulateGeometry's SkyShader/SkyShaderProperty fast path directly draws only selector 0x17D and suppresses the other returned passes.
NiTList_NiProperty *__thiscall SkyShaderProperty_BuildRenderPasses(
        BSShaderProperty *this,
        NiGeometry *geometry,
        int rendererState,
        _WORD *outContext,
        int emit)
{
  int v6; // eax
  unsigned __int16 v7; // di
  NiGeometry *v8; // ebx
  NiGeometry *v9; // eax
  NiGeometry *v10; // eax
  int v11; // eax
  NiGeometry *v12; // eax
  NiGeometry *v13; // eax

  if ( !this->member.passes.numItems ) /*0x7c5505*/
  {
    v6 = *((_DWORD *)this + 0x22); /*0x7c5510*/
    v7 = 0x17D;                                 // SkyShaderProperty ordinary pass selector defaults to 0x17D; state 1 changes it to 0x19C. Water reflection's Sky fast path accepts only this default 0x17D record. /*0x7c5519*/
    if ( v6 == 1 ) /*0x7c551e*/
      v7 = 0x19C; /*0x7c5520*/
    v8 = geometry; /*0x7c5528*/
    if ( v6 != 4 ) /*0x7c552c*/
    {
      v9 = (NiGeometry *)FormHeapAlloc(0x10u); /*0x7c5530*/
      geometry = v9; /*0x7c5538*/
      if ( v9 ) /*0x7c5546*/
        v10 = (NiGeometry *)RenderPass_Construct((RenderPass_DecodedLayout *)v9, v8, v7, 1u, 0, 0); /*0x7c5551*/
      else
        v10 = 0; /*0x7c555b*/
      geometry = v10; /*0x7c555d*/
      NiTList_AddHead(&this->member.passes.vtlb, &geometry); /*0x7c5571*/
    }
    if ( !OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7c5576*/
    {
      v11 = *((_DWORD *)this + 0x22); /*0x7c557f*/
      if ( !v11 || v11 == 4 || v11 == 3 ) /*0x7c5591*/
      {
        v12 = (NiGeometry *)FormHeapAlloc(0x10u); /*0x7c5595*/
        geometry = v12; /*0x7c559d*/
        if ( v12 ) /*0x7c55ab*/
          v13 = (NiGeometry *)RenderPass_Construct((RenderPass_DecodedLayout *)v12, v8, 0x19Du, 1u, 0, 0); /*0x7c55ba*/
        else
          v13 = 0; /*0x7c55c4*/
        geometry = v13; /*0x7c55d6*/
        NiTList_AddHead(&this->member.passes.vtlb, &geometry); /*0x7c55da*/
      }
    }
  }
  return &this->member.passes; /*0x7c55e2*/
}
