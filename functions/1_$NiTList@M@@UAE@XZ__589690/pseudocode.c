void __thiscall NiTList<float>::~NiTList<float>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<float>,float>::`vftable'; /*0x5896b8*/
  NiTPointerList::FreeAllNodes(this); /*0x5896c6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<float>,float>::`vftable'; /*0x5896cb*/
}
