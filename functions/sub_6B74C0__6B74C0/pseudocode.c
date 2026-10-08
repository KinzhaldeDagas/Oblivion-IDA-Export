bool __thiscall Conversation::NextItem(ConversationView *this)
{
  DialogueItemNode *currentItemNode; // eax
  DialogueItemNode *v2; // ecx

  currentItemNode = this->currentItemNode; /*0x6b74c0*/
  if ( currentItemNode ) /*0x6b74c5*/
    this->currentItemNode = currentItemNode->next; /*0x6b74ca*/
  v2 = this->currentItemNode; /*0x6b74cd*/
  return v2 && v2->item; /*0x6b74de*/
}
