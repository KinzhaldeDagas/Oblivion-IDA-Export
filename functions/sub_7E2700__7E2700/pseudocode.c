//
//
// [2026-10-03 render mode correction] Global 0xB42EAC is render mode for alternate pass-list selection, not shader-package/profile identity. Modes5/6 return lists+38/+48 without normal pass construction. Plugin delegates these cases to this native routine. Pixel-profile branch in Frond LoadPrograms uses separate DWORD 0xB42F48 at 0x80E314.
NiTList_NiProperty *__thiscall sub_7E2700(
        BSShaderProperty *this,
        void *vtable,
        RenderPass_DecodedLayout *a3,
        int a4,
        int a5)
{
  int v7; // edi
  RenderPass_DecodedLayout *v8; // eax
  RenderPass_DecodedLayout *v9; // eax

  if ( (unsigned __int16)*(_DWORD *)&OB_RendererGlobalState_010201A0[0x13] == 5 ) /*0x7e272d*/
    return &this->member.unk38; /*0x7e272f*/
  if ( (unsigned __int16)*(_DWORD *)&OB_RendererGlobalState_010201A0[0x13] == 6 ) /*0x7e274a*/
    return &this->member.unk48; /*0x7e274c*/
  v7 = (int)a3; /*0x7e2763*/
  if ( (RenderPass_DecodedLayout *)this->member.lastRenderPassState != a3 ) /*0x7e276a*/
  {
    BSShaderProperty_ClearRenderPassLists(this); /*0x7e276c*/
    v8 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7e2773*/
    a3 = v8; /*0x7e277b*/
    if ( v8 ) /*0x7e2789*/
      v9 = RenderPass_Construct(v8, vtable, 0, 1u, 0, 0); /*0x7e2799*/
    else
      v9 = 0; /*0x7e27a3*/
    a3 = v9; /*0x7e27b5*/
    NiTList_AddHead(&this->member.passes.vtlb, &a3); /*0x7e27b9*/
    this->member.lastRenderPassState = v7 | (*(unsigned __int16 *)&OB_RendererGlobalState_010201A0[0x13] << 8); /*0x7e27ca*/
  }
  return &this->member.passes; /*0x7e2732*/
}
