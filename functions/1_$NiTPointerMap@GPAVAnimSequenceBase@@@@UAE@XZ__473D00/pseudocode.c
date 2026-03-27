void __thiscall NiTPointerMap<unsigned short,AnimSequenceBase *>::~NiTPointerMap<unsigned short,AnimSequenceBase *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned short,AnimSequenceBase *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned short,AnimSequenceBase *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
