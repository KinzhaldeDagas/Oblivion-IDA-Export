void __thiscall sub_529760(BSSimpleList_VoidPtr *this)
{
  BSSimpleList_VoidPtr *v1; // esi
  char *data; // edi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  v1 = this + 8; /*0x529761*/
  if ( this != (BSSimpleList_VoidPtr *)0xFFFFFFC0 ) /*0x529766*/
  {
    while ( !BSSimpleList_IsEmpty(v1) ) /*0x529779*/
    {
      data = (char *)v1->firstNode.data; /*0x52977b*/
      if ( v1->firstNode.data ) /*0x52977b*/
      {
        sub_52B300((char *)v1->firstNode.data); /*0x529783*/
        FormHeapFree((unsigned int)data); /*0x529789*/
      }
      next = v1->firstNode.next; /*0x529791*/
      if ( next ) /*0x529796*/
      {
        v1->firstNode.next = next->next; /*0x52979b*/
        v1->firstNode.data = next->data; /*0x5297a1*/
        FormHeapFree((unsigned int)next); /*0x5297a3*/
      }
      else
      {
        v1->firstNode.data = 0; /*0x5297ad*/
      }
    }
  }
}
