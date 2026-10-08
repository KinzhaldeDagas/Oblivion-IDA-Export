NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *>::NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *>::`vftable'; /*0x7ecc48*/
  if ( (a2 & 1) != 0 ) /*0x7ecc4e*/
    FormHeapFree((unsigned int)this); /*0x7ecc51*/
  return this; /*0x7ecc5b*/
}
