void __thiscall NiTPointerList::FreeAllNodes(NiTPointerList__BSImageSpaceShader *this)
{
  NiPointerList_Node_BSImageSpaceShader *start; // esi
  NiPointerList_Node_BSImageSpaceShader *v3; // eax

  start = this->start;
  while ( start )
  {
    v3 = start;
    start = start->next;
    this->__vftable->FreeNode(this, (Node *)v3);
  }
  this->numItems = 0;
  this->start = 0;
  this->end = 0;
}
