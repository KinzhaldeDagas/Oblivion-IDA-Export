void __thiscall sub_5771C0(NiTPointerList__BSImageSpaceShader *this)
{
  NiPointerList_Node_BSImageSpaceShader *start; // eax
  NiPointerList_Node_BSImageSpaceShader *next; // ecx
  bool v4; // zf
  unsigned int data; // edi

  while ( this->numItems ) /*0x5771ea*/
  {
    start = this->start; /*0x5771f7*/
    next = start->next; /*0x5771fa*/
    v4 = start->next == 0; /*0x5771fc*/
    this->start = start->next; /*0x5771fe*/
    if ( v4 ) /*0x577201*/
      this->end = 0; /*0x577208*/
    else
      next->prev = 0; /*0x577203*/
    data = (unsigned int)start->data; /*0x57720d*/
    this->__vftable->FreeNode(this, (Node *)start); /*0x577216*/
    --this->numItems; /*0x577218*/
    if ( data ) /*0x57721e*/
    {
      FormHeapFree(*(_DWORD *)(data + 0x1C)); /*0x577224*/
      *(_DWORD *)(data + 0x1C) = 0; /*0x57722a*/
      *(_WORD *)(data + 0x22) = 0; /*0x57722d*/
      *(_WORD *)(data + 0x20) = 0; /*0x577231*/
      FormHeapFree(data); /*0x577235*/
    }
  }
  NiTList<FontManager::CharData *>::~NiTList<FontManager::CharData *>(this); /*0x57724c*/
}
