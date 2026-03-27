NiTList_NiProperty *__thiscall sub_7E2700(BSShaderProperty *this, int a2, int a3, int a4, int a5)
{
  int v7; // edi
  int v8; // eax
  int v9; // eax

  if ( (unsigned __int16)dword_B42EAC == 5 )
    return &this->member.unk38;
  if ( (unsigned __int16)dword_B42EAC == 6 )
    return &this->member.unk48;
  v7 = a3;
  if ( this->member.lastRenderPassState != a3 )
  {
    sub_7E24C0(this);
    v8 = FormHeapAlloc(0x10u);
    a3 = v8;
    if ( v8 )
      v9 = sub_7E2370(v8, a2, 0, 1, 0, 0);
    else
      v9 = 0;
    a3 = v9;
    sub_6AA320(&this->member.passes.vtlb, &a3);
    this->member.lastRenderPassState = v7 | (LOWORD(dword_B42EAC) << 8);
  }
  return &this->member.passes;
}
