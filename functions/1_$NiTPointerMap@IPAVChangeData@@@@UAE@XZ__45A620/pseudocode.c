void __thiscall NiTPointerMap<unsigned int,ChangeData *>::~NiTPointerMap<unsigned int,ChangeData *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,ChangeData *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,ChangeData *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
