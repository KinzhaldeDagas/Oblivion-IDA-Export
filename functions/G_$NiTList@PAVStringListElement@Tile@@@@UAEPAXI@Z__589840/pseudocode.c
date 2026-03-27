NiTPointerList__BSImageSpaceShader *__thiscall NiTList<Tile::StringListElement *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<Tile::StringListElement *>::~NiTList<Tile::StringListElement *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
