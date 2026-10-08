NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::`vftable'; /*0x4ca1b8*/
  if ( (a2 & 1) != 0 ) /*0x4ca1be*/
    FormHeapFree((unsigned int)this); /*0x4ca1c1*/
  return this; /*0x4ca1cb*/
}
