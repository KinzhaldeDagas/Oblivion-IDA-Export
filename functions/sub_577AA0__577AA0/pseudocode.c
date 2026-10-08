void __thiscall sub_577AA0(NiTPointerList__BSImageSpaceShader *this)
{
  NiPointerList_Node_BSImageSpaceShader *start; // eax
  NiPointerList_Node_BSImageSpaceShader *next; // ecx
  bool v4; // zf
  NiTPointerList__BSImageSpaceShader *data; // edi

  while ( this->numItems ) /*0x577aca*/
  {
    start = this->start; /*0x577ad7*/
    next = start->next; /*0x577ada*/
    v4 = start->next == 0; /*0x577adc*/
    this->start = start->next; /*0x577ade*/
    if ( v4 ) /*0x577ae1*/
      this->end = 0; /*0x577ae8*/
    else
      next->prev = 0; /*0x577ae3*/
    data = (NiTPointerList__BSImageSpaceShader *)start->data; /*0x577aed*/
    this->__vftable->FreeNode(this, (Node *)start); /*0x577af6*/
    --this->numItems; /*0x577af8*/
    if ( data ) /*0x577afe*/
    {
      sub_5777A0(data); /*0x577b02*/
      FormHeapFree((unsigned int)data); /*0x577b08*/
    }
  }
  NiTList<FontManager::TextPage *>::~NiTList<FontManager::TextPage *>(this); /*0x577b1f*/
}
