NiTPointerList__BSImageSpaceShader *__thiscall sub_7753C0(NiTPointerList__BSImageSpaceShader *this, char a2)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'; /*0x7753c3*/
  NiTPointerList::FreeAllNodes(this); /*0x7753c9*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'; /*0x7753d3*/
  if ( (a2 & 1) != 0 ) /*0x7753d9*/
    FormHeapFree((unsigned int)this); /*0x7753dc*/
  return this; /*0x7753e6*/
}
