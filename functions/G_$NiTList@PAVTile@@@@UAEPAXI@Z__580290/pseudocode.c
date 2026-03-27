NiTPointerList__BSImageSpaceShader *__thiscall NiTList<Tile *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<Tile *>::~NiTList<Tile *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
