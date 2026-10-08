void __thiscall sub_5777A0(NiTPointerList__BSImageSpaceShader *this)
{
  NiPointerList_Node_BSImageSpaceShader *start; // eax
  NiPointerList_Node_BSImageSpaceShader *next; // ecx
  bool v4; // zf
  NiTPointerList__BSImageSpaceShader *data; // edi

  while ( this->numItems ) /*0x5777ca*/
  {
    start = this->start; /*0x5777d7*/
    next = start->next; /*0x5777da*/
    v4 = start->next == 0; /*0x5777dc*/
    this->start = start->next; /*0x5777de*/
    if ( v4 ) /*0x5777e1*/
      this->end = 0; /*0x5777e8*/
    else
      next->prev = 0; /*0x5777e3*/
    data = (NiTPointerList__BSImageSpaceShader *)start->data; /*0x5777ed*/
    this->__vftable->FreeNode(this, (Node *)start); /*0x5777f6*/
    --this->numItems; /*0x5777f8*/
    if ( data ) /*0x5777fe*/
    {
      sub_5771C0(data); /*0x577802*/
      FormHeapFree((unsigned int)data); /*0x577808*/
    }
  }
  NiTList<FontManager::TextLine *>::~NiTList<FontManager::TextLine *>(this); /*0x57781f*/
}
