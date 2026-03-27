void __thiscall NiTPointerMap<NiObject *,NiObject *>::~NiTPointerMap<NiObject *,NiObject *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<NiObject *,NiObject *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject *,NiObject *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
