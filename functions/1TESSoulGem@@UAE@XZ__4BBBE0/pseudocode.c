void __thiscall TESSoulGem::~TESSoulGem(TESSoulGem *this)
{
  this->__vtable = (TESBoundObjectVtbl *)&TESSoulGem::`vftable'{for `TESSoulGem'};
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESFullName'};
  this->members.model.vtbl = (TESModelVtbl *)&TESSoulGem::`vftable'{for `TESModel'};
  this->members.icon.super.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESIcon'};
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESScriptableForm'};
  this->members.value.super.vtbl = (BaseFormComponentVtbl *)&TESSoulGem::`vftable'{for `TESValueForm'};
  this->members.weight.super = (BaseFormComponent *)&TESSoulGem::`vftable'{for `TESWeightForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESObjectMISC::~TESObjectMISC((TESObjectMISC *)this);
}
