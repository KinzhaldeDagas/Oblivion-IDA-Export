DialogueResponse *__thiscall MenuTopic::GetCurrentResponse(MenuTopicView *this)
{
  DialogueResponseNode *currentResponseNode; // eax

  currentResponseNode = this->currentResponseNode; /*0x6b85b0*/
  if ( currentResponseNode ) /*0x6b85b5*/
    return currentResponseNode->item; /*0x6b85b7*/
  else
    return 0; /*0x6b85ba*/
}
