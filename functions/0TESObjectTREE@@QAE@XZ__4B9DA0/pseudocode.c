TESObjectTREE *__thiscall TESObjectTREE::TESObjectTREE(TESObjectTREE *this)
{
  double v2; // st7
  double v3; // st7

  sub_4B31F0((TESForm *)this);
  TESModel::TESModel((TESModel *)((char *)this + 0x24));
  *((_DWORD *)this + 9) = &TESModelTree::`vftable';
  TESTexture_constr((TESTexture *)this + 5);
  *((_DWORD *)this + 0xF) = &TESIconTree::`vftable';
  v2 = flt_A45128;
  *(_DWORD *)this = &TESObjectTREE::`vftable'{for `TESObjectTREE'};
  *((_DWORD *)this + 9) = &TESObjectTREE::`vftable'{for `TESModelTree'};
  *((_DWORD *)this + 0xF) = &TESObjectTREE::`vftable'{for `TESIconTree'};
  *((_DWORD *)this + 0x12) = &NiTArray<unsigned int>::`vftable';
  *((_WORD *)this + 0x28) = 0;
  *((_WORD *)this + 0x2B) = 1;
  *((_WORD *)this + 0x29) = 0;
  *((_WORD *)this + 0x2A) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((float *)this + 0x16) = v2;
  v3 = flt_A31E2C;
  *((_BYTE *)this + 4) = 0x1E;
  *((float *)this + 0x17) = v3;
  *((float *)this + 0x18) = flt_A44F70;
  *((float *)this + 0x19) = flt_A3D65C;
  *((float *)this + 0x1A) = flt_A41724;
  *((float *)this + 0x1C) = 1.0;
  *((float *)this + 0x1D) = 1.0;
  *((float *)this + 0x1E) = flt_B3FC80;
  *((float *)this + 0x1F) = flt_B3FC84;
  return this;
}
