unsigned int *__thiscall sub_77EA80(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,NiVBChip *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBChip *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
