TESFurniture *__thiscall TESFurniture::TESFurniture(TESFurniture *this)
{
  TESObjectACTI::TESObjectACTI(&this->super);
  this->super.__vftable = (TESBoundObjectVtbl *)&TESFurniture::`vftable'{for `TESFurniture'};
  this->super.members.fullName.vtbl = (BaseFormComponentVtbl *)&TESFurniture::`vftable'{for `TESFullName'};
  this->super.members.model.vtbl = (TESModelVtbl *)&TESFurniture::`vftable'{for `TESModel'};
  this->super.members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESFurniture::`vftable'{for `TESScriptableForm'};
  this->super.members.super.super.type = kFormType_Furniture;
  this->unk058 = 0;
  sub_4B3C90((TESForm *)this);
  TESForm_SetIsLinked((TESForm *)this, 1);
  return this;
}
