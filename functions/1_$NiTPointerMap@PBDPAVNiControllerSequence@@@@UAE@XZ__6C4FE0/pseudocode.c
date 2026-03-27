void __thiscall NiTPointerMap<char const *,NiControllerSequence *>::~NiTPointerMap<char const *,NiControllerSequence *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiControllerSequence *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiControllerSequence *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
