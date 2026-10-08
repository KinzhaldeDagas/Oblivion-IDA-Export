bool __thiscall Conversation::FirstItem(ConversationView *this)
{
  this->currentItemNode = (DialogueItemNode *)this; /*0x6b74b2*/
  return this->firstItem != 0; /*0x6b74ba*/
}
