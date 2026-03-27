TESGrass *__thiscall TESGrass::TESGrass(TESGrass *this)
{
  double v2; // st7
  double v3; // st7

  TESBoundObject_constr((TESForm *)this);
  TESModel::TESModel((TESModel *)((char *)this + 0x24));
  *((float *)this + 0x12) = flt_A427E4;
  *((float *)this + 0x13) = flt_A3D9A4;
  *(_DWORD *)this = &TESGrass::`vftable'{for `TESGrass'};
  v2 = flt_A3D65C;
  *((_DWORD *)this + 9) = &TESGrass::`vftable'{for `TESModel'};
  *((float *)this + 0x14) = v2;
  *((_BYTE *)this + 4) = 0x1D;
  v3 = flt_A31C80;
  *((_BYTE *)this + 0x3C) = 0x1E;
  *((float *)this + 0x15) = v3;
  *((_BYTE *)this + 0x3D) = 0;
  *((_BYTE *)this + 0x3E) = 0x5A;
  *((_WORD *)this + 0x20) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_BYTE *)this + 0x58) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
