void __thiscall NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESPathGridPoint *> *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
