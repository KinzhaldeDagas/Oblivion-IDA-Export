void __thiscall sub_4FD520(unsigned int *this)
{
  BSSimpleList_VoidPtr *v1; // edi
  unsigned int data; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  v1 = (BSSimpleList_VoidPtr *)(this + 0x11);
  if ( this != (unsigned int *)0xFFFFFFBC )
  {
    while ( !BSSimpleList_IsEmpty(v1) )
    {
      data = (unsigned int)v1->firstNode.data;
      if ( v1->firstNode.data )
      {
        FormHeapFree(*(_DWORD *)data);
        *(_DWORD *)data = 0;
        *(_WORD *)(data + 6) = 0;
        *(_WORD *)(data + 4) = 0;
        FormHeapFree(data);
      }
      next = v1->firstNode.next;
      if ( next )
      {
        v1->firstNode.next = next->next;
        v1->firstNode.data = next->data;
        FormHeapFree((unsigned int)next);
      }
      else
      {
        v1->firstNode.data = 0;
      }
    }
  }
}
