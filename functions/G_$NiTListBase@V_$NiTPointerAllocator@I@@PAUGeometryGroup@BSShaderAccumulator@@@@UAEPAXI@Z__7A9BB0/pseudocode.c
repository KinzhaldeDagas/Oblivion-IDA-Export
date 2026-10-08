_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable'; /*0x7a9bb8*/
  if ( (a2 & 1) != 0 ) /*0x7a9bbe*/
    FormHeapFree((unsigned int)this); /*0x7a9bc1*/
  return this; /*0x7a9bcb*/
}
