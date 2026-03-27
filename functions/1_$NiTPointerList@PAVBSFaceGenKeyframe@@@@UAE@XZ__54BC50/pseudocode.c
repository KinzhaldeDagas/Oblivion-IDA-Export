void __thiscall NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *>::`vftable';
}
