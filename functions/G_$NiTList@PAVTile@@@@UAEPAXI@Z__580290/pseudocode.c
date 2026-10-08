NiTPointerList__BSImageSpaceShader *__thiscall NiTList<Tile *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<Tile *>::~NiTList<Tile *>(this); /*0x580293*/
  if ( (a2 & 1) != 0 ) /*0x58029d*/
    FormHeapFree((unsigned int)this); /*0x5802a0*/
  return this; /*0x5802aa*/
}
