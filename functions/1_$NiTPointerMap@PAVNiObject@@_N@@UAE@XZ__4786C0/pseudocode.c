void __thiscall NiTPointerMap<NiObject *,bool>::~NiTPointerMap<NiObject *,bool>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<NiObject *,bool>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject *,bool>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
