void __thiscall NiTPointerMap<int,TESObjectCELL *>::~NiTPointerMap<int,TESObjectCELL *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,TESObjectCELL *>::`vftable'; /*0x4f1d98*/
  NiTMap_Clear(this); /*0x4f1da6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESObjectCELL *>::`vftable'; /*0x4f1db5*/
  NiTMap_Clear(this); /*0x4f1dbb*/
  FormHeapFree(*(this + 2)); /*0x4f1dc4*/
}
