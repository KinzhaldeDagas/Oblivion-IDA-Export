bool __thiscall MenuTopicManager::NextTopic(MenuTopicManagerView *this)
{
  MenuTopicNode *next; // eax
  bool result; // al

  result = 0; /*0x6b8604*/
  if ( this->currentTopicNode ) /*0x6b85f0*/
  {
    next = this->currentTopicNode->next; /*0x6b85f6*/
    this->currentTopicNode = next; /*0x6b85fb*/
    if ( next ) /*0x6b85fd*/
    {
      if ( next->item ) /*0x6b85ff*/
        return 1; /*0x6b85f4*/
    }
  }
  return result; /*0x6b8609*/
}
