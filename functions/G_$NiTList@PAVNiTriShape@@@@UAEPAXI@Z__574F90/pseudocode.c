NiTPointerList__BSImageSpaceShader *__thiscall NiTList<NiTriShape *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<NiTriShape *>::~NiTList<NiTriShape *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
