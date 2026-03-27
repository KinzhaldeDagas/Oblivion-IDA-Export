NiTPointerList__BSImageSpaceShader *__thiscall NiTList<unsigned int>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<unsigned int>::~NiTList<unsigned int>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
