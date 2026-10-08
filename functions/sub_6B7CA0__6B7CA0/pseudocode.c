DialogueResponse *__thiscall DialogueItem::GetDialogueResponseByIndex(DialogueItemView *this, SInt16 index)
{
  DialogueItemView *v2; // eax
  __int16 v3; // dx
  DialogueResponseNode *nextResponseNode; // ecx

  v2 = this; /*0x6b7ca0*/
  v3 = 0; /*0x6b7ca2*/
  if ( this ) /*0x6b7ca7*/
  {
    do /*0x6b7cb0*/
    {
      nextResponseNode = v2->nextResponseNode; /*0x6b7cb0*/
      if ( !nextResponseNode && !v2->firstResponse ) /*0x6b7cb7*/
        break; /*0x6b7cb7*/
      if ( v3 == index ) /*0x6b7cbe*/
        return v2->firstResponse; /*0x6b7cdc*/
      v2 = (DialogueItemView *)v2->nextResponseNode; /*0x6b7cc0*/
      ++v3; /*0x6b7cc2*/
    }
    while ( nextResponseNode ); /*0x6b7cb0*/
  }
  PrintError( /*0x6b7cc9*/
    "When trying to get a dialogue response by its index, the index was larger than the size of the dialogue responses list.");
  return 0; /*0x6b7cd8*/
}
