NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *>::NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *>::`vftable'; /*0x71e448*/
  if ( (a2 & 1) != 0 ) /*0x71e44e*/
    FormHeapFree((unsigned int)this); /*0x71e451*/
  return this; /*0x71e45b*/
}
