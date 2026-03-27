void __thiscall RepairMenu::RepairMenuList::~RepairMenuList(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>::`vftable';
}
