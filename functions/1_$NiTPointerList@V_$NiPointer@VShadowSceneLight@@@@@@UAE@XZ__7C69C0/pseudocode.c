void __thiscall NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>>::`vftable'; /*0x7c69e8*/
  NiTPointerList::FreeAllNodes(this); /*0x7c69f6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight>>::`vftable'; /*0x7c69fb*/
}
