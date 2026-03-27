void __thiscall sub_6B81D0(BSSimpleList_VoidPtr *this)
{
  unsigned int data; // esi
  unsigned int *next; // eax

  if ( this )
  {
    while ( !BSSimpleList_IsEmpty(this) )
    {
      data = (unsigned int)this->firstNode.data;
      if ( this->firstNode.data )
      {
        FormHeapFree(*(_DWORD *)(data + 0x10));
        *(_DWORD *)(data + 0x10) = 0;
        *(_WORD *)(data + 0x16) = 0;
        *(_WORD *)(data + 0x14) = 0;
        FormHeapFree(*(_DWORD *)data);
        *(_DWORD *)data = 0;
        *(_WORD *)(data + 6) = 0;
        *(_WORD *)(data + 4) = 0;
        FormHeapFree(data);
      }
      next = (unsigned int *)this->firstNode.next;
      if ( next )
      {
        this->firstNode.next = (BSSimpleList_VoidPtr::NodeVoid *)next[1];
        this->firstNode.data = (void *)*next;
        FormHeapFree((unsigned int)next);
      }
      else
      {
        this->firstNode.data = 0;
      }
    }
  }
}
