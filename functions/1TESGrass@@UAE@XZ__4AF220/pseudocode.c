void __thiscall TESGrass::~TESGrass(TESForm *this)
{
  TESModel *v2; // edi

  v2 = (TESModel *)((char *)this + 0x24);
  this->vtbl = (TESFormVtbl *)&TESGrass::`vftable'{for `TESGrass'};
  *((_DWORD *)this + 9) = &TESGrass::`vftable'{for `TESModel'};
  j_TESForm_ClearComponentReferences(this);
  TESModel::~TESModel(v2);
  TESObject_destr(this);
}
