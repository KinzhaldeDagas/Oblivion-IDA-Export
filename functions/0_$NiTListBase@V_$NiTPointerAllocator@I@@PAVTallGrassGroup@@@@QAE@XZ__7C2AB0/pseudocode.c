NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *>::NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
