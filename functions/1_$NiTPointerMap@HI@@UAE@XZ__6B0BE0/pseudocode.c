void __thiscall NiTPointerMap<int,unsigned int>::~NiTPointerMap<int,unsigned int>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,unsigned int>::`vftable'; /*0x6b0c08*/
  NiTMap_Clear(this); /*0x6b0c16*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int>::`vftable'; /*0x6b0c25*/
  NiTMap_Clear(this); /*0x6b0c2b*/
  FormHeapFree(*(this + 2)); /*0x6b0c34*/
}
