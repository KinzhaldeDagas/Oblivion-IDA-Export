NiTPointerList__BSImageSpaceShader *__thiscall NiTList<unsigned int>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<unsigned int>::~NiTList<unsigned int>(this); /*0x6ac003*/
  if ( (a2 & 1) != 0 ) /*0x6ac00d*/
    FormHeapFree((unsigned int)this); /*0x6ac010*/
  return this; /*0x6ac01a*/
}
