void __thiscall NiTPointerMap<int,bool>::~NiTPointerMap<int,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,bool>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,bool>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
