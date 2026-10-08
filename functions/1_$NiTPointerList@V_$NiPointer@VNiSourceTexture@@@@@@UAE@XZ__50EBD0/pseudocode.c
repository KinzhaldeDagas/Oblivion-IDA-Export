void __thiscall NiTPointerList<NiPointer<NiSourceTexture>>::~NiTPointerList<NiPointer<NiSourceTexture>>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiSourceTexture>>::`vftable'; /*0x50ebf8*/
  NiTPointerList::FreeAllNodes(this); /*0x50ec06*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiSourceTexture>>::`vftable'; /*0x50ec0b*/
}
