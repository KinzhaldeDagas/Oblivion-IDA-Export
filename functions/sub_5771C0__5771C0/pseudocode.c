void __thiscall sub_5771C0(NiTPointerList__BSImageSpaceShader *this)
{
  NiPointerList_Node_BSImageSpaceShader *start; // eax
  NiPointerList_Node_BSImageSpaceShader *next; // ecx
  bool v4; // zf
  unsigned int data; // edi

  while ( this->numItems )
  {
    start = this->start;
    next = start->next;
    v4 = start->next == 0;
    this->start = start->next;
    if ( v4 )
      this->end = 0;
    else
      next->prev = 0;
    data = (unsigned int)start->data;
    this->__vftable->FreeNode(this, (Node *)start);
    --this->numItems;
    if ( data )
    {
      FormHeapFree(*(_DWORD *)(data + 0x1C));
      *(_DWORD *)(data + 0x1C) = 0;
      *(_WORD *)(data + 0x22) = 0;
      *(_WORD *)(data + 0x20) = 0;
      FormHeapFree(data);
    }
  }
  NiTList<FontManager::CharData *>::~NiTList<FontManager::CharData *>(this);
}
