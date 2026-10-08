ConversationView *__thiscall Conversation::Conversation(
        ConversationView *this,
        Actor *speaker,
        TESObjectREFR *target,
        TESTopic *startingTopic,
        int unused)
{
  this->firstItem = 0; /*0x6b742d*/
  this->nextItemNode = 0; /*0x6b742f*/
  this->currentItemNode = 0; /*0x6b7432*/
  TESTopic::CreateConversation(speaker, target, this, startingTopic); /*0x6b743d*/
  return this; /*0x6b7447*/
}
