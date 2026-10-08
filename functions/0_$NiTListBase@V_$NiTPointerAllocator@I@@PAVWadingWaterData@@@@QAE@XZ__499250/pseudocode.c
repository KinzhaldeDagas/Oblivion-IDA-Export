NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *>::NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *>::`vftable'; /*0x499258*/
  if ( (a2 & 1) != 0 ) /*0x49925e*/
    FormHeapFree((unsigned int)this); /*0x499261*/
  return this; /*0x49926b*/
}
