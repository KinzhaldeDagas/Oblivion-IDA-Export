// FirstTopic(abSkipGreeting). Sets the cursor to the inline head node; when skipGreeting is true it advances once, so callers render/select ordinary TOPIC choices without replaying the greeting.
bool __thiscall MenuTopicManager::FirstTopic(MenuTopicManagerView *this, bool skipGreeting)
{
  MenuTopicNode *currentTopicNode; // ecx

  this->currentTopicNode = (MenuTopicNode *)&this->firstTopic; /*0x6b85c8*/
  if ( skipGreeting ) /*0x6b85ca*/
  {
    if ( this == (MenuTopicManagerView *)0xFFFFFFFC ) /*0x6b85ce*/
      return 0; /*0x6b85ce*/
    this->currentTopicNode = this->nextTopicNode; /*0x6b85d3*/
  }
  currentTopicNode = this->currentTopicNode; /*0x6b85d5*/
  return currentTopicNode && currentTopicNode->item; /*0x6b85e5*/
}
