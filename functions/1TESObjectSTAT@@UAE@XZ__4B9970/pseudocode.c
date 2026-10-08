void __thiscall TESObjectSTAT::~TESObjectSTAT(TESForm *this)
{
  TESModel *v2; // edi

  v2 = (TESModel *)((char *)this + 0x24); /*0x4b999b*/
  this->vtbl = (TESFormVtbl *)&TESObjectSTAT::`vftable'{for `TESObjectSTAT'}; /*0x4b999e*/
  *((_DWORD *)this + 9) = &TESObjectSTAT::`vftable'{for `TESModel'}; /*0x4b99a4*/
  j_TESForm_ClearComponentReferences(this); /*0x4b99b2*/
  TESModel::~TESModel(v2); /*0x4b99be*/
  TESObject_destr(this); /*0x4b99cd*/
}
