TESGlobal *__thiscall TESGlobal::TESGlobal(TESGlobal *this)
{
  TESForm_constr((TESForm *)this); /*0x4f95e3*/
  this->vtbl = (TESFormVtbl *)&TESGlobal::`vftable'; /*0x4f95ec*/
  this->name.m_data = 0; /*0x4f95f2*/
  this->name.m_dataLen = 0; /*0x4f95f5*/
  this->name.m_bufLen = 0; /*0x4f95f9*/
  this->data = 0.0; /*0x4f95fd*/
  this->type = 0x73; /*0x4f9600*/
  this->super.type = kFormType_Global; /*0x4f9604*/
  return this; /*0x4f960a*/
}
