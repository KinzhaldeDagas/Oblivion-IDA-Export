void __thiscall NiTPointerMap<int,TESObjectCELL *>::~NiTPointerMap<int,TESObjectCELL *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,TESObjectCELL *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESObjectCELL *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
