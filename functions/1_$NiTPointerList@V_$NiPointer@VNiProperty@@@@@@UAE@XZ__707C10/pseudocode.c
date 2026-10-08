void __thiscall NiTPointerList<NiPointer<NiProperty>>::~NiTPointerList<NiPointer<NiProperty>>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>>::`vftable'; /*0x707c38*/
  NiTPointerList::FreeAllNodes(this); /*0x707c46*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiProperty>>::`vftable'; /*0x707c4b*/
}
