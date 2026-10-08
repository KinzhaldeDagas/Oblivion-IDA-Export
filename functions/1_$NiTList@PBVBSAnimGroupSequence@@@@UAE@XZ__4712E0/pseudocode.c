void __thiscall NiTList<BSAnimGroupSequence const *>::~NiTList<BSAnimGroupSequence const *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::`vftable'; /*0x471308*/
  NiTPointerList::FreeAllNodes(this); /*0x471316*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::`vftable'; /*0x47131b*/
}
