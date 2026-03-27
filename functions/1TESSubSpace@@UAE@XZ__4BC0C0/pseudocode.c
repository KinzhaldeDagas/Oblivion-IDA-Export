void __thiscall TESSubSpace::~TESSubSpace(TESForm *this)
{
  this->vtbl = (TESFormVtbl *)&TESSubSpace::`vftable';
  j_TESForm_ClearComponentReferences(this);
  TESObject_destr(this);
}
