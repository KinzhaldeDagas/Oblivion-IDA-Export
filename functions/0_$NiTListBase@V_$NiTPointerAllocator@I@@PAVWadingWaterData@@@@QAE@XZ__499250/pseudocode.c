NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *>::NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,WadingWaterData *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
