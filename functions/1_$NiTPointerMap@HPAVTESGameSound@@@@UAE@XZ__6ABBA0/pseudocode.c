void __thiscall NiTPointerMap<int,TESGameSound *>::~NiTPointerMap<int,TESGameSound *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,TESGameSound *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESGameSound *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
