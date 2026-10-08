// Ordinary MenuTopics destroy every DialogueResponse. INFOGENERAL skips response destruction here because ExtraInfoGeneralTopic owns the cached object; that owner's destructor clears isInfoGeneralTopic first, then calls this routine for full cleanup.
void __thiscall MenuTopic::Destroy(MenuTopicView *this)
{
  DialogueResponse **p_firstResponse; // esi
  DialogueResponse *v3; // edi
  DialogueResponseNode *nextResponseNode; // eax

  if ( !this->isInfoGeneralTopic ) /*0x6b8f7a*/
  {
    p_firstResponse = &this->firstResponse; /*0x6b8f88*/
    if ( this != (MenuTopicView *)0xFFFFFFF4 ) /*0x6b8f8d*/
    {
      while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&this->firstResponse) ) /*0x6b8f99*/
      {
        v3 = *p_firstResponse; /*0x6b8f9b*/
        if ( *p_firstResponse ) /*0x6b8f9b*/
        {
          DialogueResponse::Destroy(*p_firstResponse); /*0x6b8fa3*/
          FormHeapFree((unsigned int)v3); /*0x6b8fa9*/
        }
        nextResponseNode = this->nextResponseNode; /*0x6b8fb1*/
        if ( nextResponseNode ) /*0x6b8fb6*/
        {
          this->nextResponseNode = nextResponseNode->next; /*0x6b8fbb*/
          *p_firstResponse = nextResponseNode->item; /*0x6b8fc1*/
          FormHeapFree((unsigned int)nextResponseNode); /*0x6b8fc3*/
        }
        else
        {
          *p_firstResponse = 0; /*0x6b8fcd*/
        }
      }
    }
  }
  FormHeapFree((unsigned int)this->displayName.m_data); /*0x6b8fd9*/
  this->displayName.m_data = 0; /*0x6b8fe1*/
  this->displayName.m_bufLen = 0; /*0x6b8fe8*/
  this->displayName.m_dataLen = 0; /*0x6b8fee*/
}
