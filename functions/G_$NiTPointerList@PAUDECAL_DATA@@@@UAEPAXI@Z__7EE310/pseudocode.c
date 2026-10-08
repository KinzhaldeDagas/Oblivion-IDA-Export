NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<DECAL_DATA *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<DECAL_DATA *>::~NiTPointerList<DECAL_DATA *>(this); /*0x7ee313*/
  if ( (a2 & 1) != 0 ) /*0x7ee31d*/
    FormHeapFree((unsigned int)this); /*0x7ee320*/
  return this; /*0x7ee32a*/
}
