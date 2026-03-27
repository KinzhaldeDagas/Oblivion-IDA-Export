void __thiscall NiTPointerMap<unsigned int,float>::~NiTPointerMap<unsigned int,float>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,float>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,float>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
