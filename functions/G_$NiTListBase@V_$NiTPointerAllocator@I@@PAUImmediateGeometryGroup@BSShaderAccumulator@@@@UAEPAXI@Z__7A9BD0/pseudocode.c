_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ImmediateGeometryGroup *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'; /*0x7a9bd8*/
  if ( (a2 & 1) != 0 ) /*0x7a9bde*/
    FormHeapFree((unsigned int)this); /*0x7a9be1*/
  return this; /*0x7a9beb*/
}
