UInt16 __thiscall DialogueResponse::GetSaveSize(DialogueResponse *this)
{
  return (unsigned __int8)strlen(this->voicePath.m_data) + (unsigned __int8)strlen(this->displayText.m_data) + 0xA; /*0x6b8496*/
}
