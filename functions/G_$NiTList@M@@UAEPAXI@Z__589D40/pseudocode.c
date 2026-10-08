NiTPointerList__BSImageSpaceShader *__thiscall NiTList<float>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<float>::~NiTList<float>(this); /*0x589d43*/
  if ( (a2 & 1) != 0 ) /*0x589d4d*/
    FormHeapFree((unsigned int)this); /*0x589d50*/
  return this; /*0x589d5a*/
}
