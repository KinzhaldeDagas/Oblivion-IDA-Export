void __thiscall TESSoulGem::~TESSoulGem(TESSoulGem *this)
{
  this->__vtable = (TESBoundObjectVtbl *)&TESSoulGem::`vftable'{for `TESSoulGem'}; /*0x4bbc08*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESFullName'}; /*0x4bbc0e*/
  this->members.model.vtbl = (TESModelVtbl *)&TESSoulGem::`vftable'{for `TESModel'}; /*0x4bbc15*/
  this->members.icon.super.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESIcon'}; /*0x4bbc1c*/
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESScriptableForm'}; /*0x4bbc23*/
  this->members.value.super.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESValueForm'}; /*0x4bbc2a*/
  this->members.weight.super = (BaseFormComponent *)&TESSoulGem::`vftable'{for `TESWeightForm'}; /*0x4bbc31*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4bbc40*/
  TESObjectMISC::~TESObjectMISC((TESObjectMISC *)this); /*0x4bbc4f*/
}
