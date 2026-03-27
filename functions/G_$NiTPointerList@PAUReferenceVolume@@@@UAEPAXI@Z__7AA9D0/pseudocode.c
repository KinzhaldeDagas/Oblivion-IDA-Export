NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<ReferenceVolume *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<ReferenceVolume *>::~NiTPointerList<ReferenceVolume *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
