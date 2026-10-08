// GoToTopic(index) is indexed relative to the first node after the greeting head.
bool __thiscall MenuTopicManager::GoToTopic(MenuTopicManagerView *this, int topicIndex)
{
  int v2; // edx
  MenuTopicNode *nextTopicNode; // eax

  v2 = 0; /*0x6b8613*/
  if ( this == (MenuTopicManagerView *)0xFFFFFFFC ) /*0x6b8618*/
    return 0; /*0x6b8618*/
  nextTopicNode = this->nextTopicNode; /*0x6b861a*/
  if ( !nextTopicNode ) /*0x6b861f*/
    return 0; /*0x6b861f*/
  while ( v2 < topicIndex ) /*0x6b8627*/
  {
    nextTopicNode = nextTopicNode->next; /*0x6b8629*/
    ++v2; /*0x6b862c*/
    if ( !nextTopicNode ) /*0x6b8631*/
      return 0; /*0x6b8631*/
  }
  this->currentTopicNode = nextTopicNode; /*0x6b863d*/
  return nextTopicNode->item != 0; /*0x6b8644*/
}
