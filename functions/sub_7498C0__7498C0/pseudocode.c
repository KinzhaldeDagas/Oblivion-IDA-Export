NiTPointerList__BSImageSpaceShader *__thiscall sub_7498C0(NiTPointerList__BSImageSpaceShader *this, char a2)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiPSysModifier>>::`vftable'; /*0x7498c3*/
  NiTPointerList::FreeAllNodes(this); /*0x7498c9*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiPSysModifier>>::`vftable'; /*0x7498d3*/
  if ( (a2 & 1) != 0 ) /*0x7498d9*/
    FormHeapFree((unsigned int)this); /*0x7498dc*/
  return this; /*0x7498e6*/
}
