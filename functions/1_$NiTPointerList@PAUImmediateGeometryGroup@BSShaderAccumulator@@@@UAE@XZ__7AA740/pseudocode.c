void __thiscall NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>::~NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable';
}
