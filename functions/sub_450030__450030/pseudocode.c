void __thiscall sub_450030(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESFile *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
