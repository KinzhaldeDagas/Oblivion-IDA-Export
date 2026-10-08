void __thiscall NiTPointerMap<unsigned int,void *>::~NiTPointerMap<unsigned int,void *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,void *>::`vftable'; /*0x45a798*/
  NiTMap_Clear(this); /*0x45a7a6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,void *>::`vftable'; /*0x45a7b5*/
  NiTMap_Clear(this); /*0x45a7bb*/
  FormHeapFree(*(this + 2)); /*0x45a7c4*/
}
