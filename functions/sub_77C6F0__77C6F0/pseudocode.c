unsigned int *__thiscall sub_77C6F0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiShader *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
