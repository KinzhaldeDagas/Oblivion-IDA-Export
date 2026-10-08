void __thiscall NiTPointerMap<unsigned int,TESFile *>::~NiTPointerMap<unsigned int,TESFile *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,TESFile *>::`vftable'; /*0x450788*/
  NiTMap_Clear(this); /*0x450796*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESFile *>::`vftable'; /*0x4507a5*/
  NiTMap_Clear(this); /*0x4507ab*/
  FormHeapFree(*(this + 2)); /*0x4507b4*/
}
