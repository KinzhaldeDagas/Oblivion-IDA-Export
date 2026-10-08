// Modern post-load fixup walks loaded DialogueItems and resolves only each saved speaker FormID.
void __thiscall Conversation::InitLoadGame(ConversationView *this)
{
  ConversationView *i; // esi

  for ( i = this; i; i = (ConversationView *)i->nextItemNode ) /*0x6b7b65*/
  {
    if ( !i->nextItemNode && !i->firstItem ) /*0x6b7b6d*/
      break; /*0x6b7b70*/
    DialogueItem::InitLoadGame(i->firstItem); /*0x6b7b74*/
  }
}
