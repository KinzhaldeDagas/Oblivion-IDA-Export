void __thiscall NiTPointerList<NiImageReader *>::~NiTPointerList<NiImageReader *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiImageReader *>::`vftable'; /*0x71f6c8*/
  NiTPointerList::FreeAllNodes(this); /*0x71f6d6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *>::`vftable'; /*0x71f6db*/
}
