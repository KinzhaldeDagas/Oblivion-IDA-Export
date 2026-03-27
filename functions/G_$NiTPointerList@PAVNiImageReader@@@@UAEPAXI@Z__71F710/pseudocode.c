NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiImageReader *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiImageReader *>::~NiTPointerList<NiImageReader *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
