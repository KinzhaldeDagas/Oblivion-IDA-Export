void __thiscall NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>>::`vftable';
}
