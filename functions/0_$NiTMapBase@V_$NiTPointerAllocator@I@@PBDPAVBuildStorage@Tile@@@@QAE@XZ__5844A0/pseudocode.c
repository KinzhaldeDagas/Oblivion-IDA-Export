unsigned int *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,Tile::BuildStorage *>::NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,Tile::BuildStorage *>(
        unsigned int *this,
        char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,Tile::BuildStorage *>::`vftable'; /*0x5844a3*/
  NiTMap_Clear(this); /*0x5844a9*/
  FormHeapFree(*(this + 2)); /*0x5844b2*/
  if ( (a2 & 1) != 0 ) /*0x5844bf*/
    FormHeapFree((unsigned int)this); /*0x5844c2*/
  return this; /*0x5844cc*/
}
