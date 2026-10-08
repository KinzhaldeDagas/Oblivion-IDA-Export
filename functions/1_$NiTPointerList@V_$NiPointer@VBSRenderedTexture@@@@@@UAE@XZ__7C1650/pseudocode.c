void __thiscall NiTPointerList<NiPointer<BSRenderedTexture>>::~NiTPointerList<NiPointer<BSRenderedTexture>>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>>::`vftable'; /*0x7c1678*/
  NiTPointerList::FreeAllNodes(this); /*0x7c1686*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>>::`vftable'; /*0x7c168b*/
}
