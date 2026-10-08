void __thiscall TESResponse::Destroy(TESResponse *this)
{
  FormHeapFree((unsigned int)this->responseText.m_data); /*0x52e1c7*/
  this->responseText.m_data = 0; /*0x52e1d1*/
  this->responseText.m_bufLen = 0; /*0x52e1d4*/
  this->responseText.m_dataLen = 0; /*0x52e1d8*/
}
