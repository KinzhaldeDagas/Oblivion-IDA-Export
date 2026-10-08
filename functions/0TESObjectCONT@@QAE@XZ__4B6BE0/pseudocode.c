TESObjectCONT *__thiscall TESObjectCONT::TESObjectCONT(TESObjectCONT *this)
{
  TESBoundAnimObject_constr((TESForm *)this); /*0x4b6c0b*/
  TESContainer_constr(&this->members.container); /*0x4b6c1b*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable'; /*0x4b6c20*/
  this->members.fullName.name.m_data = 0; /*0x4b6c27*/
  this->members.fullName.name.m_dataLen = 0; /*0x4b6c2a*/
  this->members.fullName.name.m_bufLen = 0; /*0x4b6c2e*/
  TESModel::TESModel(&this->members.model); /*0x4b6c3c*/
  TESScriptableForm_constr(&this->members.scriptable.vtbl); /*0x4b6c49*/
  TESWeightForm_constr((float *)&this->members.weight); /*0x4b6c51*/
  this->__vftable = (TESObjectCONTVtbl *)&TESObjectCONT::`vftable'{for `TESObjectCONT'}; /*0x4b6c5d*/
  this->members.container.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESContainer'}; /*0x4b6c63*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESFullName'}; /*0x4b6c69*/
  this->members.model.vtbl = (TESModelVtbl *)&TESObjectCONT::`vftable'{for `TESModel'}; /*0x4b6c70*/
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectCONT::`vftable'{for `TESScriptableForm'}; /*0x4b6c77*/
  this->members.weight.super = (BaseFormComponent *)&TESObjectCONT::`vftable'{for `TESWeightForm'}; /*0x4b6c7e*/
  this->members.super.super.type = kFormType_Container; /*0x4b6c85*/
  this->members.flags078 = 0; /*0x4b6c89*/
  this->members.animSounds[0] = 0; /*0x4b6c8c*/
  this->members.animSounds[1] = 0; /*0x4b6c8f*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4b6c92*/
  return this; /*0x4b6c99*/
}
