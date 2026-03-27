void __thiscall NiTList<RechargeItemAndIndex *>::~NiTList<RechargeItemAndIndex *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable';
}
