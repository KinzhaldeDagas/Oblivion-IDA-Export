void __thiscall NiTPointerMap<char const *,XMLStorage *>::~NiTPointerMap<char const *,XMLStorage *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,XMLStorage *>::`vftable'; /*0x584bb8*/
  NiTMap_Clear(this); /*0x584bc6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *>::`vftable'; /*0x584bd5*/
  NiTMap_Clear(this); /*0x584bdb*/
  FormHeapFree(*(this + 2)); /*0x584be4*/
}
