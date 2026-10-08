_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ShadowVolumeRPList *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'; /*0x7a9bf8*/
  if ( (a2 & 1) != 0 ) /*0x7a9bfe*/
    FormHeapFree((unsigned int)this); /*0x7a9c01*/
  return this; /*0x7a9c0b*/
}
