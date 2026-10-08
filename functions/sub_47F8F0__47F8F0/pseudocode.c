unsigned int *__thiscall sub_47F8F0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<VertexDist>,unsigned int,VertexDist>::`vftable'; /*0x47f8f3*/
  NiTMap_Clear(this); /*0x47f8f9*/
  FormHeapFree(*(this + 2)); /*0x47f902*/
  if ( (a2 & 1) != 0 ) /*0x47f90f*/
    FormHeapFree((unsigned int)this); /*0x47f912*/
  return this; /*0x47f91c*/
}
