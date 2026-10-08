DialogueResponse *__thiscall DialogueResponse::InitializeEmpty(DialogueResponse *this)
{
  this->displayText.m_data = 0; /*0x6b8394*/
  this->displayText.m_dataLen = 0; /*0x6b8396*/
  this->displayText.m_bufLen = 0; /*0x6b839a*/
  this->voicePath.m_data = 0; /*0x6b839e*/
  this->voicePath.m_dataLen = 0; /*0x6b83a1*/
  this->voicePath.m_bufLen = 0; /*0x6b83a5*/
  return this; /*0x6b83a9*/
}
