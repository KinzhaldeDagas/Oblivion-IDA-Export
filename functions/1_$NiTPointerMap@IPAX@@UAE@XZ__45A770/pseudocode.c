void __thiscall NiTPointerMap<unsigned int,void *>::~NiTPointerMap<unsigned int,void *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,void *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,void *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
