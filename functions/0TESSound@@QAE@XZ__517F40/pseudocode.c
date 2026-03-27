TESSound *__thiscall TESSound::TESSound(TESSound *this)
{
  TESBoundAnimObject_constr((TESForm *)this);
  this->soundFile.vtbl = (BaseFormComponentVtbl *)&TESSoundFile::`vftable';
  this->soundFile.fileName.m_data = 0;
  this->soundFile.fileName.m_dataLen = 0;
  this->soundFile.fileName.m_bufLen = 0;
  this->super.vtbl = (TESBoundObjectVtbl *)&TESSound::`vftable'{for `TESSound'};
  this->soundFile.vtbl = (BaseFormComponentVtbl *)&TESSound::`vftable'{for `TESSoundFile'};
  this->soundFile.editorID.m_data = 0;
  this->soundFile.editorID.m_dataLen = 0;
  this->soundFile.editorID.m_bufLen = 0;
  this->super.member.super.type = kFormType_Sound;
  this->soundFlags = 0;
  this->maxAttenuation = 0;
  this->minAttenuation = 0;
  this->frequencyAdjust = 0;
  this->staticAttenuation = 0;
  this->unk9 = 0;
  this->unk12 = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
