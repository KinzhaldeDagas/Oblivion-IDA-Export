NiTPointerList__BSImageSpaceShader *__thiscall NiTList<BSStringT<char>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
