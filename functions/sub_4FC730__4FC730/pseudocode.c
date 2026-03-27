void __thiscall sub_4FC730(Script *this)
{
  BSSimpleList_VoidPtr *p_refList; // edi
  unsigned int data; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  if ( g_executingScript == this )
    g_executingScript = 0;
  p_refList = (BSSimpleList_VoidPtr *)&this->refList;
  if ( this != (Script *)0xFFFFFFC0 )
  {
    while ( !BSSimpleList_IsEmpty(p_refList) )
    {
      data = (unsigned int)p_refList->firstNode.data;
      if ( p_refList->firstNode.data )
      {
        FormHeapFree(*(_DWORD *)data);
        *(_DWORD *)data = 0;
        *(_WORD *)(data + 6) = 0;
        *(_WORD *)(data + 4) = 0;
        FormHeapFree(data);
      }
      next = p_refList->firstNode.next;
      if ( next )
      {
        p_refList->firstNode.next = next->next;
        p_refList->firstNode.data = next->data;
        FormHeapFree((unsigned int)next);
      }
      else
      {
        p_refList->firstNode.data = 0;
      }
    }
  }
}
