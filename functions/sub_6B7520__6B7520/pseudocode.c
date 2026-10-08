SInt16 __thiscall Conversation::GetDialogueItemIndex(ConversationView *this, DialogueItemView *item)
{
  SInt16 result; // ax
  DialogueItemNode *nextItemNode; // edx

  result = 0; /*0x6b7520*/
  if ( this ) /*0x6b7525*/
  {
    do /*0x6b7546*/
    {
      nextItemNode = this->nextItemNode; /*0x6b7530*/
      if ( !nextItemNode && !this->firstItem ) /*0x6b7537*/
        break; /*0x6b7539*/
      if ( item == this->firstItem ) /*0x6b753d*/
        return result; /*0x6b753d*/
      this = (ConversationView *)this->nextItemNode; /*0x6b753f*/
      ++result; /*0x6b7541*/
    }
    while ( nextItemNode ); /*0x6b7546*/
  }
  PrintError("When trying to get a dialogue item index, the dialogue item was not found in the dialogue items list."); /*0x6b754d*/
  return 0; /*0x6b7558*/
}
