void __thiscall NiTPointerMap<char const *,NiAVObject *>::~NiTPointerMap<char const *,NiAVObject *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiAVObject *>::`vftable'; /*0x6c4ee8*/
  NiTMap_Clear(this); /*0x6c4ef6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiAVObject *>::`vftable'; /*0x6c4f05*/
  NiTMap_Clear(this); /*0x6c4f0b*/
  FormHeapFree(*(this + 2)); /*0x6c4f14*/
}
