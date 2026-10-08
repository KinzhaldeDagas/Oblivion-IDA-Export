void __thiscall NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>::~NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'; /*0x7aa768*/
  NiTPointerList::FreeAllNodes(this); /*0x7aa776*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'; /*0x7aa77b*/
}
