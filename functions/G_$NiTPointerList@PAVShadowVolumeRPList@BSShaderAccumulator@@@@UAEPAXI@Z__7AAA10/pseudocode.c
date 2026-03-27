NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>::~NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
