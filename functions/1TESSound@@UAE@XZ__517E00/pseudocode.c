void __thiscall TESSound::~TESSound(TESSound *this)
{
  this->super.vtbl = (TESBoundObjectVtbl *)&TESSound::`vftable'{for `TESSound'};
  this->soundFile.vtbl = (BaseFormComponentVtbl *)&TESSound::`vftable'{for `TESSoundFile'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  FormHeapFree((unsigned int)this->soundFile.editorID.m_data);
  this->soundFile.editorID.m_data = 0;
  this->soundFile.editorID.m_bufLen = 0;
  this->soundFile.editorID.m_dataLen = 0;
  FormHeapFree((unsigned int)this->soundFile.fileName.m_data);
  this->soundFile.fileName.m_data = 0;
  this->soundFile.fileName.m_bufLen = 0;
  this->soundFile.fileName.m_dataLen = 0;
  TESObject_destr((TESForm *)this);
}
