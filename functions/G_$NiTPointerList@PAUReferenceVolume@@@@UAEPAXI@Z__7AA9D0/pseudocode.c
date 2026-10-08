NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<ReferenceVolume *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<ReferenceVolume *>::~NiTPointerList<ReferenceVolume *>(this); /*0x7aa9d3*/
  if ( (a2 & 1) != 0 ) /*0x7aa9dd*/
    FormHeapFree((unsigned int)this); /*0x7aa9e0*/
  return this; /*0x7aa9ea*/
}
