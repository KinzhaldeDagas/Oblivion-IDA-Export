NiTPointerList_Node_void *__thiscall sub_5B1E20(BSTextureManager *this, void **a2)
{
  NiTPointerList_Node_void *result; // eax
  NiTPointerList_Node_void *end; // ecx

  result = (NiTPointerList_Node_void *)(*((int (__thiscall **)(BSTextureManager *))this->unk00.__vftable + 1))(this);
  result->data = *a2;
  result->next = 0;
  result->prev = this->unk00.end;
  end = this->unk00.end;
  if ( end )
  {
    end->next = result;
    ++this->unk00.numItems;
  }
  else
  {
    ++this->unk00.numItems;
    this->unk00.start = result;
  }
  this->unk00.end = result;
  return result;
}
