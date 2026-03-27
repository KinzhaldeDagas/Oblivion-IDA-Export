TESTexture *__thiscall TESTexture_constr(TESTexture *this)
{
  this->vtbl = (BaseFormComponentVtbl *)&TESTexture::`vftable';
  this->path.m_data = 0;
  this->path.m_dataLen = 0;
  this->path.m_bufLen = 0;
  FormHeapFree(0);
  this->path.m_data = 0;
  this->path.m_bufLen = 0;
  this->path.m_dataLen = 0;
  return this;
}
