NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int>::NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
