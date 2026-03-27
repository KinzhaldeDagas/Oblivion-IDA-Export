void __thiscall TESGlobal::~TESGlobal(TESGlobal *this)
{
  this->vtbl = (TESFormVtbl *)&TESGlobal::`vftable';
  j_TESForm_ClearComponentReferences((TESForm *)this);
  FormHeapFree((unsigned int)this->name.m_data);
  this->name.m_data = 0;
  this->name.m_bufLen = 0;
  this->name.m_dataLen = 0;
  TESForm_destr((TESForm *)this);
}
