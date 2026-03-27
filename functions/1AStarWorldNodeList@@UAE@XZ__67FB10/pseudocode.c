void __thiscall AStarWorldNodeList::~AStarWorldNodeList(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`vftable';
}
