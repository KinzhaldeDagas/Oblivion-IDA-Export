NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiGeometry *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiGeometry *>::~NiTPointerList<NiGeometry *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
