void __thiscall NiTList<RechargeItemAndIndex *>::~NiTList<RechargeItemAndIndex *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable'; /*0x5ceda8*/
  NiTPointerList::FreeAllNodes(this); /*0x5cedb6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable'; /*0x5cedbb*/
}
