bool __thiscall DialogueItem::NextResponse(DialogueItemView *this)
{
  DialogueResponseNode *currentResponseNode; // eax

  currentResponseNode = this->currentResponseNode; /*0x6b7c00*/
  if ( currentResponseNode ) /*0x6b7c05*/
    this->currentResponseNode = currentResponseNode->next; /*0x6b7c0a*/
  return this->currentResponseNode != 0; /*0x6b7c15*/
}
