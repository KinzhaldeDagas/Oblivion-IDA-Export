void __thiscall NiTPointerMap<char const *,NiPointer<NiSequence>>::~NiTPointerMap<char const *,NiPointer<NiSequence>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiPointer<NiSequence>>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiSequence>>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
