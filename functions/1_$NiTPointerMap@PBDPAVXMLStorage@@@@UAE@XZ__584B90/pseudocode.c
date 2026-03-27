void __thiscall NiTPointerMap<char const *,XMLStorage *>::~NiTPointerMap<char const *,XMLStorage *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,XMLStorage *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,XMLStorage *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
