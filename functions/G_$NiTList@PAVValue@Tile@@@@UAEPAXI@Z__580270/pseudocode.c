NiTPointerList__BSImageSpaceShader *__thiscall NiTList<Tile::Value *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<Tile::Value *>::~NiTList<Tile::Value *>(this); /*0x580273*/
  if ( (a2 & 1) != 0 ) /*0x58027d*/
    FormHeapFree((unsigned int)this); /*0x580280*/
  return this; /*0x58028a*/
}
