NiTPointerList__BSImageSpaceShader *__thiscall NiTList<Tile::Value *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<Tile::Value *>::~NiTList<Tile::Value *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
