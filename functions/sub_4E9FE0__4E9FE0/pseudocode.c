unsigned int *__thiscall sub_4E9FE0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESTerrainLODQuadRoot *>::`vftable'; /*0x4e9fe3*/
  NiTMap_Clear(this); /*0x4e9fe9*/
  FormHeapFree(*(this + 2)); /*0x4e9ff2*/
  if ( (a2 & 1) != 0 ) /*0x4e9fff*/
    FormHeapFree((unsigned int)this); /*0x4ea002*/
  return this; /*0x4ea00c*/
}
