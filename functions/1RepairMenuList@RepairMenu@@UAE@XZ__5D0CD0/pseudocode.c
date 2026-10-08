void __thiscall RepairMenu::RepairMenuList::~RepairMenuList(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>::`vftable'; /*0x5d0cf8*/
  NiTPointerList::FreeAllNodes(this); /*0x5d0d06*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>::`vftable'; /*0x5d0d0b*/
}
