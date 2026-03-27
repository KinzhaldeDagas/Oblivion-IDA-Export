NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<Script *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<Script *>::~NiTPointerList<Script *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
