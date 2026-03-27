TESClass *__thiscall TESClass::TESClass(TESClass *this)
{
  TESForm_constr((TESForm *)this);
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable';
  this->members.fullName.name.m_data = 0;
  this->members.fullName.name.m_dataLen = 0;
  this->members.fullName.name.m_bufLen = 0;
  TESDescription_constr(&this->members.description.vtbl);
  TESTexture_constr(&this->members.texture);
  this->__vftable = (TESClassVtbl *)&TESClass::`vftable'{for `TESClass'};
  this->members.fullName.vtbl = (BaseFormComponentVtbl *)&TESClass::`vftable'{for `TESFullName'};
  this->members.description.vtbl = (TESDescriptionVtbl *)&TESClass::`vftable'{for `TESDescription'};
  this->members.texture.vtbl = (BaseFormComponentVtbl *)&TESClass::`vftable'{for `TESTexture'};
  this->members.super.type = kFormType_Class;
  sub_51C1B0((TESForm *)this);
  return this;
}
