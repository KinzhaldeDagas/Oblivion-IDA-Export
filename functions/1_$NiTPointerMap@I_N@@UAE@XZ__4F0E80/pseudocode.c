void __thiscall NiTPointerMap<unsigned int,bool>::~NiTPointerMap<unsigned int,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,bool>::`vftable'; /*0x4f0ea8*/
  NiTMap_Clear(this); /*0x4f0eb6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,bool>::`vftable'; /*0x4f0ec5*/
  NiTMap_Clear(this); /*0x4f0ecb*/
  FormHeapFree(*(this + 2)); /*0x4f0ed4*/
}
