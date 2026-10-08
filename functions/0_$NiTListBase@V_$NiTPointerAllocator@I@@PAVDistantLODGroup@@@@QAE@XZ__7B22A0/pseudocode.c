NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *>::NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *>::`vftable'; /*0x7b22a8*/
  if ( (a2 & 1) != 0 ) /*0x7b22ae*/
    FormHeapFree((unsigned int)this); /*0x7b22b1*/
  return this; /*0x7b22bb*/
}
