void __thiscall NiTPointerMap<int,NiPointer<NiAVObject>>::~NiTPointerMap<int,NiPointer<NiAVObject>>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<int,NiPointer<NiAVObject>>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,NiPointer<NiAVObject>>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
