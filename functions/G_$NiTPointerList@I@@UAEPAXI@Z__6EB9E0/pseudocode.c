NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<unsigned int>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<unsigned int>::~NiTPointerList<unsigned int>(this); /*0x6eb9e3*/
  if ( (a2 & 1) != 0 ) /*0x6eb9ed*/
    FormHeapFree((unsigned int)this); /*0x6eb9f0*/
  return this; /*0x6eb9fa*/
}
