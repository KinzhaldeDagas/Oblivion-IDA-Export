NiTList_NiProperty *__thiscall sub_7EFDB0(BSShaderProperty *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // ebx
  NiTList_Entry_NiProperty *v8; // eax
  NiTList_Entry_NiProperty *start; // ecx

  if ( this->member.lastRenderPassState != a3 )
  {
    sub_7E24C0(this);
    v6 = FormHeapAlloc(0x10u);
    if ( v6 )
      v7 = sub_7E2370(v6, a2, 0x19B, 1, 0, 0);
    else
      v7 = 0;
    v8 = (NiTList_Entry_NiProperty *)(*((int (__thiscall **)(void ***))this->member.passes.vtlb + 1))(&this->member.passes.vtlb);
    v8->data = (NiProperty *)v7;
    v8->prev = 0;
    v8->next = this->member.passes.start;
    start = this->member.passes.start;
    if ( start )
      start->prev = v8;
    else
      this->member.passes.end = v8;
    ++this->member.passes.numItems;
    this->member.passes.start = v8;
    this->member.lastRenderPassState = a3 | (LOWORD(dword_B42EAC) << 8);
  }
  return &this->member.passes;
}
