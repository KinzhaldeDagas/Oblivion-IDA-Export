NiPointerList_Node_BSImageSpaceShader *__thiscall AddImageSpaceShader(
        NiTPointerList__BSImageSpaceShader *this,
        BSShader *a2)
{
  NiPointerList_Node_BSImageSpaceShader *result; // eax
  NiPointerList_Node_BSImageSpaceShader *end; // ecx

  result = this->__vftable->AllocateNode(this);
  result->data = (BSImageSpaceShader *)a2;
  result->next = 0;
  result->prev = this->end;
  end = this->end;
  if ( end )
  {
    end->next = result;
    ++this->numItems;
  }
  else
  {
    ++this->numItems;
    this->start = result;
  }
  this->end = result;
  return result;
}
