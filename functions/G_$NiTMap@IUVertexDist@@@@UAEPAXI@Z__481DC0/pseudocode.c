unsigned int *__thiscall NiTMap<unsigned int,VertexDist>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTMap<unsigned int,VertexDist>::~NiTMap<unsigned int,VertexDist>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
