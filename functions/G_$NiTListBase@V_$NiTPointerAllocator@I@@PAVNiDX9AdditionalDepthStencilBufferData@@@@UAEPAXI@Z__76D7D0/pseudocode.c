_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiDX9AdditionalDepthStencilBufferData *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiDX9AdditionalDepthStencilBufferData *>::`vftable'; /*0x76d7d8*/
  if ( (a2 & 1) != 0 ) /*0x76d7de*/
    FormHeapFree((unsigned int)this); /*0x76d7e1*/
  return this; /*0x76d7eb*/
}
