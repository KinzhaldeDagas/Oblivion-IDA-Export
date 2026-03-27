void __thiscall TESFurniture::~TESFurniture(TESFurniture *this)
{
  this->super.__vftable = (TESBoundObjectVtbl *)&TESFurniture::`vftable'{for `TESFurniture'};
  this->super.members.fullName.vtbl = (BaseFormComponentVtbl *)&TESFurniture::`vftable'{for `TESFullName'};
  this->super.members.model.vtbl = (TESModelVtbl *)&TESFurniture::`vftable'{for `TESModel'};
  this->super.members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESFurniture::`vftable'{for `TESScriptableForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESObjectACTI::~TESObjectACTI(&this->super);
}
