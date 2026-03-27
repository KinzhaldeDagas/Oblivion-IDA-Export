NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiAVObject *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiAVObject *>::~NiTPointerList<NiAVObject *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
