void __thiscall NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::~NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
