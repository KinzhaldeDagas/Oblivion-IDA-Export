void __thiscall sub_530690(BSSimpleList_VoidPtr *this)
{
  BSSimpleList_VoidPtr *v1; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  v1 = this + 5;
  if ( this != (BSSimpleList_VoidPtr *)0xFFFFFFD8 )
  {
    while ( !BSSimpleList_IsEmpty(v1) )
    {
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
