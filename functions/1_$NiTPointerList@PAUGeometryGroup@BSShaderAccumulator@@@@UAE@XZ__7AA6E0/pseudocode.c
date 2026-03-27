void __thiscall NiTPointerList<BSShaderAccumulator::GeometryGroup *>::~NiTPointerList<BSShaderAccumulator::GeometryGroup *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable';
}
