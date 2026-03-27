void __thiscall NiTMap<unsigned int,VertexDist>::~NiTMap<unsigned int,VertexDist>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<unsigned int,VertexDist>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<VertexDist>,unsigned int,VertexDist>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
