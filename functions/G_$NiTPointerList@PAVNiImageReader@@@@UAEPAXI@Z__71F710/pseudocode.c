NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiImageReader *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiImageReader *>::~NiTPointerList<NiImageReader *>(this); /*0x71f713*/
  if ( (a2 & 1) != 0 ) /*0x71f71d*/
    FormHeapFree((unsigned int)this); /*0x71f720*/
  return this; /*0x71f72a*/
}
