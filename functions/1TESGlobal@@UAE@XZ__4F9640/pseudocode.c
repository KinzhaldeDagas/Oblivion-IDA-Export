void __thiscall TESGlobal::~TESGlobal(TESGlobal *this)
{
  this->vtbl = (TESFormVtbl *)TESGlobal::`vftable'; /*0x4f9668*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4f9676*/
  FormHeapFree((unsigned int)this->name.m_data); /*0x4f967f*/
  this->name.m_data = 0; /*0x4f968b*/
  this->name.m_bufLen = 0; /*0x4f968e*/
  this->name.m_dataLen = 0; /*0x4f9692*/
  TESForm_destr((TESForm *)this); /*0x4f969e*/
}
