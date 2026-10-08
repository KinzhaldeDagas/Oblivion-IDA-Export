TESGrass *__thiscall TESGrass::TESGrass(TESGrass *this)
{
  double v2; // st7
  double v3; // st7

  TESBoundObject_constr((TESForm *)this); /*0x4af06a*/
  TESModel::TESModel((TESModel *)((char *)this + 0x24)); /*0x4af07a*/
  *((float *)this + 0x12) = flt_A427E4; /*0x4af085*/
  *((float *)this + 0x13) = flt_A3D9A4; /*0x4af095*/
  *(_DWORD *)this = &TESGrass::`vftable'{for `TESGrass'}; /*0x4af098*/
  v2 = kHeadBodyNormalMatchRadius; /*0x4af09e*/
  *((_DWORD *)this + 9) = &TESGrass::`vftable'{for `TESModel'}; /*0x4af0a4*/
  *((float *)this + 0x14) = v2; /*0x4af0aa*/
  *((_BYTE *)this + 4) = 0x1D; /*0x4af0ad*/
  v3 = flt_A31C80; /*0x4af0b1*/
  *((_BYTE *)this + 0x3C) = 0x1E; /*0x4af0b7*/
  *((float *)this + 0x15) = v3; /*0x4af0bb*/
  *((_BYTE *)this + 0x3D) = 0; /*0x4af0be*/
  *((_BYTE *)this + 0x3E) = 0x5A; /*0x4af0c1*/
  *((_WORD *)this + 0x20) = 0; /*0x4af0c5*/
  *((_DWORD *)this + 0x11) = 0; /*0x4af0c9*/
  *((_BYTE *)this + 0x58) = 0; /*0x4af0cc*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4af0cf*/
  return this; /*0x4af0d6*/
}
