TESObjectACTI *__thiscall TESObjectACTI::TESObjectACTI(TESObjectACTI *this)
{
  TESBoundAnimObject_constr((TESForm *)this); /*0x4b40cb*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable'; /*0x4b40d2*/
  this->members.fullName.name.m_data = 0; /*0x4b40dd*/
  this->members.fullName.name.m_dataLen = 0; /*0x4b40e0*/
  this->members.fullName.name.m_bufLen = 0; /*0x4b40e4*/
  TESModel::TESModel(&this->members.model); /*0x4b40f2*/
  TESScriptableForm_constr(&this->members.scriptable.vtbl); /*0x4b4101*/
  this->__vftable = (TESBoundObjectVtbl *)&TESObjectACTI::`vftable'{for `TESObjectACTI'}; /*0x4b4108*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESObjectACTI::`vftable'{for `TESFullName'}; /*0x4b410e*/
  this->members.model.vtbl = (TESModelVtbl *)&TESObjectACTI::`vftable'{for `TESModel'}; /*0x4b4115*/
  this->members.scriptable.vtbl = (BaseFormComponentVtbl *)&TESObjectACTI::`vftable'{for `TESScriptableForm'}; /*0x4b411b*/
  this->members.super.super.type = kFormType_Activator; /*0x4b4121*/
  this->members.loopSound = 0; /*0x4b4125*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4b4128*/
  TESForm_SetIsLinked((TESForm *)this, 1); /*0x4b4131*/
  return this; /*0x4b4138*/
}
