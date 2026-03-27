TESGlobal *__thiscall TESGlobal::TESGlobal(TESGlobal *this)
{
  TESForm_constr((TESForm *)this);
  this->vtbl = (TESFormVtbl *)&TESGlobal::`vftable';
  this->name.m_data = 0;
  this->name.m_dataLen = 0;
  this->name.m_bufLen = 0;
  this->data = 0.0;
  this->type = 0x73;
  this->super.type = kFormType_Global;
  return this;
}
