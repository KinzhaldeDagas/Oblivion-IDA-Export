DialogueItemView *__thiscall Conversation::GetDialogueItemByIndex(ConversationView *this, SInt16 index)
{
  ConversationView *v2; // eax
  __int16 v3; // dx
  DialogueItemNode *nextItemNode; // ecx

  v2 = this; /*0x6b7560*/
  v3 = 0; /*0x6b7562*/
  if ( this ) /*0x6b7567*/
  {
    do /*0x6b7570*/
    {
      nextItemNode = v2->nextItemNode; /*0x6b7570*/
      if ( !nextItemNode && !v2->firstItem ) /*0x6b7577*/
        break; /*0x6b7577*/
      if ( v3 == index ) /*0x6b757e*/
        return v2->firstItem; /*0x6b759c*/
      v2 = (ConversationView *)v2->nextItemNode; /*0x6b7580*/
      ++v3; /*0x6b7582*/
    }
    while ( nextItemNode ); /*0x6b7570*/
  }
  PrintError("When trying to get a dialogue item by its index, the index was larger than the size of the dialogue items list."); /*0x6b7589*/
  return 0; /*0x6b7598*/
}
