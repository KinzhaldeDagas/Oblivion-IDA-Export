void __thiscall Conversation::Destroy(ConversationView *this)
{
  DialogueItemView *firstItem; // edi
  DialogueItemNode *nextItemNode; // eax

  if ( this ) /*0x6b7455*/
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)this) ) /*0x6b7461*/
    {
      firstItem = this->firstItem; /*0x6b7463*/
      if ( this->firstItem ) /*0x6b7463*/
      {
        DialogueItem::Destroy(this->firstItem); /*0x6b746b*/
        FormHeapFree((unsigned int)firstItem); /*0x6b7471*/
      }
      nextItemNode = this->nextItemNode; /*0x6b7479*/
      if ( nextItemNode ) /*0x6b747e*/
      {
        this->nextItemNode = nextItemNode->next; /*0x6b7483*/
        this->firstItem = nextItemNode->item; /*0x6b7489*/
        FormHeapFree((unsigned int)nextItemNode); /*0x6b748b*/
      }
      else
      {
        this->firstItem = 0; /*0x6b7495*/
      }
    }
  }
  this->currentItemNode = 0; /*0x6b749e*/
}
