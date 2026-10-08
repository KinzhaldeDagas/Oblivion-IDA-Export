void __thiscall NiTPointerList<NiDynamicEffect *>::~NiTPointerList<NiDynamicEffect *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiDynamicEffect *>::`vftable'; /*0x70ae98*/
  NiTPointerList::FreeAllNodes(this); /*0x70aea6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiDynamicEffect *>::`vftable'; /*0x70aeab*/
}
