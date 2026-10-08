void __thiscall NiTPointerList<NiPointer<AverageEntry>>::~NiTPointerList<NiPointer<AverageEntry>>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::`vftable'; /*0x6b9688*/
  NiTPointerList::FreeAllNodes(this); /*0x6b9696*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::`vftable'; /*0x6b969b*/
}
