NiTPointerList__BSImageSpaceShader *__thiscall sub_776370(NiTPointerList__BSImageSpaceShader *this, char a2)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiLight *>::`vftable'; /*0x776373*/
  NiTPointerList::FreeAllNodes(this); /*0x776379*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiLight *>::`vftable'; /*0x776383*/
  if ( (a2 & 1) != 0 ) /*0x776389*/
    FormHeapFree((unsigned int)this); /*0x77638c*/
  return this; /*0x776396*/
}
