void __thiscall TESObjectANIO::~TESObjectANIO(TESForm *this)
{
  TESModel *v2; // edi

  v2 = (TESModel *)(this + 1); /*0x4b419b*/
  this->vtbl = (TESFormVtbl *)&TESObjectANIO::`vftable'{for `TESObjectANIO'}; /*0x4b419e*/
  *((_DWORD *)this + 6) = &TESObjectANIO::`vftable'{for `TESModel'}; /*0x4b41a4*/
  j_TESForm_ClearComponentReferences(this); /*0x4b41b2*/
  TESModel::~TESModel(v2); /*0x4b41be*/
  TESForm_destr(this); /*0x4b41cd*/
}
