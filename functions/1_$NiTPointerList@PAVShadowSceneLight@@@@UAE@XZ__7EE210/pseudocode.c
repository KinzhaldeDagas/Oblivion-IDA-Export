void __thiscall NiTPointerList<ShadowSceneLight *>::~NiTPointerList<ShadowSceneLight *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *>::`vftable'; /*0x7ee238*/
  NiTPointerList::FreeAllNodes(this); /*0x7ee246*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,ShadowSceneLight *>::`vftable'; /*0x7ee24b*/
}
