TESClass *__thiscall TESClass::TESClass(TESClass *this)
{
  TESForm_constr((TESForm *)this); /*0x51c5aa*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable'; /*0x51c5b1*/
  this->members.fullName.name.m_data = 0; /*0x51c5bc*/
  this->members.fullName.name.m_dataLen = 0; /*0x51c5bf*/
  this->members.fullName.name.m_bufLen = 0; /*0x51c5c3*/
  TESDescription_constr(&this->members.description.vtbl); /*0x51c5d1*/
  TESTexture_constr(&this->members.texture); /*0x51c5db*/
  this->__vftable = (TESClassVtbl *)&TESClass::`vftable'{for `TESClass'}; /*0x51c5e7*/
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESClass::`vftable'{for `TESFullName'}; /*0x51c5ed*/
  this->members.description.vtbl = (TESDescriptionVtbl *)&TESClass::`vftable'{for `TESDescription'}; /*0x51c5f4*/
  this->members.texture.vtbl = (BaseFormComponentVtbl *)&TESClass::`vftable'{for `TESTexture'}; /*0x51c5fa*/
  this->members.super.type = kFormType_Class; /*0x51c600*/
  TESClass_InitializeData(this); /*0x51c604*/
  return this; /*0x51c60b*/
}
