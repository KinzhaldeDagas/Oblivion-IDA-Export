TESModel *__thiscall TESModel::TESModel(TESModel *this)
{
  this->vtbl = (TESModelVtbl *)&TESModel::`vftable'; /*0x46d807*/
  this->nifModel.m_data = 0; /*0x46d80d*/
  this->nifModel.m_dataLen = 0; /*0x46d810*/
  this->nifModel.m_bufLen = 0; /*0x46d814*/
  this->unk10 = 0; /*0x46d818*/
  this->unk14 = 0; /*0x46d81b*/
  FormHeapFree((unsigned int)this->nifModel.m_data); /*0x46d822*/
  this->nifModel.m_data = 0; /*0x46d829*/
  this->nifModel.m_bufLen = 0; /*0x46d82c*/
  this->nifModel.m_dataLen = 0; /*0x46d830*/
  this->editorSize = 0.0; /*0x46d834*/
  return this; /*0x46d83c*/
}
