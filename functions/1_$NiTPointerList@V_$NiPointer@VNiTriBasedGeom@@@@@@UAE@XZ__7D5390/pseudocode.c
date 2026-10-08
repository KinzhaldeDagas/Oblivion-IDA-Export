void __thiscall NiTPointerList<NiPointer<NiTriBasedGeom>>::~NiTPointerList<NiPointer<NiTriBasedGeom>>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>>::`vftable'; /*0x7d53b8*/
  NiTPointerList::FreeAllNodes(this); /*0x7d53c6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>>::`vftable'; /*0x7d53cb*/
}
