void __thiscall NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::~NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned char,BSSimpleList<LoadFormHeader *> *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
