NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>::~NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>(this); /*0x7aa9f3*/
  if ( (a2 & 1) != 0 ) /*0x7aa9fd*/
    FormHeapFree((unsigned int)this); /*0x7aaa00*/
  return this; /*0x7aaa0a*/
}
