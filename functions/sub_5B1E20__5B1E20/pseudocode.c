// Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
NiTPointerList_Node_void *__thiscall sub_5B1E20(BSTextureManager *this, void **a2)
{
  NiTPointerList_Node_void *result; // eax
  NiTPointerList_Node_void *end; // ecx

  result = (NiTPointerList_Node_void *)(*((int (__thiscall **)(BSTextureManager *))this->unk00.__vftable + 1))(this); /*0x5b1e28*/
  result->data = *a2; /*0x5b1e30*/
  result->next = 0; /*0x5b1e33*/
  result->prev = this->unk00.end; /*0x5b1e3c*/
  end = this->unk00.end; /*0x5b1e3f*/
  if ( end ) /*0x5b1e44*/
  {
    end->next = result; /*0x5b1e46*/
    ++this->unk00.numItems; /*0x5b1e48*/
  }
  else
  {
    ++this->unk00.numItems; /*0x5b1e53*/
    this->unk00.start = result; /*0x5b1e57*/
  }
  this->unk00.end = result; /*0x5b1e4c*/
  return result; /*0x5b1e4f*/
}
