// Compiler-folded cursor setter shared by Conversation::SetCurrentItem and DialogueItem::SetCurrentResponse; both containers start with the same head/next/current-node layout.
DialogueListNodeView *__thiscall DialogueListCursor::SetCurrent(DialogueListCursorView *this, void *item)
{
  DialogueListNodeView *result; // eax
  struct DialogueListNodeView *next; // edx

  result = (DialogueListNodeView *)this; /*0x6b74f2*/
  if ( this ) /*0x6b74f4*/
  {
    do /*0x6b7500*/
    {
      next = result->next; /*0x6b7500*/
      if ( !next && !result->item ) /*0x6b7507*/
        break; /*0x6b7507*/
      if ( item == result->item ) /*0x6b750d*/
      {
        this->currentNode = result; /*0x6b7519*/
        return result; /*0x6b7519*/
      }
      result = result->next; /*0x6b750f*/
    }
    while ( next ); /*0x6b7500*/
  }
  return result; /*0x6b7516*/
}
