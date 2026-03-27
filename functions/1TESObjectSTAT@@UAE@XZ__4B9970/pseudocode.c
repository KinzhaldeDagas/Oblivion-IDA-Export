void __thiscall TESObjectSTAT::~TESObjectSTAT(TESForm *this)
{
  TESModel *v2; // edi

  v2 = (TESModel *)((char *)this + 0x24);
  this->vtbl = (TESFormVtbl *)&TESObjectSTAT::`vftable'{for `TESObjectSTAT'};
  *((_DWORD *)this + 9) = &TESObjectSTAT::`vftable'{for `TESModel'};
  j_TESForm_ClearComponentReferences(this);
  TESModel::~TESModel(v2);
  TESObject_destr(this);
}
