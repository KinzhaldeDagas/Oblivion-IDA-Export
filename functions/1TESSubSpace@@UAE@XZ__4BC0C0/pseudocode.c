void __thiscall TESSubSpace::~TESSubSpace(TESSubSpace *this)
{
  this->super.vtbl = (TESBoundObjectVtbl *)&TESSubSpace::`vftable'; /*0x4bc0e8*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4bc0f6*/
  TESObject_destr((TESForm *)this); /*0x4bc105*/
}
