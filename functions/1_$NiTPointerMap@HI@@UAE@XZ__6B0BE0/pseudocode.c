void __thiscall NiTPointerMap<int,unsigned int>::~NiTPointerMap<int,unsigned int>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,unsigned int>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,unsigned int>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
