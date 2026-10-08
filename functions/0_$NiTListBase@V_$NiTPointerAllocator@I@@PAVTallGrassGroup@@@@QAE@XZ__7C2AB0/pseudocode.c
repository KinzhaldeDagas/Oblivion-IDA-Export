NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *>::NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *>::`vftable'; /*0x7c2ab8*/
  if ( (a2 & 1) != 0 ) /*0x7c2abe*/
    FormHeapFree((unsigned int)this); /*0x7c2ac1*/
  return this; /*0x7c2acb*/
}
