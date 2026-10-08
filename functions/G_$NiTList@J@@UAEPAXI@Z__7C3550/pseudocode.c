NiTPointerList__BSImageSpaceShader *__thiscall NiTList<long>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<long>::~NiTList<long>(this); /*0x7c3553*/
  if ( (a2 & 1) != 0 ) /*0x7c355d*/
    FormHeapFree((unsigned int)this); /*0x7c3560*/
  return this; /*0x7c356a*/
}
