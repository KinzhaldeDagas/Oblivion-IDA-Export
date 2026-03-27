NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
