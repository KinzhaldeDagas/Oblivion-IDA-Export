void __thiscall sub_4FD520(unsigned int *this)
{
  BSSimpleList_VoidPtr *v1; // edi
  unsigned int data; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  v1 = (BSSimpleList_VoidPtr *)(this + 0x11); /*0x4fd522*/
  if ( this != (unsigned int *)0xFFFFFFBC ) /*0x4fd529*/
  {
    while ( !BSSimpleList_IsEmpty(v1) ) /*0x4fd539*/
    {
      data = (unsigned int)v1->firstNode.data; /*0x4fd53b*/
      if ( v1->firstNode.data ) /*0x4fd53b*/
      {
        FormHeapFree(*(_DWORD *)data); /*0x4fd544*/
        *(_DWORD *)data = 0; /*0x4fd54a*/
        *(_WORD *)(data + 6) = 0; /*0x4fd54c*/
        *(_WORD *)(data + 4) = 0; /*0x4fd550*/
        FormHeapFree(data); /*0x4fd554*/
      }
      next = v1->firstNode.next; /*0x4fd55c*/
      if ( next ) /*0x4fd561*/
      {
        v1->firstNode.next = next->next; /*0x4fd566*/
        v1->firstNode.data = next->data; /*0x4fd56c*/
        FormHeapFree((unsigned int)next); /*0x4fd56e*/
      }
      else
      {
        v1->firstNode.data = 0; /*0x4fd578*/
      }
    }
  }
}
