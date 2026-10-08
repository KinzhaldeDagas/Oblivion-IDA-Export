NiTPointerList__BSImageSpaceShader *__thiscall NiTList<Tile::TileTemplateItem *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>(this); /*0x58a083*/
  if ( (a2 & 1) != 0 ) /*0x58a08d*/
    FormHeapFree((unsigned int)this); /*0x58a090*/
  return this; /*0x58a09a*/
}
