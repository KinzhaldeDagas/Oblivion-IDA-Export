NiTList_NiProperty *__thiscall sub_7B2800(BSShaderProperty *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  NiTList_Entry_NiProperty *v10; // eax
  NiTList_Entry_NiProperty *start; // ecx

  if ( this->member.lastRenderPassState != a3 )
  {
    sub_7E24C0(this);
    if ( ShaderPackage < 2 || UseHDR )
    {
      v8 = FormHeapAlloc(0x10u);
      if ( v8 )
        v9 = sub_7E2370(v8, a2, 0x195, 1, 0, 0);
      else
        v9 = 0;
      v10 = (NiTList_Entry_NiProperty *)(*((int (__thiscall **)(NiTList_NiProperty *))this->member.passes.vtlb + 1))(&this->member.passes);
      v10->data = (NiProperty *)v9;
      v10->prev = 0;
      v10->next = this->member.passes.start;
      start = this->member.passes.start;
      if ( start )
        start->prev = v10;
      else
        this->member.passes.end = v10;
      ++this->member.passes.numItems;
      this->member.passes.start = v10;
    }
    else
    {
      v6 = FormHeapAlloc(0x10u);
      if ( v6 )
        v7 = sub_7E2370(v6, a2, 0xC, 1, 0, 0);
      else
        v7 = 0;
      a2 = v7;
      sub_6AA320(&this->member.passes.vtlb, &a2);
    }
    this->member.lastRenderPassState = a3 | (LOWORD(dword_B42EAC) << 8);
  }
  return &this->member.passes;
}
