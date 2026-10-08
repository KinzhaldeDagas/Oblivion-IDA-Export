void __thiscall sub_4FD580(unsigned int *this)
{
  BSSimpleList_VoidPtr *v1; // edi
  unsigned int data; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  v1 = (BSSimpleList_VoidPtr *)(this + 0xF); /*0x4fd582*/
  if ( this != (unsigned int *)0xFFFFFFC4 ) /*0x4fd589*/
  {
    while ( !BSSimpleList_IsEmpty(v1) ) /*0x4fd599*/
    {
      data = (unsigned int)v1->firstNode.data; /*0x4fd59b*/
      if ( v1->firstNode.data ) /*0x4fd59b*/
      {
        FormHeapFree(*(_DWORD *)(data + 0x18)); /*0x4fd5a5*/
        *(_DWORD *)(data + 0x18) = 0; /*0x4fd5ab*/
        *(_WORD *)(data + 0x1E) = 0; /*0x4fd5ae*/
        *(_WORD *)(data + 0x1C) = 0; /*0x4fd5b2*/
        FormHeapFree(data); /*0x4fd5b6*/
      }
      next = v1->firstNode.next; /*0x4fd5be*/
      if ( next ) /*0x4fd5c3*/
      {
        v1->firstNode.next = next->next; /*0x4fd5c8*/
        v1->firstNode.data = next->data; /*0x4fd5ce*/
        FormHeapFree((unsigned int)next); /*0x4fd5d0*/
      }
      else
      {
        v1->firstNode.data = 0; /*0x4fd5da*/
      }
    }
  }
}
