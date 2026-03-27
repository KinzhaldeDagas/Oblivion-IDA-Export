TESSoulGem *__thiscall TESSoulGem::TESSoulGem(TESSoulGem *this)
{
  TESObjectMISC::TESObjectMISC((TESObjectMISC *)this);
  this->__vtable = (TESBoundObjectVtbl *)&TESSoulGem::`vftable'{for `TESSoulGem'};
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESFullName'};
  this->members.model.vtbl = (TESModelVtbl *)&TESSoulGem::`vftable'{for `TESModel'};
  this->members.icon.super.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESIcon'};
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESScriptableForm'};
  this->members.value.super.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESValueForm'};
  this->members.weight.super = (BaseFormComponent *)&TESSoulGem::`vftable'{for `TESWeightForm'};
  this->members.super.super.type = kFormType_SoulGem;
  this->members.soul = 0;
  this->members.capacity = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
