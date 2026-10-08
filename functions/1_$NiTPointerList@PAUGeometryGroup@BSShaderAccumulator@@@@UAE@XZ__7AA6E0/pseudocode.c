void __thiscall NiTPointerList<BSShaderAccumulator::GeometryGroup *>::~NiTPointerList<BSShaderAccumulator::GeometryGroup *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable'; /*0x7aa708*/
  NiTPointerList::FreeAllNodes(this); /*0x7aa716*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable'; /*0x7aa71b*/
}
