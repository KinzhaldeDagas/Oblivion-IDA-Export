bool __thiscall MenuTopic::NextResponse(MenuTopicView *this)
{
  DialogueResponseNode *currentResponseNode; // eax
  DialogueResponseNode *v2; // ecx

  currentResponseNode = this->currentResponseNode; /*0x6b8580*/
  if ( currentResponseNode ) /*0x6b8585*/
    this->currentResponseNode = currentResponseNode->next; /*0x6b858a*/
  v2 = this->currentResponseNode; /*0x6b858d*/
  return v2 && v2->item; /*0x6b859e*/
}
