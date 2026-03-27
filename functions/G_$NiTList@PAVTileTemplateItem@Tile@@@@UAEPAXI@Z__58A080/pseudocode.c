NiTPointerList__BSImageSpaceShader *__thiscall NiTList<Tile::TileTemplateItem *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
