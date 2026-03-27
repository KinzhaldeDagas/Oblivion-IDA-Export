void __thiscall NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<Actor *,PathingData *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,Actor *,PathingData *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
