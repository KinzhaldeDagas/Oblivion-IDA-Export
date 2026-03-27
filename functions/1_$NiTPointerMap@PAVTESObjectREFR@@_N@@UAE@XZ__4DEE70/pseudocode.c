void __thiscall NiTPointerMap<TESObjectREFR *,bool>::~NiTPointerMap<TESObjectREFR *,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESObjectREFR *,bool>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectREFR *,bool>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
