NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<unsigned int>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<unsigned int>::~NiTPointerList<unsigned int>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
