unsigned int *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,Tile::BuildStorage *>::NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,Tile::BuildStorage *>(
        unsigned int *this,
        char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,Tile::BuildStorage *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
