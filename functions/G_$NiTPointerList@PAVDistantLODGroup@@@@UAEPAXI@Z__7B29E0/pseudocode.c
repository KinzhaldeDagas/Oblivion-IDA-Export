NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<DistantLODGroup *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<DistantLODGroup *>::~NiTPointerList<DistantLODGroup *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
