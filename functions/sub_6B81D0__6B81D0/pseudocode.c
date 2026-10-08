void __thiscall DialogueItem::Destroy(DialogueItemView *this)
{
  DialogueResponse *firstResponse; // esi
  DialogueResponseNode *nextResponseNode; // eax

  if ( this ) /*0x6b81fa*/
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)this) ) /*0x6b8209*/
    {
      firstResponse = this->firstResponse; /*0x6b820b*/
      if ( this->firstResponse ) /*0x6b820b*/
      {
        FormHeapFree((unsigned int)firstResponse->voicePath.m_data); /*0x6b8215*/
        firstResponse->voicePath.m_data = 0; /*0x6b821a*/
        firstResponse->voicePath.m_bufLen = 0; /*0x6b821d*/
        firstResponse->voicePath.m_dataLen = 0; /*0x6b8221*/
        FormHeapFree((unsigned int)firstResponse->displayText.m_data); /*0x6b8228*/
        firstResponse->displayText.m_data = 0; /*0x6b822e*/
        firstResponse->displayText.m_bufLen = 0; /*0x6b8230*/
        firstResponse->displayText.m_dataLen = 0; /*0x6b8234*/
        FormHeapFree((unsigned int)firstResponse); /*0x6b8238*/
      }
      nextResponseNode = this->nextResponseNode; /*0x6b8240*/
      if ( nextResponseNode ) /*0x6b8245*/
      {
        this->nextResponseNode = nextResponseNode->next; /*0x6b824a*/
        this->firstResponse = nextResponseNode->item; /*0x6b8250*/
        FormHeapFree((unsigned int)nextResponseNode); /*0x6b8252*/
      }
      else
      {
        this->firstResponse = 0; /*0x6b825c*/
      }
    }
  }
}
