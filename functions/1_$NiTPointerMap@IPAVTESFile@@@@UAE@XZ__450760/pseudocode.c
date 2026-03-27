void __thiscall NiTPointerMap<unsigned int,TESFile *>::~NiTPointerMap<unsigned int,TESFile *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,TESFile *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESFile *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
