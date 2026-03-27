void __thiscall sub_45A580(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned char,BSSimpleList<LoadFormHeader *> *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
