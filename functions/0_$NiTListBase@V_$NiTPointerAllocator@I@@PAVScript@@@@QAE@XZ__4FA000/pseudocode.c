NiTListBase<NiTPointerAllocator<unsigned int>,Script *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,Script *>::NiTListBase<NiTPointerAllocator<unsigned int>,Script *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,Script *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,Script *>::`vftable'; /*0x4fa008*/
  if ( (a2 & 1) != 0 ) /*0x4fa00e*/
    FormHeapFree((unsigned int)this); /*0x4fa011*/
  return this; /*0x4fa01b*/
}
