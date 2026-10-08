// OFE ownership verification: direct callers 6B9335 (post-response), 6B93DF (initialize), 6B94F6 (manager destruction). Native skips freeing isInfoGeneral MenuTopics; custom SayOnce/noncached rumor objects need explicit ownership cleanup after their nodes are removed. Never free an actor-owned cached object here.
void __thiscall MenuTopicManager::ClearData(MenuTopicManagerView *this, bool clearAll)
{
  MenuTopicNode *p_firstTopic; // esi
  MenuTopicView *item; // edi
  MenuTopicNode *next; // eax

  this->currentTopicNode = 0; /*0x6b9256*/
  p_firstTopic = (MenuTopicNode *)&this->firstTopic; /*0x6b925c*/
  if ( !clearAll ) /*0x6b925f*/
  {
    if ( this == (MenuTopicManagerView *)0xFFFFFFFC ) /*0x6b9263*/
      return; /*0x6b9263*/
    p_firstTopic = this->nextTopicNode; /*0x6b9265*/
  }
  if ( p_firstTopic ) /*0x6b926a*/
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)p_firstTopic) ) /*0x6b9279*/
    {
      item = p_firstTopic->item; /*0x6b927b*/
      if ( !p_firstTopic->item->isInfoGeneralTopic ) /*0x6b927d*/
      {
        if ( item ) /*0x6b9284*/
        {
          MenuTopic::Destroy(p_firstTopic->item); /*0x6b9288*/
          FormHeapFree((unsigned int)item); /*0x6b928e*/
        }
      }
      next = p_firstTopic->next; /*0x6b9296*/
      if ( next ) /*0x6b929b*/
      {
        p_firstTopic->next = next->next; /*0x6b92a0*/
        p_firstTopic->item = next->item; /*0x6b92a6*/
        FormHeapFree((unsigned int)next); /*0x6b92a8*/
      }
      else
      {
        p_firstTopic->item = 0; /*0x6b92b2*/
      }
    }
  }
}
