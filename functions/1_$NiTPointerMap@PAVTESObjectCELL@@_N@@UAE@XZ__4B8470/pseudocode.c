void __thiscall NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESObjectCELL *,bool>::`vftable'; /*0x4b8498*/
  NiTMap_Clear(this); /*0x4b84a6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectCELL *,bool>::`vftable'; /*0x4b84b5*/
  NiTMap_Clear(this); /*0x4b84bb*/
  FormHeapFree(*(this + 2)); /*0x4b84c4*/
}
