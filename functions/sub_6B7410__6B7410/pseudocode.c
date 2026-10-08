// Initializes an empty 0x10 ConversationView: clears item list, current-item cursor, and reserved +0x0C state. Used before modern serialized load.
ConversationView *__thiscall Conversation::InitializeEmpty(ConversationView *this)
{
  this->firstItem = 0; /*0x6b7414*/
  this->nextItemNode = 0; /*0x6b7416*/
  this->unk0C = 0; /*0x6b7419*/
  this->currentItemNode = 0; /*0x6b741c*/
  return this; /*0x6b741f*/
}
