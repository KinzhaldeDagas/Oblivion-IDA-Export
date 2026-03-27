void __thiscall NiTPointerMap<TESForm *,bool>::~NiTPointerMap<TESForm *,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESForm *,bool>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESForm *,bool>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
