// Verified AStarWorldNodeList destructor resets the NiTPointerListBase vtable, frees all list-link nodes through NiTPointerList::FreeAllNodes, then resets the base list vtable; AStarWorldNode records themselves are stored in the separate transient state table.
void __thiscall AStarWorldNodeList::~AStarWorldNodeList(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`vftable'; /*0x67fb38*/
  NiTPointerList::FreeAllNodes(this); /*0x67fb46*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`vftable'; /*0x67fb4b*/
}
