void __thiscall NiTPointerList<NiPointer<NiAVObject>>::~NiTPointerList<NiPointer<NiAVObject>>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>>::`vftable'; /*0x7d5418*/
  NiTPointerList::FreeAllNodes(this); /*0x7d5426*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>>::`vftable'; /*0x7d542b*/
}
