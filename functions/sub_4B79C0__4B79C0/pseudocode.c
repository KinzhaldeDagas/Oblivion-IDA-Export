unsigned int *__thiscall sub_4B79C0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,bool>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
