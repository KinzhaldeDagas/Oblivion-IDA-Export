void __thiscall NiTPointerList<NiPointer<NiTriBasedGeom>>::~NiTPointerList<NiPointer<NiTriBasedGeom>>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiTriBasedGeom>>::`vftable';
}
