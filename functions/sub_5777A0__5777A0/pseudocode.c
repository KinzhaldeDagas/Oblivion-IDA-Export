void __thiscall sub_5777A0(NiTPointerList__BSImageSpaceShader *this)
{
  NiPointerList_Node_BSImageSpaceShader *start; // eax
  NiPointerList_Node_BSImageSpaceShader *next; // ecx
  bool v4; // zf
  NiTPointerList__BSImageSpaceShader *data; // edi

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
    data = (NiTPointerList__BSImageSpaceShader *)start->data;
    this->__vftable->FreeNode(this, (Node *)start);
    --this->numItems;
    if ( data )
    {
      sub_5771C0(data);
      FormHeapFree((unsigned int)data);
    }
  }
  NiTList<FontManager::TextLine *>::~NiTList<FontManager::TextLine *>(this);
}
