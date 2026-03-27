void __thiscall sub_529760(BSSimpleList_VoidPtr *this)
{
  BSSimpleList_VoidPtr *v1; // esi
  unsigned int data; // edi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  v1 = this + 8;
  if ( this != (BSSimpleList_VoidPtr *)0xFFFFFFC0 )
  {
    while ( !BSSimpleList_IsEmpty(v1) )
    {
      data = (unsigned int)v1->firstNode.data;
      if ( v1->firstNode.data )
      {
        sub_52B300(v1->firstNode.data);
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
