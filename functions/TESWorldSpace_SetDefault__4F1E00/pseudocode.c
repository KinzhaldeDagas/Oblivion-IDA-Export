void __thiscall TESWorldSpace::SetDefault(TESWorldSpace *this)
{
  this->parentWorldspace = 0;
  LOBYTE(this->worldFlags) = 0;
  if ( !sub_46B660(this) )
    LOBYTE(this->worldFlags) |= 1u;
  this->climate = 0;
  this->WaterForm = 0;
  FormHeapFree((unsigned int)this->texture.path.m_data);
  this->texture.path.m_data = 0;
  this->texture.path.m_bufLen = 0;
  this->texture.path.m_dataLen = 0;
  this->unk084[0] = 0;
  this->unk084[1] = 0;
  this->unk084[2] = 0;
  this->unk084[3] = 0;
  this->unk084[4] = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
}
