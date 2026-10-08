void __thiscall NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *>::`vftable'; /*0x54bc78*/
  NiTPointerList::FreeAllNodes(this); /*0x54bc86*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *>::`vftable'; /*0x54bc8b*/
}
