void __thiscall NiTPointerMap<TESForm *,bool>::~NiTPointerMap<TESForm *,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESForm *,bool>::`vftable'; /*0x44d908*/
  NiTMap_Clear(this); /*0x44d916*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESForm *,bool>::`vftable'; /*0x44d925*/
  NiTMap_Clear(this); /*0x44d92b*/
  FormHeapFree(*(this + 2)); /*0x44d934*/
}
