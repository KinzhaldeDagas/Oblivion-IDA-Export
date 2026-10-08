// Pass205: WaterShaderProperty render-pass list producer; selects water shader selector from +0x70, lava marker, +0x71, or default.
NiTList_NiProperty *__thiscall sub_85BD60(WaterShaderProperty *this, int a2, int a3, int a4, int a5)
{
  __int16 v6; // si
  int v7; // eax
  int v8; // edi
  NiTList_Entry_NiProperty *v9; // eax
  NiTList_Entry_NiProperty *start; // ecx

  if ( !this->super.member.passes.numItems )
  {
    if ( this->unk070 )
    {
      v6 = 408; /*0x85bd96*/
    }
    else if ( LOBYTE(OB_ShaderConstantStorage_010201A0[0x68C]) )
    {
      v6 = 410; /*0x85bda6*/
    }
    else
    {
      v6 = this->unk071 != 0 ? 380 : 409;
    }
    v7 = FormHeapAlloc(0x10u); /*0x85bdc0*/
    if ( v7 ) /*0x85bdd6*/
      v8 = RenderPass_Construct(v7, a2, v6, 1, 0, 0); /*0x85bded*/
    else
      v8 = 0; /*0x85bdf1*/
    v9 = (NiTList_Entry_NiProperty *)(*((int (__thiscall **)(NiTList_NiProperty *))this->super.member.passes.vtlb + 1))(&this->super.member.passes); /*0x85be06*/
    v9->data = (NiProperty *)v8; /*0x85be08*/
    v9->prev = 0; /*0x85be0b*/
    v9->next = this->super.member.passes.start; /*0x85be15*/
    start = this->super.member.passes.start; /*0x85be17*/
    if ( start ) /*0x85be1c*/
      start->prev = v9; /*0x85be1e*/
    else
      this->super.member.passes.end = v9; /*0x85be23*/
    ++this->super.member.passes.numItems; /*0x85be26*/
    this->super.member.passes.start = v9; /*0x85be2a*/
  }
  return &this->super.member.passes; /*0x85be30*/
}
