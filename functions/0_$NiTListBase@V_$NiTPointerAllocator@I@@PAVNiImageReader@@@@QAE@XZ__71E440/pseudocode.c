NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *>::NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,NiImageReader *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
