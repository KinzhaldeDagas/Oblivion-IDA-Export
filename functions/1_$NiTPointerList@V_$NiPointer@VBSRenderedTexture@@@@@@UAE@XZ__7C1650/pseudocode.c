void __thiscall NiTPointerList<NiPointer<BSRenderedTexture>>::~NiTPointerList<NiPointer<BSRenderedTexture>>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<BSRenderedTexture>>::`vftable';
}
