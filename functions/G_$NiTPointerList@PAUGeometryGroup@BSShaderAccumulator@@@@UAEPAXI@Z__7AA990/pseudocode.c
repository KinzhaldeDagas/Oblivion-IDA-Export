NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<BSShaderAccumulator::GeometryGroup *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<BSShaderAccumulator::GeometryGroup *>::~NiTPointerList<BSShaderAccumulator::GeometryGroup *>(this); /*0x7aa993*/
  if ( (a2 & 1) != 0 ) /*0x7aa99d*/
    FormHeapFree((unsigned int)this); /*0x7aa9a0*/
  return this; /*0x7aa9aa*/
}
