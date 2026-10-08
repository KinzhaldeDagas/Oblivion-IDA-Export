SInt16 __thiscall DialogueItem::GetDialogueResponseIndex(DialogueItemView *this, DialogueResponse *response)
{
  SInt16 result; // ax
  DialogueResponseNode *nextResponseNode; // edx

  result = 0; /*0x6b7c60*/
  if ( this ) /*0x6b7c65*/
  {
    do /*0x6b7c86*/
    {
      nextResponseNode = this->nextResponseNode; /*0x6b7c70*/
      if ( !nextResponseNode && !this->firstResponse ) /*0x6b7c77*/
        break; /*0x6b7c79*/
      if ( response == this->firstResponse ) /*0x6b7c7d*/
        return result; /*0x6b7c7d*/
      this = (DialogueItemView *)this->nextResponseNode; /*0x6b7c7f*/
      ++result; /*0x6b7c81*/
    }
    while ( nextResponseNode ); /*0x6b7c86*/
  }
  PrintError("When trying to get a dialogue response index, the dialogue item was not found in the dialogue responses list."); /*0x6b7c8d*/
  return 0; /*0x6b7c98*/
}
