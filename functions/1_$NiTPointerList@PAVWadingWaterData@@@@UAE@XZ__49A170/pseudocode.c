void __thiscall NiTPointerList<WadingWaterData *>::~NiTPointerList<WadingWaterData *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *>::`vftable'; /*0x49a198*/
  NiTPointerList::FreeAllNodes(this); /*0x49a1a6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *>::`vftable'; /*0x49a1ab*/
}
