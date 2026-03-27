void __thiscall NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESObjectCELL *,bool>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectCELL *,bool>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
