void __thiscall NiTPointerMap<unsigned int,TESForm *>::~NiTPointerMap<unsigned int,TESForm *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,TESForm *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
