// DialogueResponse constructor (0x18 bytes): owns copied display text at +0x00, copies only the first 8 bytes of TESResponse.TRDT to +0x08 (not a BSString), and owns the generated voice path at +0x10.
DialogueResponse *__thiscall DialogueResponse::DialogueResponse(
        DialogueResponse *this,
        TESQuest *ownerQuest,
        TESTopic *topic,
        OblivionTopicInfo *info,
        TESObjectREFR *speaker,
        TESResponse *responseData)
{
  BSStringT *p_voicePath; // edi
  const char *Text; // eax

  this->displayText.m_data = 0; /*0x6b83dc*/
  this->displayText.m_dataLen = 0; /*0x6b83de*/
  this->displayText.m_bufLen = 0; /*0x6b83e2*/
  p_voicePath = &this->voicePath; /*0x6b83e6*/
  this->voicePath.m_data = 0; /*0x6b83ed*/
  this->voicePath.m_dataLen = 0; /*0x6b83ef*/
  this->voicePath.m_bufLen = 0; /*0x6b83f3*/
  if ( responseData ) /*0x6b8402*/
  {
    Text = TESResponse::GetText(responseData); /*0x6b8407*/
    BSStringT_Set(&this->displayText, Text, 0); /*0x6b840f*/
    *(_QWORD *)this->trdtPrefix = *(_QWORD *)responseData->trdt; /*0x6b841b*/
    GenerateVoiceAudioString(responseData->trdt, speaker, ownerQuest, topic, &info->super, p_voicePath); /*0x6b8436*/
  }
  return this; /*0x6b843d*/
}
