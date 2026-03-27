void __thiscall NiTPointerMap<char const *,NiAVObject *>::~NiTPointerMap<char const *,NiAVObject *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiAVObject *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiAVObject *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
