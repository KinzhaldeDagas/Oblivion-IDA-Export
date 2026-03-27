void __thiscall TESObjectANIO::~TESObjectANIO(TESForm *this)
{
  TESModel *v2; // edi

  v2 = (TESModel *)(this + 1);
  this->vtbl = (TESFormVtbl *)&TESObjectANIO::`vftable'{for `TESObjectANIO'};
  *((_DWORD *)this + 6) = &TESObjectANIO::`vftable'{for `TESModel'};
  j_TESForm_ClearComponentReferences(this);
  TESModel::~TESModel(v2);
  TESForm_destr(this);
}
