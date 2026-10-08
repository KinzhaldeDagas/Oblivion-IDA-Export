NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>::~NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>(this); /*0x7aaa13*/
  if ( (a2 & 1) != 0 ) /*0x7aaa1d*/
    FormHeapFree((unsigned int)this); /*0x7aaa20*/
  return this; /*0x7aaa2a*/
}
