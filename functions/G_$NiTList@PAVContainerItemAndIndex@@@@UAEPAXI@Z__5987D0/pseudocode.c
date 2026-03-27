NiTPointerList__BSImageSpaceShader *__thiscall NiTList<ContainerItemAndIndex *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<ContainerItemAndIndex *>::~NiTList<ContainerItemAndIndex *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
