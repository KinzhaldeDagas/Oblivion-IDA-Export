MenuTopicView *__thiscall MenuTopicManager::GetCurrentTopic(MenuTopicManagerView *this)
{
  if ( this->currentTopicNode ) /*0x6b8650*/
    return this->currentTopicNode->item; /*0x6b8656*/
  else
    return 0; /*0x6b8659*/
}
