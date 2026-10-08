NiTPointerList__BSImageSpaceShader *__thiscall NiTList<Tile::StringListElement *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<Tile::StringListElement *>::~NiTList<Tile::StringListElement *>(this); /*0x589843*/
  if ( (a2 & 1) != 0 ) /*0x58984d*/
    FormHeapFree((unsigned int)this); /*0x589850*/
  return this; /*0x58985a*/
}
