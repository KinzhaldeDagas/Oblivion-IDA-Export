unsigned int *__thiscall sub_47F8F0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<VertexDist>,unsigned int,VertexDist>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
