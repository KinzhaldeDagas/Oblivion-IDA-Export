void __thiscall NiTPointerMap<unsigned int,float>::~NiTPointerMap<unsigned int,float>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,float>::`vftable'; /*0x72e1b8*/
  NiTMap_Clear(this); /*0x72e1c6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,float>::`vftable'; /*0x72e1d5*/
  NiTMap_Clear(this); /*0x72e1db*/
  FormHeapFree(*(this + 2)); /*0x72e1e4*/
}
