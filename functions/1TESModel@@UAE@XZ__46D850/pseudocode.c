void __thiscall TESModel::~TESModel(TESModel *this)
{
  this->vtbl = (TESModelVtbl *)&TESModel::`vftable'; /*0x46d854*/
  if ( this->unk14 ) /*0x46d85a*/
  {
    FormHeapFree((unsigned int)this->unk14); /*0x46d864*/
    this->unk14 = 0; /*0x46d86c*/
  }
  this->unk10 = 0; /*0x46d86f*/
  if ( this->unk14 ) /*0x46d872*/
  {
    FormHeapFree((unsigned int)this->unk14); /*0x46d87a*/
    this->unk14 = 0; /*0x46d882*/
  }
  this->unk10 = 0; /*0x46d885*/
  FormHeapFree((unsigned int)this->nifModel.m_data); /*0x46d88c*/
  this->nifModel.m_data = 0; /*0x46d894*/
  this->nifModel.m_bufLen = 0; /*0x46d897*/
  this->nifModel.m_dataLen = 0; /*0x46d89b*/
}
