// Compiler-folded cursor getter shared by DialogueItem.response list and Conversation.item list because both begin with the same head/next/cursor layout.
void *__thiscall DialogueListCursor::GetCurrent(DialogueListCursorView *this)
{
  DialogueListNodeView *currentNode; // eax

  currentNode = this->currentNode; /*0x6b7c20*/
  if ( currentNode ) /*0x6b7c25*/
    return currentNode->item; /*0x6b7c27*/
  else
    return 0; /*0x6b7c2a*/
}
