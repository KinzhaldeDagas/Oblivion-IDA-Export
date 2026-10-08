unsigned int *__thiscall NiTMap<unsigned int,VertexDist>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTMap<unsigned int,VertexDist>::~NiTMap<unsigned int,VertexDist>(this); /*0x481dc3*/
  if ( (a2 & 1) != 0 ) /*0x481dcd*/
    FormHeapFree((unsigned int)this); /*0x481dd0*/
  return this; /*0x481dda*/
}
