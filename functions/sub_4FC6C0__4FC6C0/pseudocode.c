void __thiscall sub_4FC6C0(BSSimpleList_VoidPtr *this)
{
  BSSimpleList_VoidPtr *v1; // edi
  unsigned int data; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  v1 = this + 9;
  if ( this != (BSSimpleList_VoidPtr *)0xFFFFFFB8 )
  {
    while ( !BSSimpleList_IsEmpty(v1) )
    {
      data = (unsigned int)v1->firstNode.data;
      if ( v1->firstNode.data )
      {
        FormHeapFree(*(_DWORD *)(data + 0x18));
        *(_DWORD *)(data + 0x18) = 0;
        *(_WORD *)(data + 0x1E) = 0;
        *(_WORD *)(data + 0x1C) = 0;
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
