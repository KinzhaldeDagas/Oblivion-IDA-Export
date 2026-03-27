NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>::~NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
