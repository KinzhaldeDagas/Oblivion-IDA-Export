NiTList_NiProperty *__thiscall sub_7EFDB0(BSShaderProperty *this, void *vtable, int a3, int a4, int a5)
{
  RenderPass_DecodedLayout *v6; // eax
  RenderPass_DecodedLayout *v7; // ebx
  NiTList_Entry_NiProperty *v8; // eax
  NiTList_Entry_NiProperty *start; // ecx

  if ( this->member.lastRenderPassState != a3 ) /*0x7efddd*/
  {
    BSShaderProperty_ClearRenderPassLists(this); /*0x7efde3*/
    v6 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7efdea*/
    if ( v6 ) /*0x7efe00*/
      v7 = RenderPass_Construct(v6, vtable, 0x19Bu, 1u, 0, 0); /*0x7efe1b*/
    else
      v7 = 0; /*0x7efe1f*/
    v8 = (NiTList_Entry_NiProperty *)(*((int (__thiscall **)(NiTList_NiProperty *))this->member.passes.vtlb + 1))(&this->member.passes); /*0x7efe34*/
    v8->data = (NiProperty *)v7; /*0x7efe36*/
    v8->prev = 0; /*0x7efe39*/
    v8->next = this->member.passes.start; /*0x7efe43*/
    start = this->member.passes.start; /*0x7efe45*/
    if ( start ) /*0x7efe4a*/
      start->prev = v8; /*0x7efe4c*/
    else
      this->member.passes.end = v8; /*0x7efe51*/
    ++this->member.passes.numItems; /*0x7efe54*/
    this->member.passes.start = v8; /*0x7efe58*/
    this->member.lastRenderPassState = a3 | (*(unsigned __int16 *)&OB_RendererGlobalState_010201A0.pad_00D[6] << 8); /*0x7efe69*/
  }
  return &this->member.passes; /*0x7efe6f*/
}
