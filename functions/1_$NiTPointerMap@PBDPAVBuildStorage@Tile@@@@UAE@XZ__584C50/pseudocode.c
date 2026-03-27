void __thiscall NiTPointerMap<char const *,Tile::BuildStorage *>::~NiTPointerMap<char const *,Tile::BuildStorage *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,Tile::BuildStorage *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,Tile::BuildStorage *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
