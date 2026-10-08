// Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
void __thiscall NiTPointerList::FreeAllNodes(NiTPointerList__BSImageSpaceShader *this)
{
  NiPointerList_Node_BSImageSpaceShader *start; // esi
  NiPointerList_Node_BSImageSpaceShader *v3; // eax

  start = this->start; /*0x573884*/
  while ( start ) /*0x573889*/
  {
    v3 = start; /*0x573892*/
    start = start->next; /*0x573894*/
    this->__vftable->FreeNode(this, (Node *)v3); /*0x57389c*/
  }
  this->numItems = 0; /*0x5738a2*/
  this->start = 0; /*0x5738a9*/
  this->end = 0; /*0x5738b0*/
}
