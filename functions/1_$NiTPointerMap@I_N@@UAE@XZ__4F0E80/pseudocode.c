void __thiscall NiTPointerMap<unsigned int,bool>::~NiTPointerMap<unsigned int,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,bool>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,bool>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
