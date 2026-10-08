void __thiscall AStarNodeList_dtor(AStarNodeList *this)
{
  this->list.vtable = &NiTPointerListBase<DFALL<AStarNode *>,AStarNode *>::`vftable'; /*0x67e108*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this); /*0x67e116*/
  this->list.vtable = &NiTListBase<DFALL<AStarNode *>,AStarNode *>::`vftable'; /*0x67e11b*/
}
