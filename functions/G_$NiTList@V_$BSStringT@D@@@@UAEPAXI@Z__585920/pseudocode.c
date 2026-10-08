NiTPointerList__BSImageSpaceShader *__thiscall NiTList<BSStringT<char>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>(this); /*0x585923*/
  if ( (a2 & 1) != 0 ) /*0x58592d*/
    FormHeapFree((unsigned int)this); /*0x585930*/
  return this; /*0x58593a*/
}
