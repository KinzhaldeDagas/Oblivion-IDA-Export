NiTList_NiProperty *__thiscall sub_7B2800(BSShaderProperty *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  NiTList_Entry_NiProperty *v10; // eax
  NiTList_Entry_NiProperty *start; // ecx

  if ( this->member.lastRenderPassState != a3 ) /*0x7b282d*/
  {
    BSShaderProperty_ClearRenderPassLists(this); /*0x7b2833*/
    if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 || OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7b2841*/
    {
      v8 = FormHeapAlloc(0x10u); /*0x7b289b*/
      if ( v8 ) /*0x7b28b1*/
        v9 = RenderPass_Construct(v8, a2, 0x195, 1, 0, 0); /*0x7b28cc*/
      else
        v9 = 0; /*0x7b28d0*/
      v10 = (NiTList_Entry_NiProperty *)(*((int (__thiscall **)(NiTList_NiProperty *))this->member.passes.vtlb + 1))(&this->member.passes); /*0x7b28e5*/
      v10->data = (NiProperty *)v9; /*0x7b28e7*/
      v10->prev = 0; /*0x7b28ea*/
      v10->next = this->member.passes.start; /*0x7b28f4*/
      start = this->member.passes.start; /*0x7b28f6*/
      if ( start ) /*0x7b28fb*/
        start->prev = v10; /*0x7b28fd*/
      else
        this->member.passes.end = v10; /*0x7b2902*/
      ++this->member.passes.numItems; /*0x7b2905*/
      this->member.passes.start = v10; /*0x7b2909*/
    }
    else
    {
      v6 = FormHeapAlloc(0x10u); /*0x7b284c*/
      if ( v6 ) /*0x7b2862*/
        v7 = RenderPass_Construct(v6, a2, 0xC, 1, 0, 0); /*0x7b2872*/
      else
        v7 = 0; /*0x7b287c*/
      a2 = v7; /*0x7b288e*/
      NiTList_AddHead(&this->member.passes.vtlb, &a2); /*0x7b2892*/
    }
    this->member.lastRenderPassState = a3 | (*(unsigned __int16 *)&OB_RendererGlobalState_010201A0[0x13] << 8); /*0x7b291a*/
  }
  return &this->member.passes; /*0x7b2920*/
}
