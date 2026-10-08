void __thiscall TESFurniture::~TESFurniture(TESFurniture *this)
{
  this->super.__vftable = (TESBoundObjectVtbl *)&TESFurniture::`vftable'{for `TESFurniture'}; /*0x4ae4e8*/
  this->super.members.fullName.vtbl = (BaseFormComponentVtbl *)&TESFurniture::`vftable'{for `TESFullName'}; /*0x4ae4ee*/
  this->super.members.model.vtbl = (TESModelVtbl *)&TESFurniture::`vftable'{for `TESModel'}; /*0x4ae4f5*/
  this->super.members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESFurniture::`vftable'{for `TESScriptableForm'}; /*0x4ae4fc*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4ae50b*/
  TESObjectACTI::~TESObjectACTI(&this->super); /*0x4ae51a*/
}
