void __thiscall NiTPointerMap<int,TESGameSound *>::~NiTPointerMap<int,TESGameSound *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,TESGameSound *>::`vftable'; /*0x6abbc8*/
  NiTMap_Clear(this); /*0x6abbd6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESGameSound *>::`vftable'; /*0x6abbe5*/
  NiTMap_Clear(this); /*0x6abbeb*/
  FormHeapFree(*(this + 2)); /*0x6abbf4*/
}
