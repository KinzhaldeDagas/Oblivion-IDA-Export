TESFurniture *__thiscall TESFurniture::TESFurniture(TESFurniture *this)
{
  TESObjectACTI::TESObjectACTI(&this->super); /*0x4ae688*/
  this->super.__vftable = (TESBoundObjectVtbl *)&TESFurniture::`vftable'{for `TESFurniture'}; /*0x4ae695*/
  this->super.members.fullName.vtbl = (BaseFormComponentVtbl *)&TESFurniture::`vftable'{for `TESFullName'}; /*0x4ae69b*/
  this->super.members.model.vtbl = (TESModelVtbl *)&TESFurniture::`vftable'{for `TESModel'}; /*0x4ae6a2*/
  this->super.members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESFurniture::`vftable'{for `TESScriptableForm'}; /*0x4ae6a9*/
  this->super.members.super.super.type = kFormType_Furniture; /*0x4ae6b0*/
  this->unk058 = 0; /*0x4ae6b4*/
  sub_4B3C90((TESForm *)this); /*0x4ae6b7*/
  TESForm_SetIsLinked((TESForm *)this, 1); /*0x4ae6c0*/
  return this; /*0x4ae6c7*/
}
