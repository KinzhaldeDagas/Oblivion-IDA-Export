void __thiscall DialogueResponse::Destroy(DialogueResponse *this)
{
  FormHeapFree((unsigned int)this->voicePath.m_data); /*0x6b8079*/
  this->voicePath.m_data = 0; /*0x6b8080*/
  this->voicePath.m_bufLen = 0; /*0x6b8083*/
  this->voicePath.m_dataLen = 0; /*0x6b8087*/
  FormHeapFree((unsigned int)this->displayText.m_data); /*0x6b808e*/
  this->displayText.m_data = 0; /*0x6b8096*/
  this->displayText.m_bufLen = 0; /*0x6b8098*/
  this->displayText.m_dataLen = 0; /*0x6b809c*/
}
