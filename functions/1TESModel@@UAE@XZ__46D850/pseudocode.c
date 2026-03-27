void __thiscall TESModel::~TESModel(TESModel *this)
{
  this->vtbl = (TESModelVtbl *)&TESModel::`vftable';
  if ( this->unk14 )
  {
    FormHeapFree((unsigned int)this->unk14);
    this->unk14 = 0;
  }
  this->unk10 = 0;
  if ( this->unk14 )
  {
    FormHeapFree((unsigned int)this->unk14);
    this->unk14 = 0;
  }
  this->unk10 = 0;
  FormHeapFree((unsigned int)this->nifModel.m_data);
  this->nifModel.m_data = 0;
  this->nifModel.m_bufLen = 0;
  this->nifModel.m_dataLen = 0;
}
