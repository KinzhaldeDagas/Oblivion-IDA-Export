// ImprovedShaders hook target: AddImageSpaceShader(this=list, arg0=BSImageSpaceShader*). Hook calls native trampoline, then appends paired HDR(0x08)/Blur-Bloom(0x07) shader if absent.
NiPointerList_Node_BSImageSpaceShader *__thiscall AddImageSpaceShader(
        NiTPointerList__BSImageSpaceShader *this,
        BSShader *a2)
{
  NiPointerList_Node_BSImageSpaceShader *result; // eax
  NiPointerList_Node_BSImageSpaceShader *end; // ecx

  result = this->__vftable->AllocateNode(this); /*0x803798*/
  result->data = (BSImageSpaceShader *)a2; /*0x80379e*/
  result->next = 0; /*0x8037a1*/
  result->prev = this->end; /*0x8037aa*/
  end = this->end; /*0x8037ad*/
  if ( end ) /*0x8037b2*/
  {
    end->next = result; /*0x8037b4*/
    ++this->numItems; /*0x8037b6*/
  }
  else
  {
    ++this->numItems; /*0x8037c1*/
    this->start = result; /*0x8037c5*/
  }
  this->end = result; /*0x8037ba*/
  return result; /*0x8037bd*/
}
