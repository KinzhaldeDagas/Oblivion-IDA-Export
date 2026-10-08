void __thiscall NiTMap<unsigned int,VertexDist>::~NiTMap<unsigned int,VertexDist>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<unsigned int,VertexDist>::`vftable'; /*0x481848*/
  NiTMap_Clear(this); /*0x481856*/
  *this = (unsigned int)&NiTMapBase<DFALL<VertexDist>,unsigned int,VertexDist>::`vftable'; /*0x481865*/
  NiTMap_Clear(this); /*0x48186b*/
  FormHeapFree(*(this + 2)); /*0x481874*/
}
