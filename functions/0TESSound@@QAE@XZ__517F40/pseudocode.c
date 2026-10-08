TESSound *__thiscall TESSound::TESSound(TESSound *this)
{
  TESBoundAnimObject_constr((TESForm *)this); /*0x517f68*/
  this->soundFile.vtbl = (BaseFormComponentVtbl *)&TESSoundFile::`vftable'; /*0x517f6f*/
  this->soundFile.fileName.m_data = 0; /*0x517f7a*/
  this->soundFile.fileName.m_dataLen = 0; /*0x517f7d*/
  this->soundFile.fileName.m_bufLen = 0; /*0x517f81*/
  this->super.vtbl = (TESBoundObjectVtbl *)&TESSound::`vftable'{for `TESSound'}; /*0x517f85*/
  this->soundFile.vtbl = (BaseFormComponentVtbl *)&TESSound::`vftable'{for `TESSoundFile'}; /*0x517f8b*/
  this->soundFile.editorID.m_data = 0; /*0x517f92*/
  this->soundFile.editorID.m_dataLen = 0; /*0x517f95*/
  this->soundFile.editorID.m_bufLen = 0; /*0x517f99*/
  this->super.member.super.type = kFormType_Sound; /*0x517fa4*/
  this->soundFlags = 0; /*0x517fa8*/
  this->maxAttenuation = 0; /*0x517fab*/
  this->minAttenuation = 0; /*0x517fae*/
  this->frequencyAdjust = 0; /*0x517fb1*/
  this->staticAttenuation = 0; /*0x517fb4*/
  this->unk9 = 0; /*0x517fb8*/
  this->unk12 = 0; /*0x517fbb*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x517fbf*/
  return this; /*0x517fc6*/
}
