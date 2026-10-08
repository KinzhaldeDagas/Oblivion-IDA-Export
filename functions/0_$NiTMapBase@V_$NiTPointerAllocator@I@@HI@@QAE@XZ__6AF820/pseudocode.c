NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int>::NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int>::`vftable'; /*0x6af823*/
  NiTMap_Clear(this); /*0x6af829*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x6af832*/
  if ( (a2 & 1) != 0 ) /*0x6af83f*/
    FormHeapFree((unsigned int)this); /*0x6af842*/
  return this; /*0x6af84c*/
}
