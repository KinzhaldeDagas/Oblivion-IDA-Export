TESSoulGem *__thiscall TESSoulGem::TESSoulGem(TESSoulGem *this)
{
  TESObjectMISC::TESObjectMISC((TESObjectMISC *)this); /*0x4bbd38*/
  this->__vtable = (TESBoundObjectVtbl *)&TESSoulGem::`vftable'{for `TESSoulGem'}; /*0x4bbd45*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESFullName'}; /*0x4bbd4b*/
  this->members.model.vtbl = (TESModelVtbl *)&TESSoulGem::`vftable'{for `TESModel'}; /*0x4bbd52*/
  this->members.icon.super.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESIcon'}; /*0x4bbd59*/
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESScriptableForm'}; /*0x4bbd60*/
  this->members.value.super.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESValueForm'}; /*0x4bbd67*/
  this->members.weight.super = (BaseFormComponent *)&TESSoulGem::`vftable'{for `TESWeightForm'}; /*0x4bbd6e*/
  this->members.super.super.type = kFormType_SoulGem; /*0x4bbd75*/
  this->members.soul = 0; /*0x4bbd79*/
  this->members.capacity = 0; /*0x4bbd7c*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4bbd7f*/
  return this; /*0x4bbd86*/
}
