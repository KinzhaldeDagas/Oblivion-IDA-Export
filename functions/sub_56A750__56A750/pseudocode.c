void __thiscall sub_56A750(BSSimpleList_VoidPtr *this)
{
  void *data; // edi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  if ( this ) /*0x56a755*/
  {
    while ( !BSSimpleList_IsEmpty(this) ) /*0x56a761*/
    {
      data = this->firstNode.data; /*0x56a763*/
      if ( this->firstNode.data ) /*0x56a763*/
      {
        Shared_NoOpVirtual_60D0A0(this->firstNode.data); /*0x56a76b*/
        FormHeapFree((unsigned int)data); /*0x56a771*/
      }
      next = this->firstNode.next; /*0x56a779*/
      if ( next ) /*0x56a77e*/
      {
        this->firstNode.next = next->next; /*0x56a783*/
        this->firstNode.data = next->data; /*0x56a789*/
        FormHeapFree((unsigned int)next); /*0x56a78b*/
      }
      else
      {
        this->firstNode.data = 0; /*0x56a795*/
      }
    }
  }
}
