void __thiscall TESGrass::~TESGrass(TESForm *this)
{
  TESModel *v2; // edi

  v2 = (TESModel *)((char *)this + 0x24); /*0x4af24b*/
  this->vtbl = (TESFormVtbl *)&TESGrass::`vftable'{for `TESGrass'}; /*0x4af24e*/
  *((_DWORD *)this + 9) = &TESGrass::`vftable'{for `TESModel'}; /*0x4af254*/
  j_TESForm_ClearComponentReferences(this); /*0x4af262*/
  TESModel::~TESModel(v2); /*0x4af26e*/
  TESObject_destr(this); /*0x4af27d*/
}
