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
      v6 = 408;
    }
    else if ( isLava )
    {
      v6 = 410;
    }
    else
    {
      v6 = this->unk071 != 0 ? 380 : 409;
    }
    v7 = FormHeapAlloc(0x10u);
    if ( v7 )
      v8 = sub_7E2370(v7, a2, v6, 1, 0, 0);
    else
      v8 = 0;
    v9 = (NiTList_Entry_NiProperty *)(*((int (__thiscall **)(NiTList_NiProperty *))this->super.member.passes.vtlb + 1))(&this->super.member.passes);
    v9->data = (NiProperty *)v8;
    v9->prev = 0;
    v9->next = this->super.member.passes.start;
    start = this->super.member.passes.start;
    if ( start )
      start->prev = v9;
    else
      this->super.member.passes.end = v9;
    ++this->super.member.passes.numItems;
    this->super.member.passes.start = v9;
  }
  return &this->super.member.passes;
}
