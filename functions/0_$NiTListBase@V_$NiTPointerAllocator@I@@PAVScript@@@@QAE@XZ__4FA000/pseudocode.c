NiTListBase<NiTPointerAllocator<unsigned int>,Script *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,Script *>::NiTListBase<NiTPointerAllocator<unsigned int>,Script *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,Script *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,Script *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
