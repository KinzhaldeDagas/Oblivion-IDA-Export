NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *>::NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
