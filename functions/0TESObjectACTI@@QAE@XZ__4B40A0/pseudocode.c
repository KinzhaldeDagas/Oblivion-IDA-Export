TESObjectACTI *__thiscall TESObjectACTI::TESObjectACTI(TESObjectACTI *this)
{
  TESBoundAnimObject_constr((TESForm *)this);
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable';
  this->members.fullName.name.m_data = 0;
  this->members.fullName.name.m_dataLen = 0;
  this->members.fullName.name.m_bufLen = 0;
  TESModel::TESModel(&this->members.model);
  TESScriptableForm_constr(&this->members.scriptable.vtbl);
  this->__vftable = (TESBoundObjectVtbl *)&TESObjectACTI::`vftable'{for `TESObjectACTI'};
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectACTI::`vftable'{for `TESFullName'};
  this->members.model.vtbl = (TESModelVtbl *)&TESObjectACTI::`vftable'{for `TESModel'};
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectACTI::`vftable'{for `TESScriptableForm'};
  this->members.super.super.type = kFormType_Activator;
  this->members.loopSound = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  TESForm_SetIsLinked((TESForm *)this, 1);
  return this;
}
