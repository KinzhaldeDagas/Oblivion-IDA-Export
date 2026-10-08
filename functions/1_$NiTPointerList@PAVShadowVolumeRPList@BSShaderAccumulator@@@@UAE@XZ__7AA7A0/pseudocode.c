void __thiscall NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>::~NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'; /*0x7aa7c8*/
  NiTPointerList::FreeAllNodes(this); /*0x7aa7d6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'; /*0x7aa7db*/
}
