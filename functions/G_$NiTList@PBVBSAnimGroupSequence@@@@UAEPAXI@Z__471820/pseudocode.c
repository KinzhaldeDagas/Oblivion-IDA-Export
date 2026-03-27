NiTPointerList__BSImageSpaceShader *__thiscall NiTList<BSAnimGroupSequence const *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<BSAnimGroupSequence const *>::~NiTList<BSAnimGroupSequence const *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
