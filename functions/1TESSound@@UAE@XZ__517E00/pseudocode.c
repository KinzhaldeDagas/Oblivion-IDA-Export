void __thiscall TESSound::~TESSound(TESSound *this)
{
  this->super.vtbl = (TESBoundObjectVtbl *)&TESSound::`vftable'{for `TESSound'}; /*0x517e2b*/
  this->soundFile.vtbl = (BaseFormComponentVtbl *)&TESSound::`vftable'{for `TESSoundFile'}; /*0x517e31*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x517e40*/
  FormHeapFree((unsigned int)this->soundFile.editorID.m_data); /*0x517e49*/
  this->soundFile.editorID.m_data = 0; /*0x517e50*/
  this->soundFile.editorID.m_bufLen = 0; /*0x517e53*/
  this->soundFile.editorID.m_dataLen = 0; /*0x517e57*/
  FormHeapFree((unsigned int)this->soundFile.fileName.m_data); /*0x517e5f*/
  this->soundFile.fileName.m_data = 0; /*0x517e69*/
  this->soundFile.fileName.m_bufLen = 0; /*0x517e6c*/
  this->soundFile.fileName.m_dataLen = 0; /*0x517e70*/
  TESObject_destr((TESForm *)this); /*0x517e7c*/
}
