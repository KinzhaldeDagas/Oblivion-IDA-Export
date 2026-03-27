TESObjectCONT *__thiscall TESObjectCONT::TESObjectCONT(TESObjectCONT *this)
{
  TESBoundAnimObject_constr((TESForm *)this);
  TESContainer_constr(&this->members.container);
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable';
  this->members.fullName.name.m_data = 0;
  this->members.fullName.name.m_dataLen = 0;
  this->members.fullName.name.m_bufLen = 0;
  TESModel::TESModel(&this->members.model);
  TESScriptableForm_constr(&this->members.scriptable.vtbl);
  TESWeightForm_constr((float *)&this->members.weight);
  this->__vftable = (TESObjectCONTVtbl *)&TESObjectCONT::`vftable'{for `TESObjectCONT'};
  this->members.container.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESContainer'};
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESFullName'};
  this->members.model.vtbl = (TESModelVtbl *)&TESObjectCONT::`vftable'{for `TESModel'};
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESScriptableForm'};
  this->members.weight.super = (BaseFormComponent *)&TESObjectCONT::`vftable'{for `TESWeightForm'};
  this->members.super.super.type = kFormType_Container;
  this->members.flags078 = 0;
  this->members.animSounds[0] = 0;
  this->members.animSounds[1] = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
