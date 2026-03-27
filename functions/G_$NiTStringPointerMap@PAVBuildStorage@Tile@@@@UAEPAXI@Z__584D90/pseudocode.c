_DWORD *__thiscall NiTStringPointerMap<Tile::BuildStorage *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<Tile::BuildStorage *>::~NiTStringPointerMap<Tile::BuildStorage *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
