NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<BSImageSpaceShader *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<BSImageSpaceShader *>::~NiTPointerList<BSImageSpaceShader *>(this); /*0x803673*/
  if ( (a2 & 1) != 0 ) /*0x80367d*/
    FormHeapFree((unsigned int)this); /*0x803680*/
  return this; /*0x80368a*/
}
