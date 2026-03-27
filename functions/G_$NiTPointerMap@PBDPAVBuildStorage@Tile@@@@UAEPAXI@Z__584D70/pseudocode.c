unsigned int *__thiscall NiTPointerMap<char const *,Tile::BuildStorage *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,Tile::BuildStorage *>::~NiTPointerMap<char const *,Tile::BuildStorage *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
