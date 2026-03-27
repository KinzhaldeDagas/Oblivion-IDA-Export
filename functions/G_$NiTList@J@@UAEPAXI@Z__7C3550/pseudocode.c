NiTPointerList__BSImageSpaceShader *__thiscall NiTList<long>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<long>::~NiTList<long>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
