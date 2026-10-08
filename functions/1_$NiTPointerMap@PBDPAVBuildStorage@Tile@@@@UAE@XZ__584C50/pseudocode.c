void __thiscall NiTPointerMap<char const *,Tile::BuildStorage *>::~NiTPointerMap<char const *,Tile::BuildStorage *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,Tile::BuildStorage *>::`vftable'; /*0x584c78*/
  NiTMap_Clear(this); /*0x584c86*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,Tile::BuildStorage *>::`vftable'; /*0x584c95*/
  NiTMap_Clear(this); /*0x584c9b*/
  FormHeapFree(*(this + 2)); /*0x584ca4*/
}
